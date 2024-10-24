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
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
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
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_exception_right_value_objects(struct sInfo* info, _Bool comma);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_on_break(struct sInfo* info);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
_Bool existance_free_right_value_objects(struct sInfo* info);
// uniq global variable
// source head3
int gRightValueNum=0;

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










void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects){
struct sRightValueObject* it_64;
struct list$1sRightValueObjectph* o2_saved_65;
struct sRightValueObject* it2_68;
char* __dec_obj39;
void* __right_value116 = (void*)0;
char* __dec_obj40;
    if(gComeGC||gComeC) {
        return;
    }
    if(right_value->right_value_objects) {
        it_64=right_value->right_value_objects;
        for(        o2_saved_65=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it2_68=list$1sRightValueObjectph_begin((o2_saved_65));        !list$1sRightValueObjectph_end((o2_saved_65));        it2_68=list$1sRightValueObjectph_next((o2_saved_65))        ){
            if(it_64->mID==it2_68->mID) {
                it2_68->mStored=(_Bool)1;
                break;
            }
        }
        /*i*/come_call_finalizer3(o2_saved_65,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(right_value->c_value_without_right_value_objects) {
        __dec_obj39=right_value->c_value;
        right_value->c_value=(char*)come_increment_ref_count(right_value->c_value_without_right_value_objects);
        __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj40=right_value->c_value;
    right_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
    __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct sRightValueObject* result_66;
struct sRightValueObject* __result65__;
struct sRightValueObject* __result66__;
struct sRightValueObject* result_67;
struct sRightValueObject* __result67__;
result_66 = (void*)0;
result_67 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_66,0,sizeof(struct sRightValueObject*));
        __result65__ = gComeFunResultObject = __result_obj__ = result_66;
        gComeFunResultObject = (void*)0;
        return __result65__;
    }
    self->it=self->head;
    if(self->it) {
        __result66__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result66__;
    }
    memset(&result_67,0,sizeof(struct sRightValueObject*));
    __result67__ = gComeFunResultObject = __result_obj__ = result_67;
    gComeFunResultObject = (void*)0;
    return __result67__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct sRightValueObject* result_69;
struct sRightValueObject* __result68__;
struct sRightValueObject* __result69__;
struct sRightValueObject* result_70;
struct sRightValueObject* __result70__;
result_69 = (void*)0;
result_70 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_69,0,sizeof(struct sRightValueObject*));
        __result68__ = gComeFunResultObject = __result_obj__ = result_69;
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result69__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    memset(&result_70,0,sizeof(struct sRightValueObject*));
    __result70__ = gComeFunResultObject = __result_obj__ = result_70;
    gComeFunResultObject = (void*)0;
    return __result70__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_71;
struct list_item$1sRightValueObjectph* prev_it_72;
    it_71=self->head;
    while(it_71!=((void*)0)) {
        prev_it_72=it_71;
        it_71=it_71->next;
        /*i*/come_call_finalizer3(prev_it_72,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj15;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj15=self->item;
            /* a*/come_call_finalizer3(__dec_obj15,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj16;
char* __dec_obj37;
char* __dec_obj38;
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj16=self->mType;
            /* a*/come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(self->mVarName==gComeFunResultObject) {
            __dec_obj37=self->mVarName;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct tuple1$1sTypeph* __dec_obj17;
struct tuple1$1sTypeph* __dec_obj19;
struct tuple1$1sTypeph* __dec_obj21;
char* __dec_obj23;
struct list$1sTypeph* __dec_obj24;
struct list$1sNodeph* __dec_obj26;
struct list$1sTypeph* __dec_obj28;
struct list$1charph* __dec_obj29;
struct tuple1$1sTypeph* __dec_obj31;
struct sNode* __dec_obj33;
struct sNode* __dec_obj34;
char* __dec_obj35;
char* __dec_obj36;
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj17=self->mNoSolvedGenericsType;
            /* a*/come_call_finalizer3(__dec_obj17,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj19=self->mOriginalLoadVarType;
            /* a*/come_call_finalizer3(__dec_obj19,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj21=self->mNoExceptionType;
            /* a*/come_call_finalizer3(__dec_obj21,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(self->mGenericsName==gComeFunResultObject) {
            __dec_obj23=self->mGenericsName;
            __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj24=self->mGenericsTypes;
            /* a*/come_call_finalizer3(__dec_obj24,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(self->mArrayNum==gComeFunResultObject) {
            __dec_obj26=self->mArrayNum;
            /* a*/come_call_finalizer3(__dec_obj26,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj28=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj28,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj29=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj31=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj31,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(self->mAlignas==gComeFunResultObject) {
            __dec_obj33=self->mAlignas;
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(self->mSizeNum==gComeFunResultObject) {
            __dec_obj34=self->mSizeNum;
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj35=self->mOriginalTypeName;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(self->mAsmName==gComeFunResultObject) {
            __dec_obj36=self->mAsmName;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_73;
struct list_item$1sTypeph* prev_it_74;
    it_73=self->head;
    while(it_73!=((void*)0)) {
        prev_it_74=it_73;
        it_73=it_73->next;
        /*i*/come_call_finalizer3(prev_it_74,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj25;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj25=self->item;
            /* a*/come_call_finalizer3(__dec_obj25,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_75;
struct list_item$1sTypeph* prev_it_76;
    it_75=self->head;
    while(it_75!=((void*)0)) {
        prev_it_76=it_75;
        it_75=it_75->next;
        /*i*/come_call_finalizer3(prev_it_76,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_77;
struct list_item$1sNodeph* prev_it_78;
    it_77=self->head;
    while(it_77!=((void*)0)) {
        prev_it_78=it_77;
        it_77=it_77->next;
        /*i*/come_call_finalizer3(prev_it_78,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj27;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj27=self->item;
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_79;
struct list_item$1sNodeph* prev_it_80;
    it_79=self->head;
    while(it_79!=((void*)0)) {
        prev_it_80=it_79;
        it_79=it_79->next;
        /*i*/come_call_finalizer3(prev_it_80,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_81;
struct list_item$1charph* prev_it_82;
    it_81=self->head;
    while(it_81!=((void*)0)) {
        prev_it_82=it_81;
        it_81=it_81->next;
        /*i*/come_call_finalizer3(prev_it_82,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj30;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj30=self->item;
            __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_83;
struct list_item$1charph* prev_it_84;
    it_83=self->head;
    while(it_83!=((void*)0)) {
        prev_it_84=it_83;
        it_83=it_83->next;
        /*i*/come_call_finalizer3(prev_it_84,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj32;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj32=self->v1;
            /* a*/come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value152 = (void*)0;
struct sType* result_85;
struct sType* __result89__;
struct sType* __result90__;
struct sClass* klass_104;
void* __right_value153 = (void*)0;
struct sType* result_type_105;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
struct tuple1$1sTypeph* __dec_obj66;
struct list$1sTypeph* o2_saved_108;
struct sType* it_111;
void* __right_value156 = (void*)0;
struct sType* new_param_type_114;
int generics_number_118;
struct list$1sNodeph* array_num_119;
_Bool immutable__120;
int pointer_num_121;
_Bool heap_122;
_Bool exception__123;
_Bool guard__124;
_Bool no_heap_125;
_Bool no_calling_destructor_126;
_Bool null_value_127;
void* __right_value160 = (void*)0;
struct sType* __dec_obj70;
struct list$1sNodeph* __dec_obj71;
int generics_number_131;
struct sClass* klass2_132;
int generics_number2_133;
struct list$1sNodeph* array_num_134;
_Bool immutable__135;
int pointer_num_136;
_Bool heap_137;
_Bool guard__138;
_Bool no_heap_139;
_Bool no_calling_destructor_140;
_Bool null_value_141;
_Bool record__142;
_Bool multiple_types_143;
_Bool exception__144;
void* __right_value161 = (void*)0;
struct sType* __dec_obj72;
struct list$1sNodeph* __dec_obj73;
struct list$1sTypeph* o2_saved_145;
struct sType* it_146;
void* __right_value162 = (void*)0;
struct sType* type_147;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
char* new_name_148;
struct sType* __result102__;
    result_85=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(generics_type==((void*)0)) {
        __result89__ = gComeFunResultObject = __result_obj__ = result_85;
        /*i*/come_call_finalizer3(result_85,sType_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result89__;
    }
    if(list$1sTypeph_length(generics_type->mGenericsTypes)==0) {
        __result90__ = gComeFunResultObject = __result_obj__ = result_85;
        /*i*/come_call_finalizer3(result_85,sType_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result90__;
    }
    klass_104=type->mClass;
    if(string_operator_equals(klass_104->mName,"lambda")) {
        result_type_105=(struct sType*)come_increment_ref_count(solve_generics(type->mResultType->v1,generics_type,info));
        __dec_obj66=result_85->mResultType;
        result_85->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 38, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_105)));
        /* a*/come_call_finalizer3(__dec_obj66,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        list$1sTypeph_reset(result_85->mParamTypes);
        for(        o2_saved_108=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_111=list$1sTypeph_begin((o2_saved_108));        !list$1sTypeph_end((o2_saved_108));        it_111=list$1sTypeph_next((o2_saved_108))        ){
            new_param_type_114=(struct sType*)come_increment_ref_count(solve_generics(it_111,generics_type,info));
            list$1sTypeph_push_back(result_85->mParamTypes,(struct sType*)come_increment_ref_count(new_param_type_114));
            /*i*/come_call_finalizer3(new_param_type_114,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_108,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(klass_104->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0) {
            generics_number_118=klass_104->mMethodGenericsNum;
            if(generics_number_118>=list$1sTypeph_length(info->method_generics_types)) {
                err_msg(info,"invalid method generics parametor number. %d %d",generics_number_118,list$1sTypeph_length(info->method_generics_types));
                exit(2);
            }
            array_num_119=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
            immutable__120=type->mImmutable;
            pointer_num_121=type->mPointerNum;
            heap_122=type->mHeap;
            exception__123=type->mException;
            guard__124=type->mGuardValue;
            no_heap_125=type->mNoHeap;
            no_calling_destructor_126=type->mNoCallingDestructor;
            null_value_127=type->mNullValue;
            __dec_obj70=result_85;
            result_85=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_118), "04heap.c", 68, 0))));
            /* a*/come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(heap_122) {
                result_85->mHeap=heap_122;
            }
            if(guard__124) {
                result_85->mGuardValue=guard__124;
            }
            if(no_heap_125) {
                result_85->mNoHeap=(_Bool)1;
                result_85->mHeap=(_Bool)0;
            }
            if(exception__123) {
                result_85->mException=(_Bool)1;
            }
            if(no_calling_destructor_126) {
                result_85->mNoCallingDestructor=(_Bool)1;
            }
            if(immutable__120) {
                result_85->mImmutable=immutable__120;
            }
            if(list$1sNodeph_length(array_num_119)>0) {
                __dec_obj71=result_85->mArrayNum;
                result_85->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_119);
                /* a*/come_call_finalizer3(__dec_obj71,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(null_value_127) {
                result_85->mNullValue=null_value_127;
            }
            if(pointer_num_121>0) {
                result_85->mPointerNum+=pointer_num_121;
            }
            /*i*/come_call_finalizer3(array_num_119,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(klass_104->mGenerics) {
                generics_number_131=klass_104->mGenericsNum;
                if(generics_number_131>=list$1sTypeph_length(generics_type->mGenericsTypes)) {
                    err_msg(info,"invalid generics parametor number");
                    exit(2);
                }
                klass2_132=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_131), "04heap.c", 110, 1))->mClass;
                generics_number2_133=klass2_132->mGenericsNum;
                if(generics_number_131!=generics_number2_133) {
                    array_num_134=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
                    immutable__135=type->mImmutable;
                    pointer_num_136=type->mPointerNum;
                    heap_137=type->mHeap;
                    guard__138=type->mGuardValue;
                    no_heap_139=type->mNoHeap;
                    no_calling_destructor_140=type->mNoCallingDestructor;
                    null_value_141=type->mNullValue;
                    record__142=type->mRecord;
                    multiple_types_143=type->mMultipleTypes;
                    exception__144=type->mException;
                    __dec_obj72=result_85;
                    result_85=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_131), "04heap.c", 129, 2))));
                    /* a*/come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(heap_137) {
                        result_85->mHeap=heap_137;
                    }
                    if(exception__144) {
                        result_85->mException=exception__144;
                    }
                    if(guard__138) {
                        result_85->mGuardValue=guard__138;
                    }
                    if(record__142) {
                        result_85->mRecord=record__142;
                    }
                    if(no_heap_139) {
                        result_85->mNoHeap=(_Bool)1;
                        result_85->mHeap=(_Bool)0;
                    }
                    if(multiple_types_143) {
                        result_85->mMultipleTypes=(_Bool)1;
                    }
                    if(no_calling_destructor_140) {
                        result_85->mNoCallingDestructor=(_Bool)1;
                    }
                    if(immutable__135) {
                        result_85->mImmutable=immutable__135;
                    }
                    if(list$1sNodeph_length(array_num_134)>0) {
                        __dec_obj73=result_85->mArrayNum;
                        result_85->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_134);
                        /* a*/come_call_finalizer3(__dec_obj73,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(null_value_141) {
                        result_85->mNullValue=null_value_141;
                    }
                    if(pointer_num_136>0) {
                        result_85->mPointerNum+=pointer_num_136;
                    }
                    /*i*/come_call_finalizer3(array_num_134,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                list$1sTypeph_reset(result_85->mGenericsTypes);
                for(                o2_saved_145=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_146=list$1sTypeph_begin((o2_saved_145));                !list$1sTypeph_end((o2_saved_145));                it_146=list$1sTypeph_next((o2_saved_145))                ){
                    type_147=(struct sType*)come_increment_ref_count(solve_generics(it_146,generics_type,info));
                    list$1sTypeph_push_back(result_85->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(type_147)));
                    /*i*/come_call_finalizer3(type_147,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                /*i*/come_call_finalizer3(o2_saved_145,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                if(!output_generics_struct(result_85,generics_type,info)) {
                    new_name_148=(char*)come_increment_ref_count(create_generics_name(type,info));
                    printf("output generics is failed(%s)",new_name_148);
                    exit(1);
                    new_name_148 = come_decrement_ref_count2(new_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    __result102__ = gComeFunResultObject = __result_obj__ = result_85;
    /*i*/come_call_finalizer3(result_85,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result71__;
void* __right_value117 = (void*)0;
struct sType* result_86;
void* __right_value120 = (void*)0;
struct tuple1$1sTypeph* __dec_obj43;
void* __right_value121 = (void*)0;
struct tuple1$1sTypeph* __dec_obj44;
void* __right_value122 = (void*)0;
struct tuple1$1sTypeph* __dec_obj45;
void* __right_value123 = (void*)0;
char* __dec_obj46;
void* __right_value130 = (void*)0;
struct list$1sTypeph* __dec_obj50;
void* __right_value138 = (void*)0;
struct list$1sNodeph* __dec_obj54;
void* __right_value139 = (void*)0;
struct list$1sTypeph* __dec_obj55;
void* __right_value146 = (void*)0;
struct list$1charph* __dec_obj59;
void* __right_value147 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value148 = (void*)0;
struct sNode* __dec_obj61;
void* __right_value149 = (void*)0;
struct sNode* __dec_obj62;
void* __right_value150 = (void*)0;
char* __dec_obj63;
void* __right_value151 = (void*)0;
char* __dec_obj64;
struct sType* __result88__;
    if(self==(void*)0) {
        __result71__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result71__;
    }
    result_86=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_86->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj43=result_86->mNoSolvedGenericsType;
        result_86->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        /* a*/come_call_finalizer3(__dec_obj43,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj44=result_86->mOriginalLoadVarType;
        result_86->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        /* a*/come_call_finalizer3(__dec_obj44,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj45=result_86->mNoExceptionType;
        result_86->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        /* a*/come_call_finalizer3(__dec_obj45,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj46=result_86->mGenericsName;
        result_86->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj50=result_86->mGenericsTypes;
        result_86->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        /* a*/come_call_finalizer3(__dec_obj50,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj54=result_86->mArrayNum;
        result_86->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        /* a*/come_call_finalizer3(__dec_obj54,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_86->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj55=result_86->mParamTypes;
        result_86->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj55,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj59=result_86->mParamNames;
        result_86->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj59,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj60=result_86->mResultType;
        result_86->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_86->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj61=result_86->mAlignas;
        result_86->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_86->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_86->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_86->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_86->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_86->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_86->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_86->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_86->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_86->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_86->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_86->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_86->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_86->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_86->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_86->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_86->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_86->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_86->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_86->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_86->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_86->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_86->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_86->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_86->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_86->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(self!=((void*)0)) {
        result_86->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_86->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj62=result_86->mSizeNum;
        result_86->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_86->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result_86->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_86->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj63=result_86->mOriginalTypeName;
        result_86->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_86->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_86->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_86->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_86->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_86->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_86->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_86->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_86->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_86->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj64=result_86->mAsmName;
        result_86->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_86->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_86->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_86->mNoNumberArray=self->mNoNumberArray;
    }
    if(self!=((void*)0)) {
        result_86->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result_86->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)) {
        result_86->mOriginIsArray=self->mOriginIsArray;
    }
    __result88__ = gComeFunResultObject = __result_obj__ = result_86;
    /*i*/come_call_finalizer3(result_86,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result72__;
void* __right_value118 = (void*)0;
struct tuple1$1sTypeph* result_87;
void* __right_value119 = (void*)0;
struct sType* __dec_obj41;
struct tuple1$1sTypeph* __result73__;
    if(self==(void*)0) {
        __result72__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_87=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj41=result_87->v1;
        result_87->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /* a*/come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result73__ = gComeFunResultObject = __result_obj__ = result_87;
    /*i*/come_call_finalizer3(result_87,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj42;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj42=self->v1;
            /* a*/come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result74__;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1sTypeph* result_88;
struct list_item$1sTypeph* it_89;
void* __right_value129 = (void*)0;
struct list$1sTypeph* __result77__;
    if(self==((void*)0)) {
        __result74__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    result_88=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sTypeph"))));
    it_89=self->head;
    while(it_89!=((void*)0)) {
        list$1sTypeph_add(result_88,(struct sType*)come_increment_ref_count(sType_clone(it_89->item)));
        it_89=it_89->next;
    }
    __result77__ = gComeFunResultObject = __result_obj__ = result_88;
    /*i*/come_call_finalizer3(result_88,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result75__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result75__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
struct list_item$1sTypeph* litem_90;
struct sType* __dec_obj47;
void* __right_value127 = (void*)0;
struct list_item$1sTypeph* litem_91;
struct sType* __dec_obj48;
void* __right_value128 = (void*)0;
struct list_item$1sTypeph* litem_92;
struct sType* __dec_obj49;
struct list$1sTypeph* __result76__;
    if(self->len==0) {
        litem_90=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value126=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sTypeph"))));
        litem_90->prev=((void*)0);
        litem_90->next=((void*)0);
        __dec_obj47=litem_90->item;
        litem_90->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_90;
        self->head=litem_90;
    }
    else {
        if(self->len==1) {
            litem_91=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value127=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sTypeph"))));
            litem_91->prev=self->head;
            litem_91->next=((void*)0);
            __dec_obj48=litem_91->item;
            litem_91->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_91;
            self->head->next=litem_91;
        }
        else {
            litem_92=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value128=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sTypeph"))));
            litem_92->prev=self->tail;
            litem_92->next=((void*)0);
            __dec_obj49=litem_92->item;
            litem_92->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_92;
            self->tail=litem_92;
        }
    }
    self->len++;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result78__;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct list$1sNodeph* result_93;
struct list_item$1sNodeph* it_94;
void* __right_value137 = (void*)0;
struct list$1sNodeph* __result83__;
    if(self==((void*)0)) {
        __result78__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result78__;
    }
    result_93=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sNodeph"))));
    it_94=self->head;
    while(it_94!=((void*)0)) {
        list$1sNodeph_add(result_93,(struct sNode*)come_increment_ref_count(sNode_clone(it_94->item)));
        it_94=it_94->next;
    }
    __result83__ = gComeFunResultObject = __result_obj__ = result_93;
    /*i*/come_call_finalizer3(result_93,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result79__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
struct list_item$1sNodeph* litem_95;
struct sNode* __dec_obj51;
void* __right_value134 = (void*)0;
struct list_item$1sNodeph* litem_96;
struct sNode* __dec_obj52;
void* __right_value135 = (void*)0;
struct list_item$1sNodeph* litem_97;
struct sNode* __dec_obj53;
struct list$1sNodeph* __result80__;
    if(self->len==0) {
        litem_95=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value133=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sNodeph"))));
        litem_95->prev=((void*)0);
        litem_95->next=((void*)0);
        __dec_obj51=litem_95->item;
        litem_95->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_95;
        self->head=litem_95;
    }
    else {
        if(self->len==1) {
            litem_96=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value134=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sNodeph"))));
            litem_96->prev=self->head;
            litem_96->next=((void*)0);
            __dec_obj52=litem_96->item;
            litem_96->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_96;
            self->head->next=litem_96;
        }
        else {
            litem_97=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value135=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sNodeph"))));
            litem_97->prev=self->tail;
            litem_97->next=((void*)0);
            __dec_obj53=litem_97->item;
            litem_97->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_97;
            self->tail=litem_97;
        }
    }
    self->len++;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result81__;
void* __right_value136 = (void*)0;
struct sNode* result_98;
struct sNode* __result82__;
    if(self==(void*)0) {
        __result81__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result81__;
    }
    result_98=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_98->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_98->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_98->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_98->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_98->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_98->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_98->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_98->kind=self->kind;
    }
    __result82__ = gComeFunResultObject = __result_obj__ = result_98;
    if(result_98) { result_98 = come_decrement_ref_count2(result_98, ((struct sNode*)result_98)->finalize, ((struct sNode*)result_98)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result84__;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct list$1charph* result_99;
struct list_item$1charph* it_100;
void* __right_value145 = (void*)0;
struct list$1charph* __result87__;
    if(self==((void*)0)) {
        __result84__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result84__;
    }
    result_99=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 137, "list$1charph"))));
    it_100=self->head;
    while(it_100!=((void*)0)) {
        list$1charph_add(result_99,(char*)come_increment_ref_count(string_clone(it_100->item)));
        it_100=it_100->next;
    }
    __result87__ = gComeFunResultObject = __result_obj__ = result_99;
    /*i*/come_call_finalizer3(result_99,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result85__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct list_item$1charph* litem_101;
char* __dec_obj56;
void* __right_value143 = (void*)0;
struct list_item$1charph* litem_102;
char* __dec_obj57;
void* __right_value144 = (void*)0;
struct list_item$1charph* litem_103;
char* __dec_obj58;
struct list$1charph* __result86__;
    if(self->len==0) {
        litem_101=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value142=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1charph"))));
        litem_101->prev=((void*)0);
        litem_101->next=((void*)0);
        __dec_obj56=litem_101->item;
        litem_101->item=(char*)come_increment_ref_count(item);
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_101;
        self->head=litem_101;
    }
    else {
        if(self->len==1) {
            litem_102=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1charph"))));
            litem_102->prev=self->head;
            litem_102->next=((void*)0);
            __dec_obj57=litem_102->item;
            litem_102->item=(char*)come_increment_ref_count(item);
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_102;
            self->head->next=litem_102;
        }
        else {
            litem_103=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1charph"))));
            litem_103->prev=self->tail;
            litem_103->next=((void*)0);
            __dec_obj58=litem_103->item;
            litem_103->item=(char*)come_increment_ref_count(item);
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_103;
            self->tail=litem_103;
        }
    }
    self->len++;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj65;
struct tuple1$1sTypeph* __result91__;
    __dec_obj65=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_106;
struct list_item$1sTypeph* prev_it_107;
struct list$1sTypeph* __result92__;
    it_106=self->head;
    while(it_106!=((void*)0)) {
        prev_it_107=it_106;
        it_106=it_106->next;
        /*i*/come_call_finalizer3(prev_it_107,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_109;
struct sType* __result93__;
struct sType* __result94__;
struct sType* result_110;
struct sType* __result95__;
result_109 = (void*)0;
result_110 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_109,0,sizeof(struct sType*));
        __result93__ = gComeFunResultObject = __result_obj__ = result_109;
        gComeFunResultObject = (void*)0;
        return __result93__;
    }
    self->it=self->head;
    if(self->it) {
        __result94__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result94__;
    }
    memset(&result_110,0,sizeof(struct sType*));
    __result95__ = gComeFunResultObject = __result_obj__ = result_110;
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_112;
struct sType* __result96__;
struct sType* __result97__;
struct sType* result_113;
struct sType* __result98__;
result_112 = (void*)0;
result_113 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_112,0,sizeof(struct sType*));
        __result96__ = gComeFunResultObject = __result_obj__ = result_112;
        gComeFunResultObject = (void*)0;
        return __result96__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result97__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result97__;
    }
    memset(&result_113,0,sizeof(struct sType*));
    __result98__ = gComeFunResultObject = __result_obj__ = result_113;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value157 = (void*)0;
struct list_item$1sTypeph* litem_115;
struct sType* __dec_obj67;
void* __right_value158 = (void*)0;
struct list_item$1sTypeph* litem_116;
struct sType* __dec_obj68;
void* __right_value159 = (void*)0;
struct list_item$1sTypeph* litem_117;
struct sType* __dec_obj69;
struct list$1sTypeph* __result99__;
    if(self->len==0) {
        litem_115=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value157=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sTypeph"))));
        litem_115->prev=((void*)0);
        litem_115->next=((void*)0);
        __dec_obj67=litem_115->item;
        litem_115->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_115;
        self->head=litem_115;
    }
    else {
        if(self->len==1) {
            litem_116=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value158=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sTypeph"))));
            litem_116->prev=self->head;
            litem_116->next=((void*)0);
            __dec_obj68=litem_116->item;
            litem_116->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_116;
            self->head->next=litem_116;
        }
        else {
            litem_117=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value159=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sTypeph"))));
            litem_117->prev=self->tail;
            litem_117->next=((void*)0);
            __dec_obj69=litem_117->item;
            litem_117->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_117;
            self->tail=litem_117;
        }
    }
    self->len++;
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_128;
int i_129;
struct sType* __result100__;
struct sType* default_value_130;
struct sType* __result101__;
default_value_130 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_128=self->head;
    i_129=0;
    while(it_128!=((void*)0)) {
        if(position==i_129) {
            __result100__ = gComeFunResultObject = __result_obj__ = it_128->item;
            gComeFunResultObject = (void*)0;
            return __result100__;
        }
        it_128=it_128->next;
        i_129++;
    }
    memset(&default_value_130,0,sizeof(struct sType*));
    __result101__ = gComeFunResultObject = __result_obj__ = default_value_130;
    /*i*/come_call_finalizer3(default_value_130,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value165 = (void*)0;
struct sType* result_149;
struct sClass* klass_150;
int generics_number_151;
struct list$1sNodeph* array_num_152;
_Bool immutable__153;
int pointer_num_154;
_Bool heap_155;
_Bool guard__156;
_Bool no_heap_157;
_Bool no_calling_destructor_158;
_Bool null_value_159;
_Bool exception__160;
void* __right_value166 = (void*)0;
struct sType* __dec_obj74;
struct list$1sNodeph* __dec_obj75;
int i_161;
struct list$1sTypeph* o2_saved_162;
struct sType* it_163;
void* __right_value167 = (void*)0;
struct list$1sTypeph* o2_saved_169;
struct sType* it_170;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
struct sType* __dec_obj77;
struct sType* __result106__;
    result_149=(struct sType*)come_increment_ref_count(sType_clone(type));
    klass_150=type->mClass;
    if(klass_150->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0) {
        generics_number_151=klass_150->mMethodGenericsNum;
        if(generics_number_151>=list$1sTypeph_length(info->method_generics_types)) {
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number_151,list$1sTypeph_length(info->method_generics_types));
            exit(2);
        }
        array_num_152=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
        immutable__153=type->mImmutable;
        pointer_num_154=type->mPointerNum;
        heap_155=type->mHeap;
        guard__156=type->mGuardValue;
        no_heap_157=type->mNoHeap;
        no_calling_destructor_158=type->mNoCallingDestructor;
        null_value_159=type->mNullValue;
        exception__160=type->mException;
        __dec_obj74=result_149;
        result_149=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_151), "04heap.c", 213, 3))));
        /* a*/come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(heap_155) {
            result_149->mHeap=heap_155||result_149->mHeap;
        }
        if(exception__160) {
            result_149->mException=exception__160;
        }
        if(guard__156) {
            result_149->mGuardValue=guard__156||result_149->mGuardValue;
        }
        if(no_heap_157) {
            result_149->mNoHeap=(_Bool)1;
            result_149->mHeap=(_Bool)0;
        }
        if(no_calling_destructor_158) {
            result_149->mNoCallingDestructor=(_Bool)1;
        }
        if(immutable__153) {
            result_149->mImmutable=immutable__153;
        }
        if(list$1sNodeph_length(array_num_152)>0) {
            __dec_obj75=result_149->mArrayNum;
            result_149->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_152);
            /* a*/come_call_finalizer3(__dec_obj75,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(null_value_159) {
            result_149->mNullValue=null_value_159;
        }
        if(pointer_num_154>0) {
            result_149->mPointerNum+=pointer_num_154;
        }
        /*i*/come_call_finalizer3(array_num_152,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    i_161=0;
    for(    o2_saved_162=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_163=list$1sTypeph_begin((o2_saved_162));    !list$1sTypeph_end((o2_saved_162));    it_163=list$1sTypeph_next((o2_saved_162))    ){
        list$1sTypephp_operator_store_element(result_149->mGenericsTypes,i_161,(struct sType*)come_increment_ref_count(solve_method_generics(it_163,info)));
        i_161++;
    }
    /*i*/come_call_finalizer3(o2_saved_162,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    i_161=0;
    for(    o2_saved_169=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_170=list$1sTypeph_begin((o2_saved_169));    !list$1sTypeph_end((o2_saved_169));    it_170=list$1sTypeph_next((o2_saved_169))    ){
        list$1sTypephp_operator_store_element(result_149->mParamTypes,i_161,(struct sType*)come_increment_ref_count(solve_method_generics(it_170,info)));
        i_161++;
    }
    /*i*/come_call_finalizer3(o2_saved_169,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    if(type->mResultType) {
        __dec_obj77=result_149->mResultType->v1;
        result_149->mResultType->v1=(struct sType*)come_increment_ref_count(solve_method_generics(type->mResultType->v1,info));
        /* a*/come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result106__ = gComeFunResultObject = __result_obj__ = result_149;
    /*i*/come_call_finalizer3(result_149,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
struct sType* __result105__;
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    __result105__ = gComeFunResultObject = __result_obj__ = item;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_164;
int i_165;
struct sType* default_value_166;
struct list$1sTypeph* __result103__;
struct list_item$1sTypeph* it_167;
int i_168;
struct sType* __dec_obj76;
struct list$1sTypeph* __result104__;
default_value_166 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len_164=self->len;
        for(        i_165=0;        i_165<position-len_164;        i_165++        ){
            memset(&default_value_166,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_166));
            /*i*/come_call_finalizer3(default_value_166,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result103__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    it_167=self->head;
    i_168=0;
    while(it_167!=((void*)0)) {
        if(position==i_168) {
            __dec_obj76=it_167->item;
            it_167->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_167=it_167->next;
        i_168++;
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value170 = (void*)0;
struct sType* result_171;
void* __right_value171 = (void*)0;
struct sType* __dec_obj78;
struct sType* __result107__;
    result_171=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(generics_type) {
        __dec_obj78=result_171;
        result_171=(struct sType*)come_increment_ref_count(solve_generics(result_171,generics_type,info));
        /* a*/come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = result_171;
    /*i*/come_call_finalizer3(result_171,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value172 = (void*)0;
char* __result108__;
void* __right_value173 = (void*)0;
char* __result109__;
void* __right_value174 = (void*)0;
struct sRightValueObject* new_value_172;
struct sType* __dec_obj79;
void* __right_value175 = (void*)0;
char* __dec_obj80;
char* __dec_obj81;
void* __right_value179 = (void*)0;
char* buf_176;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
char* __result111__;
    if(gComeGC||gComeC) {
        __result108__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value172=__builtin_string(obj)));
        /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        __right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    if(info->no_output_come_code) {
        __result109__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value173=__builtin_string("")));
        /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        __right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    new_value_172=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 286, "sRightValueObject"));
    __dec_obj79=new_value_172->mType;
    new_value_172->mType=(struct sType*)come_increment_ref_count(type);
    /* a*/come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_172->mFreed=(_Bool)0;
    new_value_172->mID=gRightValueNum;
    __dec_obj80=new_value_172->mVarName;
    new_value_172->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj81=new_value_172->mFunName;
    new_value_172->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_172->mBlockLevel=info->block_level;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_172));
    buf_176=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_176);
    __result111__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value181=xsprintf("((%s)(%s=%s))",((char*)(__right_value180=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_172->mVarName,obj)));
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(new_value_172,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_176 = come_decrement_ref_count2(buf_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value180 = come_decrement_ref_count2(__right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value181 = come_decrement_ref_count2(__right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__=(void*)0;
void* __right_value176 = (void*)0;
struct list_item$1sRightValueObjectph* litem_173;
struct sRightValueObject* __dec_obj82;
void* __right_value177 = (void*)0;
struct list_item$1sRightValueObjectph* litem_174;
struct sRightValueObject* __dec_obj83;
void* __right_value178 = (void*)0;
struct list_item$1sRightValueObjectph* litem_175;
struct sRightValueObject* __dec_obj84;
struct list$1sRightValueObjectph* __result110__;
    if(self->len==0) {
        litem_173=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value176=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1sRightValueObjectph"))));
        litem_173->prev=((void*)0);
        litem_173->next=((void*)0);
        __dec_obj82=litem_173->item;
        litem_173->item=(struct sRightValueObject*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj82,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_173;
        self->head=litem_173;
    }
    else {
        if(self->len==1) {
            litem_174=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value177=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1sRightValueObjectph"))));
            litem_174->prev=self->head;
            litem_174->next=((void*)0);
            __dec_obj83=litem_174->item;
            litem_174->item=(struct sRightValueObject*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj83,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_174;
            self->head->next=litem_174;
        }
        else {
            litem_175=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value178=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1sRightValueObjectph"))));
            litem_175->prev=self->tail;
            litem_175->next=((void*)0);
            __dec_obj84=litem_175->item;
            litem_175->item=(struct sRightValueObject*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj84,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_175;
            self->tail=litem_175;
        }
    }
    self->len++;
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count){
void* __right_value182 = (void*)0;
struct sRightValueObject* new_value_177;
struct sType* __dec_obj85;
void* __right_value183 = (void*)0;
char* __dec_obj86;
char* __dec_obj87;
void* __right_value184 = (void*)0;
char* buf_178;
void* __right_value185 = (void*)0;
char* __dec_obj88;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
char* __dec_obj89;
    if(gComeGC||gComeC) {
        /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        return;
    }
    if(info->no_output_come_code) {
        /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        return;
    }
    new_value_177=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 310, "sRightValueObject"));
    __dec_obj85=new_value_177->mType;
    new_value_177->mType=(struct sType*)come_increment_ref_count(type);
    /* a*/come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_177->mFreed=(_Bool)0;
    new_value_177->mID=gRightValueNum;
    __dec_obj86=new_value_177->mVarName;
    new_value_177->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj87=new_value_177->mFunName;
    new_value_177->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_177->mBlockLevel=info->block_level;
    new_value_177->mDecrementRefCount=decrement_ref_count;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_177));
    buf_178=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_178);
    __dec_obj88=come_value->c_value_without_right_value_objects;
    come_value->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(come_value->c_value));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj89=come_value->c_value;
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("((%s)(%s=%s))",((char*)(__right_value186=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_177->mVarName,come_value->c_value));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value->right_value_objects=new_value_177;
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(new_value_177,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_178 = come_decrement_ref_count2(buf_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
int i_179;
struct list$1sRightValueObjectph* o2_saved_180;
struct sRightValueObject* it_181;
    if(gComeGC||gComeC) {
        return;
    }
    if(info->no_output_come_code) {
        return;
    }
    i_179=0;
    for(    o2_saved_180=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_181=list$1sRightValueObjectph_begin((o2_saved_180));    !list$1sRightValueObjectph_end((o2_saved_180));    it_181=list$1sRightValueObjectph_next((o2_saved_180))    ){
        if(it_181->mID==right_value_num) {
            break;
        }
        i_179++;
    }
    /*i*/come_call_finalizer3(o2_saved_180,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1sRightValueObjectph_delete(info->right_value_objects,i_179,i_179+1);
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_182;
struct list$1sRightValueObjectph* __result112__;
struct list_item$1sRightValueObjectph* it_185;
int i_186;
struct list_item$1sRightValueObjectph* prev_it_187;
struct list_item$1sRightValueObjectph* it_188;
int i_189;
struct list_item$1sRightValueObjectph* prev_it_190;
struct list_item$1sRightValueObjectph* it_191;
struct list_item$1sRightValueObjectph* head_prev_it_192;
struct list_item$1sRightValueObjectph* tail_it_193;
int i_194;
struct list_item$1sRightValueObjectph* prev_it_195;
struct list$1sRightValueObjectph* __result114__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_182=tail;
        tail=head;
        head=tmp_182;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result112__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    if(head==0&&tail==self->len) {
        list$1sRightValueObjectph_reset(self);
    }
    else {
        if(head==0) {
            it_185=self->head;
            i_186=0;
            while(it_185!=((void*)0)) {
                if(i_186<tail) {
                    prev_it_187=it_185;
                    it_185=it_185->next;
                    i_186++;
                    /*i*/come_call_finalizer3(prev_it_187,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_186==tail) {
                        self->head=it_185;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_185=it_185->next;
                        i_186++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_188=self->head;
                i_189=0;
                while(it_188!=((void*)0)) {
                    if(i_189==head) {
                        self->tail=it_188->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_189>=head) {
                        prev_it_190=it_188;
                        it_188=it_188->next;
                        i_189++;
                        /*i*/come_call_finalizer3(prev_it_190,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_188=it_188->next;
                        i_189++;
                    }
                }
            }
            else {
                it_191=self->head;
                head_prev_it_192=((void*)0);
                tail_it_193=((void*)0);
                i_194=0;
                while(it_191!=((void*)0)) {
                    if(i_194==head) {
                        head_prev_it_192=it_191->prev;
                    }
                    if(i_194==tail) {
                        tail_it_193=it_191;
                    }
                    if(i_194>=head&&i_194<tail) {
                        prev_it_195=it_191;
                        it_191=it_191->next;
                        i_194++;
                        /*i*/come_call_finalizer3(prev_it_195,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_191=it_191->next;
                        i_194++;
                    }
                }
                if(head_prev_it_192!=((void*)0)) {
                    head_prev_it_192->next=tail_it_193;
                }
                if(tail_it_193!=((void*)0)) {
                    tail_it_193->prev=head_prev_it_192;
                }
            }
        }
    }
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_183;
struct list_item$1sRightValueObjectph* prev_it_184;
struct list$1sRightValueObjectph* __result113__;
    it_183=self->head;
    while(it_183!=((void*)0)) {
        prev_it_184=it_183;
        it_183=it_183->next;
        /*i*/come_call_finalizer3(prev_it_184,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result113__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value188 = (void*)0;
char* __result115__;
void* __right_value189 = (void*)0;
char* __result116__;
struct sClass* klass_196;
void* __right_value190 = (void*)0;
char* type_name_197;
void* __right_value191 = (void*)0;
char* __result117__;
    if(gComeGC||gComeC) {
        __result115__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value188=__builtin_string(obj)));
        __right_value188 = come_decrement_ref_count2(__right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    if(info->no_output_come_code) {
        __result116__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value189=__builtin_string(obj)));
        __right_value189 = come_decrement_ref_count2(__right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    klass_196=type->mClass;
    type_name_197=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __result117__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value191=xsprintf("(%s)come_increment_ref_count(%s)",type_name_197,obj)));
    type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value191 = come_decrement_ref_count2(__right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free){
struct list$1CVALUEph* stack_saved_198;
struct list$1sRightValueObjectph* right_value_objects_199;
struct sClass* klass_200;
void* __right_value192 = (void*)0;
char* name_202;
void* __right_value193 = (void*)0;
_Bool no_decrement_203;
void* __right_value194 = (void*)0;
char* c_value_204;
struct sClass* klass_205;
char* class_name_206;
char* fun_name_207;
void* __right_value195 = (void*)0;
struct sType* type2_208;
void* __right_value196 = (void*)0;
char* fun_name2_209;
struct sFun* finalizer_210;
void* __right_value197 = (void*)0;
char* none_generics_name_214;
void* __right_value198 = (void*)0;
char* generics_fun_name_215;
struct sGenericsFun* generics_fun_216;
int i_220;
void* __right_value199 = (void*)0;
char* new_fun_name_221;
void* __right_value200 = (void*)0;
char* __dec_obj115;
void* __right_value201 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_222;
char* new_fun_name_223;
char* __dec_obj117;
void* __right_value202 = (void*)0;
char* type_name_224;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
char* type_name_225;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj118;
struct list$1CVALUEph* __dec_obj119;
memset(&i_220, 0, sizeof(int));
    if(gComeGC||gComeC) {
        return;
    }
    if(info->no_output_come_code) {
        return;
    }
    stack_saved_198=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_199=info->right_value_objects;
    klass_200=type->mClass;
    static int dec_num_201=0;
    name_202=(char*)come_increment_ref_count(xsprintf("__dec_obj%d",++dec_num_201));
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value193=make_define_var(type,name_202,(_Bool)0,info))));
    __right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code(info,"%s=%s;\n",name_202,obj);
    obj=name_202;
    no_decrement_203=(_Bool)0;
    if(type->mPointerNum>0) {
        c_value_204=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_205=type->mClass;
        class_name_206=klass_205->mName;
        fun_name_207="finalize";
        type2_208=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_208->mHeap=(_Bool)0;
        fun_name2_209=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_207,info,(_Bool)1));
        if(type->mNoSolvedGenericsType->v1) {
            type=type->mNoSolvedGenericsType->v1;
        }
        finalizer_210=((void*)0);
        if(list$1sTypeph_length(type->mGenericsTypes)>0) {
            finalizer_210=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_209);
            if(finalizer_210==((void*)0)) {
                none_generics_name_214=(char*)come_increment_ref_count(get_none_generics_name(type2_208->mClass->mName));
                generics_fun_name_215=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_214,fun_name_207));
                generics_fun_216=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_215);
                if(generics_fun_216) {
                    if(!create_generics_fun((char*)come_increment_ref_count(fun_name2_209),generics_fun_216,type,info)) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_210=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_209);
                }
                none_generics_name_214 = come_decrement_ref_count2(none_generics_name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_215 = come_decrement_ref_count2(generics_fun_name_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_220=128-1;            i_220>=1;            i_220--            ){
                new_fun_name_221=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_209,i_220));
                finalizer_210=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_221);
                if(finalizer_210) {
                    __dec_obj115=fun_name2_209;
                    fun_name2_209=(char*)come_increment_ref_count(__builtin_string(new_fun_name_221));
                    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_221 = come_decrement_ref_count2(new_fun_name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_221 = come_decrement_ref_count2(new_fun_name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(finalizer_210==((void*)0)) {
                finalizer_210=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_209);
            }
        }
        if(finalizer_210==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
            multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value201=create_finalizer_automatically(type,fun_name_207,info)));
            fun_222=multiple_assign_var1->v1;
            new_fun_name_223=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            /*g*/come_call_finalizer3(__right_value201,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj117=fun_name2_209;
            fun_name2_209=(char*)come_increment_ref_count(new_fun_name_223);
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_210=fun_222;
            new_fun_name_223 = come_decrement_ref_count2(new_fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(finalizer_210!=((void*)0)) {
            if(klass_205->mProtocol&&type->mPointerNum==1) {
                type_name_224=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(c_value_204) {
                    add_come_last_code2(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_209,c_value_204,type_name_224,c_value_204,type_name_224,c_value_204,type->mAllocaValue,no_decrement_203,no_free,force_delete_);
                }
                type_name_224 = come_decrement_ref_count2(type_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(c_value_204) {
                    add_come_last_code2(info,((char*)(__right_value203=xsprintf("/* a*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_204,fun_name2_209,type->mAllocaValue,no_decrement_203,no_free,force_delete_))));
                    __right_value203 = come_decrement_ref_count2(__right_value203, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
        }
        else {
            if(klass_205->mProtocol&&type->mPointerNum==1) {
                type_name_225=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                add_come_last_code2(info,((char*)(__right_value205=xsprintf("if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0, (void*)0); }\n",name_202,name_202,name_202,type_name_225,name_202,type_name_225,name_202))));
                __right_value205 = come_decrement_ref_count2(__right_value205, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                type_name_225 = come_decrement_ref_count2(type_name_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_last_code2(info,((char*)(__right_value206=xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0);\n",name_202,name_202))));
                __right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        c_value_204 = come_decrement_ref_count2(c_value_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_208,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name2_209 = come_decrement_ref_count2(fun_name2_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj118=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_199);
    /* a*/come_call_finalizer3(__dec_obj118,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj119=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_198);
    /* a*/come_call_finalizer3(__dec_obj119,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_198,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    name_202 = come_decrement_ref_count2(name_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_211;
unsigned int hash_212;
unsigned int it_213;
struct sFun* __result118__;
struct sFun* __result119__;
struct sFun* __result120__;
struct sFun* __result121__;
default_value_211 = (void*)0;
    memset(&default_value_211,0,sizeof(struct sFun*));
    hash_212=string_get_hash_key(((char*)key))%self->size;
    it_213=hash_212;
    while((_Bool)1) {
        if(self->item_existance[it_213]) {
            if(string_equals(self->keys[it_213],key)) {
                __result118__ = gComeFunResultObject = __result_obj__ = self->items[it_213];
                /*i*/come_call_finalizer3(default_value_211,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result118__;
            }
            it_213++;
            if(it_213>=self->size) {
                it_213=0;
            }
            else {
                if(it_213==hash_212) {
                    __result119__ = gComeFunResultObject = __result_obj__ = default_value_211;
                    /*i*/come_call_finalizer3(default_value_211,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result119__;
                }
            }
        }
        else {
            __result120__ = gComeFunResultObject = __result_obj__ = default_value_211;
            /*i*/come_call_finalizer3(default_value_211,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result120__;
        }
    }
    __result121__ = gComeFunResultObject = __result_obj__ = default_value_211;
    /*i*/come_call_finalizer3(default_value_211,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj90;
struct sType* __dec_obj91;
struct list$1sTypeph* __dec_obj92;
struct list$1charph* __dec_obj93;
struct list$1charph* __dec_obj94;
struct sType* __dec_obj95;
struct sBlock* __dec_obj96;
struct buffer* __dec_obj99;
struct buffer* __dec_obj100;
struct buffer* __dec_obj101;
struct buffer* __dec_obj102;
char* __dec_obj103;
char* __dec_obj104;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj90=self->mName;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj91=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj92=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj92,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj93=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj94=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj94,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(self->mLambdaType==gComeFunResultObject) {
            __dec_obj95=self->mLambdaType;
            /* a*/come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj96=self->mBlock;
            /* a*/come_call_finalizer3(__dec_obj96,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj99=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj99,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj100=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj100,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj101=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(self->mSourceDefer==gComeFunResultObject) {
            __dec_obj102=self->mSourceDefer;
            /* a*/come_call_finalizer3(__dec_obj102,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(self->mComeHeader==gComeFunResultObject) {
            __dec_obj103=self->mComeHeader;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj104=self->mDeclareSName;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj97;
struct sVarTable* __dec_obj98;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(self->mNodes==gComeFunResultObject) {
            __dec_obj97=self->mNodes;
            /* a*/come_call_finalizer3(__dec_obj97,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(self->mVarTable==gComeFunResultObject) {
            __dec_obj98=self->mVarTable;
            /* a*/come_call_finalizer3(__dec_obj98,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sGenericsFun* default_value_217;
unsigned int hash_218;
unsigned int it_219;
struct sGenericsFun* __result122__;
struct sGenericsFun* __result123__;
struct sGenericsFun* __result124__;
struct sGenericsFun* __result125__;
default_value_217 = (void*)0;
    memset(&default_value_217,0,sizeof(struct sGenericsFun*));
    hash_218=string_get_hash_key(((char*)key))%self->size;
    it_219=hash_218;
    while((_Bool)1) {
        if(self->item_existance[it_219]) {
            if(string_equals(self->keys[it_219],key)) {
                __result122__ = gComeFunResultObject = __result_obj__ = self->items[it_219];
                /*i*/come_call_finalizer3(default_value_217,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result122__;
            }
            it_219++;
            if(it_219>=self->size) {
                it_219=0;
            }
            else {
                if(it_219==hash_218) {
                    __result123__ = gComeFunResultObject = __result_obj__ = default_value_217;
                    /*i*/come_call_finalizer3(default_value_217,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result123__;
                }
            }
        }
        else {
            __result124__ = gComeFunResultObject = __result_obj__ = default_value_217;
            /*i*/come_call_finalizer3(default_value_217,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result124__;
        }
    }
    __result125__ = gComeFunResultObject = __result_obj__ = default_value_217;
    /*i*/come_call_finalizer3(default_value_217,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj105;
struct list$1charph* __dec_obj106;
struct list$1charph* __dec_obj107;
char* __dec_obj108;
struct sType* __dec_obj109;
struct list$1sTypeph* __dec_obj110;
struct list$1charph* __dec_obj111;
struct list$1charph* __dec_obj112;
char* __dec_obj113;
char* __dec_obj114;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(self->mImplType==gComeFunResultObject) {
            __dec_obj105=self->mImplType;
            /* a*/come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj106=self->mGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj106,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj107=self->mMethodGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj107,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj108=self->mName;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj109=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj110=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj110,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj111=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj111,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj112=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj112,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj113=self->mBlock;
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(self->mGenericsSName==gComeFunResultObject) {
            __dec_obj114=self->mGenericsSName;
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj116;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj116=self->v2;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_226;
struct list_item$1sRightValueObjectph* prev_it_227;
    it_226=self->head;
    while(it_226!=((void*)0)) {
        prev_it_227=it_226;
        it_226=it_226->next;
        /*i*/come_call_finalizer3(prev_it_227,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_228;
struct list_item$1CVALUEph* prev_it_229;
    it_228=self->head;
    while(it_228!=((void*)0)) {
        prev_it_229=it_228;
        it_228=it_228->next;
        /*i*/come_call_finalizer3(prev_it_229,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj120;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj120=self->item;
            /* a*/come_call_finalizer3(__dec_obj120,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj121;
struct sType* __dec_obj122;
char* __dec_obj123;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(self->c_value==gComeFunResultObject) {
            __dec_obj121=self->c_value;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj122=self->type;
            /* a*/come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj123=self->c_value_without_right_value_objects;
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_230;
struct list_item$1CVALUEph* prev_it_231;
    it_230=self->head;
    while(it_230!=((void*)0)) {
        prev_it_231=it_230;
        it_230=it_230->next;
        /*i*/come_call_finalizer3(prev_it_231,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
struct list$1CVALUEph* stack_saved_232;
struct list$1sRightValueObjectph* right_value_objects_233;
struct sType* type_before_234;
void* __right_value207 = (void*)0;
char* c_value_235;
struct sClass* klass_236;
char* class_name_237;
char* fun_name_238;
void* __right_value208 = (void*)0;
struct sType* type2_239;
void* __right_value209 = (void*)0;
char* fun_name2_240;
struct sFun* finalizer_241;
void* __right_value210 = (void*)0;
char* none_generics_name_242;
void* __right_value211 = (void*)0;
char* generics_fun_name_243;
struct sGenericsFun* generics_fun_244;
int i_245;
void* __right_value212 = (void*)0;
char* new_fun_name_246;
void* __right_value213 = (void*)0;
char* __dec_obj124;
void* __right_value214 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun_247;
char* new_fun_name_248;
char* __dec_obj125;
void* __right_value215 = (void*)0;
char* type_name_249;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_250;
struct tuple2$2charphsTypeph* it_253;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_256;
struct sType* field_type_257;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
char* obj_258;
struct list$1tuple2$2charphsTypephph* o2_saved_261;
struct tuple2$2charphsTypeph* it_262;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_263;
struct sType* field_type_264;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
char* obj_265;
void* __right_value224 = (void*)0;
char* type_name_266;
void* __right_value225 = (void*)0;
char* c_value_267;
struct sClass* klass_268;
char* class_name_269;
char* fun_name_270;
void* __right_value226 = (void*)0;
struct sType* type2_271;
void* __right_value227 = (void*)0;
char* fun_name2_272;
struct sFun* finalizer_273;
void* __right_value228 = (void*)0;
char* none_generics_name_274;
void* __right_value229 = (void*)0;
char* generics_fun_name_275;
struct sGenericsFun* generics_fun_276;
int i_277;
void* __right_value230 = (void*)0;
char* new_fun_name_278;
void* __right_value231 = (void*)0;
char* __dec_obj129;
void* __right_value232 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5;
struct sFun* fun_279;
char* new_fun_name_280;
char* __dec_obj130;
void* __right_value233 = (void*)0;
char* type_name_281;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_282;
struct tuple2$2charphsTypeph* it_283;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* name_284;
struct sType* field_type_285;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
char* obj_286;
struct list$1tuple2$2charphsTypephph* o2_saved_287;
struct tuple2$2charphsTypeph* it_288;
struct tuple2$2charphsTypeph* multiple_assign_var7;
char* name_289;
struct sType* field_type_290;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
char* obj_291;
void* __right_value242 = (void*)0;
char* type_name_292;
struct list$1sRightValueObjectph* __dec_obj131;
struct list$1CVALUEph* __dec_obj132;
memset(&i_245, 0, sizeof(int));
memset(&i_277, 0, sizeof(int));
    if(gComeGC||gComeC) {
        return;
    }
    if(info->no_output_come_code) {
        return;
    }
    stack_saved_232=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_233=info->right_value_objects;
    type_before_234=type;
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(type->mPointerNum>0||type->mClass->mProtocol||list$1sTypeph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value)) {
        if(force_delete_) {
            c_value_235=(char*)come_increment_ref_count(__builtin_string(obj));
            klass_236=type->mClass;
            class_name_237=klass_236->mName;
            fun_name_238="force_finalize";
            type2_239=(struct sType*)come_increment_ref_count(sType_clone(type));
            type2_239->mHeap=(_Bool)0;
            fun_name2_240=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_238,info,(_Bool)1));
            finalizer_241=((void*)0);
            if(list$1sTypeph_length(type->mGenericsTypes)>0) {
                finalizer_241=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_240);
                if(finalizer_241==((void*)0)) {
                    none_generics_name_242=(char*)come_increment_ref_count(get_none_generics_name(type2_239->mClass->mName));
                    generics_fun_name_243=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_242,fun_name_238));
                    generics_fun_244=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_243);
                    if(generics_fun_244) {
                        if(!create_generics_fun((char*)come_increment_ref_count(fun_name2_240),generics_fun_244,type,info)) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_241=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_240);
                    }
                    none_generics_name_242 = come_decrement_ref_count2(none_generics_name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_243 = come_decrement_ref_count2(generics_fun_name_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_245=128-1;                i_245>=1;                i_245--                ){
                    new_fun_name_246=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_240,i_245));
                    finalizer_241=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_246);
                    if(finalizer_241) {
                        __dec_obj124=fun_name2_240;
                        fun_name2_240=(char*)come_increment_ref_count(__builtin_string(new_fun_name_246));
                        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                        new_fun_name_246 = come_decrement_ref_count2(new_fun_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_246 = come_decrement_ref_count2(new_fun_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(finalizer_241==((void*)0)) {
                    finalizer_241=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_240);
                }
            }
            if(finalizer_241==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value214=create_force_finalizer_automatically(type,fun_name_238,info)));
                fun_247=multiple_assign_var2->v1;
                new_fun_name_248=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                /*g*/come_call_finalizer3(__right_value214,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj125=fun_name2_240;
                fun_name2_240=(char*)come_increment_ref_count(new_fun_name_248);
                __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_241=fun_247;
                new_fun_name_248 = come_decrement_ref_count2(new_fun_name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(finalizer_241!=((void*)0)) {
                if(klass_236->mProtocol&&type->mPointerNum==1) {
                    type_name_249=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                    if(c_value_235) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s),\n",fun_name2_240,c_value_235,type_name_249,c_value_235,type_name_249,c_value_235,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s);\n",fun_name2_240,c_value_235,type_name_249,c_value_235,type_name_249,c_value_235,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_240,c_value_235,type_name_249,c_value_235,type_name_249,c_value_235,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_240,c_value_235,type_name_249,c_value_235,type_name_249,c_value_235,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_249 = come_decrement_ref_count2(type_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_235) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(__right_value216=xsprintf("/*b*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s),\n",c_value_235,fun_name2_240,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                __right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value217=xsprintf("/*c*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s);\n",c_value_235,fun_name2_240,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                __right_value217 = come_decrement_ref_count2(__right_value217, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(__right_value218=xsprintf("/*d*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_235,fun_name2_240,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __right_value218 = come_decrement_ref_count2(__right_value218, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value219=xsprintf("/*e*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_235,fun_name2_240,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                    }
                }
            }
            else {
                if(klass_236->mStruct&&type->mPointerNum==0) {
                    for(                    o2_saved_250=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_236->mFields)),it_253=list$1tuple2$2charphsTypephph_begin((o2_saved_250));                    !list$1tuple2$2charphsTypephph_end((o2_saved_250));                    it_253=list$1tuple2$2charphsTypephph_next((o2_saved_250))                    ){
                        multiple_assign_var3=it_253;
                        name_256=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                        field_type_257=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                        if(field_type_257->mHeap&&field_type_257->mPointerNum>0) {
                            obj_258=(char*)come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char*)(__right_value220=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_235,name_256));
                            __right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            free_object(field_type_257,obj_258,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_258 = come_decrement_ref_count2(obj_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_256 = come_decrement_ref_count2(name_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(field_type_257,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_250,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(klass_236->mStruct&&type->mPointerNum==1) {
                        for(                        o2_saved_261=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_236->mFields)),it_262=list$1tuple2$2charphsTypephph_begin((o2_saved_261));                        !list$1tuple2$2charphsTypephph_end((o2_saved_261));                        it_262=list$1tuple2$2charphsTypephph_next((o2_saved_261))                        ){
                            multiple_assign_var4=it_262;
                            name_263=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                            field_type_264=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                            if(field_type_264->mHeap&&field_type_264->mPointerNum>0) {
                                obj_265=(char*)come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char*)(__right_value222=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_235,name_263));
                                __right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                free_object(field_type_264,obj_265,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_265 = come_decrement_ref_count2(obj_265, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_263 = come_decrement_ref_count2(name_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(field_type_264,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        /*i*/come_call_finalizer3(o2_saved_261,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(!type->mAllocaValue) {
                    if(klass_236->mProtocol&&type->mPointerNum==1) {
                        if(c_value_235) {
                            type_name_266=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"((%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, %s):0),\n",c_value_235,c_value_235,c_value_235,type_name_266,c_value_235,type_name_266,c_value_235,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %s); } \n",c_value_235,c_value_235,c_value_235,type_name_266,c_value_235,type_name_266,c_value_235,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"((%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0),\n",c_value_235,c_value_235,c_value_235,type_name_266,c_value_235,type_name_266,c_value_235,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_235,c_value_235,c_value_235,type_name_266,c_value_235,type_name_266,c_value_235,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_266 = come_decrement_ref_count2(type_name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_235) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s)),\n",c_value_235,c_value_235,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s);\n",c_value_235,c_value_235,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0)),\n",c_value_235,c_value_235,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_235,c_value_235,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_235 = come_decrement_ref_count2(c_value_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_239,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name2_240 = come_decrement_ref_count2(fun_name2_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            c_value_267=(char*)come_increment_ref_count(__builtin_string(obj));
            klass_268=type->mClass;
            class_name_269=klass_268->mName;
            fun_name_270="finalize";
            type2_271=(struct sType*)come_increment_ref_count(sType_clone(type));
            type2_271->mHeap=(_Bool)0;
            fun_name2_272=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_270,info,(_Bool)1));
            finalizer_273=((void*)0);
            if(list$1sTypeph_length(type->mGenericsTypes)>0) {
                finalizer_273=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_272);
                if(finalizer_273==((void*)0)) {
                    none_generics_name_274=(char*)come_increment_ref_count(get_none_generics_name(type2_271->mClass->mName));
                    generics_fun_name_275=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_274,fun_name_270));
                    generics_fun_276=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_275);
                    if(generics_fun_276) {
                        if(!create_generics_fun((char*)come_increment_ref_count(fun_name2_272),generics_fun_276,type,info)) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_273=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_272);
                    }
                    none_generics_name_274 = come_decrement_ref_count2(none_generics_name_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_275 = come_decrement_ref_count2(generics_fun_name_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_277=128-1;                i_277>=1;                i_277--                ){
                    new_fun_name_278=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_272,i_277));
                    finalizer_273=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_278);
                    if(finalizer_273) {
                        __dec_obj129=fun_name2_272;
                        fun_name2_272=(char*)come_increment_ref_count(__builtin_string(new_fun_name_278));
                        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                        new_fun_name_278 = come_decrement_ref_count2(new_fun_name_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_278 = come_decrement_ref_count2(new_fun_name_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(finalizer_273==((void*)0)) {
                    finalizer_273=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_272);
                }
            }
            if(finalizer_273==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
                multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value232=create_finalizer_automatically(type,fun_name_270,info)));
                fun_279=multiple_assign_var5->v1;
                new_fun_name_280=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                /*g*/come_call_finalizer3(__right_value232,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj130=fun_name2_272;
                fun_name2_272=(char*)come_increment_ref_count(new_fun_name_280);
                __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_273=fun_279;
                new_fun_name_280 = come_decrement_ref_count2(new_fun_name_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(finalizer_273!=((void*)0)) {
                if(klass_268->mProtocol&&type->mPointerNum==1) {
                    type_name_281=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                    if(c_value_267) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s),\n",fun_name2_272,c_value_267,type_name_281,c_value_267,type_name_281,c_value_267,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s);\n",fun_name2_272,c_value_267,type_name_281,c_value_267,type_name_281,c_value_267,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_272,c_value_267,type_name_281,c_value_267,type_name_281,c_value_267,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_272,c_value_267,type_name_281,c_value_267,type_name_281,c_value_267,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_281 = come_decrement_ref_count2(type_name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_267) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(__right_value234=xsprintf("/*f*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s),\n",c_value_267,fun_name2_272,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value235=xsprintf("/*g*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s);\n",c_value_267,fun_name2_272,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                __right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(__right_value236=xsprintf("/*h*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_267,fun_name2_272,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value237=xsprintf("/*i*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_267,fun_name2_272,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                    }
                }
            }
            else {
                if(klass_268->mStruct&&type->mPointerNum==0) {
                    for(                    o2_saved_282=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_268->mFields)),it_283=list$1tuple2$2charphsTypephph_begin((o2_saved_282));                    !list$1tuple2$2charphsTypephph_end((o2_saved_282));                    it_283=list$1tuple2$2charphsTypephph_next((o2_saved_282))                    ){
                        multiple_assign_var6=it_283;
                        name_284=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                        field_type_285=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                        if(field_type_285->mHeap&&field_type_285->mPointerNum>0) {
                            obj_286=(char*)come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char*)(__right_value238=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_267,name_284));
                            __right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            free_object(field_type_285,obj_286,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_286 = come_decrement_ref_count2(obj_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_284 = come_decrement_ref_count2(name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(field_type_285,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_282,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(klass_268->mStruct&&type->mPointerNum==1) {
                        for(                        o2_saved_287=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_268->mFields)),it_288=list$1tuple2$2charphsTypephph_begin((o2_saved_287));                        !list$1tuple2$2charphsTypephph_end((o2_saved_287));                        it_288=list$1tuple2$2charphsTypephph_next((o2_saved_287))                        ){
                            multiple_assign_var7=it_288;
                            name_289=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                            field_type_290=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                            if(field_type_290->mHeap&&field_type_290->mPointerNum>0) {
                                obj_291=(char*)come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char*)(__right_value240=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_267,name_289));
                                __right_value240 = come_decrement_ref_count2(__right_value240, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                free_object(field_type_290,obj_291,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_291 = come_decrement_ref_count2(obj_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_289 = come_decrement_ref_count2(name_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(field_type_290,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        /*i*/come_call_finalizer3(o2_saved_287,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(!type->mAllocaValue) {
                    if(klass_268->mProtocol&&type->mPointerNum==1) {
                        if(c_value_267) {
                            type_name_292=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"((%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, %s):0),\n",c_value_267,c_value_267,c_value_267,type_name_292,c_value_267,type_name_292,c_value_267,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %s); } \n",c_value_267,c_value_267,c_value_267,type_name_292,c_value_267,type_name_292,c_value_267,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"((%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0),\n",c_value_267,c_value_267,c_value_267,type_name_292,c_value_267,type_name_292,c_value_267,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_267,c_value_267,c_value_267,type_name_292,c_value_267,type_name_292,c_value_267,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_292 = come_decrement_ref_count2(type_name_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_267) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s)),\n",c_value_267,c_value_267,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s);\n",c_value_267,c_value_267,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0)),\n",no_decrement,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_267,c_value_267,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_267 = come_decrement_ref_count2(c_value_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_271,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name2_272 = come_decrement_ref_count2(fun_name2_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __dec_obj131=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_233);
    /* a*/come_call_finalizer3(__dec_obj131,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj132=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_232);
    /* a*/come_call_finalizer3(__dec_obj132,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_232,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_251;
struct tuple2$2charphsTypeph* __result126__;
struct tuple2$2charphsTypeph* __result127__;
struct tuple2$2charphsTypeph* result_252;
struct tuple2$2charphsTypeph* __result128__;
result_251 = (void*)0;
result_252 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_251,0,sizeof(struct tuple2$2charphsTypeph*));
        __result126__ = gComeFunResultObject = __result_obj__ = result_251;
        gComeFunResultObject = (void*)0;
        return __result126__;
    }
    self->it=self->head;
    if(self->it) {
        __result127__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result127__;
    }
    memset(&result_252,0,sizeof(struct tuple2$2charphsTypeph*));
    __result128__ = gComeFunResultObject = __result_obj__ = result_252;
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_254;
struct tuple2$2charphsTypeph* __result129__;
struct tuple2$2charphsTypeph* __result130__;
struct tuple2$2charphsTypeph* result_255;
struct tuple2$2charphsTypeph* __result131__;
result_254 = (void*)0;
result_255 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_254,0,sizeof(struct tuple2$2charphsTypeph*));
        __result129__ = gComeFunResultObject = __result_obj__ = result_254;
        gComeFunResultObject = (void*)0;
        return __result129__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result130__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result130__;
    }
    memset(&result_255,0,sizeof(struct tuple2$2charphsTypeph*));
    __result131__ = gComeFunResultObject = __result_obj__ = result_255;
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_259;
struct list_item$1tuple2$2charphsTypephph* prev_it_260;
    it_259=self->head;
    while(it_259!=((void*)0)) {
        prev_it_260=it_259;
        it_259=it_259->next;
        /*i*/come_call_finalizer3(prev_it_260,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj126;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj126=self->item;
            /* a*/come_call_finalizer3(__dec_obj126,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj127;
struct sType* __dec_obj128;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj127=self->v1;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj128=self->v2;
            /* a*/come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool in_clone_object_293;
void* __right_value243 = (void*)0;
struct sType* type2_294;
char* result_295;
struct sType* result_type_296;
struct list$1CVALUEph* stack_saved_297;
struct list$1sRightValueObjectph* right_value_objects_298;
void* __right_value244 = (void*)0;
char* c_value_299;
struct sClass* klass_300;
char* class_name_301;
char* fun_name_302;
struct sFun* cloner_303;
char* fun_name2_304;
void* __right_value245 = (void*)0;
char* none_generics_name_305;
void* __right_value246 = (void*)0;
struct sType* obj_type_306;
void* __right_value247 = (void*)0;
char* __dec_obj133;
void* __right_value248 = (void*)0;
char* fun_name3_307;
struct sGenericsFun* generics_fun_308;
void* __right_value249 = (void*)0;
_Bool _if_conditional1;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct tuple2$2sTypephcharph* __result137__;
void* __right_value255 = (void*)0;
char* __dec_obj138;
int i_311;
void* __right_value256 = (void*)0;
char* new_fun_name_312;
void* __right_value257 = (void*)0;
char* __dec_obj139;
void* __right_value258 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var8;
struct sFun* fun_313;
char* new_fun_name_314;
char* __dec_obj140;
struct sType* __dec_obj141;
void* __right_value259 = (void*)0;
struct sType* __dec_obj142;
void* __right_value260 = (void*)0;
char* __dec_obj143;
void* __right_value261 = (void*)0;
char* __dec_obj144;
void* __right_value262 = (void*)0;
struct sType* __dec_obj145;
void* __right_value263 = (void*)0;
char* type_name_315;
void* __right_value264 = (void*)0;
char* __dec_obj146;
void* __right_value265 = (void*)0;
char* __dec_obj147;
struct list$1sRightValueObjectph* __dec_obj148;
struct list$1CVALUEph* __dec_obj149;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct tuple2$2sTypephcharph* __result138__;
fun_name2_304 = (void*)0;
memset(&i_311, 0, sizeof(int));
    in_clone_object_293=info->in_clone_object;
    info->in_clone_object=(_Bool)1;
    type2_294=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_295=((void*)0);
    result_type_296=((void*)0);
    stack_saved_297=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_298=info->right_value_objects;
    c_value_299=(char*)come_increment_ref_count(__builtin_string(obj));
    klass_300=type->mClass;
    class_name_301=klass_300->mName;
    fun_name_302="clone";
    cloner_303=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_305=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_306=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj133=fun_name2_304;
        fun_name2_304=(char*)come_increment_ref_count(create_method_name(obj_type_306,(_Bool)0,fun_name_302,info,(_Bool)1));
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_307=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_305,fun_name_302));
        generics_fun_308=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_307,((void*)0));
        if(generics_fun_308) {
            if((_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_304)),generics_fun_308,obj_type_306,info))),            _if_conditional1) {
                __result137__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value254=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 887, "struct tuple2$2sTypephcharph")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 887, "sType")),"void",(_Bool)0,info)),(char*)come_increment_ref_count(__builtin_string("")))));
                none_generics_name_305 = come_decrement_ref_count2(none_generics_name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_306,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_307 = come_decrement_ref_count2(fun_name3_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_294,sType_finalize, 0, 0, 0, 0, (void*)0);
                result_295 = come_decrement_ref_count2(result_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_296,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(stack_saved_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                c_value_299 = come_decrement_ref_count2(c_value_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_304 = come_decrement_ref_count2(fun_name2_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value254,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result137__;
            }
        }
        cloner_303=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_304);
        none_generics_name_305 = come_decrement_ref_count2(none_generics_name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_306,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_307 = come_decrement_ref_count2(fun_name3_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj138=fun_name2_304;
        fun_name2_304=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_302,info,(_Bool)1));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_311=128-1;        i_311>=1;        i_311--        ){
            new_fun_name_312=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_304,i_311));
            cloner_303=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_312);
            if(cloner_303) {
                __dec_obj139=fun_name2_304;
                fun_name2_304=(char*)come_increment_ref_count(__builtin_string(new_fun_name_312));
                __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_312 = come_decrement_ref_count2(new_fun_name_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_312 = come_decrement_ref_count2(new_fun_name_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_303==((void*)0)) {
            cloner_303=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_304);
        }
    }
    if(cloner_303==((void*)0)&&!type->mClass->mNumber) {
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(__right_value258=create_cloner_automatically(type,fun_name_302,info)));
        fun_313=multiple_assign_var8->v1;
        new_fun_name_314=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        /*g*/come_call_finalizer3(__right_value258,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj140=fun_name2_304;
        fun_name2_304=(char*)come_increment_ref_count(new_fun_name_314);
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_303=fun_313;
        new_fun_name_314 = come_decrement_ref_count2(new_fun_name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(cloner_303!=((void*)0)) {
        __dec_obj141=result_type_296;
        result_type_296=(struct sType*)come_increment_ref_count(cloner_303->mResultType);
        /* a*/come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj142=result_type_296;
        result_type_296=(struct sType*)come_increment_ref_count(solve_generics(result_type_296,type,info));
        /* a*/come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj143=result_295;
        result_295=(char*)come_increment_ref_count(xsprintf("%s(%s)",fun_name2_304,c_value_299));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(gComeDebug) {
            __dec_obj144=result_295;
            result_295=(char*)come_increment_ref_count(append_stackframe(result_295,result_type_296,info));
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        __dec_obj145=result_type_296;
        result_type_296=(struct sType*)come_increment_ref_count(sType_clone(type));
        /* a*/come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
        type2_294->mHeap=(_Bool)1;
        type_name_315=(char*)come_increment_ref_count(make_type_name_string(type2_294,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj146=result_295;
        result_295=(char*)come_increment_ref_count(xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_315,c_value_299,info->sname,info->sline,type_name_315));
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(gComeDebug) {
            __dec_obj147=result_295;
            result_295=(char*)come_increment_ref_count(append_stackframe(result_295,result_type_296,info));
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        type_name_315 = come_decrement_ref_count2(type_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj148=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_298);
    /* a*/come_call_finalizer3(__dec_obj148,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj149=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_297);
    /* a*/come_call_finalizer3(__dec_obj149,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    info->in_clone_object=in_clone_object_293;
    __result138__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value267=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 946, "struct tuple2$2sTypephcharph")),(struct sType*)come_increment_ref_count(result_type_296),(char*)come_increment_ref_count(result_295))));
    /*i*/come_call_finalizer3(type2_294,sType_finalize, 0, 0, 0, 0, (void*)0);
    result_295 = come_decrement_ref_count2(result_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_296,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    c_value_299 = come_decrement_ref_count2(c_value_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_304 = come_decrement_ref_count2(fun_name2_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value267,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_309;
unsigned int it_310;
struct sGenericsFun* __result132__;
struct sGenericsFun* __result133__;
struct sGenericsFun* __result134__;
struct sGenericsFun* __result135__;
    hash_309=string_get_hash_key(((char*)key))%self->size;
    it_310=hash_309;
    while((_Bool)1) {
        if(self->item_existance[it_310]) {
            if(string_equals(self->keys[it_310],key)) {
                __result132__ = gComeFunResultObject = __result_obj__ = self->items[it_310];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result132__;
            }
            it_310++;
            if(it_310>=self->size) {
                it_310=0;
            }
            else {
                if(it_310==hash_309) {
                    __result133__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result133__;
                }
            }
        }
        else {
            __result134__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result134__;
        }
    }
    __result135__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj134;
char* __dec_obj135;
struct tuple2$2sTypephcharph* __result136__;
    __dec_obj134=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj135=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result136__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result136__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj136;
char* __dec_obj137;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj136=self->v1;
            /* a*/come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj137=self->v2;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
char* result_316;
struct list$1CVALUEph* stack_saved_317;
struct list$1sRightValueObjectph* right_value_objects_318;
struct sClass* klass_319;
char* class_name_320;
char* fun_name_321;
void* __right_value268 = (void*)0;
struct sType* type2_322;
struct sFun* cloner_323;
char* fun_name2_324;
void* __right_value269 = (void*)0;
char* none_generics_name_325;
void* __right_value270 = (void*)0;
struct sType* obj_type_326;
void* __right_value271 = (void*)0;
char* __dec_obj150;
void* __right_value272 = (void*)0;
char* fun_name3_327;
struct sGenericsFun* generics_fun_328;
void* __right_value273 = (void*)0;
_Bool _if_conditional2;
_Bool __result139__;
void* __right_value274 = (void*)0;
char* __dec_obj151;
int i_329;
void* __right_value275 = (void*)0;
char* new_fun_name_330;
void* __right_value276 = (void*)0;
char* __dec_obj152;
void* __right_value277 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var9;
struct sFun* fun_331;
char* new_fun_name_332;
char* __dec_obj153;
struct list$1sRightValueObjectph* __dec_obj154;
struct list$1CVALUEph* __dec_obj155;
_Bool __result140__;
fun_name2_324 = (void*)0;
memset(&i_329, 0, sizeof(int));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_316=((void*)0);
    stack_saved_317=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_318=info->right_value_objects;
    klass_319=type->mClass;
    class_name_320=klass_319->mName;
    fun_name_321="equals";
    type2_322=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_322->mHeap=(_Bool)0;
    cloner_323=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_325=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_326=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj150=fun_name2_324;
        fun_name2_324=(char*)come_increment_ref_count(create_method_name(obj_type_326,(_Bool)0,fun_name_321,info,(_Bool)1));
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_327=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_325,fun_name_321));
        generics_fun_328=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_327,((void*)0));
        if(generics_fun_328) {
            if((_if_conditional2=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_324)),generics_fun_328,obj_type_326,info))),            _if_conditional2) {
                __result139__ = (_Bool)0;
                none_generics_name_325 = come_decrement_ref_count2(none_generics_name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_326,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_327 = come_decrement_ref_count2(fun_name3_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_316 = come_decrement_ref_count2(result_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(stack_saved_317,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_322,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_324 = come_decrement_ref_count2(fun_name2_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result139__;
            }
        }
        cloner_323=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_324);
        none_generics_name_325 = come_decrement_ref_count2(none_generics_name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_326,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_327 = come_decrement_ref_count2(fun_name3_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj151=fun_name2_324;
        fun_name2_324=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_321,info,(_Bool)1));
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_329=128-1;        i_329>=1;        i_329--        ){
            new_fun_name_330=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_324,i_329));
            cloner_323=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_330);
            if(cloner_323) {
                __dec_obj152=fun_name2_324;
                fun_name2_324=(char*)come_increment_ref_count(__builtin_string(new_fun_name_330));
                __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_330 = come_decrement_ref_count2(new_fun_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_330 = come_decrement_ref_count2(new_fun_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_323==((void*)0)) {
            cloner_323=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_324);
        }
    }
    if(cloner_323==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var9=((struct tuple2$2sFunpcharph*)(__right_value277=create_equals_automatically(type,fun_name_321,info)));
        fun_331=multiple_assign_var9->v1;
        new_fun_name_332=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        /*g*/come_call_finalizer3(__right_value277,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj153=fun_name2_324;
        fun_name2_324=(char*)come_increment_ref_count(new_fun_name_332);
        __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_323=fun_331;
        new_fun_name_332 = come_decrement_ref_count2(new_fun_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj154=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_318);
    /* a*/come_call_finalizer3(__dec_obj154,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj155=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_317);
    /* a*/come_call_finalizer3(__dec_obj155,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result140__ = (_Bool)1;
    result_316 = come_decrement_ref_count2(result_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_317,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_322,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_324 = come_decrement_ref_count2(fun_name2_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result140__;
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
char* result_333;
struct list$1CVALUEph* stack_saved_334;
struct list$1sRightValueObjectph* right_value_objects_335;
struct sClass* klass_336;
char* class_name_337;
char* fun_name_338;
void* __right_value278 = (void*)0;
struct sType* type2_339;
struct sFun* cloner_340;
char* fun_name2_341;
void* __right_value279 = (void*)0;
char* none_generics_name_342;
void* __right_value280 = (void*)0;
struct sType* obj_type_343;
void* __right_value281 = (void*)0;
char* __dec_obj156;
void* __right_value282 = (void*)0;
char* fun_name3_344;
struct sGenericsFun* generics_fun_345;
void* __right_value283 = (void*)0;
_Bool _if_conditional3;
_Bool __result141__;
void* __right_value284 = (void*)0;
char* __dec_obj157;
int i_346;
void* __right_value285 = (void*)0;
char* new_fun_name_347;
void* __right_value286 = (void*)0;
char* __dec_obj158;
void* __right_value287 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var10;
struct sFun* fun_348;
char* new_fun_name_349;
char* __dec_obj159;
struct list$1sRightValueObjectph* __dec_obj160;
struct list$1CVALUEph* __dec_obj161;
_Bool __result142__;
fun_name2_341 = (void*)0;
memset(&i_346, 0, sizeof(int));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_333=((void*)0);
    stack_saved_334=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_335=info->right_value_objects;
    klass_336=type->mClass;
    class_name_337=klass_336->mName;
    fun_name_338="operator_equals";
    type2_339=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_339->mHeap=(_Bool)0;
    cloner_340=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_342=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_343=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj156=fun_name2_341;
        fun_name2_341=(char*)come_increment_ref_count(create_method_name(obj_type_343,(_Bool)0,fun_name_338,info,(_Bool)1));
        __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_344=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_342,fun_name_338));
        generics_fun_345=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_344,((void*)0));
        if(generics_fun_345) {
            if((_if_conditional3=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_341)),generics_fun_345,obj_type_343,info))),            _if_conditional3) {
                __result141__ = (_Bool)0;
                none_generics_name_342 = come_decrement_ref_count2(none_generics_name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_343,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_344 = come_decrement_ref_count2(fun_name3_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_333 = come_decrement_ref_count2(result_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(stack_saved_334,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_339,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_341 = come_decrement_ref_count2(fun_name2_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result141__;
            }
        }
        cloner_340=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_341);
        none_generics_name_342 = come_decrement_ref_count2(none_generics_name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_343,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_344 = come_decrement_ref_count2(fun_name3_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj157=fun_name2_341;
        fun_name2_341=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_338,info,(_Bool)1));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_346=128-1;        i_346>=1;        i_346--        ){
            new_fun_name_347=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_341,i_346));
            cloner_340=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_347);
            if(cloner_340) {
                __dec_obj158=fun_name2_341;
                fun_name2_341=(char*)come_increment_ref_count(__builtin_string(new_fun_name_347));
                __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_347 = come_decrement_ref_count2(new_fun_name_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_347 = come_decrement_ref_count2(new_fun_name_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_340==((void*)0)) {
            cloner_340=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_341);
        }
    }
    if(cloner_340==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var10=((struct tuple2$2sFunpcharph*)(__right_value287=create_operator_equals_automatically(type,fun_name_338,info)));
        fun_348=multiple_assign_var10->v1;
        new_fun_name_349=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        /*g*/come_call_finalizer3(__right_value287,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj159=fun_name2_341;
        fun_name2_341=(char*)come_increment_ref_count(new_fun_name_349);
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_340=fun_348;
        new_fun_name_349 = come_decrement_ref_count2(new_fun_name_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj160=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_335);
    /* a*/come_call_finalizer3(__dec_obj160,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj161=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_334);
    /* a*/come_call_finalizer3(__dec_obj161,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result142__ = (_Bool)1;
    result_333 = come_decrement_ref_count2(result_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_334,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_339,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_341 = come_decrement_ref_count2(fun_name2_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result142__;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
char* result_350;
struct list$1CVALUEph* stack_saved_351;
struct list$1sRightValueObjectph* right_value_objects_352;
struct sClass* klass_353;
char* class_name_354;
char* fun_name_355;
void* __right_value288 = (void*)0;
struct sType* type2_356;
struct sFun* cloner_357;
char* fun_name2_358;
void* __right_value289 = (void*)0;
char* none_generics_name_359;
void* __right_value290 = (void*)0;
struct sType* obj_type_360;
void* __right_value291 = (void*)0;
char* __dec_obj162;
void* __right_value292 = (void*)0;
char* fun_name3_361;
struct sGenericsFun* generics_fun_362;
void* __right_value293 = (void*)0;
_Bool _if_conditional4;
_Bool __result143__;
void* __right_value294 = (void*)0;
char* __dec_obj163;
int i_363;
void* __right_value295 = (void*)0;
char* new_fun_name_364;
void* __right_value296 = (void*)0;
char* __dec_obj164;
void* __right_value297 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var11;
struct sFun* fun_365;
char* new_fun_name_366;
char* __dec_obj165;
struct list$1sRightValueObjectph* __dec_obj166;
struct list$1CVALUEph* __dec_obj167;
_Bool __result144__;
fun_name2_358 = (void*)0;
memset(&i_363, 0, sizeof(int));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_350=((void*)0);
    stack_saved_351=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_352=info->right_value_objects;
    klass_353=type->mClass;
    class_name_354=klass_353->mName;
    fun_name_355="operator_not_equals";
    type2_356=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_356->mHeap=(_Bool)0;
    cloner_357=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_359=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_360=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj162=fun_name2_358;
        fun_name2_358=(char*)come_increment_ref_count(create_method_name(obj_type_360,(_Bool)0,fun_name_355,info,(_Bool)1));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_361=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_359,fun_name_355));
        generics_fun_362=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_361,((void*)0));
        if(generics_fun_362) {
            if((_if_conditional4=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_358)),generics_fun_362,obj_type_360,info))),            _if_conditional4) {
                __result143__ = (_Bool)0;
                none_generics_name_359 = come_decrement_ref_count2(none_generics_name_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_360,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_361 = come_decrement_ref_count2(fun_name3_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_350 = come_decrement_ref_count2(result_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(stack_saved_351,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_356,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_358 = come_decrement_ref_count2(fun_name2_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result143__;
            }
        }
        cloner_357=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_358);
        none_generics_name_359 = come_decrement_ref_count2(none_generics_name_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_360,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_361 = come_decrement_ref_count2(fun_name3_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj163=fun_name2_358;
        fun_name2_358=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_355,info,(_Bool)1));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_363=128-1;        i_363>=1;        i_363--        ){
            new_fun_name_364=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_358,i_363));
            cloner_357=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_364);
            if(cloner_357) {
                __dec_obj164=fun_name2_358;
                fun_name2_358=(char*)come_increment_ref_count(__builtin_string(new_fun_name_364));
                __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_364 = come_decrement_ref_count2(new_fun_name_364, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_364 = come_decrement_ref_count2(new_fun_name_364, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_357==((void*)0)) {
            cloner_357=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_358);
        }
    }
    if(cloner_357==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var11=((struct tuple2$2sFunpcharph*)(__right_value297=create_operator_not_equals_automatically(type,fun_name_355,info)));
        fun_365=multiple_assign_var11->v1;
        new_fun_name_366=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        /*g*/come_call_finalizer3(__right_value297,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj165=fun_name2_358;
        fun_name2_358=(char*)come_increment_ref_count(new_fun_name_366);
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_357=fun_365;
        new_fun_name_366 = come_decrement_ref_count2(new_fun_name_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj166=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_352);
    /* a*/come_call_finalizer3(__dec_obj166,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj167=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_351);
    /* a*/come_call_finalizer3(__dec_obj167,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result144__ = (_Bool)1;
    result_350 = come_decrement_ref_count2(result_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_351,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_356,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_358 = come_decrement_ref_count2(fun_name2_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result144__;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
_Bool free_right_value_367;
struct list$1sRightValueObjectph* right_value_objects_368;
int n_369;
struct list$1sRightValueObjectph* o2_saved_370;
struct sRightValueObject* it_371;
struct sType* type_372;
void* __right_value298 = (void*)0;
struct sType* __dec_obj168;
    if(gComeGC||gComeC) {
        return;
    }
    free_right_value_367=(_Bool)0;
    right_value_objects_368=info->right_value_objects;
    n_369=0;
    for(    o2_saved_370=(right_value_objects_368),it_371=list$1sRightValueObjectph_begin((o2_saved_370));    !list$1sRightValueObjectph_end((o2_saved_370));    it_371=list$1sRightValueObjectph_next((o2_saved_370))    ){
        if(it_371&&!it_371->mFreed) {
            if(string_operator_equals(it_371->mFunName,info->come_fun->mName)&&it_371->mBlockLevel==info->block_level&&!it_371->mStored) {
                type_372=(struct sType*)come_increment_ref_count(it_371->mType);
                __dec_obj168=type_372;
                type_372=(struct sType*)come_increment_ref_count(solve_type(type_372,info->generics_type,info->method_generics_types,info));
                /* a*/come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
                free_object(type_372,it_371->mVarName,!it_371->mDecrementRefCount,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                it_371->mFreed=(_Bool)1;
                free_right_value_367=(_Bool)1;
                /*i*/come_call_finalizer3(type_372,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        n_369++;
    }
}

void free_exception_right_value_objects(struct sInfo* info, _Bool comma){
_Bool free_right_value_373;
struct list$1sRightValueObjectph* right_value_objects_374;
int n_375;
struct list$1sRightValueObjectph* o2_saved_376;
struct sRightValueObject* it_377;
struct sType* type_378;
void* __right_value299 = (void*)0;
struct sType* __dec_obj169;
    if(gComeGC||gComeC) {
        return;
    }
    free_right_value_373=(_Bool)0;
    right_value_objects_374=gExceptionRightValueObjects;
    if(right_value_objects_374) {
        n_375=0;
        for(        o2_saved_376=(right_value_objects_374),it_377=list$1sRightValueObjectph_begin((o2_saved_376));        !list$1sRightValueObjectph_end((o2_saved_376));        it_377=list$1sRightValueObjectph_next((o2_saved_376))        ){
            if(it_377&&!it_377->mFreed) {
                if(string_operator_equals(it_377->mFunName,info->come_fun->mName)&&it_377->mBlockLevel==info->block_level&&!it_377->mStored) {
                    type_378=(struct sType*)come_increment_ref_count(it_377->mType);
                    __dec_obj169=type_378;
                    type_378=(struct sType*)come_increment_ref_count(solve_type(type_378,info->generics_type,info->method_generics_types,info));
                    /* a*/come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
                    free_object(type_378,it_377->mVarName,!it_377->mDecrementRefCount,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                    it_377->mFreed=(_Bool)1;
                    free_right_value_373=(_Bool)1;
                    /*i*/come_call_finalizer3(type_378,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            n_375++;
        }
    }
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__=(void*)0;
struct sVarTable* it_379;
struct sVar* var__380;
struct sVar* __result149__;
struct sVar* __result150__;
    it_379=table;
    while(it_379) {
        var__380=map$2charphsVarphp_operator_load_element(it_379->mVars,name);
        if(var__380) {
            __result149__ = gComeFunResultObject = __result_obj__ = var__380;
            gComeFunResultObject = (void*)0;
            return __result149__;
        }
        it_379=it_379->mParent;
    }
    __result150__ = gComeFunResultObject = __result_obj__ = ((void*)0);
    gComeFunResultObject = (void*)0;
    return __result150__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_381;
unsigned int hash_382;
unsigned int it_383;
struct sVar* __result145__;
struct sVar* __result146__;
struct sVar* __result147__;
struct sVar* __result148__;
default_value_381 = (void*)0;
    memset(&default_value_381,0,sizeof(struct sVar*));
    hash_382=string_get_hash_key(((char*)key))%self->size;
    it_383=hash_382;
    while((_Bool)1) {
        if(self->item_existance[it_383]) {
            if(string_equals(self->keys[it_383],key)) {
                __result145__ = gComeFunResultObject = __result_obj__ = self->items[it_383];
                /*i*/come_call_finalizer3(default_value_381,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result145__;
            }
            it_383++;
            if(it_383>=self->size) {
                it_383=0;
            }
            else {
                if(it_383==hash_382) {
                    __result146__ = gComeFunResultObject = __result_obj__ = default_value_381;
                    /*i*/come_call_finalizer3(default_value_381,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result146__;
                }
            }
        }
        else {
            __result147__ = gComeFunResultObject = __result_obj__ = default_value_381;
            /*i*/come_call_finalizer3(default_value_381,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result147__;
        }
    }
    __result148__ = gComeFunResultObject = __result_obj__ = default_value_381;
    /*i*/come_call_finalizer3(default_value_381,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj170;
char* __dec_obj171;
struct sType* __dec_obj172;
char* __dec_obj173;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj170=self->mName;
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(self->mCValueName==gComeFunResultObject) {
            __dec_obj171=self->mCValueName;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj172=self->mType;
            /* a*/come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(self->mFunName==gComeFunResultObject) {
            __dec_obj173=self->mFunName;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2charphsVarph* o2_saved_384;
char* it_387;
struct sVar* p_390;
struct sType* type_391;
struct sClass* klass_392;
void* __right_value300 = (void*)0;
char* c_value_393;
void* __right_value301 = (void*)0;
struct sType* type2_394;
    if(gComeGC||gComeC) {
        return;
    }
    for(    o2_saved_384=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_387=map$2charphsVarph_begin((o2_saved_384));    !map$2charphsVarph_end((o2_saved_384));    it_387=map$2charphsVarph_next((o2_saved_384))    ){
        p_390=map$2charphsVarphp_operator_load_element(table->mVars,it_387);
        type_391=p_390->mType;
        klass_392=type_391->mClass;
        if(ret_value!=((void*)0)&&p_390->mCValueName!=((void*)0)&&string_operator_equals(p_390->mCValueName,ret_value->mCValueName)&&type_391->mHeap) {
            free_object(p_390->mType,p_390->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else {
            if(type_391->mHeap&&p_390->mCValueName) {
                free_object(p_390->mType,p_390->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            else {
                if(klass_392->mStruct&&p_390->mCValueName&&type_391->mAllocaValue&&!type_391->mNoCallingDestructor) {
                    c_value_393=(char*)come_increment_ref_count(xsprintf("(&%s)",p_390->mCValueName));
                    type2_394=(struct sType*)come_increment_ref_count(sType_clone(type_391));
                    type2_394->mPointerNum++;
                    free_object(type2_394,c_value_393,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    c_value_393 = come_decrement_ref_count2(c_value_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(type2_394,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    /*i*/come_call_finalizer3(o2_saved_384,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_385;
char* __result151__;
char* __result152__;
char* result_386;
char* __result153__;
result_385 = (void*)0;
result_386 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_385,0,sizeof(char*));
        __result151__ = gComeFunResultObject = __result_obj__ = result_385;
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result152__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    memset(&result_386,0,sizeof(char*));
    __result153__ = gComeFunResultObject = __result_obj__ = result_386;
    gComeFunResultObject = (void*)0;
    return __result153__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_388;
char* __result154__;
char* __result155__;
char* result_389;
char* __result156__;
result_388 = (void*)0;
result_389 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_388,0,sizeof(char*));
        __result154__ = gComeFunResultObject = __result_obj__ = result_388;
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result155__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    memset(&result_389,0,sizeof(char*));
    __result156__ = gComeFunResultObject = __result_obj__ = result_389;
    gComeFunResultObject = (void*)0;
    return __result156__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_395;
int i_396;
    for(    i_395=0;    i_395<self->size;    i_395++    ){
        if(self->item_existance[i_395]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_395],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_396=0;    i_396<self->size;    i_396++    ){
        if(self->item_existance[i_396]) {
            if(1) {
                self->keys[i_396] = come_decrement_ref_count2(self->keys[i_396], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_397;
    if(gComeGC||gComeC) {
        return;
    }
    it_397=info->lv_table;
    if(it_397==info->come_fun->mBlock->mVarTable) {
        free_objects(it_397,ret_value,info);
    }
    else {
        while(it_397!=info->come_fun->mBlock->mVarTable) {
            free_objects(it_397,ret_value,info);
            it_397=it_397->mParent;
        }
        free_objects(it_397,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
struct sVar* ret_value_398;
struct sVarTable* current_loop_vtable_399;
struct sVarTable* it_400;
    if(gComeGC||gComeC) {
        return;
    }
    ret_value_398=((void*)0);
    current_loop_vtable_399=info->current_loop_vtable;
    if(current_loop_vtable_399!=((void*)0)) {
        it_400=info->lv_table;
        while(it_400!=current_loop_vtable_399) {
            free_objects(it_400,ret_value_398,info);
            it_400=it_400->mParent;
        }
        free_objects(it_400,ret_value_398,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
char* __result157__;
void* __right_value307 = (void*)0;
char* var_name_402;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
char* __result158__;
void* __right_value316 = (void*)0;
char* __result159__;
    if(string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0) {
        if(gComeDebug||type->mRecord) {
            __result157__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value306=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(__right_value302=string_to_string(info->sname))),((char*)(__right_value303=int_to_string(info->sline))),((char*)(__right_value304=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value305=charp_to_string(c_value))))));
            __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result157__;
        }
    }
    else {
        if(gComeDebug||type->mRecord) {
            static int n_401=0;
            ++n_401;
            var_name_402=(char*)come_increment_ref_count(xsprintf("__exception_result_var_b%d",n_401));
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value308=make_define_var(type,var_name_402,(_Bool)0,info))));
            __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __result158__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value315=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(__right_value309=string_to_string(info->sname))),((char*)(__right_value310=int_to_string(info->sline))),((char*)(__right_value311=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value312=string_to_string(var_name_402))),((char*)(__right_value313=charp_to_string(c_value))),((char*)(__right_value314=string_to_string(var_name_402))))));
            var_name_402 = come_decrement_ref_count2(var_name_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result158__;
            var_name_402 = come_decrement_ref_count2(var_name_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result159__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value316=__builtin_string(c_value)));
    __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2charphsVarph* o2_saved_403;
char* it_404;
struct sVar* p_405;
struct sType* type_406;
struct sClass* klass_407;
_Bool __result160__;
_Bool __result161__;
_Bool __result162__;
_Bool __result163__;
    if(gComeGC||gComeC) {
        return (_Bool)1;
    }
    for(    o2_saved_403=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_404=map$2charphsVarph_begin((o2_saved_403));    !map$2charphsVarph_end((o2_saved_403));    it_404=map$2charphsVarph_next((o2_saved_403))    ){
        p_405=map$2charphsVarphp_operator_load_element(table->mVars,it_404);
        type_406=p_405->mType;
        klass_407=type_406->mClass;
        if(ret_value!=((void*)0)&&p_405->mCValueName!=((void*)0)&&string_operator_equals(p_405->mCValueName,ret_value->mCValueName)&&type_406->mHeap) {
            __result160__ = (_Bool)1;
            /*i*/come_call_finalizer3(o2_saved_403,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result160__;
        }
        else {
            if(type_406->mHeap&&p_405->mCValueName) {
                if(type_406->mFunctionParam) {
                    __result161__ = (_Bool)1;
                    /*i*/come_call_finalizer3(o2_saved_403,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result161__;
                }
                else {
                    __result162__ = (_Bool)1;
                    /*i*/come_call_finalizer3(o2_saved_403,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result162__;
                }
            }
            else {
                if(klass_407->mStruct&&p_405->mCValueName&&type_406->mAllocaValue&&!type_406->mNoCallingDestructor) {
                    __result163__ = (_Bool)1;
                    /*i*/come_call_finalizer3(o2_saved_403,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result163__;
                }
            }
        }
    }
    /*i*/come_call_finalizer3(o2_saved_403,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)0;
}

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_408;
    if(gComeGC||gComeC) {
        return (_Bool)0;
    }
    it_408=info->lv_table;
    if(it_408==info->come_fun->mBlock->mVarTable) {
        if(existance_free_objects(it_408,ret_value,info)) {
            return (_Bool)1;
        }
    }
    else {
        while(it_408!=info->come_fun->mBlock->mVarTable) {
            if(existance_free_objects(it_408,ret_value,info)) {
                return (_Bool)1;
            }
            it_408=it_408->mParent;
        }
        if(existance_free_objects(it_408,ret_value,info)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool existance_free_right_value_objects(struct sInfo* info){
struct list$1sRightValueObjectph* right_value_objects_409;
struct list$1sRightValueObjectph* o2_saved_410;
struct sRightValueObject* it_411;
    if(gComeGC||gComeC) {
        return (_Bool)0;
    }
    right_value_objects_409=info->right_value_objects;
    for(    o2_saved_410=(right_value_objects_409),it_411=list$1sRightValueObjectph_begin((o2_saved_410));    !list$1sRightValueObjectph_end((o2_saved_410));    it_411=list$1sRightValueObjectph_next((o2_saved_410))    ){
        if(it_411&&!it_411->mFreed) {
            if(string_operator_equals(it_411->mFunName,info->come_fun->mName)&&it_411->mBlockLevel==info->block_level) {
                return (_Bool)1;
            }
        }
    }
    return (_Bool)0;
}

