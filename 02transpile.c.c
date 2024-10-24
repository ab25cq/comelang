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
    unsigned long unsigned  long ri_reserved[12];
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
typedef __builtin_va_list va_list;
typedef __builtin_va_list __gnuc_va_list;
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
struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
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
struct __current_stack2__
{
    int* n_73;
    char** msg2_67;
    char** p_69;
    char** last_lf_70;
    struct sInfo** info;
    char** msg;
};
struct __current_stack3__
{
    struct sInfo* info_318;
    struct buffer** clang_option_301;
    struct buffer** cpp_option_302;
    struct list$1charph** files_303;
    struct list$1charph** object_files_304;
    _Bool* output_object_file_305;
    _Bool* output_cpp_file_306;
    _Bool* output_source_file_flag_307;
    char** output_file_name_308;
    _Bool* verbose_309;
    _Bool* come_debug_310;
    _Bool* come_malloc_311;
    int* argc;
    char*** argv;
};

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6);
int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9);
int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14);
void clearerr(struct __sFILE* anonymous_var_nameX35);
int fclose(struct __sFILE* anonymous_var_nameX36);
int feof(struct __sFILE* anonymous_var_nameX37);
int ferror(struct __sFILE* anonymous_var_nameX38);
int fflush(struct __sFILE* anonymous_var_nameX39);
int fgetc(struct __sFILE* anonymous_var_nameX40);
int fgetpos(struct __sFILE* anonymous_var_nameX41, long  long* anonymous_var_nameX42);
char* fgets(char* anonymous_var_nameX43, int anonymous_var_nameX44, struct __sFILE* anonymous_var_nameX45);
struct __sFILE* fopen(const char* __filename, const char* __mode);
int fprintf(struct __sFILE* anonymous_var_nameX46, const char* anonymous_var_nameX47, ...);
int fputc(int anonymous_var_nameX48, struct __sFILE* anonymous_var_nameX49);
int fputs(const char* anonymous_var_nameX50, struct __sFILE* anonymous_var_nameX51);
unsigned long unsigned  int fread(void* __ptr, unsigned long unsigned  int __size, unsigned long unsigned  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX52, const char* anonymous_var_nameX53, struct __sFILE* anonymous_var_nameX54);
int fscanf(struct __sFILE* anonymous_var_nameX55, const char* anonymous_var_nameX56, ...);
int fseek(struct __sFILE* anonymous_var_nameX57, long anonymous_var_nameX58, int anonymous_var_nameX59);
int fsetpos(struct __sFILE* anonymous_var_nameX60, const long  long* anonymous_var_nameX61);
long ftell(struct __sFILE* anonymous_var_nameX62);
unsigned long unsigned  int fwrite(const void* __ptr, unsigned long unsigned  int __size, unsigned long unsigned  int __nitems, struct __sFILE* __stream);
int getc(struct __sFILE* anonymous_var_nameX63);
int getchar();
char* gets(char* anonymous_var_nameX64);
void perror(const char* anonymous_var_nameX65);
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
void* valloc(unsigned long unsigned  int anonymous_var_nameX206);
void* aligned_alloc(unsigned long unsigned  int __alignment, unsigned long unsigned  int __size);
int posix_memalign(void** __memptr, unsigned long unsigned  int __alignment, unsigned long unsigned  int __size);
int abs(int anonymous_var_nameX207);
int atexit(void (*anonymous_lambda_var_nameZ6)());
double atof(const char* anonymous_var_nameX208);
int atoi(const char* anonymous_var_nameX209);
long atol(const char* anonymous_var_nameX210);
long long atoll(const char* anonymous_var_nameX211);
void* bsearch(const void* __key, const void* __base, unsigned long unsigned  int __nel, unsigned long unsigned  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX5 div(int anonymous_var_nameX214, int anonymous_var_nameX215);
void exit(int anonymous_var_nameX216);
char* getenv(const char* anonymous_var_nameX217);
long labs(long anonymous_var_nameX218);
struct anonymous_typeX6 ldiv(long anonymous_var_nameX219, long anonymous_var_nameX220);
long long llabs(long  long anonymous_var_nameX221);
struct anonymous_typeX7 lldiv(long  long anonymous_var_nameX222, long  long anonymous_var_nameX223);
int mblen(const char* __s, unsigned long unsigned  int __n);
unsigned long unsigned  int mbstowcs(int* anonymous_var_nameX224, const char* anonymous_var_nameX225, unsigned long unsigned  int anonymous_var_nameX226);
int mbtowc(int* anonymous_var_nameX227, const char* anonymous_var_nameX228, unsigned long unsigned  int anonymous_var_nameX229);
void qsort(void* __base, unsigned long unsigned  int __nel, unsigned long unsigned  int __width, int (*__compar)(const void*,const void*));
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
int atexit_b(void (*anonymous_lambda_var_nameZ7)());
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
void abort();
int printf(const char* anonymous_var_nameX373, ...);
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
_Bool sNodeBase_terminated(struct sNodeBase* self);
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
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, _Bool throw_or_rescue, struct sInfo* info);
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
struct sNode* create_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_catch_method_call(struct sNode* expression_node, struct sInfo* info);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, _Bool throw_or_rescue, struct sInfo* info);
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
static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
void err_msg(struct sInfo* info, char* msg, ...);
static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1charph* list$1charph_map2(struct list$1charph* self, void* parent, char* (*block)(void*,char*));
char* method_block2_02transpilec(struct __current_stack2__* parent, char* it);
static char* list$1charph_join(struct list$1charph* self, char* sep);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
static void clear_tmp_file(struct sInfo* info);
static void clear_tmp_file_without_object_file(struct sInfo* info);
static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files);
static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item);
static _Bool linker(struct sInfo* info, struct list$1charph* object_files);
_Bool new_project(int argc, char** argv);
_Bool run_project(int argc, char** argv);
_Bool make_header_project(int argc, char** argv);
_Bool compile_project(int argc, char** argv);
_Bool debug_run_project(int argc, char** argv);
_Bool clean_project(int argc, char** argv);
_Bool install_project(int argc, char** argv, char* prefix);
static void init_classes(struct sInfo* info);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
int come_main_v2(int argc, char** argv);
static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void map$2charphsFunph_finalize(struct map$2charphsFunph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self);
static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self);
static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self);
static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self);
static void map$2charphsClassph_finalize(struct map$2charphsClassph* self);
static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self);
static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self);
static void sClassModule_finalize(struct sClassModule* self);
static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self);
static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self);
static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self);
static void sModule_finalize(struct sModule* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void sInfo_finalize(struct sInfo* self);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
void method_block3_02transpilec(struct __current_stack3__* parent);
// uniq global variable
// source head3
_Bool gComeGC=(_Bool)0;
_Bool gComeLink=(_Bool)1;
_Bool gComeC=(_Bool)1;
_Bool gComeStr=(_Bool)0;
_Bool gComeNet=(_Bool)0;
char* gProgramName=((void*)0);
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
static char* RM="rm -rf";

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










static void write_source_file_position_to_source(struct sInfo* info){
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
    if(gComeOriginalSourcePosition) {
        if(info->writing_source_file_position) {
            add_come_code(info,((char*)(__right_value118=xsprintf("# \%s \"\%s\"\n",((char*)(__right_value116=int_to_string(info->sline))),((char*)(__right_value117=string_to_string(info->sname)))))));
            __right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __right_value119 = (void*)0;
char* sname_64;
int sline_65;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
char* __dec_obj15;
_Bool result_66;
void* __right_value122 = (void*)0;
char* __dec_obj16;
_Bool __result65__;
    sname_64=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_65=info->sline;
    __dec_obj15=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value120=node->sname(node->_protocol_obj)))));
    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value120 = come_decrement_ref_count2(__right_value120, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    info->sline=node->sline(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_66=node->compile(node->_protocol_obj,info);
    __dec_obj16=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_64));
    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_65;
    __result65__ = result_66;
    sname_64 = come_decrement_ref_count2(sname_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result65__;
}

void err_msg(struct sInfo* info, char* msg, ...){
char* msg2_67;
va_list args_68;
char* p_69;
char* last_lf_70;
int col_71;
int col_72;
int n_73;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value130 = (void*)0;
struct __current_stack2__ __current_stack2__;
void* __right_value135 = (void*)0;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
msg2_67 = (void*)0;
memset(&args_68, 0, sizeof(va_list));
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(!info->no_output_err) {
        __builtin_va_start(args_68,msg);
        vasprintf(&msg2_67,msg,args_68);
        __builtin_va_end(args_68);
        p_69=info->p;
        last_lf_70=((void*)0);
        while(p_69>=info->head) {
            if(*p_69==10) {
                last_lf_70=p_69;
                break;
            }
            p_69--;
        }
        if(last_lf_70) {
            col_71=info->p-last_lf_70;
            printf("%s %d %d: %s\n",info->sname,info->sline,col_71,msg2_67);
        }
        else {
            col_72=info->p-info->head;
            printf("%s %d %d: %s\n",info->sname,info->sline,col_72,msg2_67);
        }
        info->err_num++;
        stackframe();
        if(info->come_fun) {
            n_73=info->sline-5;
            __current_stack2__.n_73 = &n_73;
            __current_stack2__.msg2_67 = &msg2_67;
            __current_stack2__.p_69 = &p_69;
            __current_stack2__.last_lf_70 = &last_lf_70;
            __current_stack2__.info = &info;
            __current_stack2__.msg = &msg;
            ((char*)(__right_value140=string_puts(((char*)(__right_value139=list$1charph_join(((struct list$1charph*)(__right_value135=list$1charph_map2(((struct list$1charph*)(__right_value130=list$1charph_sublist(((struct list$1charph*)(__right_value124=string_split_char(((char*)(__right_value123=buffer_to_string(info->original_source))),10))),n_73,n_73+10))),&__current_stack2__,(void*)method_block2_02transpilec))),"\n"))))));
            __right_value123 = come_decrement_ref_count2(__right_value123, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value124,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value130,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value135,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            __right_value139 = come_decrement_ref_count2(__right_value139, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        free(msg2_67);
    }
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct list$1charph* result_74;
struct list_item$1charph* it_77;
int i_78;
struct list$1charph* __result68__;
    result_74=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 651, "list$1charph"))));
    if(begin<0) {
        begin+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(begin<0) {
        begin=0;
    }
    if(tail>=self->len) {
        tail=self->len;
    }
    it_77=self->head;
    i_78=0;
    while(it_77!=((void*)0)) {
        if(i_78>=begin&&i_78<tail) {
            list$1charph_push_back(result_74,(char*)come_increment_ref_count(it_77->item));
        }
        it_77=it_77->next;
        i_78++;
    }
    __result68__ = gComeFunResultObject = __result_obj__ = result_74;
    /*i*/come_call_finalizer3(result_74,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result66__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_75;
struct list_item$1charph* prev_it_76;
    it_75=self->head;
    while(it_75!=((void*)0)) {
        prev_it_76=it_75;
        it_75=it_75->next;
        /*i*/come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj17;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj17=self->item;
            __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct list_item$1charph* litem_79;
char* __dec_obj18;
void* __right_value128 = (void*)0;
struct list_item$1charph* litem_80;
char* __dec_obj19;
void* __right_value129 = (void*)0;
struct list_item$1charph* litem_81;
char* __dec_obj20;
struct list$1charph* __result67__;
    if(self->len==0) {
        litem_79=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value127=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1charph"))));
        litem_79->prev=((void*)0);
        litem_79->next=((void*)0);
        __dec_obj18=litem_79->item;
        litem_79->item=(char*)come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_79;
        self->head=litem_79;
    }
    else {
        if(self->len==1) {
            litem_80=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value128=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1charph"))));
            litem_80->prev=self->head;
            litem_80->next=((void*)0);
            __dec_obj19=litem_80->item;
            litem_80->item=(char*)come_increment_ref_count(item);
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_80;
            self->head->next=litem_80;
        }
        else {
            litem_81=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value129=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1charph"))));
            litem_81->prev=self->tail;
            litem_81->next=((void*)0);
            __dec_obj20=litem_81->item;
            litem_81->item=(char*)come_increment_ref_count(item);
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_81;
            self->tail=litem_81;
        }
    }
    self->len++;
    __result67__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

static struct list$1charph* list$1charph_map2(struct list$1charph* self, void* parent, char* (*block)(void*,char*)){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct list$1charph* result_88;
struct list_item$1charph* it_89;
void* __right_value133 = (void*)0;
char* item_90;
struct list$1charph* __result73__;
    result_88=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 861, "list$1charph"))));
    it_89=self->head;
    while(it_89!=((void*)0)) {
        item_90=(char*)come_increment_ref_count(block(parent,it_89->item));
        list$1charph_push_back(result_88,(char*)come_increment_ref_count(item_90));
        it_89=it_89->next;
        item_90 = come_decrement_ref_count2(item_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result73__ = gComeFunResultObject = __result_obj__ = result_88;
    /*i*/come_call_finalizer3(result_88,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
}

char* method_block2_02transpilec(struct __current_stack2__* parent, char* it){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
char* __result74__;
    __result74__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value134=xsprintf("%d %s",++(*(parent->n_73)),it)));
    __right_value134 = come_decrement_ref_count2(__right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static char* list$1charph_join(struct list$1charph* self, char* sep){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
struct buffer* buf_91;
int n_92;
char* it_95;
void* __right_value138 = (void*)0;
char* __result81__;
    buf_91=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 957, "buffer"))));
    n_92=0;
    for(    it_95=list$1charph_begin(self);    !list$1charph_end(self);    it_95=list$1charph_next(self)    ){
        buffer_append_str(buf_91,it_95);
        if(n_92<list$1charph_length(self)-1) {
            buffer_append_str(buf_91,sep);
        }
        n_92++;
    }
    __result81__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value138=buffer_to_string(buf_91)));
    /*i*/come_call_finalizer3(buf_91,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value138 = come_decrement_ref_count2(__right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_93;
char* __result75__;
char* __result76__;
char* result_94;
char* __result77__;
result_93 = (void*)0;
result_94 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_93,0,sizeof(char*));
        __result75__ = gComeFunResultObject = __result_obj__ = result_93;
        gComeFunResultObject = (void*)0;
        return __result75__;
    }
    self->it=self->head;
    if(self->it) {
        __result76__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    memset(&result_94,0,sizeof(char*));
    __result77__ = gComeFunResultObject = __result_obj__ = result_94;
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_96;
char* __result78__;
char* __result79__;
char* result_97;
char* __result80__;
result_96 = (void*)0;
result_97 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_96,0,sizeof(char*));
        __result78__ = gComeFunResultObject = __result_obj__ = result_96;
        gComeFunResultObject = (void*)0;
        return __result78__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result79__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    memset(&result_97,0,sizeof(char*));
    __result80__ = gComeFunResultObject = __result_obj__ = result_97;
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static int list$1charph_length(struct list$1charph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

int transpile_v2(struct sInfo* info){
    return 0;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __right_value141 = (void*)0;
char* output_file_name_98;
void* __right_value142 = (void*)0;
_Bool __result82__;
    output_file_name_98=(char*)come_increment_ref_count(xsprintf("%s.c",info->sname));
    string_write(((char*)(__right_value142=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_98,(_Bool)0);
    __right_value142 = come_decrement_ref_count2(__right_value142, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result82__ = (_Bool)1;
    output_file_name_98 = come_decrement_ref_count2(output_file_name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result82__;
}

static void clear_tmp_file(struct sInfo* info){
char* input_file_name_99;
void* __right_value143 = (void*)0;
    input_file_name_99=(char*)come_increment_ref_count(info->sname);
    if(input_file_name_99!=((void*)0)&&string_operator_not_equals(input_file_name_99,"")) {
        system(((char*)(__right_value143=xsprintf("%s %s.*",RM,input_file_name_99))));
        __right_value143 = come_decrement_ref_count2(__right_value143, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    input_file_name_99 = come_decrement_ref_count2(input_file_name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file(struct sInfo* info){
char* input_file_name_100;
void* __right_value144 = (void*)0;
    input_file_name_100=(char*)come_increment_ref_count(info->sname);
    if(input_file_name_100!=((void*)0)&&string_operator_not_equals(input_file_name_100,"")) {
        system(((char*)(__right_value144=xsprintf("%s %s.i* %s.c*",RM,input_file_name_100,input_file_name_100))));
        __right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    input_file_name_100 = come_decrement_ref_count2(input_file_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info){
char* input_file_name_101;
void* __right_value145 = (void*)0;
    input_file_name_101=(char*)come_increment_ref_count(info->sname);
    if(input_file_name_101!=((void*)0)&&string_operator_not_equals(input_file_name_101,"")) {
        system(((char*)(__right_value145=xsprintf("%s %s.i* %s.c.out",RM,input_file_name_101,input_file_name_101))));
        __right_value145 = come_decrement_ref_count2(__right_value145, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    input_file_name_101 = come_decrement_ref_count2(input_file_name_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool cpp(struct sInfo* info){
char* input_file_name_102;
char* output_file_name_103;
void* __right_value146 = (void*)0;
char* __dec_obj21;
void* __right_value147 = (void*)0;
char* __dec_obj22;
void* __right_value148 = (void*)0;
char* cmd_104;
_Bool exist_common_h_105;
struct __sFILE* f_106;
int rc2_107;
int rc_108;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
char* cmd3_109;
int rc_110;
void* __right_value151 = (void*)0;
char* command2_111;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
char* cmd2_112;
int rc_113;
void* __right_value154 = (void*)0;
char* command2_114;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
char* cmd3_115;
void* __right_value157 = (void*)0;
char* cmd_debian_116;
int rc_debian_117;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
char* __dec_obj23;
int rc_118;
void* __right_value160 = (void*)0;
char* command2_119;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
char* cmd4_120;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
char* __dec_obj24;
void* __right_value165 = (void*)0;
char* command_121;
void* __right_value166 = (void*)0;
char* command2_122;
_Bool __result83__;
output_file_name_103 = (void*)0;
    input_file_name_102=(char*)come_increment_ref_count(info->sname);
    if(!info->output_header_file&&info->output_file_name) {
        __dec_obj21=output_file_name_103;
        output_file_name_103=(char*)come_increment_ref_count(string_operator_add(info->output_file_name,".i"));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj22=output_file_name_103;
        output_file_name_103=(char*)come_increment_ref_count(string_operator_add(info->sname,".i"));
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    cmd_104=(char*)come_increment_ref_count(xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"));
    exist_common_h_105=(_Bool)0;
    {
        f_106=fopen("common.h","r");
        if(f_106) {
            exist_common_h_105=(_Bool)1;
        }
        if(string_operator_equals(info->output_file_name,"common.h")) {
            exist_common_h_105=(_Bool)0;
        }
        if(f_106) {
            fclose(f_106);
        }
    }
    if(!gCommonHeader) {
        exist_common_h_105=(_Bool)0;
    }
    rc2_107=system("uname -a | grep Android 1> /dev/null 2>/dev/null");
    rc_108=system(cmd_104);
    if(rc2_107==0) {
        cmd3_109=(char*)come_increment_ref_count(xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -U__GNUC__ -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_105?((char*)(__right_value149=__builtin_string(" -include common.h "))):"",input_file_name_102,output_file_name_103,output_file_name_103));
        __right_value149 = come_decrement_ref_count2(__right_value149, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(info->verbose) {
            puts(cmd3_109);
        }
        rc_110=system(cmd3_109);
        command2_111=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_103));
        if(info->verbose) {
            puts(command2_111);
        }
        (void)system(command2_111);
        if(rc_110!=0) {
            printf("cpp failed\n");
            exit(2);
        }
        cmd3_109 = come_decrement_ref_count2(cmd3_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_111 = come_decrement_ref_count2(command2_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(rc_108==0) {
            cmd2_112=(char*)come_increment_ref_count(xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include -I/opt/homebrew/opt/mysql/include -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_105?((char*)(__right_value152=__builtin_string(" -include common.h "))):"",input_file_name_102,output_file_name_103,output_file_name_103));
            __right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(info->verbose) {
                puts(cmd2_112);
            }
            rc_113=system(cmd2_112);
            if(rc_113!=0) {
                printf("failed to cpp(2) (%s)\n",cmd2_112);
                exit(5);
            }
            command2_114=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_103));
            if(info->verbose) {
                puts(command2_114);
            }
            (void)system(command2_114);
            cmd2_112 = come_decrement_ref_count2(cmd2_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command2_114 = come_decrement_ref_count2(command2_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            cmd3_115=(char*)come_increment_ref_count(xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -U__GNUC__ -D__LINUX__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_105?((char*)(__right_value155=__builtin_string(" -include common.h "))):"",input_file_name_102,output_file_name_103,output_file_name_103));
            __right_value155 = come_decrement_ref_count2(__right_value155, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            cmd_debian_116=(char*)come_increment_ref_count(xsprintf("uname -a | grep Debian 1> /dev/null 2>/dev/null"));
            rc_debian_117=system(cmd_debian_116);
            if(rc_debian_117==0) {
                __dec_obj23=cmd3_115;
                cmd3_115=(char*)come_increment_ref_count(xsprintf("cpp -lang-c %s -I. -D__DEBIAN__ -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -U__GNUC__ -D__LINUX__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_105?((char*)(__right_value158=__builtin_string(" -include common.h "))):"",input_file_name_102,output_file_name_103,output_file_name_103));
                __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            if(info->verbose) {
                puts(cmd3_115);
            }
            rc_118=system(cmd3_115);
            command2_119=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_103));
            if(info->verbose) {
                puts(command2_119);
            }
            (void)system(command2_119);
            if(rc_118!=0) {
                cmd4_120=(char*)come_increment_ref_count(xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_105?((char*)(__right_value161=__builtin_string(" -include common.h "))):"",input_file_name_102,output_file_name_103,output_file_name_103));
                __right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(rc_debian_117==0) {
                    __dec_obj24=cmd4_120;
                    cmd4_120=(char*)come_increment_ref_count(xsprintf("cpp -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_105?((char*)(__right_value163=__builtin_string(" -include common.h "))):"",input_file_name_102,output_file_name_103,output_file_name_103));
                    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                command_121=(char*)come_increment_ref_count(xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_103,input_file_name_102,info->clang_option,input_file_name_102));
                if(info->verbose) {
                    puts(cmd4_120);
                }
                rc_118=system(cmd4_120);
                command2_122=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_103));
                if(info->verbose) {
                    puts(command2_122);
                }
                (void)system(command2_122);
                if(rc_118!=0) {
                    printf("failed to cpp(2) (%s)\n",cmd4_120);
                    exit(5);
                }
                cmd4_120 = come_decrement_ref_count2(cmd4_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                command_121 = come_decrement_ref_count2(command_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                command2_122 = come_decrement_ref_count2(command2_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            cmd3_115 = come_decrement_ref_count2(cmd3_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cmd_debian_116 = come_decrement_ref_count2(cmd_debian_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command2_119 = come_decrement_ref_count2(command2_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result83__ = (_Bool)1;
    input_file_name_102 = come_decrement_ref_count2(input_file_name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_103 = come_decrement_ref_count2(output_file_name_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_104 = come_decrement_ref_count2(cmd_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result83__;
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __right_value167 = (void*)0;
char* input_file_name_123;
char* output_file_name_124;
void* __right_value168 = (void*)0;
char* __dec_obj25;
void* __right_value169 = (void*)0;
char* __dec_obj26;
void* __right_value170 = (void*)0;
char* __dec_obj27;
void* __right_value171 = (void*)0;
char* command_125;
int rc_126;
void* __right_value172 = (void*)0;
char* command2_127;
_Bool __result84__;
void* __right_value176 = (void*)0;
_Bool __result87__;
    input_file_name_123=(char*)come_increment_ref_count(string_operator_add(info->sname,".c"));
    output_file_name_124=((void*)0);
    if(info->output_file_name&&output_object_file) {
        __dec_obj25=output_file_name_124;
        output_file_name_124=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj26=output_file_name_124;
        output_file_name_124=(char*)come_increment_ref_count(string_operator_add(info->sname,".o"));
        __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj27=info->clang_option;
    info->clang_option=(char*)come_increment_ref_count(string_operator_add(info->clang_option," -Werror=format "));
    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
    command_125=(char*)come_increment_ref_count(xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_124,input_file_name_123,info->clang_option,input_file_name_123));
    if(info->verbose) {
        puts(command_125);
    }
    rc_126=system(command_125);
    command2_127=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.out",input_file_name_123));
    if(info->verbose) {
        puts(command2_127);
    }
    (void)system(command2_127);
    if(rc_126!=0) {
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        __result84__ = (_Bool)0;
        input_file_name_123 = come_decrement_ref_count2(input_file_name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        output_file_name_124 = come_decrement_ref_count2(output_file_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command_125 = come_decrement_ref_count2(command_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_127 = come_decrement_ref_count2(command2_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result84__;
    }
    if(!output_object_file) {
        list$1charph_insert(object_files,0,(char*)come_increment_ref_count(__builtin_string(output_file_name_124)));
    }
    __result87__ = (_Bool)1;
    input_file_name_123 = come_decrement_ref_count2(input_file_name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_124 = come_decrement_ref_count2(output_file_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_125 = come_decrement_ref_count2(command_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_127 = come_decrement_ref_count2(command2_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result87__;
}

static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item){
void* __result_obj__=(void*)0;
int len_128;
int i_129;
char* default_value_130;
struct list$1charph* __result85__;
void* __right_value173 = (void*)0;
struct list_item$1charph* litem_131;
char* __dec_obj28;
void* __right_value174 = (void*)0;
struct list_item$1charph* litem_132;
char* __dec_obj29;
struct list_item$1charph* it_133;
int i_134;
void* __right_value175 = (void*)0;
struct list_item$1charph* litem_135;
char* __dec_obj30;
struct list$1charph* __result86__;
default_value_130 = (void*)0;
    if(position<0) {
        position+=self->len+1;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len_128=self->len;
        for(        i_129=0;        i_129<position-len_128;        i_129++        ){
            memset(&default_value_130,0,sizeof(char*));
            list$1charph_push_back(self,(char*)come_increment_ref_count(default_value_130));
            default_value_130 = come_decrement_ref_count2(default_value_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        list$1charph_push_back(self,(char*)come_increment_ref_count(item));
        __result85__ = gComeFunResultObject = __result_obj__ = self;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result85__;
    }
    if(position==0) {
        litem_131=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value173=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 381, "list_item$1charph"))));
        litem_131->prev=((void*)0);
        litem_131->next=self->head;
        __dec_obj28=litem_131->item;
        litem_131->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->head->prev=litem_131;
        self->head=litem_131;
        self->len++;
    }
    else {
        if(self->len==1) {
            litem_132=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value174=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 393, "list_item$1charph"))));
            litem_132->prev=self->head;
            litem_132->next=self->tail;
            __dec_obj29=litem_132->item;
            litem_132->item=(char*)come_increment_ref_count(item);
            __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->prev=litem_132;
            self->head->next=litem_132;
            self->len++;
        }
        else {
            it_133=self->head;
            i_134=0;
            while(it_133!=((void*)0)) {
                if(position==i_134) {
                    litem_135=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value175=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 409, "list_item$1charph"))));
                    litem_135->prev=it_133->prev;
                    litem_135->next=it_133;
                    __dec_obj30=litem_135->item;
                    litem_135->item=(char*)come_increment_ref_count(item);
                    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                    it_133->prev->next=litem_135;
                    it_133->prev=litem_135;
                    self->len++;
                }
                it_133=it_133->next;
                i_134++;
            }
        }
    }
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
char* output_file_name_136;
void* __right_value177 = (void*)0;
char* __dec_obj31;
void* __right_value178 = (void*)0;
char* __dec_obj32;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct buffer* command_137;
void* __right_value181 = (void*)0;
struct list$1charph* o2_saved_138;
char* it_139;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
char* cmd_140;
int rc_141;
void* __right_value184 = (void*)0;
char* __dec_obj33;
void* __right_value185 = (void*)0;
char* __dec_obj34;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
char* __dec_obj35;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
char* __dec_obj36;
void* __right_value191 = (void*)0;
char* cmd2_142;
void* __right_value192 = (void*)0;
char* cmd3_143;
int rc2_144;
int rc3_145;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
_Bool __result88__;
_Bool __result89__;
    output_file_name_136=((void*)0);
    if(info->output_file_name) {
        __dec_obj31=output_file_name_136;
        output_file_name_136=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj32=output_file_name_136;
        output_file_name_136=(char*)come_increment_ref_count(xnoextname(info->sname));
        __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_137=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 298, "buffer"))));
    buffer_append_str(command_137,((char*)(__right_value181=xsprintf("clang -o %s ",output_file_name_136))));
    __right_value181 = come_decrement_ref_count2(__right_value181, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_138=(object_files),it_139=list$1charph_begin((o2_saved_138));    !list$1charph_end((o2_saved_138));    it_139=list$1charph_next((o2_saved_138))    ){
        buffer_append_str(command_137,((char*)(__right_value182=xsprintf("%s ",it_139))));
        __right_value182 = come_decrement_ref_count2(__right_value182, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    cmd_140=(char*)come_increment_ref_count(xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"));
    rc_141=system(cmd_140);
    if(rc_141==0) {
        buffer_append_str(command_137," -L/opt/homebrew/opt/pcre/lib -L/opt/homebrew/opt/openssl/lib -L/opt/homebrew/opt/boehmgc/lib -L/opt/homebrew/opt/mysql/lib -L/opt/homebrew/opt/zstd/lib ");
    }
    __dec_obj33=cmd_140;
    cmd_140=(char*)come_increment_ref_count(xsprintf("ls /usr/local/lib 1> /dev/null 2>/dev/null"));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    rc_141=system(cmd_140);
    if(rc_141==0) {
        buffer_append_str(command_137," -L/usr/local/lib ");
    }
    __dec_obj34=cmd_140;
    cmd_140=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null",getenv("HOME")));
    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    rc_141=system(cmd_140);
    if(rc_141==0) {
        buffer_append_str(command_137,((char*)(__right_value186=xsprintf(" -L%s/lib ",getenv("HOME")))));
        __right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    __dec_obj35=cmd_140;
    cmd_140=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null","/usr/local/"));
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    rc_141=system(cmd_140);
    if(rc_141==0) {
        buffer_append_str(command_137,((char*)(__right_value188=xsprintf(" -L%s/lib ","/usr/local/"))));
        __right_value188 = come_decrement_ref_count2(__right_value188, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    buffer_append_str(command_137,((char*)(__right_value189=xsprintf(" %s ",info->clang_option))));
    __right_value189 = come_decrement_ref_count2(__right_value189, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(gComeStr) {
        if(gComeGC) {
            buffer_append_str(command_137," -lcomelang-str-gc -lpcre ");
        }
        else {
            buffer_append_str(command_137," -lcomelang-str -lpcre ");
        }
    }
    if(gComeGC) {
        buffer_append_str(command_137," -lcomelang-gc -lgc ");
    }
    if(gComeNet) {
        __dec_obj36=cmd_140;
        cmd_140=(char*)come_increment_ref_count(xsprintf("which apk 1> /dev/null 2>/dev/null"));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        cmd2_142=(char*)come_increment_ref_count(xsprintf("uname -a | grep Debian 1> /dev/null 2>/dev/null"));
        cmd3_143=(char*)come_increment_ref_count(xsprintf("uname -a | grep Android 1>/dev/null 2>/dev/null"));
        rc_141=system(cmd_140);
        rc2_144=system(cmd2_142);
        rc3_145=system(cmd3_143);
        if(rc3_145==0) {
            if(gComeGC) {
                buffer_append_str(command_137," -lcomelang-net-gc -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
            }
            else {
                buffer_append_str(command_137," -lcomelang-net -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
            }
        }
        else {
            if(rc_141==0||rc2_144==0) {
                if(gComeGC) {
                    buffer_append_str(command_137," -lcomelang-net-gc -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
                }
                else {
                    buffer_append_str(command_137," -lcomelang-net -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
                }
            }
            else {
                if(gComeGC) {
                    buffer_append_str(command_137," -lcomelang-net-gc -lssl `mysql_config --cflags --libs`");
                }
                else {
                    buffer_append_str(command_137," -lcomelang-net -lssl `mysql_config --cflags --libs`");
                }
            }
        }
        cmd2_142 = come_decrement_ref_count2(cmd2_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        cmd3_143 = come_decrement_ref_count2(cmd3_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(command_137," -lcomelang ");
    if(info->verbose) {
        puts(((char*)(__right_value193=buffer_to_string(command_137))));
        __right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    rc_141=system(((char*)(__right_value194=buffer_to_string(command_137))));
    __right_value194 = come_decrement_ref_count2(__right_value194, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(rc_141!=0) {
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        __result88__ = (_Bool)0;
        output_file_name_136 = come_decrement_ref_count2(output_file_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(command_137,buffer_finalize, 0, 0, 0, 0, (void*)0);
        cmd_140 = come_decrement_ref_count2(cmd_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result88__;
    }
    __result89__ = (_Bool)1;
    output_file_name_136 = come_decrement_ref_count2(output_file_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(command_137,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_140 = come_decrement_ref_count2(cmd_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result89__;
}

_Bool new_project(int argc, char** argv){
void* __right_value195 = (void*)0;
char* project_name_146;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
char* project_name_debug_147;
void* __right_value199 = (void*)0;
char* cc_148;
void* __right_value200 = (void*)0;
char* install_149;
void* __right_value201 = (void*)0;
char* libs_150;
void* __right_value202 = (void*)0;
char* os_151;
void* __right_value203 = (void*)0;
char* prefix_152;
void* __right_value204 = (void*)0;
char* cflags_153;
void* __right_value205 = (void*)0;
char* cflags_debug_154;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
_Bool _or_conditional1;
_Bool __exception_result_var_b1;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
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
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
_Bool __result90__;
    project_name_146=(char*)come_increment_ref_count(__builtin_string(argv[2]));
    project_name_debug_147=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value196=__builtin_string(argv[2]))),((char*)(__right_value197=__builtin_string("-debug")))));
    __right_value196 = come_decrement_ref_count2(__right_value196, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    cc_148=(char*)come_increment_ref_count(__builtin_string("comelang"));
    install_149=(char*)come_increment_ref_count(__builtin_string("install"));
    libs_150=(char*)come_increment_ref_count(__builtin_string("-lpcre"));
    os_151=(char*)come_increment_ref_count(__builtin_string("linux"));
    prefix_152=(char*)come_increment_ref_count(__builtin_string("/usr/local/"));
    cflags_153=(char*)come_increment_ref_count(__builtin_string(" -common-header -O2 "));
    cflags_debug_154=(char*)come_increment_ref_count(__builtin_string(" -common-header -gdwarf-4 -cg "));
    if((_or_conditional1=(system(((char*)(__right_value207=xsprintf("mkdir \%s",((char*)(__right_value206=string_to_string(project_name_146))))))))),    (__right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    (__right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _or_conditional1 != 0) {
        (come_push_stackframe("02transpile.c", 406, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    charp_write(((char*)(__right_value234=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tcomelang header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(__right_value208=string_to_string(prefix_152))),((char*)(__right_value209=string_to_string(project_name_146))),((char*)(__right_value210=string_to_string(project_name_146))),((char*)(__right_value211=string_to_string(project_name_146))),((char*)(__right_value212=string_to_string(project_name_146))),((char*)(__right_value213=string_to_string(cc_148))),((char*)(__right_value214=string_to_string(install_149))),((char*)(__right_value215=string_to_string(cflags_153))),((char*)(__right_value216=string_to_string(cflags_debug_154))),((char*)(__right_value217=string_to_string(libs_150))),((char*)(__right_value218=string_to_string(os_151))),((char*)(__right_value219=string_to_string(prefix_152))),((char*)(__right_value220=string_to_string(project_name_146))),((char*)(__right_value221=string_to_string(project_name_debug_147))),((char*)(__right_value222=string_to_string(project_name_146))),((char*)(__right_value223=string_to_string(project_name_146))),((char*)(__right_value224=string_to_string(project_name_146))),((char*)(__right_value225=string_to_string(project_name_146))),((char*)(__right_value226=string_to_string(project_name_debug_147))),((char*)(__right_value227=string_to_string(project_name_146))),((char*)(__right_value228=string_to_string(project_name_146))),((char*)(__right_value229=string_to_string(project_name_146))),((char*)(__right_value230=string_to_string(project_name_146))),((char*)(__right_value231=string_to_string(project_name_146))),((char*)(__right_value232=string_to_string(project_name_debug_147))),((char*)(__right_value233=string_to_string(project_name_debug_147)))))),((char*)(__right_value236=xsprintf("\%s/Makefile",((char*)(__right_value235=string_to_string(project_name_146)))))),(_Bool)0);
    __right_value208 = come_decrement_ref_count2(__right_value208, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value209 = come_decrement_ref_count2(__right_value209, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value210 = come_decrement_ref_count2(__right_value210, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value211 = come_decrement_ref_count2(__right_value211, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value212 = come_decrement_ref_count2(__right_value212, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value217 = come_decrement_ref_count2(__right_value217, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value218 = come_decrement_ref_count2(__right_value218, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value229 = come_decrement_ref_count2(__right_value229, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value230 = come_decrement_ref_count2(__right_value230, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value231 = come_decrement_ref_count2(__right_value231, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value232 = come_decrement_ref_count2(__right_value232, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result90__ = (_Bool)1;
    project_name_146 = come_decrement_ref_count2(project_name_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_147 = come_decrement_ref_count2(project_name_debug_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_148 = come_decrement_ref_count2(cc_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_149 = come_decrement_ref_count2(install_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_150 = come_decrement_ref_count2(libs_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_151 = come_decrement_ref_count2(os_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_152 = come_decrement_ref_count2(prefix_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_153 = come_decrement_ref_count2(cflags_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_154 = come_decrement_ref_count2(cflags_debug_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result90__;
}

_Bool run_project(int argc, char** argv){
struct __sFILE* f_155;
_Bool _or_conditional2;
_Bool __exception_result_var_b2;
_Bool _or_conditional3;
_Bool __exception_result_var_b3;
    f_155=fopen("common.h","r");
    if(f_155==((void*)0)) {
        if((_or_conditional2=(system("make header"))),        _or_conditional2 != 0) {
            (come_push_stackframe("02transpile.c", 510, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
        }
    }
    else {
        fclose(f_155);
    }
    if((_or_conditional3=(system("make run"))),    _or_conditional3 != 0) {
        (come_push_stackframe("02transpile.c", 516, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    return (_Bool)1;
}

_Bool make_header_project(int argc, char** argv){
_Bool _or_conditional4;
_Bool __exception_result_var_b4;
    if((_or_conditional4=(system("make header"))),    _or_conditional4 != 0) {
        (come_push_stackframe("02transpile.c", 523, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    return (_Bool)1;
}

_Bool compile_project(int argc, char** argv){
struct __sFILE* f_156;
_Bool _or_conditional5;
_Bool __exception_result_var_b5;
_Bool _or_conditional6;
_Bool __exception_result_var_b6;
    f_156=fopen("common.h","r");
    if(f_156==((void*)0)) {
        if((_or_conditional5=(system("make header"))),        _or_conditional5 != 0) {
            (come_push_stackframe("02transpile.c", 533, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
        }
    }
    else {
        fclose(f_156);
    }
    if((_or_conditional6=(system("make compile"))),    _or_conditional6 != 0) {
        (come_push_stackframe("02transpile.c", 538, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
    }
    return (_Bool)1;
}

_Bool debug_run_project(int argc, char** argv){
struct __sFILE* f_157;
_Bool _or_conditional7;
_Bool __exception_result_var_b7;
_Bool _or_conditional8;
_Bool __exception_result_var_b8;
    f_157=fopen("common.h","r");
    if(f_157==((void*)0)) {
        if((_or_conditional7=(system("make header"))),        _or_conditional7 != 0) {
            (come_push_stackframe("02transpile.c", 548, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
        }
    }
    else {
        fclose(f_157);
    }
    if((_or_conditional8=(system("make debug"))),    _or_conditional8 != 0) {
        (come_push_stackframe("02transpile.c", 553, 7),__exception_result_var_b8=die("system"), come_pop_stackframe(), __exception_result_var_b8);
    }
    return (_Bool)1;
}

_Bool clean_project(int argc, char** argv){
_Bool _or_conditional9;
_Bool __exception_result_var_b9;
    if((_or_conditional9=(system("make clean"))),    _or_conditional9 != 0) {
        (come_push_stackframe("02transpile.c", 560, 8),__exception_result_var_b9=die("system"), come_pop_stackframe(), __exception_result_var_b9);
    }
    return (_Bool)1;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
_Bool _or_conditional10;
_Bool __exception_result_var_b10;
    if((_or_conditional10=(system(((char*)(__right_value238=xsprintf("make install DESTDIR=\%s",((char*)(__right_value237=charp_to_string(prefix))))))))),    (__right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    (__right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _or_conditional10 != 0) {
        (come_push_stackframe("02transpile.c", 567, 9),__exception_result_var_b10=die("system"), come_pop_stackframe(), __exception_result_var_b10);
    }
    return (_Bool)1;
}

static void init_classes(struct sInfo* info){
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
int i_213;
void* __right_value278 = (void*)0;
char* generics_type_214;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
int i_215;
void* __right_value281 = (void*)0;
char* generics_type_216;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
char* cmd_217;
int rc_218;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
char* type_name_219;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct sType* type_220;
void* __right_value291 = (void*)0;
char* __dec_obj63;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct sClass* klass_242;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
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
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("int")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 574, "sClass")),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("short")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 575, "sClass")),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("long")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 576, "sClass")),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("char")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 577, "sClass")),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 578, "sClass")),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 579, "sClass")),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("void")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 580, "sClass")),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("float")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 581, "sClass")),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("double")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 582, "sClass")),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("lambda")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 583, "sClass")),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__uint128_t")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 584, "sClass")),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__int128")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 585, "sClass")),"__int128",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    for(    i_213=0;    i_213<12;    i_213++    ){
        generics_type_214=(char*)come_increment_ref_count(xsprintf("generics_type%d",i_213));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_214),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 588, "sClass")),generics_type_214,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_213,-1,(_Bool)0,info)));
        generics_type_214 = come_decrement_ref_count2(generics_type_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(    i_215=0;    i_215<7;    i_215++    ){
        generics_type_216=(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_215));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_216),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 592, "sClass")),generics_type_216,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_215,(_Bool)0,info)));
        generics_type_216 = come_decrement_ref_count2(generics_type_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    cmd_217=(char*)come_increment_ref_count(xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"));
    rc_218=system(cmd_217);
    if(rc_218==0) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 599, "sClass")),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
        type_name_219=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        type_220=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 603, "sType")),"__builtin_va_list",(_Bool)0,info));
        __dec_obj63=type_220->mOriginalTypeName;
        type_220->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(type_name_219)),(struct sType*)come_increment_ref_count(type_220));
        type_name_219 = come_decrement_ref_count2(type_name_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_220,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_242=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 611, "sClass")),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        list$1tuple2$2charphsTypephph_push_back(klass_242->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 613, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v1")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 613, "sType")),"char*",(_Bool)0,info)))));
        list$1tuple2$2charphsTypephph_push_back(klass_242->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 614, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v2")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 614, "sType")),"char*",(_Bool)0,info)))));
        list$1tuple2$2charphsTypephph_push_back(klass_242->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 615, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v3")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 615, "sType")),"char*",(_Bool)0,info)))));
        list$1tuple2$2charphsTypephph_push_back(klass_242->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 616, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v4")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 616, "sType")),"int",(_Bool)0,info)))));
        list$1tuple2$2charphsTypephph_push_back(klass_242->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 617, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v5")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 617, "sType")),"int",(_Bool)0,info)))));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(klass_242));
        /*i*/come_call_finalizer3(klass_242,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    cmd_217 = come_decrement_ref_count2(cmd_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_189;
unsigned int it_190;
_Bool same_key_exist_207;
char* it2_210;
struct map$2charphsClassph* __result111__;
    if(self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_189=string_get_hash_key(key)%self->size;
    it_190=hash_189;
    while((_Bool)1) {
        if(self->item_existance[it_190]) {
            if(string_equals(self->keys[it_190],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_190]);
                    self->keys[it_190] = come_decrement_ref_count2(self->keys[it_190], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_190]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_190]);
                    self->keys[it_190]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_190],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_190]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_190]=item;
                }
                break;
            }
            it_190++;
            if(it_190>=self->size) {
                it_190=0;
            }
            else {
                if(it_190==hash_189) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_190]=(_Bool)1;
            if(1) {
                self->keys[it_190]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_190]=key;
            }
            if(1) {
                self->items[it_190]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_190]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_207=(_Bool)0;
    for(    it2_210=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_210=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_210,key)) {
            same_key_exist_207=(_Bool)1;
        }
    }
    if(!same_key_exist_207) {
        list$1charp_push_back(self->key_list,key);
    }
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_158;
void* __right_value239 = (void*)0;
char** keys_159;
void* __right_value240 = (void*)0;
struct sClass** items_160;
void* __right_value241 = (void*)0;
_Bool* item_existance_161;
int len_162;
char* it_165;
struct sClass* default_value_168;
struct sClass* it2_169;
unsigned int hash_186;
int n_187;
struct sClass* default_value_188;
default_value_168 = (void*)0;
default_value_188 = (void*)0;
    size_158=self->size*10;
    keys_159=(char**)come_increment_ref_count(((char**)(__right_value239=(char**)come_calloc(1, sizeof(char*)*(1*(size_158)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_160=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value240=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_158)), "/usr/local/include/comelang.h", 1622, "sClass*%"))));
    item_existance_161=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value241=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_158)), "/usr/local/include/comelang.h", 1623, "bool"))));
    len_162=0;
    for(    it_165=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_165=map$2charphsClassph_next(self)    ){
        memset(&default_value_168,0,sizeof(struct sClass*));
        it2_169=map$2charphsClassph_at(self,it_165,default_value_168);
        hash_186=string_get_hash_key(it_165)%size_158;
        n_187=hash_186;
        while((_Bool)1) {
            if(item_existance_161[n_187]) {
                n_187++;
                if(n_187>=size_158) {
                    n_187=0;
                }
                else {
                    if(n_187==hash_186) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_161[n_187]=(_Bool)1;
                keys_159[n_187]=it_165;
                items_160[n_187]=map$2charphsClassph_at(self,it_165,default_value_188);
                len_162++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_159;
    self->items=items_160;
    self->item_existance=item_existance_161;
    self->size=size_158;
    self->len=len_162;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_163;
char* __result91__;
char* __result92__;
char* result_164;
char* __result93__;
result_163 = (void*)0;
result_164 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_163,0,sizeof(char*));
        __result91__ = gComeFunResultObject = __result_obj__ = result_163;
        gComeFunResultObject = (void*)0;
        return __result91__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result92__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result92__;
    }
    memset(&result_164,0,sizeof(char*));
    __result93__ = gComeFunResultObject = __result_obj__ = result_164;
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_166;
char* __result94__;
char* __result95__;
char* result_167;
char* __result96__;
result_166 = (void*)0;
result_167 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_166,0,sizeof(char*));
        __result94__ = gComeFunResultObject = __result_obj__ = result_166;
        gComeFunResultObject = (void*)0;
        return __result94__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result95__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    memset(&result_167,0,sizeof(char*));
    __result96__ = gComeFunResultObject = __result_obj__ = result_167;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_170;
unsigned int it_171;
struct sClass* __result97__;
struct sClass* __result98__;
struct sClass* __result99__;
struct sClass* __result100__;
    hash_170=string_get_hash_key(((char*)key))%self->size;
    it_171=hash_170;
    while((_Bool)1) {
        if(self->item_existance[it_171]) {
            if(string_equals(self->keys[it_171],key)) {
                __result97__ = gComeFunResultObject = __result_obj__ = self->items[it_171];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result97__;
            }
            it_171++;
            if(it_171>=self->size) {
                it_171=0;
            }
            else {
                if(it_171==hash_170) {
                    __result98__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result98__;
                }
            }
        }
        else {
            __result99__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result99__;
        }
    }
    __result100__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj37;
struct list$1tuple2$2charphsTypephph* __dec_obj38;
char* __dec_obj61;
char* __dec_obj62;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj37=self->mName;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(self->mFields==gComeFunResultObject) {
            __dec_obj38=self->mFields;
            /* a*/come_call_finalizer3(__dec_obj38,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1tuple2$2charphsTypephph* it_172;
struct list_item$1tuple2$2charphsTypephph* prev_it_173;
    it_172=self->head;
    while(it_172!=((void*)0)) {
        prev_it_173=it_172;
        it_172=it_172->next;
        /*i*/come_call_finalizer3(prev_it_173,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj39;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj39=self->item;
            /* a*/come_call_finalizer3(__dec_obj39,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj42;
struct tuple1$1sTypeph* __dec_obj44;
struct tuple1$1sTypeph* __dec_obj46;
char* __dec_obj48;
struct list$1sTypeph* __dec_obj49;
struct list$1sNodeph* __dec_obj51;
struct list$1sTypeph* __dec_obj53;
struct list$1charph* __dec_obj54;
struct tuple1$1sTypeph* __dec_obj55;
struct sNode* __dec_obj57;
struct sNode* __dec_obj58;
char* __dec_obj59;
char* __dec_obj60;
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj42=self->mNoSolvedGenericsType;
            /* a*/come_call_finalizer3(__dec_obj42,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj44=self->mOriginalLoadVarType;
            /* a*/come_call_finalizer3(__dec_obj44,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj46=self->mNoExceptionType;
            /* a*/come_call_finalizer3(__dec_obj46,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(self->mGenericsName==gComeFunResultObject) {
            __dec_obj48=self->mGenericsName;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj49=self->mGenericsTypes;
            /* a*/come_call_finalizer3(__dec_obj49,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(self->mArrayNum==gComeFunResultObject) {
            __dec_obj51=self->mArrayNum;
            /* a*/come_call_finalizer3(__dec_obj51,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj53=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj53,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj54=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj54,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj55=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj55,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(self->mAlignas==gComeFunResultObject) {
            __dec_obj57=self->mAlignas;
            if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(self->mSizeNum==gComeFunResultObject) {
            __dec_obj58=self->mSizeNum;
            if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj59=self->mOriginalTypeName;
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(self->mAsmName==gComeFunResultObject) {
            __dec_obj60=self->mAsmName;
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_174;
struct list_item$1sTypeph* prev_it_175;
    it_174=self->head;
    while(it_174!=((void*)0)) {
        prev_it_175=it_174;
        it_174=it_174->next;
        /*i*/come_call_finalizer3(prev_it_175,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj50;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj50=self->item;
            /* a*/come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_176;
struct list_item$1sTypeph* prev_it_177;
    it_176=self->head;
    while(it_176!=((void*)0)) {
        prev_it_177=it_176;
        it_176=it_176->next;
        /*i*/come_call_finalizer3(prev_it_177,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_178;
struct list_item$1sNodeph* prev_it_179;
    it_178=self->head;
    while(it_178!=((void*)0)) {
        prev_it_179=it_178;
        it_178=it_178->next;
        /*i*/come_call_finalizer3(prev_it_179,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj52;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj52=self->item;
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_180;
struct list_item$1sNodeph* prev_it_181;
    it_180=self->head;
    while(it_180!=((void*)0)) {
        prev_it_181=it_180;
        it_180=it_180->next;
        /*i*/come_call_finalizer3(prev_it_181,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_182;
struct list_item$1charph* prev_it_183;
    it_182=self->head;
    while(it_182!=((void*)0)) {
        prev_it_183=it_182;
        it_182=it_182->next;
        /*i*/come_call_finalizer3(prev_it_183,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj56;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj56=self->v1;
            /* a*/come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_184;
struct list_item$1tuple2$2charphsTypephph* prev_it_185;
    it_184=self->head;
    while(it_184!=((void*)0)) {
        prev_it_185=it_184;
        it_184=it_184->next;
        /*i*/come_call_finalizer3(prev_it_185,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_191;
struct list_item$1charp* it_192;
struct list$1charp* __result104__;
    it2_191=0;
    it_192=self->head;
    while(it_192!=((void*)0)) {
        if(charp_equals(it_192->item,item)) {
            list$1charp_delete(self,it2_191,it2_191+1);
            break;
        }
        it2_191++;
        it_192=it_192->next;
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_193;
struct list$1charp* __result101__;
struct list_item$1charp* it_196;
int i_197;
struct list_item$1charp* prev_it_198;
struct list_item$1charp* it_199;
int i_200;
struct list_item$1charp* prev_it_201;
struct list_item$1charp* it_202;
struct list_item$1charp* head_prev_it_203;
struct list_item$1charp* tail_it_204;
int i_205;
struct list_item$1charp* prev_it_206;
struct list$1charp* __result103__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_193=tail;
        tail=head;
        head=tmp_193;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result101__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    if(head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else {
        if(head==0) {
            it_196=self->head;
            i_197=0;
            while(it_196!=((void*)0)) {
                if(i_197<tail) {
                    prev_it_198=it_196;
                    it_196=it_196->next;
                    i_197++;
                    /*i*/come_call_finalizer3(prev_it_198,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_197==tail) {
                        self->head=it_196;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_196=it_196->next;
                        i_197++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_199=self->head;
                i_200=0;
                while(it_199!=((void*)0)) {
                    if(i_200==head) {
                        self->tail=it_199->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_200>=head) {
                        prev_it_201=it_199;
                        it_199=it_199->next;
                        i_200++;
                        /*i*/come_call_finalizer3(prev_it_201,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_199=it_199->next;
                        i_200++;
                    }
                }
            }
            else {
                it_202=self->head;
                head_prev_it_203=((void*)0);
                tail_it_204=((void*)0);
                i_205=0;
                while(it_202!=((void*)0)) {
                    if(i_205==head) {
                        head_prev_it_203=it_202->prev;
                    }
                    if(i_205==tail) {
                        tail_it_204=it_202;
                    }
                    if(i_205>=head&&i_205<tail) {
                        prev_it_206=it_202;
                        it_202=it_202->next;
                        i_205++;
                        /*i*/come_call_finalizer3(prev_it_206,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_202=it_202->next;
                        i_205++;
                    }
                }
                if(head_prev_it_203!=((void*)0)) {
                    head_prev_it_203->next=tail_it_204;
                }
                if(tail_it_204!=((void*)0)) {
                    tail_it_204->prev=head_prev_it_203;
                }
            }
        }
    }
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_194;
struct list_item$1charp* prev_it_195;
struct list$1charp* __result102__;
    it_194=self->head;
    while(it_194!=((void*)0)) {
        prev_it_195=it_194;
        it_194=it_194->next;
        /*i*/come_call_finalizer3(prev_it_195,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_208;
char* __result105__;
char* __result106__;
char* result_209;
char* __result107__;
result_208 = (void*)0;
result_209 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_208,0,sizeof(char*));
        __result105__ = gComeFunResultObject = __result_obj__ = result_208;
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    self->it=self->head;
    if(self->it) {
        __result106__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    memset(&result_209,0,sizeof(char*));
    __result107__ = gComeFunResultObject = __result_obj__ = result_209;
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_211;
char* __result108__;
char* __result109__;
char* result_212;
char* __result110__;
result_211 = (void*)0;
result_212 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_211,0,sizeof(char*));
        __result108__ = gComeFunResultObject = __result_obj__ = result_211;
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result109__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    memset(&result_212,0,sizeof(char*));
    __result110__ = gComeFunResultObject = __result_obj__ = result_212;
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__=(void*)0;
unsigned int hash_238;
unsigned int it_239;
_Bool same_key_exist_240;
char* it2_241;
struct map$2charphsTypeph* __result122__;
    if(self->len*10>=self->size) {
        map$2charphsTypeph_rehash(self);
    }
    hash_238=string_get_hash_key(key)%self->size;
    it_239=hash_238;
    while((_Bool)1) {
        if(self->item_existance[it_239]) {
            if(string_equals(self->keys[it_239],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_239]);
                    self->keys[it_239] = come_decrement_ref_count2(self->keys[it_239], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_239]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_239]);
                    self->keys[it_239]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_239],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_239]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_239]=item;
                }
                break;
            }
            it_239++;
            if(it_239>=self->size) {
                it_239=0;
            }
            else {
                if(it_239==hash_238) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_239]=(_Bool)1;
            if(1) {
                self->keys[it_239]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_239]=key;
            }
            if(1) {
                self->items[it_239]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_239]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_240=(_Bool)0;
    for(    it2_241=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_241=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_241,key)) {
            same_key_exist_240=(_Bool)1;
        }
    }
    if(!same_key_exist_240) {
        list$1charp_push_back(self->key_list,key);
    }
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
int size_221;
void* __right_value292 = (void*)0;
char** keys_222;
void* __right_value293 = (void*)0;
struct sType** items_223;
void* __right_value294 = (void*)0;
_Bool* item_existance_224;
int len_225;
char* it_228;
struct sType* default_value_231;
struct sType* it2_232;
unsigned int hash_235;
int n_236;
struct sType* default_value_237;
default_value_231 = (void*)0;
default_value_237 = (void*)0;
    size_221=self->size*10;
    keys_222=(char**)come_increment_ref_count(((char**)(__right_value292=(char**)come_calloc(1, sizeof(char*)*(1*(size_221)), "/usr/local/include/comelang.h", 1621, "char*%"))));
    items_223=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value293=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_221)), "/usr/local/include/comelang.h", 1622, "sType*%"))));
    item_existance_224=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value294=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_221)), "/usr/local/include/comelang.h", 1623, "bool"))));
    len_225=0;
    for(    it_228=map$2charphsTypeph_begin(self);    !map$2charphsTypeph_end(self);    it_228=map$2charphsTypeph_next(self)    ){
        memset(&default_value_231,0,sizeof(struct sType*));
        it2_232=map$2charphsTypeph_at(self,it_228,default_value_231);
        hash_235=string_get_hash_key(it_228)%size_221;
        n_236=hash_235;
        while((_Bool)1) {
            if(item_existance_224[n_236]) {
                n_236++;
                if(n_236>=size_221) {
                    n_236=0;
                }
                else {
                    if(n_236==hash_235) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_224[n_236]=(_Bool)1;
                keys_222[n_236]=it_228;
                items_223[n_236]=map$2charphsTypeph_at(self,it_228,default_value_237);
                len_225++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_222;
    self->items=items_223;
    self->item_existance=item_existance_224;
    self->size=size_221;
    self->len=len_225;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_226;
char* __result112__;
char* __result113__;
char* result_227;
char* __result114__;
result_226 = (void*)0;
result_227 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_226,0,sizeof(char*));
        __result112__ = gComeFunResultObject = __result_obj__ = result_226;
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result113__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result113__;
    }
    memset(&result_227,0,sizeof(char*));
    __result114__ = gComeFunResultObject = __result_obj__ = result_227;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_229;
char* __result115__;
char* __result116__;
char* result_230;
char* __result117__;
result_229 = (void*)0;
result_230 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_229,0,sizeof(char*));
        __result115__ = gComeFunResultObject = __result_obj__ = result_229;
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result116__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    memset(&result_230,0,sizeof(char*));
    __result117__ = gComeFunResultObject = __result_obj__ = result_230;
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_233;
unsigned int it_234;
struct sType* __result118__;
struct sType* __result119__;
struct sType* __result120__;
struct sType* __result121__;
    hash_233=string_get_hash_key(((char*)key))%self->size;
    it_234=hash_233;
    while((_Bool)1) {
        if(self->item_existance[it_234]) {
            if(string_equals(self->keys[it_234],key)) {
                __result118__ = gComeFunResultObject = __result_obj__ = self->items[it_234];
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result118__;
            }
            it_234++;
            if(it_234>=self->size) {
                it_234=0;
            }
            else {
                if(it_234==hash_233) {
                    __result119__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result119__;
                }
            }
        }
        else {
            __result120__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result120__;
        }
    }
    __result121__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_243;
struct tuple2$2charphsTypeph* __dec_obj64;
void* __right_value299 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_244;
struct tuple2$2charphsTypeph* __dec_obj67;
void* __right_value300 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_245;
struct tuple2$2charphsTypeph* __dec_obj70;
struct list$1tuple2$2charphsTypephph* __result123__;
    if(self->len==0) {
        litem_243=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value298=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1tuple2$2charphsTypephph"))));
        litem_243->prev=((void*)0);
        litem_243->next=((void*)0);
        __dec_obj64=litem_243->item;
        litem_243->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj64,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_243;
        self->head=litem_243;
    }
    else {
        if(self->len==1) {
            litem_244=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value299=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1tuple2$2charphsTypephph"))));
            litem_244->prev=self->head;
            litem_244->next=((void*)0);
            __dec_obj67=litem_244->item;
            litem_244->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj67,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_244;
            self->head->next=litem_244;
        }
        else {
            litem_245=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value300=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1tuple2$2charphsTypephph"))));
            litem_245->prev=self->tail;
            litem_245->next=((void*)0);
            __dec_obj70=litem_245->item;
            litem_245->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj70,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_245;
            self->tail=litem_245;
        }
    }
    self->len++;
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj71;
struct sType* __dec_obj72;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj71=self->v1;
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj72=self->v2;
            /* a*/come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj73;
struct sType* __dec_obj74;
struct tuple2$2charphsTypeph* __result124__;
    __dec_obj73=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj74=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /* a*/come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

int come_main_v2(int argc, char** argv){
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct buffer* clang_option_246;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct buffer* cpp_option_247;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct list$1charph* files_248;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct list$1charph* object_files_249;
_Bool output_object_file_250;
_Bool output_cpp_file_251;
_Bool output_source_file_flag_252;
void* __right_value335 = (void*)0;
char* output_file_name_253;
_Bool verbose_254;
_Bool prohibit_common_header_255;
_Bool come_debug_256;
_Bool come_malloc_257;
int i_258;
void* __right_value336 = (void*)0;
char* __dec_obj75;
void* __right_value337 = (void*)0;
_Bool _if_conditional1;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
_Bool _if_conditional2;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
_Bool _or_conditional11;
_Bool __exception_result_var_b11;
struct __sFILE* f_259;
_Bool _and_conditional1;
_Bool __exception_result_var_b12;
void* __right_value352 = (void*)0;
char* tmp_file_260;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sInfo info_261;
void* __right_value357 = (void*)0;
char* __dec_obj76;
void* __right_value358 = (void*)0;
char* __dec_obj77;
void* __right_value359 = (void*)0;
char* __dec_obj78;
void* __right_value360 = (void*)0;
char* __dec_obj79;
void* __right_value361 = (void*)0;
void* __right_value367 = (void*)0;
struct map$2charphsFunph* __dec_obj96;
void* __right_value368 = (void*)0;
void* __right_value374 = (void*)0;
struct map$2charphsGenericsFunph* __dec_obj108;
void* __right_value375 = (void*)0;
void* __right_value381 = (void*)0;
struct map$2charphsClassph* __dec_obj110;
void* __right_value382 = (void*)0;
void* __right_value388 = (void*)0;
struct map$2charphsClassModuleph* __dec_obj116;
void* __right_value389 = (void*)0;
void* __right_value395 = (void*)0;
struct map$2charphsTypeph* __dec_obj118;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sModule* __dec_obj119;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj132;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct list$1CVALUEph* __dec_obj137;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sVarTable* __dec_obj138;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct sVarTable* lv_table_295;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct list$1charph* __dec_obj139;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct list$1charph* __dec_obj140;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct map$2charphsClassph* __dec_obj141;
void* __right_value412 = (void*)0;
char* __dec_obj142;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct buffer* __dec_obj143;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct buffer* __dec_obj144;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct buffer* clang_option_301;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct buffer* cpp_option_302;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1charph* files_303;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct list$1charph* object_files_304;
_Bool output_object_file_305;
_Bool output_cpp_file_306;
_Bool output_source_file_flag_307;
char* output_file_name_308;
_Bool verbose_309;
_Bool come_debug_310;
_Bool come_malloc_311;
int i_312;
void* __right_value428 = (void*)0;
char* __dec_obj174;
void* __right_value429 = (void*)0;
_Bool _if_conditional3;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
_Bool _if_conditional4;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct list$1charph* o2_saved_313;
char* it_314;
struct sInfo info_315;
struct __sFILE* tmp_file_316;
void* __right_value443 = (void*)0;
char* __dec_obj175;
void* __right_value444 = (void*)0;
char* __dec_obj176;
void* __right_value445 = (void*)0;
char* __dec_obj177;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct map$2charphsFunph* __dec_obj178;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct map$2charphsGenericsFunph* __dec_obj179;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct map$2charphsClassph* __dec_obj180;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct map$2charphsClassModuleph* __dec_obj181;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct map$2charphsTypeph* __dec_obj182;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sModule* __dec_obj183;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj184;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct list$1CVALUEph* __dec_obj185;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sVarTable* __dec_obj186;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sVarTable* lv_table_317;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct list$1charph* __dec_obj187;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct list$1charph* __dec_obj188;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct map$2charphsClassph* __dec_obj189;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct buffer* __dec_obj190;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct buffer* __dec_obj191;
void* __right_value478 = (void*)0;
char* __dec_obj192;
char* __dec_obj193;
struct sInfo info_318;
void* __right_value479 = (void*)0;
char* __dec_obj194;
void* __right_value480 = (void*)0;
char* __dec_obj195;
void* __right_value481 = (void*)0;
char* __dec_obj196;
char* __dec_obj197;
struct __current_stack3__ __current_stack3__;
memset(&info_261, 0, sizeof(struct sInfo));
memset(&info_315, 0, sizeof(struct sInfo));
memset(&info_318, 0, sizeof(struct sInfo));
memset(&__current_stack3__, 0, sizeof(struct __current_stack3__));
    if(charp_operator_equals(argv[1],"header")&&argc>=3) {
        gProgramName=argv[0];
        clang_option_246=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 628, "buffer"))));
        cpp_option_247=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 629, "buffer"))));
        files_248=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 630, "list$1charph"))));
        object_files_249=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 631, "list$1charph"))));
        output_object_file_250=(_Bool)0;
        output_cpp_file_251=(_Bool)0;
        output_source_file_flag_252=(_Bool)0;
        output_file_name_253=(char*)come_increment_ref_count(__builtin_string("common.h"));
        verbose_254=(_Bool)0;
        prohibit_common_header_255=(_Bool)0;
        come_debug_256=(_Bool)0;
        come_malloc_257=(_Bool)0;
        for(        i_258=2;        i_258<argc;        i_258++        ){
            if(charp_operator_equals(argv[i_258],"-o")&&i_258+1<argc) {
                __dec_obj75=output_file_name_253;
                output_file_name_253=(char*)come_increment_ref_count(__builtin_string(argv[i_258+1]));
                __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_258++;
            }
            else {
                if(charp_operator_equals(argv[i_258],"-str")) {
                    gComeStr=(_Bool)1;
                }
                else {
                    if(charp_operator_equals(argv[i_258],"-net")) {
                        gComeNet=(_Bool)1;
                    }
                    else {
                        if(charp_operator_equals(argv[i_258],"-gc")) {
                            gComeGC=(_Bool)1;
                        }
                        else {
                            if(charp_operator_equals(argv[i_258],"-g")) {
                                buffer_append_str(clang_option_246,"-g ");
                            }
                            else {
                                if(charp_operator_equals(argv[i_258],"-cg")) {
                                    buffer_append_str(clang_option_246,"-g ");
                                    come_debug_256=(_Bool)1;
                                }
                                else {
                                    if(charp_operator_equals(argv[i_258],"-common-header")) {
                                        gCommonHeader=(_Bool)1;
                                    }
                                    else {
                                        if(charp_operator_equals(argv[i_258],"-original-position")) {
                                            gComeOriginalSourcePosition=(_Bool)0;
                                        }
                                        else {
                                            if((_if_conditional1=(string_operator_equals(((char*)(__right_value337=charp_operator_load_range_element(argv[i_258],0,2))),"-O"))),                                            (__right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
                                            _if_conditional1) {
                                                buffer_append_str(clang_option_246,((char*)(__right_value339=xsprintf(" \%s ",((char*)(__right_value338=charp_to_string(argv[i_258])))))));
                                                __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                __right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                come_debug_256=(_Bool)0;
                                            }
                                            else {
                                                if((_if_conditional2=(string_operator_equals(((char*)(__right_value340=charp_operator_load_range_element(argv[i_258],0,2))),"-D"))),                                                (__right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
                                                _if_conditional2) {
                                                    buffer_append_str(cpp_option_247,((char*)(__right_value342=xsprintf(" \%s ",((char*)(__right_value341=charp_to_string(argv[i_258])))))));
                                                    __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                    __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                    buffer_append_str(clang_option_246,((char*)(__right_value344=xsprintf(" \%s ",((char*)(__right_value343=charp_to_string(argv[i_258])))))));
                                                    __right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                    __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                }
                                                else {
                                                    if(charp_operator_equals(argv[i_258],"-v")) {
                                                        buffer_append_str(clang_option_246,"-v ");
                                                        verbose_254=(_Bool)1;
                                                    }
                                                    else {
                                                        if(strlen(argv[i_258])>=2&&memcmp(argv[i_258],"-I",strlen("-I"))==0) {
                                                            buffer_append_str(cpp_option_247,((char*)(__right_value346=charp_operator_add(" ",((char*)(__right_value345=charp_operator_add(argv[i_258]," ")))))));
                                                            __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                            __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                        }
                                                        else {
                                                            if(charp_operator_equals(argv[i_258],"-gdwarf-4")) {
                                                                buffer_append_str(clang_option_246,"-gdwarf-4 ");
                                                            }
                                                            else {
                                                                if(charp_operator_equals(argv[i_258],"-s")||charp_operator_equals(argv[i_258],"-S")) {
                                                                    output_source_file_flag_252=(_Bool)1;
                                                                    gComeOriginalSourcePosition=(_Bool)0;
                                                                }
                                                                else {
                                                                    if(charp_operator_equals(argv[i_258],"-c")) {
                                                                        output_object_file_250=(_Bool)1;
                                                                    }
                                                                    else {
                                                                        if(charp_operator_equals(argv[i_258],"-E")) {
                                                                            output_cpp_file_251=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            if(argv[i_258][0]==45) {
                                                                                buffer_append_str(clang_option_246,((char*)(__right_value347=charp_operator_add(argv[i_258]," "))));
                                                                                __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                            }
                                                                            else {
                                                                                if(strlen(argv[i_258])>2&&memcmp(argv[i_258]+strlen(argv[i_258])-2,".o",2)==0) {
                                                                                    list$1charph_push_back(object_files_249,(char*)come_increment_ref_count(__builtin_string(argv[i_258])));
                                                                                }
                                                                                else {
                                                                                    if(strlen(argv[i_258])>2&&memcmp(argv[i_258]+strlen(argv[i_258])-2,".a",2)==0) {
                                                                                        list$1charph_push_back(object_files_249,(char*)come_increment_ref_count(__builtin_string(argv[i_258])));
                                                                                    }
                                                                                    else {
                                                                                        list$1charph_push_back(files_248,(char*)come_increment_ref_count(__builtin_string(argv[i_258])));
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
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        gComeDebug=come_debug_256;
        gComeMalloc=come_malloc_257;
        if((_or_conditional11=(system(((char*)(__right_value351=xsprintf("%s %s",RM,output_file_name_253)))))),        (__right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _or_conditional11 != 0) {
            (come_push_stackframe("02transpile.c", 712, 10),__exception_result_var_b11=die("rm"), come_pop_stackframe(), __exception_result_var_b11);
        }
        if((_and_conditional1=(f_259=fopen(output_file_name_253,"w"))),        _and_conditional1 == 0) {
            (come_push_stackframe("02transpile.c", 714, 11),__exception_result_var_b12=die("fopen"), come_pop_stackframe(), __exception_result_var_b12);
        }
        fclose(f_259);
        tmp_file_260=(char*)come_increment_ref_count(__builtin_string("tmp-common-header.c"));
        system(((char*)(__right_value356=xsprintf("cat \%s > \%s",((char*)(__right_value354=string_to_string(((char*)(__right_value353=list$1charph_join(files_248," ")))))),((char*)(__right_value355=string_to_string(tmp_file_260)))))));
        __right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        memset(&info_261,0,sizeof(struct sInfo));
        __dec_obj76=info_261.base_sname;
        info_261.base_sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_260));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj77=info_261.sname;
        info_261.sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_260));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_261.sline=1;
        info_261.err_num=0;
        __dec_obj78=info_261.clang_option;
        info_261.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_246));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj79=info_261.cpp_option;
        info_261.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_247));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_261.no_output_err=(_Bool)0;
        __dec_obj96=info_261.funcs;
        info_261.funcs=(struct map$2charphsFunph*)come_increment_ref_count(map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count((struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 732, "map$2charphsFunph"))));
        /* a*/come_call_finalizer3(__dec_obj96,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj108=info_261.generics_funcs;
        info_261.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count((struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 733, "map$2charphsGenericsFunph"))));
        /* a*/come_call_finalizer3(__dec_obj108,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj110=info_261.classes;
        info_261.classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 734, "map$2charphsClassph"))));
        /* a*/come_call_finalizer3(__dec_obj110,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj116=info_261.modules;
        info_261.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count((struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 735, "map$2charphsClassModuleph"))));
        /* a*/come_call_finalizer3(__dec_obj116,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj118=info_261.types;
        info_261.types=(struct map$2charphsTypeph*)come_increment_ref_count(map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count((struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 736, "map$2charphsTypeph"))));
        /* a*/come_call_finalizer3(__dec_obj118,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj119=info_261.module;
        info_261.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 737, "sModule"))));
        /* a*/come_call_finalizer3(__dec_obj119,sModule_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj132=info_261.right_value_objects;
        info_261.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 738, "list$1sRightValueObjectph"))));
        /* a*/come_call_finalizer3(__dec_obj132,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj137=info_261.stack;
        info_261.stack=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 739, "list$1CVALUEph"))));
        /* a*/come_call_finalizer3(__dec_obj137,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj138=info_261.gv_table;
        info_261.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 740, "sVarTable")),(_Bool)1,((void*)0)));
        /* a*/come_call_finalizer3(__dec_obj138,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        lv_table_295=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 741, "sVarTable")),(_Bool)0,((void*)0)));
        info_261.lv_table=lv_table_295;
        __dec_obj139=info_261.generics_type_names;
        info_261.generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 743, "list$1charph"))));
        /* a*/come_call_finalizer3(__dec_obj139,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj140=info_261.method_generics_type_names;
        info_261.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 744, "list$1charph"))));
        /* a*/come_call_finalizer3(__dec_obj140,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj141=info_261.generics_classes;
        info_261.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 745, "map$2charphsClassph"))));
        /* a*/come_call_finalizer3(__dec_obj141,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        info_261.verbose=verbose_254;
        info_261.output_header_file=(_Bool)1;
        static int n_296=0;
        info_261.num_source_files=n_296++;
        info_261.max_source_files=list$1charph_length(files_248);
        __dec_obj142=info_261.output_file_name;
        info_261.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_253));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        init_classes(&info_261);
        clear_tmp_file(&info_261);
        if(!cpp(&info_261)) {
            printf("%s %d: transpile failed\n",info_261.sname,info_261.sline);
            exit(2);
        }
        __dec_obj143=info_261.original_source;
        info_261.original_source=(struct buffer*)come_increment_ref_count(string_to_buffer(((char*)(__right_value414=string_read(((char*)(__right_value413=xsprintf("%s",tmp_file_260))))))));
        /* a*/come_call_finalizer3(__dec_obj143,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj144=info_261.source;
        info_261.source=(struct buffer*)come_increment_ref_count(string_to_buffer(((char*)(__right_value417=string_read(((char*)(__right_value416=xsprintf("%s.i",tmp_file_260))))))));
        /* a*/come_call_finalizer3(__dec_obj144,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        info_261.p=info_261.source->buf;
        info_261.head=info_261.source->buf;
        if(!output_cpp_file_251) {
            transpile_v5(&info_261);
            if(!output_header_file(&info_261)) {
                printf("%s %d: output source file faield\n",info_261.sname,info_261.sline);
                exit(2);
            }
        }
        system(((char*)(__right_value419=xsprintf("%s %s*",RM,tmp_file_260))));
        __right_value419 = come_decrement_ref_count2(__right_value419, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(clang_option_246,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(cpp_option_247,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(files_248,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(object_files_249,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        output_file_name_253 = come_decrement_ref_count2(output_file_name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tmp_file_260 = come_decrement_ref_count2(tmp_file_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3((&info_261),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(lv_table_295,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(charp_operator_equals(argv[1],"new")&&argc==3) {
            if(!new_project(argc,argv)) {
                return (_Bool)0;
            }
        }
        else {
            if(charp_operator_equals(argv[1],"run")&&argc==2) {
                if(!run_project(argc,argv)) {
                    return (_Bool)0;
                }
            }
            else {
                if(charp_operator_equals(argv[1],"header")&&argc==2) {
                    if(!make_header_project(argc,argv)) {
                        return (_Bool)0;
                    }
                }
                else {
                    if(charp_operator_equals(argv[1],"compile")&&argc==2) {
                        if(!compile_project(argc,argv)) {
                            return (_Bool)0;
                        }
                    }
                    else {
                        if(charp_operator_equals(argv[1],"debug")&&argc==2) {
                            if(!debug_run_project(argc,argv)) {
                                return (_Bool)0;
                            }
                        }
                        else {
                            if(charp_operator_equals(argv[1],"clean")&&argc==2) {
                                if(!clean_project(argc,argv)) {
                                    return (_Bool)0;
                                }
                            }
                            else {
                                if(charp_operator_equals(argv[1],"install")&&argc>=2) {
                                    if(argc==2) {
                                        if(!install_project(argc,argv,"/usr/local")) {
                                            return (_Bool)0;
                                        }
                                    }
                                    else {
                                        if(argc>=3) {
                                            if(!install_project(argc,argv,argv[2])) {
                                                return (_Bool)0;
                                            }
                                        }
                                    }
                                }
                                else {
                                    gProgramName=argv[0];
                                    clang_option_301=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 825, "buffer"))));
                                    cpp_option_302=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 826, "buffer"))));
                                    files_303=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 827, "list$1charph"))));
                                    object_files_304=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 828, "list$1charph"))));
                                    output_object_file_305=(_Bool)0;
                                    output_cpp_file_306=(_Bool)0;
                                    output_source_file_flag_307=(_Bool)0;
                                    output_file_name_308=((void*)0);
                                    verbose_309=(_Bool)0;
                                    come_debug_310=(_Bool)0;
                                    come_malloc_311=(_Bool)0;
                                    for(                                    i_312=1;                                    i_312<argc;                                    i_312++                                    ){
                                        if(charp_operator_equals(argv[i_312],"-o")&&i_312+1<argc) {
                                            __dec_obj174=output_file_name_308;
                                            output_file_name_308=(char*)come_increment_ref_count(__builtin_string(argv[i_312+1]));
                                            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            i_312++;
                                        }
                                        else {
                                            if(charp_operator_equals(argv[i_312],"-str")) {
                                                gComeStr=(_Bool)1;
                                            }
                                            else {
                                                if(charp_operator_equals(argv[i_312],"-net")) {
                                                    gComeNet=(_Bool)1;
                                                }
                                                else {
                                                    if(charp_operator_equals(argv[i_312],"-gc")) {
                                                        gComeGC=(_Bool)1;
                                                    }
                                                    else {
                                                        if(charp_operator_equals(argv[i_312],"-cg")) {
                                                            come_debug_310=(_Bool)1;
                                                            buffer_append_str(clang_option_301,"-g ");
                                                        }
                                                        else {
                                                            if(charp_operator_equals(argv[i_312],"-common-header")) {
                                                                gCommonHeader=(_Bool)1;
                                                            }
                                                            else {
                                                                if(charp_operator_equals(argv[i_312],"-original-position")) {
                                                                    gComeOriginalSourcePosition=(_Bool)0;
                                                                }
                                                                else {
                                                                    if((_if_conditional3=(string_operator_equals(((char*)(__right_value429=charp_operator_load_range_element(argv[i_312],0,2))),"-O"))),                                                                    (__right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
                                                                    _if_conditional3) {
                                                                        buffer_append_str(clang_option_301,((char*)(__right_value431=xsprintf(" \%s ",((char*)(__right_value430=charp_to_string(argv[i_312])))))));
                                                                        __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                        __right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                        come_debug_310=(_Bool)0;
                                                                    }
                                                                    else {
                                                                        if((_if_conditional4=(string_operator_equals(((char*)(__right_value432=charp_operator_load_range_element(argv[i_312],0,2))),"-D"))),                                                                        (__right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
                                                                        _if_conditional4) {
                                                                            buffer_append_str(cpp_option_302,((char*)(__right_value434=xsprintf(" \%s ",((char*)(__right_value433=charp_to_string(argv[i_312])))))));
                                                                            __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                            __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                            buffer_append_str(clang_option_301,((char*)(__right_value436=xsprintf(" \%s ",((char*)(__right_value435=charp_to_string(argv[i_312])))))));
                                                                            __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                            __right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            if(charp_operator_equals(argv[i_312],"-g")) {
                                                                                buffer_append_str(clang_option_301,"-g ");
                                                                            }
                                                                            else {
                                                                                if(charp_operator_equals(argv[i_312],"-v")) {
                                                                                    buffer_append_str(clang_option_301,"-v ");
                                                                                    verbose_309=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    if(strlen(argv[i_312])>=2&&memcmp(argv[i_312],"-I",strlen("-I"))==0) {
                                                                                        buffer_append_str(cpp_option_302,((char*)(__right_value438=charp_operator_add(" ",((char*)(__right_value437=charp_operator_add(argv[i_312]," ")))))));
                                                                                        __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                        __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                    }
                                                                                    else {
                                                                                        if(charp_operator_equals(argv[i_312],"-gdwarf-4")) {
                                                                                            buffer_append_str(clang_option_301,"-gdwarf-4 ");
                                                                                        }
                                                                                        else {
                                                                                            if(charp_operator_equals(argv[i_312],"-s")||charp_operator_equals(argv[i_312],"-S")) {
                                                                                                output_source_file_flag_307=(_Bool)1;
                                                                                                gComeOriginalSourcePosition=(_Bool)0;
                                                                                            }
                                                                                            else {
                                                                                                if(charp_operator_equals(argv[i_312],"-c")) {
                                                                                                    output_object_file_305=(_Bool)1;
                                                                                                }
                                                                                                else {
                                                                                                    if(charp_operator_equals(argv[i_312],"-E")) {
                                                                                                        output_cpp_file_306=(_Bool)1;
                                                                                                    }
                                                                                                    else {
                                                                                                        if(argv[i_312][0]==45) {
                                                                                                            buffer_append_str(clang_option_301,((char*)(__right_value439=charp_operator_add(argv[i_312]," "))));
                                                                                                            __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                                        }
                                                                                                        else {
                                                                                                            if(strlen(argv[i_312])>2&&memcmp(argv[i_312]+strlen(argv[i_312])-2,".o",2)==0) {
                                                                                                                list$1charph_push_back(object_files_304,(char*)come_increment_ref_count(__builtin_string(argv[i_312])));
                                                                                                            }
                                                                                                            else {
                                                                                                                if(strlen(argv[i_312])>2&&memcmp(argv[i_312]+strlen(argv[i_312])-2,".a",2)==0) {
                                                                                                                    list$1charph_push_back(object_files_304,(char*)come_increment_ref_count(__builtin_string(argv[i_312])));
                                                                                                                }
                                                                                                                else {
                                                                                                                    list$1charph_push_back(files_303,(char*)come_increment_ref_count(__builtin_string(argv[i_312])));
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
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    gComeDebug=come_debug_310;
                                    gComeMalloc=come_malloc_311;
                                    for(                                    o2_saved_313=(struct list$1charph*)come_increment_ref_count((files_303)),it_314=list$1charph_begin((o2_saved_313));                                    !list$1charph_end((o2_saved_313));                                    it_314=list$1charph_next((o2_saved_313))                                    ){
                                        memset(&info_315,0,sizeof(struct sInfo));
                                        tmp_file_316=fopen(it_314,"r");
                                        if(tmp_file_316==((void*)0)) {
                                            /*i*/come_call_finalizer3((&info_315),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                            continue;
                                        }
                                        else {
                                            fclose(tmp_file_316);
                                        }
                                        __dec_obj175=info_315.sname;
                                        info_315.sname=(char*)come_increment_ref_count(__builtin_string(it_314));
                                        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        info_315.sline=1;
                                        info_315.err_num=0;
                                        __dec_obj176=info_315.clang_option;
                                        info_315.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_301));
                                        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __dec_obj177=info_315.cpp_option;
                                        info_315.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_302));
                                        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        info_315.no_output_err=(_Bool)0;
                                        __dec_obj178=info_315.funcs;
                                        info_315.funcs=(struct map$2charphsFunph*)come_increment_ref_count(map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count((struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 927, "map$2charphsFunph"))));
                                        /* a*/come_call_finalizer3(__dec_obj178,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj179=info_315.generics_funcs;
                                        info_315.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count((struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 928, "map$2charphsGenericsFunph"))));
                                        /* a*/come_call_finalizer3(__dec_obj179,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj180=info_315.classes;
                                        info_315.classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 929, "map$2charphsClassph"))));
                                        /* a*/come_call_finalizer3(__dec_obj180,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj181=info_315.modules;
                                        info_315.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count((struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 930, "map$2charphsClassModuleph"))));
                                        /* a*/come_call_finalizer3(__dec_obj181,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj182=info_315.types;
                                        info_315.types=(struct map$2charphsTypeph*)come_increment_ref_count(map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count((struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 931, "map$2charphsTypeph"))));
                                        /* a*/come_call_finalizer3(__dec_obj182,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj183=info_315.module;
                                        info_315.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 932, "sModule"))));
                                        /* a*/come_call_finalizer3(__dec_obj183,sModule_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj184=info_315.right_value_objects;
                                        info_315.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 933, "list$1sRightValueObjectph"))));
                                        /* a*/come_call_finalizer3(__dec_obj184,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj185=info_315.stack;
                                        info_315.stack=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 934, "list$1CVALUEph"))));
                                        /* a*/come_call_finalizer3(__dec_obj185,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj186=info_315.gv_table;
                                        info_315.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 935, "sVarTable")),(_Bool)1,((void*)0)));
                                        /* a*/come_call_finalizer3(__dec_obj186,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        lv_table_317=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 936, "sVarTable")),(_Bool)0,((void*)0)));
                                        info_315.lv_table=lv_table_317;
                                        __dec_obj187=info_315.generics_type_names;
                                        info_315.generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 938, "list$1charph"))));
                                        /* a*/come_call_finalizer3(__dec_obj187,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj188=info_315.method_generics_type_names;
                                        info_315.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 939, "list$1charph"))));
                                        /* a*/come_call_finalizer3(__dec_obj188,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj189=info_315.generics_classes;
                                        info_315.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 940, "map$2charphsClassph"))));
                                        /* a*/come_call_finalizer3(__dec_obj189,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        info_315.verbose=verbose_309;
                                        init_classes(&info_315);
                                        clear_tmp_file(&info_315);
                                        if(!cpp(&info_315)) {
                                            printf("%s %d: transpile failed\n",info_315.sname,info_315.sline);
                                            exit(2);
                                        }
                                        __dec_obj190=info_315.original_source;
                                        info_315.original_source=(struct buffer*)come_increment_ref_count(string_to_buffer(((char*)(__right_value473=string_read(((char*)(__right_value472=xsprintf("%s",it_314))))))));
                                        /* a*/come_call_finalizer3(__dec_obj190,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __dec_obj191=info_315.source;
                                        info_315.source=(struct buffer*)come_increment_ref_count(string_to_buffer(((char*)(__right_value476=string_read(((char*)(__right_value475=xsprintf("%s.i",it_314))))))));
                                        /* a*/come_call_finalizer3(__dec_obj191,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        __right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        info_315.p=info_315.source->buf;
                                        info_315.head=info_315.source->buf;
                                        if(output_file_name_308) {
                                            __dec_obj192=info_315.output_file_name;
                                            info_315.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_308));
                                            __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        else {
                                            __dec_obj193=info_315.output_file_name;
                                            info_315.output_file_name=((void*)0);
                                            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        if(!output_cpp_file_306) {
                                            transpile_v5(&info_315);
                                            if(!output_source_file_v3(&info_315)) {
                                                printf("%s %d: output source file faield\n",info_315.sname,info_315.sline);
                                                exit(2);
                                            }
                                            if(info_315.err_num>0) {
                                                printf("transpile error. err num %d\n",info_315.err_num);
                                                exit(2);
                                            }
                                            else {
                                                if(!compile(&info_315,output_object_file_305,object_files_304)) {
                                                    printf("%s %d: compile faield\n",info_315.sname,info_315.sline);
                                                    exit(27);
                                                }
                                            }
                                        }
                                        if(output_cpp_file_306) {
                                        }
                                        else {
                                            if(info_315.err_num>0) {
                                            }
                                            else {
                                                if(output_source_file_flag_307) {
                                                    clear_tmp_file_without_object_file_and_ccfile(&info_315);
                                                }
                                                else {
                                                    clear_tmp_file_without_object_file(&info_315);
                                                }
                                            }
                                        }
                                        /*i*/come_call_finalizer3((&info_315),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(lv_table_317,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    /*i*/come_call_finalizer3(o2_saved_313,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    if(!output_object_file_305&&!output_cpp_file_306&&(list$1charph_length(files_303)>0||list$1charph_length(object_files_304)>0)) {
                                        memset(&info_318,0,sizeof(struct sInfo));
                                        __dec_obj194=info_318.sname;
                                        info_318.sname=(char*)come_increment_ref_count(string_clone(list$1charphp_operator_load_element(files_303,0)));
                                        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __dec_obj195=info_318.clang_option;
                                        info_318.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_301));
                                        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        info_318.verbose=verbose_309;
                                        if(output_file_name_308) {
                                            __dec_obj196=info_318.output_file_name;
                                            info_318.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_308));
                                            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        else {
                                            __dec_obj197=info_318.output_file_name;
                                            info_318.output_file_name=((void*)0);
                                            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        __current_stack3__.info_318 = &info_318;
                                        __current_stack3__.clang_option_301 = &clang_option_301;
                                        __current_stack3__.cpp_option_302 = &cpp_option_302;
                                        __current_stack3__.files_303 = &files_303;
                                        __current_stack3__.object_files_304 = &object_files_304;
                                        __current_stack3__.output_object_file_305 = &output_object_file_305;
                                        __current_stack3__.output_cpp_file_306 = &output_cpp_file_306;
                                        __current_stack3__.output_source_file_flag_307 = &output_source_file_flag_307;
                                        __current_stack3__.output_file_name_308 = &output_file_name_308;
                                        __current_stack3__.verbose_309 = &verbose_309;
                                        __current_stack3__.come_debug_310 = &come_debug_310;
                                        __current_stack3__.come_malloc_311 = &come_malloc_311;
                                        __current_stack3__.argc = &argc;
                                        __current_stack3__.argv = &argv;
                                        bool_expect(linker(&info_318,object_files_304),&__current_stack3__,(void*)method_block3_02transpilec);
                                        if(!output_cpp_file_306&&!output_source_file_flag_307) {
                                            clear_tmp_file(&info_318);
                                        }
                                        /*i*/come_call_finalizer3((&info_318),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                    }
                                    /*i*/come_call_finalizer3(clang_option_301,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(cpp_option_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(files_303,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(object_files_304,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    output_file_name_308 = come_decrement_ref_count2(output_file_name_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
int i_262;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct list$1charp* __dec_obj80;
struct map$2charphsFunph* __result126__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value362=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1370, "char*%"))));
    self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value363=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)), "/usr/local/include/comelang.h", 1371, "sFun*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value364=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1372, "bool"))));
    for(    i_262=0;    i_262<128;    i_262++    ){
        self->item_existance[i_262]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj80=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1382, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj80,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result126__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result125__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
int i_263;
int i_264;
    for(    i_263=0;    i_263<self->size;    i_263++    ){
        if(self->item_existance[i_263]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_263],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_264=0;    i_264<self->size;    i_264++    ){
        if(self->item_existance[i_264]) {
            if(1) {
                self->keys[i_264] = come_decrement_ref_count2(self->keys[i_264], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj81;
struct sType* __dec_obj82;
struct list$1sTypeph* __dec_obj83;
struct list$1charph* __dec_obj84;
struct list$1charph* __dec_obj85;
struct sType* __dec_obj86;
struct sBlock* __dec_obj87;
struct buffer* __dec_obj90;
struct buffer* __dec_obj91;
struct buffer* __dec_obj92;
struct buffer* __dec_obj93;
char* __dec_obj94;
char* __dec_obj95;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj81=self->mName;
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj82=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj83=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj83,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj84=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj84,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj85=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj85,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(self->mLambdaType==gComeFunResultObject) {
            __dec_obj86=self->mLambdaType;
            /* a*/come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj87=self->mBlock;
            /* a*/come_call_finalizer3(__dec_obj87,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj90=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj90,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj91=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj91,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj92=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj92,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(self->mSourceDefer==gComeFunResultObject) {
            __dec_obj93=self->mSourceDefer;
            /* a*/come_call_finalizer3(__dec_obj93,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(self->mComeHeader==gComeFunResultObject) {
            __dec_obj94=self->mComeHeader;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj95=self->mDeclareSName;
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj88;
struct sVarTable* __dec_obj89;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(self->mNodes==gComeFunResultObject) {
            __dec_obj88=self->mNodes;
            /* a*/come_call_finalizer3(__dec_obj88,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(self->mVarTable==gComeFunResultObject) {
            __dec_obj89=self->mVarTable;
            /* a*/come_call_finalizer3(__dec_obj89,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
int i_265;
int i_266;
    for(    i_265=0;    i_265<self->size;    i_265++    ){
        if(self->item_existance[i_265]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_265],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_266=0;    i_266<self->size;    i_266++    ){
        if(self->item_existance[i_266]) {
            if(1) {
                self->keys[i_266] = come_decrement_ref_count2(self->keys[i_266], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
int i_267;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct list$1charp* __dec_obj97;
struct map$2charphsGenericsFunph* __result127__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value369=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1370, "char*%"))));
    self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value370=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)), "/usr/local/include/comelang.h", 1371, "sGenericsFun*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value371=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1372, "bool"))));
    for(    i_267=0;    i_267<128;    i_267++    ){
        self->item_existance[i_267]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj97=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1382, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj97,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
int i_268;
int i_269;
    for(    i_268=0;    i_268<self->size;    i_268++    ){
        if(self->item_existance[i_268]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_268],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_269=0;    i_269<self->size;    i_269++    ){
        if(self->item_existance[i_269]) {
            if(1) {
                self->keys[i_269] = come_decrement_ref_count2(self->keys[i_269], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
int i_270;
int i_271;
    for(    i_270=0;    i_270<self->size;    i_270++    ){
        if(self->item_existance[i_270]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_270],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_271=0;    i_271<self->size;    i_271++    ){
        if(self->item_existance[i_271]) {
            if(1) {
                self->keys[i_271] = come_decrement_ref_count2(self->keys[i_271], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
int i_272;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1charp* __dec_obj109;
struct map$2charphsClassph* __result128__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value376=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1370, "char*%"))));
    self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value377=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)), "/usr/local/include/comelang.h", 1371, "sClass*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value378=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1372, "bool"))));
    for(    i_272=0;    i_272<128;    i_272++    ){
        self->item_existance[i_272]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj109=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1382, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj109,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result128__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
int i_273;
int i_274;
    for(    i_273=0;    i_273<self->size;    i_273++    ){
        if(self->item_existance[i_273]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_273],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_274=0;    i_274<self->size;    i_274++    ){
        if(self->item_existance[i_274]) {
            if(1) {
                self->keys[i_274] = come_decrement_ref_count2(self->keys[i_274], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
int i_275;
int i_276;
    for(    i_275=0;    i_275<self->size;    i_275++    ){
        if(self->item_existance[i_275]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_275],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_276=0;    i_276<self->size;    i_276++    ){
        if(self->item_existance[i_276]) {
            if(1) {
                self->keys[i_276] = come_decrement_ref_count2(self->keys[i_276], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self){
void* __result_obj__=(void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
int i_277;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct list$1charp* __dec_obj111;
struct map$2charphsClassModuleph* __result129__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value383=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1370, "char*%"))));
    self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(__right_value384=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(128)), "/usr/local/include/comelang.h", 1371, "sClassModule*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value385=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1372, "bool"))));
    for(    i_277=0;    i_277<128;    i_277++    ){
        self->item_existance[i_277]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj111=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1382, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj111,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self){
int i_278;
int i_279;
    for(    i_278=0;    i_278<self->size;    i_278++    ){
        if(self->item_existance[i_278]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_278],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_279=0;    i_279<self->size;    i_279++    ){
        if(self->item_existance[i_279]) {
            if(1) {
                self->keys[i_279] = come_decrement_ref_count2(self->keys[i_279], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj112;
char* __dec_obj113;
struct list$1charph* __dec_obj114;
char* __dec_obj115;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj112=self->mName;
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mText!=((void*)0)) {
        if(self->mText==gComeFunResultObject) {
            __dec_obj113=self->mText;
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(self->mParams==gComeFunResultObject) {
            __dec_obj114=self->mParams;
            /* a*/come_call_finalizer3(__dec_obj114,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(self->mSName==gComeFunResultObject) {
            __dec_obj115=self->mSName;
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self){
int i_280;
int i_281;
    for(    i_280=0;    i_280<self->size;    i_280++    ){
        if(self->item_existance[i_280]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_280],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_281=0;    i_281<self->size;    i_281++    ){
        if(self->item_existance[i_281]) {
            if(1) {
                self->keys[i_281] = come_decrement_ref_count2(self->keys[i_281], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
int i_282;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct list$1charp* __dec_obj117;
struct map$2charphsTypeph* __result130__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value390=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1370, "char*%"))));
    self->items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value391=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)), "/usr/local/include/comelang.h", 1371, "sType*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value392=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1372, "bool"))));
    for(    i_282=0;    i_282<128;    i_282++    ){
        self->item_existance[i_282]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj117=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1382, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj117,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
int i_283;
int i_284;
    for(    i_283=0;    i_283<self->size;    i_283++    ){
        if(self->item_existance[i_283]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_283],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_284=0;    i_284<self->size;    i_284++    ){
        if(self->item_existance[i_284]) {
            if(1) {
                self->keys[i_284] = come_decrement_ref_count2(self->keys[i_284], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
int i_285;
int i_286;
    for(    i_285=0;    i_285<self->size;    i_285++    ){
        if(self->item_existance[i_285]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_285],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_286=0;    i_286<self->size;    i_286++    ){
        if(self->item_existance[i_286]) {
            if(1) {
                self->keys[i_286] = come_decrement_ref_count2(self->keys[i_286], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
struct buffer* __dec_obj120;
struct buffer* __dec_obj121;
struct buffer* __dec_obj122;
struct buffer* __dec_obj123;
char* __dec_obj124;
char* __dec_obj125;
char* __dec_obj126;
struct buffer* __dec_obj127;
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj120=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj120,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj121=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj121,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead3!=((void*)0)) {
        if(self->mSourceHead3==gComeFunResultObject) {
            __dec_obj122=self->mSourceHead3;
            /* a*/come_call_finalizer3(__dec_obj122,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead3,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj123=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj123,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        if(self->mLastCode==gComeFunResultObject) {
            __dec_obj124=self->mLastCode;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        if(self->mLastCode2==gComeFunResultObject) {
            __dec_obj125=self->mLastCode2;
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLastCode3!=((void*)0)) {
        if(self->mLastCode3==gComeFunResultObject) {
            __dec_obj126=self->mLastCode3;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mLastCode3 = come_decrement_ref_count2(self->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mHeader!=((void*)0)) {
        if(self->mHeader==gComeFunResultObject) {
            __dec_obj127=self->mHeader;
            /* a*/come_call_finalizer3(__dec_obj127,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result131__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_287;
struct list_item$1sRightValueObjectph* prev_it_288;
    it_287=self->head;
    while(it_287!=((void*)0)) {
        prev_it_288=it_287;
        it_287=it_287->next;
        /*i*/come_call_finalizer3(prev_it_288,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj128;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj128=self->item;
            /* a*/come_call_finalizer3(__dec_obj128,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj129;
char* __dec_obj130;
char* __dec_obj131;
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj129=self->mType;
            /* a*/come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(self->mVarName==gComeFunResultObject) {
            __dec_obj130=self->mVarName;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(self->mFunName==gComeFunResultObject) {
            __dec_obj131=self->mFunName;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_289;
struct list_item$1sRightValueObjectph* prev_it_290;
    it_289=self->head;
    while(it_289!=((void*)0)) {
        prev_it_290=it_289;
        it_289=it_289->next;
        /*i*/come_call_finalizer3(prev_it_290,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result132__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result132__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_291;
struct list_item$1CVALUEph* prev_it_292;
    it_291=self->head;
    while(it_291!=((void*)0)) {
        prev_it_292=it_291;
        it_291=it_291->next;
        /*i*/come_call_finalizer3(prev_it_292,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj133;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj133=self->item;
            /* a*/come_call_finalizer3(__dec_obj133,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj134;
struct sType* __dec_obj135;
char* __dec_obj136;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(self->c_value==gComeFunResultObject) {
            __dec_obj134=self->c_value;
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj135=self->type;
            /* a*/come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj136=self->c_value_without_right_value_objects;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_293;
struct list_item$1CVALUEph* prev_it_294;
    it_293=self->head;
    while(it_293!=((void*)0)) {
        prev_it_294=it_293;
        it_293=it_293->next;
        /*i*/come_call_finalizer3(prev_it_294,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sInfo_finalize(struct sInfo* self){
struct buffer* __dec_obj145;
struct buffer* __dec_obj146;
char* __dec_obj147;
char* __dec_obj148;
char* __dec_obj149;
char* __dec_obj150;
char* __dec_obj151;
char* __dec_obj152;
struct map$2charphsFunph* __dec_obj153;
struct map$2charphsGenericsFunph* __dec_obj154;
struct map$2charphsClassph* __dec_obj155;
struct map$2charphsClassModuleph* __dec_obj156;
struct map$2charphsTypeph* __dec_obj157;
struct map$2charphsClassph* __dec_obj158;
struct sModule* __dec_obj159;
struct sType* __dec_obj160;
struct list$1sRightValueObjectph* __dec_obj161;
struct sType* __dec_obj162;
struct list$1sTypeph* __dec_obj163;
struct list$1CVALUEph* __dec_obj164;
struct sType* __dec_obj165;
struct sType* __dec_obj166;
struct sVarTable* __dec_obj167;
struct list$1charph* __dec_obj168;
struct list$1charph* __dec_obj169;
struct sType* __dec_obj170;
char* __dec_obj171;
struct sType* __dec_obj172;
struct map$2charphcharph* __dec_obj173;
    if(self!=((void*)0)&&self->original_source!=((void*)0)) {
        if(self->original_source==gComeFunResultObject) {
            __dec_obj145=self->original_source;
            /* a*/come_call_finalizer3(__dec_obj145,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->source!=((void*)0)) {
        if(self->source==gComeFunResultObject) {
            __dec_obj146=self->source;
            /* a*/come_call_finalizer3(__dec_obj146,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj147=self->sname;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->base_sname!=((void*)0)) {
        if(self->base_sname==gComeFunResultObject) {
            __dec_obj148=self->base_sname;
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->err_line!=((void*)0)) {
        if(self->err_line==gComeFunResultObject) {
            __dec_obj149=self->err_line;
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->clang_option!=((void*)0)) {
        if(self->clang_option==gComeFunResultObject) {
            __dec_obj150=self->clang_option;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->cpp_option!=((void*)0)) {
        if(self->cpp_option==gComeFunResultObject) {
            __dec_obj151=self->cpp_option;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->come_fun_name!=((void*)0)) {
        if(self->come_fun_name==gComeFunResultObject) {
            __dec_obj152=self->come_fun_name;
            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->come_fun_name = come_decrement_ref_count2(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->funcs!=((void*)0)) {
        if(self->funcs==gComeFunResultObject) {
            __dec_obj153=self->funcs;
            /* a*/come_call_finalizer3(__dec_obj153,map$2charphsFunph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->funcs,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->generics_funcs!=((void*)0)) {
        if(self->generics_funcs==gComeFunResultObject) {
            __dec_obj154=self->generics_funcs;
            /* a*/come_call_finalizer3(__dec_obj154,map$2charphsGenericsFunph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->generics_funcs,map$2charphsGenericsFunphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->classes!=((void*)0)) {
        if(self->classes==gComeFunResultObject) {
            __dec_obj155=self->classes;
            /* a*/come_call_finalizer3(__dec_obj155,map$2charphsClassph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->modules!=((void*)0)) {
        if(self->modules==gComeFunResultObject) {
            __dec_obj156=self->modules;
            /* a*/come_call_finalizer3(__dec_obj156,map$2charphsClassModuleph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->modules,map$2charphsClassModulephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->types!=((void*)0)) {
        if(self->types==gComeFunResultObject) {
            __dec_obj157=self->types;
            /* a*/come_call_finalizer3(__dec_obj157,map$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->types,map$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->generics_classes!=((void*)0)) {
        if(self->generics_classes==gComeFunResultObject) {
            __dec_obj158=self->generics_classes;
            /* a*/come_call_finalizer3(__dec_obj158,map$2charphsClassph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->generics_classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->module!=((void*)0)) {
        if(self->module==gComeFunResultObject) {
            __dec_obj159=self->module;
            /* a*/come_call_finalizer3(__dec_obj159,sModule_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj160=self->type;
            /* a*/come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->right_value_objects!=((void*)0)) {
        if(self->right_value_objects==gComeFunResultObject) {
            __dec_obj161=self->right_value_objects;
            /* a*/come_call_finalizer3(__dec_obj161,list$1sRightValueObjectph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->right_value_objects,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->generics_type!=((void*)0)) {
        if(self->generics_type==gComeFunResultObject) {
            __dec_obj162=self->generics_type;
            /* a*/come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(self->method_generics_types==gComeFunResultObject) {
            __dec_obj163=self->method_generics_types;
            /* a*/come_call_finalizer3(__dec_obj163,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->stack!=((void*)0)) {
        if(self->stack==gComeFunResultObject) {
            __dec_obj164=self->stack;
            /* a*/come_call_finalizer3(__dec_obj164,list$1CVALUEph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->stack,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->come_function_result_type!=((void*)0)) {
        if(self->come_function_result_type==gComeFunResultObject) {
            __dec_obj165=self->come_function_result_type;
            /* a*/come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->come_method_block_function_result_type!=((void*)0)) {
        if(self->come_method_block_function_result_type==gComeFunResultObject) {
            __dec_obj166=self->come_method_block_function_result_type;
            /* a*/come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->come_method_block_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->gv_table!=((void*)0)) {
        if(self->gv_table==gComeFunResultObject) {
            __dec_obj167=self->gv_table;
            /* a*/come_call_finalizer3(__dec_obj167,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->generics_type_names!=((void*)0)) {
        if(self->generics_type_names==gComeFunResultObject) {
            __dec_obj168=self->generics_type_names;
            /* a*/come_call_finalizer3(__dec_obj168,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->method_generics_type_names!=((void*)0)) {
        if(self->method_generics_type_names==gComeFunResultObject) {
            __dec_obj169=self->method_generics_type_names;
            /* a*/come_call_finalizer3(__dec_obj169,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->impl_type!=((void*)0)) {
        if(self->impl_type==gComeFunResultObject) {
            __dec_obj170=self->impl_type;
            /* a*/come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->output_file_name!=((void*)0)) {
        if(self->output_file_name==gComeFunResultObject) {
            __dec_obj171=self->output_file_name;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->function_result_type!=((void*)0)) {
        if(self->function_result_type==gComeFunResultObject) {
            __dec_obj172=self->function_result_type;
            /* a*/come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->module_params!=((void*)0)) {
        if(self->module_params==gComeFunResultObject) {
            __dec_obj173=self->module_params;
            /* a*/come_call_finalizer3(__dec_obj173,map$2charphcharph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->module_params,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_297;
int i_298;
    for(    i_297=0;    i_297<self->size;    i_297++    ){
        if(self->item_existance[i_297]) {
            if(1) {
                self->items[i_297] = come_decrement_ref_count2(self->items[i_297], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_298=0;    i_298<self->size;    i_298++    ){
        if(self->item_existance[i_298]) {
            if(1) {
                self->keys[i_298] = come_decrement_ref_count2(self->keys[i_298], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_299;
int i_300;
    for(    i_299=0;    i_299<self->size;    i_299++    ){
        if(self->item_existance[i_299]) {
            if(1) {
                self->items[i_299] = come_decrement_ref_count2(self->items[i_299], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_300=0;    i_300<self->size;    i_300++    ){
        if(self->item_existance[i_300]) {
            if(1) {
                self->keys[i_300] = come_decrement_ref_count2(self->keys[i_300], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_319;
int i_320;
char* __result133__;
char* default_value_321;
char* __result134__;
default_value_321 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_319=self->head;
    i_320=0;
    while(it_319!=((void*)0)) {
        if(position==i_320) {
            __result133__ = gComeFunResultObject = __result_obj__ = it_319->item;
            gComeFunResultObject = (void*)0;
            return __result133__;
        }
        it_319=it_319->next;
        i_320++;
    }
    memset(&default_value_321,0,sizeof(char*));
    __result134__ = gComeFunResultObject = __result_obj__ = default_value_321;
    default_value_321 = come_decrement_ref_count2(default_value_321, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

void method_block3_02transpilec(struct __current_stack3__* parent){
    printf("%s %d: linker faield\n",(*(parent->info_318)).sname,(*(parent->info_318)).sline);
    exit(13);
}

