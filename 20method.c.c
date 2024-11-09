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
struct sCurrentNode
{
    int sline;
    char* sname;
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
    _Bool no_infference_method_generics;
    _Bool recursive;
    struct sFun* fun;
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
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
char* parse_attribute(struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info);
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
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);
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
    /* U11 */__right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
char* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value118=__builtin_string("sCurrentNode")));
    /* U11 */__right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value119 = (void*)0;
char* class_name_66;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct sClass* current_stack_67;
struct sVarTable* vtable_68;
struct map$2charphsVarph* o2_saved_69;
char* it_72;
char* key_75;
struct sVar* value_76;
void* __right_value157 = (void*)0;
struct sType* type2_92;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct tuple2$2charphsTypeph* item_111;
void* __right_value161 = (void*)0;
struct sType* type3_112;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct tuple2$2charphsTypeph* item2_115;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct map$2charphsVarph* o2_saved_167;
char* it_168;
char* key_169;
struct sVar* value_170;
void* __right_value176 = (void*)0;
struct sType* type2_171;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct tuple2$2charphsTypeph* item_172;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct CVALUE* come_value_173;
void* __right_value181 = (void*)0;
char* __dec_obj87;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
struct sType* __dec_obj88;
_Bool __result123__;
    info->current_stack_num++;
    class_name_66=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_67=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "./common.h", 433, "sClass")),class_name_66,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_68=info->lv_table;
    while(vtable_68) {
        for(        o2_saved_69=(struct map$2charphsVarph*)come_increment_ref_count((vtable_68->mVars)),it_72=map$2charphsVarph_begin((o2_saved_69));        !map$2charphsVarph_end((o2_saved_69));        it_72=map$2charphsVarph_next((o2_saved_69))        ){
            key_75=it_72;
            value_76=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_68->mVars,key_75), "./common.h", 440, 0));
            type2_92=(struct sType*)come_increment_ref_count(sType_clone(value_76->mType));
            type2_92->mPointerNum++;
            item_111=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 446, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_76->mCValueName)),(struct sType*)come_increment_ref_count(type2_92)));
            if(            value_76->mCValueName!=((void*)0)) {
                if(                strcmp(value_76->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_76->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_76->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_76->mType->mClass->mName,"va_list")||string_operator_equals(value_76->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_92->mArrayNum)==1) {
                    type3_112=(struct sType*)come_increment_ref_count(sType_clone(type2_92));
                    list$1sNodeph_reset(type3_112->mArrayNum);
                    type3_112->mPointerNum++;
                    type3_112->mOriginIsArray=(_Bool)1;
                    item2_115=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 466, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_76->mCValueName)),(struct sType*)come_increment_ref_count(type3_112)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_67->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item2_115)));
                    value_76->mType->mOriginIsArray=(_Bool)1;
                    /*i*/come_call_finalizer3(type3_112,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(item2_115,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_67->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item_111)));
                }
            }
            /*i*/come_call_finalizer3(type2_92,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(item_111,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_69,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_68=vtable_68->mParent;
    }
    output_struct(current_stack_67,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_66),(struct sClass*)come_increment_ref_count(current_stack_67));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_66,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_66);
    vtable_68=info->lv_table;
    while(vtable_68) {
        for(        o2_saved_167=(struct map$2charphsVarph*)come_increment_ref_count((vtable_68->mVars)),it_168=map$2charphsVarph_begin((o2_saved_167));        !map$2charphsVarph_end((o2_saved_167));        it_168=map$2charphsVarph_next((o2_saved_167))        ){
            key_169=it_168;
            value_170=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_68->mVars,key_169), "./common.h", 491, 1));
            type2_171=(struct sType*)come_increment_ref_count(sType_clone(value_170->mType));
            item_172=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 495, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(value_170->mCValueName),(struct sType*)come_increment_ref_count(type2_171)));
            if(            value_170->mCValueName!=((void*)0)) {
                if(                strcmp(value_170->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_170->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_170->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_170->mType->mClass->mName,"va_list")||string_operator_equals(value_170->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_171->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_170->mCValueName,value_170->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_170->mCValueName,value_170->mCValueName);
                    }
                }
            }
            /*i*/come_call_finalizer3(type2_171,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(item_172,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_167,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_68=vtable_68->mParent;
    }
    come_value_173=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "./common.h", 524, "CVALUE"))));
    __dec_obj87=come_value_173->c_value;
    come_value_173->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    /*G*/ __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj88=come_value_173->type;
    come_value_173->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "./common.h", 527, "sType")),class_name_66,(_Bool)0,info));
    come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_173->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_173->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_173));
    __result123__ = (_Bool)1;
    /* U13 */class_name_66 = come_decrement_ref_count2(class_name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(current_stack_67,sClass_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result123__;
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

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_70;
char* __result68__;
char* __result69__;
char* result_71;
char* __result70__;
result_70 = (void*)0;
result_71 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_70,0,sizeof(char*));
        __result68__ = gComeFunResultObject = __result_obj__ = result_70;
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result69__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    memset(&result_71,0,sizeof(char*));
    __result70__ = gComeFunResultObject = __result_obj__ = result_71;
    gComeFunResultObject = (void*)0;
    return __result70__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_73;
char* __result71__;
char* __result72__;
char* result_74;
char* __result73__;
result_73 = (void*)0;
result_74 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_73,0,sizeof(char*));
        __result71__ = gComeFunResultObject = __result_obj__ = result_73;
        gComeFunResultObject = (void*)0;
        return __result71__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result72__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    memset(&result_74,0,sizeof(char*));
    __result73__ = gComeFunResultObject = __result_obj__ = result_74;
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_77;
unsigned int hash_78;
unsigned int it_79;
struct sVar* __result74__;
struct sVar* __result75__;
struct sVar* __result76__;
struct sVar* __result77__;
default_value_77 = (void*)0;
    memset(&default_value_77,0,sizeof(struct sVar*));
    hash_78=string_get_hash_key(((char*)key))%self->size;
    it_79=hash_78;
    while((_Bool)1) {
        if(        self->item_existance[it_79]) {
            if(            string_equals(self->keys[it_79],key)) {
                __result74__ = gComeFunResultObject = __result_obj__ = self->items[it_79];
                /*i*/come_call_finalizer3(default_value_77,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result74__;
            }
            it_79++;
            if(            it_79>=self->size) {
                it_79=0;
            }
            else if(            it_79==hash_78) {
                __result75__ = gComeFunResultObject = __result_obj__ = default_value_77;
                /*i*/come_call_finalizer3(default_value_77,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result75__;
            }
        }
        else {
            __result76__ = gComeFunResultObject = __result_obj__ = default_value_77;
            /*i*/come_call_finalizer3(default_value_77,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result76__;
        }
    }
    __result77__ = gComeFunResultObject = __result_obj__ = default_value_77;
    /*i*/come_call_finalizer3(default_value_77,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj17;
char* __dec_obj18;
struct sType* __dec_obj19;
char* __dec_obj40;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj17=self->mName;
            /*G*/ __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj18=self->mCValueName;
            /*G*/ __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj19=self->mType;
            come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj40=self->mFunName;
            /*G*/ __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
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
struct list_item$1sTypeph* it_80;
struct list_item$1sTypeph* prev_it_81;
    it_80=self->head;
    while(it_80!=((void*)0)) {
        prev_it_81=it_80;
        it_80=it_80->next;
        /*i*/come_call_finalizer3(prev_it_81,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_82;
struct list_item$1sTypeph* prev_it_83;
    it_82=self->head;
    while(it_82!=((void*)0)) {
        prev_it_83=it_82;
        it_82=it_82->next;
        /*i*/come_call_finalizer3(prev_it_83,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_84;
struct list_item$1sNodeph* prev_it_85;
    it_84=self->head;
    while(it_84!=((void*)0)) {
        prev_it_85=it_84;
        it_84=it_84->next;
        /*i*/come_call_finalizer3(prev_it_85,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_86;
struct list_item$1sNodeph* prev_it_87;
    it_86=self->head;
    while(it_86!=((void*)0)) {
        prev_it_87=it_86;
        it_86=it_86->next;
        /*i*/come_call_finalizer3(prev_it_87,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_88;
struct list_item$1charph* prev_it_89;
    it_88=self->head;
    while(it_88!=((void*)0)) {
        prev_it_89=it_88;
        it_88=it_88->next;
        /*i*/come_call_finalizer3(prev_it_89,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* it_90;
struct list_item$1charph* prev_it_91;
    it_90=self->head;
    while(it_90!=((void*)0)) {
        prev_it_91=it_90;
        it_90=it_90->next;
        /*i*/come_call_finalizer3(prev_it_91,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result78__;
void* __right_value122 = (void*)0;
struct sType* result_93;
void* __right_value125 = (void*)0;
struct tuple1$1sTypeph* __dec_obj43;
void* __right_value126 = (void*)0;
struct tuple1$1sTypeph* __dec_obj44;
void* __right_value127 = (void*)0;
struct tuple1$1sTypeph* __dec_obj45;
void* __right_value128 = (void*)0;
char* __dec_obj46;
void* __right_value135 = (void*)0;
struct list$1sTypeph* __dec_obj50;
void* __right_value143 = (void*)0;
struct list$1sNodeph* __dec_obj54;
void* __right_value144 = (void*)0;
struct list$1sTypeph* __dec_obj55;
void* __right_value151 = (void*)0;
struct list$1charph* __dec_obj59;
void* __right_value152 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value153 = (void*)0;
struct sNode* __dec_obj61;
void* __right_value154 = (void*)0;
struct sNode* __dec_obj62;
void* __right_value155 = (void*)0;
char* __dec_obj63;
void* __right_value156 = (void*)0;
char* __dec_obj64;
struct sType* __result95__;
    if(    self==(void*)0) {
        __result78__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result78__;
    }
    result_93=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_93->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj43=result_93->mNoSolvedGenericsType;
        result_93->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj43,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj44=result_93->mOriginalLoadVarType;
        result_93->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj44,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj45=result_93->mNoExceptionType;
        result_93->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        come_call_finalizer3(__dec_obj45,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj46=result_93->mGenericsName;
        result_93->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj50=result_93->mGenericsTypes;
        result_93->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj50,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj54=result_93->mArrayNum;
        result_93->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj54,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_93->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj55=result_93->mParamTypes;
        result_93->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj55,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj59=result_93->mParamNames;
        result_93->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj59,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj60=result_93->mResultType;
        result_93->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_93->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj61=result_93->mAlignas;
        result_93->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_93->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_93->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_93->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_93->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_93->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_93->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_93->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_93->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_93->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_93->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_93->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_93->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_93->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_93->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_93->mDummyHeap=self->mDummyHeap;
    }
    if(    self!=((void*)0)) {
        result_93->mDelegate=self->mDelegate;
    }
    if(    self!=((void*)0)) {
        result_93->mShare=self->mShare;
    }
    if(    self!=((void*)0)) {
        result_93->mClone=self->mClone;
    }
    if(    self!=((void*)0)) {
        result_93->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_93->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_93->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_93->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_93->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_93->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_93->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_93->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_93->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj62=result_93->mSizeNum;
        result_93->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_93->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)) {
        result_93->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(    self!=((void*)0)) {
        result_93->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj63=result_93->mOriginalTypeName;
        result_93->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_93->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_93->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_93->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_93->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_93->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_93->mComeMemCore=self->mComeMemCore;
    }
    if(    self!=((void*)0)) {
        result_93->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_93->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_93->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj64=result_93->mAsmName;
        result_93->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_93->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_93->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_93->mNoNumberArray=self->mNoNumberArray;
    }
    if(    self!=((void*)0)) {
        result_93->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_93->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_93->mOriginIsArray=self->mOriginIsArray;
    }
    __result95__ = gComeFunResultObject = __result_obj__ = result_93;
    /*i*/come_call_finalizer3(result_93,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result79__;
void* __right_value123 = (void*)0;
struct tuple1$1sTypeph* result_94;
void* __right_value124 = (void*)0;
struct sType* __dec_obj41;
struct tuple1$1sTypeph* __result80__;
    if(    self==(void*)0) {
        __result79__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    result_94=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj41=result_94->v1;
        result_94->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result80__ = gComeFunResultObject = __result_obj__ = result_94;
    /*i*/come_call_finalizer3(result_94,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj42;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj42=self->v1;
            come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result81__;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct list$1sTypeph* result_95;
struct list_item$1sTypeph* it_96;
void* __right_value134 = (void*)0;
struct list$1sTypeph* __result84__;
    if(    self==((void*)0)) {
        __result81__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result81__;
    }
    result_95=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 139, "list$1sTypeph"))));
    it_96=self->head;
    while(it_96!=((void*)0)) {
        list$1sTypeph_add(result_95,(struct sType*)come_increment_ref_count(sType_clone(it_96->item)));
        it_96=it_96->next;
    }
    __result84__ = gComeFunResultObject = __result_obj__ = result_95;
    /*i*/come_call_finalizer3(result_95,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value131 = (void*)0;
struct list_item$1sTypeph* litem_97;
struct sType* __dec_obj47;
void* __right_value132 = (void*)0;
struct list_item$1sTypeph* litem_98;
struct sType* __dec_obj48;
void* __right_value133 = (void*)0;
struct list_item$1sTypeph* litem_99;
struct sType* __dec_obj49;
struct list$1sTypeph* __result83__;
    if(    self->len==0) {
        litem_97=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value131=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 153, "list_item$1sTypeph"))));
        litem_97->prev=((void*)0);
        litem_97->next=((void*)0);
        __dec_obj47=litem_97->item;
        litem_97->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_97;
        self->head=litem_97;
    }
    else if(    self->len==1) {
        litem_98=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value132=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 163, "list_item$1sTypeph"))));
        litem_98->prev=self->head;
        litem_98->next=((void*)0);
        __dec_obj48=litem_98->item;
        litem_98->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_98;
        self->head->next=litem_98;
    }
    else {
        litem_99=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value133=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 173, "list_item$1sTypeph"))));
        litem_99->prev=self->tail;
        litem_99->next=((void*)0);
        __dec_obj49=litem_99->item;
        litem_99->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_99;
        self->tail=litem_99;
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
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
struct list$1sNodeph* result_100;
struct list_item$1sNodeph* it_101;
void* __right_value142 = (void*)0;
struct list$1sNodeph* __result90__;
    if(    self==((void*)0)) {
        __result85__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result85__;
    }
    result_100=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 139, "list$1sNodeph"))));
    it_101=self->head;
    while(it_101!=((void*)0)) {
        list$1sNodeph_add(result_100,(struct sNode*)come_increment_ref_count(sNode_clone(it_101->item)));
        it_101=it_101->next;
    }
    __result90__ = gComeFunResultObject = __result_obj__ = result_100;
    /*i*/come_call_finalizer3(result_100,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value138 = (void*)0;
struct list_item$1sNodeph* litem_102;
struct sNode* __dec_obj51;
void* __right_value139 = (void*)0;
struct list_item$1sNodeph* litem_103;
struct sNode* __dec_obj52;
void* __right_value140 = (void*)0;
struct list_item$1sNodeph* litem_104;
struct sNode* __dec_obj53;
struct list$1sNodeph* __result87__;
    if(    self->len==0) {
        litem_102=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value138=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 153, "list_item$1sNodeph"))));
        litem_102->prev=((void*)0);
        litem_102->next=((void*)0);
        __dec_obj51=litem_102->item;
        litem_102->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_102;
        self->head=litem_102;
    }
    else if(    self->len==1) {
        litem_103=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value139=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 163, "list_item$1sNodeph"))));
        litem_103->prev=self->head;
        litem_103->next=((void*)0);
        __dec_obj52=litem_103->item;
        litem_103->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_103;
        self->head->next=litem_103;
    }
    else {
        litem_104=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value140=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 173, "list_item$1sNodeph"))));
        litem_104->prev=self->tail;
        litem_104->next=((void*)0);
        __dec_obj53=litem_104->item;
        litem_104->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_104;
        self->tail=litem_104;
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
void* __right_value141 = (void*)0;
struct sNode* result_105;
struct sNode* __result89__;
    if(    self==(void*)0) {
        __result88__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result88__;
    }
    result_105=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_105->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_105->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_105->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_105->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_105->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_105->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_105->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_105->kind=self->kind;
    }
    __result89__ = gComeFunResultObject = __result_obj__ = result_105;
    if(result_105) { result_105 = come_decrement_ref_count2(result_105, ((struct sNode*)result_105)->finalize, ((struct sNode*)result_105)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result91__;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
struct list$1charph* result_106;
struct list_item$1charph* it_107;
void* __right_value150 = (void*)0;
struct list$1charph* __result94__;
    if(    self==((void*)0)) {
        __result91__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result91__;
    }
    result_106=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 139, "list$1charph"))));
    it_107=self->head;
    while(it_107!=((void*)0)) {
        list$1charph_add(result_106,(char*)come_increment_ref_count(string_clone(it_107->item)));
        it_107=it_107->next;
    }
    __result94__ = gComeFunResultObject = __result_obj__ = result_106;
    /*i*/come_call_finalizer3(result_106,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value147 = (void*)0;
struct list_item$1charph* litem_108;
char* __dec_obj56;
void* __right_value148 = (void*)0;
struct list_item$1charph* litem_109;
char* __dec_obj57;
void* __right_value149 = (void*)0;
struct list_item$1charph* litem_110;
char* __dec_obj58;
struct list$1charph* __result93__;
    if(    self->len==0) {
        litem_108=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value147=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 153, "list_item$1charph"))));
        litem_108->prev=((void*)0);
        litem_108->next=((void*)0);
        __dec_obj56=litem_108->item;
        litem_108->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_108;
        self->head=litem_108;
    }
    else if(    self->len==1) {
        litem_109=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value148=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 163, "list_item$1charph"))));
        litem_109->prev=self->head;
        litem_109->next=((void*)0);
        __dec_obj57=litem_109->item;
        litem_109->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_109;
        self->head->next=litem_109;
    }
    else {
        litem_110=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value149=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 173, "list_item$1charph"))));
        litem_110->prev=self->tail;
        litem_110->next=((void*)0);
        __dec_obj58=litem_110->item;
        litem_110->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_110;
        self->tail=litem_110;
    }
    self->len++;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj65;
struct sType* __dec_obj66;
struct tuple2$2charphsTypeph* __result96__;
    __dec_obj65=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj66=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_113;
struct list_item$1sNodeph* prev_it_114;
struct list$1sNodeph* __result97__;
    it_113=self->head;
    while(it_113!=((void*)0)) {
        prev_it_114=it_113;
        it_113=it_113->next;
        /*i*/come_call_finalizer3(prev_it_114,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value165 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_116;
struct tuple2$2charphsTypeph* __dec_obj69;
void* __right_value166 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_117;
struct tuple2$2charphsTypeph* __dec_obj72;
void* __right_value167 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_118;
struct tuple2$2charphsTypeph* __dec_obj75;
struct list$1tuple2$2charphsTypephph* __result98__;
    if(    self->len==0) {
        litem_116=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value165=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 223, "list_item$1tuple2$2charphsTypephph"))));
        litem_116->prev=((void*)0);
        litem_116->next=((void*)0);
        __dec_obj69=litem_116->item;
        litem_116->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_116;
        self->head=litem_116;
    }
    else if(    self->len==1) {
        litem_117=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value166=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 233, "list_item$1tuple2$2charphsTypephph"))));
        litem_117->prev=self->head;
        litem_117->next=((void*)0);
        __dec_obj72=litem_117->item;
        litem_117->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj72,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_117;
        self->head->next=litem_117;
    }
    else {
        litem_118=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value167=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 243, "list_item$1tuple2$2charphsTypephph"))));
        litem_118->prev=self->tail;
        litem_118->next=((void*)0);
        __dec_obj75=litem_118->item;
        litem_118->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_118;
        self->tail=litem_118;
    }
    self->len++;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj76;
struct sType* __dec_obj77;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj76=self->v1;
            /*G*/ __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj77=self->v2;
            come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result99__;
void* __right_value168 = (void*)0;
struct tuple2$2charphsTypeph* result_119;
void* __right_value169 = (void*)0;
char* __dec_obj78;
void* __right_value170 = (void*)0;
struct sType* __dec_obj79;
struct tuple2$2charphsTypeph* __result100__;
    if(    self==(void*)0) {
        __result99__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    result_119=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj78=result_119->v1;
        result_119->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj79=result_119->v2;
        result_119->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result100__ = gComeFunResultObject = __result_obj__ = result_119;
    /*i*/come_call_finalizer3(result_119,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj80;
struct sType* __dec_obj81;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj80=self->v1;
            /*G*/ __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj81=self->v2;
            come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_120;
int i_121;
    for(    i_120=0;    i_120<self->size;    i_120++    ){
        if(        self->item_existance[i_120]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_120],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_121=0;    i_121<self->size;    i_121++    ){
        if(        self->item_existance[i_121]) {
            if(            1) {
                /* U13 */self->keys[i_121] = come_decrement_ref_count2(self->keys[i_121], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_143;
unsigned int it_144;
_Bool same_key_exist_161;
char* it2_164;
struct map$2charphsClassph* __result121__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_143=string_get_hash_key(key)%self->size;
    it_144=hash_143;
    while((_Bool)1) {
        if(        self->item_existance[it_144]) {
            if(            string_equals(self->keys[it_144],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_144]);
                    /* U13 */self->keys[it_144] = come_decrement_ref_count2(self->keys[it_144], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_144]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_144]);
                    self->keys[it_144]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_144],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_144]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_144]=item;
                }
                break;
            }
            it_144++;
            if(            it_144>=self->size) {
                it_144=0;
            }
            else if(            it_144==hash_143) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_144]=(_Bool)1;
            if(            1) {
                self->keys[it_144]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_144]=key;
            }
            if(            1) {
                self->items[it_144]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_144]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_161=(_Bool)0;
    for(    it2_164=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_164=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_164,key)) {
            same_key_exist_161=(_Bool)1;
        }
    }
    if(    !same_key_exist_161) {
        list$1charp_push_back(self->key_list,key);
    }
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_122;
void* __right_value173 = (void*)0;
char** keys_123;
void* __right_value174 = (void*)0;
struct sClass** items_124;
void* __right_value175 = (void*)0;
_Bool* item_existance_125;
int len_126;
char* it_129;
struct sClass* default_value_132;
struct sClass* it2_133;
unsigned int hash_140;
int n_141;
struct sClass* default_value_142;
default_value_132 = (void*)0;
default_value_142 = (void*)0;
    size_122=self->size*10;
    keys_123=(char**)come_increment_ref_count(((char**)(__right_value173=(char**)come_calloc(1, sizeof(char*)*(1*(size_122)), "/usr/local/include/comelang.h", 1651, "char*%"))));
    items_124=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value174=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_122)), "/usr/local/include/comelang.h", 1652, "sClass*%"))));
    item_existance_125=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value175=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_122)), "/usr/local/include/comelang.h", 1653, "bool"))));
    len_126=0;
    for(    it_129=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_129=map$2charphsClassph_next(self)    ){
        memset(&default_value_132,0,sizeof(struct sClass*));
        it2_133=map$2charphsClassph_at(self,it_129,default_value_132);
        hash_140=string_get_hash_key(it_129)%size_122;
        n_141=hash_140;
        while((_Bool)1) {
            if(            item_existance_125[n_141]) {
                n_141++;
                if(                n_141>=size_122) {
                    n_141=0;
                }
                else if(                n_141==hash_140) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_125[n_141]=(_Bool)1;
                keys_123[n_141]=it_129;
                items_124[n_141]=map$2charphsClassph_at(self,it_129,default_value_142);
                len_126++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_123;
    self->items=items_124;
    self->item_existance=item_existance_125;
    self->size=size_122;
    self->len=len_126;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_127;
char* __result101__;
char* __result102__;
char* result_128;
char* __result103__;
result_127 = (void*)0;
result_128 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_127,0,sizeof(char*));
        __result101__ = gComeFunResultObject = __result_obj__ = result_127;
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result102__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    memset(&result_128,0,sizeof(char*));
    __result103__ = gComeFunResultObject = __result_obj__ = result_128;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_130;
char* __result104__;
char* __result105__;
char* result_131;
char* __result106__;
result_130 = (void*)0;
result_131 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_130,0,sizeof(char*));
        __result104__ = gComeFunResultObject = __result_obj__ = result_130;
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result105__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    memset(&result_131,0,sizeof(char*));
    __result106__ = gComeFunResultObject = __result_obj__ = result_131;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_134;
unsigned int it_135;
struct sClass* __result107__;
struct sClass* __result108__;
struct sClass* __result109__;
struct sClass* __result110__;
    hash_134=string_get_hash_key(((char*)key))%self->size;
    it_135=hash_134;
    while((_Bool)1) {
        if(        self->item_existance[it_135]) {
            if(            string_equals(self->keys[it_135],key)) {
                __result107__ = gComeFunResultObject = __result_obj__ = self->items[it_135];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result107__;
            }
            it_135++;
            if(            it_135>=self->size) {
                it_135=0;
            }
            else if(            it_135==hash_134) {
                __result108__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result108__;
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
char* __dec_obj82;
struct list$1tuple2$2charphsTypephph* __dec_obj83;
char* __dec_obj85;
char* __dec_obj86;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj82=self->mName;
            /*G*/ __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj83=self->mFields;
            come_call_finalizer3(__dec_obj83,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj86=self->mParentClassName;
            /*G*/ __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_136;
struct list_item$1tuple2$2charphsTypephph* prev_it_137;
    it_136=self->head;
    while(it_136!=((void*)0)) {
        prev_it_137=it_136;
        it_136=it_136->next;
        /*i*/come_call_finalizer3(prev_it_137,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj84;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj84=self->item;
            come_call_finalizer3(__dec_obj84,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_138;
struct list_item$1tuple2$2charphsTypephph* prev_it_139;
    it_138=self->head;
    while(it_138!=((void*)0)) {
        prev_it_139=it_138;
        it_138=it_138->next;
        /*i*/come_call_finalizer3(prev_it_139,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_145;
struct list_item$1charp* it_146;
struct list$1charp* __result114__;
    it2_145=0;
    it_146=self->head;
    while(it_146!=((void*)0)) {
        if(        charp_equals(it_146->item,item)) {
            list$1charp_delete(self,it2_145,it2_145+1);
            break;
        }
        it2_145++;
        it_146=it_146->next;
    }
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_147;
struct list$1charp* __result111__;
struct list_item$1charp* it_150;
int i_151;
struct list_item$1charp* prev_it_152;
struct list_item$1charp* it_153;
int i_154;
struct list_item$1charp* prev_it_155;
struct list_item$1charp* it_156;
struct list_item$1charp* head_prev_it_157;
struct list_item$1charp* tail_it_158;
int i_159;
struct list_item$1charp* prev_it_160;
struct list$1charp* __result113__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_147=tail;
        tail=head;
        head=tmp_147;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result111__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result111__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_150=self->head;
        i_151=0;
        while(it_150!=((void*)0)) {
            if(            i_151<tail) {
                prev_it_152=it_150;
                it_150=it_150->next;
                i_151++;
                /*i*/come_call_finalizer3(prev_it_152,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_151==tail) {
                self->head=it_150;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_150=it_150->next;
                i_151++;
            }
        }
    }
    else if(    tail==self->len) {
        it_153=self->head;
        i_154=0;
        while(it_153!=((void*)0)) {
            if(            i_154==head) {
                self->tail=it_153->prev;
                self->tail->next=((void*)0);
            }
            if(            i_154>=head) {
                prev_it_155=it_153;
                it_153=it_153->next;
                i_154++;
                /*i*/come_call_finalizer3(prev_it_155,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_153=it_153->next;
                i_154++;
            }
        }
    }
    else {
        it_156=self->head;
        head_prev_it_157=((void*)0);
        tail_it_158=((void*)0);
        i_159=0;
        while(it_156!=((void*)0)) {
            if(            i_159==head) {
                head_prev_it_157=it_156->prev;
            }
            if(            i_159==tail) {
                tail_it_158=it_156;
            }
            if(            i_159>=head&&i_159<tail) {
                prev_it_160=it_156;
                it_156=it_156->next;
                i_159++;
                /*i*/come_call_finalizer3(prev_it_160,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_156=it_156->next;
                i_159++;
            }
        }
        if(        head_prev_it_157!=((void*)0)) {
            head_prev_it_157->next=tail_it_158;
        }
        if(        tail_it_158!=((void*)0)) {
            tail_it_158->prev=head_prev_it_157;
        }
    }
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_148;
struct list_item$1charp* prev_it_149;
struct list$1charp* __result112__;
    it_148=self->head;
    while(it_148!=((void*)0)) {
        prev_it_149=it_148;
        it_148=it_148->next;
        /*i*/come_call_finalizer3(prev_it_149,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
char* result_162;
char* __result115__;
char* __result116__;
char* result_163;
char* __result117__;
result_162 = (void*)0;
result_163 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_162,0,sizeof(char*));
        __result115__ = gComeFunResultObject = __result_obj__ = result_162;
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    self->it=self->head;
    if(    self->it) {
        __result116__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    memset(&result_163,0,sizeof(char*));
    __result117__ = gComeFunResultObject = __result_obj__ = result_163;
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_165;
char* __result118__;
char* __result119__;
char* result_166;
char* __result120__;
result_165 = (void*)0;
result_166 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_165,0,sizeof(char*));
        __result118__ = gComeFunResultObject = __result_obj__ = result_165;
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result119__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    memset(&result_166,0,sizeof(char*));
    __result120__ = gComeFunResultObject = __result_obj__ = result_166;
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value184 = (void*)0;
struct list_item$1CVALUEph* litem_174;
struct CVALUE* __dec_obj89;
void* __right_value185 = (void*)0;
struct list_item$1CVALUEph* litem_175;
struct CVALUE* __dec_obj93;
void* __right_value186 = (void*)0;
struct list_item$1CVALUEph* litem_176;
struct CVALUE* __dec_obj94;
struct list$1CVALUEph* __result122__;
    if(    self->len==0) {
        litem_174=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value184=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 223, "list_item$1CVALUEph"))));
        litem_174->prev=((void*)0);
        litem_174->next=((void*)0);
        __dec_obj89=litem_174->item;
        litem_174->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_174;
        self->head=litem_174;
    }
    else if(    self->len==1) {
        litem_175=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value185=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 233, "list_item$1CVALUEph"))));
        litem_175->prev=self->head;
        litem_175->next=((void*)0);
        __dec_obj93=litem_175->item;
        litem_175->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_175;
        self->head->next=litem_175;
    }
    else {
        litem_176=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value186=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 243, "list_item$1CVALUEph"))));
        litem_176->prev=self->tail;
        litem_176->next=((void*)0);
        __dec_obj94=litem_176->item;
        litem_176->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_176;
        self->tail=litem_176;
    }
    self->len++;
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj90;
struct sType* __dec_obj91;
char* __dec_obj92;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj90=self->c_value;
            /*G*/ __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj91=self->type;
            come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj92=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value187 = (void*)0;
char* none_generics_name_177;
void* __right_value188 = (void*)0;
char* fun_name2_178;
void* __right_value189 = (void*)0;
char* fun_name3_179;
struct sGenericsFun* generics_fun_180;
void* __right_value190 = (void*)0;
_Bool _if_conditional1;
void* __right_value191 = (void*)0;
char* __result128__;
char* __result129__;
    none_generics_name_177=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_178=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_179=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_177,fun_name));
    generics_fun_180=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_179,((void*)0));
    if(    generics_fun_180) {
        if(        (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_178)),generics_fun_180,type,info))),        _if_conditional1) {
            err_msg(info,"%s not found",fun_name3_179);
            __result128__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value191=__builtin_string("")));
            /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */none_generics_name_177 = come_decrement_ref_count2(none_generics_name_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */fun_name2_178 = come_decrement_ref_count2(fun_name2_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */fun_name3_179 = come_decrement_ref_count2(fun_name3_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U11 */__right_value191 = come_decrement_ref_count2(__right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result128__;
        }
    }
    __result129__ = gComeFunResultObject = __result_obj__ = fun_name2_178;
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */none_generics_name_177 = come_decrement_ref_count2(none_generics_name_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */fun_name2_178 = come_decrement_ref_count2(fun_name2_178, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    /* U13 */fun_name3_179 = come_decrement_ref_count2(fun_name3_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_181;
unsigned int it_182;
struct sGenericsFun* __result124__;
struct sGenericsFun* __result125__;
struct sGenericsFun* __result126__;
struct sGenericsFun* __result127__;
    hash_181=string_get_hash_key(((char*)key))%self->size;
    it_182=hash_181;
    while((_Bool)1) {
        if(        self->item_existance[it_182]) {
            if(            string_equals(self->keys[it_182],key)) {
                __result124__ = gComeFunResultObject = __result_obj__ = self->items[it_182];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result124__;
            }
            it_182++;
            if(            it_182>=self->size) {
                it_182=0;
            }
            else if(            it_182==hash_181) {
                __result125__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result125__;
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
struct sType* __dec_obj95;
struct list$1charph* __dec_obj96;
struct list$1charph* __dec_obj97;
char* __dec_obj98;
struct sType* __dec_obj99;
struct list$1sTypeph* __dec_obj100;
struct list$1charph* __dec_obj101;
struct list$1charph* __dec_obj102;
char* __dec_obj103;
char* __dec_obj104;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj95=self->mImplType;
            come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj96=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj96,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj97=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj98=self->mName;
            /*G*/ __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj99=self->mResultType;
            come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj100=self->mParamTypes;
            come_call_finalizer3(__dec_obj100,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj101=self->mParamNames;
            come_call_finalizer3(__dec_obj101,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj102=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj103=self->mBlock;
            /*G*/ __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj104=self->mGenericsSName;
            /*G*/ __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value196 = (void*)0;
struct sNode* current_stack_frame_node_183;
_Bool __result132__;
void* __right_value197 = (void*)0;
struct CVALUE* come_value_187;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct buffer* method_block2_188;
void* __right_value200 = (void*)0;
struct sType* method_block_type_189;
void* __right_value201 = (void*)0;
char* class_name_193;
struct sClass* current_stack_frame_struct_197;
_Bool __result139__;
void* __right_value202 = (void*)0;
struct sType* result_type_198;
struct list$1sTypeph* param_types_199;
struct list$1charph* param_names_200;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct buffer* all_alhabet_sname_201;
char* p_202;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
int i_203;
struct list$1sTypeph* o2_saved_204;
struct sType* it_207;
struct sType* param_type_210;
void* __right_value208 = (void*)0;
char* param_name_211;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
char* param_name_212;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
char* param_name_213;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct buffer* source3_214;
char* p_215;
char* head_216;
int sline_217;
struct buffer* __dec_obj108;
void* __right_value218 = (void*)0;
struct sNode* node_218;
_Bool __result146__;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
char* method_block_name_219;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct CVALUE* come_value2_220;
struct sFun* fun2_221;
_Bool __result151__;
struct sType* method_block_type2_224;
void* __right_value223 = (void*)0;
char* __dec_obj124;
void* __right_value224 = (void*)0;
struct sType* __dec_obj125;
struct buffer* __dec_obj126;
void* __right_value225 = (void*)0;
struct sType* __dec_obj127;
_Bool contained_method_generics_method_block_225;
struct list$1sTypeph* o2_saved_226;
struct sType* it_227;
_Bool __result153__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 32, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode*)(__right_value193=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 32, "sCurrentNode")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_183=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*g*/come_call_finalizer3(__right_value193,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
    if(    !node_compile(current_stack_frame_node_183,info)) {
        __result132__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_183) { current_stack_frame_node_183 = come_decrement_ref_count2(current_stack_frame_node_183, ((struct sNode*)current_stack_frame_node_183)->finalize, ((struct sNode*)current_stack_frame_node_183)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result132__;
    }
    come_value_187=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUEph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_187));
    dec_stack_ptr(1,info);
    method_block2_188=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 42, "buffer"))));
    method_block_type_189=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun->mParamTypes,-1), "20method.c", 43, 2))));
    class_name_193=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_type_189->mParamTypes,0), "20method.c", 47, 3))->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_193);
    current_stack_frame_struct_197=info->current_stack_frame_struct;
    info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_193);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_189->mClass->mName,"lambda")) {
        err_msg(info,"This function does not have method block(%s)",fun_name);
        __result139__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_183) { current_stack_frame_node_183 = come_decrement_ref_count2(current_stack_frame_node_183, ((struct sNode*)current_stack_frame_node_183)->finalize, ((struct sNode*)current_stack_frame_node_183)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_block2_188,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_block_type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */class_name_193 = come_decrement_ref_count2(class_name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result139__;
    }
    result_type_198=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_189->mResultType->v1));
    result_type_198->mStatic=(_Bool)0;
    param_types_199=method_block_type_189->mParamTypes;
    param_names_200=method_block_type_189->mParamNames;
    all_alhabet_sname_201=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 63, "buffer"))));
    {
        p_202=info->sname;
        while(*p_202) {
            if(            xisalnum(*p_202)) {
                buffer_append_char(all_alhabet_sname_201,*p_202++);
            }
            else {
                p_202++;
            }
        }
    }
    buffer_append_str(method_block2_188,((char*)(__right_value207=xsprintf("%s method_block%d_%s(",((char*)(__right_value205=make_type_name_string(result_type_198,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value206=buffer_to_string(all_alhabet_sname_201)))))));
    /* U11 */__right_value205 = come_decrement_ref_count2(__right_value205, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    i_203=0;
    for(    o2_saved_204=(param_types_199),it_207=list$1sTypeph_begin((o2_saved_204));    !list$1sTypeph_end((o2_saved_204));    it_207=list$1sTypeph_next((o2_saved_204))    ){
        param_type_210=it_207;
        if(        i_203==0) {
            param_name_211=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_str(method_block2_188,((char*)(__right_value210=xsprintf("%s",((char*)(__right_value209=make_define_var(param_type_210,param_name_211,(_Bool)0,info)))))));
            /* U11 */__right_value209 = come_decrement_ref_count2(__right_value209, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value210 = come_decrement_ref_count2(__right_value210, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U13 */param_name_211 = come_decrement_ref_count2(param_name_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        i_203==1) {
            param_name_212=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_str(method_block2_188,((char*)(__right_value213=xsprintf("%s",((char*)(__right_value212=make_define_var_no_solved(param_type_210,param_name_212,(_Bool)0,(_Bool)0,info)))))));
            /* U11 */__right_value212 = come_decrement_ref_count2(__right_value212, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U13 */param_name_212 = come_decrement_ref_count2(param_name_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            param_name_213=(char*)come_increment_ref_count(xsprintf("it%d",i_203));
            buffer_append_str(method_block2_188,((char*)(__right_value216=xsprintf("%s",((char*)(__right_value215=make_define_var_no_solved(param_type_210,param_name_213,(_Bool)0,(_Bool)0,info)))))));
            /* U11 */__right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U13 */param_name_213 = come_decrement_ref_count2(param_name_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_203!=list$1sTypeph_length(param_types_199)-1) {
            buffer_append_str(method_block2_188,",");
        }
        i_203++;
    }
    buffer_append_str(method_block2_188,")\n");
    buffer_append_str(method_block2_188,((char*)(__right_value217=buffer_to_string(method_block))));
    /* U11 */__right_value217 = come_decrement_ref_count2(__right_value217, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source3_214=(struct buffer*)come_increment_ref_count(info->source);
    p_215=info->p;
    head_216=info->head;
    sline_217=info->sline;
    __dec_obj108=info->source;
    info->source=(struct buffer*)come_increment_ref_count(method_block2_188);
    come_call_finalizer3(__dec_obj108,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_218=(struct sNode*)come_increment_ref_count(parse_function(info));
    if(    !node_compile(node_218,info)) {
        __result146__ = (_Bool)0;
        /*i*/come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_183) { current_stack_frame_node_183 = come_decrement_ref_count2(current_stack_frame_node_183, ((struct sNode*)current_stack_frame_node_183)->finalize, ((struct sNode*)current_stack_frame_node_183)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_block2_188,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_block_type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */class_name_193 = come_decrement_ref_count2(class_name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_198,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(all_alhabet_sname_201,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_214,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_218) { node_218 = come_decrement_ref_count2(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result146__;
    }
    method_block_name_219=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value219=buffer_to_string(all_alhabet_sname_201)))));
    /* U11 */__right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_220=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 128, "CVALUE"))));
    fun2_221=map$2charphsFunph_at(info->funcs,method_block_name_219,((void*)0));
    if(    fun2_221==((void*)0)) {
        err_msg(info,"method block function not found(%s)",method_block_name_219);
        __result151__ = (_Bool)1;
        /*i*/come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_183) { current_stack_frame_node_183 = come_decrement_ref_count2(current_stack_frame_node_183, ((struct sNode*)current_stack_frame_node_183)->finalize, ((struct sNode*)current_stack_frame_node_183)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_block2_188,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_block_type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */class_name_193 = come_decrement_ref_count2(class_name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_198,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(all_alhabet_sname_201,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_214,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_218) { node_218 = come_decrement_ref_count2(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /* U13 */method_block_name_219 = come_decrement_ref_count2(method_block_name_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_220,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result151__;
    }
    method_block_type2_224=fun2_221->mLambdaType;
    __dec_obj124=come_value2_220->c_value;
    come_value2_220->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_219));
    /*G*/ __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj125=come_value2_220->type;
    come_value2_220->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_224));
    come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_220->var=((void*)0);
    list$1CVALUEph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_220));
    __dec_obj126=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_214);
    come_call_finalizer3(__dec_obj126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_215;
    info->head=head_216;
    info->sline=sline_217;
    info->current_stack_frame_struct=current_stack_frame_struct_197;
    __dec_obj127=info->come_method_block_function_result_type;
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type));
    come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
    contained_method_generics_method_block_225=(_Bool)0;
    for(    o2_saved_226=(param_types_199),it_227=list$1sTypeph_begin((o2_saved_226));    !list$1sTypeph_end((o2_saved_226));    it_227=list$1sTypeph_next((o2_saved_226))    ){
        if(        is_contained_method_generics_types(it_227,info)) {
            contained_method_generics_method_block_225=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_198,info)) {
        contained_method_generics_method_block_225=(_Bool)1;
    }
    if(    contained_method_generics_method_block_225) {
        map$2charphsFunph_remove(info->funcs,method_block_name_219);
    }
    __result153__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    if(current_stack_frame_node_183) { current_stack_frame_node_183 = come_decrement_ref_count2(current_stack_frame_node_183, ((struct sNode*)current_stack_frame_node_183)->finalize, ((struct sNode*)current_stack_frame_node_183)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block2_188,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block_type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */class_name_193 = come_decrement_ref_count2(class_name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_198,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(all_alhabet_sname_201,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source3_214,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_218) { node_218 = come_decrement_ref_count2(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */method_block_name_219 = come_decrement_ref_count2(method_block_name_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_220,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result153__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_185;
struct list_item$1CVALUEph* prev_it_186;
    it_185=self->head;
    while(it_185!=((void*)0)) {
        prev_it_186=it_185;
        it_185=it_185->next;
        /*i*/come_call_finalizer3(prev_it_186,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj107;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj107=self->item;
            come_call_finalizer3(__dec_obj107,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_190;
int i_191;
struct sType* __result133__;
struct sType* default_value_192;
struct sType* __result134__;
default_value_192 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_190=self->head;
    i_191=0;
    while(it_190!=((void*)0)) {
        if(        position==i_191) {
            __result133__ = gComeFunResultObject = __result_obj__ = it_190->item;
            gComeFunResultObject = (void*)0;
            return __result133__;
        }
        it_190=it_190->next;
        i_191++;
    }
    memset(&default_value_192,0,sizeof(struct sType*));
    __result134__ = gComeFunResultObject = __result_obj__ = default_value_192;
    /*i*/come_call_finalizer3(default_value_192,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_194;
unsigned int hash_195;
unsigned int it_196;
struct sClass* __result135__;
struct sClass* __result136__;
struct sClass* __result137__;
struct sClass* __result138__;
default_value_194 = (void*)0;
    memset(&default_value_194,0,sizeof(struct sClass*));
    hash_195=string_get_hash_key(((char*)key))%self->size;
    it_196=hash_195;
    while((_Bool)1) {
        if(        self->item_existance[it_196]) {
            if(            string_equals(self->keys[it_196],key)) {
                __result135__ = gComeFunResultObject = __result_obj__ = self->items[it_196];
                /*i*/come_call_finalizer3(default_value_194,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result135__;
            }
            it_196++;
            if(            it_196>=self->size) {
                it_196=0;
            }
            else if(            it_196==hash_195) {
                __result136__ = gComeFunResultObject = __result_obj__ = default_value_194;
                /*i*/come_call_finalizer3(default_value_194,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result136__;
            }
        }
        else {
            __result137__ = gComeFunResultObject = __result_obj__ = default_value_194;
            /*i*/come_call_finalizer3(default_value_194,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result137__;
        }
    }
    __result138__ = gComeFunResultObject = __result_obj__ = default_value_194;
    /*i*/come_call_finalizer3(default_value_194,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_205;
struct sType* __result140__;
struct sType* __result141__;
struct sType* result_206;
struct sType* __result142__;
result_205 = (void*)0;
result_206 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_205,0,sizeof(struct sType*));
        __result140__ = gComeFunResultObject = __result_obj__ = result_205;
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    self->it=self->head;
    if(    self->it) {
        __result141__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    memset(&result_206,0,sizeof(struct sType*));
    __result142__ = gComeFunResultObject = __result_obj__ = result_206;
    gComeFunResultObject = (void*)0;
    return __result142__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_208;
struct sType* __result143__;
struct sType* __result144__;
struct sType* result_209;
struct sType* __result145__;
result_208 = (void*)0;
result_209 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_208,0,sizeof(struct sType*));
        __result143__ = gComeFunResultObject = __result_obj__ = result_208;
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result144__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result144__;
    }
    memset(&result_209,0,sizeof(struct sType*));
    __result145__ = gComeFunResultObject = __result_obj__ = result_209;
    gComeFunResultObject = (void*)0;
    return __result145__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_222;
unsigned int it_223;
struct sFun* __result147__;
struct sFun* __result148__;
struct sFun* __result149__;
struct sFun* __result150__;
    hash_222=string_get_hash_key(((char*)key))%self->size;
    it_223=hash_222;
    while((_Bool)1) {
        if(        self->item_existance[it_223]) {
            if(            string_equals(self->keys[it_223],key)) {
                __result147__ = gComeFunResultObject = __result_obj__ = self->items[it_223];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result147__;
            }
            it_223++;
            if(            it_223>=self->size) {
                it_223=0;
            }
            else if(            it_223==hash_222) {
                __result148__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result148__;
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
char* __dec_obj109;
struct sType* __dec_obj110;
struct list$1sTypeph* __dec_obj111;
struct list$1charph* __dec_obj112;
struct list$1charph* __dec_obj113;
struct sType* __dec_obj114;
struct sBlock* __dec_obj115;
struct buffer* __dec_obj118;
struct buffer* __dec_obj119;
struct buffer* __dec_obj120;
struct buffer* __dec_obj121;
char* __dec_obj122;
char* __dec_obj123;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj109=self->mName;
            /*G*/ __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj110=self->mResultType;
            come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj111=self->mParamTypes;
            come_call_finalizer3(__dec_obj111,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj112=self->mParamNames;
            come_call_finalizer3(__dec_obj112,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj113=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj113,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj114=self->mLambdaType;
            come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj115=self->mBlock;
            come_call_finalizer3(__dec_obj115,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj118=self->mSource;
            come_call_finalizer3(__dec_obj118,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj119=self->mSourceHead;
            come_call_finalizer3(__dec_obj119,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj120=self->mSourceHead2;
            come_call_finalizer3(__dec_obj120,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj121=self->mSourceDefer;
            come_call_finalizer3(__dec_obj121,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj122=self->mComeHeader;
            /*G*/ __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj123=self->mDeclareSName;
            /*G*/ __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj116;
struct sVarTable* __dec_obj117;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj116=self->mNodes;
            come_call_finalizer3(__dec_obj116,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj117=self->mVarTable;
            come_call_finalizer3(__dec_obj117,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_228;
unsigned int it_229;
struct map$2charphsFunph* __result152__;
    hash_228=string_get_hash_key(((char*)key))%self->size;
    it_229=hash_228;
    while((_Bool)1) {
        if(        self->item_existance[it_229]) {
            if(            string_equals(self->keys[it_229],key)) {
                list$1charp_remove(self->key_list,self->keys[it_229]);
                self->item_existance[it_229]=(_Bool)0;
                if(                1) {
                    /* U13 */self->keys[it_229] = come_decrement_ref_count2(self->keys[it_229], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_229]=((void*)0);
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_229],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_229]=((void*)0);
                self->len--;
                break;
            }
            it_229++;
            if(            it_229>=self->size) {
                it_229=0;
            }
            else if(            it_229==hash_228) {
                break;
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

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct sNode* __dec_obj128;
void* __right_value228 = (void*)0;
char* __dec_obj129;
void* __right_value238 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj146;
void* __right_value239 = (void*)0;
struct buffer* __dec_obj147;
void* __right_value240 = (void*)0;
struct list$1sTypeph* __dec_obj148;
struct sMethodCallNode* __result160__;
    ((struct sNodeBase*)(__right_value226=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value226,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj128=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(sNode_clone(obj));
    /* U1 */ if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj129=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj146=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj146,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj147=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(method_block));
    come_call_finalizer3(__dec_obj147,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj148=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(method_generics_types));
    come_call_finalizer3(__dec_obj148,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    __result160__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value241 = (void*)0;
char* __result161__;
    __result161__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value241=__builtin_string("sMethodCallNode")));
    /* U11 */__right_value241 = come_decrement_ref_count2(__right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_240;
struct list$1tuple2$2charphsNodephph* params_241;
struct sNode* obj_242;
struct buffer* method_block_243;
int method_block_sline_244;
_Bool no_infference_method_generics_245;
struct list$1sTypeph* method_generics_types_246;
_Bool recursive_247;
struct list$1sTypeph* method_generics_types_before_248;
struct list$1sTypeph* __dec_obj155;
void* __right_value242 = (void*)0;
struct list$1sTypeph* __dec_obj156;
_Bool __result162__;
void* __right_value243 = (void*)0;
struct CVALUE* obj_value_249;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
char* __dec_obj157;
void* __right_value246 = (void*)0;
struct sType* obj_type_250;
_Bool no_output_come_code_251;
struct sType* type_252;
void* __right_value247 = (void*)0;
char* none_generics_name_253;
void* __right_value248 = (void*)0;
char* fun_name2_254;
void* __right_value249 = (void*)0;
char* fun_name3_255;
struct sGenericsFun* generics_fun_256;
_Bool method_generics_257;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
char* generics_fun_name_258;
struct sFun* fun_259;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct list$1CVALUEph* come_params_260;
_Bool no_output_come_code_261;
_Bool __result164__;
struct CVALUE* method_block_node_262;
void* __right_value255 = (void*)0;
struct sType* method_block_lambda_type_266;
void* __right_value256 = (void*)0;
struct sType* method_block_result_type_267;
struct sType* generics_fun_method_block_lambda_type_268;
struct sType* generics_fun_method_block_result_type_269;
int method_generics_num_270;
void* __right_value257 = (void*)0;
int n_279;
struct list$1sTypeph* o2_saved_280;
struct sType* it_281;
int method_generics_num_282;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1CVALUEph* come_params_283;
int i_284;
struct list$1tuple2$2charphsNodephph* o2_saved_285;
struct tuple2$2charphsNodeph* it_288;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_291=0;
struct sNode* node_292=0;
_Bool __result177__;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_293;
int method_generics_num_294;
void* __right_value265 = (void*)0;
struct list$1sTypeph* o2_saved_295;
struct sType* it_296;
int method_generics_num_297;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1CVALUEph* come_params_298;
int i_299;
struct list$1tuple2$2charphsNodephph* o2_saved_300;
struct tuple2$2charphsNodeph* it_301;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* label_302=0;
struct sNode* node_303=0;
_Bool __result178__;
void* __right_value269 = (void*)0;
struct CVALUE* come_value_304;
int method_generics_num_305;
void* __right_value270 = (void*)0;
int n_306;
struct list$1sTypeph* o2_saved_307;
struct sType* it_308;
int method_generics_num_309;
void* __right_value271 = (void*)0;
struct sClass* klass_310;
_Bool calling_dynamic_method_311;
struct sType* lambda_type_312;
struct list$1tuple2$2charphsTypephph* o2_saved_313;
struct tuple2$2charphsTypeph* it_316;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* field_name_319=0;
struct sType* field_type_320=0;
void* __right_value272 = (void*)0;
struct sType* result_type_321;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1CVALUEph* come_params_322;
int i_323;
struct list$1tuple2$2charphsNodephph* o2_saved_324;
struct tuple2$2charphsNodeph* it_325;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_326=0;
struct sNode* node_327=0;
_Bool __result185__;
void* __right_value275 = (void*)0;
struct CVALUE* come_value_328;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct buffer* buf_329;
void* __right_value281 = (void*)0;
int j_330;
struct list$1CVALUEph* o2_saved_331;
struct CVALUE* it_334;
void* __right_value282 = (void*)0;
char* __dec_obj162;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct CVALUE* come_value2_337;
void* __right_value285 = (void*)0;
char* __dec_obj163;
void* __right_value286 = (void*)0;
struct sType* result_type2_338;
void* __right_value287 = (void*)0;
struct sType* __dec_obj164;
struct list$1sTypeph* __dec_obj165;
char* generics_fun_name_339;
struct sFun* fun_340;
void* __right_value288 = (void*)0;
char* __dec_obj166;
struct sClass* klass_341;
void* __right_value289 = (void*)0;
char* __dec_obj167;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
char* __dec_obj168;
void* __right_value293 = (void*)0;
char* none_generics_name_342;
void* __right_value294 = (void*)0;
char* fun_name3_343;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
char* __dec_obj169;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
char* __dec_obj170;
int i_344;
void* __right_value301 = (void*)0;
char* new_fun_name_345;
void* __right_value302 = (void*)0;
char* __dec_obj171;
struct sType* obj_array_type_349;
void* __right_value303 = (void*)0;
char* array_method_name_350;
void* __right_value304 = (void*)0;
char* __dec_obj172;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
char* __dec_obj173;
_Bool __result196__;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
char* __dec_obj174;
struct sClass* klass_351;
void* __right_value309 = (void*)0;
char* __dec_obj175;
void* __right_value310 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_352=0;
char* real_fun_name_353=0;
char* __dec_obj177;
void* __right_value311 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun2_354=0;
char* real_fun_name_355=0;
char* __dec_obj178;
_Bool __result197__;
_Bool __result198__;
_Bool __result199__;
void* __right_value312 = (void*)0;
struct sType* result_type_356;
void* __right_value313 = (void*)0;
struct sType* result_type2_357;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct list$1sTypeph* param_types_358;
struct list$1sTypeph* o2_saved_359;
struct sType* it_360;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sType* it2_361;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct list$1CVALUEph* come_params_362;
int i_363;
_Bool first_param_367;
struct list$1tuple2$2charphsNodephph* o2_saved_368;
struct tuple2$2charphsNodeph* it_369;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_370=0;
struct sNode* node_371=0;
_Bool __result201__;
void* __right_value324 = (void*)0;
struct CVALUE* come_value_372;
int n_373;
struct list$1charph* o2_saved_374;
char* it_377;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
int i_385;
struct list$1tuple2$2charphsNodephph* o2_saved_386;
struct tuple2$2charphsNodeph* it_387;
struct tuple2$2charphsNodeph* multiple_assign_var8 = (void*)0;
char* label_388=0;
struct sNode* node_389=0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
_Bool __result212__;
void* __right_value331 = (void*)0;
struct CVALUE* come_value_393;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sType* obj_array_type_394;
void* __right_value335 = (void*)0;
char* array_method_name_395;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct buffer* buf_396;
int i_397;
struct list$1sNodeph* o2_saved_398;
struct sNode* it_401;
void* __right_value338 = (void*)0;
struct CVALUE* come_value_404;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct CVALUE* come_value_405;
void* __right_value342 = (void*)0;
char* __dec_obj183;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sType* __dec_obj184;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct buffer* buf_409;
int i_410;
struct list$1sNodeph* o2_saved_411;
struct sNode* it_412;
void* __right_value353 = (void*)0;
struct CVALUE* come_value_413;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct CVALUE* come_value_414;
void* __right_value357 = (void*)0;
char* __dec_obj190;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sType* __dec_obj191;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct buffer* buf_415;
int i_416;
struct list$1sNodeph* o2_saved_417;
struct sNode* it_418;
void* __right_value365 = (void*)0;
struct CVALUE* come_value_419;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct CVALUE* come_value_420;
void* __right_value369 = (void*)0;
char* __dec_obj192;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sType* __dec_obj193;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct buffer* buf_421;
int i_422;
struct list$1sNodeph* o2_saved_423;
struct sNode* it_424;
void* __right_value377 = (void*)0;
struct CVALUE* come_value_425;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct CVALUE* come_value_426;
void* __right_value381 = (void*)0;
char* __dec_obj194;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct sType* __dec_obj195;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct buffer* buf_427;
int i_428;
struct list$1sNodeph* o2_saved_429;
struct sNode* it_430;
void* __right_value389 = (void*)0;
struct CVALUE* come_value_431;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct CVALUE* come_value_432;
void* __right_value393 = (void*)0;
char* __dec_obj196;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct sType* __dec_obj197;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
char* default_param_433;
char* param_name_434;
struct buffer* source_435;
char* p_436;
char* head_437;
int sline_438;
void* __right_value400 = (void*)0;
struct buffer* __dec_obj198;
void* __right_value401 = (void*)0;
struct sNode* node_439;
_Bool __result221__;
struct buffer* __dec_obj199;
void* __right_value402 = (void*)0;
struct CVALUE* come_value_440;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
_Bool __result222__;
_Bool __result223__;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct buffer* buf_441;
int j_442;
struct list$1CVALUEph* o2_saved_443;
struct CVALUE* it_444;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct CVALUE* come_value2_445;
void* __right_value410 = (void*)0;
char* __dec_obj200;
void* __right_value411 = (void*)0;
struct sType* __dec_obj201;
void* __right_value412 = (void*)0;
char* __dec_obj202;
struct list$1sTypeph* __dec_obj203;
_Bool __result224__;
    fun_name_240=(char*)come_increment_ref_count(self->fun_name);
    params_241=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->params);
    obj_242=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_243=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_244=self->method_block_sline;
    no_infference_method_generics_245=self->no_infference_method_generics;
    method_generics_types_246=(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types);
    recursive_247=self->recursive;
    method_generics_types_before_248=((void*)0);
    __dec_obj155=method_generics_types_before_248;
    method_generics_types_before_248=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    come_call_finalizer3(__dec_obj155,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj156=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
    come_call_finalizer3(__dec_obj156,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    if(    !node_compile(obj_242,info)) {
        __result162__ = (_Bool)0;
        /* U13 */fun_name_240 = come_decrement_ref_count2(fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(params_241,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_242) { obj_242 = come_decrement_ref_count2(obj_242, ((struct sNode*)obj_242)->finalize, ((struct sNode*)obj_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(method_block_243,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_types_before_248,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        return __result162__;
    }
    obj_value_249=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&obj_value_249->type->mPointerNum>0) {
        __dec_obj157=obj_value_249->c_value;
        obj_value_249->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value244=make_type_name_string(obj_value_249->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),obj_value_249->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value244 = come_decrement_ref_count2(__right_value244, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    obj_type_250=(struct sType*)come_increment_ref_count(sType_clone(obj_value_249->type));
    if(    !no_infference_method_generics_245) {
        no_output_come_code_251=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_252=(struct sType*)come_increment_ref_count(obj_type_250);
        none_generics_name_253=(char*)come_increment_ref_count(get_none_generics_name(type_252->mClass->mName));
        fun_name2_254=(char*)come_increment_ref_count(create_method_name(type_252,(_Bool)0,fun_name_240,info,(_Bool)1));
        fun_name3_255=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_253,fun_name_240));
        generics_fun_256=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_255,((void*)0));
        if(        generics_fun_256) {
            method_generics_257=list$1charph_length(generics_fun_256->mMethodGenericsTypeNames)>0;
            if(            method_generics_257&&list$1sTypeph_length(info->method_generics_types)==0) {
                generics_fun_name_258=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value251=make_generics_function(obj_type_250,(char*)come_increment_ref_count(__builtin_string(fun_name_240)),info,(_Bool)1)))));
                /* U11 */__right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                fun_259=map$2charphsFunph_at(info->funcs,generics_fun_name_258,((void*)0));
                come_params_260=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 257, "list$1CVALUEph"))));
                if(                method_block_243) {
                    no_output_come_code_261=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_243,(struct list$1CVALUEph*)come_increment_ref_count(come_params_260),fun_259,fun_name3_255,method_block_sline_244,info,(_Bool)1)) {
                        __result164__ = (_Bool)0;
                        /* U13 */generics_fun_name_258 = come_decrement_ref_count2(generics_fun_name_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_260,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(type_252,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */none_generics_name_253 = come_decrement_ref_count2(none_generics_name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name2_254 = come_decrement_ref_count2(fun_name2_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name3_255 = come_decrement_ref_count2(fun_name3_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_240 = come_decrement_ref_count2(fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(params_241,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_242) { obj_242 = come_decrement_ref_count2(obj_242, ((struct sNode*)obj_242)->finalize, ((struct sNode*)obj_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(method_block_243,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_before_248,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(obj_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(obj_type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result164__;
                    }
                    info->no_output_come_code=no_output_come_code_261;
                    method_block_node_262=list$1CVALUEphp_operator_load_element(come_params_260,-1);
                    method_block_lambda_type_266=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_262->type));
                    method_block_result_type_267=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_268=list$1sTypephp_operator_load_element(generics_fun_256->mParamTypes,-1);
                    generics_fun_method_block_result_type_269=generics_fun_method_block_lambda_type_268->mResultType->v1;
                    if(                    generics_fun_method_block_result_type_269->mClass->mMethodGenerics) {
                        method_generics_num_270=generics_fun_method_block_result_type_269->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_270,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_267)));
                    }
                    n_279=0;
                    for(                    o2_saved_280=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_268->mParamTypes)),it_281=list$1sTypeph_begin((o2_saved_280));                    !list$1sTypeph_end((o2_saved_280));                    it_281=list$1sTypeph_next((o2_saved_280))                    ){
                        if(                        it_281->mClass->mMethodGenerics) {
                            method_generics_num_282=it_281->mClass->mMethodGenericsNum;
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_282,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_lambda_type_266->mParamTypes,n_279), "20method.c", 281, 4)))));
                        }
                        n_279++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_280,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_params_283=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 286, "list$1CVALUEph"))));
                    i_284=0;
                    for(                    o2_saved_285=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_241)),it_288=list$1tuple2$2charphsNodephph_begin((o2_saved_285));                    !list$1tuple2$2charphsNodephph_end((o2_saved_285));                    it_288=list$1tuple2$2charphsNodephph_next((o2_saved_285))                    ){
                        multiple_assign_var1=it_288;
                        label_291=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                        node_292=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
                        if(                        i_284==0) {
                            list$1CVALUEph_push_back(come_params_283,(struct CVALUE*)come_increment_ref_count(obj_value_249));
                            i_284++;
                        }
                        else {
                            if(                            !node_compile(node_292,info)) {
                                __result177__ = (_Bool)0;
                                /* U13 */label_291 = come_decrement_ref_count2(label_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_292) { node_292 = come_decrement_ref_count2(node_292, ((struct sNode*)node_292)->finalize, ((struct sNode*)node_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*i*/come_call_finalizer3(o2_saved_285,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(method_block_lambda_type_266,sType_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(method_block_result_type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(come_params_283,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                /* U13 */generics_fun_name_258 = come_decrement_ref_count2(generics_fun_name_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(come_params_260,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(type_252,sType_finalize, 0, 0, 0, 0, (void*)0);
                                /* U13 */none_generics_name_253 = come_decrement_ref_count2(none_generics_name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /* U13 */fun_name2_254 = come_decrement_ref_count2(fun_name2_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /* U13 */fun_name3_255 = come_decrement_ref_count2(fun_name3_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /* U13 */fun_name_240 = come_decrement_ref_count2(fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(params_241,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_242) { obj_242 = come_decrement_ref_count2(obj_242, ((struct sNode*)obj_242)->finalize, ((struct sNode*)obj_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*i*/come_call_finalizer3(method_block_243,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(method_generics_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(method_generics_types_before_248,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(obj_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(obj_type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result177__;
                            }
                            come_value_293=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEph_push_back(come_params_283,(struct CVALUE*)come_increment_ref_count(come_value_293));
                            /*i*/come_call_finalizer3(come_value_293,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        /* U13 */label_291 = come_decrement_ref_count2(label_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_292) { node_292 = come_decrement_ref_count2(node_292, ((struct sNode*)node_292)->finalize, ((struct sNode*)node_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    /*i*/come_call_finalizer3(o2_saved_285,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_256->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_294=generics_fun_256->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_294,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                        }
                    }
                    n_279=0;
                    for(                    o2_saved_295=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_256->mParamTypes)),it_296=list$1sTypeph_begin((o2_saved_295));                    !list$1sTypeph_end((o2_saved_295));                    it_296=list$1sTypeph_next((o2_saved_295))                    ){
                        if(                        it_296->mClass->mMethodGenerics) {
                            method_generics_num_297=it_296->mClass->mMethodGenericsNum;
                            if(                            n_279<list$1CVALUEph_length(come_params_283)) {
                                list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_297,(struct sType*)come_increment_ref_count(sType_clone(list$1CVALUEphp_operator_load_element(come_params_283,n_279)->type)));
                            }
                        }
                        n_279++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_295,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_lambda_type_266,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_block_result_type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_283,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    come_params_298=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 325, "list$1CVALUEph"))));
                    i_299=0;
                    for(                    o2_saved_300=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_241)),it_301=list$1tuple2$2charphsNodephph_begin((o2_saved_300));                    !list$1tuple2$2charphsNodephph_end((o2_saved_300));                    it_301=list$1tuple2$2charphsNodephph_next((o2_saved_300))                    ){
                        multiple_assign_var2=it_301;
                        label_302=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                        node_303=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                        if(                        i_299==0) {
                            list$1CVALUEph_push_back(come_params_298,(struct CVALUE*)come_increment_ref_count(obj_value_249));
                            i_299++;
                        }
                        else {
                            if(                            !node_compile(node_303,info)) {
                                __result178__ = (_Bool)0;
                                /* U13 */label_302 = come_decrement_ref_count2(label_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_303) { node_303 = come_decrement_ref_count2(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*i*/come_call_finalizer3(o2_saved_300,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(come_params_298,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                /* U13 */generics_fun_name_258 = come_decrement_ref_count2(generics_fun_name_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(come_params_260,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(type_252,sType_finalize, 0, 0, 0, 0, (void*)0);
                                /* U13 */none_generics_name_253 = come_decrement_ref_count2(none_generics_name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /* U13 */fun_name2_254 = come_decrement_ref_count2(fun_name2_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /* U13 */fun_name3_255 = come_decrement_ref_count2(fun_name3_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /* U13 */fun_name_240 = come_decrement_ref_count2(fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(params_241,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_242) { obj_242 = come_decrement_ref_count2(obj_242, ((struct sNode*)obj_242)->finalize, ((struct sNode*)obj_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*i*/come_call_finalizer3(method_block_243,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(method_generics_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(method_generics_types_before_248,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(obj_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(obj_type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result178__;
                            }
                            come_value_304=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEph_push_back(come_params_298,(struct CVALUE*)come_increment_ref_count(come_value_304));
                            /*i*/come_call_finalizer3(come_value_304,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        /* U13 */label_302 = come_decrement_ref_count2(label_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_303) { node_303 = come_decrement_ref_count2(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    /*i*/come_call_finalizer3(o2_saved_300,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_256->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_305=generics_fun_256->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_305,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                        }
                    }
                    n_306=0;
                    for(                    o2_saved_307=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_256->mParamTypes)),it_308=list$1sTypeph_begin((o2_saved_307));                    !list$1sTypeph_end((o2_saved_307));                    it_308=list$1sTypeph_next((o2_saved_307))                    ){
                        if(                        it_308->mClass->mMethodGenerics) {
                            method_generics_num_309=it_308->mClass->mMethodGenericsNum;
                            if(                            n_306<list$1CVALUEph_length(come_params_298)) {
                                list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_309,(struct sType*)come_increment_ref_count(sType_clone(list$1CVALUEphp_operator_load_element(come_params_298,n_306)->type)));
                            }
                        }
                        n_306++;
                    }
                    /*i*/come_call_finalizer3(o2_saved_307,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_298,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                map$2charphsFunph_remove(info->funcs,generics_fun_name_258);
                /* U13 */generics_fun_name_258 = come_decrement_ref_count2(generics_fun_name_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_260,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_251;
        /*i*/come_call_finalizer3(type_252,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */none_generics_name_253 = come_decrement_ref_count2(none_generics_name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name2_254 = come_decrement_ref_count2(fun_name2_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_255 = come_decrement_ref_count2(fun_name3_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    klass_310=obj_type_250->mClass;
    calling_dynamic_method_311=(_Bool)0;
    lambda_type_312=((void*)0);
    for(    o2_saved_313=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_310->mFields)),it_316=list$1tuple2$2charphsTypephph_begin((o2_saved_313));    !list$1tuple2$2charphsTypephph_end((o2_saved_313));    it_316=list$1tuple2$2charphsTypephph_next((o2_saved_313))    ){
        multiple_assign_var3=it_316;
        field_name_319=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        field_type_320=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
        if(        string_operator_equals(field_name_319,fun_name_240)&&string_operator_equals(field_type_320->mClass->mName,"lambda")) {
            calling_dynamic_method_311=(_Bool)1;
            lambda_type_312=field_type_320;
            /* U13 */field_name_319 = come_decrement_ref_count2(field_name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_320,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        /* U13 */field_name_319 = come_decrement_ref_count2(field_name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(field_type_320,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_313,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    calling_dynamic_method_311) {
        result_type_321=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_312->mResultType->v1));
        result_type_321->mStatic=(_Bool)0;
        come_params_322=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 388, "list$1CVALUEph"))));
        i_323=0;
        for(        o2_saved_324=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_241)),it_325=list$1tuple2$2charphsNodephph_begin((o2_saved_324));        !list$1tuple2$2charphsNodephph_end((o2_saved_324));        it_325=list$1tuple2$2charphsNodephph_next((o2_saved_324))        ){
            multiple_assign_var4=it_325;
            label_326=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_327=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            if(            i_323==0) {
                list$1CVALUEph_push_back(come_params_322,(struct CVALUE*)come_increment_ref_count(obj_value_249));
                i_323++;
            }
            else {
                if(                !node_compile(node_327,info)) {
                    __result185__ = (_Bool)0;
                    /* U13 */label_326 = come_decrement_ref_count2(label_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_327) { node_327 = come_decrement_ref_count2(node_327, ((struct sNode*)node_327)->finalize, ((struct sNode*)node_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(o2_saved_324,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_321,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_322,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_240 = come_decrement_ref_count2(fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(params_241,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_242) { obj_242 = come_decrement_ref_count2(obj_242, ((struct sNode*)obj_242)->finalize, ((struct sNode*)obj_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(method_block_243,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_generics_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_generics_types_before_248,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(obj_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(obj_type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result185__;
                }
                come_value_328=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                check_assign_type(((char*)(__right_value278=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value276=string_to_string(fun_name_240))),((char*)(__right_value277=int_to_string(i_323)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_312->mParamTypes,i_323-1), "20method.c", 405, 5)),come_value_328->type,come_value_328,(_Bool)0,(_Bool)1,(_Bool)0,info);
                /* U11 */__right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value278 = come_decrement_ref_count2(__right_value278, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_312->mParamTypes,i_323-1), "20method.c", 406, 6))->mHeap&&come_value_328->type->mHeap) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_312->mParamTypes,i_323-1), "20method.c", 408, 7)),come_value_328->type,come_value_328,info,(_Bool)1);
                }
                list$1CVALUEph_push_back(come_params_322,(struct CVALUE*)come_increment_ref_count(come_value_328));
                i_323++;
                dec_stack_ptr(1,info);
                /*i*/come_call_finalizer3(come_value_328,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            /* U13 */label_326 = come_decrement_ref_count2(label_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_327) { node_327 = come_decrement_ref_count2(node_327, ((struct sNode*)node_327)->finalize, ((struct sNode*)node_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        /*i*/come_call_finalizer3(o2_saved_324,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buf_329=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 418, "buffer"))));
        buffer_append_str(buf_329,((char*)(__right_value281=xsprintf("%s->%s",obj_value_249->c_value,fun_name_240))));
        /* U11 */__right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_329,"(");
        j_330=0;
        for(        o2_saved_331=(struct list$1CVALUEph*)come_increment_ref_count((come_params_322)),it_334=list$1CVALUEph_begin((o2_saved_331));        !list$1CVALUEph_end((o2_saved_331));        it_334=list$1CVALUEph_next((o2_saved_331))        ){
            if(            j_330==0) {
                __dec_obj162=it_334->c_value;
                it_334->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_334->c_value));
                /*G*/ __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            buffer_append_str(buf_329,it_334->c_value);
            if(            j_330!=list$1CVALUEph_length(come_params_322)-1) {
                buffer_append_str(buf_329,",");
            }
            j_330++;
        }
        /*i*/come_call_finalizer3(o2_saved_331,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_329,")");
        come_value2_337=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 438, "CVALUE"))));
        __dec_obj163=come_value2_337->c_value;
        come_value2_337->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_329));
        /*G*/ __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type2_338=(struct sType*)come_increment_ref_count(solve_generics(result_type_321,info->generics_type,info));
        __dec_obj164=come_value2_337->type;
        come_value2_337->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_338));
        come_call_finalizer3(__dec_obj164,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_337->type->mStatic=(_Bool)0;
        come_value2_337->var=((void*)0);
        if(        result_type2_338->mHeap) {
            append_object_to_right_values2(come_value2_337,(struct sType*)come_increment_ref_count(result_type2_338),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value2_337->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_337));
        /*i*/come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj165=info->method_generics_types;
        info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_248);
        come_call_finalizer3(__dec_obj165,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=((void*)0);
        /*i*/come_call_finalizer3(result_type_321,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_322,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_329,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_337,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_338,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_name_339=((void*)0);
        fun_340=((void*)0);
        if(        string_operator_equals(fun_name_240,"super")) {
            __dec_obj166=fun_name_240;
            fun_name_240=(char*)come_increment_ref_count(create_non_method_name(obj_type_250,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            /*G*/ __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_341=obj_type_250->mClass;
            while(map$2charphsClassphp_operator_load_element(info->classes,klass_341->mParentClassName)) {
                klass_341=map$2charphsClassphp_operator_load_element(info->classes,klass_341->mParentClassName);
                __dec_obj167=generics_fun_name_339;
                generics_fun_name_339=(char*)come_increment_ref_count(create_method_name_using_class(klass_341,(_Bool)0,fun_name_240,info,(_Bool)1));
                /*G*/ __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_340=map$2charphsFunph_at(info->funcs,generics_fun_name_339,((void*)0));
                if(                fun_340) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_250&&obj_type_250->mNoSolvedGenericsType&&obj_type_250->mNoSolvedGenericsType->v1&&list$1sTypeph_length(obj_type_250->mNoSolvedGenericsType->v1->mGenericsTypes)>0) {
                __dec_obj168=generics_fun_name_339;
                generics_fun_name_339=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value291=make_generics_function(obj_type_250,(char*)come_increment_ref_count(__builtin_string(fun_name_240)),info,(_Bool)1)))));
                /*G*/ __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U11 */__right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            list$1sTypeph_length(info->method_generics_types)>0) {
                none_generics_name_342=(char*)come_increment_ref_count(get_none_generics_name(obj_type_250->mClass->mName));
                fun_name3_343=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_342,fun_name_240));
                __dec_obj169=generics_fun_name_339;
                generics_fun_name_339=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value296=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_343)),(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types),info)))));
                /*G*/ __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U11 */__right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U13 */none_generics_name_342 = come_decrement_ref_count2(none_generics_name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */fun_name3_343 = come_decrement_ref_count2(fun_name3_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj170=generics_fun_name_339;
                generics_fun_name_339=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value299=make_generics_function(obj_type_250,(char*)come_increment_ref_count(__builtin_string(fun_name_240)),info,(_Bool)1)))));
                /*G*/ __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U11 */__right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            for(            i_344=128;            i_344>=1;            i_344--            ){
                new_fun_name_345=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_339,i_344));
                fun_340=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_345);
                if(                fun_340!=((void*)0)) {
                    __dec_obj171=generics_fun_name_339;
                    generics_fun_name_339=(char*)come_increment_ref_count(__builtin_string(new_fun_name_345));
                    /*G*/ __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                    /* U13 */new_fun_name_345 = come_decrement_ref_count2(new_fun_name_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                /* U13 */new_fun_name_345 = come_decrement_ref_count2(new_fun_name_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            fun_340==((void*)0)) {
                obj_array_type_349=obj_type_250->mOriginalLoadVarType->v1;
                if(                obj_array_type_349&&list$1sNodeph_length(obj_array_type_349->mArrayNum)>0) {
                    array_method_name_350=(char*)come_increment_ref_count(create_method_name(obj_array_type_349,(_Bool)0,fun_name_240,info,(_Bool)0));
                    fun_340=map$2charphsFunph_at(info->funcs,array_method_name_350,((void*)0));
                    if(                    fun_340) {
                        __dec_obj172=generics_fun_name_339;
                        generics_fun_name_339=(char*)come_increment_ref_count(__builtin_string(array_method_name_350));
                        /*G*/ __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        fun_340=map$2charphsFunph_at(info->funcs,generics_fun_name_339,((void*)0));
                        if(                        fun_340==((void*)0)) {
                            __dec_obj173=generics_fun_name_339;
                            generics_fun_name_339=(char*)come_increment_ref_count(create_method_name(obj_type_250,(_Bool)0,((char*)(__right_value305=__builtin_string(fun_name_240))),info,(_Bool)1));
                            /*G*/ __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                            /* U11 */__right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_340=map$2charphsFunph_at(info->funcs,generics_fun_name_339,((void*)0));
                            if(                            fun_340==((void*)0)) {
                                err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_339,info->come_fun->mName);
                                __result196__ = (_Bool)1;
                                /* U13 */array_method_name_350 = come_decrement_ref_count2(array_method_name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /* U13 */generics_fun_name_339 = come_decrement_ref_count2(generics_fun_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /* U13 */fun_name_240 = come_decrement_ref_count2(fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(params_241,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_242) { obj_242 = come_decrement_ref_count2(obj_242, ((struct sNode*)obj_242)->finalize, ((struct sNode*)obj_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*i*/come_call_finalizer3(method_block_243,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(method_generics_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(method_generics_types_before_248,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(obj_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(obj_type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result196__;
                            }
                        }
                    }
                    /* U13 */array_method_name_350 = come_decrement_ref_count2(array_method_name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    fun_340=map$2charphsFunph_at(info->funcs,generics_fun_name_339,((void*)0));
                    if(                    fun_340==((void*)0)) {
                        __dec_obj174=generics_fun_name_339;
                        generics_fun_name_339=(char*)come_increment_ref_count(create_method_name(obj_type_250,(_Bool)0,((char*)(__right_value307=__builtin_string(fun_name_240))),info,(_Bool)1));
                        /*G*/ __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /* U11 */__right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        fun_340=map$2charphsFunph_at(info->funcs,generics_fun_name_339,((void*)0));
                        if(                        fun_340==((void*)0)) {
                            klass_351=obj_type_250->mClass;
                            while(map$2charphsClassphp_operator_load_element(info->classes,klass_351->mParentClassName)) {
                                klass_351=map$2charphsClassphp_operator_load_element(info->classes,klass_351->mParentClassName);
                                __dec_obj175=generics_fun_name_339;
                                generics_fun_name_339=(char*)come_increment_ref_count(create_method_name_using_class(klass_351,(_Bool)0,fun_name_240,info,(_Bool)1));
                                /*G*/ __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                                fun_340=map$2charphsFunph_at(info->funcs,generics_fun_name_339,((void*)0));
                                if(                                fun_340) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_340==((void*)0)&&string_operator_equals(fun_name_240,"to_string")) {
                            multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value310=create_to_string_automatically(obj_type_250,fun_name_240,info)));
                            fun2_352=multiple_assign_var5->v1;
                            real_fun_name_353=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                            /*g*/come_call_finalizer3(__right_value310,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_340=fun2_352;
                            __dec_obj177=generics_fun_name_339;
                            generics_fun_name_339=(char*)come_increment_ref_count(real_fun_name_353);
                            /*G*/ __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                            /* U13 */real_fun_name_353 = come_decrement_ref_count2(real_fun_name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_340==((void*)0)&&string_operator_equals(fun_name_240,"equals")) {
                            multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value311=create_equals_automatically(obj_type_250,fun_name_240,info)));
                            fun2_354=multiple_assign_var6->v1;
                            real_fun_name_355=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            /*g*/come_call_finalizer3(__right_value311,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_340=fun2_354;
                            __dec_obj178=generics_fun_name_339;
                            generics_fun_name_339=(char*)come_increment_ref_count(real_fun_name_355);
                            /*G*/ __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                            /* U13 */real_fun_name_355 = come_decrement_ref_count2(real_fun_name_355, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_340==((void*)0)) {
                            err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_339,info->come_fun->mName);
                            __result197__ = (_Bool)1;
                            /* U13 */generics_fun_name_339 = come_decrement_ref_count2(generics_fun_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /* U13 */fun_name_240 = come_decrement_ref_count2(fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(params_241,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_242) { obj_242 = come_decrement_ref_count2(obj_242, ((struct sNode*)obj_242)->finalize, ((struct sNode*)obj_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*i*/come_call_finalizer3(method_block_243,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(method_generics_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(method_generics_types_before_248,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(obj_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(obj_type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result197__;
                        }
                    }
                }
            }
        }
        if(        fun_340==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_339,info->come_fun->mName);
            __result198__ = (_Bool)1;
            /* U13 */generics_fun_name_339 = come_decrement_ref_count2(generics_fun_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_240 = come_decrement_ref_count2(fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(params_241,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_242) { obj_242 = come_decrement_ref_count2(obj_242, ((struct sNode*)obj_242)->finalize, ((struct sNode*)obj_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(method_block_243,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types_before_248,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result198__;
        }
        if(        list$1sTypeph_length(fun_340->mParamTypes)==0) {
            err_msg(info,"Method require function parametor");
            __result199__ = (_Bool)1;
            /* U13 */generics_fun_name_339 = come_decrement_ref_count2(generics_fun_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_240 = come_decrement_ref_count2(fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(params_241,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_242) { obj_242 = come_decrement_ref_count2(obj_242, ((struct sNode*)obj_242)->finalize, ((struct sNode*)obj_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(method_block_243,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(method_generics_types_before_248,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result199__;
        }
        result_type_356=(struct sType*)come_increment_ref_count(sType_clone(fun_340->mResultType));
        result_type_356->mStatic=(_Bool)0;
        result_type2_357=(struct sType*)come_increment_ref_count(solve_generics(result_type_356,info->generics_type,info));
        param_types_358=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 587, "list$1sTypeph"))));
        for(        o2_saved_359=(struct list$1sTypeph*)come_increment_ref_count((fun_340->mParamTypes)),it_360=list$1sTypeph_begin((o2_saved_359));        !list$1sTypeph_end((o2_saved_359));        it_360=list$1sTypeph_next((o2_saved_359))        ){
            if(            it_360==((void*)0)) {
                list$1sTypeph_push_back(param_types_358,(struct sType*)come_increment_ref_count(sType_clone(it_360)));
            }
            else {
                it2_361=(struct sType*)come_increment_ref_count(solve_generics(it_360,info->generics_type,info));
                list$1sTypeph_push_back(param_types_358,(struct sType*)come_increment_ref_count(sType_clone(it2_361)));
                /*i*/come_call_finalizer3(it2_361,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        /*i*/come_call_finalizer3(o2_saved_359,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_params_362=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 599, "list$1CVALUEph"))));
        for(        i_363=0;        i_363<list$1sTypeph_length(fun_340->mParamTypes)-(((method_block_243)?(2):(0)));        i_363++        ){
            list$1CVALUEph_add(come_params_362,((void*)0));
        }
        first_param_367=(_Bool)1;
        for(        o2_saved_368=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_241)),it_369=list$1tuple2$2charphsNodephph_begin((o2_saved_368));        !list$1tuple2$2charphsNodephph_end((o2_saved_368));        it_369=list$1tuple2$2charphsNodephph_next((o2_saved_368))        ){
            multiple_assign_var7=it_369;
            label_370=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_371=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            if(            first_param_367) {
                first_param_367=(_Bool)0;
            }
            else if(            label_370) {
                if(                !node_compile(node_371,info)) {
                    __result201__ = (_Bool)0;
                    /* U13 */label_370 = come_decrement_ref_count2(label_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_371) { node_371 = come_decrement_ref_count2(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(o2_saved_368,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */generics_fun_name_339 = come_decrement_ref_count2(generics_fun_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_356,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_358,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_362,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_240 = come_decrement_ref_count2(fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(params_241,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_242) { obj_242 = come_decrement_ref_count2(obj_242, ((struct sNode*)obj_242)->finalize, ((struct sNode*)obj_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(method_block_243,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_generics_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_generics_types_before_248,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(obj_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(obj_type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result201__;
                }
                come_value_372=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                n_373=0;
                for(                o2_saved_374=(struct list$1charph*)come_increment_ref_count((fun_340->mParamNames)),it_377=list$1charph_begin((o2_saved_374));                !list$1charph_end((o2_saved_374));                it_377=list$1charph_next((o2_saved_374))                ){
                    if(                    string_operator_equals(label_370,it_377)) {
                        break;
                    }
                    n_373++;
                }
                /*i*/come_call_finalizer3(o2_saved_374,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                if(                list$1sTypephp_operator_load_element(param_types_358,n_373)) {
                    check_assign_type(((char*)(__right_value327=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value325=string_to_string(fun_name_240))),((char*)(__right_value326=int_to_string(n_373)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_358,n_373), "20method.c", 630, 8)),come_value_372->type,come_value_372,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    /* U11 */__right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    /* U11 */__right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    /* U11 */__right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                if(                list$1sTypephp_operator_load_element(param_types_358,n_373)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_358,n_373), "20method.c", 632, 9))->mHeap&&come_value_372->type->mHeap) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_358,n_373), "20method.c", 633, 10)),come_value_372->type,come_value_372,info,(_Bool)1);
                }
                list$1CVALUEph_replace(come_params_362,n_373,(struct CVALUE*)come_increment_ref_count(come_value_372));
                /*i*/come_call_finalizer3(come_value_372,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            /* U13 */label_370 = come_decrement_ref_count2(label_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_371) { node_371 = come_decrement_ref_count2(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        /*i*/come_call_finalizer3(o2_saved_368,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        i_385=0;
        for(        o2_saved_386=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_241)),it_387=list$1tuple2$2charphsNodephph_begin((o2_saved_386));        !list$1tuple2$2charphsNodephph_end((o2_saved_386));        it_387=list$1tuple2$2charphsNodephph_next((o2_saved_386))        ){
            multiple_assign_var8=it_387;
            label_388=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_389=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            if(            i_385==0) {
                check_assign_type(((char*)(__right_value330=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value328=string_to_string(fun_name_240))),((char*)(__right_value329=int_to_string(i_385)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_358,i_385), "20method.c", 645, 11)),obj_value_249->type,obj_value_249,(_Bool)0,(_Bool)1,(_Bool)0,info);
                /* U11 */__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /* U11 */__right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_358,i_385), "20method.c", 646, 12))->mHeap&&obj_value_249->type->mHeap) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_358,i_385), "20method.c", 647, 13)),obj_value_249->type,obj_value_249,info,(_Bool)1);
                }
                else if(                ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_358,i_385), "20method.c", 649, 14))->mHeap&&!obj_value_249->type->mHeap&&!gComeGC) {
                    err_msg(info,"require heap parametor(%s)",((char*)come_null_check(list$1charphp_operator_load_element(fun_340->mParamNames,i_385), "20method.c", 650, 15)));
                    exit(2);
                }
                list$1CVALUEph_replace(come_params_362,i_385,(struct CVALUE*)come_increment_ref_count(obj_value_249));
                i_385++;
            }
            else if(            label_388) {
            }
            else {
                if(                !node_compile(node_389,info)) {
                    __result212__ = (_Bool)0;
                    /* U13 */label_388 = come_decrement_ref_count2(label_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_389) { node_389 = come_decrement_ref_count2(node_389, ((struct sNode*)node_389)->finalize, ((struct sNode*)node_389)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(o2_saved_386,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */generics_fun_name_339 = come_decrement_ref_count2(generics_fun_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_356,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_358,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_params_362,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */fun_name_240 = come_decrement_ref_count2(fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(params_241,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_242) { obj_242 = come_decrement_ref_count2(obj_242, ((struct sNode*)obj_242)->finalize, ((struct sNode*)obj_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(method_block_243,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_generics_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(method_generics_types_before_248,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(obj_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(obj_type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result212__;
                }
                come_value_393=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                while((_Bool)1) {
                    if(                    list$1CVALUEphp_operator_load_element(come_params_362,i_385)==((void*)0)) {
                        break;
                    }
                    else {
                        i_385++;
                    }
                }
                if(                list$1sTypephp_operator_load_element(param_types_358,i_385)) {
                    check_assign_type(((char*)(__right_value334=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value332=string_to_string(fun_name_240))),((char*)(__right_value333=int_to_string(i_385)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_358,i_385), "20method.c", 677, 16)),come_value_393->type,come_value_393,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    /* U11 */__right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    /* U11 */__right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    /* U11 */__right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                if(                list$1sTypephp_operator_load_element(param_types_358,i_385)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_358,i_385), "20method.c", 679, 17))->mHeap&&come_value_393->type->mHeap) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_358,i_385), "20method.c", 680, 18)),come_value_393->type,come_value_393,info,(_Bool)1);
                }
                list$1CVALUEph_replace(come_params_362,i_385,(struct CVALUE*)come_increment_ref_count(come_value_393));
                i_385++;
                /*i*/come_call_finalizer3(come_value_393,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            /* U13 */label_388 = come_decrement_ref_count2(label_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_389) { node_389 = come_decrement_ref_count2(node_389, ((struct sNode*)node_389)->finalize, ((struct sNode*)node_389)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        /*i*/come_call_finalizer3(o2_saved_386,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        while((_Bool)1) {
            if(            list$1CVALUEphp_operator_load_element(come_params_362,i_385)==((void*)0)) {
                break;
            }
            else {
                i_385++;
            }
        }
        obj_array_type_394=obj_type_250->mOriginalLoadVarType->v1;
        if(        obj_array_type_394&&list$1sNodeph_length(obj_array_type_394->mArrayNum)>0) {
            array_method_name_395=(char*)come_increment_ref_count(create_method_name(obj_array_type_394,(_Bool)0,fun_name_240,info,(_Bool)0));
            if(            string_operator_equals(generics_fun_name_339,array_method_name_395)) {
                if(                string_operator_equals(fun_name_240,"to_pointer")) {
                    buf_396=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 702, "buffer"))));
                    i_397=0;
                    for(                    o2_saved_398=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_394->mArrayNum)),it_401=list$1sNodeph_begin((o2_saved_398));                    !list$1sNodeph_end((o2_saved_398));                    it_401=list$1sNodeph_next((o2_saved_398))                    ){
                        if(                        !node_compile(it_401,info)) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        come_value_404=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_str(buf_396,((char*)(__right_value339=xsprintf("%s",come_value_404->c_value))));
                        /* U11 */__right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        if(                        i_397!=list$1sNodeph_length(obj_array_type_394->mArrayNum)-1) {
                            buffer_append_str(buf_396,"*");
                        }
                        i_397++;
                        /*i*/come_call_finalizer3(come_value_404,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_398,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_405=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 722, "CVALUE"))));
                    __dec_obj183=come_value_405->c_value;
                    come_value_405->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_396));
                    /*G*/ __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_405->var=((void*)0);
                    __dec_obj184=come_value_405->type;
                    come_value_405->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 726, "sType")),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_362,1,(struct CVALUE*)come_increment_ref_count(come_value_405));
                    list$1tuple2$2charphsNodephph_push_back(params_241,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 729, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    /*i*/come_call_finalizer3(buf_396,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_value_405,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_240,"length")) {
                    buf_409=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 732, "buffer"))));
                    i_410=0;
                    for(                    o2_saved_411=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_394->mArrayNum)),it_412=list$1sNodeph_begin((o2_saved_411));                    !list$1sNodeph_end((o2_saved_411));                    it_412=list$1sNodeph_next((o2_saved_411))                    ){
                        if(                        !node_compile(it_412,info)) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        come_value_413=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_str(buf_409,((char*)(__right_value354=xsprintf("%s",come_value_413->c_value))));
                        /* U11 */__right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        if(                        i_410!=list$1sNodeph_length(obj_array_type_394->mArrayNum)-1) {
                            buffer_append_str(buf_409,"*");
                        }
                        i_410++;
                        /*i*/come_call_finalizer3(come_value_413,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_411,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_414=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 751, "CVALUE"))));
                    __dec_obj190=come_value_414->c_value;
                    come_value_414->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_409));
                    /*G*/ __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_414->var=((void*)0);
                    __dec_obj191=come_value_414->type;
                    come_value_414->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 755, "sType")),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_362,1,(struct CVALUE*)come_increment_ref_count(come_value_414));
                    list$1tuple2$2charphsNodephph_push_back(params_241,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 758, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    /*i*/come_call_finalizer3(buf_409,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_240,"to_buffer")) {
                    buf_415=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 761, "buffer"))));
                    i_416=0;
                    for(                    o2_saved_417=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_394->mArrayNum)),it_418=list$1sNodeph_begin((o2_saved_417));                    !list$1sNodeph_end((o2_saved_417));                    it_418=list$1sNodeph_next((o2_saved_417))                    ){
                        if(                        !node_compile(it_418,info)) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        come_value_419=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_str(buf_415,((char*)(__right_value366=xsprintf("%s",come_value_419->c_value))));
                        /* U11 */__right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        if(                        i_416!=list$1sNodeph_length(obj_array_type_394->mArrayNum)-1) {
                            buffer_append_str(buf_415,"*");
                        }
                        i_416++;
                        /*i*/come_call_finalizer3(come_value_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_417,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_420=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 780, "CVALUE"))));
                    __dec_obj192=come_value_420->c_value;
                    come_value_420->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_415));
                    /*G*/ __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_420->var=((void*)0);
                    __dec_obj193=come_value_420->type;
                    come_value_420->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 784, "sType")),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_362,1,(struct CVALUE*)come_increment_ref_count(come_value_420));
                    list$1tuple2$2charphsNodephph_push_back(params_241,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 787, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    /*i*/come_call_finalizer3(buf_415,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_value_420,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_240,"to_list")) {
                    buf_421=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 790, "buffer"))));
                    i_422=0;
                    for(                    o2_saved_423=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_394->mArrayNum)),it_424=list$1sNodeph_begin((o2_saved_423));                    !list$1sNodeph_end((o2_saved_423));                    it_424=list$1sNodeph_next((o2_saved_423))                    ){
                        if(                        !node_compile(it_424,info)) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        come_value_425=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_str(buf_421,((char*)(__right_value378=xsprintf("%s",come_value_425->c_value))));
                        /* U11 */__right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        if(                        i_422!=list$1sNodeph_length(obj_array_type_394->mArrayNum)-1) {
                            buffer_append_str(buf_421,"*");
                        }
                        i_422++;
                        /*i*/come_call_finalizer3(come_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_423,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_426=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 809, "CVALUE"))));
                    __dec_obj194=come_value_426->c_value;
                    come_value_426->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_421));
                    /*G*/ __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_426->var=((void*)0);
                    __dec_obj195=come_value_426->type;
                    come_value_426->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 813, "sType")),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_362,1,(struct CVALUE*)come_increment_ref_count(come_value_426));
                    list$1tuple2$2charphsNodephph_push_back(params_241,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 816, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    /*i*/come_call_finalizer3(buf_421,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_value_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_240,"to_vector")) {
                    buf_427=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 819, "buffer"))));
                    i_428=0;
                    for(                    o2_saved_429=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_394->mArrayNum)),it_430=list$1sNodeph_begin((o2_saved_429));                    !list$1sNodeph_end((o2_saved_429));                    it_430=list$1sNodeph_next((o2_saved_429))                    ){
                        if(                        !node_compile(it_430,info)) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        come_value_431=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_str(buf_427,((char*)(__right_value390=xsprintf("%s",come_value_431->c_value))));
                        /* U11 */__right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        if(                        i_428!=list$1sNodeph_length(obj_array_type_394->mArrayNum)-1) {
                            buffer_append_str(buf_427,"*");
                        }
                        i_428++;
                        /*i*/come_call_finalizer3(come_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_429,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_432=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 838, "CVALUE"))));
                    __dec_obj196=come_value_432->c_value;
                    come_value_432->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_427));
                    /*G*/ __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_432->var=((void*)0);
                    __dec_obj197=come_value_432->type;
                    come_value_432->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 842, "sType")),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_362,1,(struct CVALUE*)come_increment_ref_count(come_value_432));
                    list$1tuple2$2charphsNodephph_push_back(params_241,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 845, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    /*i*/come_call_finalizer3(buf_427,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_value_432,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            /* U13 */array_method_name_395 = come_decrement_ref_count2(array_method_name_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1tuple2$2charphsNodephph_length(params_241)<list$1sTypeph_length(fun_340->mParamTypes)+(((method_block_243)?(-2):(0)))) {
            for(            ;            i_385<list$1sTypeph_length(fun_340->mParamTypes)+(((method_block_243)?(-2):(0)));            i_385++            ){
                default_param_433=(char*)come_increment_ref_count(string_clone(list$1charphp_operator_load_element(fun_340->mParamDefaultParametors,i_385)));
                param_name_434=((char*)come_null_check(list$1charphp_operator_load_element(fun_340->mParamNames,i_385), "20method.c", 854, 19));
                if(                default_param_433&&string_operator_not_equals(default_param_433,"")&&list$1CVALUEphp_operator_load_element(come_params_362,i_385)==((void*)0)) {
                    source_435=(struct buffer*)come_increment_ref_count(info->source);
                    p_436=info->p;
                    head_437=info->head;
                    sline_438=info->sline;
                    __dec_obj198=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(default_param_433));
                    come_call_finalizer3(__dec_obj198,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_439=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(                    !node_compile(node_439,info)) {
                        __result221__ = (_Bool)0;
                        /*i*/come_call_finalizer3(source_435,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_439) { node_439 = come_decrement_ref_count2(node_439, ((struct sNode*)node_439)->finalize, ((struct sNode*)node_439)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /* U13 */default_param_433 = come_decrement_ref_count2(default_param_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /* U13 */generics_fun_name_339 = come_decrement_ref_count2(generics_fun_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_356,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_358,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_362,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_240 = come_decrement_ref_count2(fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(params_241,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_242) { obj_242 = come_decrement_ref_count2(obj_242, ((struct sNode*)obj_242)->finalize, ((struct sNode*)obj_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(method_block_243,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_before_248,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(obj_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(obj_type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result221__;
                    }
                    __dec_obj199=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_435);
                    come_call_finalizer3(__dec_obj199,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=p_436;
                    info->head=head_437;
                    info->sline=sline_438;
                    come_value_440=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_358,i_385), "20method.c", 878, 20))) {
                        check_assign_type(((char*)(__right_value405=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value403=string_to_string(fun_name_240))),((char*)(__right_value404=int_to_string(i_385)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_358,i_385), "20method.c", 879, 21)),come_value_440->type,come_value_440,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        /* U11 */__right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U11 */__right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        /* U11 */__right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    if(                    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_358,i_385), "20method.c", 881, 22))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_358,i_385), "20method.c", 881, 23))->mHeap&&come_value_440->type->mHeap) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_358,i_385), "20method.c", 882, 24)),come_value_440->type,come_value_440,info,(_Bool)1);
                    }
                    list$1CVALUEph_replace(come_params_362,i_385,(struct CVALUE*)come_increment_ref_count(come_value_440));
                    dec_stack_ptr(1,info);
                    /*i*/come_call_finalizer3(source_435,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_439) { node_439 = come_decrement_ref_count2(node_439, ((struct sNode*)node_439)->finalize, ((struct sNode*)node_439)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_440,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(                    list$1CVALUEphp_operator_load_element(come_params_362,i_385)==((void*)0)) {
                        err_msg(info,"require parametor(%s) %d",fun_340->mName,i_385);
                        __result222__ = (_Bool)0;
                        /* U13 */default_param_433 = come_decrement_ref_count2(default_param_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /* U13 */generics_fun_name_339 = come_decrement_ref_count2(generics_fun_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type_356,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(result_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_types_358,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(come_params_362,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_240 = come_decrement_ref_count2(fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(params_241,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_242) { obj_242 = come_decrement_ref_count2(obj_242, ((struct sNode*)obj_242)->finalize, ((struct sNode*)obj_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(method_block_243,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(method_generics_types_before_248,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(obj_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(obj_type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result222__;
                    }
                }
                /* U13 */default_param_433 = come_decrement_ref_count2(default_param_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(        method_block_243) {
            if(            !compile_method_block(method_block_243,(struct list$1CVALUEph*)come_increment_ref_count(come_params_362),fun_340,fun_name_240,method_block_sline_244,info,(_Bool)0)) {
                __result223__ = (_Bool)0;
                /* U13 */generics_fun_name_339 = come_decrement_ref_count2(generics_fun_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_356,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_358,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_params_362,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name_240 = come_decrement_ref_count2(fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(params_241,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(obj_242) { obj_242 = come_decrement_ref_count2(obj_242, ((struct sNode*)obj_242)->finalize, ((struct sNode*)obj_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(method_block_243,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(method_generics_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(method_generics_types_before_248,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result223__;
            }
        }
        buf_441=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 902, "buffer"))));
        buffer_append_str(buf_441,generics_fun_name_339);
        buffer_append_str(buf_441,"(");
        j_442=0;
        for(        o2_saved_443=(struct list$1CVALUEph*)come_increment_ref_count((come_params_362)),it_444=list$1CVALUEph_begin((o2_saved_443));        !list$1CVALUEph_end((o2_saved_443));        it_444=list$1CVALUEph_next((o2_saved_443))        ){
            buffer_append_str(buf_441,it_444->c_value);
            if(            j_442!=list$1CVALUEph_length(come_params_362)-1) {
                buffer_append_str(buf_441,",");
            }
            j_442++;
        }
        /*i*/come_call_finalizer3(o2_saved_443,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_441,")");
        come_value2_445=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 921, "CVALUE"))));
        __dec_obj200=come_value2_445->c_value;
        come_value2_445->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_441));
        /*G*/ __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj201=come_value2_445->type;
        come_value2_445->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_357));
        come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_445->type->mStatic=(_Bool)0;
        come_value2_445->var=((void*)0);
        if(        result_type2_357->mHeap) {
            append_object_to_right_values2(come_value2_445,(struct sType*)come_increment_ref_count(result_type2_357),info,(_Bool)0);
        }
        __dec_obj202=come_value2_445->c_value;
        come_value2_445->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_445->c_value,come_value2_445->type,info));
        /*G*/ __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value2_445->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_445));
        if(        is_contained_method_generics_types(obj_type_250,info)&&generics_fun_name_339) {
            map$2charphsFunph_remove(info->funcs,generics_fun_name_339);
        }
        /*i*/come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj203=info->method_generics_types;
        info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_248);
        come_call_finalizer3(__dec_obj203,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=fun_340;
        /* U13 */generics_fun_name_339 = come_decrement_ref_count2(generics_fun_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_356,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_358,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_params_362,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_441,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result224__ = (_Bool)1;
    /* U13 */fun_name_240 = come_decrement_ref_count2(fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(params_241,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(obj_242) { obj_242 = come_decrement_ref_count2(obj_242, ((struct sNode*)obj_242)->finalize, ((struct sNode*)obj_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(method_block_243,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types_246,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types_before_248,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result224__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result154__;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_232;
struct list_item$1tuple2$2charphsNodephph* it_233;
void* __right_value237 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result159__;
    if(    self==((void*)0)) {
        __result154__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    result_232=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 139, "list$1tuple2$2charphsNodephph"))));
    it_233=self->head;
    while(it_233!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_232,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_233->item)));
        it_233=it_233->next;
    }
    __result159__ = gComeFunResultObject = __result_obj__ = result_232;
    /*i*/come_call_finalizer3(result_232,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1tuple2$2charphsNodephph* it_230;
struct list_item$1tuple2$2charphsNodephph* prev_it_231;
    it_230=self->head;
    while(it_230!=((void*)0)) {
        prev_it_231=it_230;
        it_230=it_230->next;
        /*i*/come_call_finalizer3(prev_it_231,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj130;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj130=self->item;
            come_call_finalizer3(__dec_obj130,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value231 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_234;
struct tuple2$2charphsNodeph* __dec_obj133;
void* __right_value232 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_235;
struct tuple2$2charphsNodeph* __dec_obj136;
void* __right_value233 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_236;
struct tuple2$2charphsNodeph* __dec_obj139;
struct list$1tuple2$2charphsNodephph* __result156__;
    if(    self->len==0) {
        litem_234=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value231=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 153, "list_item$1tuple2$2charphsNodephph"))));
        litem_234->prev=((void*)0);
        litem_234->next=((void*)0);
        __dec_obj133=litem_234->item;
        litem_234->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj133,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_234;
        self->head=litem_234;
    }
    else if(    self->len==1) {
        litem_235=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value232=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 163, "list_item$1tuple2$2charphsNodephph"))));
        litem_235->prev=self->head;
        litem_235->next=((void*)0);
        __dec_obj136=litem_235->item;
        litem_235->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj136,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_235;
        self->head->next=litem_235;
    }
    else {
        litem_236=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value233=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 173, "list_item$1tuple2$2charphsNodephph"))));
        litem_236->prev=self->tail;
        litem_236->next=((void*)0);
        __dec_obj139=litem_236->item;
        litem_236->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj139,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_236;
        self->tail=litem_236;
    }
    self->len++;
    __result156__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result156__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj140;
struct sNode* __dec_obj141;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj140=self->v1;
            /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj141=self->v2;
            /* U1 */ if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result157__;
void* __right_value234 = (void*)0;
struct tuple2$2charphsNodeph* result_237;
void* __right_value235 = (void*)0;
char* __dec_obj142;
void* __right_value236 = (void*)0;
struct sNode* __dec_obj143;
struct tuple2$2charphsNodeph* __result158__;
    if(    self==(void*)0) {
        __result157__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    result_237=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj142=result_237->v1;
        result_237->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj143=result_237->v2;
        result_237->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        /* U1 */ if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result158__ = gComeFunResultObject = __result_obj__ = result_237;
    /*i*/come_call_finalizer3(result_237,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj144;
struct sNode* __dec_obj145;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj144=self->v1;
            /*G*/ __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj145=self->v2;
            /* U1 */ if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_238;
struct list_item$1tuple2$2charphsNodephph* prev_it_239;
    it_238=self->head;
    while(it_238!=((void*)0)) {
        prev_it_239=it_238;
        it_238=it_238->next;
        /*i*/come_call_finalizer3(prev_it_239,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
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
struct list_item$1CVALUEph* it_263;
int i_264;
struct CVALUE* __result165__;
struct CVALUE* default_value_265;
struct CVALUE* __result166__;
default_value_265 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_263=self->head;
    i_264=0;
    while(it_263!=((void*)0)) {
        if(        position==i_264) {
            __result165__ = gComeFunResultObject = __result_obj__ = it_263->item;
            gComeFunResultObject = (void*)0;
            return __result165__;
        }
        it_263=it_263->next;
        i_264++;
    }
    memset(&default_value_265,0,sizeof(struct CVALUE*));
    __result166__ = gComeFunResultObject = __result_obj__ = default_value_265;
    /*i*/come_call_finalizer3(default_value_265,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
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
int len_271;
int i_272;
struct sType* default_value_273;
struct list$1sTypeph* __result168__;
struct list_item$1sTypeph* it_277;
int i_278;
struct sType* __dec_obj161;
struct list$1sTypeph* __result169__;
default_value_273 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_271=self->len;
        for(        i_272=0;        i_272<position-len_271;        i_272++        ){
            memset(&default_value_273,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_273));
            /*i*/come_call_finalizer3(default_value_273,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result168__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    it_277=self->head;
    i_278=0;
    while(it_277!=((void*)0)) {
        if(        position==i_278) {
            __dec_obj161=it_277->item;
            it_277->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_277=it_277->next;
        i_278++;
    }
    __result169__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value258 = (void*)0;
struct list_item$1sTypeph* litem_274;
struct sType* __dec_obj158;
void* __right_value259 = (void*)0;
struct list_item$1sTypeph* litem_275;
struct sType* __dec_obj159;
void* __right_value260 = (void*)0;
struct list_item$1sTypeph* litem_276;
struct sType* __dec_obj160;
struct list$1sTypeph* __result167__;
    if(    self->len==0) {
        litem_274=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value258=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 223, "list_item$1sTypeph"))));
        litem_274->prev=((void*)0);
        litem_274->next=((void*)0);
        __dec_obj158=litem_274->item;
        litem_274->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_274;
        self->head=litem_274;
    }
    else if(    self->len==1) {
        litem_275=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value259=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 233, "list_item$1sTypeph"))));
        litem_275->prev=self->head;
        litem_275->next=((void*)0);
        __dec_obj159=litem_275->item;
        litem_275->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj159,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_275;
        self->head->next=litem_275;
    }
    else {
        litem_276=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value260=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 243, "list_item$1sTypeph"))));
        litem_276->prev=self->tail;
        litem_276->next=((void*)0);
        __dec_obj160=litem_276->item;
        litem_276->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_276;
        self->tail=litem_276;
    }
    self->len++;
    __result167__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result167__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_286;
struct tuple2$2charphsNodeph* __result171__;
struct tuple2$2charphsNodeph* __result172__;
struct tuple2$2charphsNodeph* result_287;
struct tuple2$2charphsNodeph* __result173__;
result_286 = (void*)0;
result_287 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_286,0,sizeof(struct tuple2$2charphsNodeph*));
        __result171__ = gComeFunResultObject = __result_obj__ = result_286;
        gComeFunResultObject = (void*)0;
        return __result171__;
    }
    self->it=self->head;
    if(    self->it) {
        __result172__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result172__;
    }
    memset(&result_287,0,sizeof(struct tuple2$2charphsNodeph*));
    __result173__ = gComeFunResultObject = __result_obj__ = result_287;
    gComeFunResultObject = (void*)0;
    return __result173__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_289;
struct tuple2$2charphsNodeph* __result174__;
struct tuple2$2charphsNodeph* __result175__;
struct tuple2$2charphsNodeph* result_290;
struct tuple2$2charphsNodeph* __result176__;
result_289 = (void*)0;
result_290 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_289,0,sizeof(struct tuple2$2charphsNodeph*));
        __result174__ = gComeFunResultObject = __result_obj__ = result_289;
        gComeFunResultObject = (void*)0;
        return __result174__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result175__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result175__;
    }
    memset(&result_290,0,sizeof(struct tuple2$2charphsNodeph*));
    __result176__ = gComeFunResultObject = __result_obj__ = result_290;
    gComeFunResultObject = (void*)0;
    return __result176__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_314;
struct tuple2$2charphsTypeph* __result179__;
struct tuple2$2charphsTypeph* __result180__;
struct tuple2$2charphsTypeph* result_315;
struct tuple2$2charphsTypeph* __result181__;
result_314 = (void*)0;
result_315 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_314,0,sizeof(struct tuple2$2charphsTypeph*));
        __result179__ = gComeFunResultObject = __result_obj__ = result_314;
        gComeFunResultObject = (void*)0;
        return __result179__;
    }
    self->it=self->head;
    if(    self->it) {
        __result180__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result180__;
    }
    memset(&result_315,0,sizeof(struct tuple2$2charphsTypeph*));
    __result181__ = gComeFunResultObject = __result_obj__ = result_315;
    gComeFunResultObject = (void*)0;
    return __result181__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_317;
struct tuple2$2charphsTypeph* __result182__;
struct tuple2$2charphsTypeph* __result183__;
struct tuple2$2charphsTypeph* result_318;
struct tuple2$2charphsTypeph* __result184__;
result_317 = (void*)0;
result_318 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_317,0,sizeof(struct tuple2$2charphsTypeph*));
        __result182__ = gComeFunResultObject = __result_obj__ = result_317;
        gComeFunResultObject = (void*)0;
        return __result182__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result183__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result183__;
    }
    memset(&result_318,0,sizeof(struct tuple2$2charphsTypeph*));
    __result184__ = gComeFunResultObject = __result_obj__ = result_318;
    gComeFunResultObject = (void*)0;
    return __result184__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_332;
struct CVALUE* __result186__;
struct CVALUE* __result187__;
struct CVALUE* result_333;
struct CVALUE* __result188__;
result_332 = (void*)0;
result_333 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_332,0,sizeof(struct CVALUE*));
        __result186__ = gComeFunResultObject = __result_obj__ = result_332;
        gComeFunResultObject = (void*)0;
        return __result186__;
    }
    self->it=self->head;
    if(    self->it) {
        __result187__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result187__;
    }
    memset(&result_333,0,sizeof(struct CVALUE*));
    __result188__ = gComeFunResultObject = __result_obj__ = result_333;
    gComeFunResultObject = (void*)0;
    return __result188__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_335;
struct CVALUE* __result189__;
struct CVALUE* __result190__;
struct CVALUE* result_336;
struct CVALUE* __result191__;
result_335 = (void*)0;
result_336 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_335,0,sizeof(struct CVALUE*));
        __result189__ = gComeFunResultObject = __result_obj__ = result_335;
        gComeFunResultObject = (void*)0;
        return __result189__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result190__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result190__;
    }
    memset(&result_336,0,sizeof(struct CVALUE*));
    __result191__ = gComeFunResultObject = __result_obj__ = result_336;
    gComeFunResultObject = (void*)0;
    return __result191__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_346;
unsigned int hash_347;
unsigned int it_348;
struct sFun* __result192__;
struct sFun* __result193__;
struct sFun* __result194__;
struct sFun* __result195__;
default_value_346 = (void*)0;
    memset(&default_value_346,0,sizeof(struct sFun*));
    hash_347=string_get_hash_key(((char*)key))%self->size;
    it_348=hash_347;
    while((_Bool)1) {
        if(        self->item_existance[it_348]) {
            if(            string_equals(self->keys[it_348],key)) {
                __result192__ = gComeFunResultObject = __result_obj__ = self->items[it_348];
                /*i*/come_call_finalizer3(default_value_346,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result192__;
            }
            it_348++;
            if(            it_348>=self->size) {
                it_348=0;
            }
            else if(            it_348==hash_347) {
                __result193__ = gComeFunResultObject = __result_obj__ = default_value_346;
                /*i*/come_call_finalizer3(default_value_346,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result193__;
            }
        }
        else {
            __result194__ = gComeFunResultObject = __result_obj__ = default_value_346;
            /*i*/come_call_finalizer3(default_value_346,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result194__;
        }
    }
    __result195__ = gComeFunResultObject = __result_obj__ = default_value_346;
    /*i*/come_call_finalizer3(default_value_346,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result195__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj176;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj176=self->v2;
            /*G*/ __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value321 = (void*)0;
struct list_item$1CVALUEph* litem_364;
struct CVALUE* __dec_obj179;
void* __right_value322 = (void*)0;
struct list_item$1CVALUEph* litem_365;
struct CVALUE* __dec_obj180;
void* __right_value323 = (void*)0;
struct list_item$1CVALUEph* litem_366;
struct CVALUE* __dec_obj181;
struct list$1CVALUEph* __result200__;
    if(    self->len==0) {
        litem_364=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value321=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 153, "list_item$1CVALUEph"))));
        litem_364->prev=((void*)0);
        litem_364->next=((void*)0);
        __dec_obj179=litem_364->item;
        litem_364->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_364;
        self->head=litem_364;
    }
    else if(    self->len==1) {
        litem_365=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value322=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 163, "list_item$1CVALUEph"))));
        litem_365->prev=self->head;
        litem_365->next=((void*)0);
        __dec_obj180=litem_365->item;
        litem_365->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_365;
        self->head->next=litem_365;
    }
    else {
        litem_366=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value323=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 173, "list_item$1CVALUEph"))));
        litem_366->prev=self->tail;
        litem_366->next=((void*)0);
        __dec_obj181=litem_366->item;
        litem_366->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj181,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_366;
        self->tail=litem_366;
    }
    self->len++;
    __result200__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_375;
char* __result202__;
char* __result203__;
char* result_376;
char* __result204__;
result_375 = (void*)0;
result_376 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_375,0,sizeof(char*));
        __result202__ = gComeFunResultObject = __result_obj__ = result_375;
        gComeFunResultObject = (void*)0;
        return __result202__;
    }
    self->it=self->head;
    if(    self->it) {
        __result203__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    memset(&result_376,0,sizeof(char*));
    __result204__ = gComeFunResultObject = __result_obj__ = result_376;
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_378;
char* __result205__;
char* __result206__;
char* result_379;
char* __result207__;
result_378 = (void*)0;
result_379 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_378,0,sizeof(char*));
        __result205__ = gComeFunResultObject = __result_obj__ = result_378;
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result206__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    memset(&result_379,0,sizeof(char*));
    __result207__ = gComeFunResultObject = __result_obj__ = result_379;
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_380;
int i_381;
struct CVALUE* default_value_382;
struct list$1CVALUEph* __result208__;
struct list_item$1CVALUEph* it_383;
int i_384;
struct CVALUE* __dec_obj182;
struct list$1CVALUEph* __result209__;
default_value_382 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_380=self->len;
        for(        i_381=0;        i_381<position-len_380;        i_381++        ){
            memset(&default_value_382,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_382));
            /*i*/come_call_finalizer3(default_value_382,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result208__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    it_383=self->head;
    i_384=0;
    while(it_383!=((void*)0)) {
        if(        position==i_384) {
            __dec_obj182=it_383->item;
            it_383->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_383=it_383->next;
        i_384++;
    }
    __result209__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_390;
int i_391;
char* __result210__;
char* default_value_392;
char* __result211__;
default_value_392 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_390=self->head;
    i_391=0;
    while(it_390!=((void*)0)) {
        if(        position==i_391) {
            __result210__ = gComeFunResultObject = __result_obj__ = it_390->item;
            gComeFunResultObject = (void*)0;
            return __result210__;
        }
        it_390=it_390->next;
        i_391++;
    }
    memset(&default_value_392,0,sizeof(char*));
    __result211__ = gComeFunResultObject = __result_obj__ = default_value_392;
    /* U13 */default_value_392 = come_decrement_ref_count2(default_value_392, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_399;
struct sNode* __result213__;
struct sNode* __result214__;
struct sNode* result_400;
struct sNode* __result215__;
result_399 = (void*)0;
result_400 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_399,0,sizeof(struct sNode*));
        __result213__ = gComeFunResultObject = __result_obj__ = result_399;
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    self->it=self->head;
    if(    self->it) {
        __result214__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    memset(&result_400,0,sizeof(struct sNode*));
    __result215__ = gComeFunResultObject = __result_obj__ = result_400;
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_402;
struct sNode* __result216__;
struct sNode* __result217__;
struct sNode* result_403;
struct sNode* __result218__;
result_402 = (void*)0;
result_403 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_402,0,sizeof(struct sNode*));
        __result216__ = gComeFunResultObject = __result_obj__ = result_402;
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result217__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    memset(&result_403,0,sizeof(struct sNode*));
    __result218__ = gComeFunResultObject = __result_obj__ = result_403;
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value345 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_406;
struct tuple2$2charphsNodeph* __dec_obj185;
void* __right_value346 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_407;
struct tuple2$2charphsNodeph* __dec_obj186;
void* __right_value347 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_408;
struct tuple2$2charphsNodeph* __dec_obj187;
struct list$1tuple2$2charphsNodephph* __result219__;
    if(    self->len==0) {
        litem_406=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value345=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 223, "list_item$1tuple2$2charphsNodephph"))));
        litem_406->prev=((void*)0);
        litem_406->next=((void*)0);
        __dec_obj185=litem_406->item;
        litem_406->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj185,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_406;
        self->head=litem_406;
    }
    else if(    self->len==1) {
        litem_407=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value346=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 233, "list_item$1tuple2$2charphsNodephph"))));
        litem_407->prev=self->head;
        litem_407->next=((void*)0);
        __dec_obj186=litem_407->item;
        litem_407->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj186,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_407;
        self->head->next=litem_407;
    }
    else {
        litem_408=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value347=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 243, "list_item$1tuple2$2charphsNodephph"))));
        litem_408->prev=self->tail;
        litem_408->next=((void*)0);
        __dec_obj187=litem_408->item;
        litem_408->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj187,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_408;
        self->tail=litem_408;
    }
    self->len++;
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__=(void*)0;
char* __dec_obj188;
struct tuple2$2charphvoidp* __result220__;
    __dec_obj188=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj189;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj189=self->v1;
            /*G*/ __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value422 = (void*)0;
struct sNode* node_446;
void* __right_value423 = (void*)0;
struct sNode* __dec_obj216;
struct sNode* __result227__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 954, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sMethodCallNode*)(__right_value414=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 954, "sMethodCallNode")),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_446=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*g*/come_call_finalizer3(__right_value414,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj216=node_446;
    node_446=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_446),info));
    /* U1 */ if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); };
    __result227__ = gComeFunResultObject = __result_obj__ = node_446;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_446) { node_446 = come_decrement_ref_count2(node_446, ((struct sNode*)node_446)->finalize, ((struct sNode*)node_446)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result227__;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_448;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
_Bool parse_method_generics_type_449;
char* p_450;
int sline_451;
void* __right_value429 = (void*)0;
char* word_452;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1sTypeph* method_generics_types_453;
void* __right_value432 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_454=0;
char* name_455=0;
_Bool err_456=0;
void* __right_value433 = (void*)0;
char* p_457;
int sline_458;
_Bool err_flag_459;
void* __right_value434 = (void*)0;
char* label_460;
void* __right_value435 = (void*)0;
char* __dec_obj221;
char* __dec_obj222;
_Bool no_comma_461;
_Bool in_fun_param_462;
void* __right_value436 = (void*)0;
struct sNode* node_463;
void* __right_value437 = (void*)0;
struct sNode* __dec_obj223;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct buffer* method_block_464;
int method_block_sline_465;
char* head_466;
void* __right_value440 = (void*)0;
char* tail_467;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct buffer* __dec_obj224;
int len_468;
void* __right_value443 = (void*)0;
char* mem_469;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value454 = (void*)0;
struct sNode* node_470;
void* __right_value455 = (void*)0;
struct sNode* __dec_obj237;
struct sNode* __result231__;
    params_448=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 963, "list$1tuple2$2charphsNodephph"))));
    list$1tuple2$2charphsNodephph_push_back(params_448,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 964, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(sNode_clone(obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_449=(_Bool)0;
    {
        p_450=info->p;
        sline_451=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_452=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_452,info)) {
                    parse_method_generics_type_449=(_Bool)1;
                }
                /* U13 */word_452 = come_decrement_ref_count2(word_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_450;
        info->sline=sline_451;
    }
    method_generics_types_453=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 994, "list$1sTypeph"))));
    if(    parse_method_generics_type_449&&*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else if(            *info->p==62) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value432=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_454=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_455=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_456=multiple_assign_var9->v3;
                /*g*/come_call_finalizer3(__right_value432,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_456) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_453,(struct sType*)come_increment_ref_count(sType_clone(type_454)));
                /*i*/come_call_finalizer3(type_454,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name_455 = come_decrement_ref_count2(name_455, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    if(    *info->p!=123) {
        expected_next_character(40,info);
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_457=info->p;
            sline_458=info->sline;
            err_flag_459=(_Bool)0;
            label_460=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj221=label_460;
                label_460=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_459=(_Bool)1;
            }
            if(            err_flag_459==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj222=label_460;
                label_460=((void*)0);
                /*G*/ __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_457;
                info->sline=sline_458;
            }
            no_comma_461=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_462=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_463=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj223=node_463;
            node_463=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_463),info));
            /* U1 */ if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); };
            info->in_fun_param=in_fun_param_462;
            info->no_comma=no_comma_461;
            list$1tuple2$2charphsNodephph_push_back(params_448,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1070, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_460),(struct sNode*)come_increment_ref_count(node_463))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                /* U13 */label_460 = come_decrement_ref_count2(label_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_463) { node_463 = come_decrement_ref_count2(node_463, ((struct sNode*)node_463)->finalize, ((struct sNode*)node_463)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            /* U13 */label_460 = come_decrement_ref_count2(label_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_463) { node_463 = come_decrement_ref_count2(node_463, ((struct sNode*)node_463)->finalize, ((struct sNode*)node_463)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    method_block_464=((void*)0);
    method_block_sline_465=0;
    if(    *info->p==123) {
        head_466=info->p;
        method_block_sline_465=info->sline;
        ((char*)(__right_value440=skip_block(info)));
        /* U11 */__right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_467=info->p;
        __dec_obj224=method_block_464;
        method_block_464=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1094, "buffer"))));
        come_call_finalizer3(__dec_obj224,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_468=tail_467-head_466;
        mem_469=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_468+1)), "20method.c", 1097, "char"));
        memcpy(mem_469,head_466,len_468);
        mem_469[len_468]=0;
        buffer_append_str(method_block_464,mem_469);
        buffer_append_str(method_block_464,"\n");
        /* U13 */mem_469 = come_decrement_ref_count2(mem_469, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    parse_sharp_v5(info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1109, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sMethodCallNode*)(__right_value446=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1109, "sMethodCallNode")),fun_name,(struct sNode*)come_increment_ref_count(sNode_clone(obj)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_448),method_block_464,method_block_sline_465,method_generics_types_453,(_Bool)0,(_Bool)1,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sMethodCallNode_finalize;
    _inf_value3->clone=(void*)sMethodCallNode_clone;
    _inf_value3->compile=(void*)sMethodCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sMethodCallNode_terminated;
    _inf_value3->kind=(void*)sMethodCallNode_kind;
    node_470=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value446,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj237=node_470;
    node_470=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_470),info));
    /* U1 */ if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); };
    __result231__ = gComeFunResultObject = __result_obj__ = node_470;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(params_448,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_types_453,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_block_464,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_470) { node_470 = come_decrement_ref_count2(node_470, ((struct sNode*)node_470)->finalize, ((struct sNode*)node_470)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj217;
struct sNode* __dec_obj218;
struct tuple2$2charphsNodeph* __result228__;
    __dec_obj217=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj218=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    /* U1 */ if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); };
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj219;
char* __dec_obj220;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj219=self->v1;
            come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj220=self->v2;
            /*G*/ __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
char* __dec_obj225;
struct sNode* __dec_obj226;
char* __dec_obj227;
struct list$1tuple2$2charphsNodephph* __dec_obj228;
struct buffer* __dec_obj229;
struct list$1sTypeph* __dec_obj230;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj225=self->sname;
            /*G*/ __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        if(        self->obj==gComeFunResultObject) {
            __dec_obj226=self->obj;
            /* U1 */ if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj227=self->fun_name;
            /*G*/ __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj228=self->params;
            come_call_finalizer3(__dec_obj228,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj229=self->method_block;
            come_call_finalizer3(__dec_obj229,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj230=self->method_generics_types;
            come_call_finalizer3(__dec_obj230,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
struct sMethodCallNode* __result229__;
void* __right_value447 = (void*)0;
struct sMethodCallNode* result_471;
void* __right_value448 = (void*)0;
char* __dec_obj231;
void* __right_value449 = (void*)0;
struct sNode* __dec_obj232;
void* __right_value450 = (void*)0;
char* __dec_obj233;
void* __right_value451 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj234;
void* __right_value452 = (void*)0;
struct buffer* __dec_obj235;
void* __right_value453 = (void*)0;
struct list$1sTypeph* __dec_obj236;
struct sMethodCallNode* __result230__;
    if(    self==(void*)0) {
        __result229__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    result_471=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "sMethodCallNode"));
    if(    self!=((void*)0)) {
        result_471->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj231=result_471->sname;
        result_471->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj232=result_471->obj;
        result_471->obj=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj));
        /* U1 */ if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj233=result_471->fun_name;
        result_471->fun_name=(char*)come_increment_ref_count(string_clone(self->fun_name));
        /*G*/ __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj234=result_471->params;
        result_471->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj234,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj235=result_471->method_block;
        result_471->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer3(__dec_obj235,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_471->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj236=result_471->method_generics_types;
        result_471->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
        come_call_finalizer3(__dec_obj236,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_471->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_471->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_471->fun=self->fun;
    }
    __result230__ = gComeFunResultObject = __result_obj__ = result_471;
    /*i*/come_call_finalizer3(result_471,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode* _inf_obj_value4;
void* __right_value460 = (void*)0;
struct sNode* __result234__;
void* __right_value461 = (void*)0;
struct sNode* __result235__;
    if(    charp_operator_equals(buf,"__current__")) {
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1119, "struct sNode");
        _inf_obj_value4=come_increment_ref_count(((struct sCurrentNode*)(__right_value457=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1119, "sCurrentNode")),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sCurrentNode_finalize;
        _inf_value4->clone=(void*)sCurrentNode_clone;
        _inf_value4->compile=(void*)sCurrentNode_compile;
        _inf_value4->sline=(void*)sCurrentNode_sline;
        _inf_value4->sname=(void*)sCurrentNode_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sCurrentNode_kind;
        __result234__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value460=_inf_value4));
        /*g*/come_call_finalizer3(__right_value457,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value460) { __right_value460 = come_decrement_ref_count2(__right_value460, ((struct sNode*)__right_value460)->finalize, ((struct sNode*)__right_value460)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value461=string_node_v17(buf,head,head_sline,info)));
    if(__right_value461) { __right_value461 = come_decrement_ref_count2(__right_value461, ((struct sNode*)__right_value461)->finalize, ((struct sNode*)__right_value461)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
char* __dec_obj238;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj238=self->sname;
            /*G*/ __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
struct sCurrentNode* __result232__;
void* __right_value458 = (void*)0;
struct sCurrentNode* result_472;
void* __right_value459 = (void*)0;
char* __dec_obj239;
struct sCurrentNode* __result233__;
    if(    self==(void*)0) {
        __result232__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_472=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "sCurrentNode"));
    if(    self!=((void*)0)) {
        result_472->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj239=result_472->sname;
        result_472->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_472;
    /*i*/come_call_finalizer3(result_472,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

