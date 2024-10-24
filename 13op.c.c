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
struct sNullNode
{
    int sline;
    char* sname;
};
struct sNilNode
{
    int sline;
    char* sname;
};
struct sAddNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sSubNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sMultNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sDivNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sModNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sLShiftNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sRShiftNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sGtEqNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sLtEqNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sLtNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sGtNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sEqNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sNotEqNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sEq2Node
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sNotEq2Node
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sAndNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sXOrNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sOrNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sAndAndNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sOrOrNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sCommaNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sConditionalNode
{
    int sline;
    char* sname;
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
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
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);
char* sNullNode_kind(struct sNullNode* self);
_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sNode* create_null_node(struct sInfo* info);
struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);
char* sNilNode_kind(struct sNilNode* self);
_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);
struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAddNode_kind(struct sAddNode* self);
_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);
struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sSubNode_kind(struct sSubNode* self);
_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);
struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sMultNode_kind(struct sMultNode* self);
_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);
struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sDivNode_kind(struct sDivNode* self);
_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);
struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sModNode_kind(struct sModNode* self);
_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);
struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLShiftNode_kind(struct sLShiftNode* self);
_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);
struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sRShiftNode_kind(struct sRShiftNode* self);
_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);
struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtEqNode_kind(struct sGtEqNode* self);
_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);
struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtEqNode_kind(struct sLtEqNode* self);
_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);
struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtNode_kind(struct sLtNode* self);
_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);
struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtNode_kind(struct sGtNode* self);
_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);
struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEqNode_kind(struct sEqNode* self);
_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);
struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEqNode_kind(struct sNotEqNode* self);
_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);
struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEq2Node_kind(struct sEq2Node* self);
_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info);
struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEq2Node_kind(struct sNotEq2Node* self);
_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);
struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndNode_kind(struct sAndNode* self);
_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);
struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sXOrNode_kind(struct sXOrNode* self);
_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);
struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrNode_kind(struct sOrNode* self);
_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);
struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndAndNode_kind(struct sAndAndNode* self);
_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);
struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrOrNode_kind(struct sOrOrNode* self);
_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);
struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);
char* sCommaNode_kind(struct sCommaNode* self);
_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);
struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
char* sConditionalNode_kind(struct sConditionalNode* self);
_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);
struct sNode* mult_exp(struct sInfo* info);
static void sMultNode_finalize(struct sMultNode* self);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static void sDivNode_finalize(struct sDivNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static void sModNode_finalize(struct sModNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);
static void sAddNode_finalize(struct sAddNode* self);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static void sSubNode_finalize(struct sSubNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);
static void sLShiftNode_finalize(struct sLShiftNode* self);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static void sRShiftNode_finalize(struct sRShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);
static void sGtEqNode_finalize(struct sGtEqNode* self);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static void sLtEqNode_finalize(struct sLtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static void sGtNode_finalize(struct sGtNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static void sLtNode_finalize(struct sLtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo* info);
static void sEq2Node_finalize(struct sEq2Node* self);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static void sEqNode_finalize(struct sEqNode* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static void sNotEqNode_finalize(struct sNotEqNode* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);
static void sAndNode_finalize(struct sAndNode* self);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);
static void sXOrNode_finalize(struct sXOrNode* self);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);
static void sOrNode_finalize(struct sOrNode* self);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);
static void sAndAndNode_finalize(struct sAndAndNode* self);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);
static void sOrOrNode_finalize(struct sOrOrNode* self);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);
static void sCommaNode_finalize(struct sCommaNode* self);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);
static void sConditionalNode_finalize(struct sConditionalNode* self);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
static void sNullNode_finalize(struct sNullNode* self);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
static void sNilNode_finalize(struct sNilNode* self);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
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










_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* __right_value151 = (void*)0;
struct sType* generics_type_64;
struct sType* __dec_obj59;
struct sClass* klass_95;
char* class_name_96;
struct sFun* operator_fun_97;
char* fun_name2_98;
void* __right_value152 = (void*)0;
char* none_generics_name_99;
void* __right_value153 = (void*)0;
struct sType* obj_type_100;
void* __right_value154 = (void*)0;
char* __dec_obj60;
void* __right_value155 = (void*)0;
char* fun_name3_101;
struct sGenericsFun* generics_fun_102;
void* __right_value156 = (void*)0;
_Bool _if_conditional1;
_Bool __result87__;
void* __right_value157 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_108;
char* fun_name_109;
void* __right_value158 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_110;
char* fun_name2_111;
void* __right_value159 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var3;
struct sFun* fun_112;
char* fun_name_113;
void* __right_value160 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var4;
struct sFun* fun2_114;
char* fun_name2_115;
void* __right_value161 = (void*)0;
char* __dec_obj87;
int i_116;
void* __right_value162 = (void*)0;
char* new_fun_name_117;
void* __right_value163 = (void*)0;
char* __dec_obj88;
_Bool result_118;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
struct CVALUE* come_value_119;
char* left_value2_120;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
char* __dec_obj89;
void* __right_value169 = (void*)0;
char* __dec_obj90;
char* right_value2_124;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
char* __dec_obj91;
void* __right_value173 = (void*)0;
char* __dec_obj92;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
char* __dec_obj93;
void* __right_value178 = (void*)0;
struct sType* type2_125;
void* __right_value179 = (void*)0;
struct sType* type3_126;
void* __right_value180 = (void*)0;
struct sType* __dec_obj94;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
char* __dec_obj95;
void* __right_value183 = (void*)0;
char* __dec_obj96;
_Bool __result95__;
fun_name2_98 = (void*)0;
memset(&i_116, 0, sizeof(int));
left_value2_120 = (void*)0;
right_value2_124 = (void*)0;
    generics_type_64=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(generics_type_64->mNoSolvedGenericsType->v1) {
        __dec_obj59=generics_type_64;
        generics_type_64=(struct sType*)come_increment_ref_count(generics_type_64->mNoSolvedGenericsType->v1);
        /* a*/come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    klass_95=type->mClass;
    class_name_96=klass_95->mName;
    operator_fun_97=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_99=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_100=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj60=fun_name2_98;
        fun_name2_98=(char*)come_increment_ref_count(create_method_name(obj_type_100,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_101=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_99,fun_name));
        generics_fun_102=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_101,((void*)0));
        if(generics_fun_102) {
            if((_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_98)),generics_fun_102,obj_type_100,info))),            _if_conditional1) {
                __result87__ = (_Bool)0;
                none_generics_name_99 = come_decrement_ref_count2(none_generics_name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_100,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_101 = come_decrement_ref_count2(fun_name3_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(generics_type_64,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_98 = come_decrement_ref_count2(fun_name2_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result87__;
            }
            operator_fun_97=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_98);
        }
        else {
            if(charp_operator_equals(fun_name,"operator_equals")) {
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value157=create_equals_automatically(obj_type_100,"equals",info)));
                fun_108=multiple_assign_var1->v1;
                fun_name_109=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                /*g*/come_call_finalizer3(__right_value157,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value158=create_operator_equals_automatically(obj_type_100,"operator_equals",info)));
                fun2_110=multiple_assign_var2->v1;
                fun_name2_111=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                /*g*/come_call_finalizer3(__right_value158,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_97=fun2_110;
                fun_name_109 = come_decrement_ref_count2(fun_name_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_111 = come_decrement_ref_count2(fun_name2_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(charp_operator_equals(fun_name,"operator_not_equals")) {
                    multiple_assign_var3=((struct tuple2$2sFunpcharph*)(__right_value159=create_equals_automatically(obj_type_100,"not_equals",info)));
                    fun_112=multiple_assign_var3->v1;
                    fun_name_113=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    /*g*/come_call_finalizer3(__right_value159,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var4=((struct tuple2$2sFunpcharph*)(__right_value160=create_operator_not_equals_automatically(obj_type_100,"operator_not_equals",info)));
                    fun2_114=multiple_assign_var4->v1;
                    fun_name2_115=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    /*g*/come_call_finalizer3(__right_value160,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    operator_fun_97=fun2_114;
                    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_115 = come_decrement_ref_count2(fun_name2_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    operator_fun_97=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_98);
                }
            }
        }
        none_generics_name_99 = come_decrement_ref_count2(none_generics_name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_100,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_101 = come_decrement_ref_count2(fun_name3_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj87=fun_name2_98;
        fun_name2_98=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_116=128-1;        i_116>=1;        i_116--        ){
            new_fun_name_117=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_98,i_116));
            operator_fun_97=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_117);
            if(operator_fun_97) {
                __dec_obj88=fun_name2_98;
                fun_name2_98=(char*)come_increment_ref_count(__builtin_string(new_fun_name_117));
                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_117 = come_decrement_ref_count2(new_fun_name_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_117 = come_decrement_ref_count2(new_fun_name_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(operator_fun_97==((void*)0)) {
            operator_fun_97=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_98);
        }
    }
    result_118=(_Bool)0;
    if(operator_fun_97&&(list$1sTypeph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult"))) {
        come_value_119=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 77, "CVALUE"))));
        check_assign_type(((char*)(__right_value167=xsprintf("\%s is assigned to",((char*)(__right_value166=string_to_string(fun_name2_98)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_97->mParamTypes,0), "13op.c", 79, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        __right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_97->mParamTypes,0), "13op.c", 80, 1))->mHeap&&left_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_97->mParamTypes,0), "13op.c", 81, 2)),left_value->type,left_value,info,(_Bool)1);
            __dec_obj89=left_value2_120;
            left_value2_120=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj90=left_value2_120;
            left_value2_120=(char*)come_increment_ref_count(string_clone(left_value->c_value));
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value171=xsprintf("\%s is assigned to",((char*)(__right_value170=string_to_string(fun_name2_98)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_97->mParamTypes,1), "13op.c", 88, 3)),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        __right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_97->mParamTypes,1), "13op.c", 89, 4))->mHeap&&right_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_97->mParamTypes,1), "13op.c", 90, 5)),right_value->type,right_value,info,(_Bool)1);
            __dec_obj91=right_value2_124;
            right_value2_124=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj92=right_value2_124;
            right_value2_124=(char*)come_increment_ref_count(string_clone(right_value->c_value));
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj93=come_value_119->c_value;
        come_value_119->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s)",((char*)(__right_value174=string_to_string(fun_name2_98))),((char*)(__right_value175=string_to_string(left_value2_120))),((char*)(__right_value176=string_to_string(right_value2_124)))));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value174 = come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value175 = come_decrement_ref_count2(__right_value175, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        type2_125=(struct sType*)come_increment_ref_count(sType_clone(operator_fun_97->mResultType));
        type3_126=(struct sType*)come_increment_ref_count(solve_generics(type2_125,generics_type_64,info));
        __dec_obj94=come_value_119->type;
        come_value_119->type=(struct sType*)come_increment_ref_count(sType_clone(type3_126));
        /* a*/come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_119->var=((void*)0);
        if(type3_126->mHeap) {
            append_object_to_right_values2(come_value_119,(struct sType*)come_increment_ref_count(type3_126),info,(_Bool)0);
        }
        if(!break_guard&&type3_126->mGuardValue&&type3_126->mPointerNum>0) {
            __dec_obj95=come_value_119->c_value;
            come_value_119->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value181=make_type_name_string(type3_126,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_119->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value181 = come_decrement_ref_count2(__right_value181, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        __dec_obj96=come_value_119->c_value;
        come_value_119->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_119->c_value,come_value_119->type,info));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s;\n",come_value_119->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_119));
        result_118=(_Bool)1;
        /*i*/come_call_finalizer3(come_value_119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_120 = come_decrement_ref_count2(left_value2_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_124 = come_decrement_ref_count2(right_value2_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_125,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type3_126,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result95__ = result_118;
    /*i*/come_call_finalizer3(generics_type_64,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_98 = come_decrement_ref_count2(fun_name2_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result95__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result65__;
void* __right_value116 = (void*)0;
struct sType* result_65;
void* __right_value119 = (void*)0;
struct tuple1$1sTypeph* __dec_obj37;
void* __right_value120 = (void*)0;
struct tuple1$1sTypeph* __dec_obj38;
void* __right_value121 = (void*)0;
struct tuple1$1sTypeph* __dec_obj39;
void* __right_value122 = (void*)0;
char* __dec_obj40;
void* __right_value129 = (void*)0;
struct list$1sTypeph* __dec_obj44;
void* __right_value137 = (void*)0;
struct list$1sNodeph* __dec_obj48;
void* __right_value138 = (void*)0;
struct list$1sTypeph* __dec_obj49;
void* __right_value145 = (void*)0;
struct list$1charph* __dec_obj53;
void* __right_value146 = (void*)0;
struct tuple1$1sTypeph* __dec_obj54;
void* __right_value147 = (void*)0;
struct sNode* __dec_obj55;
void* __right_value148 = (void*)0;
struct sNode* __dec_obj56;
void* __right_value149 = (void*)0;
char* __dec_obj57;
void* __right_value150 = (void*)0;
char* __dec_obj58;
struct sType* __result82__;
    if(self==(void*)0) {
        __result65__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result65__;
    }
    result_65=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_65->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj37=result_65->mNoSolvedGenericsType;
        result_65->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        /* a*/come_call_finalizer3(__dec_obj37,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj38=result_65->mOriginalLoadVarType;
        result_65->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        /* a*/come_call_finalizer3(__dec_obj38,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj39=result_65->mNoExceptionType;
        result_65->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        /* a*/come_call_finalizer3(__dec_obj39,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj40=result_65->mGenericsName;
        result_65->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj44=result_65->mGenericsTypes;
        result_65->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        /* a*/come_call_finalizer3(__dec_obj44,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj48=result_65->mArrayNum;
        result_65->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        /* a*/come_call_finalizer3(__dec_obj48,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_65->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj49=result_65->mParamTypes;
        result_65->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj49,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj53=result_65->mParamNames;
        result_65->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj53,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj54=result_65->mResultType;
        result_65->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_65->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj55=result_65->mAlignas;
        result_65->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_65->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_65->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_65->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_65->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_65->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_65->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_65->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_65->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_65->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_65->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_65->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_65->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_65->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_65->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_65->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_65->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_65->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_65->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_65->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_65->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_65->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_65->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_65->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_65->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_65->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(self!=((void*)0)) {
        result_65->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_65->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj56=result_65->mSizeNum;
        result_65->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_65->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result_65->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_65->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj57=result_65->mOriginalTypeName;
        result_65->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_65->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_65->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_65->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_65->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_65->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_65->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_65->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_65->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_65->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj58=result_65->mAsmName;
        result_65->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_65->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_65->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_65->mNoNumberArray=self->mNoNumberArray;
    }
    if(self!=((void*)0)) {
        result_65->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result_65->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)) {
        result_65->mOriginIsArray=self->mOriginIsArray;
    }
    __result82__ = gComeFunResultObject = __result_obj__ = result_65;
    /*i*/come_call_finalizer3(result_65,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result66__;
void* __right_value117 = (void*)0;
struct tuple1$1sTypeph* result_66;
void* __right_value118 = (void*)0;
struct sType* __dec_obj15;
struct tuple1$1sTypeph* __result67__;
    if(self==(void*)0) {
        __result66__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result66__;
    }
    result_66=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj15=result_66->v1;
        result_66->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /* a*/come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result67__ = gComeFunResultObject = __result_obj__ = result_66;
    /*i*/come_call_finalizer3(result_66,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj16;
struct tuple1$1sTypeph* __dec_obj18;
struct tuple1$1sTypeph* __dec_obj20;
char* __dec_obj22;
struct list$1sTypeph* __dec_obj23;
struct list$1sNodeph* __dec_obj25;
struct list$1sTypeph* __dec_obj27;
struct list$1charph* __dec_obj28;
struct tuple1$1sTypeph* __dec_obj30;
struct sNode* __dec_obj32;
struct sNode* __dec_obj33;
char* __dec_obj34;
char* __dec_obj35;
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj16=self->mNoSolvedGenericsType;
            /* a*/come_call_finalizer3(__dec_obj16,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj18=self->mOriginalLoadVarType;
            /* a*/come_call_finalizer3(__dec_obj18,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj20=self->mNoExceptionType;
            /* a*/come_call_finalizer3(__dec_obj20,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(self->mGenericsName==gComeFunResultObject) {
            __dec_obj22=self->mGenericsName;
            __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj23=self->mGenericsTypes;
            /* a*/come_call_finalizer3(__dec_obj23,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(self->mArrayNum==gComeFunResultObject) {
            __dec_obj25=self->mArrayNum;
            /* a*/come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj27=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj28=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj28,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj30=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj30,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(self->mAlignas==gComeFunResultObject) {
            __dec_obj32=self->mAlignas;
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(self->mSizeNum==gComeFunResultObject) {
            __dec_obj33=self->mSizeNum;
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj34=self->mOriginalTypeName;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(self->mAsmName==gComeFunResultObject) {
            __dec_obj35=self->mAsmName;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_67;
struct list_item$1sTypeph* prev_it_68;
    it_67=self->head;
    while(it_67!=((void*)0)) {
        prev_it_68=it_67;
        it_67=it_67->next;
        /*i*/come_call_finalizer3(prev_it_68,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj24;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj24=self->item;
            /* a*/come_call_finalizer3(__dec_obj24,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_69;
struct list_item$1sTypeph* prev_it_70;
    it_69=self->head;
    while(it_69!=((void*)0)) {
        prev_it_70=it_69;
        it_69=it_69->next;
        /*i*/come_call_finalizer3(prev_it_70,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_71;
struct list_item$1sNodeph* prev_it_72;
    it_71=self->head;
    while(it_71!=((void*)0)) {
        prev_it_72=it_71;
        it_71=it_71->next;
        /*i*/come_call_finalizer3(prev_it_72,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj26;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj26=self->item;
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_73;
struct list_item$1sNodeph* prev_it_74;
    it_73=self->head;
    while(it_73!=((void*)0)) {
        prev_it_74=it_73;
        it_73=it_73->next;
        /*i*/come_call_finalizer3(prev_it_74,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
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
char* __dec_obj29;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj29=self->item;
            __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_77;
struct list_item$1charph* prev_it_78;
    it_77=self->head;
    while(it_77!=((void*)0)) {
        prev_it_78=it_77;
        it_77=it_77->next;
        /*i*/come_call_finalizer3(prev_it_78,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj31;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj31=self->v1;
            /* a*/come_call_finalizer3(__dec_obj31,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj36;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj36=self->v1;
            /* a*/come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result68__;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1sTypeph* result_79;
struct list_item$1sTypeph* it_80;
void* __right_value128 = (void*)0;
struct list$1sTypeph* __result71__;
    if(self==((void*)0)) {
        __result68__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    result_79=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sTypeph"))));
    it_80=self->head;
    while(it_80!=((void*)0)) {
        list$1sTypeph_add(result_79,(struct sType*)come_increment_ref_count(sType_clone(it_80->item)));
        it_80=it_80->next;
    }
    __result71__ = gComeFunResultObject = __result_obj__ = result_79;
    /*i*/come_call_finalizer3(result_79,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result69__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct list_item$1sTypeph* litem_81;
struct sType* __dec_obj41;
void* __right_value126 = (void*)0;
struct list_item$1sTypeph* litem_82;
struct sType* __dec_obj42;
void* __right_value127 = (void*)0;
struct list_item$1sTypeph* litem_83;
struct sType* __dec_obj43;
struct list$1sTypeph* __result70__;
    if(self->len==0) {
        litem_81=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value125=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sTypeph"))));
        litem_81->prev=((void*)0);
        litem_81->next=((void*)0);
        __dec_obj41=litem_81->item;
        litem_81->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_81;
        self->head=litem_81;
    }
    else {
        if(self->len==1) {
            litem_82=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value126=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sTypeph"))));
            litem_82->prev=self->head;
            litem_82->next=((void*)0);
            __dec_obj42=litem_82->item;
            litem_82->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_82;
            self->head->next=litem_82;
        }
        else {
            litem_83=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value127=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sTypeph"))));
            litem_83->prev=self->tail;
            litem_83->next=((void*)0);
            __dec_obj43=litem_83->item;
            litem_83->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_83;
            self->tail=litem_83;
        }
    }
    self->len++;
    __result70__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result70__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result72__;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct list$1sNodeph* result_84;
struct list_item$1sNodeph* it_85;
void* __right_value136 = (void*)0;
struct list$1sNodeph* __result77__;
    if(self==((void*)0)) {
        __result72__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_84=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sNodeph"))));
    it_85=self->head;
    while(it_85!=((void*)0)) {
        list$1sNodeph_add(result_84,(struct sNode*)come_increment_ref_count(sNode_clone(it_85->item)));
        it_85=it_85->next;
    }
    __result77__ = gComeFunResultObject = __result_obj__ = result_84;
    /*i*/come_call_finalizer3(result_84,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result73__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result73__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value132 = (void*)0;
struct list_item$1sNodeph* litem_86;
struct sNode* __dec_obj45;
void* __right_value133 = (void*)0;
struct list_item$1sNodeph* litem_87;
struct sNode* __dec_obj46;
void* __right_value134 = (void*)0;
struct list_item$1sNodeph* litem_88;
struct sNode* __dec_obj47;
struct list$1sNodeph* __result74__;
    if(self->len==0) {
        litem_86=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value132=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sNodeph"))));
        litem_86->prev=((void*)0);
        litem_86->next=((void*)0);
        __dec_obj45=litem_86->item;
        litem_86->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_86;
        self->head=litem_86;
    }
    else {
        if(self->len==1) {
            litem_87=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value133=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sNodeph"))));
            litem_87->prev=self->head;
            litem_87->next=((void*)0);
            __dec_obj46=litem_87->item;
            litem_87->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_87;
            self->head->next=litem_87;
        }
        else {
            litem_88=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value134=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sNodeph"))));
            litem_88->prev=self->tail;
            litem_88->next=((void*)0);
            __dec_obj47=litem_88->item;
            litem_88->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_88;
            self->tail=litem_88;
        }
    }
    self->len++;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result75__;
void* __right_value135 = (void*)0;
struct sNode* result_89;
struct sNode* __result76__;
    if(self==(void*)0) {
        __result75__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result75__;
    }
    result_89=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_89->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_89->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_89->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_89->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_89->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_89->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_89->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_89->kind=self->kind;
    }
    __result76__ = gComeFunResultObject = __result_obj__ = result_89;
    if(result_89) { result_89 = come_decrement_ref_count2(result_89, ((struct sNode*)result_89)->finalize, ((struct sNode*)result_89)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result78__;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct list$1charph* result_90;
struct list_item$1charph* it_91;
void* __right_value144 = (void*)0;
struct list$1charph* __result81__;
    if(self==((void*)0)) {
        __result78__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result78__;
    }
    result_90=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 137, "list$1charph"))));
    it_91=self->head;
    while(it_91!=((void*)0)) {
        list$1charph_add(result_90,(char*)come_increment_ref_count(string_clone(it_91->item)));
        it_91=it_91->next;
    }
    __result81__ = gComeFunResultObject = __result_obj__ = result_90;
    /*i*/come_call_finalizer3(result_90,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result79__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
struct list_item$1charph* litem_92;
char* __dec_obj50;
void* __right_value142 = (void*)0;
struct list_item$1charph* litem_93;
char* __dec_obj51;
void* __right_value143 = (void*)0;
struct list_item$1charph* litem_94;
char* __dec_obj52;
struct list$1charph* __result80__;
    if(self->len==0) {
        litem_92=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value141=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1charph"))));
        litem_92->prev=((void*)0);
        litem_92->next=((void*)0);
        __dec_obj50=litem_92->item;
        litem_92->item=(char*)come_increment_ref_count(item);
        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_92;
        self->head=litem_92;
    }
    else {
        if(self->len==1) {
            litem_93=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value142=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1charph"))));
            litem_93->prev=self->head;
            litem_93->next=((void*)0);
            __dec_obj51=litem_93->item;
            litem_93->item=(char*)come_increment_ref_count(item);
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_93;
            self->head->next=litem_93;
        }
        else {
            litem_94=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1charph"))));
            litem_94->prev=self->tail;
            litem_94->next=((void*)0);
            __dec_obj52=litem_94->item;
            litem_94->item=(char*)come_increment_ref_count(item);
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_94;
            self->tail=litem_94;
        }
    }
    self->len++;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_103;
unsigned int it_104;
struct sGenericsFun* __result83__;
struct sGenericsFun* __result84__;
struct sGenericsFun* __result85__;
struct sGenericsFun* __result86__;
    hash_103=string_get_hash_key(((char*)key))%self->size;
    it_104=hash_103;
    while((_Bool)1) {
        if(self->item_existance[it_104]) {
            if(string_equals(self->keys[it_104],key)) {
                __result83__ = gComeFunResultObject = __result_obj__ = self->items[it_104];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result83__;
            }
            it_104++;
            if(it_104>=self->size) {
                it_104=0;
            }
            else {
                if(it_104==hash_103) {
                    __result84__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result84__;
                }
            }
        }
        else {
            __result85__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result85__;
        }
    }
    __result86__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj61;
struct list$1charph* __dec_obj62;
struct list$1charph* __dec_obj63;
char* __dec_obj64;
struct sType* __dec_obj65;
struct list$1sTypeph* __dec_obj66;
struct list$1charph* __dec_obj67;
struct list$1charph* __dec_obj68;
char* __dec_obj69;
char* __dec_obj70;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(self->mImplType==gComeFunResultObject) {
            __dec_obj61=self->mImplType;
            /* a*/come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj62=self->mGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj62,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj63=self->mMethodGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj63,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj64=self->mName;
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj65=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj66=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj66,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj67=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj67,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj68=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj68,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj69=self->mBlock;
            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(self->mGenericsSName==gComeFunResultObject) {
            __dec_obj70=self->mGenericsSName;
            __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_105;
unsigned int hash_106;
unsigned int it_107;
struct sFun* __result88__;
struct sFun* __result89__;
struct sFun* __result90__;
struct sFun* __result91__;
default_value_105 = (void*)0;
    memset(&default_value_105,0,sizeof(struct sFun*));
    hash_106=string_get_hash_key(((char*)key))%self->size;
    it_107=hash_106;
    while((_Bool)1) {
        if(self->item_existance[it_107]) {
            if(string_equals(self->keys[it_107],key)) {
                __result88__ = gComeFunResultObject = __result_obj__ = self->items[it_107];
                /*i*/come_call_finalizer3(default_value_105,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result88__;
            }
            it_107++;
            if(it_107>=self->size) {
                it_107=0;
            }
            else {
                if(it_107==hash_106) {
                    __result89__ = gComeFunResultObject = __result_obj__ = default_value_105;
                    /*i*/come_call_finalizer3(default_value_105,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result89__;
                }
            }
        }
        else {
            __result90__ = gComeFunResultObject = __result_obj__ = default_value_105;
            /*i*/come_call_finalizer3(default_value_105,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result90__;
        }
    }
    __result91__ = gComeFunResultObject = __result_obj__ = default_value_105;
    /*i*/come_call_finalizer3(default_value_105,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
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
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj71=self->mName;
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj72=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj73=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj73,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj74=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj74,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj75=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(self->mLambdaType==gComeFunResultObject) {
            __dec_obj76=self->mLambdaType;
            /* a*/come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj77=self->mBlock;
            /* a*/come_call_finalizer3(__dec_obj77,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj80=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj80,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj81=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj81,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj82=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj82,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(self->mSourceDefer==gComeFunResultObject) {
            __dec_obj83=self->mSourceDefer;
            /* a*/come_call_finalizer3(__dec_obj83,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(self->mComeHeader==gComeFunResultObject) {
            __dec_obj84=self->mComeHeader;
            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj85=self->mDeclareSName;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj78;
struct sVarTable* __dec_obj79;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(self->mNodes==gComeFunResultObject) {
            __dec_obj78=self->mNodes;
            /* a*/come_call_finalizer3(__dec_obj78,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(self->mVarTable==gComeFunResultObject) {
            __dec_obj79=self->mVarTable;
            /* a*/come_call_finalizer3(__dec_obj79,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj86;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj86=self->v2;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_121;
int i_122;
struct sType* __result92__;
struct sType* default_value_123;
struct sType* __result93__;
default_value_123 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_121=self->head;
    i_122=0;
    while(it_121!=((void*)0)) {
        if(position==i_122) {
            __result92__ = gComeFunResultObject = __result_obj__ = it_121->item;
            gComeFunResultObject = (void*)0;
            return __result92__;
        }
        it_121=it_121->next;
        i_122++;
    }
    memset(&default_value_123,0,sizeof(struct sType*));
    __result93__ = gComeFunResultObject = __result_obj__ = default_value_123;
    /*i*/come_call_finalizer3(default_value_123,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value184 = (void*)0;
struct list_item$1CVALUEph* litem_127;
struct CVALUE* __dec_obj97;
void* __right_value185 = (void*)0;
struct list_item$1CVALUEph* litem_128;
struct CVALUE* __dec_obj101;
void* __right_value186 = (void*)0;
struct list_item$1CVALUEph* litem_129;
struct CVALUE* __dec_obj102;
struct list$1CVALUEph* __result94__;
    if(self->len==0) {
        litem_127=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value184=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1CVALUEph"))));
        litem_127->prev=((void*)0);
        litem_127->next=((void*)0);
        __dec_obj97=litem_127->item;
        litem_127->item=(struct CVALUE*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj97,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_127;
        self->head=litem_127;
    }
    else {
        if(self->len==1) {
            litem_128=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value185=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1CVALUEph"))));
            litem_128->prev=self->head;
            litem_128->next=((void*)0);
            __dec_obj101=litem_128->item;
            litem_128->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_128;
            self->head->next=litem_128;
        }
        else {
            litem_129=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value186=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1CVALUEph"))));
            litem_129->prev=self->tail;
            litem_129->next=((void*)0);
            __dec_obj102=litem_129->item;
            litem_129->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_129;
            self->tail=litem_129;
        }
    }
    self->len++;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj98;
struct sType* __dec_obj99;
char* __dec_obj100;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(self->c_value==gComeFunResultObject) {
            __dec_obj98=self->c_value;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj99=self->type;
            /* a*/come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj100=self->c_value_without_right_value_objects;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value187 = (void*)0;
struct sNullNode* __result96__;
    ((struct sNodeBase*)(__right_value187=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value187,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

char* sNullNode_kind(struct sNullNode* self){
void* __result_obj__=(void*)0;
void* __right_value188 = (void*)0;
char* __result97__;
    __result97__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value188=__builtin_string("sNullNode")));
    __right_value188 = come_decrement_ref_count2(__right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
struct CVALUE* come_value_130;
void* __right_value191 = (void*)0;
char* __dec_obj105;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct sType* __dec_obj106;
_Bool __result98__;
    come_value_130=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 140, "CVALUE"))));
    __dec_obj105=come_value_130->c_value;
    come_value_130->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj106=come_value_130->type;
    come_value_130->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 143, "sType")),"void*",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_130->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_130->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_130));
    __result98__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result98__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj103;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj103=self->sname;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_node(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* __right_value198 = (void*)0;
struct sNode* __result101__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 156, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNullNode*)(__right_value195=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 156, "sNullNode")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result101__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value198=_inf_value1));
    /*g*/come_call_finalizer3(__right_value195,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value198) { __right_value198 = come_decrement_ref_count2(__right_value198, ((struct sNode*)__right_value198)->finalize, ((struct sNode*)__right_value198)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result101__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value199 = (void*)0;
struct sNilNode* __result102__;
    ((struct sNodeBase*)(__right_value199=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value199,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

char* sNilNode_kind(struct sNilNode* self){
void* __result_obj__=(void*)0;
void* __right_value200 = (void*)0;
char* __result103__;
    __result103__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value200=__builtin_string("sNilNode")));
    __right_value200 = come_decrement_ref_count2(__right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct CVALUE* come_value_132;
void* __right_value203 = (void*)0;
char* __dec_obj110;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct sType* __dec_obj111;
_Bool __result104__;
    come_value_132=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 173, "CVALUE"))));
    __dec_obj110=come_value_132->c_value;
    come_value_132->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj111=come_value_132->type;
    come_value_132->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 176, "sType")),"void*",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_132->type->mNullValue=(_Bool)1;
    come_value_132->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_132->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_132));
    __result104__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result104__;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct sNode* __dec_obj112;
void* __right_value208 = (void*)0;
struct sNode* __dec_obj113;
struct sAddNode* __result105__;
    ((struct sNodeBase*)(__right_value206=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value206,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj112=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj113=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
    self->mQuote=quote;
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result105__;
}

char* sAddNode_kind(struct sAddNode* self){
void* __result_obj__=(void*)0;
void* __right_value209 = (void*)0;
char* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value209=__builtin_string("sAddNode")));
    __right_value209 = come_decrement_ref_count2(__right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
struct sNode* left_node_133;
void* __right_value210 = (void*)0;
struct CVALUE* left_value_134;
struct sNode* right_node_135;
_Bool __result107__;
void* __right_value211 = (void*)0;
struct CVALUE* right_value_136;
struct sType* type_137;
char* fun_name_138;
_Bool calling_fun_139;
void* __right_value212 = (void*)0;
struct sType* result_type_140;
void* __right_value213 = (void*)0;
struct sType* __dec_obj117;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct CVALUE* come_value_141;
void* __right_value216 = (void*)0;
char* __dec_obj118;
void* __right_value217 = (void*)0;
struct sType* __dec_obj119;
_Bool __result108__;
memset(&calling_fun_139, 0, sizeof(_Bool));
    left_node_133=self->mLeft;
    if(!node_compile(left_node_133,info)) {
        return (_Bool)0;
    }
    left_value_134=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_135=self->mRight;
    if(!node_compile(right_node_135,info)) {
        __result107__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result107__;
    }
    right_value_136=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_137=(struct sType*)come_increment_ref_count(left_value_134->type);
    fun_name_138="operator_add";
    if(self->mQuote) {
        calling_fun_139=(_Bool)0;
    }
    else {
        calling_fun_139=operator_overload_fun(type_137,fun_name_138,left_value_134,right_value_136,(_Bool)0,info);
    }
    if(!calling_fun_139) {
        result_type_140=(struct sType*)come_increment_ref_count(sType_clone(left_value_134->type));
        if(right_value_136->type->mPointerNum>0) {
            __dec_obj117=result_type_140;
            result_type_140=(struct sType*)come_increment_ref_count(sType_clone(right_value_136->type));
            /* a*/come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_141=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 242, "CVALUE"))));
        __dec_obj118=come_value_141->c_value;
        come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s+%s",left_value_134->c_value,right_value_136->c_value));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj119=come_value_141->type;
        come_value_141->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_140));
        /* a*/come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_141->type->mHeap=(_Bool)0;
        come_value_141->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_141->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_141));
        /*i*/come_call_finalizer3(result_type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result108__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_136,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_137,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result108__;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct sNode* __dec_obj120;
void* __right_value220 = (void*)0;
struct sNode* __dec_obj121;
struct sSubNode* __result109__;
    ((struct sNodeBase*)(__right_value218=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value218,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj120=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj121=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); }
    self->mQuote=quote;
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result109__;
}

char* sSubNode_kind(struct sSubNode* self){
void* __result_obj__=(void*)0;
void* __right_value221 = (void*)0;
char* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value221=__builtin_string("sSubNode")));
    __right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
struct sNode* left_node_142;
void* __right_value222 = (void*)0;
struct CVALUE* left_value_143;
struct sNode* right_node_144;
_Bool __result111__;
void* __right_value223 = (void*)0;
struct CVALUE* right_value_145;
struct sType* type_146;
char* fun_name_147;
_Bool calling_fun_148;
void* __right_value224 = (void*)0;
struct sType* result_type_149;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct sType* __dec_obj125;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct CVALUE* come_value_150;
void* __right_value229 = (void*)0;
char* __dec_obj126;
void* __right_value230 = (void*)0;
struct sType* __dec_obj127;
_Bool __result112__;
memset(&calling_fun_148, 0, sizeof(_Bool));
    left_node_142=self->mLeft;
    if(!node_compile(left_node_142,info)) {
        return (_Bool)0;
    }
    left_value_143=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_144=self->mRight;
    if(!node_compile(right_node_144,info)) {
        __result111__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_143,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result111__;
    }
    right_value_145=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_146=(struct sType*)come_increment_ref_count(left_value_143->type);
    fun_name_147="operator_sub";
    if(self->mQuote) {
        calling_fun_148=(_Bool)0;
    }
    else {
        calling_fun_148=operator_overload_fun(type_146,fun_name_147,left_value_143,right_value_145,(_Bool)0,info);
    }
    if(!calling_fun_148) {
        result_type_149=(struct sType*)come_increment_ref_count(sType_clone(left_value_143->type));
        if(left_value_143->type->mPointerNum>0&&right_value_145->type->mPointerNum>0) {
            __dec_obj125=result_type_149;
            result_type_149=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 309, "sType")),"long",(_Bool)0,info));
            /* a*/come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_150=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 312, "CVALUE"))));
        __dec_obj126=come_value_150->c_value;
        come_value_150->c_value=(char*)come_increment_ref_count(xsprintf("%s-%s",left_value_143->c_value,right_value_145->c_value));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj127=come_value_150->type;
        come_value_150->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_149));
        /* a*/come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_150->type->mHeap=(_Bool)0;
        come_value_150->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_150->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_150));
        /*i*/come_call_finalizer3(result_type_149,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result112__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_143,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_145,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_146,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result112__;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct sNode* __dec_obj128;
void* __right_value233 = (void*)0;
struct sNode* __dec_obj129;
struct sMultNode* __result113__;
    ((struct sNodeBase*)(__right_value231=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value231,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj128=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj129=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result113__;
}

char* sMultNode_kind(struct sMultNode* self){
void* __result_obj__=(void*)0;
void* __right_value234 = (void*)0;
char* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value234=__builtin_string("sMultNode")));
    __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
struct sNode* left_node_151;
void* __right_value235 = (void*)0;
struct CVALUE* left_value_152;
struct sNode* right_node_153;
_Bool __result115__;
void* __right_value236 = (void*)0;
struct CVALUE* right_value_154;
struct sType* type_155;
char* fun_name_156;
_Bool calling_fun_157;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct CVALUE* come_value_158;
void* __right_value239 = (void*)0;
char* __dec_obj133;
void* __right_value240 = (void*)0;
struct sType* __dec_obj134;
_Bool __result116__;
memset(&calling_fun_157, 0, sizeof(_Bool));
    left_node_151=self->mLeft;
    if(!node_compile(left_node_151,info)) {
        return (_Bool)0;
    }
    left_value_152=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_153=self->mRight;
    if(!node_compile(right_node_153,info)) {
        __result115__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_152,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result115__;
    }
    right_value_154=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_155=(struct sType*)come_increment_ref_count(left_value_152->type);
    fun_name_156="operator_mult";
    if(self->mQuote) {
        calling_fun_157=(_Bool)0;
    }
    else {
        calling_fun_157=operator_overload_fun(type_155,fun_name_156,left_value_152,right_value_154,(_Bool)0,info);
    }
    if(!calling_fun_157) {
        come_value_158=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 377, "CVALUE"))));
        __dec_obj133=come_value_158->c_value;
        come_value_158->c_value=(char*)come_increment_ref_count(xsprintf("%s*%s",left_value_152->c_value,right_value_154->c_value));
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj134=come_value_158->type;
        come_value_158->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_152->type));
        /* a*/come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_158->type->mHeap=(_Bool)0;
        come_value_158->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_158->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_158));
        /*i*/come_call_finalizer3(come_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result116__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_152,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_154,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_155,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result116__;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct sNode* __dec_obj135;
void* __right_value243 = (void*)0;
struct sNode* __dec_obj136;
struct sDivNode* __result117__;
    ((struct sNodeBase*)(__right_value241=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value241,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj135=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj136=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result117__;
}

char* sDivNode_kind(struct sDivNode* self){
void* __result_obj__=(void*)0;
void* __right_value244 = (void*)0;
char* __result118__;
    __result118__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value244=__builtin_string("sDivNode")));
    __right_value244 = come_decrement_ref_count2(__right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
struct sNode* left_node_159;
void* __right_value245 = (void*)0;
struct CVALUE* left_value_160;
struct sNode* right_node_161;
_Bool __result119__;
void* __right_value246 = (void*)0;
struct CVALUE* right_value_162;
struct sType* type_163;
char* fun_name_164;
_Bool calling_fun_165;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct CVALUE* come_value_166;
void* __right_value249 = (void*)0;
char* __dec_obj140;
void* __right_value250 = (void*)0;
struct sType* __dec_obj141;
_Bool __result120__;
memset(&calling_fun_165, 0, sizeof(_Bool));
    left_node_159=self->mLeft;
    if(!node_compile(left_node_159,info)) {
        return (_Bool)0;
    }
    left_value_160=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_161=self->mRight;
    if(!node_compile(right_node_161,info)) {
        __result119__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result119__;
    }
    right_value_162=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_163=(struct sType*)come_increment_ref_count(left_value_160->type);
    fun_name_164="operator_div";
    if(self->mQuote) {
        calling_fun_165=(_Bool)0;
    }
    else {
        calling_fun_165=operator_overload_fun(type_163,fun_name_164,left_value_160,right_value_162,(_Bool)0,info);
    }
    if(!calling_fun_165) {
        come_value_166=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 442, "CVALUE"))));
        __dec_obj140=come_value_166->c_value;
        come_value_166->c_value=(char*)come_increment_ref_count(xsprintf("%s/%s",left_value_160->c_value,right_value_162->c_value));
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj141=come_value_166->type;
        come_value_166->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_160->type));
        /* a*/come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_166->type->mHeap=(_Bool)0;
        come_value_166->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_166->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
        /*i*/come_call_finalizer3(come_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result120__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_163,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result120__;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct sNode* __dec_obj142;
void* __right_value253 = (void*)0;
struct sNode* __dec_obj143;
struct sModNode* __result121__;
    ((struct sNodeBase*)(__right_value251=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value251,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj142=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj143=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); }
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result121__;
}

char* sModNode_kind(struct sModNode* self){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
char* __result122__;
    __result122__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value254=__builtin_string("sModNode")));
    __right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
struct sNode* left_node_167;
void* __right_value255 = (void*)0;
struct CVALUE* left_value_168;
struct sNode* right_node_169;
_Bool __result123__;
void* __right_value256 = (void*)0;
struct CVALUE* right_value_170;
struct sType* type_171;
char* fun_name_172;
_Bool calling_fun_173;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct CVALUE* come_value_174;
void* __right_value259 = (void*)0;
char* __dec_obj147;
void* __right_value260 = (void*)0;
struct sType* __dec_obj148;
_Bool __result124__;
memset(&calling_fun_173, 0, sizeof(_Bool));
    left_node_167=self->mLeft;
    if(!node_compile(left_node_167,info)) {
        return (_Bool)0;
    }
    left_value_168=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_169=self->mRight;
    if(!node_compile(right_node_169,info)) {
        __result123__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result123__;
    }
    right_value_170=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_171=(struct sType*)come_increment_ref_count(left_value_168->type);
    fun_name_172="operator_mod";
    if(self->mQuote) {
        calling_fun_173=(_Bool)0;
    }
    else {
        calling_fun_173=operator_overload_fun(type_171,fun_name_172,left_value_168,right_value_170,(_Bool)0,info);
    }
    if(!calling_fun_173) {
        come_value_174=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 507, "CVALUE"))));
        __dec_obj147=come_value_174->c_value;
        come_value_174->c_value=(char*)come_increment_ref_count(xsprintf("%s%%%s",left_value_168->c_value,right_value_170->c_value));
        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj148=come_value_174->type;
        come_value_174->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_168->type));
        /* a*/come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_174->type->mHeap=(_Bool)0;
        come_value_174->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_174->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
        /*i*/come_call_finalizer3(come_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result124__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_171,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result124__;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sNode* __dec_obj149;
void* __right_value263 = (void*)0;
struct sNode* __dec_obj150;
struct sLShiftNode* __result125__;
    ((struct sNodeBase*)(__right_value261=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value261,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj149=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj150=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); }
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result125__;
}

char* sLShiftNode_kind(struct sLShiftNode* self){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
char* __result126__;
    __result126__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value264=__builtin_string("sLShiftNode")));
    __right_value264 = come_decrement_ref_count2(__right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
struct sNode* left_node_175;
void* __right_value265 = (void*)0;
struct CVALUE* left_value_176;
struct sNode* right_node_177;
_Bool __result127__;
void* __right_value266 = (void*)0;
struct CVALUE* right_value_178;
struct sType* type_179;
char* fun_name_180;
_Bool calling_fun_181;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct CVALUE* come_value_182;
void* __right_value269 = (void*)0;
char* __dec_obj154;
void* __right_value270 = (void*)0;
struct sType* __dec_obj155;
_Bool __result128__;
memset(&calling_fun_181, 0, sizeof(_Bool));
    left_node_175=self->mLeft;
    if(!node_compile(left_node_175,info)) {
        return (_Bool)0;
    }
    left_value_176=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_177=self->mRight;
    if(!node_compile(right_node_177,info)) {
        __result127__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result127__;
    }
    right_value_178=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_179=(struct sType*)come_increment_ref_count(left_value_176->type);
    fun_name_180="operator_lshift";
    if(self->mQuote) {
        calling_fun_181=(_Bool)0;
    }
    else {
        calling_fun_181=operator_overload_fun(type_179,fun_name_180,left_value_176,right_value_178,(_Bool)0,info);
    }
    if(!calling_fun_181) {
        come_value_182=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 573, "CVALUE"))));
        __dec_obj154=come_value_182->c_value;
        come_value_182->c_value=(char*)come_increment_ref_count(xsprintf("%s<<%s",left_value_176->c_value,right_value_178->c_value));
        __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj155=come_value_182->type;
        come_value_182->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_176->type));
        /* a*/come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_182->type->mHeap=(_Bool)0;
        come_value_182->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_182->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_182));
        /*i*/come_call_finalizer3(come_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result128__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result128__;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct sNode* __dec_obj156;
void* __right_value273 = (void*)0;
struct sNode* __dec_obj157;
struct sRShiftNode* __result129__;
    ((struct sNodeBase*)(__right_value271=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value271,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj156=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj157=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result129__;
}

char* sRShiftNode_kind(struct sRShiftNode* self){
void* __result_obj__=(void*)0;
void* __right_value274 = (void*)0;
char* __result130__;
    __result130__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value274=__builtin_string("sRShiftNode")));
    __right_value274 = come_decrement_ref_count2(__right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
struct sNode* left_node_183;
void* __right_value275 = (void*)0;
struct CVALUE* left_value_184;
struct sNode* right_node_185;
_Bool __result131__;
void* __right_value276 = (void*)0;
struct CVALUE* right_value_186;
struct sType* type_187;
char* fun_name_188;
_Bool calling_fun_189;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct CVALUE* come_value_190;
void* __right_value279 = (void*)0;
char* __dec_obj161;
void* __right_value280 = (void*)0;
struct sType* __dec_obj162;
_Bool __result132__;
memset(&calling_fun_189, 0, sizeof(_Bool));
    left_node_183=self->mLeft;
    if(!node_compile(left_node_183,info)) {
        return (_Bool)0;
    }
    left_value_184=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_185=self->mRight;
    if(!node_compile(right_node_185,info)) {
        __result131__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result131__;
    }
    right_value_186=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_187=(struct sType*)come_increment_ref_count(left_value_184->type);
    fun_name_188="operator_rshift";
    if(self->mQuote) {
        calling_fun_189=(_Bool)0;
    }
    else {
        calling_fun_189=operator_overload_fun(type_187,fun_name_188,left_value_184,right_value_186,(_Bool)0,info);
    }
    if(!calling_fun_189) {
        come_value_190=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 638, "CVALUE"))));
        __dec_obj161=come_value_190->c_value;
        come_value_190->c_value=(char*)come_increment_ref_count(xsprintf("%s>>%s",left_value_184->c_value,right_value_186->c_value));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj162=come_value_190->type;
        come_value_190->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_184->type));
        /* a*/come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_190->type->mHeap=(_Bool)0;
        come_value_190->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_190->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_190));
        /*i*/come_call_finalizer3(come_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result132__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result132__;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sNode* __dec_obj163;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj164;
struct sGtEqNode* __result133__;
    ((struct sNodeBase*)(__right_value281=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value281,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj163=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj164=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result133__;
}

char* sGtEqNode_kind(struct sGtEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value284 = (void*)0;
char* __result134__;
    __result134__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value284=__builtin_string("sGtEqNode")));
    __right_value284 = come_decrement_ref_count2(__right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
struct sNode* left_node_191;
void* __right_value285 = (void*)0;
struct CVALUE* left_value_192;
struct sNode* right_node_193;
_Bool __result135__;
void* __right_value286 = (void*)0;
struct CVALUE* right_value_194;
struct sType* type_195;
char* fun_name_196;
_Bool calling_fun_197;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct CVALUE* come_value_198;
void* __right_value289 = (void*)0;
char* __dec_obj168;
void* __right_value290 = (void*)0;
struct sType* __dec_obj169;
_Bool __result136__;
memset(&calling_fun_197, 0, sizeof(_Bool));
    left_node_191=self->mLeft;
    if(!node_compile(left_node_191,info)) {
        return (_Bool)0;
    }
    left_value_192=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_193=self->mRight;
    if(!node_compile(right_node_193,info)) {
        __result135__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_192,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result135__;
    }
    right_value_194=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_195=(struct sType*)come_increment_ref_count(left_value_192->type);
    fun_name_196="operator_gteq";
    if(self->mQuote) {
        calling_fun_197=(_Bool)0;
    }
    else {
        calling_fun_197=operator_overload_fun(type_195,fun_name_196,left_value_192,right_value_194,(_Bool)0,info);
    }
    if(!calling_fun_197) {
        come_value_198=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 703, "CVALUE"))));
        __dec_obj168=come_value_198->c_value;
        come_value_198->c_value=(char*)come_increment_ref_count(xsprintf("%s>=%s",left_value_192->c_value,right_value_194->c_value));
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj169=come_value_198->type;
        come_value_198->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_192->type));
        /* a*/come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_198->type->mHeap=(_Bool)0;
        come_value_198->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_198->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_198));
        /*i*/come_call_finalizer3(come_value_198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result136__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_192,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_194,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_195,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result136__;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sNode* __dec_obj170;
void* __right_value293 = (void*)0;
struct sNode* __dec_obj171;
struct sLtEqNode* __result137__;
    ((struct sNodeBase*)(__right_value291=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value291,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj170=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj171=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
    __result137__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result137__;
}

char* sLtEqNode_kind(struct sLtEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
char* __result138__;
    __result138__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value294=__builtin_string("sLtEqNode")));
    __right_value294 = come_decrement_ref_count2(__right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
struct sNode* left_node_199;
void* __right_value295 = (void*)0;
struct CVALUE* left_value_200;
struct sNode* right_node_201;
_Bool __result139__;
void* __right_value296 = (void*)0;
struct CVALUE* right_value_202;
struct sType* type_203;
char* fun_name_204;
_Bool calling_fun_205;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct CVALUE* come_value_206;
void* __right_value299 = (void*)0;
char* __dec_obj175;
void* __right_value300 = (void*)0;
struct sType* __dec_obj176;
_Bool __result140__;
memset(&calling_fun_205, 0, sizeof(_Bool));
    left_node_199=self->mLeft;
    if(!node_compile(left_node_199,info)) {
        return (_Bool)0;
    }
    left_value_200=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_201=self->mRight;
    if(!node_compile(right_node_201,info)) {
        __result139__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_200,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result139__;
    }
    right_value_202=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_203=(struct sType*)come_increment_ref_count(left_value_200->type);
    fun_name_204="operator_lteq";
    if(self->mQuote) {
        calling_fun_205=(_Bool)0;
    }
    else {
        calling_fun_205=operator_overload_fun(type_203,fun_name_204,left_value_200,right_value_202,(_Bool)0,info);
    }
    if(!calling_fun_205) {
        come_value_206=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 768, "CVALUE"))));
        __dec_obj175=come_value_206->c_value;
        come_value_206->c_value=(char*)come_increment_ref_count(xsprintf("%s<=%s",left_value_200->c_value,right_value_202->c_value));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj176=come_value_206->type;
        come_value_206->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_200->type));
        /* a*/come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_206->type->mHeap=(_Bool)0;
        come_value_206->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_206->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_206));
        /*i*/come_call_finalizer3(come_value_206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result140__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_200,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_203,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result140__;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sNode* __dec_obj177;
void* __right_value303 = (void*)0;
struct sNode* __dec_obj178;
struct sLtNode* __result141__;
    ((struct sNodeBase*)(__right_value301=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value301,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj177=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj178=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
    __result141__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result141__;
}

char* sLtNode_kind(struct sLtNode* self){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
char* __result142__;
    __result142__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value304=__builtin_string("sLtNode")));
    __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
struct sNode* left_node_207;
void* __right_value305 = (void*)0;
struct CVALUE* left_value_208;
struct sNode* right_node_209;
_Bool __result143__;
void* __right_value306 = (void*)0;
struct CVALUE* right_value_210;
struct sType* type_211;
char* fun_name_212;
_Bool calling_fun_213;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct CVALUE* come_value_214;
void* __right_value309 = (void*)0;
char* __dec_obj182;
void* __right_value310 = (void*)0;
struct sType* __dec_obj183;
_Bool __result144__;
memset(&calling_fun_213, 0, sizeof(_Bool));
    left_node_207=self->mLeft;
    if(!node_compile(left_node_207,info)) {
        return (_Bool)0;
    }
    left_value_208=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_209=self->mRight;
    if(!node_compile(right_node_209,info)) {
        __result143__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result143__;
    }
    right_value_210=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_211=(struct sType*)come_increment_ref_count(left_value_208->type);
    fun_name_212="operator_lt";
    if(self->mQuote) {
        calling_fun_213=(_Bool)0;
    }
    else {
        calling_fun_213=operator_overload_fun(type_211,fun_name_212,left_value_208,right_value_210,(_Bool)0,info);
    }
    if(!calling_fun_213) {
        come_value_214=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 833, "CVALUE"))));
        __dec_obj182=come_value_214->c_value;
        come_value_214->c_value=(char*)come_increment_ref_count(xsprintf("%s<%s",left_value_208->c_value,right_value_210->c_value));
        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj183=come_value_214->type;
        come_value_214->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_208->type));
        /* a*/come_call_finalizer3(__dec_obj183,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_214->type->mHeap=(_Bool)0;
        come_value_214->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_214->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_214));
        /*i*/come_call_finalizer3(come_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result144__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_210,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_211,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result144__;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sNode* __dec_obj184;
void* __right_value313 = (void*)0;
struct sNode* __dec_obj185;
struct sGtNode* __result145__;
    ((struct sNodeBase*)(__right_value311=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value311,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj184=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj185=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
    __result145__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result145__;
}

char* sGtNode_kind(struct sGtNode* self){
void* __result_obj__=(void*)0;
void* __right_value314 = (void*)0;
char* __result146__;
    __result146__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value314=__builtin_string("sGtNode")));
    __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result146__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
struct sNode* left_node_215;
void* __right_value315 = (void*)0;
struct CVALUE* left_value_216;
struct sNode* right_node_217;
_Bool __result147__;
void* __right_value316 = (void*)0;
struct CVALUE* right_value_218;
struct sType* type_219;
char* fun_name_220;
_Bool calling_fun_221;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct CVALUE* come_value_222;
void* __right_value319 = (void*)0;
char* __dec_obj189;
void* __right_value320 = (void*)0;
struct sType* __dec_obj190;
_Bool __result148__;
memset(&calling_fun_221, 0, sizeof(_Bool));
    left_node_215=self->mLeft;
    if(!node_compile(left_node_215,info)) {
        return (_Bool)0;
    }
    left_value_216=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_217=self->mRight;
    if(!node_compile(right_node_217,info)) {
        __result147__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_216,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result147__;
    }
    right_value_218=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_219=(struct sType*)come_increment_ref_count(left_value_216->type);
    fun_name_220="operator_gt";
    if(self->mQuote) {
        calling_fun_221=(_Bool)0;
    }
    else {
        calling_fun_221=operator_overload_fun(type_219,fun_name_220,left_value_216,right_value_218,(_Bool)0,info);
    }
    if(!calling_fun_221) {
        come_value_222=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 898, "CVALUE"))));
        __dec_obj189=come_value_222->c_value;
        come_value_222->c_value=(char*)come_increment_ref_count(xsprintf("%s>%s",left_value_216->c_value,right_value_218->c_value));
        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj190=come_value_222->type;
        come_value_222->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_216->type));
        /* a*/come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_222->type->mHeap=(_Bool)0;
        come_value_222->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_222->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_222));
        /*i*/come_call_finalizer3(come_value_222,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result148__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_216,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_218,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_219,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result148__;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sNode* __dec_obj191;
void* __right_value323 = (void*)0;
struct sNode* __dec_obj192;
struct sEqNode* __result149__;
    ((struct sNodeBase*)(__right_value321=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value321,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj191=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj192=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); }
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result149__;
}

char* sEqNode_kind(struct sEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value324 = (void*)0;
char* __result150__;
    __result150__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value324=__builtin_string("sEqNode")));
    __right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result150__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
struct sNode* left_node_223;
void* __right_value325 = (void*)0;
struct CVALUE* left_value_224;
struct sNode* right_node_225;
_Bool __result151__;
void* __right_value326 = (void*)0;
struct CVALUE* right_value_226;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct CVALUE* come_value_227;
void* __right_value329 = (void*)0;
char* __dec_obj196;
void* __right_value330 = (void*)0;
struct sType* __dec_obj197;
_Bool __result152__;
    left_node_223=self->mLeft;
    if(!node_compile(left_node_223,info)) {
        return (_Bool)0;
    }
    left_value_224=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_225=self->mRight;
    if(!node_compile(right_node_225,info)) {
        __result151__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_224,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result151__;
    }
    right_value_226=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_227=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 951, "CVALUE"))));
    __dec_obj196=come_value_227->c_value;
    come_value_227->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_224->c_value,right_value_226->c_value));
    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj197=come_value_227->type;
    come_value_227->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_224->type));
    /* a*/come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_227->type->mHeap=(_Bool)0;
    come_value_227->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_227->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_227));
    __result152__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_224,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_226,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_227,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result152__;
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sNode* __dec_obj198;
void* __right_value333 = (void*)0;
struct sNode* __dec_obj199;
struct sNotEqNode* __result153__;
    ((struct sNodeBase*)(__right_value331=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value331,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj198=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count2(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj199=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0, (void*)0); }
    __result153__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result153__;
}

char* sNotEqNode_kind(struct sNotEqNode* self){
void* __result_obj__=(void*)0;
void* __right_value334 = (void*)0;
char* __result154__;
    __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value334=__builtin_string("sNotEqNode")));
    __right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
struct sNode* left_node_228;
void* __right_value335 = (void*)0;
struct CVALUE* left_value_229;
struct sNode* right_node_230;
_Bool __result155__;
void* __right_value336 = (void*)0;
struct CVALUE* right_value_231;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct CVALUE* come_value_232;
void* __right_value339 = (void*)0;
char* __dec_obj203;
void* __right_value340 = (void*)0;
struct sType* __dec_obj204;
_Bool __result156__;
    left_node_228=self->mLeft;
    if(!node_compile(left_node_228,info)) {
        return (_Bool)0;
    }
    left_value_229=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_230=self->mRight;
    if(!node_compile(right_node_230,info)) {
        __result155__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_229,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result155__;
    }
    right_value_231=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_232=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1003, "CVALUE"))));
    __dec_obj203=come_value_232->c_value;
    come_value_232->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_229->c_value,right_value_231->c_value));
    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj204=come_value_232->type;
    come_value_232->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_229->type));
    /* a*/come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_232->type->mHeap=(_Bool)0;
    come_value_232->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_232->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_232));
    __result156__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_229,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_231,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_232,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result156__;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sNode* __dec_obj205;
void* __right_value343 = (void*)0;
struct sNode* __dec_obj206;
struct sEq2Node* __result157__;
    ((struct sNodeBase*)(__right_value341=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value341,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj205=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj206=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); }
    __result157__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result157__;
}

char* sEq2Node_kind(struct sEq2Node* self){
void* __result_obj__=(void*)0;
void* __right_value344 = (void*)0;
char* __result158__;
    __result158__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value344=__builtin_string("sEq2Node")));
    __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info){
struct sNode* left_node_233;
void* __right_value345 = (void*)0;
struct CVALUE* left_value_234;
struct sNode* right_node_235;
_Bool __result159__;
void* __right_value346 = (void*)0;
struct CVALUE* right_value_236;
struct sType* type_237;
char* fun_name_238;
_Bool calling_fun_239;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct CVALUE* come_value_240;
void* __right_value349 = (void*)0;
char* __dec_obj210;
void* __right_value350 = (void*)0;
struct sType* __dec_obj211;
_Bool __result160__;
memset(&calling_fun_239, 0, sizeof(_Bool));
    left_node_233=self->mLeft;
    if(!node_compile(left_node_233,info)) {
        return (_Bool)0;
    }
    left_value_234=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_235=self->mRight;
    if(!node_compile(right_node_235,info)) {
        __result159__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_234,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result159__;
    }
    right_value_236=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_237=(struct sType*)come_increment_ref_count(left_value_234->type);
    fun_name_238="operator_equals";
    if(self->mQuote) {
        calling_fun_239=(_Bool)0;
    }
    else {
        calling_fun_239=operator_overload_fun(type_237,fun_name_238,left_value_234,right_value_236,(_Bool)0,info);
    }
    if(!calling_fun_239) {
        come_value_240=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1067, "CVALUE"))));
        __dec_obj210=come_value_240->c_value;
        come_value_240->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_234->c_value,right_value_236->c_value));
        __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj211=come_value_240->type;
        come_value_240->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_234->type));
        /* a*/come_call_finalizer3(__dec_obj211,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_240->type->mHeap=(_Bool)0;
        come_value_240->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_240->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_240));
        /*i*/come_call_finalizer3(come_value_240,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result160__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_234,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_236,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_237,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result160__;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sNode* __dec_obj212;
void* __right_value353 = (void*)0;
struct sNode* __dec_obj213;
struct sNotEq2Node* __result161__;
    ((struct sNodeBase*)(__right_value351=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value351,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj212=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj213=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count2(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0, (void*)0); }
    __result161__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result161__;
}

char* sNotEq2Node_kind(struct sNotEq2Node* self){
void* __result_obj__=(void*)0;
void* __right_value354 = (void*)0;
char* __result162__;
    __result162__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value354=__builtin_string("sNotEq2Node")));
    __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
struct sNode* left_node_241;
void* __right_value355 = (void*)0;
struct CVALUE* left_value_242;
struct sNode* right_node_243;
_Bool __result163__;
void* __right_value356 = (void*)0;
struct CVALUE* right_value_244;
struct sType* type_245;
char* fun_name_246;
_Bool calling_fun_247;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct CVALUE* come_value_248;
void* __right_value359 = (void*)0;
char* __dec_obj217;
void* __right_value360 = (void*)0;
struct sType* __dec_obj218;
_Bool __result164__;
memset(&calling_fun_247, 0, sizeof(_Bool));
    left_node_241=self->mLeft;
    if(!node_compile(left_node_241,info)) {
        return (_Bool)0;
    }
    left_value_242=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_243=self->mRight;
    if(!node_compile(right_node_243,info)) {
        __result163__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_242,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result163__;
    }
    right_value_244=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_245=(struct sType*)come_increment_ref_count(left_value_242->type);
    fun_name_246="operator_not_equals";
    if(self->mQuote) {
        calling_fun_247=(_Bool)0;
    }
    else {
        calling_fun_247=operator_overload_fun(type_245,fun_name_246,left_value_242,right_value_244,(_Bool)0,info);
    }
    if(!calling_fun_247) {
        come_value_248=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1132, "CVALUE"))));
        __dec_obj217=come_value_248->c_value;
        come_value_248->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_242->c_value,right_value_244->c_value));
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj218=come_value_248->type;
        come_value_248->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_242->type));
        /* a*/come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_248->type->mHeap=(_Bool)0;
        come_value_248->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_248->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_248));
        /*i*/come_call_finalizer3(come_value_248,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result164__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_242,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result164__;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sNode* __dec_obj219;
void* __right_value363 = (void*)0;
struct sNode* __dec_obj220;
struct sAndNode* __result165__;
    ((struct sNodeBase*)(__right_value361=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value361,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj219=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj220=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); }
    __result165__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result165__;
}

char* sAndNode_kind(struct sAndNode* self){
void* __result_obj__=(void*)0;
void* __right_value364 = (void*)0;
char* __result166__;
    __result166__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value364=__builtin_string("sAndNode")));
    __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
struct sNode* left_node_249;
void* __right_value365 = (void*)0;
struct CVALUE* left_value_250;
struct sNode* right_node_251;
_Bool __result167__;
void* __right_value366 = (void*)0;
struct CVALUE* right_value_252;
struct sType* type_253;
char* fun_name_254;
_Bool calling_fun_255;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct CVALUE* come_value_256;
void* __right_value369 = (void*)0;
char* __dec_obj224;
void* __right_value370 = (void*)0;
struct sType* __dec_obj225;
_Bool __result168__;
memset(&calling_fun_255, 0, sizeof(_Bool));
    left_node_249=self->mLeft;
    if(!node_compile(left_node_249,info)) {
        return (_Bool)0;
    }
    left_value_250=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_251=self->mRight;
    if(!node_compile(right_node_251,info)) {
        __result167__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_250,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result167__;
    }
    right_value_252=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_253=(struct sType*)come_increment_ref_count(left_value_250->type);
    fun_name_254="operator_and";
    if(self->mQuote) {
        calling_fun_255=(_Bool)0;
    }
    else {
        calling_fun_255=operator_overload_fun(type_253,fun_name_254,left_value_250,right_value_252,(_Bool)0,info);
    }
    if(!calling_fun_255) {
        come_value_256=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1198, "CVALUE"))));
        __dec_obj224=come_value_256->c_value;
        come_value_256->c_value=(char*)come_increment_ref_count(xsprintf("%s&%s",left_value_250->c_value,right_value_252->c_value));
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj225=come_value_256->type;
        come_value_256->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_250->type));
        /* a*/come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_256->type->mHeap=(_Bool)0;
        come_value_256->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_256->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_256));
        /*i*/come_call_finalizer3(come_value_256,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result168__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_250,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_253,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result168__;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sNode* __dec_obj226;
void* __right_value373 = (void*)0;
struct sNode* __dec_obj227;
struct sXOrNode* __result169__;
    ((struct sNodeBase*)(__right_value371=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value371,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj226=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj227=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); }
    __result169__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result169__;
}

char* sXOrNode_kind(struct sXOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value374 = (void*)0;
char* __result170__;
    __result170__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value374=__builtin_string("sXOrNode")));
    __right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result170__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
struct sNode* left_node_257;
void* __right_value375 = (void*)0;
struct CVALUE* left_value_258;
struct sNode* right_node_259;
_Bool __result171__;
void* __right_value376 = (void*)0;
struct CVALUE* right_value_260;
struct sType* type_261;
char* fun_name_262;
_Bool calling_fun_263;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct CVALUE* come_value_264;
void* __right_value379 = (void*)0;
char* __dec_obj231;
void* __right_value380 = (void*)0;
struct sType* __dec_obj232;
_Bool __result172__;
memset(&calling_fun_263, 0, sizeof(_Bool));
    left_node_257=self->mLeft;
    if(!node_compile(left_node_257,info)) {
        return (_Bool)0;
    }
    left_value_258=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_259=self->mRight;
    if(!node_compile(right_node_259,info)) {
        __result171__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_258,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result171__;
    }
    right_value_260=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_261=(struct sType*)come_increment_ref_count(left_value_258->type);
    fun_name_262="operator_xor";
    if(self->mQuote) {
        calling_fun_263=(_Bool)0;
    }
    else {
        calling_fun_263=operator_overload_fun(type_261,fun_name_262,left_value_258,right_value_260,(_Bool)0,info);
    }
    if(!calling_fun_263) {
        come_value_264=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1263, "CVALUE"))));
        __dec_obj231=come_value_264->c_value;
        come_value_264->c_value=(char*)come_increment_ref_count(xsprintf("%s^%s",left_value_258->c_value,right_value_260->c_value));
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj232=come_value_264->type;
        come_value_264->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_258->type));
        /* a*/come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_264->type->mHeap=(_Bool)0;
        come_value_264->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_264->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_264));
        /*i*/come_call_finalizer3(come_value_264,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result172__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_258,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_260,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_261,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result172__;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct sNode* __dec_obj233;
void* __right_value383 = (void*)0;
struct sNode* __dec_obj234;
struct sOrNode* __result173__;
    ((struct sNodeBase*)(__right_value381=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value381,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj233=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj234=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); }
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result173__;
}

char* sOrNode_kind(struct sOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value384 = (void*)0;
char* __result174__;
    __result174__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value384=__builtin_string("sOrNode")));
    __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result174__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
struct sNode* left_node_265;
void* __right_value385 = (void*)0;
struct CVALUE* left_value_266;
struct sNode* right_node_267;
_Bool __result175__;
void* __right_value386 = (void*)0;
struct CVALUE* right_value_268;
struct sType* type_269;
char* fun_name_270;
_Bool calling_fun_271;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct CVALUE* come_value_272;
void* __right_value389 = (void*)0;
char* __dec_obj238;
void* __right_value390 = (void*)0;
struct sType* __dec_obj239;
_Bool __result176__;
memset(&calling_fun_271, 0, sizeof(_Bool));
    left_node_265=self->mLeft;
    if(!node_compile(left_node_265,info)) {
        return (_Bool)0;
    }
    left_value_266=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_267=self->mRight;
    if(!node_compile(right_node_267,info)) {
        __result175__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_266,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result175__;
    }
    right_value_268=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_269=(struct sType*)come_increment_ref_count(left_value_266->type);
    fun_name_270="operator_or";
    if(self->mQuote) {
        calling_fun_271=(_Bool)0;
    }
    else {
        calling_fun_271=operator_overload_fun(type_269,fun_name_270,left_value_266,right_value_268,(_Bool)0,info);
    }
    if(!calling_fun_271) {
        come_value_272=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1329, "CVALUE"))));
        __dec_obj238=come_value_272->c_value;
        come_value_272->c_value=(char*)come_increment_ref_count(xsprintf("%s|%s",left_value_266->c_value,right_value_268->c_value));
        __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj239=come_value_272->type;
        come_value_272->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_266->type));
        /* a*/come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_272->type->mHeap=(_Bool)0;
        come_value_272->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_272->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_272));
        /*i*/come_call_finalizer3(come_value_272,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result176__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_266,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_268,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result176__;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct sNode* __dec_obj240;
void* __right_value393 = (void*)0;
struct sNode* __dec_obj241;
struct sAndAndNode* __result177__;
    ((struct sNodeBase*)(__right_value391=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value391,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj240=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count2(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj241=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); }
    __result177__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result177__;
}

char* sAndAndNode_kind(struct sAndAndNode* self){
void* __result_obj__=(void*)0;
void* __right_value394 = (void*)0;
char* __result178__;
    __result178__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value394=__builtin_string("sAndAndNode")));
    __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result178__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
struct sNode* left_node_273;
void* __right_value395 = (void*)0;
struct CVALUE* left_value_274;
struct sNode* right_node_275;
_Bool __result179__;
void* __right_value396 = (void*)0;
struct CVALUE* right_value_276;
struct sType* type_277;
char* fun_name_278;
_Bool calling_fun_279;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct CVALUE* come_value_280;
void* __right_value399 = (void*)0;
char* __dec_obj245;
void* __right_value400 = (void*)0;
struct sType* __dec_obj246;
_Bool __result180__;
memset(&calling_fun_279, 0, sizeof(_Bool));
    left_node_273=self->mLeft;
    if(!node_compile(left_node_273,info)) {
        return (_Bool)0;
    }
    left_value_274=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_275=self->mRight;
    if(!node_compile(right_node_275,info)) {
        __result179__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_274,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result179__;
    }
    right_value_276=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_277=(struct sType*)come_increment_ref_count(left_value_274->type);
    fun_name_278="operator_andand";
    if(self->mQuote) {
        calling_fun_279=(_Bool)0;
    }
    else {
        calling_fun_279=operator_overload_fun(type_277,fun_name_278,left_value_274,right_value_276,(_Bool)0,info);
    }
    if(!calling_fun_279) {
        come_value_280=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1395, "CVALUE"))));
        __dec_obj245=come_value_280->c_value;
        come_value_280->c_value=(char*)come_increment_ref_count(xsprintf("%s&&%s",left_value_274->c_value,right_value_276->c_value));
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj246=come_value_280->type;
        come_value_280->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_274->type));
        /* a*/come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_280->type->mHeap=(_Bool)0;
        come_value_280->var=left_value_274->var;
        add_come_last_code(info,"%s;\n",come_value_280->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_280));
        /*i*/come_call_finalizer3(come_value_280,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result180__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_274,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_276,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_277,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result180__;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sNode* __dec_obj247;
void* __right_value403 = (void*)0;
struct sNode* __dec_obj248;
struct sOrOrNode* __result181__;
    ((struct sNodeBase*)(__right_value401=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value401,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj247=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj248=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); }
    __result181__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result181__;
}

char* sOrOrNode_kind(struct sOrOrNode* self){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
char* __result182__;
    __result182__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value404=__builtin_string("sOrOrNode")));
    __right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result182__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
struct sNode* left_node_281;
void* __right_value405 = (void*)0;
struct CVALUE* left_value_282;
struct sNode* right_node_283;
_Bool __result183__;
void* __right_value406 = (void*)0;
struct CVALUE* right_value_284;
struct sType* type_285;
char* fun_name_286;
_Bool calling_fun_287;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct CVALUE* come_value_288;
void* __right_value409 = (void*)0;
char* __dec_obj252;
void* __right_value410 = (void*)0;
struct sType* __dec_obj253;
_Bool __result184__;
memset(&calling_fun_287, 0, sizeof(_Bool));
    left_node_281=self->mLeft;
    if(!node_compile(left_node_281,info)) {
        return (_Bool)0;
    }
    left_value_282=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_283=self->mRight;
    if(!node_compile(right_node_283,info)) {
        __result183__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_282,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result183__;
    }
    right_value_284=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_285=(struct sType*)come_increment_ref_count(left_value_282->type);
    fun_name_286="operator_oror";
    if(self->mQuote) {
        calling_fun_287=(_Bool)0;
    }
    else {
        calling_fun_287=operator_overload_fun(type_285,fun_name_286,left_value_282,right_value_284,(_Bool)0,info);
    }
    if(!calling_fun_287) {
        come_value_288=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1460, "CVALUE"))));
        __dec_obj252=come_value_288->c_value;
        come_value_288->c_value=(char*)come_increment_ref_count(xsprintf("%s||%s",left_value_282->c_value,right_value_284->c_value));
        __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj253=come_value_288->type;
        come_value_288->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_282->type));
        /* a*/come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_288->type->mHeap=(_Bool)0;
        come_value_288->var=left_value_282->var;
        add_come_last_code(info,"%s;\n",come_value_288->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_288));
        /*i*/come_call_finalizer3(come_value_288,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result184__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_282,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_284,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_285,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result184__;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct sNode* __dec_obj254;
void* __right_value413 = (void*)0;
struct sNode* __dec_obj255;
struct sCommaNode* __result185__;
    ((struct sNodeBase*)(__right_value411=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value411,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj254=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj254) { __dec_obj254 = come_decrement_ref_count2(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj255=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); }
    __result185__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result185__;
}

char* sCommaNode_kind(struct sCommaNode* self){
void* __result_obj__=(void*)0;
void* __right_value414 = (void*)0;
char* __result186__;
    __result186__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value414=__builtin_string("sCommaNode")));
    __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
struct sNode* left_node_289;
void* __right_value415 = (void*)0;
struct CVALUE* left_value_290;
struct sNode* right_node_291;
_Bool __result187__;
void* __right_value416 = (void*)0;
struct CVALUE* right_value_292;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_293;
void* __right_value419 = (void*)0;
char* __dec_obj259;
void* __right_value420 = (void*)0;
struct sType* __dec_obj260;
_Bool __result188__;
    left_node_289=self->mLeft;
    if(!node_compile(left_node_289,info)) {
        return (_Bool)0;
    }
    left_value_290=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_node_291=self->mRight;
    if(!node_compile(right_node_291,info)) {
        __result187__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_290,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result187__;
    }
    right_value_292=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_293=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1512, "CVALUE"))));
    __dec_obj259=come_value_293->c_value;
    come_value_293->c_value=(char*)come_increment_ref_count(xsprintf("%s,%s",left_value_290->c_value,right_value_292->c_value));
    __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj260=come_value_293->type;
    come_value_293->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_290->type));
    /* a*/come_call_finalizer3(__dec_obj260,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_293->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_293->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_293));
    __result188__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_290,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_292,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_293,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result188__;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sNode* __dec_obj261;
void* __right_value423 = (void*)0;
struct sNode* __dec_obj262;
void* __right_value424 = (void*)0;
struct sNode* __dec_obj263;
struct sConditionalNode* __result189__;
    ((struct sNodeBase*)(__right_value421=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value421,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj261=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(value1));
    if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count2(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj262=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(value2));
    if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj263=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(value3));
    if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); }
    __result189__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result189__;
}

char* sConditionalNode_kind(struct sConditionalNode* self){
void* __result_obj__=(void*)0;
void* __right_value425 = (void*)0;
char* __result190__;
    __result190__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value425=__builtin_string("sConditionalNode")));
    __right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result190__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
struct sNode* value1_294;
void* __right_value426 = (void*)0;
struct CVALUE* value1_value_295;
struct sNode* value2_296;
_Bool __result191__;
void* __right_value427 = (void*)0;
struct CVALUE* value2_value_297;
struct sNode* value3_298;
_Bool __result192__;
void* __right_value428 = (void*)0;
struct CVALUE* value3_value_299;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct CVALUE* come_value_300;
void* __right_value431 = (void*)0;
char* __dec_obj268;
void* __right_value432 = (void*)0;
struct sType* __dec_obj269;
_Bool __result193__;
    value1_294=self->mValue1;
    if(!node_compile(value1_294,info)) {
        return (_Bool)0;
    }
    value1_value_295=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    value2_296=self->mValue2;
    if(!node_compile(value2_296,info)) {
        __result191__ = (_Bool)0;
        /*i*/come_call_finalizer3(value1_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result191__;
    }
    value2_value_297=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    value3_298=self->mValue3;
    if(!node_compile(value3_298,info)) {
        __result192__ = (_Bool)0;
        /*i*/come_call_finalizer3(value1_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value2_value_297,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result192__;
    }
    value3_value_299=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_300=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1572, "CVALUE"))));
    __dec_obj268=come_value_300->c_value;
    come_value_300->c_value=(char*)come_increment_ref_count(xsprintf("%s?%s:%s",value1_value_295->c_value,value2_value_297->c_value,value3_value_299->c_value));
    __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj269=come_value_300->type;
    come_value_300->type=(struct sType*)come_increment_ref_count(sType_clone(value2_value_297->type));
    /* a*/come_call_finalizer3(__dec_obj269,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_300->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_300->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_300));
    __result193__ = (_Bool)1;
    /*i*/come_call_finalizer3(value1_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(value2_value_297,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(value3_value_299,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_300,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result193__;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value433 = (void*)0;
struct sNode* node_301;
void* __right_value434 = (void*)0;
struct sNode* right_302;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct sNode* _inf_value2;
struct sMultNode* _inf_obj_value2;
void* __right_value441 = (void*)0;
struct sNode* __result196__;
void* __right_value442 = (void*)0;
struct sNode* right_304;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sNode* _inf_value3;
struct sDivNode* _inf_obj_value3;
void* __right_value449 = (void*)0;
struct sNode* __result199__;
void* __right_value450 = (void*)0;
struct sNode* right_306;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct sNode* _inf_value4;
struct sModNode* _inf_obj_value4;
void* __right_value457 = (void*)0;
struct sNode* __result202__;
void* __right_value458 = (void*)0;
struct sNode* right_308;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sNode* _inf_value5;
struct sMultNode* _inf_obj_value5;
void* __right_value465 = (void*)0;
struct sNode* __result205__;
void* __right_value466 = (void*)0;
struct sNode* right_310;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct sNode* _inf_value6;
struct sDivNode* _inf_obj_value6;
void* __right_value473 = (void*)0;
struct sNode* __result208__;
void* __right_value474 = (void*)0;
struct sNode* right_312;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sNode* _inf_value7;
struct sModNode* _inf_obj_value7;
void* __right_value481 = (void*)0;
struct sNode* __result211__;
struct sNode* __result212__;
    node_301=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(!node_301->terminated(node_301->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            right_302=(struct sNode*)come_increment_ref_count(mult_exp(info));
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1599, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sMultNode*)(__right_value436=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1599, "sMultNode")),(struct sNode*)come_increment_ref_count(node_301),(struct sNode*)come_increment_ref_count(right_302),(_Bool)0,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMultNode_finalize;
            _inf_value2->clone=(void*)sMultNode_clone;
            _inf_value2->compile=(void*)sMultNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sMultNode_kind;
            __result196__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value441=_inf_value2));
            if(right_302) { right_302 = come_decrement_ref_count2(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_301) { node_301 = come_decrement_ref_count2(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value436,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value441) { __right_value441 = come_decrement_ref_count2(__right_value441, ((struct sNode*)__right_value441)->finalize, ((struct sNode*)__right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result196__;
            if(right_302) { right_302 = come_decrement_ref_count2(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==47&&*(info->p+1)!=61) {
                info->p++;
                skip_spaces_and_lf(info);
                right_304=(struct sNode*)come_increment_ref_count(mult_exp(info));
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1607, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sDivNode*)(__right_value444=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1607, "sDivNode")),(struct sNode*)come_increment_ref_count(node_301),(struct sNode*)come_increment_ref_count(right_304),(_Bool)0,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sDivNode_finalize;
                _inf_value3->clone=(void*)sDivNode_clone;
                _inf_value3->compile=(void*)sDivNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sDivNode_kind;
                __result199__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value449=_inf_value3));
                if(right_304) { right_304 = come_decrement_ref_count2(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_301) { node_301 = come_decrement_ref_count2(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*g*/come_call_finalizer3(__right_value444,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value449) { __right_value449 = come_decrement_ref_count2(__right_value449, ((struct sNode*)__right_value449)->finalize, ((struct sNode*)__right_value449)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result199__;
                if(right_304) { right_304 = come_decrement_ref_count2(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(*info->p==37&&*(info->p+1)!=61) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_306=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1615, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sModNode*)(__right_value452=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1615, "sModNode")),(struct sNode*)come_increment_ref_count(node_301),(struct sNode*)come_increment_ref_count(right_306),(_Bool)0,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sModNode_finalize;
                    _inf_value4->clone=(void*)sModNode_clone;
                    _inf_value4->compile=(void*)sModNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sNodeBase_terminated;
                    _inf_value4->kind=(void*)sModNode_kind;
                    __result202__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value457=_inf_value4));
                    if(right_306) { right_306 = come_decrement_ref_count2(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_301) { node_301 = come_decrement_ref_count2(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*g*/come_call_finalizer3(__right_value452,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value457) { __right_value457 = come_decrement_ref_count2(__right_value457, ((struct sNode*)__right_value457)->finalize, ((struct sNode*)__right_value457)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    gComeFunResultObject = (void*)0;
                    return __result202__;
                    if(right_306) { right_306 = come_decrement_ref_count2(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(!node_301->terminated(node_301->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_308=(struct sNode*)come_increment_ref_count(mult_exp(info));
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1623, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sMultNode*)(__right_value460=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1623, "sMultNode")),(struct sNode*)come_increment_ref_count(node_301),(struct sNode*)come_increment_ref_count(right_308),(_Bool)1,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sMultNode_finalize;
                        _inf_value5->clone=(void*)sMultNode_clone;
                        _inf_value5->compile=(void*)sMultNode_compile;
                        _inf_value5->sline=(void*)sNodeBase_sline;
                        _inf_value5->sname=(void*)sNodeBase_sname;
                        _inf_value5->terminated=(void*)sNodeBase_terminated;
                        _inf_value5->kind=(void*)sMultNode_kind;
                        __result205__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value465=_inf_value5));
                        if(right_308) { right_308 = come_decrement_ref_count2(right_308, ((struct sNode*)right_308)->finalize, ((struct sNode*)right_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_301) { node_301 = come_decrement_ref_count2(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*g*/come_call_finalizer3(__right_value460,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(__right_value465) { __right_value465 = come_decrement_ref_count2(__right_value465, ((struct sNode*)__right_value465)->finalize, ((struct sNode*)__right_value465)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        gComeFunResultObject = (void*)0;
                        return __result205__;
                        if(right_308) { right_308 = come_decrement_ref_count2(right_308, ((struct sNode*)right_308)->finalize, ((struct sNode*)right_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(*info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61) {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            right_310=(struct sNode*)come_increment_ref_count(mult_exp(info));
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1631, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sDivNode*)(__right_value468=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1631, "sDivNode")),(struct sNode*)come_increment_ref_count(node_301),(struct sNode*)come_increment_ref_count(right_310),(_Bool)1,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sDivNode_finalize;
                            _inf_value6->clone=(void*)sDivNode_clone;
                            _inf_value6->compile=(void*)sDivNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sNodeBase_terminated;
                            _inf_value6->kind=(void*)sDivNode_kind;
                            __result208__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value473=_inf_value6));
                            if(right_310) { right_310 = come_decrement_ref_count2(right_310, ((struct sNode*)right_310)->finalize, ((struct sNode*)right_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_301) { node_301 = come_decrement_ref_count2(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*g*/come_call_finalizer3(__right_value468,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value473) { __right_value473 = come_decrement_ref_count2(__right_value473, ((struct sNode*)__right_value473)->finalize, ((struct sNode*)__right_value473)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result208__;
                            if(right_310) { right_310 = come_decrement_ref_count2(right_310, ((struct sNode*)right_310)->finalize, ((struct sNode*)right_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(*info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                                right_312=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1639, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sModNode*)(__right_value476=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1639, "sModNode")),(struct sNode*)come_increment_ref_count(node_301),(struct sNode*)come_increment_ref_count(right_312),(_Bool)1,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sModNode_finalize;
                                _inf_value7->clone=(void*)sModNode_clone;
                                _inf_value7->compile=(void*)sModNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sNodeBase_terminated;
                                _inf_value7->kind=(void*)sModNode_kind;
                                __result211__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value481=_inf_value7));
                                if(right_312) { right_312 = come_decrement_ref_count2(right_312, ((struct sNode*)right_312)->finalize, ((struct sNode*)right_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_301) { node_301 = come_decrement_ref_count2(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*g*/come_call_finalizer3(__right_value476,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(__right_value481) { __right_value481 = come_decrement_ref_count2(__right_value481, ((struct sNode*)__right_value481)->finalize, ((struct sNode*)__right_value481)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                gComeFunResultObject = (void*)0;
                                return __result211__;
                                if(right_312) { right_312 = come_decrement_ref_count2(right_312, ((struct sNode*)right_312)->finalize, ((struct sNode*)right_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    parse_sharp_v5(info);
    __result212__ = gComeFunResultObject = __result_obj__ = node_301;
    if(node_301) { node_301 = come_decrement_ref_count2(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static void sMultNode_finalize(struct sMultNode* self){
char* __dec_obj288;
struct sNode* __dec_obj289;
struct sNode* __dec_obj290;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj288=self->sname;
            __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj289=self->mLeft;
            if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj290=self->mRight;
            if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__=(void*)0;
struct sMultNode* __result203__;
void* __right_value461 = (void*)0;
struct sMultNode* result_309;
void* __right_value462 = (void*)0;
char* __dec_obj291;
void* __right_value463 = (void*)0;
struct sNode* __dec_obj292;
void* __right_value464 = (void*)0;
struct sNode* __dec_obj293;
struct sMultNode* __result204__;
    if(self==(void*)0) {
        __result203__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    result_309=(struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "sMultNode"));
    if(self!=((void*)0)) {
        result_309->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj291=result_309->sname;
        result_309->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_309->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj292=result_309->mLeft;
        result_309->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj293=result_309->mRight;
        result_309->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result204__ = gComeFunResultObject = __result_obj__ = result_309;
    /*i*/come_call_finalizer3(result_309,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static void sDivNode_finalize(struct sDivNode* self){
char* __dec_obj294;
struct sNode* __dec_obj295;
struct sNode* __dec_obj296;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj294=self->sname;
            __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj295=self->mLeft;
            if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj296=self->mRight;
            if(__dec_obj296) { __dec_obj296 = come_decrement_ref_count2(__dec_obj296, ((struct sNode*)__dec_obj296)->finalize, ((struct sNode*)__dec_obj296)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__=(void*)0;
struct sDivNode* __result206__;
void* __right_value469 = (void*)0;
struct sDivNode* result_311;
void* __right_value470 = (void*)0;
char* __dec_obj297;
void* __right_value471 = (void*)0;
struct sNode* __dec_obj298;
void* __right_value472 = (void*)0;
struct sNode* __dec_obj299;
struct sDivNode* __result207__;
    if(self==(void*)0) {
        __result206__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    result_311=(struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "sDivNode"));
    if(self!=((void*)0)) {
        result_311->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj297=result_311->sname;
        result_311->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_311->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj298=result_311->mLeft;
        result_311->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj299=result_311->mRight;
        result_311->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result207__ = gComeFunResultObject = __result_obj__ = result_311;
    /*i*/come_call_finalizer3(result_311,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static void sModNode_finalize(struct sModNode* self){
char* __dec_obj300;
struct sNode* __dec_obj301;
struct sNode* __dec_obj302;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj300=self->sname;
            __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj301=self->mLeft;
            if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj302=self->mRight;
            if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__=(void*)0;
struct sModNode* __result209__;
void* __right_value477 = (void*)0;
struct sModNode* result_313;
void* __right_value478 = (void*)0;
char* __dec_obj303;
void* __right_value479 = (void*)0;
struct sNode* __dec_obj304;
void* __right_value480 = (void*)0;
struct sNode* __dec_obj305;
struct sModNode* __result210__;
    if(self==(void*)0) {
        __result209__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    result_313=(struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "sModNode"));
    if(self!=((void*)0)) {
        result_313->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj303=result_313->sname;
        result_313->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_313->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj304=result_313->mLeft;
        result_313->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj304) { __dec_obj304 = come_decrement_ref_count2(__dec_obj304, ((struct sNode*)__dec_obj304)->finalize, ((struct sNode*)__dec_obj304)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj305=result_313->mRight;
        result_313->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj305) { __dec_obj305 = come_decrement_ref_count2(__dec_obj305, ((struct sNode*)__dec_obj305)->finalize, ((struct sNode*)__dec_obj305)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result210__ = gComeFunResultObject = __result_obj__ = result_313;
    /*i*/come_call_finalizer3(result_313,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value482 = (void*)0;
struct sNode* node_314;
void* __right_value483 = (void*)0;
struct sNode* right_315;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sNode* _inf_value8;
struct sAddNode* _inf_obj_value8;
void* __right_value490 = (void*)0;
struct sNode* __result215__;
void* __right_value491 = (void*)0;
struct sNode* right_317;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sNode* _inf_value9;
struct sSubNode* _inf_obj_value9;
void* __right_value498 = (void*)0;
struct sNode* __result218__;
void* __right_value499 = (void*)0;
struct sNode* right_319;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sNode* _inf_value10;
struct sAddNode* _inf_obj_value10;
void* __right_value506 = (void*)0;
struct sNode* __result221__;
void* __right_value507 = (void*)0;
struct sNode* right_321;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sNode* _inf_value11;
struct sSubNode* _inf_obj_value11;
void* __right_value514 = (void*)0;
struct sNode* __result224__;
struct sNode* __result225__;
    node_314=(struct sNode*)come_increment_ref_count(mult_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43) {
            info->p++;
            skip_spaces_and_lf(info);
            right_315=(struct sNode*)come_increment_ref_count(add_exp(info));
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1665, "struct sNode");
            _inf_obj_value8=come_increment_ref_count(((struct sAddNode*)(__right_value485=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1665, "sAddNode")),(struct sNode*)come_increment_ref_count(node_314),(struct sNode*)come_increment_ref_count(right_315),(_Bool)0,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sAddNode_finalize;
            _inf_value8->clone=(void*)sAddNode_clone;
            _inf_value8->compile=(void*)sAddNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sAddNode_kind;
            __result215__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value490=_inf_value8));
            if(right_315) { right_315 = come_decrement_ref_count2(right_315, ((struct sNode*)right_315)->finalize, ((struct sNode*)right_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value485,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value490) { __right_value490 = come_decrement_ref_count2(__right_value490, ((struct sNode*)__right_value490)->finalize, ((struct sNode*)__right_value490)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result215__;
            if(right_315) { right_315 = come_decrement_ref_count2(right_315, ((struct sNode*)right_315)->finalize, ((struct sNode*)right_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                right_317=(struct sNode*)come_increment_ref_count(add_exp(info));
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1674, "struct sNode");
                _inf_obj_value9=come_increment_ref_count(((struct sSubNode*)(__right_value493=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1674, "sSubNode")),(struct sNode*)come_increment_ref_count(node_314),(struct sNode*)come_increment_ref_count(right_317),(_Bool)0,info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sSubNode_finalize;
                _inf_value9->clone=(void*)sSubNode_clone;
                _inf_value9->compile=(void*)sSubNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sSubNode_kind;
                __result218__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value498=_inf_value9));
                if(right_317) { right_317 = come_decrement_ref_count2(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*g*/come_call_finalizer3(__right_value493,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value498) { __right_value498 = come_decrement_ref_count2(__right_value498, ((struct sNode*)__right_value498)->finalize, ((struct sNode*)__right_value498)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result218__;
                if(right_317) { right_317 = come_decrement_ref_count2(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(*info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    right_319=(struct sNode*)come_increment_ref_count(add_exp(info));
                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1683, "struct sNode");
                    _inf_obj_value10=come_increment_ref_count(((struct sAddNode*)(__right_value501=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1683, "sAddNode")),(struct sNode*)come_increment_ref_count(node_314),(struct sNode*)come_increment_ref_count(right_319),(_Bool)1,info))));
                    _inf_value10->_protocol_obj=_inf_obj_value10;
                    _inf_value10->finalize=(void*)sAddNode_finalize;
                    _inf_value10->clone=(void*)sAddNode_clone;
                    _inf_value10->compile=(void*)sAddNode_compile;
                    _inf_value10->sline=(void*)sNodeBase_sline;
                    _inf_value10->sname=(void*)sNodeBase_sname;
                    _inf_value10->terminated=(void*)sNodeBase_terminated;
                    _inf_value10->kind=(void*)sAddNode_kind;
                    __result221__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value506=_inf_value10));
                    if(right_319) { right_319 = come_decrement_ref_count2(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*g*/come_call_finalizer3(__right_value501,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value506) { __right_value506 = come_decrement_ref_count2(__right_value506, ((struct sNode*)__right_value506)->finalize, ((struct sNode*)__right_value506)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    gComeFunResultObject = (void*)0;
                    return __result221__;
                    if(right_319) { right_319 = come_decrement_ref_count2(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(*info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_321=(struct sNode*)come_increment_ref_count(add_exp(info));
                        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1692, "struct sNode");
                        _inf_obj_value11=come_increment_ref_count(((struct sSubNode*)(__right_value509=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1692, "sSubNode")),(struct sNode*)come_increment_ref_count(node_314),(struct sNode*)come_increment_ref_count(right_321),(_Bool)1,info))));
                        _inf_value11->_protocol_obj=_inf_obj_value11;
                        _inf_value11->finalize=(void*)sSubNode_finalize;
                        _inf_value11->clone=(void*)sSubNode_clone;
                        _inf_value11->compile=(void*)sSubNode_compile;
                        _inf_value11->sline=(void*)sNodeBase_sline;
                        _inf_value11->sname=(void*)sNodeBase_sname;
                        _inf_value11->terminated=(void*)sNodeBase_terminated;
                        _inf_value11->kind=(void*)sSubNode_kind;
                        __result224__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value514=_inf_value11));
                        if(right_321) { right_321 = come_decrement_ref_count2(right_321, ((struct sNode*)right_321)->finalize, ((struct sNode*)right_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*g*/come_call_finalizer3(__right_value509,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(__right_value514) { __right_value514 = come_decrement_ref_count2(__right_value514, ((struct sNode*)__right_value514)->finalize, ((struct sNode*)__right_value514)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        gComeFunResultObject = (void*)0;
                        return __result224__;
                        if(right_321) { right_321 = come_decrement_ref_count2(right_321, ((struct sNode*)right_321)->finalize, ((struct sNode*)right_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result225__ = gComeFunResultObject = __result_obj__ = node_314;
    if(node_314) { node_314 = come_decrement_ref_count2(node_314, ((struct sNode*)node_314)->finalize, ((struct sNode*)node_314)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static void sAddNode_finalize(struct sAddNode* self){
char* __dec_obj318;
struct sNode* __dec_obj319;
struct sNode* __dec_obj320;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj318=self->sname;
            __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj319=self->mLeft;
            if(__dec_obj319) { __dec_obj319 = come_decrement_ref_count2(__dec_obj319, ((struct sNode*)__dec_obj319)->finalize, ((struct sNode*)__dec_obj319)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj320=self->mRight;
            if(__dec_obj320) { __dec_obj320 = come_decrement_ref_count2(__dec_obj320, ((struct sNode*)__dec_obj320)->finalize, ((struct sNode*)__dec_obj320)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__=(void*)0;
struct sAddNode* __result219__;
void* __right_value502 = (void*)0;
struct sAddNode* result_320;
void* __right_value503 = (void*)0;
char* __dec_obj321;
void* __right_value504 = (void*)0;
struct sNode* __dec_obj322;
void* __right_value505 = (void*)0;
struct sNode* __dec_obj323;
struct sAddNode* __result220__;
    if(self==(void*)0) {
        __result219__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    result_320=(struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "sAddNode"));
    if(self!=((void*)0)) {
        result_320->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj321=result_320->sname;
        result_320->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj322=result_320->mLeft;
        result_320->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj322) { __dec_obj322 = come_decrement_ref_count2(__dec_obj322, ((struct sNode*)__dec_obj322)->finalize, ((struct sNode*)__dec_obj322)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj323=result_320->mRight;
        result_320->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj323) { __dec_obj323 = come_decrement_ref_count2(__dec_obj323, ((struct sNode*)__dec_obj323)->finalize, ((struct sNode*)__dec_obj323)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_320->mQuote=self->mQuote;
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_320;
    /*i*/come_call_finalizer3(result_320,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static void sSubNode_finalize(struct sSubNode* self){
char* __dec_obj324;
struct sNode* __dec_obj325;
struct sNode* __dec_obj326;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj324=self->sname;
            __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj325=self->mLeft;
            if(__dec_obj325) { __dec_obj325 = come_decrement_ref_count2(__dec_obj325, ((struct sNode*)__dec_obj325)->finalize, ((struct sNode*)__dec_obj325)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj326=self->mRight;
            if(__dec_obj326) { __dec_obj326 = come_decrement_ref_count2(__dec_obj326, ((struct sNode*)__dec_obj326)->finalize, ((struct sNode*)__dec_obj326)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__=(void*)0;
struct sSubNode* __result222__;
void* __right_value510 = (void*)0;
struct sSubNode* result_322;
void* __right_value511 = (void*)0;
char* __dec_obj327;
void* __right_value512 = (void*)0;
struct sNode* __dec_obj328;
void* __right_value513 = (void*)0;
struct sNode* __dec_obj329;
struct sSubNode* __result223__;
    if(self==(void*)0) {
        __result222__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result222__;
    }
    result_322=(struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "sSubNode"));
    if(self!=((void*)0)) {
        result_322->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj327=result_322->sname;
        result_322->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj328=result_322->mLeft;
        result_322->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj328) { __dec_obj328 = come_decrement_ref_count2(__dec_obj328, ((struct sNode*)__dec_obj328)->finalize, ((struct sNode*)__dec_obj328)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj329=result_322->mRight;
        result_322->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj329) { __dec_obj329 = come_decrement_ref_count2(__dec_obj329, ((struct sNode*)__dec_obj329)->finalize, ((struct sNode*)__dec_obj329)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_322->mQuote=self->mQuote;
    }
    __result223__ = gComeFunResultObject = __result_obj__ = result_322;
    /*i*/come_call_finalizer3(result_322,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value515 = (void*)0;
struct sNode* node_323;
void* __right_value516 = (void*)0;
struct sNode* right_324;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sNode* _inf_value12;
struct sLShiftNode* _inf_obj_value12;
void* __right_value523 = (void*)0;
struct sNode* __result228__;
void* __right_value524 = (void*)0;
struct sNode* right_326;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sNode* _inf_value13;
struct sRShiftNode* _inf_obj_value13;
void* __right_value531 = (void*)0;
struct sNode* __result231__;
void* __right_value532 = (void*)0;
struct sNode* right_328;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sNode* _inf_value14;
struct sLShiftNode* _inf_obj_value14;
void* __right_value539 = (void*)0;
struct sNode* __result234__;
void* __right_value540 = (void*)0;
struct sNode* right_330;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sNode* _inf_value15;
struct sRShiftNode* _inf_obj_value15;
void* __right_value547 = (void*)0;
struct sNode* __result237__;
struct sNode* __result238__;
    parse_sharp_v5(info);
    node_323=(struct sNode*)come_increment_ref_count(add_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_324=(struct sNode*)come_increment_ref_count(shift_exp(info));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1719, "struct sNode");
            _inf_obj_value12=come_increment_ref_count(((struct sLShiftNode*)(__right_value518=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1719, "sLShiftNode")),(struct sNode*)come_increment_ref_count(node_323),(struct sNode*)come_increment_ref_count(right_324),(_Bool)0,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sLShiftNode_finalize;
            _inf_value12->clone=(void*)sLShiftNode_clone;
            _inf_value12->compile=(void*)sLShiftNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sLShiftNode_kind;
            __result228__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value523=_inf_value12));
            if(right_324) { right_324 = come_decrement_ref_count2(right_324, ((struct sNode*)right_324)->finalize, ((struct sNode*)right_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_323) { node_323 = come_decrement_ref_count2(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value518,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value523) { __right_value523 = come_decrement_ref_count2(__right_value523, ((struct sNode*)__right_value523)->finalize, ((struct sNode*)__right_value523)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result228__;
            if(right_324) { right_324 = come_decrement_ref_count2(right_324, ((struct sNode*)right_324)->finalize, ((struct sNode*)right_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_326=(struct sNode*)come_increment_ref_count(shift_exp(info));
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1727, "struct sNode");
                _inf_obj_value13=come_increment_ref_count(((struct sRShiftNode*)(__right_value526=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1727, "sRShiftNode")),(struct sNode*)come_increment_ref_count(node_323),(struct sNode*)come_increment_ref_count(right_326),(_Bool)0,info))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sRShiftNode_finalize;
                _inf_value13->clone=(void*)sRShiftNode_clone;
                _inf_value13->compile=(void*)sRShiftNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sRShiftNode_kind;
                __result231__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value531=_inf_value13));
                if(right_326) { right_326 = come_decrement_ref_count2(right_326, ((struct sNode*)right_326)->finalize, ((struct sNode*)right_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_323) { node_323 = come_decrement_ref_count2(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*g*/come_call_finalizer3(__right_value526,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value531) { __right_value531 = come_decrement_ref_count2(__right_value531, ((struct sNode*)__right_value531)->finalize, ((struct sNode*)__right_value531)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result231__;
                if(right_326) { right_326 = come_decrement_ref_count2(right_326, ((struct sNode*)right_326)->finalize, ((struct sNode*)right_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_328=(struct sNode*)come_increment_ref_count(shift_exp(info));
                    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1735, "struct sNode");
                    _inf_obj_value14=come_increment_ref_count(((struct sLShiftNode*)(__right_value534=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1735, "sLShiftNode")),(struct sNode*)come_increment_ref_count(node_323),(struct sNode*)come_increment_ref_count(right_328),(_Bool)1,info))));
                    _inf_value14->_protocol_obj=_inf_obj_value14;
                    _inf_value14->finalize=(void*)sLShiftNode_finalize;
                    _inf_value14->clone=(void*)sLShiftNode_clone;
                    _inf_value14->compile=(void*)sLShiftNode_compile;
                    _inf_value14->sline=(void*)sNodeBase_sline;
                    _inf_value14->sname=(void*)sNodeBase_sname;
                    _inf_value14->terminated=(void*)sNodeBase_terminated;
                    _inf_value14->kind=(void*)sLShiftNode_kind;
                    __result234__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value539=_inf_value14));
                    if(right_328) { right_328 = come_decrement_ref_count2(right_328, ((struct sNode*)right_328)->finalize, ((struct sNode*)right_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_323) { node_323 = come_decrement_ref_count2(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*g*/come_call_finalizer3(__right_value534,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value539) { __right_value539 = come_decrement_ref_count2(__right_value539, ((struct sNode*)__right_value539)->finalize, ((struct sNode*)__right_value539)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    gComeFunResultObject = (void*)0;
                    return __result234__;
                    if(right_328) { right_328 = come_decrement_ref_count2(right_328, ((struct sNode*)right_328)->finalize, ((struct sNode*)right_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62) {
                        info->p+=3;
                        skip_spaces_and_lf(info);
                        right_330=(struct sNode*)come_increment_ref_count(shift_exp(info));
                        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1743, "struct sNode");
                        _inf_obj_value15=come_increment_ref_count(((struct sRShiftNode*)(__right_value542=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1743, "sRShiftNode")),(struct sNode*)come_increment_ref_count(node_323),(struct sNode*)come_increment_ref_count(right_330),(_Bool)1,info))));
                        _inf_value15->_protocol_obj=_inf_obj_value15;
                        _inf_value15->finalize=(void*)sRShiftNode_finalize;
                        _inf_value15->clone=(void*)sRShiftNode_clone;
                        _inf_value15->compile=(void*)sRShiftNode_compile;
                        _inf_value15->sline=(void*)sNodeBase_sline;
                        _inf_value15->sname=(void*)sNodeBase_sname;
                        _inf_value15->terminated=(void*)sNodeBase_terminated;
                        _inf_value15->kind=(void*)sRShiftNode_kind;
                        __result237__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value547=_inf_value15));
                        if(right_330) { right_330 = come_decrement_ref_count2(right_330, ((struct sNode*)right_330)->finalize, ((struct sNode*)right_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_323) { node_323 = come_decrement_ref_count2(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*g*/come_call_finalizer3(__right_value542,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(__right_value547) { __right_value547 = come_decrement_ref_count2(__right_value547, ((struct sNode*)__right_value547)->finalize, ((struct sNode*)__right_value547)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        gComeFunResultObject = (void*)0;
                        return __result237__;
                        if(right_330) { right_330 = come_decrement_ref_count2(right_330, ((struct sNode*)right_330)->finalize, ((struct sNode*)right_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result238__ = gComeFunResultObject = __result_obj__ = node_323;
    if(node_323) { node_323 = come_decrement_ref_count2(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
char* __dec_obj342;
struct sNode* __dec_obj343;
struct sNode* __dec_obj344;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj342=self->sname;
            __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj343=self->mLeft;
            if(__dec_obj343) { __dec_obj343 = come_decrement_ref_count2(__dec_obj343, ((struct sNode*)__dec_obj343)->finalize, ((struct sNode*)__dec_obj343)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj344=self->mRight;
            if(__dec_obj344) { __dec_obj344 = come_decrement_ref_count2(__dec_obj344, ((struct sNode*)__dec_obj344)->finalize, ((struct sNode*)__dec_obj344)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__=(void*)0;
struct sLShiftNode* __result232__;
void* __right_value535 = (void*)0;
struct sLShiftNode* result_329;
void* __right_value536 = (void*)0;
char* __dec_obj345;
void* __right_value537 = (void*)0;
struct sNode* __dec_obj346;
void* __right_value538 = (void*)0;
struct sNode* __dec_obj347;
struct sLShiftNode* __result233__;
    if(self==(void*)0) {
        __result232__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_329=(struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "sLShiftNode"));
    if(self!=((void*)0)) {
        result_329->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj345=result_329->sname;
        result_329->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_329->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj346=result_329->mLeft;
        result_329->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj346) { __dec_obj346 = come_decrement_ref_count2(__dec_obj346, ((struct sNode*)__dec_obj346)->finalize, ((struct sNode*)__dec_obj346)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj347=result_329->mRight;
        result_329->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj347) { __dec_obj347 = come_decrement_ref_count2(__dec_obj347, ((struct sNode*)__dec_obj347)->finalize, ((struct sNode*)__dec_obj347)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_329;
    /*i*/come_call_finalizer3(result_329,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
char* __dec_obj348;
struct sNode* __dec_obj349;
struct sNode* __dec_obj350;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj348=self->sname;
            __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj349=self->mLeft;
            if(__dec_obj349) { __dec_obj349 = come_decrement_ref_count2(__dec_obj349, ((struct sNode*)__dec_obj349)->finalize, ((struct sNode*)__dec_obj349)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj350=self->mRight;
            if(__dec_obj350) { __dec_obj350 = come_decrement_ref_count2(__dec_obj350, ((struct sNode*)__dec_obj350)->finalize, ((struct sNode*)__dec_obj350)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__=(void*)0;
struct sRShiftNode* __result235__;
void* __right_value543 = (void*)0;
struct sRShiftNode* result_331;
void* __right_value544 = (void*)0;
char* __dec_obj351;
void* __right_value545 = (void*)0;
struct sNode* __dec_obj352;
void* __right_value546 = (void*)0;
struct sNode* __dec_obj353;
struct sRShiftNode* __result236__;
    if(self==(void*)0) {
        __result235__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_331=(struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "sRShiftNode"));
    if(self!=((void*)0)) {
        result_331->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj351=result_331->sname;
        result_331->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_331->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj352=result_331->mLeft;
        result_331->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj352) { __dec_obj352 = come_decrement_ref_count2(__dec_obj352, ((struct sNode*)__dec_obj352)->finalize, ((struct sNode*)__dec_obj352)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj353=result_331->mRight;
        result_331->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj353) { __dec_obj353 = come_decrement_ref_count2(__dec_obj353, ((struct sNode*)__dec_obj353)->finalize, ((struct sNode*)__dec_obj353)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_331;
    /*i*/come_call_finalizer3(result_331,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value548 = (void*)0;
struct sNode* node_332;
void* __right_value549 = (void*)0;
struct sNode* right_333;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sNode* _inf_value16;
struct sGtEqNode* _inf_obj_value16;
void* __right_value556 = (void*)0;
struct sNode* __result241__;
void* __right_value557 = (void*)0;
struct sNode* right_335;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct sNode* _inf_value17;
struct sLtEqNode* _inf_obj_value17;
void* __right_value564 = (void*)0;
struct sNode* __result244__;
void* __right_value565 = (void*)0;
struct sNode* right_337;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sNode* _inf_value18;
struct sGtNode* _inf_obj_value18;
void* __right_value572 = (void*)0;
struct sNode* __result247__;
void* __right_value573 = (void*)0;
struct sNode* right_339;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sNode* _inf_value19;
struct sLtNode* _inf_obj_value19;
void* __right_value580 = (void*)0;
struct sNode* __result250__;
void* __right_value581 = (void*)0;
struct sNode* right_341;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sNode* _inf_value20;
struct sGtEqNode* _inf_obj_value20;
void* __right_value588 = (void*)0;
struct sNode* __result253__;
void* __right_value589 = (void*)0;
struct sNode* right_343;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sNode* _inf_value21;
struct sLtEqNode* _inf_obj_value21;
void* __right_value596 = (void*)0;
struct sNode* __result256__;
void* __right_value597 = (void*)0;
struct sNode* right_345;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct sNode* _inf_value22;
struct sGtNode* _inf_obj_value22;
void* __right_value604 = (void*)0;
struct sNode* __result259__;
void* __right_value605 = (void*)0;
struct sNode* right_347;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct sNode* _inf_value23;
struct sLtNode* _inf_obj_value23;
void* __right_value612 = (void*)0;
struct sNode* __result262__;
struct sNode* __result263__;
    parse_sharp_v5(info);
    node_332=(struct sNode*)come_increment_ref_count(shift_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==62&&*(info->p+1)==61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_333=(struct sNode*)come_increment_ref_count(shift_exp(info));
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1770, "struct sNode");
            _inf_obj_value16=come_increment_ref_count(((struct sGtEqNode*)(__right_value551=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1770, "sGtEqNode")),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(right_333),(_Bool)0,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sGtEqNode_finalize;
            _inf_value16->clone=(void*)sGtEqNode_clone;
            _inf_value16->compile=(void*)sGtEqNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sGtEqNode_kind;
            __result241__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value556=_inf_value16));
            if(right_333) { right_333 = come_decrement_ref_count2(right_333, ((struct sNode*)right_333)->finalize, ((struct sNode*)right_333)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_332) { node_332 = come_decrement_ref_count2(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value551,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value556) { __right_value556 = come_decrement_ref_count2(__right_value556, ((struct sNode*)__right_value556)->finalize, ((struct sNode*)__right_value556)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result241__;
            if(right_333) { right_333 = come_decrement_ref_count2(right_333, ((struct sNode*)right_333)->finalize, ((struct sNode*)right_333)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==60&&*(info->p+1)==61) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_335=(struct sNode*)come_increment_ref_count(shift_exp(info));
                _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1778, "struct sNode");
                _inf_obj_value17=come_increment_ref_count(((struct sLtEqNode*)(__right_value559=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1778, "sLtEqNode")),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(right_335),(_Bool)0,info))));
                _inf_value17->_protocol_obj=_inf_obj_value17;
                _inf_value17->finalize=(void*)sLtEqNode_finalize;
                _inf_value17->clone=(void*)sLtEqNode_clone;
                _inf_value17->compile=(void*)sLtEqNode_compile;
                _inf_value17->sline=(void*)sNodeBase_sline;
                _inf_value17->sname=(void*)sNodeBase_sname;
                _inf_value17->terminated=(void*)sNodeBase_terminated;
                _inf_value17->kind=(void*)sLtEqNode_kind;
                __result244__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value564=_inf_value17));
                if(right_335) { right_335 = come_decrement_ref_count2(right_335, ((struct sNode*)right_335)->finalize, ((struct sNode*)right_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_332) { node_332 = come_decrement_ref_count2(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*g*/come_call_finalizer3(__right_value559,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value564) { __right_value564 = come_decrement_ref_count2(__right_value564, ((struct sNode*)__right_value564)->finalize, ((struct sNode*)__right_value564)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result244__;
                if(right_335) { right_335 = come_decrement_ref_count2(right_335, ((struct sNode*)right_335)->finalize, ((struct sNode*)right_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(*info->p==62&&*(info->p+1)!=62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_337=(struct sNode*)come_increment_ref_count(shift_exp(info));
                    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1786, "struct sNode");
                    _inf_obj_value18=come_increment_ref_count(((struct sGtNode*)(__right_value567=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1786, "sGtNode")),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(right_337),(_Bool)0,info))));
                    _inf_value18->_protocol_obj=_inf_obj_value18;
                    _inf_value18->finalize=(void*)sGtNode_finalize;
                    _inf_value18->clone=(void*)sGtNode_clone;
                    _inf_value18->compile=(void*)sGtNode_compile;
                    _inf_value18->sline=(void*)sNodeBase_sline;
                    _inf_value18->sname=(void*)sNodeBase_sname;
                    _inf_value18->terminated=(void*)sNodeBase_terminated;
                    _inf_value18->kind=(void*)sGtNode_kind;
                    __result247__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value572=_inf_value18));
                    if(right_337) { right_337 = come_decrement_ref_count2(right_337, ((struct sNode*)right_337)->finalize, ((struct sNode*)right_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_332) { node_332 = come_decrement_ref_count2(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*g*/come_call_finalizer3(__right_value567,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value572) { __right_value572 = come_decrement_ref_count2(__right_value572, ((struct sNode*)__right_value572)->finalize, ((struct sNode*)__right_value572)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    gComeFunResultObject = (void*)0;
                    return __result247__;
                    if(right_337) { right_337 = come_decrement_ref_count2(right_337, ((struct sNode*)right_337)->finalize, ((struct sNode*)right_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(*info->p==60&&*(info->p+1)!=60) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        right_339=(struct sNode*)come_increment_ref_count(shift_exp(info));
                        _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1794, "struct sNode");
                        _inf_obj_value19=come_increment_ref_count(((struct sLtNode*)(__right_value575=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1794, "sLtNode")),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(right_339),(_Bool)0,info))));
                        _inf_value19->_protocol_obj=_inf_obj_value19;
                        _inf_value19->finalize=(void*)sLtNode_finalize;
                        _inf_value19->clone=(void*)sLtNode_clone;
                        _inf_value19->compile=(void*)sLtNode_compile;
                        _inf_value19->sline=(void*)sNodeBase_sline;
                        _inf_value19->sname=(void*)sNodeBase_sname;
                        _inf_value19->terminated=(void*)sNodeBase_terminated;
                        _inf_value19->kind=(void*)sLtNode_kind;
                        __result250__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value580=_inf_value19));
                        if(right_339) { right_339 = come_decrement_ref_count2(right_339, ((struct sNode*)right_339)->finalize, ((struct sNode*)right_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_332) { node_332 = come_decrement_ref_count2(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*g*/come_call_finalizer3(__right_value575,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(__right_value580) { __right_value580 = come_decrement_ref_count2(__right_value580, ((struct sNode*)__right_value580)->finalize, ((struct sNode*)__right_value580)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        gComeFunResultObject = (void*)0;
                        return __result250__;
                        if(right_339) { right_339 = come_decrement_ref_count2(right_339, ((struct sNode*)right_339)->finalize, ((struct sNode*)right_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(*info->p==92&&*(info->p+1)==62&&*(info->p+2)==61) {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            right_341=(struct sNode*)come_increment_ref_count(shift_exp(info));
                            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1802, "struct sNode");
                            _inf_obj_value20=come_increment_ref_count(((struct sGtEqNode*)(__right_value583=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1802, "sGtEqNode")),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(right_341),(_Bool)1,info))));
                            _inf_value20->_protocol_obj=_inf_obj_value20;
                            _inf_value20->finalize=(void*)sGtEqNode_finalize;
                            _inf_value20->clone=(void*)sGtEqNode_clone;
                            _inf_value20->compile=(void*)sGtEqNode_compile;
                            _inf_value20->sline=(void*)sNodeBase_sline;
                            _inf_value20->sname=(void*)sNodeBase_sname;
                            _inf_value20->terminated=(void*)sNodeBase_terminated;
                            _inf_value20->kind=(void*)sGtEqNode_kind;
                            __result253__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value588=_inf_value20));
                            if(right_341) { right_341 = come_decrement_ref_count2(right_341, ((struct sNode*)right_341)->finalize, ((struct sNode*)right_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_332) { node_332 = come_decrement_ref_count2(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*g*/come_call_finalizer3(__right_value583,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value588) { __right_value588 = come_decrement_ref_count2(__right_value588, ((struct sNode*)__right_value588)->finalize, ((struct sNode*)__right_value588)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result253__;
                            if(right_341) { right_341 = come_decrement_ref_count2(right_341, ((struct sNode*)right_341)->finalize, ((struct sNode*)right_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(*info->p==92&&*(info->p+1)==60&&*(info->p+2)==61) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_343=(struct sNode*)come_increment_ref_count(shift_exp(info));
                                _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1810, "struct sNode");
                                _inf_obj_value21=come_increment_ref_count(((struct sLtEqNode*)(__right_value591=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1810, "sLtEqNode")),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(right_343),(_Bool)1,info))));
                                _inf_value21->_protocol_obj=_inf_obj_value21;
                                _inf_value21->finalize=(void*)sLtEqNode_finalize;
                                _inf_value21->clone=(void*)sLtEqNode_clone;
                                _inf_value21->compile=(void*)sLtEqNode_compile;
                                _inf_value21->sline=(void*)sNodeBase_sline;
                                _inf_value21->sname=(void*)sNodeBase_sname;
                                _inf_value21->terminated=(void*)sNodeBase_terminated;
                                _inf_value21->kind=(void*)sLtEqNode_kind;
                                __result256__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value596=_inf_value21));
                                if(right_343) { right_343 = come_decrement_ref_count2(right_343, ((struct sNode*)right_343)->finalize, ((struct sNode*)right_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_332) { node_332 = come_decrement_ref_count2(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*g*/come_call_finalizer3(__right_value591,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(__right_value596) { __right_value596 = come_decrement_ref_count2(__right_value596, ((struct sNode*)__right_value596)->finalize, ((struct sNode*)__right_value596)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                gComeFunResultObject = (void*)0;
                                return __result256__;
                                if(right_343) { right_343 = come_decrement_ref_count2(right_343, ((struct sNode*)right_343)->finalize, ((struct sNode*)right_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(*info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62) {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    right_345=(struct sNode*)come_increment_ref_count(shift_exp(info));
                                    _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1818, "struct sNode");
                                    _inf_obj_value22=come_increment_ref_count(((struct sGtNode*)(__right_value599=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1818, "sGtNode")),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(right_345),(_Bool)1,info))));
                                    _inf_value22->_protocol_obj=_inf_obj_value22;
                                    _inf_value22->finalize=(void*)sGtNode_finalize;
                                    _inf_value22->clone=(void*)sGtNode_clone;
                                    _inf_value22->compile=(void*)sGtNode_compile;
                                    _inf_value22->sline=(void*)sNodeBase_sline;
                                    _inf_value22->sname=(void*)sNodeBase_sname;
                                    _inf_value22->terminated=(void*)sNodeBase_terminated;
                                    _inf_value22->kind=(void*)sGtNode_kind;
                                    __result259__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value604=_inf_value22));
                                    if(right_345) { right_345 = come_decrement_ref_count2(right_345, ((struct sNode*)right_345)->finalize, ((struct sNode*)right_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_332) { node_332 = come_decrement_ref_count2(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    /*g*/come_call_finalizer3(__right_value599,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(__right_value604) { __right_value604 = come_decrement_ref_count2(__right_value604, ((struct sNode*)__right_value604)->finalize, ((struct sNode*)__right_value604)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    gComeFunResultObject = (void*)0;
                                    return __result259__;
                                    if(right_345) { right_345 = come_decrement_ref_count2(right_345, ((struct sNode*)right_345)->finalize, ((struct sNode*)right_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(*info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60) {
                                        info->p+=2;
                                        skip_spaces_and_lf(info);
                                        right_347=(struct sNode*)come_increment_ref_count(shift_exp(info));
                                        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1826, "struct sNode");
                                        _inf_obj_value23=come_increment_ref_count(((struct sLtNode*)(__right_value607=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1826, "sLtNode")),(struct sNode*)come_increment_ref_count(node_332),(struct sNode*)come_increment_ref_count(right_347),(_Bool)1,info))));
                                        _inf_value23->_protocol_obj=_inf_obj_value23;
                                        _inf_value23->finalize=(void*)sLtNode_finalize;
                                        _inf_value23->clone=(void*)sLtNode_clone;
                                        _inf_value23->compile=(void*)sLtNode_compile;
                                        _inf_value23->sline=(void*)sNodeBase_sline;
                                        _inf_value23->sname=(void*)sNodeBase_sname;
                                        _inf_value23->terminated=(void*)sNodeBase_terminated;
                                        _inf_value23->kind=(void*)sLtNode_kind;
                                        __result262__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value612=_inf_value23));
                                        if(right_347) { right_347 = come_decrement_ref_count2(right_347, ((struct sNode*)right_347)->finalize, ((struct sNode*)right_347)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_332) { node_332 = come_decrement_ref_count2(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        /*g*/come_call_finalizer3(__right_value607,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(__right_value612) { __right_value612 = come_decrement_ref_count2(__right_value612, ((struct sNode*)__right_value612)->finalize, ((struct sNode*)__right_value612)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        gComeFunResultObject = (void*)0;
                                        return __result262__;
                                        if(right_347) { right_347 = come_decrement_ref_count2(right_347, ((struct sNode*)right_347)->finalize, ((struct sNode*)right_347)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    parse_sharp_v5(info);
    __result263__ = gComeFunResultObject = __result_obj__ = node_332;
    if(node_332) { node_332 = come_decrement_ref_count2(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
char* __dec_obj378;
struct sNode* __dec_obj379;
struct sNode* __dec_obj380;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj378=self->sname;
            __dec_obj378 = come_decrement_ref_count2(__dec_obj378, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj379=self->mLeft;
            if(__dec_obj379) { __dec_obj379 = come_decrement_ref_count2(__dec_obj379, ((struct sNode*)__dec_obj379)->finalize, ((struct sNode*)__dec_obj379)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj380=self->mRight;
            if(__dec_obj380) { __dec_obj380 = come_decrement_ref_count2(__dec_obj380, ((struct sNode*)__dec_obj380)->finalize, ((struct sNode*)__dec_obj380)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__=(void*)0;
struct sGtEqNode* __result251__;
void* __right_value584 = (void*)0;
struct sGtEqNode* result_342;
void* __right_value585 = (void*)0;
char* __dec_obj381;
void* __right_value586 = (void*)0;
struct sNode* __dec_obj382;
void* __right_value587 = (void*)0;
struct sNode* __dec_obj383;
struct sGtEqNode* __result252__;
    if(self==(void*)0) {
        __result251__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    result_342=(struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "sGtEqNode"));
    if(self!=((void*)0)) {
        result_342->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj381=result_342->sname;
        result_342->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj381 = come_decrement_ref_count2(__dec_obj381, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_342->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj382=result_342->mLeft;
        result_342->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj382) { __dec_obj382 = come_decrement_ref_count2(__dec_obj382, ((struct sNode*)__dec_obj382)->finalize, ((struct sNode*)__dec_obj382)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj383=result_342->mRight;
        result_342->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj383) { __dec_obj383 = come_decrement_ref_count2(__dec_obj383, ((struct sNode*)__dec_obj383)->finalize, ((struct sNode*)__dec_obj383)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result252__ = gComeFunResultObject = __result_obj__ = result_342;
    /*i*/come_call_finalizer3(result_342,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
char* __dec_obj384;
struct sNode* __dec_obj385;
struct sNode* __dec_obj386;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj384=self->sname;
            __dec_obj384 = come_decrement_ref_count2(__dec_obj384, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj385=self->mLeft;
            if(__dec_obj385) { __dec_obj385 = come_decrement_ref_count2(__dec_obj385, ((struct sNode*)__dec_obj385)->finalize, ((struct sNode*)__dec_obj385)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj386=self->mRight;
            if(__dec_obj386) { __dec_obj386 = come_decrement_ref_count2(__dec_obj386, ((struct sNode*)__dec_obj386)->finalize, ((struct sNode*)__dec_obj386)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__=(void*)0;
struct sLtEqNode* __result254__;
void* __right_value592 = (void*)0;
struct sLtEqNode* result_344;
void* __right_value593 = (void*)0;
char* __dec_obj387;
void* __right_value594 = (void*)0;
struct sNode* __dec_obj388;
void* __right_value595 = (void*)0;
struct sNode* __dec_obj389;
struct sLtEqNode* __result255__;
    if(self==(void*)0) {
        __result254__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    result_344=(struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "sLtEqNode"));
    if(self!=((void*)0)) {
        result_344->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj387=result_344->sname;
        result_344->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj387 = come_decrement_ref_count2(__dec_obj387, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_344->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj388=result_344->mLeft;
        result_344->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj388) { __dec_obj388 = come_decrement_ref_count2(__dec_obj388, ((struct sNode*)__dec_obj388)->finalize, ((struct sNode*)__dec_obj388)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj389=result_344->mRight;
        result_344->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj389) { __dec_obj389 = come_decrement_ref_count2(__dec_obj389, ((struct sNode*)__dec_obj389)->finalize, ((struct sNode*)__dec_obj389)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result255__ = gComeFunResultObject = __result_obj__ = result_344;
    /*i*/come_call_finalizer3(result_344,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static void sGtNode_finalize(struct sGtNode* self){
char* __dec_obj390;
struct sNode* __dec_obj391;
struct sNode* __dec_obj392;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj390=self->sname;
            __dec_obj390 = come_decrement_ref_count2(__dec_obj390, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj391=self->mLeft;
            if(__dec_obj391) { __dec_obj391 = come_decrement_ref_count2(__dec_obj391, ((struct sNode*)__dec_obj391)->finalize, ((struct sNode*)__dec_obj391)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj392=self->mRight;
            if(__dec_obj392) { __dec_obj392 = come_decrement_ref_count2(__dec_obj392, ((struct sNode*)__dec_obj392)->finalize, ((struct sNode*)__dec_obj392)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__=(void*)0;
struct sGtNode* __result257__;
void* __right_value600 = (void*)0;
struct sGtNode* result_346;
void* __right_value601 = (void*)0;
char* __dec_obj393;
void* __right_value602 = (void*)0;
struct sNode* __dec_obj394;
void* __right_value603 = (void*)0;
struct sNode* __dec_obj395;
struct sGtNode* __result258__;
    if(self==(void*)0) {
        __result257__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    result_346=(struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "sGtNode"));
    if(self!=((void*)0)) {
        result_346->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj393=result_346->sname;
        result_346->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj393 = come_decrement_ref_count2(__dec_obj393, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_346->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj394=result_346->mLeft;
        result_346->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj394) { __dec_obj394 = come_decrement_ref_count2(__dec_obj394, ((struct sNode*)__dec_obj394)->finalize, ((struct sNode*)__dec_obj394)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj395=result_346->mRight;
        result_346->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj395) { __dec_obj395 = come_decrement_ref_count2(__dec_obj395, ((struct sNode*)__dec_obj395)->finalize, ((struct sNode*)__dec_obj395)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result258__ = gComeFunResultObject = __result_obj__ = result_346;
    /*i*/come_call_finalizer3(result_346,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static void sLtNode_finalize(struct sLtNode* self){
char* __dec_obj396;
struct sNode* __dec_obj397;
struct sNode* __dec_obj398;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj396=self->sname;
            __dec_obj396 = come_decrement_ref_count2(__dec_obj396, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj397=self->mLeft;
            if(__dec_obj397) { __dec_obj397 = come_decrement_ref_count2(__dec_obj397, ((struct sNode*)__dec_obj397)->finalize, ((struct sNode*)__dec_obj397)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj398=self->mRight;
            if(__dec_obj398) { __dec_obj398 = come_decrement_ref_count2(__dec_obj398, ((struct sNode*)__dec_obj398)->finalize, ((struct sNode*)__dec_obj398)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__=(void*)0;
struct sLtNode* __result260__;
void* __right_value608 = (void*)0;
struct sLtNode* result_348;
void* __right_value609 = (void*)0;
char* __dec_obj399;
void* __right_value610 = (void*)0;
struct sNode* __dec_obj400;
void* __right_value611 = (void*)0;
struct sNode* __dec_obj401;
struct sLtNode* __result261__;
    if(self==(void*)0) {
        __result260__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    result_348=(struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "sLtNode"));
    if(self!=((void*)0)) {
        result_348->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj399=result_348->sname;
        result_348->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj399 = come_decrement_ref_count2(__dec_obj399, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_348->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj400=result_348->mLeft;
        result_348->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj400) { __dec_obj400 = come_decrement_ref_count2(__dec_obj400, ((struct sNode*)__dec_obj400)->finalize, ((struct sNode*)__dec_obj400)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj401=result_348->mRight;
        result_348->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj401) { __dec_obj401 = come_decrement_ref_count2(__dec_obj401, ((struct sNode*)__dec_obj401)->finalize, ((struct sNode*)__dec_obj401)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result261__ = gComeFunResultObject = __result_obj__ = result_348;
    /*i*/come_call_finalizer3(result_348,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value613 = (void*)0;
struct sNode* node_349;
void* __right_value614 = (void*)0;
struct sNode* right_350;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sNode* _inf_value24;
struct sEq2Node* _inf_obj_value24;
void* __right_value621 = (void*)0;
struct sNode* __result266__;
void* __right_value622 = (void*)0;
struct sNode* right_352;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sNode* _inf_value25;
struct sEqNode* _inf_obj_value25;
void* __right_value629 = (void*)0;
struct sNode* __result269__;
void* __right_value630 = (void*)0;
struct sNode* right_354;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sNode* _inf_value26;
struct sNotEq2Node* _inf_obj_value26;
void* __right_value637 = (void*)0;
struct sNode* __result272__;
void* __right_value638 = (void*)0;
struct sNode* right_356;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sNode* _inf_value27;
struct sNotEqNode* _inf_obj_value27;
void* __right_value645 = (void*)0;
struct sNode* __result275__;
void* __right_value646 = (void*)0;
struct sNode* right_358;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* _inf_value28;
struct sEq2Node* _inf_obj_value28;
void* __right_value653 = (void*)0;
struct sNode* __result278__;
void* __right_value654 = (void*)0;
struct sNode* right_360;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sNode* _inf_value29;
struct sEqNode* _inf_obj_value29;
void* __right_value661 = (void*)0;
struct sNode* __result281__;
void* __right_value662 = (void*)0;
struct sNode* right_362;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sNode* _inf_value30;
struct sNotEq2Node* _inf_obj_value30;
void* __right_value669 = (void*)0;
struct sNode* __result284__;
void* __right_value670 = (void*)0;
struct sNode* right_364;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct sNode* _inf_value31;
struct sNotEqNode* _inf_obj_value31;
void* __right_value677 = (void*)0;
struct sNode* __result287__;
struct sNode* __result288__;
    parse_sharp_v5(info);
    node_349=(struct sNode*)come_increment_ref_count(comparison_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==61&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_350=(struct sNode*)come_increment_ref_count(eq_exp(info));
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1853, "struct sNode");
            _inf_obj_value24=come_increment_ref_count(((struct sEq2Node*)(__right_value616=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 1853, "sEq2Node")),(struct sNode*)come_increment_ref_count(node_349),(struct sNode*)come_increment_ref_count(right_350),(_Bool)0,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sEq2Node_finalize;
            _inf_value24->clone=(void*)sEq2Node_clone;
            _inf_value24->compile=(void*)sEq2Node_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sEq2Node_kind;
            __result266__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value621=_inf_value24));
            if(right_350) { right_350 = come_decrement_ref_count2(right_350, ((struct sNode*)right_350)->finalize, ((struct sNode*)right_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value616,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value621) { __right_value621 = come_decrement_ref_count2(__right_value621, ((struct sNode*)__right_value621)->finalize, ((struct sNode*)__right_value621)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result266__;
            if(right_350) { right_350 = come_decrement_ref_count2(right_350, ((struct sNode*)right_350)->finalize, ((struct sNode*)right_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==61&&*(info->p+1)==61) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_352=(struct sNode*)come_increment_ref_count(eq_exp(info));
                _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1861, "struct sNode");
                _inf_obj_value25=come_increment_ref_count(((struct sEqNode*)(__right_value624=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 1861, "sEqNode")),(struct sNode*)come_increment_ref_count(node_349),(struct sNode*)come_increment_ref_count(right_352),(_Bool)0,info))));
                _inf_value25->_protocol_obj=_inf_obj_value25;
                _inf_value25->finalize=(void*)sEqNode_finalize;
                _inf_value25->clone=(void*)sEqNode_clone;
                _inf_value25->compile=(void*)sEqNode_compile;
                _inf_value25->sline=(void*)sNodeBase_sline;
                _inf_value25->sname=(void*)sNodeBase_sname;
                _inf_value25->terminated=(void*)sNodeBase_terminated;
                _inf_value25->kind=(void*)sEqNode_kind;
                __result269__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value629=_inf_value25));
                if(right_352) { right_352 = come_decrement_ref_count2(right_352, ((struct sNode*)right_352)->finalize, ((struct sNode*)right_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*g*/come_call_finalizer3(__right_value624,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value629) { __right_value629 = come_decrement_ref_count2(__right_value629, ((struct sNode*)__right_value629)->finalize, ((struct sNode*)__right_value629)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result269__;
                if(right_352) { right_352 = come_decrement_ref_count2(right_352, ((struct sNode*)right_352)->finalize, ((struct sNode*)right_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(*info->p==33&&*(info->p+1)==61&&*(info->p+2)==61) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_354=(struct sNode*)come_increment_ref_count(eq_exp(info));
                    _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1869, "struct sNode");
                    _inf_obj_value26=come_increment_ref_count(((struct sNotEq2Node*)(__right_value632=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1869, "sNotEq2Node")),(struct sNode*)come_increment_ref_count(node_349),(struct sNode*)come_increment_ref_count(right_354),(_Bool)0,info))));
                    _inf_value26->_protocol_obj=_inf_obj_value26;
                    _inf_value26->finalize=(void*)sNotEq2Node_finalize;
                    _inf_value26->clone=(void*)sNotEq2Node_clone;
                    _inf_value26->compile=(void*)sNotEq2Node_compile;
                    _inf_value26->sline=(void*)sNodeBase_sline;
                    _inf_value26->sname=(void*)sNodeBase_sname;
                    _inf_value26->terminated=(void*)sNodeBase_terminated;
                    _inf_value26->kind=(void*)sNotEq2Node_kind;
                    __result272__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value637=_inf_value26));
                    if(right_354) { right_354 = come_decrement_ref_count2(right_354, ((struct sNode*)right_354)->finalize, ((struct sNode*)right_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*g*/come_call_finalizer3(__right_value632,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value637) { __right_value637 = come_decrement_ref_count2(__right_value637, ((struct sNode*)__right_value637)->finalize, ((struct sNode*)__right_value637)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    gComeFunResultObject = (void*)0;
                    return __result272__;
                    if(right_354) { right_354 = come_decrement_ref_count2(right_354, ((struct sNode*)right_354)->finalize, ((struct sNode*)right_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(*info->p==33&&*(info->p+1)==61) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_356=(struct sNode*)come_increment_ref_count(eq_exp(info));
                        _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1877, "struct sNode");
                        _inf_obj_value27=come_increment_ref_count(((struct sNotEqNode*)(__right_value640=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1877, "sNotEqNode")),(struct sNode*)come_increment_ref_count(node_349),(struct sNode*)come_increment_ref_count(right_356),(_Bool)0,info))));
                        _inf_value27->_protocol_obj=_inf_obj_value27;
                        _inf_value27->finalize=(void*)sNotEqNode_finalize;
                        _inf_value27->clone=(void*)sNotEqNode_clone;
                        _inf_value27->compile=(void*)sNotEqNode_compile;
                        _inf_value27->sline=(void*)sNodeBase_sline;
                        _inf_value27->sname=(void*)sNodeBase_sname;
                        _inf_value27->terminated=(void*)sNodeBase_terminated;
                        _inf_value27->kind=(void*)sNotEqNode_kind;
                        __result275__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value645=_inf_value27));
                        if(right_356) { right_356 = come_decrement_ref_count2(right_356, ((struct sNode*)right_356)->finalize, ((struct sNode*)right_356)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*g*/come_call_finalizer3(__right_value640,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(__right_value645) { __right_value645 = come_decrement_ref_count2(__right_value645, ((struct sNode*)__right_value645)->finalize, ((struct sNode*)__right_value645)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        gComeFunResultObject = (void*)0;
                        return __result275__;
                        if(right_356) { right_356 = come_decrement_ref_count2(right_356, ((struct sNode*)right_356)->finalize, ((struct sNode*)right_356)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61) {
                            info->p+=4;
                            skip_spaces_and_lf(info);
                            right_358=(struct sNode*)come_increment_ref_count(eq_exp(info));
                            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1885, "struct sNode");
                            _inf_obj_value28=come_increment_ref_count(((struct sEq2Node*)(__right_value648=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 1885, "sEq2Node")),(struct sNode*)come_increment_ref_count(node_349),(struct sNode*)come_increment_ref_count(right_358),(_Bool)1,info))));
                            _inf_value28->_protocol_obj=_inf_obj_value28;
                            _inf_value28->finalize=(void*)sEq2Node_finalize;
                            _inf_value28->clone=(void*)sEq2Node_clone;
                            _inf_value28->compile=(void*)sEq2Node_compile;
                            _inf_value28->sline=(void*)sNodeBase_sline;
                            _inf_value28->sname=(void*)sNodeBase_sname;
                            _inf_value28->terminated=(void*)sNodeBase_terminated;
                            _inf_value28->kind=(void*)sEq2Node_kind;
                            __result278__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value653=_inf_value28));
                            if(right_358) { right_358 = come_decrement_ref_count2(right_358, ((struct sNode*)right_358)->finalize, ((struct sNode*)right_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*g*/come_call_finalizer3(__right_value648,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value653) { __right_value653 = come_decrement_ref_count2(__right_value653, ((struct sNode*)__right_value653)->finalize, ((struct sNode*)__right_value653)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result278__;
                            if(right_358) { right_358 = come_decrement_ref_count2(right_358, ((struct sNode*)right_358)->finalize, ((struct sNode*)right_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_360=(struct sNode*)come_increment_ref_count(eq_exp(info));
                                _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1893, "struct sNode");
                                _inf_obj_value29=come_increment_ref_count(((struct sEqNode*)(__right_value656=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 1893, "sEqNode")),(struct sNode*)come_increment_ref_count(node_349),(struct sNode*)come_increment_ref_count(right_360),(_Bool)1,info))));
                                _inf_value29->_protocol_obj=_inf_obj_value29;
                                _inf_value29->finalize=(void*)sEqNode_finalize;
                                _inf_value29->clone=(void*)sEqNode_clone;
                                _inf_value29->compile=(void*)sEqNode_compile;
                                _inf_value29->sline=(void*)sNodeBase_sline;
                                _inf_value29->sname=(void*)sNodeBase_sname;
                                _inf_value29->terminated=(void*)sNodeBase_terminated;
                                _inf_value29->kind=(void*)sEqNode_kind;
                                __result281__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value661=_inf_value29));
                                if(right_360) { right_360 = come_decrement_ref_count2(right_360, ((struct sNode*)right_360)->finalize, ((struct sNode*)right_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*g*/come_call_finalizer3(__right_value656,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(__right_value661) { __right_value661 = come_decrement_ref_count2(__right_value661, ((struct sNode*)__right_value661)->finalize, ((struct sNode*)__right_value661)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                gComeFunResultObject = (void*)0;
                                return __result281__;
                                if(right_360) { right_360 = come_decrement_ref_count2(right_360, ((struct sNode*)right_360)->finalize, ((struct sNode*)right_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61) {
                                    info->p+=4;
                                    skip_spaces_and_lf(info);
                                    right_362=(struct sNode*)come_increment_ref_count(eq_exp(info));
                                    _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1901, "struct sNode");
                                    _inf_obj_value30=come_increment_ref_count(((struct sNotEq2Node*)(__right_value664=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1901, "sNotEq2Node")),(struct sNode*)come_increment_ref_count(node_349),(struct sNode*)come_increment_ref_count(right_362),(_Bool)1,info))));
                                    _inf_value30->_protocol_obj=_inf_obj_value30;
                                    _inf_value30->finalize=(void*)sNotEq2Node_finalize;
                                    _inf_value30->clone=(void*)sNotEq2Node_clone;
                                    _inf_value30->compile=(void*)sNotEq2Node_compile;
                                    _inf_value30->sline=(void*)sNodeBase_sline;
                                    _inf_value30->sname=(void*)sNodeBase_sname;
                                    _inf_value30->terminated=(void*)sNodeBase_terminated;
                                    _inf_value30->kind=(void*)sNotEq2Node_kind;
                                    __result284__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value669=_inf_value30));
                                    if(right_362) { right_362 = come_decrement_ref_count2(right_362, ((struct sNode*)right_362)->finalize, ((struct sNode*)right_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    /*g*/come_call_finalizer3(__right_value664,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(__right_value669) { __right_value669 = come_decrement_ref_count2(__right_value669, ((struct sNode*)__right_value669)->finalize, ((struct sNode*)__right_value669)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    gComeFunResultObject = (void*)0;
                                    return __result284__;
                                    if(right_362) { right_362 = come_decrement_ref_count2(right_362, ((struct sNode*)right_362)->finalize, ((struct sNode*)right_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61) {
                                        info->p+=3;
                                        skip_spaces_and_lf(info);
                                        right_364=(struct sNode*)come_increment_ref_count(eq_exp(info));
                                        _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1909, "struct sNode");
                                        _inf_obj_value31=come_increment_ref_count(((struct sNotEqNode*)(__right_value672=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1909, "sNotEqNode")),(struct sNode*)come_increment_ref_count(node_349),(struct sNode*)come_increment_ref_count(right_364),(_Bool)1,info))));
                                        _inf_value31->_protocol_obj=_inf_obj_value31;
                                        _inf_value31->finalize=(void*)sNotEqNode_finalize;
                                        _inf_value31->clone=(void*)sNotEqNode_clone;
                                        _inf_value31->compile=(void*)sNotEqNode_compile;
                                        _inf_value31->sline=(void*)sNodeBase_sline;
                                        _inf_value31->sname=(void*)sNodeBase_sname;
                                        _inf_value31->terminated=(void*)sNodeBase_terminated;
                                        _inf_value31->kind=(void*)sNotEqNode_kind;
                                        __result287__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value677=_inf_value31));
                                        if(right_364) { right_364 = come_decrement_ref_count2(right_364, ((struct sNode*)right_364)->finalize, ((struct sNode*)right_364)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        /*g*/come_call_finalizer3(__right_value672,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(__right_value677) { __right_value677 = come_decrement_ref_count2(__right_value677, ((struct sNode*)__right_value677)->finalize, ((struct sNode*)__right_value677)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        gComeFunResultObject = (void*)0;
                                        return __result287__;
                                        if(right_364) { right_364 = come_decrement_ref_count2(right_364, ((struct sNode*)right_364)->finalize, ((struct sNode*)right_364)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    parse_sharp_v5(info);
    __result288__ = gComeFunResultObject = __result_obj__ = node_349;
    if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static void sEq2Node_finalize(struct sEq2Node* self){
char* __dec_obj426;
struct sNode* __dec_obj427;
struct sNode* __dec_obj428;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj426=self->sname;
            __dec_obj426 = come_decrement_ref_count2(__dec_obj426, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj427=self->mLeft;
            if(__dec_obj427) { __dec_obj427 = come_decrement_ref_count2(__dec_obj427, ((struct sNode*)__dec_obj427)->finalize, ((struct sNode*)__dec_obj427)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj428=self->mRight;
            if(__dec_obj428) { __dec_obj428 = come_decrement_ref_count2(__dec_obj428, ((struct sNode*)__dec_obj428)->finalize, ((struct sNode*)__dec_obj428)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__=(void*)0;
struct sEq2Node* __result276__;
void* __right_value649 = (void*)0;
struct sEq2Node* result_359;
void* __right_value650 = (void*)0;
char* __dec_obj429;
void* __right_value651 = (void*)0;
struct sNode* __dec_obj430;
void* __right_value652 = (void*)0;
struct sNode* __dec_obj431;
struct sEq2Node* __result277__;
    if(self==(void*)0) {
        __result276__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    result_359=(struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "sEq2Node"));
    if(self!=((void*)0)) {
        result_359->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj429=result_359->sname;
        result_359->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj429 = come_decrement_ref_count2(__dec_obj429, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_359->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj430=result_359->mLeft;
        result_359->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj430) { __dec_obj430 = come_decrement_ref_count2(__dec_obj430, ((struct sNode*)__dec_obj430)->finalize, ((struct sNode*)__dec_obj430)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj431=result_359->mRight;
        result_359->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj431) { __dec_obj431 = come_decrement_ref_count2(__dec_obj431, ((struct sNode*)__dec_obj431)->finalize, ((struct sNode*)__dec_obj431)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result277__ = gComeFunResultObject = __result_obj__ = result_359;
    /*i*/come_call_finalizer3(result_359,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static void sEqNode_finalize(struct sEqNode* self){
char* __dec_obj432;
struct sNode* __dec_obj433;
struct sNode* __dec_obj434;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj432=self->sname;
            __dec_obj432 = come_decrement_ref_count2(__dec_obj432, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj433=self->mLeft;
            if(__dec_obj433) { __dec_obj433 = come_decrement_ref_count2(__dec_obj433, ((struct sNode*)__dec_obj433)->finalize, ((struct sNode*)__dec_obj433)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj434=self->mRight;
            if(__dec_obj434) { __dec_obj434 = come_decrement_ref_count2(__dec_obj434, ((struct sNode*)__dec_obj434)->finalize, ((struct sNode*)__dec_obj434)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__=(void*)0;
struct sEqNode* __result279__;
void* __right_value657 = (void*)0;
struct sEqNode* result_361;
void* __right_value658 = (void*)0;
char* __dec_obj435;
void* __right_value659 = (void*)0;
struct sNode* __dec_obj436;
void* __right_value660 = (void*)0;
struct sNode* __dec_obj437;
struct sEqNode* __result280__;
    if(self==(void*)0) {
        __result279__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    result_361=(struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "sEqNode"));
    if(self!=((void*)0)) {
        result_361->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj435=result_361->sname;
        result_361->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj435 = come_decrement_ref_count2(__dec_obj435, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_361->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj436=result_361->mLeft;
        result_361->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj436) { __dec_obj436 = come_decrement_ref_count2(__dec_obj436, ((struct sNode*)__dec_obj436)->finalize, ((struct sNode*)__dec_obj436)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj437=result_361->mRight;
        result_361->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj437) { __dec_obj437 = come_decrement_ref_count2(__dec_obj437, ((struct sNode*)__dec_obj437)->finalize, ((struct sNode*)__dec_obj437)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result280__ = gComeFunResultObject = __result_obj__ = result_361;
    /*i*/come_call_finalizer3(result_361,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
char* __dec_obj438;
struct sNode* __dec_obj439;
struct sNode* __dec_obj440;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj438=self->sname;
            __dec_obj438 = come_decrement_ref_count2(__dec_obj438, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj439=self->mLeft;
            if(__dec_obj439) { __dec_obj439 = come_decrement_ref_count2(__dec_obj439, ((struct sNode*)__dec_obj439)->finalize, ((struct sNode*)__dec_obj439)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj440=self->mRight;
            if(__dec_obj440) { __dec_obj440 = come_decrement_ref_count2(__dec_obj440, ((struct sNode*)__dec_obj440)->finalize, ((struct sNode*)__dec_obj440)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__=(void*)0;
struct sNotEq2Node* __result282__;
void* __right_value665 = (void*)0;
struct sNotEq2Node* result_363;
void* __right_value666 = (void*)0;
char* __dec_obj441;
void* __right_value667 = (void*)0;
struct sNode* __dec_obj442;
void* __right_value668 = (void*)0;
struct sNode* __dec_obj443;
struct sNotEq2Node* __result283__;
    if(self==(void*)0) {
        __result282__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    result_363=(struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "sNotEq2Node"));
    if(self!=((void*)0)) {
        result_363->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj441=result_363->sname;
        result_363->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj441 = come_decrement_ref_count2(__dec_obj441, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_363->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj442=result_363->mLeft;
        result_363->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj442) { __dec_obj442 = come_decrement_ref_count2(__dec_obj442, ((struct sNode*)__dec_obj442)->finalize, ((struct sNode*)__dec_obj442)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj443=result_363->mRight;
        result_363->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj443) { __dec_obj443 = come_decrement_ref_count2(__dec_obj443, ((struct sNode*)__dec_obj443)->finalize, ((struct sNode*)__dec_obj443)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result283__ = gComeFunResultObject = __result_obj__ = result_363;
    /*i*/come_call_finalizer3(result_363,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
char* __dec_obj444;
struct sNode* __dec_obj445;
struct sNode* __dec_obj446;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj444=self->sname;
            __dec_obj444 = come_decrement_ref_count2(__dec_obj444, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj445=self->mLeft;
            if(__dec_obj445) { __dec_obj445 = come_decrement_ref_count2(__dec_obj445, ((struct sNode*)__dec_obj445)->finalize, ((struct sNode*)__dec_obj445)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj446=self->mRight;
            if(__dec_obj446) { __dec_obj446 = come_decrement_ref_count2(__dec_obj446, ((struct sNode*)__dec_obj446)->finalize, ((struct sNode*)__dec_obj446)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__=(void*)0;
struct sNotEqNode* __result285__;
void* __right_value673 = (void*)0;
struct sNotEqNode* result_365;
void* __right_value674 = (void*)0;
char* __dec_obj447;
void* __right_value675 = (void*)0;
struct sNode* __dec_obj448;
void* __right_value676 = (void*)0;
struct sNode* __dec_obj449;
struct sNotEqNode* __result286__;
    if(self==(void*)0) {
        __result285__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    result_365=(struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "sNotEqNode"));
    if(self!=((void*)0)) {
        result_365->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj447=result_365->sname;
        result_365->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj447 = come_decrement_ref_count2(__dec_obj447, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_365->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj448=result_365->mLeft;
        result_365->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj448) { __dec_obj448 = come_decrement_ref_count2(__dec_obj448, ((struct sNode*)__dec_obj448)->finalize, ((struct sNode*)__dec_obj448)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj449=result_365->mRight;
        result_365->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj449) { __dec_obj449 = come_decrement_ref_count2(__dec_obj449, ((struct sNode*)__dec_obj449)->finalize, ((struct sNode*)__dec_obj449)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result286__ = gComeFunResultObject = __result_obj__ = result_365;
    /*i*/come_call_finalizer3(result_365,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value678 = (void*)0;
struct sNode* node_366;
void* __right_value679 = (void*)0;
struct sNode* right_367;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sNode* _inf_value32;
struct sAndNode* _inf_obj_value32;
void* __right_value686 = (void*)0;
struct sNode* __result291__;
void* __right_value687 = (void*)0;
struct sNode* right_369;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* __right_value694 = (void*)0;
struct sNode* __result294__;
struct sNode* __result295__;
    parse_sharp_v5(info);
    node_366=(struct sNode*)come_increment_ref_count(eq_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(!node_366->terminated(node_366->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            right_367=(struct sNode*)come_increment_ref_count(and_exp(info));
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1936, "struct sNode");
            _inf_obj_value32=come_increment_ref_count(((struct sAndNode*)(__right_value681=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 1936, "sAndNode")),(struct sNode*)come_increment_ref_count(node_366),(struct sNode*)come_increment_ref_count(right_367),(_Bool)0,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sAndNode_finalize;
            _inf_value32->clone=(void*)sAndNode_clone;
            _inf_value32->compile=(void*)sAndNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sAndNode_kind;
            __result291__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value686=_inf_value32));
            if(right_367) { right_367 = come_decrement_ref_count2(right_367, ((struct sNode*)right_367)->finalize, ((struct sNode*)right_367)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_366) { node_366 = come_decrement_ref_count2(node_366, ((struct sNode*)node_366)->finalize, ((struct sNode*)node_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value681,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value686) { __right_value686 = come_decrement_ref_count2(__right_value686, ((struct sNode*)__right_value686)->finalize, ((struct sNode*)__right_value686)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result291__;
            if(right_367) { right_367 = come_decrement_ref_count2(right_367, ((struct sNode*)right_367)->finalize, ((struct sNode*)right_367)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(!node_366->terminated(node_366->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_369=(struct sNode*)come_increment_ref_count(and_exp(info));
                _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1944, "struct sNode");
                _inf_obj_value33=come_increment_ref_count(((struct sAndNode*)(__right_value689=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 1944, "sAndNode")),(struct sNode*)come_increment_ref_count(node_366),(struct sNode*)come_increment_ref_count(right_369),(_Bool)1,info))));
                _inf_value33->_protocol_obj=_inf_obj_value33;
                _inf_value33->finalize=(void*)sAndNode_finalize;
                _inf_value33->clone=(void*)sAndNode_clone;
                _inf_value33->compile=(void*)sAndNode_compile;
                _inf_value33->sline=(void*)sNodeBase_sline;
                _inf_value33->sname=(void*)sNodeBase_sname;
                _inf_value33->terminated=(void*)sNodeBase_terminated;
                _inf_value33->kind=(void*)sAndNode_kind;
                __result294__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value694=_inf_value33));
                if(right_369) { right_369 = come_decrement_ref_count2(right_369, ((struct sNode*)right_369)->finalize, ((struct sNode*)right_369)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_366) { node_366 = come_decrement_ref_count2(node_366, ((struct sNode*)node_366)->finalize, ((struct sNode*)node_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*g*/come_call_finalizer3(__right_value689,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value694) { __right_value694 = come_decrement_ref_count2(__right_value694, ((struct sNode*)__right_value694)->finalize, ((struct sNode*)__right_value694)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result294__;
                if(right_369) { right_369 = come_decrement_ref_count2(right_369, ((struct sNode*)right_369)->finalize, ((struct sNode*)right_369)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result295__ = gComeFunResultObject = __result_obj__ = node_366;
    if(node_366) { node_366 = come_decrement_ref_count2(node_366, ((struct sNode*)node_366)->finalize, ((struct sNode*)node_366)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static void sAndNode_finalize(struct sAndNode* self){
char* __dec_obj456;
struct sNode* __dec_obj457;
struct sNode* __dec_obj458;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj456=self->sname;
            __dec_obj456 = come_decrement_ref_count2(__dec_obj456, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj457=self->mLeft;
            if(__dec_obj457) { __dec_obj457 = come_decrement_ref_count2(__dec_obj457, ((struct sNode*)__dec_obj457)->finalize, ((struct sNode*)__dec_obj457)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj458=self->mRight;
            if(__dec_obj458) { __dec_obj458 = come_decrement_ref_count2(__dec_obj458, ((struct sNode*)__dec_obj458)->finalize, ((struct sNode*)__dec_obj458)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__=(void*)0;
struct sAndNode* __result292__;
void* __right_value690 = (void*)0;
struct sAndNode* result_370;
void* __right_value691 = (void*)0;
char* __dec_obj459;
void* __right_value692 = (void*)0;
struct sNode* __dec_obj460;
void* __right_value693 = (void*)0;
struct sNode* __dec_obj461;
struct sAndNode* __result293__;
    if(self==(void*)0) {
        __result292__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    result_370=(struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "sAndNode"));
    if(self!=((void*)0)) {
        result_370->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj459=result_370->sname;
        result_370->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj459 = come_decrement_ref_count2(__dec_obj459, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_370->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj460=result_370->mLeft;
        result_370->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj460) { __dec_obj460 = come_decrement_ref_count2(__dec_obj460, ((struct sNode*)__dec_obj460)->finalize, ((struct sNode*)__dec_obj460)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj461=result_370->mRight;
        result_370->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj461) { __dec_obj461 = come_decrement_ref_count2(__dec_obj461, ((struct sNode*)__dec_obj461)->finalize, ((struct sNode*)__dec_obj461)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result293__ = gComeFunResultObject = __result_obj__ = result_370;
    /*i*/come_call_finalizer3(result_370,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value695 = (void*)0;
struct sNode* node_371;
void* __right_value696 = (void*)0;
struct sNode* right_372;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct sNode* _inf_value34;
struct sXOrNode* _inf_obj_value34;
void* __right_value703 = (void*)0;
struct sNode* __result298__;
void* __right_value704 = (void*)0;
struct sNode* right_374;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* __right_value711 = (void*)0;
struct sNode* __result301__;
struct sNode* __result302__;
    parse_sharp_v5(info);
    node_371=(struct sNode*)come_increment_ref_count(and_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==94&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            right_372=(struct sNode*)come_increment_ref_count(xor_exp(info));
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1971, "struct sNode");
            _inf_obj_value34=come_increment_ref_count(((struct sXOrNode*)(__right_value698=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 1971, "sXOrNode")),(struct sNode*)come_increment_ref_count(node_371),(struct sNode*)come_increment_ref_count(right_372),(_Bool)0,info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sXOrNode_finalize;
            _inf_value34->clone=(void*)sXOrNode_clone;
            _inf_value34->compile=(void*)sXOrNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sXOrNode_kind;
            __result298__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value703=_inf_value34));
            if(right_372) { right_372 = come_decrement_ref_count2(right_372, ((struct sNode*)right_372)->finalize, ((struct sNode*)right_372)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_371) { node_371 = come_decrement_ref_count2(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value698,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value703) { __right_value703 = come_decrement_ref_count2(__right_value703, ((struct sNode*)__right_value703)->finalize, ((struct sNode*)__right_value703)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result298__;
            if(right_372) { right_372 = come_decrement_ref_count2(right_372, ((struct sNode*)right_372)->finalize, ((struct sNode*)right_372)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_374=(struct sNode*)come_increment_ref_count(xor_exp(info));
                _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1979, "struct sNode");
                _inf_obj_value35=come_increment_ref_count(((struct sXOrNode*)(__right_value706=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 1979, "sXOrNode")),(struct sNode*)come_increment_ref_count(node_371),(struct sNode*)come_increment_ref_count(right_374),(_Bool)1,info))));
                _inf_value35->_protocol_obj=_inf_obj_value35;
                _inf_value35->finalize=(void*)sXOrNode_finalize;
                _inf_value35->clone=(void*)sXOrNode_clone;
                _inf_value35->compile=(void*)sXOrNode_compile;
                _inf_value35->sline=(void*)sNodeBase_sline;
                _inf_value35->sname=(void*)sNodeBase_sname;
                _inf_value35->terminated=(void*)sNodeBase_terminated;
                _inf_value35->kind=(void*)sXOrNode_kind;
                __result301__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value711=_inf_value35));
                if(right_374) { right_374 = come_decrement_ref_count2(right_374, ((struct sNode*)right_374)->finalize, ((struct sNode*)right_374)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_371) { node_371 = come_decrement_ref_count2(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*g*/come_call_finalizer3(__right_value706,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value711) { __right_value711 = come_decrement_ref_count2(__right_value711, ((struct sNode*)__right_value711)->finalize, ((struct sNode*)__right_value711)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result301__;
                if(right_374) { right_374 = come_decrement_ref_count2(right_374, ((struct sNode*)right_374)->finalize, ((struct sNode*)right_374)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result302__ = gComeFunResultObject = __result_obj__ = node_371;
    if(node_371) { node_371 = come_decrement_ref_count2(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static void sXOrNode_finalize(struct sXOrNode* self){
char* __dec_obj468;
struct sNode* __dec_obj469;
struct sNode* __dec_obj470;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj468=self->sname;
            __dec_obj468 = come_decrement_ref_count2(__dec_obj468, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj469=self->mLeft;
            if(__dec_obj469) { __dec_obj469 = come_decrement_ref_count2(__dec_obj469, ((struct sNode*)__dec_obj469)->finalize, ((struct sNode*)__dec_obj469)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj470=self->mRight;
            if(__dec_obj470) { __dec_obj470 = come_decrement_ref_count2(__dec_obj470, ((struct sNode*)__dec_obj470)->finalize, ((struct sNode*)__dec_obj470)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__=(void*)0;
struct sXOrNode* __result299__;
void* __right_value707 = (void*)0;
struct sXOrNode* result_375;
void* __right_value708 = (void*)0;
char* __dec_obj471;
void* __right_value709 = (void*)0;
struct sNode* __dec_obj472;
void* __right_value710 = (void*)0;
struct sNode* __dec_obj473;
struct sXOrNode* __result300__;
    if(self==(void*)0) {
        __result299__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    result_375=(struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "sXOrNode"));
    if(self!=((void*)0)) {
        result_375->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj471=result_375->sname;
        result_375->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj471 = come_decrement_ref_count2(__dec_obj471, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_375->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj472=result_375->mLeft;
        result_375->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj472) { __dec_obj472 = come_decrement_ref_count2(__dec_obj472, ((struct sNode*)__dec_obj472)->finalize, ((struct sNode*)__dec_obj472)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj473=result_375->mRight;
        result_375->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj473) { __dec_obj473 = come_decrement_ref_count2(__dec_obj473, ((struct sNode*)__dec_obj473)->finalize, ((struct sNode*)__dec_obj473)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result300__ = gComeFunResultObject = __result_obj__ = result_375;
    /*i*/come_call_finalizer3(result_375,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value712 = (void*)0;
struct sNode* node_376;
void* __right_value713 = (void*)0;
struct sNode* right_377;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sNode* _inf_value36;
struct sOrNode* _inf_obj_value36;
void* __right_value720 = (void*)0;
struct sNode* __result305__;
void* __right_value721 = (void*)0;
struct sNode* right_379;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* __right_value728 = (void*)0;
struct sNode* __result308__;
struct sNode* __result309__;
    parse_sharp_v5(info);
    node_376=(struct sNode*)come_increment_ref_count(xor_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124) {
            info->p++;
            skip_spaces_and_lf(info);
            right_377=(struct sNode*)come_increment_ref_count(or_exp(info));
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2006, "struct sNode");
            _inf_obj_value36=come_increment_ref_count(((struct sOrNode*)(__right_value715=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2006, "sOrNode")),(struct sNode*)come_increment_ref_count(node_376),(struct sNode*)come_increment_ref_count(right_377),(_Bool)0,info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sOrNode_finalize;
            _inf_value36->clone=(void*)sOrNode_clone;
            _inf_value36->compile=(void*)sOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sOrNode_kind;
            __result305__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value720=_inf_value36));
            if(right_377) { right_377 = come_decrement_ref_count2(right_377, ((struct sNode*)right_377)->finalize, ((struct sNode*)right_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value715,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value720) { __right_value720 = come_decrement_ref_count2(__right_value720, ((struct sNode*)__right_value720)->finalize, ((struct sNode*)__right_value720)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result305__;
            if(right_377) { right_377 = come_decrement_ref_count2(right_377, ((struct sNode*)right_377)->finalize, ((struct sNode*)right_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_379=(struct sNode*)come_increment_ref_count(or_exp(info));
                _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2014, "struct sNode");
                _inf_obj_value37=come_increment_ref_count(((struct sOrNode*)(__right_value723=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2014, "sOrNode")),(struct sNode*)come_increment_ref_count(node_376),(struct sNode*)come_increment_ref_count(right_379),(_Bool)1,info))));
                _inf_value37->_protocol_obj=_inf_obj_value37;
                _inf_value37->finalize=(void*)sOrNode_finalize;
                _inf_value37->clone=(void*)sOrNode_clone;
                _inf_value37->compile=(void*)sOrNode_compile;
                _inf_value37->sline=(void*)sNodeBase_sline;
                _inf_value37->sname=(void*)sNodeBase_sname;
                _inf_value37->terminated=(void*)sNodeBase_terminated;
                _inf_value37->kind=(void*)sOrNode_kind;
                __result308__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value728=_inf_value37));
                if(right_379) { right_379 = come_decrement_ref_count2(right_379, ((struct sNode*)right_379)->finalize, ((struct sNode*)right_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*g*/come_call_finalizer3(__right_value723,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value728) { __right_value728 = come_decrement_ref_count2(__right_value728, ((struct sNode*)__right_value728)->finalize, ((struct sNode*)__right_value728)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result308__;
                if(right_379) { right_379 = come_decrement_ref_count2(right_379, ((struct sNode*)right_379)->finalize, ((struct sNode*)right_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result309__ = gComeFunResultObject = __result_obj__ = node_376;
    if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static void sOrNode_finalize(struct sOrNode* self){
char* __dec_obj480;
struct sNode* __dec_obj481;
struct sNode* __dec_obj482;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj480=self->sname;
            __dec_obj480 = come_decrement_ref_count2(__dec_obj480, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj481=self->mLeft;
            if(__dec_obj481) { __dec_obj481 = come_decrement_ref_count2(__dec_obj481, ((struct sNode*)__dec_obj481)->finalize, ((struct sNode*)__dec_obj481)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj482=self->mRight;
            if(__dec_obj482) { __dec_obj482 = come_decrement_ref_count2(__dec_obj482, ((struct sNode*)__dec_obj482)->finalize, ((struct sNode*)__dec_obj482)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__=(void*)0;
struct sOrNode* __result306__;
void* __right_value724 = (void*)0;
struct sOrNode* result_380;
void* __right_value725 = (void*)0;
char* __dec_obj483;
void* __right_value726 = (void*)0;
struct sNode* __dec_obj484;
void* __right_value727 = (void*)0;
struct sNode* __dec_obj485;
struct sOrNode* __result307__;
    if(self==(void*)0) {
        __result306__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    result_380=(struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "sOrNode"));
    if(self!=((void*)0)) {
        result_380->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj483=result_380->sname;
        result_380->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj483 = come_decrement_ref_count2(__dec_obj483, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_380->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj484=result_380->mLeft;
        result_380->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj484) { __dec_obj484 = come_decrement_ref_count2(__dec_obj484, ((struct sNode*)__dec_obj484)->finalize, ((struct sNode*)__dec_obj484)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj485=result_380->mRight;
        result_380->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj485) { __dec_obj485 = come_decrement_ref_count2(__dec_obj485, ((struct sNode*)__dec_obj485)->finalize, ((struct sNode*)__dec_obj485)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result307__ = gComeFunResultObject = __result_obj__ = result_380;
    /*i*/come_call_finalizer3(result_380,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value729 = (void*)0;
struct sNode* node_381;
void* __right_value730 = (void*)0;
struct sNode* right_382;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct sNode* _inf_value38;
struct sAndAndNode* _inf_obj_value38;
void* __right_value737 = (void*)0;
struct sNode* __result312__;
void* __right_value738 = (void*)0;
struct sNode* right_384;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* __right_value745 = (void*)0;
struct sNode* __result315__;
struct sNode* __result316__;
    parse_sharp_v5(info);
    node_381=(struct sNode*)come_increment_ref_count(or_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==38&&*(info->p+1)==38) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_382=(struct sNode*)come_increment_ref_count(andand_exp(info));
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2041, "struct sNode");
            _inf_obj_value38=come_increment_ref_count(((struct sAndAndNode*)(__right_value732=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2041, "sAndAndNode")),(struct sNode*)come_increment_ref_count(node_381),(struct sNode*)come_increment_ref_count(right_382),(_Bool)0,info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sAndAndNode_finalize;
            _inf_value38->clone=(void*)sAndAndNode_clone;
            _inf_value38->compile=(void*)sAndAndNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sAndAndNode_kind;
            __result312__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value737=_inf_value38));
            if(right_382) { right_382 = come_decrement_ref_count2(right_382, ((struct sNode*)right_382)->finalize, ((struct sNode*)right_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_381) { node_381 = come_decrement_ref_count2(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value732,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value737) { __right_value737 = come_decrement_ref_count2(__right_value737, ((struct sNode*)__right_value737)->finalize, ((struct sNode*)__right_value737)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result312__;
            if(right_382) { right_382 = come_decrement_ref_count2(right_382, ((struct sNode*)right_382)->finalize, ((struct sNode*)right_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==92&&*(info->p+1)==38&&*(info->p+2)==38) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_384=(struct sNode*)come_increment_ref_count(andand_exp(info));
                _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2049, "struct sNode");
                _inf_obj_value39=come_increment_ref_count(((struct sAndAndNode*)(__right_value740=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2049, "sAndAndNode")),(struct sNode*)come_increment_ref_count(node_381),(struct sNode*)come_increment_ref_count(right_384),(_Bool)1,info))));
                _inf_value39->_protocol_obj=_inf_obj_value39;
                _inf_value39->finalize=(void*)sAndAndNode_finalize;
                _inf_value39->clone=(void*)sAndAndNode_clone;
                _inf_value39->compile=(void*)sAndAndNode_compile;
                _inf_value39->sline=(void*)sNodeBase_sline;
                _inf_value39->sname=(void*)sNodeBase_sname;
                _inf_value39->terminated=(void*)sNodeBase_terminated;
                _inf_value39->kind=(void*)sAndAndNode_kind;
                __result315__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value745=_inf_value39));
                if(right_384) { right_384 = come_decrement_ref_count2(right_384, ((struct sNode*)right_384)->finalize, ((struct sNode*)right_384)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_381) { node_381 = come_decrement_ref_count2(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*g*/come_call_finalizer3(__right_value740,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value745) { __right_value745 = come_decrement_ref_count2(__right_value745, ((struct sNode*)__right_value745)->finalize, ((struct sNode*)__right_value745)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result315__;
                if(right_384) { right_384 = come_decrement_ref_count2(right_384, ((struct sNode*)right_384)->finalize, ((struct sNode*)right_384)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result316__ = gComeFunResultObject = __result_obj__ = node_381;
    if(node_381) { node_381 = come_decrement_ref_count2(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
char* __dec_obj492;
struct sNode* __dec_obj493;
struct sNode* __dec_obj494;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj492=self->sname;
            __dec_obj492 = come_decrement_ref_count2(__dec_obj492, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj493=self->mLeft;
            if(__dec_obj493) { __dec_obj493 = come_decrement_ref_count2(__dec_obj493, ((struct sNode*)__dec_obj493)->finalize, ((struct sNode*)__dec_obj493)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj494=self->mRight;
            if(__dec_obj494) { __dec_obj494 = come_decrement_ref_count2(__dec_obj494, ((struct sNode*)__dec_obj494)->finalize, ((struct sNode*)__dec_obj494)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__=(void*)0;
struct sAndAndNode* __result313__;
void* __right_value741 = (void*)0;
struct sAndAndNode* result_385;
void* __right_value742 = (void*)0;
char* __dec_obj495;
void* __right_value743 = (void*)0;
struct sNode* __dec_obj496;
void* __right_value744 = (void*)0;
struct sNode* __dec_obj497;
struct sAndAndNode* __result314__;
    if(self==(void*)0) {
        __result313__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    result_385=(struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "sAndAndNode"));
    if(self!=((void*)0)) {
        result_385->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj495=result_385->sname;
        result_385->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj495 = come_decrement_ref_count2(__dec_obj495, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_385->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj496=result_385->mLeft;
        result_385->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj496) { __dec_obj496 = come_decrement_ref_count2(__dec_obj496, ((struct sNode*)__dec_obj496)->finalize, ((struct sNode*)__dec_obj496)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj497=result_385->mRight;
        result_385->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj497) { __dec_obj497 = come_decrement_ref_count2(__dec_obj497, ((struct sNode*)__dec_obj497)->finalize, ((struct sNode*)__dec_obj497)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result314__ = gComeFunResultObject = __result_obj__ = result_385;
    /*i*/come_call_finalizer3(result_385,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value746 = (void*)0;
struct sNode* node_386;
void* __right_value747 = (void*)0;
struct sNode* right_387;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct sNode* _inf_value40;
struct sOrOrNode* _inf_obj_value40;
void* __right_value754 = (void*)0;
struct sNode* __result319__;
void* __right_value755 = (void*)0;
struct sNode* right_389;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* __right_value762 = (void*)0;
struct sNode* __result322__;
struct sNode* __result323__;
    parse_sharp_v5(info);
    node_386=(struct sNode*)come_increment_ref_count(andand_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==124&&*(info->p+1)==124) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_387=(struct sNode*)come_increment_ref_count(oror_exp(info));
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2076, "struct sNode");
            _inf_obj_value40=come_increment_ref_count(((struct sOrOrNode*)(__right_value749=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2076, "sOrOrNode")),(struct sNode*)come_increment_ref_count(node_386),(struct sNode*)come_increment_ref_count(right_387),(_Bool)0,info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sOrOrNode_finalize;
            _inf_value40->clone=(void*)sOrOrNode_clone;
            _inf_value40->compile=(void*)sOrOrNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sOrOrNode_kind;
            __result319__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value754=_inf_value40));
            if(right_387) { right_387 = come_decrement_ref_count2(right_387, ((struct sNode*)right_387)->finalize, ((struct sNode*)right_387)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value749,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value754) { __right_value754 = come_decrement_ref_count2(__right_value754, ((struct sNode*)__right_value754)->finalize, ((struct sNode*)__right_value754)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result319__;
            if(right_387) { right_387 = come_decrement_ref_count2(right_387, ((struct sNode*)right_387)->finalize, ((struct sNode*)right_387)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==92&&*(info->p+1)==124&&*(info->p+2)==124) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_389=(struct sNode*)come_increment_ref_count(oror_exp(info));
                _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2084, "struct sNode");
                _inf_obj_value41=come_increment_ref_count(((struct sOrOrNode*)(__right_value757=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2084, "sOrOrNode")),(struct sNode*)come_increment_ref_count(node_386),(struct sNode*)come_increment_ref_count(right_389),(_Bool)1,info))));
                _inf_value41->_protocol_obj=_inf_obj_value41;
                _inf_value41->finalize=(void*)sOrOrNode_finalize;
                _inf_value41->clone=(void*)sOrOrNode_clone;
                _inf_value41->compile=(void*)sOrOrNode_compile;
                _inf_value41->sline=(void*)sNodeBase_sline;
                _inf_value41->sname=(void*)sNodeBase_sname;
                _inf_value41->terminated=(void*)sNodeBase_terminated;
                _inf_value41->kind=(void*)sOrOrNode_kind;
                __result322__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value762=_inf_value41));
                if(right_389) { right_389 = come_decrement_ref_count2(right_389, ((struct sNode*)right_389)->finalize, ((struct sNode*)right_389)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*g*/come_call_finalizer3(__right_value757,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value762) { __right_value762 = come_decrement_ref_count2(__right_value762, ((struct sNode*)__right_value762)->finalize, ((struct sNode*)__right_value762)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result322__;
                if(right_389) { right_389 = come_decrement_ref_count2(right_389, ((struct sNode*)right_389)->finalize, ((struct sNode*)right_389)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result323__ = gComeFunResultObject = __result_obj__ = node_386;
    if(node_386) { node_386 = come_decrement_ref_count2(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
char* __dec_obj504;
struct sNode* __dec_obj505;
struct sNode* __dec_obj506;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj504=self->sname;
            __dec_obj504 = come_decrement_ref_count2(__dec_obj504, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj505=self->mLeft;
            if(__dec_obj505) { __dec_obj505 = come_decrement_ref_count2(__dec_obj505, ((struct sNode*)__dec_obj505)->finalize, ((struct sNode*)__dec_obj505)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj506=self->mRight;
            if(__dec_obj506) { __dec_obj506 = come_decrement_ref_count2(__dec_obj506, ((struct sNode*)__dec_obj506)->finalize, ((struct sNode*)__dec_obj506)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__=(void*)0;
struct sOrOrNode* __result320__;
void* __right_value758 = (void*)0;
struct sOrOrNode* result_390;
void* __right_value759 = (void*)0;
char* __dec_obj507;
void* __right_value760 = (void*)0;
struct sNode* __dec_obj508;
void* __right_value761 = (void*)0;
struct sNode* __dec_obj509;
struct sOrOrNode* __result321__;
    if(self==(void*)0) {
        __result320__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    result_390=(struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "sOrOrNode"));
    if(self!=((void*)0)) {
        result_390->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj507=result_390->sname;
        result_390->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj507 = come_decrement_ref_count2(__dec_obj507, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_390->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj508=result_390->mLeft;
        result_390->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj508) { __dec_obj508 = come_decrement_ref_count2(__dec_obj508, ((struct sNode*)__dec_obj508)->finalize, ((struct sNode*)__dec_obj508)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj509=result_390->mRight;
        result_390->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj509) { __dec_obj509 = come_decrement_ref_count2(__dec_obj509, ((struct sNode*)__dec_obj509)->finalize, ((struct sNode*)__dec_obj509)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result321__ = gComeFunResultObject = __result_obj__ = result_390;
    /*i*/come_call_finalizer3(result_390,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value763 = (void*)0;
struct sNode* node_391;
void* __right_value764 = (void*)0;
struct sNode* node2_392;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct sNode* _inf_value42;
struct sCommaNode* _inf_obj_value42;
void* __right_value771 = (void*)0;
struct sNode* __result326__;
struct sNode* __result327__;
    parse_sharp_v5(info);
    node_391=(struct sNode*)come_increment_ref_count(oror_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(!info->no_comma&&*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            node2_392=(struct sNode*)come_increment_ref_count(comma_exp(info));
            _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2111, "struct sNode");
            _inf_obj_value42=come_increment_ref_count(((struct sCommaNode*)(__right_value766=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2111, "sCommaNode")),(struct sNode*)come_increment_ref_count(node_391),(struct sNode*)come_increment_ref_count(node2_392),info))));
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sCommaNode_finalize;
            _inf_value42->clone=(void*)sCommaNode_clone;
            _inf_value42->compile=(void*)sCommaNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sCommaNode_kind;
            __result326__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value771=_inf_value42));
            if(node2_392) { node2_392 = come_decrement_ref_count2(node2_392, ((struct sNode*)node2_392)->finalize, ((struct sNode*)node2_392)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_391) { node_391 = come_decrement_ref_count2(node_391, ((struct sNode*)node_391)->finalize, ((struct sNode*)node_391)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value766,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value771) { __right_value771 = come_decrement_ref_count2(__right_value771, ((struct sNode*)__right_value771)->finalize, ((struct sNode*)__right_value771)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result326__;
            if(node2_392) { node2_392 = come_decrement_ref_count2(node2_392, ((struct sNode*)node2_392)->finalize, ((struct sNode*)node2_392)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result327__ = gComeFunResultObject = __result_obj__ = node_391;
    if(node_391) { node_391 = come_decrement_ref_count2(node_391, ((struct sNode*)node_391)->finalize, ((struct sNode*)node_391)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static void sCommaNode_finalize(struct sCommaNode* self){
char* __dec_obj510;
struct sNode* __dec_obj511;
struct sNode* __dec_obj512;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj510=self->sname;
            __dec_obj510 = come_decrement_ref_count2(__dec_obj510, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj511=self->mLeft;
            if(__dec_obj511) { __dec_obj511 = come_decrement_ref_count2(__dec_obj511, ((struct sNode*)__dec_obj511)->finalize, ((struct sNode*)__dec_obj511)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj512=self->mRight;
            if(__dec_obj512) { __dec_obj512 = come_decrement_ref_count2(__dec_obj512, ((struct sNode*)__dec_obj512)->finalize, ((struct sNode*)__dec_obj512)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__=(void*)0;
struct sCommaNode* __result324__;
void* __right_value767 = (void*)0;
struct sCommaNode* result_393;
void* __right_value768 = (void*)0;
char* __dec_obj513;
void* __right_value769 = (void*)0;
struct sNode* __dec_obj514;
void* __right_value770 = (void*)0;
struct sNode* __dec_obj515;
struct sCommaNode* __result325__;
    if(self==(void*)0) {
        __result324__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    result_393=(struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "sCommaNode"));
    if(self!=((void*)0)) {
        result_393->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj513=result_393->sname;
        result_393->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj513 = come_decrement_ref_count2(__dec_obj513, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj514=result_393->mLeft;
        result_393->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj514) { __dec_obj514 = come_decrement_ref_count2(__dec_obj514, ((struct sNode*)__dec_obj514)->finalize, ((struct sNode*)__dec_obj514)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj515=result_393->mRight;
        result_393->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj515) { __dec_obj515 = come_decrement_ref_count2(__dec_obj515, ((struct sNode*)__dec_obj515)->finalize, ((struct sNode*)__dec_obj515)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result325__ = gComeFunResultObject = __result_obj__ = result_393;
    /*i*/come_call_finalizer3(result_393,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value772 = (void*)0;
struct sNode* node_394;
struct sNode* value1_395;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct sNode* _inf_value43;
struct sNullNode* _inf_obj_value43;
void* __right_value777 = (void*)0;
struct sNode* __dec_obj518;
_Bool no_label_397;
void* __right_value778 = (void*)0;
struct sNode* __dec_obj519;
void* __right_value779 = (void*)0;
struct sNode* value2_398;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct sNode* _inf_value44;
struct sConditionalNode* _inf_obj_value44;
void* __right_value787 = (void*)0;
struct sNode* __result332__;
struct sNode* __result333__;
value1_395 = (void*)0;
    parse_sharp_v5(info);
    node_394=(struct sNode*)come_increment_ref_count(comma_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==63) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(*info->p==58) {
                _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2140, "struct sNode");
                _inf_obj_value43=come_increment_ref_count(((struct sNullNode*)(__right_value774=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2140, "sNullNode")),info))));
                _inf_value43->_protocol_obj=_inf_obj_value43;
                _inf_value43->finalize=(void*)sNullNode_finalize;
                _inf_value43->clone=(void*)sNullNode_clone;
                _inf_value43->compile=(void*)sNullNode_compile;
                _inf_value43->sline=(void*)sNodeBase_sline;
                _inf_value43->sname=(void*)sNodeBase_sname;
                _inf_value43->terminated=(void*)sNodeBase_terminated;
                _inf_value43->kind=(void*)sNullNode_kind;
                __dec_obj518=value1_395;
                value1_395=(struct sNode*)come_increment_ref_count(_inf_value43);
                if(__dec_obj518) { __dec_obj518 = come_decrement_ref_count2(__dec_obj518, ((struct sNode*)__dec_obj518)->finalize, ((struct sNode*)__dec_obj518)->_protocol_obj, 0,0,0, (void*)0); }
                /*g*/come_call_finalizer3(__right_value774,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                no_label_397=info->no_label;
                info->no_label=(_Bool)1;
                __dec_obj519=value1_395;
                value1_395=(struct sNode*)come_increment_ref_count(conditional_exp(info));
                if(__dec_obj519) { __dec_obj519 = come_decrement_ref_count2(__dec_obj519, ((struct sNode*)__dec_obj519)->finalize, ((struct sNode*)__dec_obj519)->_protocol_obj, 0,0,0, (void*)0); }
                info->no_label=no_label_397;
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_398=(struct sNode*)come_increment_ref_count(conditional_exp(info));
            parse_sharp_v5(info);
            _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2157, "struct sNode");
            _inf_obj_value44=come_increment_ref_count(((struct sConditionalNode*)(__right_value781=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2157, "sConditionalNode")),(struct sNode*)come_increment_ref_count(node_394),(struct sNode*)come_increment_ref_count(value1_395),(struct sNode*)come_increment_ref_count(value2_398),info))));
            _inf_value44->_protocol_obj=_inf_obj_value44;
            _inf_value44->finalize=(void*)sConditionalNode_finalize;
            _inf_value44->clone=(void*)sConditionalNode_clone;
            _inf_value44->compile=(void*)sConditionalNode_compile;
            _inf_value44->sline=(void*)sNodeBase_sline;
            _inf_value44->sname=(void*)sNodeBase_sname;
            _inf_value44->terminated=(void*)sNodeBase_terminated;
            _inf_value44->kind=(void*)sConditionalNode_kind;
            __result332__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value787=_inf_value44));
            if(value1_395) { value1_395 = come_decrement_ref_count2(value1_395, ((struct sNode*)value1_395)->finalize, ((struct sNode*)value1_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_398) { value2_398 = come_decrement_ref_count2(value2_398, ((struct sNode*)value2_398)->finalize, ((struct sNode*)value2_398)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_394) { node_394 = come_decrement_ref_count2(node_394, ((struct sNode*)node_394)->finalize, ((struct sNode*)node_394)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value781,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value787) { __right_value787 = come_decrement_ref_count2(__right_value787, ((struct sNode*)__right_value787)->finalize, ((struct sNode*)__right_value787)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result332__;
            if(value1_395) { value1_395 = come_decrement_ref_count2(value1_395, ((struct sNode*)value1_395)->finalize, ((struct sNode*)value1_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_398) { value2_398 = come_decrement_ref_count2(value2_398, ((struct sNode*)value2_398)->finalize, ((struct sNode*)value2_398)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result333__ = gComeFunResultObject = __result_obj__ = node_394;
    if(node_394) { node_394 = come_decrement_ref_count2(node_394, ((struct sNode*)node_394)->finalize, ((struct sNode*)node_394)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
char* __dec_obj520;
struct sNode* __dec_obj521;
struct sNode* __dec_obj522;
struct sNode* __dec_obj523;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj520=self->sname;
            __dec_obj520 = come_decrement_ref_count2(__dec_obj520, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mValue1!=((void*)0)) {
        if(self->mValue1==gComeFunResultObject) {
            __dec_obj521=self->mValue1;
            if(__dec_obj521) { __dec_obj521 = come_decrement_ref_count2(__dec_obj521, ((struct sNode*)__dec_obj521)->finalize, ((struct sNode*)__dec_obj521)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mValue1) { self->mValue1 = come_decrement_ref_count2(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mValue2!=((void*)0)) {
        if(self->mValue2==gComeFunResultObject) {
            __dec_obj522=self->mValue2;
            if(__dec_obj522) { __dec_obj522 = come_decrement_ref_count2(__dec_obj522, ((struct sNode*)__dec_obj522)->finalize, ((struct sNode*)__dec_obj522)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mValue2) { self->mValue2 = come_decrement_ref_count2(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mValue3!=((void*)0)) {
        if(self->mValue3==gComeFunResultObject) {
            __dec_obj523=self->mValue3;
            if(__dec_obj523) { __dec_obj523 = come_decrement_ref_count2(__dec_obj523, ((struct sNode*)__dec_obj523)->finalize, ((struct sNode*)__dec_obj523)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mValue3) { self->mValue3 = come_decrement_ref_count2(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__=(void*)0;
struct sConditionalNode* __result330__;
void* __right_value782 = (void*)0;
struct sConditionalNode* result_399;
void* __right_value783 = (void*)0;
char* __dec_obj524;
void* __right_value784 = (void*)0;
struct sNode* __dec_obj525;
void* __right_value785 = (void*)0;
struct sNode* __dec_obj526;
void* __right_value786 = (void*)0;
struct sNode* __dec_obj527;
struct sConditionalNode* __result331__;
    if(self==(void*)0) {
        __result330__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    result_399=(struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "sConditionalNode"));
    if(self!=((void*)0)) {
        result_399->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj524=result_399->sname;
        result_399->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj524 = come_decrement_ref_count2(__dec_obj524, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mValue1!=((void*)0)) {
        __dec_obj525=result_399->mValue1;
        result_399->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue1));
        if(__dec_obj525) { __dec_obj525 = come_decrement_ref_count2(__dec_obj525, ((struct sNode*)__dec_obj525)->finalize, ((struct sNode*)__dec_obj525)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mValue2!=((void*)0)) {
        __dec_obj526=result_399->mValue2;
        result_399->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue2));
        if(__dec_obj526) { __dec_obj526 = come_decrement_ref_count2(__dec_obj526, ((struct sNode*)__dec_obj526)->finalize, ((struct sNode*)__dec_obj526)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mValue3!=((void*)0)) {
        __dec_obj527=result_399->mValue3;
        result_399->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue3));
        if(__dec_obj527) { __dec_obj527 = come_decrement_ref_count2(__dec_obj527, ((struct sNode*)__dec_obj527)->finalize, ((struct sNode*)__dec_obj527)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result331__ = gComeFunResultObject = __result_obj__ = result_399;
    /*i*/come_call_finalizer3(result_399,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value788 = (void*)0;
struct sNode* node_400;
struct sNode* __result334__;
    parse_sharp_v5(info);
    node_400=(struct sNode*)come_increment_ref_count(conditional_exp(info));
    __result334__ = gComeFunResultObject = __result_obj__ = node_400;
    if(node_400) { node_400 = come_decrement_ref_count2(node_400, ((struct sNode*)node_400)->finalize, ((struct sNode*)node_400)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result334__;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sNode* _inf_value45;
struct sNullNode* _inf_obj_value45;
void* __right_value793 = (void*)0;
struct sNode* __result337__;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sNode* _inf_value46;
struct sNilNode* _inf_obj_value46;
void* __right_value798 = (void*)0;
struct sNode* __result340__;
void* __right_value799 = (void*)0;
struct sNode* __result341__;
    if(!gComeC&&charp_operator_equals(buf,"null")) {
        _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2181, "struct sNode");
        _inf_obj_value45=come_increment_ref_count(((struct sNullNode*)(__right_value790=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2181, "sNullNode")),info))));
        _inf_value45->_protocol_obj=_inf_obj_value45;
        _inf_value45->finalize=(void*)sNullNode_finalize;
        _inf_value45->clone=(void*)sNullNode_clone;
        _inf_value45->compile=(void*)sNullNode_compile;
        _inf_value45->sline=(void*)sNodeBase_sline;
        _inf_value45->sname=(void*)sNodeBase_sname;
        _inf_value45->terminated=(void*)sNodeBase_terminated;
        _inf_value45->kind=(void*)sNullNode_kind;
        __result337__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value793=_inf_value45));
        /*g*/come_call_finalizer3(__right_value790,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value793) { __right_value793 = come_decrement_ref_count2(__right_value793, ((struct sNode*)__right_value793)->finalize, ((struct sNode*)__right_value793)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    else {
        if(!gComeC&&charp_operator_equals(buf,"nil")) {
            _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2184, "struct sNode");
            _inf_obj_value46=come_increment_ref_count(((struct sNilNode*)(__right_value795=sNilNode_initialize((struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2184, "sNilNode")),info))));
            _inf_value46->_protocol_obj=_inf_obj_value46;
            _inf_value46->finalize=(void*)sNilNode_finalize;
            _inf_value46->clone=(void*)sNilNode_clone;
            _inf_value46->compile=(void*)sNilNode_compile;
            _inf_value46->sline=(void*)sNodeBase_sline;
            _inf_value46->sname=(void*)sNodeBase_sname;
            _inf_value46->terminated=(void*)sNodeBase_terminated;
            _inf_value46->kind=(void*)sNilNode_kind;
            __result340__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value798=_inf_value46));
            /*g*/come_call_finalizer3(__right_value795,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value798) { __right_value798 = come_decrement_ref_count2(__right_value798, ((struct sNode*)__right_value798)->finalize, ((struct sNode*)__right_value798)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result340__;
        }
    }
    __result341__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value799=string_node_v12(buf,head,head_sline,info)));
    if(__right_value799) { __right_value799 = come_decrement_ref_count2(__right_value799, ((struct sNode*)__right_value799)->finalize, ((struct sNode*)__right_value799)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static void sNullNode_finalize(struct sNullNode* self){
char* __dec_obj528;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj528=self->sname;
            __dec_obj528 = come_decrement_ref_count2(__dec_obj528, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__=(void*)0;
struct sNullNode* __result335__;
void* __right_value791 = (void*)0;
struct sNullNode* result_401;
void* __right_value792 = (void*)0;
char* __dec_obj529;
struct sNullNode* __result336__;
    if(self==(void*)0) {
        __result335__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    result_401=(struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "sNullNode"));
    if(self!=((void*)0)) {
        result_401->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj529=result_401->sname;
        result_401->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj529 = come_decrement_ref_count2(__dec_obj529, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result336__ = gComeFunResultObject = __result_obj__ = result_401;
    /*i*/come_call_finalizer3(result_401,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static void sNilNode_finalize(struct sNilNode* self){
char* __dec_obj530;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj530=self->sname;
            __dec_obj530 = come_decrement_ref_count2(__dec_obj530, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__=(void*)0;
struct sNilNode* __result338__;
void* __right_value796 = (void*)0;
struct sNilNode* result_402;
void* __right_value797 = (void*)0;
char* __dec_obj531;
struct sNilNode* __result339__;
    if(self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_402=(struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "sNilNode"));
    if(self!=((void*)0)) {
        result_402->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj531=result_402->sname;
        result_402->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj531 = come_decrement_ref_count2(__dec_obj531, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_402;
    /*i*/come_call_finalizer3(result_402,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

