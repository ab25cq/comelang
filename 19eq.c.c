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
struct sPlusPlusNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mQuote;
};
struct sMinusMinusNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mQuote;
};
struct sPlusEqualNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sMinusEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sMultEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sDivEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sModEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sLShifEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sRShiftEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sXorEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sOrEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sAndEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sExpEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
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
struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);
char* sPlusPlusNode_kind(struct sPlusPlusNode* self);
_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
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
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);
char* sMinusMinusNode_kind(struct sMinusMinusNode* self);
_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info);
struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sPlusEqualNode_kind(struct sPlusEqualNode* self);
_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info);
struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sMinusEqualNode_kind(struct sMinusEqualNode* self);
_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info);
struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sMultEqualNode_kind(struct sMultEqualNode* self);
_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info);
struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sDivEqualNode_kind(struct sDivEqualNode* self);
_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info);
struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sModEqualNode_kind(struct sModEqualNode* self);
_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info);
struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLShifEqualNode_kind(struct sLShifEqualNode* self);
_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info);
struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sRShiftEqualNode_kind(struct sRShiftEqualNode* self);
_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info);
struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sXorEqualNode_kind(struct sXorEqualNode* self);
_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info);
struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrEqualNode_kind(struct sOrEqualNode* self);
_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info);
struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndEqualNode_kind(struct sAndEqualNode* self);
_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info);
struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sExpEqualNode_kind(struct sExpEqualNode* self);
_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
static void sPlusPlusNode_finalize(struct sPlusPlusNode* self);
static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self);
static void sMinusMinusNode_finalize(struct sMinusMinusNode* self);
static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self);
static void sPlusEqualNode_finalize(struct sPlusEqualNode* self);
static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self);
static void sMinusEqualNode_finalize(struct sMinusEqualNode* self);
static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self);
static void sMultEqualNode_finalize(struct sMultEqualNode* self);
static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self);
static void sDivEqualNode_finalize(struct sDivEqualNode* self);
static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self);
static void sModEqualNode_finalize(struct sModEqualNode* self);
static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self);
static void sLShifEqualNode_finalize(struct sLShifEqualNode* self);
static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self);
static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self);
static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self);
static void sXorEqualNode_finalize(struct sXorEqualNode* self);
static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self);
static void sAndEqualNode_finalize(struct sAndEqualNode* self);
static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self);
static void sOrEqualNode_finalize(struct sOrEqualNode* self);
static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self);
static void sExpEqualNode_finalize(struct sExpEqualNode* self);
static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self);
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










struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value118 = (void*)0;
struct sNode* __dec_obj16;
struct sPlusPlusNode* __result67__;
    ((struct sNodeBase*)(__right_value116=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value116,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj16=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
    self->mQuote=quote;
    __result67__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sPlusPlusNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result67__;
}

char* sPlusPlusNode_kind(struct sPlusPlusNode* self){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
char* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value119=__builtin_string("sPlusPlusNode")));
    __right_value119 = come_decrement_ref_count2(__right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info){
struct sNode* left_65;
void* __right_value120 = (void*)0;
struct CVALUE* left_value_66;
struct sType* type_67;
char* fun_name_68;
_Bool calling_fun_69;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
struct CVALUE* come_value_70;
void* __right_value123 = (void*)0;
char* __dec_obj19;
void* __right_value158 = (void*)0;
struct sType* __dec_obj64;
_Bool __result86__;
memset(&calling_fun_69, 0, sizeof(_Bool));
    left_65=self->mLeft;
    if(!node_compile(left_65,info)) {
        return (_Bool)0;
    }
    left_value_66=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_67=(struct sType*)come_increment_ref_count(left_value_66->type);
    fun_name_68="operator_plus_plus";
    if(self->mQuote) {
        calling_fun_69=(_Bool)0;
    }
    else {
        calling_fun_69=operator_overload_fun_self(type_67,fun_name_68,left_value_66,info);
    }
    if(!calling_fun_69) {
        come_value_70=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 42, "CVALUE"))));
        __dec_obj19=come_value_70->c_value;
        come_value_70->c_value=(char*)come_increment_ref_count(xsprintf("%s++",left_value_66->c_value));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj64=come_value_70->type;
        come_value_70->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_66->type));
        /* a*/come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_70->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_70));
        add_come_last_code(info,"%s;\n",come_value_70->c_value);
        /*i*/come_call_finalizer3(come_value_70,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result86__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_66,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_67,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result86__;
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

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result65__;
void* __right_value117 = (void*)0;
struct sNode* result_64;
struct sNode* __result66__;
    if(self==(void*)0) {
        __result65__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result65__;
    }
    result_64=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_64->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_64->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_64->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_64->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_64->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_64->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_64->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_64->kind=self->kind;
    }
    __result66__ = gComeFunResultObject = __result_obj__ = result_64;
    if(result_64) { result_64 = come_decrement_ref_count2(result_64, ((struct sNode*)result_64)->finalize, ((struct sNode*)result_64)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result66__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result69__;
void* __right_value124 = (void*)0;
struct sType* result_71;
void* __right_value127 = (void*)0;
struct tuple1$1sTypeph* __dec_obj42;
void* __right_value128 = (void*)0;
struct tuple1$1sTypeph* __dec_obj43;
void* __right_value129 = (void*)0;
struct tuple1$1sTypeph* __dec_obj44;
void* __right_value130 = (void*)0;
char* __dec_obj45;
void* __right_value137 = (void*)0;
struct list$1sTypeph* __dec_obj49;
void* __right_value144 = (void*)0;
struct list$1sNodeph* __dec_obj53;
void* __right_value145 = (void*)0;
struct list$1sTypeph* __dec_obj54;
void* __right_value152 = (void*)0;
struct list$1charph* __dec_obj58;
void* __right_value153 = (void*)0;
struct tuple1$1sTypeph* __dec_obj59;
void* __right_value154 = (void*)0;
struct sNode* __dec_obj60;
void* __right_value155 = (void*)0;
struct sNode* __dec_obj61;
void* __right_value156 = (void*)0;
char* __dec_obj62;
void* __right_value157 = (void*)0;
char* __dec_obj63;
struct sType* __result84__;
    if(self==(void*)0) {
        __result69__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    result_71=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_71->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj42=result_71->mNoSolvedGenericsType;
        result_71->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        /* a*/come_call_finalizer3(__dec_obj42,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj43=result_71->mOriginalLoadVarType;
        result_71->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        /* a*/come_call_finalizer3(__dec_obj43,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj44=result_71->mNoExceptionType;
        result_71->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        /* a*/come_call_finalizer3(__dec_obj44,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj45=result_71->mGenericsName;
        result_71->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj49=result_71->mGenericsTypes;
        result_71->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        /* a*/come_call_finalizer3(__dec_obj49,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj53=result_71->mArrayNum;
        result_71->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        /* a*/come_call_finalizer3(__dec_obj53,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_71->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj54=result_71->mParamTypes;
        result_71->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj54,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj58=result_71->mParamNames;
        result_71->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj58,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj59=result_71->mResultType;
        result_71->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_71->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj60=result_71->mAlignas;
        result_71->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_71->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_71->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_71->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_71->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_71->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_71->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_71->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_71->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_71->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_71->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_71->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_71->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_71->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_71->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_71->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_71->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_71->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_71->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_71->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_71->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_71->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_71->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_71->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_71->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_71->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(self!=((void*)0)) {
        result_71->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_71->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj61=result_71->mSizeNum;
        result_71->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_71->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result_71->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_71->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj62=result_71->mOriginalTypeName;
        result_71->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_71->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_71->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_71->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_71->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_71->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_71->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_71->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_71->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_71->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj63=result_71->mAsmName;
        result_71->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_71->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_71->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_71->mNoNumberArray=self->mNoNumberArray;
    }
    if(self!=((void*)0)) {
        result_71->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result_71->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)) {
        result_71->mOriginIsArray=self->mOriginIsArray;
    }
    __result84__ = gComeFunResultObject = __result_obj__ = result_71;
    /*i*/come_call_finalizer3(result_71,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result70__;
void* __right_value125 = (void*)0;
struct tuple1$1sTypeph* result_72;
void* __right_value126 = (void*)0;
struct sType* __dec_obj20;
struct tuple1$1sTypeph* __result71__;
    if(self==(void*)0) {
        __result70__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    result_72=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj20=result_72->v1;
        result_72->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /* a*/come_call_finalizer3(__dec_obj20,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result71__ = gComeFunResultObject = __result_obj__ = result_72;
    /*i*/come_call_finalizer3(result_72,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj21;
struct tuple1$1sTypeph* __dec_obj23;
struct tuple1$1sTypeph* __dec_obj25;
char* __dec_obj27;
struct list$1sTypeph* __dec_obj28;
struct list$1sNodeph* __dec_obj30;
struct list$1sTypeph* __dec_obj32;
struct list$1charph* __dec_obj33;
struct tuple1$1sTypeph* __dec_obj35;
struct sNode* __dec_obj37;
struct sNode* __dec_obj38;
char* __dec_obj39;
char* __dec_obj40;
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj21=self->mNoSolvedGenericsType;
            /* a*/come_call_finalizer3(__dec_obj21,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj23=self->mOriginalLoadVarType;
            /* a*/come_call_finalizer3(__dec_obj23,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj25=self->mNoExceptionType;
            /* a*/come_call_finalizer3(__dec_obj25,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(self->mGenericsName==gComeFunResultObject) {
            __dec_obj27=self->mGenericsName;
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj28=self->mGenericsTypes;
            /* a*/come_call_finalizer3(__dec_obj28,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(self->mArrayNum==gComeFunResultObject) {
            __dec_obj30=self->mArrayNum;
            /* a*/come_call_finalizer3(__dec_obj30,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj32=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj32,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj33=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj33,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj35=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj35,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(self->mAlignas==gComeFunResultObject) {
            __dec_obj37=self->mAlignas;
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(self->mSizeNum==gComeFunResultObject) {
            __dec_obj38=self->mSizeNum;
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj39=self->mOriginalTypeName;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(self->mAsmName==gComeFunResultObject) {
            __dec_obj40=self->mAsmName;
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct sType* __dec_obj29;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj29=self->item;
            /* a*/come_call_finalizer3(__dec_obj29,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct sNode* __dec_obj31;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj31=self->item;
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
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
char* __dec_obj34;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj34=self->item;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
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

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj41;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj41=self->v1;
            /* a*/come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result72__;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct list$1sTypeph* result_85;
struct list_item$1sTypeph* it_86;
void* __right_value136 = (void*)0;
struct list$1sTypeph* __result75__;
    if(self==((void*)0)) {
        __result72__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_85=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sTypeph"))));
    it_86=self->head;
    while(it_86!=((void*)0)) {
        list$1sTypeph_add(result_85,(struct sType*)come_increment_ref_count(sType_clone(it_86->item)));
        it_86=it_86->next;
    }
    __result75__ = gComeFunResultObject = __result_obj__ = result_85;
    /*i*/come_call_finalizer3(result_85,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value133 = (void*)0;
struct list_item$1sTypeph* litem_87;
struct sType* __dec_obj46;
void* __right_value134 = (void*)0;
struct list_item$1sTypeph* litem_88;
struct sType* __dec_obj47;
void* __right_value135 = (void*)0;
struct list_item$1sTypeph* litem_89;
struct sType* __dec_obj48;
struct list$1sTypeph* __result74__;
    if(self->len==0) {
        litem_87=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value133=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sTypeph"))));
        litem_87->prev=((void*)0);
        litem_87->next=((void*)0);
        __dec_obj46=litem_87->item;
        litem_87->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_87;
        self->head=litem_87;
    }
    else {
        if(self->len==1) {
            litem_88=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value134=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sTypeph"))));
            litem_88->prev=self->head;
            litem_88->next=((void*)0);
            __dec_obj47=litem_88->item;
            litem_88->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_88;
            self->head->next=litem_88;
        }
        else {
            litem_89=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sTypeph"))));
            litem_89->prev=self->tail;
            litem_89->next=((void*)0);
            __dec_obj48=litem_89->item;
            litem_89->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_89;
            self->tail=litem_89;
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
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct list$1sNodeph* result_90;
struct list_item$1sNodeph* it_91;
void* __right_value143 = (void*)0;
struct list$1sNodeph* __result79__;
    if(self==((void*)0)) {
        __result76__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    result_90=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sNodeph"))));
    it_91=self->head;
    while(it_91!=((void*)0)) {
        list$1sNodeph_add(result_90,(struct sNode*)come_increment_ref_count(sNode_clone(it_91->item)));
        it_91=it_91->next;
    }
    __result79__ = gComeFunResultObject = __result_obj__ = result_90;
    /*i*/come_call_finalizer3(result_90,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
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
void* __right_value140 = (void*)0;
struct list_item$1sNodeph* litem_92;
struct sNode* __dec_obj50;
void* __right_value141 = (void*)0;
struct list_item$1sNodeph* litem_93;
struct sNode* __dec_obj51;
void* __right_value142 = (void*)0;
struct list_item$1sNodeph* litem_94;
struct sNode* __dec_obj52;
struct list$1sNodeph* __result78__;
    if(self->len==0) {
        litem_92=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value140=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sNodeph"))));
        litem_92->prev=((void*)0);
        litem_92->next=((void*)0);
        __dec_obj50=litem_92->item;
        litem_92->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_92;
        self->head=litem_92;
    }
    else {
        if(self->len==1) {
            litem_93=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value141=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sNodeph"))));
            litem_93->prev=self->head;
            litem_93->next=((void*)0);
            __dec_obj51=litem_93->item;
            litem_93->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_93;
            self->head->next=litem_93;
        }
        else {
            litem_94=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value142=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sNodeph"))));
            litem_94->prev=self->tail;
            litem_94->next=((void*)0);
            __dec_obj52=litem_94->item;
            litem_94->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_94;
            self->tail=litem_94;
        }
    }
    self->len++;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result80__;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct list$1charph* result_95;
struct list_item$1charph* it_96;
void* __right_value151 = (void*)0;
struct list$1charph* __result83__;
    if(self==((void*)0)) {
        __result80__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result80__;
    }
    result_95=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 137, "list$1charph"))));
    it_96=self->head;
    while(it_96!=((void*)0)) {
        list$1charph_add(result_95,(char*)come_increment_ref_count(string_clone(it_96->item)));
        it_96=it_96->next;
    }
    __result83__ = gComeFunResultObject = __result_obj__ = result_95;
    /*i*/come_call_finalizer3(result_95,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result81__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value148 = (void*)0;
struct list_item$1charph* litem_97;
char* __dec_obj55;
void* __right_value149 = (void*)0;
struct list_item$1charph* litem_98;
char* __dec_obj56;
void* __right_value150 = (void*)0;
struct list_item$1charph* litem_99;
char* __dec_obj57;
struct list$1charph* __result82__;
    if(self->len==0) {
        litem_97=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value148=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1charph"))));
        litem_97->prev=((void*)0);
        litem_97->next=((void*)0);
        __dec_obj55=litem_97->item;
        litem_97->item=(char*)come_increment_ref_count(item);
        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_97;
        self->head=litem_97;
    }
    else {
        if(self->len==1) {
            litem_98=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value149=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1charph"))));
            litem_98->prev=self->head;
            litem_98->next=((void*)0);
            __dec_obj56=litem_98->item;
            litem_98->item=(char*)come_increment_ref_count(item);
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_98;
            self->head->next=litem_98;
        }
        else {
            litem_99=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value150=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1charph"))));
            litem_99->prev=self->tail;
            litem_99->next=((void*)0);
            __dec_obj57=litem_99->item;
            litem_99->item=(char*)come_increment_ref_count(item);
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_99;
            self->tail=litem_99;
        }
    }
    self->len++;
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value159 = (void*)0;
struct list_item$1CVALUEph* litem_100;
struct CVALUE* __dec_obj65;
void* __right_value160 = (void*)0;
struct list_item$1CVALUEph* litem_101;
struct CVALUE* __dec_obj69;
void* __right_value161 = (void*)0;
struct list_item$1CVALUEph* litem_102;
struct CVALUE* __dec_obj70;
struct list$1CVALUEph* __result85__;
    if(self->len==0) {
        litem_100=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value159=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1CVALUEph"))));
        litem_100->prev=((void*)0);
        litem_100->next=((void*)0);
        __dec_obj65=litem_100->item;
        litem_100->item=(struct CVALUE*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj65,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_100;
        self->head=litem_100;
    }
    else {
        if(self->len==1) {
            litem_101=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value160=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1CVALUEph"))));
            litem_101->prev=self->head;
            litem_101->next=((void*)0);
            __dec_obj69=litem_101->item;
            litem_101->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj69,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_101;
            self->head->next=litem_101;
        }
        else {
            litem_102=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value161=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1CVALUEph"))));
            litem_102->prev=self->tail;
            litem_102->next=((void*)0);
            __dec_obj70=litem_102->item;
            litem_102->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj70,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_102;
            self->tail=litem_102;
        }
    }
    self->len++;
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj66;
struct sType* __dec_obj67;
char* __dec_obj68;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(self->c_value==gComeFunResultObject) {
            __dec_obj66=self->c_value;
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj67=self->type;
            /* a*/come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj68=self->c_value_without_right_value_objects;
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct sNode* __dec_obj71;
struct sMinusMinusNode* __result87__;
    ((struct sNodeBase*)(__right_value162=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value162,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj71=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); }
    self->mQuote=quote;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sMinusMinusNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result87__;
}

char* sMinusMinusNode_kind(struct sMinusMinusNode* self){
void* __result_obj__=(void*)0;
void* __right_value164 = (void*)0;
char* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value164=__builtin_string("sMinusMinusNode")));
    __right_value164 = come_decrement_ref_count2(__right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info){
struct sNode* left_103;
void* __right_value165 = (void*)0;
struct CVALUE* left_value_104;
struct sType* type_105;
char* fun_name_106;
_Bool calling_fun_107;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
struct CVALUE* come_value_108;
void* __right_value168 = (void*)0;
char* __dec_obj74;
void* __right_value169 = (void*)0;
struct sType* __dec_obj75;
_Bool __result89__;
memset(&calling_fun_107, 0, sizeof(_Bool));
    left_103=self->mLeft;
    if(!node_compile(left_103,info)) {
        return (_Bool)0;
    }
    left_value_104=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_105=(struct sType*)come_increment_ref_count(left_value_104->type);
    fun_name_106="operator_minus_minus";
    if(self->mQuote) {
        calling_fun_107=(_Bool)0;
    }
    else {
        calling_fun_107=operator_overload_fun_self(type_105,fun_name_106,left_value_104,info);
    }
    if(!calling_fun_107) {
        come_value_108=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 96, "CVALUE"))));
        __dec_obj74=come_value_108->c_value;
        come_value_108->c_value=(char*)come_increment_ref_count(xsprintf("%s--",left_value_104->c_value));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj75=come_value_108->type;
        come_value_108->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_104->type));
        /* a*/come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_108->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_108));
        add_come_last_code(info,"%s;\n",come_value_108->c_value);
        /*i*/come_call_finalizer3(come_value_108,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result89__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_104,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result89__;
}

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct sNode* __dec_obj76;
void* __right_value172 = (void*)0;
struct sNode* __dec_obj77;
struct sPlusEqualNode* __result90__;
    ((struct sNodeBase*)(__right_value170=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value170,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj76=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj77=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    self->mQuote=quote;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sPlusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result90__;
}

char* sPlusEqualNode_kind(struct sPlusEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value173 = (void*)0;
char* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value173=__builtin_string("sPlusEqualNode")));
    __right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info){
struct sNode* left_109;
void* __right_value174 = (void*)0;
struct CVALUE* left_value_110;
struct sNode* right_111;
_Bool __result92__;
void* __right_value175 = (void*)0;
struct CVALUE* right_value_112;
struct sType* type_113;
char* fun_name_114;
_Bool calling_fun_115;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
struct CVALUE* come_value_116;
void* __right_value178 = (void*)0;
char* __dec_obj81;
void* __right_value179 = (void*)0;
struct sType* __dec_obj82;
_Bool __result93__;
memset(&calling_fun_115, 0, sizeof(_Bool));
    left_109=self->mLeft;
    if(!node_compile(left_109,info)) {
        return (_Bool)0;
    }
    left_value_110=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_111=self->mRight;
    if(!node_compile(right_111,info)) {
        __result92__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result92__;
    }
    right_value_112=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_113=(struct sType*)come_increment_ref_count(left_value_110->type);
    fun_name_114="operator_plus_equal";
    if(self->mQuote) {
        calling_fun_115=(_Bool)0;
    }
    else {
        calling_fun_115=operator_overload_fun(type_113,fun_name_114,left_value_110,right_value_112,(_Bool)0,info);
    }
    if(!calling_fun_115) {
        come_value_116=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 159, "CVALUE"))));
        __dec_obj81=come_value_116->c_value;
        come_value_116->c_value=(char*)come_increment_ref_count(xsprintf("%s+=%s",left_value_110->c_value,right_value_112->c_value));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj82=come_value_116->type;
        come_value_116->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_110->type));
        /* a*/come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_116->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_116));
        add_come_last_code(info,"%s;\n",come_value_116->c_value);
        /*i*/come_call_finalizer3(come_value_116,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result93__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_112,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_113,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result93__;
}

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
struct sNode* __dec_obj83;
void* __right_value182 = (void*)0;
struct sNode* __dec_obj84;
struct sMinusEqualNode* __result94__;
    ((struct sNodeBase*)(__right_value180=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value180,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj83=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj84=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sMinusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result94__;
}

char* sMinusEqualNode_kind(struct sMinusEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value183 = (void*)0;
char* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value183=__builtin_string("sPlusEqualNode")));
    __right_value183 = come_decrement_ref_count2(__right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info){
struct sNode* left_117;
void* __right_value184 = (void*)0;
struct CVALUE* left_value_118;
struct sNode* right_119;
_Bool __result96__;
void* __right_value185 = (void*)0;
struct CVALUE* right_value_120;
struct sType* type_121;
char* fun_name_122;
_Bool calling_fun_123;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct CVALUE* come_value_124;
void* __right_value188 = (void*)0;
char* __dec_obj88;
void* __right_value189 = (void*)0;
struct sType* __dec_obj89;
_Bool __result97__;
memset(&calling_fun_123, 0, sizeof(_Bool));
    left_117=self->mLeft;
    if(!node_compile(left_117,info)) {
        return (_Bool)0;
    }
    left_value_118=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_119=self->mRight;
    if(!node_compile(right_119,info)) {
        __result96__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_118,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result96__;
    }
    right_value_120=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_121=(struct sType*)come_increment_ref_count(left_value_118->type);
    fun_name_122="operator_minus_equal";
    if(self->mQuote) {
        calling_fun_123=(_Bool)0;
    }
    else {
        calling_fun_123=operator_overload_fun(type_121,fun_name_122,left_value_118,right_value_120,(_Bool)0,info);
    }
    if(!calling_fun_123) {
        come_value_124=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 223, "CVALUE"))));
        __dec_obj88=come_value_124->c_value;
        come_value_124->c_value=(char*)come_increment_ref_count(xsprintf("%s-=%s",left_value_118->c_value,right_value_120->c_value));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj89=come_value_124->type;
        come_value_124->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_118->type));
        /* a*/come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_124->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
        add_come_last_code(info,"%s;\n",come_value_124->c_value);
        /*i*/come_call_finalizer3(come_value_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result97__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_118,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_120,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_121,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result97__;
}

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct sNode* __dec_obj90;
void* __right_value192 = (void*)0;
struct sNode* __dec_obj91;
struct sMultEqualNode* __result98__;
    ((struct sNodeBase*)(__right_value190=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value190,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj90=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj91=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); }
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sMultEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result98__;
}

char* sMultEqualNode_kind(struct sMultEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value193 = (void*)0;
char* __result99__;
    __result99__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value193=__builtin_string("sMultEqualNode")));
    __right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info){
struct sNode* left_125;
void* __right_value194 = (void*)0;
struct CVALUE* left_value_126;
struct sNode* right_127;
_Bool __result100__;
void* __right_value195 = (void*)0;
struct CVALUE* right_value_128;
struct sType* type_129;
char* fun_name_130;
_Bool calling_fun_131;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct CVALUE* come_value_132;
void* __right_value198 = (void*)0;
char* __dec_obj95;
void* __right_value199 = (void*)0;
struct sType* __dec_obj96;
_Bool __result101__;
memset(&calling_fun_131, 0, sizeof(_Bool));
    left_125=self->mLeft;
    if(!node_compile(left_125,info)) {
        return (_Bool)0;
    }
    left_value_126=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_127=self->mRight;
    if(!node_compile(right_127,info)) {
        __result100__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result100__;
    }
    right_value_128=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_129=(struct sType*)come_increment_ref_count(left_value_126->type);
    fun_name_130="operator_mult_equal";
    if(self->mQuote) {
        calling_fun_131=(_Bool)0;
    }
    else {
        calling_fun_131=operator_overload_fun(type_129,fun_name_130,left_value_126,right_value_128,(_Bool)0,info);
    }
    if(!calling_fun_131) {
        come_value_132=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 287, "CVALUE"))));
        __dec_obj95=come_value_132->c_value;
        come_value_132->c_value=(char*)come_increment_ref_count(xsprintf("%s*=%s",left_value_126->c_value,right_value_128->c_value));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj96=come_value_132->type;
        come_value_132->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_126->type));
        /* a*/come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_132->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_132));
        add_come_last_code(info,"%s;\n",come_value_132->c_value);
        /*i*/come_call_finalizer3(come_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result101__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result101__;
}

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct sNode* __dec_obj97;
void* __right_value202 = (void*)0;
struct sNode* __dec_obj98;
struct sDivEqualNode* __result102__;
    ((struct sNodeBase*)(__right_value200=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value200,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj97=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj98=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); }
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDivEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result102__;
}

char* sDivEqualNode_kind(struct sDivEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value203 = (void*)0;
char* __result103__;
    __result103__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value203=__builtin_string("sDivEqualNode")));
    __right_value203 = come_decrement_ref_count2(__right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info){
struct sNode* left_133;
void* __right_value204 = (void*)0;
struct CVALUE* left_value_134;
struct sNode* right_135;
_Bool __result104__;
void* __right_value205 = (void*)0;
struct CVALUE* right_value_136;
struct sType* type_137;
char* fun_name_138;
_Bool calling_fun_139;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct CVALUE* come_value_140;
void* __right_value208 = (void*)0;
char* __dec_obj102;
void* __right_value209 = (void*)0;
struct sType* __dec_obj103;
_Bool __result105__;
memset(&calling_fun_139, 0, sizeof(_Bool));
    left_133=self->mLeft;
    if(!node_compile(left_133,info)) {
        return (_Bool)0;
    }
    left_value_134=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_135=self->mRight;
    if(!node_compile(right_135,info)) {
        __result104__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result104__;
    }
    right_value_136=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_137=(struct sType*)come_increment_ref_count(left_value_134->type);
    fun_name_138="operator_div_equal";
    if(self->mQuote) {
        calling_fun_139=(_Bool)0;
    }
    else {
        calling_fun_139=operator_overload_fun(type_137,fun_name_138,left_value_134,right_value_136,(_Bool)0,info);
    }
    if(!calling_fun_139) {
        come_value_140=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 351, "CVALUE"))));
        __dec_obj102=come_value_140->c_value;
        come_value_140->c_value=(char*)come_increment_ref_count(xsprintf("%s/=%s",left_value_134->c_value,right_value_136->c_value));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj103=come_value_140->type;
        come_value_140->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_134->type));
        /* a*/come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_140->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_140));
        add_come_last_code(info,"%s;\n",come_value_140->c_value);
        /*i*/come_call_finalizer3(come_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result105__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_136,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_137,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result105__;
}

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct sNode* __dec_obj104;
void* __right_value212 = (void*)0;
struct sNode* __dec_obj105;
struct sModEqualNode* __result106__;
    ((struct sNodeBase*)(__right_value210=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value210,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj104=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj105=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sModEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result106__;
}

char* sModEqualNode_kind(struct sModEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value213 = (void*)0;
char* __result107__;
    __result107__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value213=__builtin_string("sModEqualNode")));
    __right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info){
struct sNode* left_141;
void* __right_value214 = (void*)0;
struct CVALUE* left_value_142;
struct sNode* right_143;
_Bool __result108__;
void* __right_value215 = (void*)0;
struct CVALUE* right_value_144;
struct sType* type_145;
char* fun_name_146;
_Bool calling_fun_147;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct CVALUE* come_value_148;
void* __right_value218 = (void*)0;
char* __dec_obj109;
void* __right_value219 = (void*)0;
struct sType* __dec_obj110;
_Bool __result109__;
memset(&calling_fun_147, 0, sizeof(_Bool));
    left_141=self->mLeft;
    if(!node_compile(left_141,info)) {
        return (_Bool)0;
    }
    left_value_142=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_143=self->mRight;
    if(!node_compile(right_143,info)) {
        __result108__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result108__;
    }
    right_value_144=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_145=(struct sType*)come_increment_ref_count(left_value_142->type);
    fun_name_146="operator_mod_equal";
    if(self->mQuote) {
        calling_fun_147=(_Bool)0;
    }
    else {
        calling_fun_147=operator_overload_fun(type_145,fun_name_146,left_value_142,right_value_144,(_Bool)0,info);
    }
    if(!calling_fun_147) {
        come_value_148=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 415, "CVALUE"))));
        __dec_obj109=come_value_148->c_value;
        come_value_148->c_value=(char*)come_increment_ref_count(xsprintf("%s%%=%s",left_value_142->c_value,right_value_144->c_value));
        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj110=come_value_148->type;
        come_value_148->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_142->type));
        /* a*/come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_148->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
        add_come_last_code(info,"%s;\n",come_value_148->c_value);
        /*i*/come_call_finalizer3(come_value_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result109__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_144,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result109__;
}

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct sNode* __dec_obj111;
void* __right_value222 = (void*)0;
struct sNode* __dec_obj112;
struct sLShifEqualNode* __result110__;
    ((struct sNodeBase*)(__right_value220=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value220,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj111=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj112=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); }
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLShifEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result110__;
}

char* sLShifEqualNode_kind(struct sLShifEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value223 = (void*)0;
char* __result111__;
    __result111__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value223=__builtin_string("sLShifEqualNode")));
    __right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info){
struct sNode* left_149;
void* __right_value224 = (void*)0;
struct CVALUE* left_value_150;
struct sNode* right_151;
_Bool __result112__;
void* __right_value225 = (void*)0;
struct CVALUE* right_value_152;
struct sType* type_153;
char* fun_name_154;
_Bool calling_fun_155;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct CVALUE* come_value_156;
void* __right_value228 = (void*)0;
char* __dec_obj116;
void* __right_value229 = (void*)0;
struct sType* __dec_obj117;
_Bool __result113__;
memset(&calling_fun_155, 0, sizeof(_Bool));
    left_149=self->mLeft;
    if(!node_compile(left_149,info)) {
        return (_Bool)0;
    }
    left_value_150=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_151=self->mRight;
    if(!node_compile(right_151,info)) {
        __result112__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result112__;
    }
    right_value_152=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_153=(struct sType*)come_increment_ref_count(left_value_150->type);
    fun_name_154="operator_lshift_equal";
    if(self->mQuote) {
        calling_fun_155=(_Bool)0;
    }
    else {
        calling_fun_155=operator_overload_fun(type_153,fun_name_154,left_value_150,right_value_152,(_Bool)0,info);
    }
    if(!calling_fun_155) {
        come_value_156=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 479, "CVALUE"))));
        __dec_obj116=come_value_156->c_value;
        come_value_156->c_value=(char*)come_increment_ref_count(xsprintf("%s<<=%s",left_value_150->c_value,right_value_152->c_value));
        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj117=come_value_156->type;
        come_value_156->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_150->type));
        /* a*/come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_156->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_156));
        add_come_last_code(info,"%s;\n",come_value_156->c_value);
        /*i*/come_call_finalizer3(come_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result113__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_152,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_153,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result113__;
}

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct sNode* __dec_obj118;
void* __right_value232 = (void*)0;
struct sNode* __dec_obj119;
struct sRShiftEqualNode* __result114__;
    ((struct sNodeBase*)(__right_value230=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value230,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj118=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj119=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); }
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sRShiftEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result114__;
}

char* sRShiftEqualNode_kind(struct sRShiftEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value233 = (void*)0;
char* __result115__;
    __result115__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value233=__builtin_string("sRShiftEqualNode")));
    __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info){
struct sNode* left_157;
void* __right_value234 = (void*)0;
struct CVALUE* left_value_158;
struct sNode* right_159;
_Bool __result116__;
void* __right_value235 = (void*)0;
struct CVALUE* right_value_160;
struct sType* type_161;
char* fun_name_162;
_Bool calling_fun_163;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct CVALUE* come_value_164;
void* __right_value238 = (void*)0;
char* __dec_obj123;
void* __right_value239 = (void*)0;
struct sType* __dec_obj124;
_Bool __result117__;
memset(&calling_fun_163, 0, sizeof(_Bool));
    left_157=self->mLeft;
    if(!node_compile(left_157,info)) {
        return (_Bool)0;
    }
    left_value_158=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_159=self->mRight;
    if(!node_compile(right_159,info)) {
        __result116__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result116__;
    }
    right_value_160=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_161=(struct sType*)come_increment_ref_count(left_value_158->type);
    fun_name_162="operator_rshift_equal";
    if(self->mQuote) {
        calling_fun_163=(_Bool)0;
    }
    else {
        calling_fun_163=operator_overload_fun(type_161,fun_name_162,left_value_158,right_value_160,(_Bool)0,info);
    }
    if(!calling_fun_163) {
        come_value_164=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 543, "CVALUE"))));
        __dec_obj123=come_value_164->c_value;
        come_value_164->c_value=(char*)come_increment_ref_count(xsprintf("%s>>=%s",left_value_158->c_value,right_value_160->c_value));
        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj124=come_value_164->type;
        come_value_164->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_158->type));
        /* a*/come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_164->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_164));
        add_come_last_code(info,"%s;\n",come_value_164->c_value);
        /*i*/come_call_finalizer3(come_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result117__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_161,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result117__;
}

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct sNode* __dec_obj125;
void* __right_value242 = (void*)0;
struct sNode* __dec_obj126;
struct sXorEqualNode* __result118__;
    ((struct sNodeBase*)(__right_value240=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value240,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj125=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj126=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sXorEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result118__;
}

char* sXorEqualNode_kind(struct sXorEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value243 = (void*)0;
char* __result119__;
    __result119__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value243=__builtin_string("sXorEqualNode")));
    __right_value243 = come_decrement_ref_count2(__right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info){
struct sNode* left_165;
void* __right_value244 = (void*)0;
struct CVALUE* left_value_166;
struct sNode* right_167;
_Bool __result120__;
void* __right_value245 = (void*)0;
struct CVALUE* right_value_168;
struct sType* type_169;
char* fun_name_170;
_Bool calling_fun_171;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct CVALUE* come_value_172;
void* __right_value248 = (void*)0;
char* __dec_obj130;
void* __right_value249 = (void*)0;
struct sType* __dec_obj131;
_Bool __result121__;
memset(&calling_fun_171, 0, sizeof(_Bool));
    left_165=self->mLeft;
    if(!node_compile(left_165,info)) {
        return (_Bool)0;
    }
    left_value_166=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_167=self->mRight;
    if(!node_compile(right_167,info)) {
        __result120__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result120__;
    }
    right_value_168=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_169=(struct sType*)come_increment_ref_count(left_value_166->type);
    fun_name_170="operator_xor_equal";
    if(self->mQuote) {
        calling_fun_171=(_Bool)0;
    }
    else {
        calling_fun_171=operator_overload_fun(type_169,fun_name_170,left_value_166,right_value_168,(_Bool)0,info);
    }
    if(!calling_fun_171) {
        come_value_172=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 607, "CVALUE"))));
        __dec_obj130=come_value_172->c_value;
        come_value_172->c_value=(char*)come_increment_ref_count(xsprintf("%s^=%s",left_value_166->c_value,right_value_168->c_value));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj131=come_value_172->type;
        come_value_172->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_166->type));
        /* a*/come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_172->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_172));
        add_come_last_code(info,"%s;\n",come_value_172->c_value);
        /*i*/come_call_finalizer3(come_value_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result121__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result121__;
}

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct sNode* __dec_obj132;
void* __right_value252 = (void*)0;
struct sNode* __dec_obj133;
struct sOrEqualNode* __result122__;
    ((struct sNodeBase*)(__right_value250=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value250,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj132=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj133=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sOrEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result122__;
}

char* sOrEqualNode_kind(struct sOrEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value253 = (void*)0;
char* __result123__;
    __result123__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value253=__builtin_string("sOrEqualNode")));
    __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info){
struct sNode* left_173;
void* __right_value254 = (void*)0;
struct CVALUE* left_value_174;
struct sNode* right_175;
_Bool __result124__;
void* __right_value255 = (void*)0;
struct CVALUE* right_value_176;
struct sType* type_177;
char* fun_name_178;
_Bool calling_fun_179;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct CVALUE* come_value_180;
void* __right_value258 = (void*)0;
char* __dec_obj137;
void* __right_value259 = (void*)0;
struct sType* __dec_obj138;
_Bool __result125__;
memset(&calling_fun_179, 0, sizeof(_Bool));
    left_173=self->mLeft;
    if(!node_compile(left_173,info)) {
        return (_Bool)0;
    }
    left_value_174=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_175=self->mRight;
    if(!node_compile(right_175,info)) {
        __result124__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result124__;
    }
    right_value_176=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_177=(struct sType*)come_increment_ref_count(left_value_174->type);
    fun_name_178="operator_or_equal";
    if(self->mQuote) {
        calling_fun_179=(_Bool)0;
    }
    else {
        calling_fun_179=operator_overload_fun(type_177,fun_name_178,left_value_174,right_value_176,(_Bool)0,info);
    }
    if(!calling_fun_179) {
        come_value_180=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 671, "CVALUE"))));
        __dec_obj137=come_value_180->c_value;
        come_value_180->c_value=(char*)come_increment_ref_count(xsprintf("%s|=%s",left_value_174->c_value,right_value_176->c_value));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj138=come_value_180->type;
        come_value_180->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_174->type));
        /* a*/come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_180->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_180));
        add_come_last_code(info,"%s;\n",come_value_180->c_value);
        /*i*/come_call_finalizer3(come_value_180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result125__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_177,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result125__;
}

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct sNode* __dec_obj139;
void* __right_value262 = (void*)0;
struct sNode* __dec_obj140;
struct sAndEqualNode* __result126__;
    ((struct sNodeBase*)(__right_value260=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value260,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj139=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj140=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); }
    __result126__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAndEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result126__;
}

char* sAndEqualNode_kind(struct sAndEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
char* __result127__;
    __result127__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value263=__builtin_string("sAndEqualNode")));
    __right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info){
struct sNode* left_181;
void* __right_value264 = (void*)0;
struct CVALUE* left_value_182;
struct sNode* right_183;
_Bool __result128__;
void* __right_value265 = (void*)0;
struct CVALUE* right_value_184;
struct sType* type_185;
char* fun_name_186;
_Bool calling_fun_187;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct CVALUE* come_value_188;
void* __right_value268 = (void*)0;
char* __dec_obj144;
void* __right_value269 = (void*)0;
struct sType* __dec_obj145;
_Bool __result129__;
memset(&calling_fun_187, 0, sizeof(_Bool));
    left_181=self->mLeft;
    if(!node_compile(left_181,info)) {
        return (_Bool)0;
    }
    left_value_182=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_183=self->mRight;
    if(!node_compile(right_183,info)) {
        __result128__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result128__;
    }
    right_value_184=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_185=(struct sType*)come_increment_ref_count(left_value_182->type);
    fun_name_186="operator_and_equal";
    if(self->mQuote) {
        calling_fun_187=(_Bool)0;
    }
    else {
        calling_fun_187=operator_overload_fun(type_185,fun_name_186,left_value_182,right_value_184,(_Bool)0,info);
    }
    if(!calling_fun_187) {
        come_value_188=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 735, "CVALUE"))));
        __dec_obj144=come_value_188->c_value;
        come_value_188->c_value=(char*)come_increment_ref_count(xsprintf("%s&=%s",left_value_182->c_value,right_value_184->c_value));
        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj145=come_value_188->type;
        come_value_188->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_182->type));
        /* a*/come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_188->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_188));
        add_come_last_code(info,"%s;\n",come_value_188->c_value);
        /*i*/come_call_finalizer3(come_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result129__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result129__;
}

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sNode* __dec_obj146;
void* __right_value272 = (void*)0;
struct sNode* __dec_obj147;
struct sExpEqualNode* __result130__;
    ((struct sNodeBase*)(__right_value270=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value270,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj146=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj147=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); }
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sExpEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result130__;
}

char* sExpEqualNode_kind(struct sExpEqualNode* self){
void* __result_obj__=(void*)0;
void* __right_value273 = (void*)0;
char* __result131__;
    __result131__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value273=__builtin_string("sExpEqualNode")));
    __right_value273 = come_decrement_ref_count2(__right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info){
struct sNode* left_189;
void* __right_value274 = (void*)0;
struct CVALUE* left_value_190;
struct sNode* right_191;
_Bool __result132__;
void* __right_value275 = (void*)0;
struct CVALUE* right_value_192;
struct sType* type_193;
char* fun_name_194;
_Bool calling_fun_195;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct CVALUE* come_value_196;
void* __right_value278 = (void*)0;
char* __dec_obj151;
void* __right_value279 = (void*)0;
struct sType* __dec_obj152;
_Bool __result133__;
memset(&calling_fun_195, 0, sizeof(_Bool));
    left_189=self->mLeft;
    if(!node_compile(left_189,info)) {
        return (_Bool)0;
    }
    left_value_190=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_191=self->mRight;
    if(!node_compile(right_191,info)) {
        __result132__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result132__;
    }
    right_value_192=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_193=(struct sType*)come_increment_ref_count(left_value_190->type);
    fun_name_194="operator_exp_equal";
    if(self->mQuote) {
        calling_fun_195=(_Bool)0;
    }
    else {
        calling_fun_195=operator_overload_fun(type_193,fun_name_194,left_value_190,right_value_192,(_Bool)0,info);
    }
    if(!calling_fun_195) {
        come_value_196=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 799, "CVALUE"))));
        __dec_obj151=come_value_196->c_value;
        come_value_196->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_190->c_value,right_value_192->c_value));
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj152=come_value_196->type;
        come_value_196->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_190->type));
        /* a*/come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_196->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_196));
        add_come_last_code(info,"%s;\n",come_value_196->c_value);
        /*i*/come_call_finalizer3(come_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result133__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_192,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result133__;
}

struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool quote_197;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct sNode* _inf_value1;
struct sPlusPlusNode* _inf_obj_value1;
void* __right_value285 = (void*)0;
struct sNode* __result136__;
_Bool quote_199;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct sNode* _inf_value2;
struct sMinusMinusNode* _inf_obj_value2;
void* __right_value291 = (void*)0;
struct sNode* __result139__;
_Bool quote_201;
void* __right_value292 = (void*)0;
struct sNode* right_node_202;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sNode* _inf_value3;
struct sPlusEqualNode* _inf_obj_value3;
void* __right_value299 = (void*)0;
struct sNode* __result142__;
_Bool quote_204;
void* __right_value300 = (void*)0;
struct sNode* right_node_205;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sNode* _inf_value4;
struct sMinusEqualNode* _inf_obj_value4;
void* __right_value307 = (void*)0;
struct sNode* __result145__;
_Bool quote_207;
void* __right_value308 = (void*)0;
struct sNode* right_node_208;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct sNode* _inf_value5;
struct sMultEqualNode* _inf_obj_value5;
void* __right_value315 = (void*)0;
struct sNode* __result148__;
_Bool quote_210;
void* __right_value316 = (void*)0;
struct sNode* right_node_211;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sNode* _inf_value6;
struct sDivEqualNode* _inf_obj_value6;
void* __right_value323 = (void*)0;
struct sNode* __result151__;
_Bool quote_213;
void* __right_value324 = (void*)0;
struct sNode* right_node_214;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct sNode* _inf_value7;
struct sModEqualNode* _inf_obj_value7;
void* __right_value331 = (void*)0;
struct sNode* __result154__;
_Bool quote_216;
void* __right_value332 = (void*)0;
struct sNode* right_node_217;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sNode* _inf_value8;
struct sLShifEqualNode* _inf_obj_value8;
void* __right_value339 = (void*)0;
struct sNode* __result157__;
_Bool quote_219;
void* __right_value340 = (void*)0;
struct sNode* right_node_220;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sNode* _inf_value9;
struct sRShiftEqualNode* _inf_obj_value9;
void* __right_value347 = (void*)0;
struct sNode* __result160__;
_Bool quote_222;
void* __right_value348 = (void*)0;
struct sNode* right_node_223;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sNode* _inf_value10;
struct sXorEqualNode* _inf_obj_value10;
void* __right_value355 = (void*)0;
struct sNode* __result163__;
_Bool quote_225;
void* __right_value356 = (void*)0;
struct sNode* right_node_226;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct sNode* _inf_value11;
struct sAndEqualNode* _inf_obj_value11;
void* __right_value363 = (void*)0;
struct sNode* __result166__;
_Bool quote_228;
void* __right_value364 = (void*)0;
struct sNode* right_node_229;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sNode* _inf_value12;
struct sOrEqualNode* _inf_obj_value12;
void* __right_value371 = (void*)0;
struct sNode* __result169__;
_Bool quote_231;
void* __right_value372 = (void*)0;
struct sNode* right_node_232;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sNode* _inf_value13;
struct sExpEqualNode* _inf_obj_value13;
void* __right_value379 = (void*)0;
struct sNode* __result172__;
void* __right_value380 = (void*)0;
struct sNode* __result173__;
memset(&quote_197, 0, sizeof(_Bool));
memset(&quote_199, 0, sizeof(_Bool));
memset(&quote_201, 0, sizeof(_Bool));
memset(&quote_204, 0, sizeof(_Bool));
memset(&quote_207, 0, sizeof(_Bool));
memset(&quote_210, 0, sizeof(_Bool));
memset(&quote_213, 0, sizeof(_Bool));
memset(&quote_216, 0, sizeof(_Bool));
memset(&quote_219, 0, sizeof(_Bool));
memset(&quote_222, 0, sizeof(_Bool));
memset(&quote_225, 0, sizeof(_Bool));
memset(&quote_228, 0, sizeof(_Bool));
memset(&quote_231, 0, sizeof(_Bool));
    if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==43&&*(info->p+2)==43)||(*info->p==43&&*(info->p+1)==43))) {
        if(*info->p==92) {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_197=(_Bool)1;
        }
        else {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_197=(_Bool)0;
        }
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 829, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sPlusPlusNode*)(__right_value281=sPlusPlusNode_initialize((struct sPlusPlusNode*)come_increment_ref_count((struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "19eq.c", 829, "sPlusPlusNode")),(struct sNode*)come_increment_ref_count(node),quote_197,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sPlusPlusNode_finalize;
        _inf_value1->clone=(void*)sPlusPlusNode_clone;
        _inf_value1->compile=(void*)sPlusPlusNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sPlusPlusNode_kind;
        __result136__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value285=_inf_value1));
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value281,sPlusPlusNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value285) { __right_value285 = come_decrement_ref_count2(__right_value285, ((struct sNode*)__right_value285)->finalize, ((struct sNode*)__right_value285)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result136__;
    }
    else {
        if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==45&&*(info->p+2)==45)||(*info->p==45&&*(info->p+1)==45))) {
            if(*info->p==92) {
                info->p+=3;
                skip_spaces_and_lf(info);
                quote_199=(_Bool)1;
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
                quote_199=(_Bool)0;
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 844, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sMinusMinusNode*)(__right_value287=sMinusMinusNode_initialize((struct sMinusMinusNode*)come_increment_ref_count((struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "19eq.c", 844, "sMinusMinusNode")),(struct sNode*)come_increment_ref_count(node),quote_199,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMinusMinusNode_finalize;
            _inf_value2->clone=(void*)sMinusMinusNode_clone;
            _inf_value2->compile=(void*)sMinusMinusNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sMinusMinusNode_kind;
            __result139__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value291=_inf_value2));
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value287,sMinusMinusNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value291) { __right_value291 = come_decrement_ref_count2(__right_value291, ((struct sNode*)__right_value291)->finalize, ((struct sNode*)__right_value291)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result139__;
        }
        else {
            if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==43&&*(info->p+2)==61)||(*info->p==43&&*(info->p+1)==61))) {
                if(*info->p==92) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    quote_201=(_Bool)1;
                }
                else {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    quote_201=(_Bool)0;
                }
                right_node_202=(struct sNode*)come_increment_ref_count(expression_v13(info));
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 862, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sPlusEqualNode*)(__right_value294=sPlusEqualNode_initialize((struct sPlusEqualNode*)come_increment_ref_count((struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "19eq.c", 862, "sPlusEqualNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_202),quote_201,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sPlusEqualNode_finalize;
                _inf_value3->clone=(void*)sPlusEqualNode_clone;
                _inf_value3->compile=(void*)sPlusEqualNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sPlusEqualNode_kind;
                __result142__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value299=_inf_value3));
                if(right_node_202) { right_node_202 = come_decrement_ref_count2(right_node_202, ((struct sNode*)right_node_202)->finalize, ((struct sNode*)right_node_202)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*g*/come_call_finalizer3(__right_value294,sPlusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value299) { __right_value299 = come_decrement_ref_count2(__right_value299, ((struct sNode*)__right_value299)->finalize, ((struct sNode*)__right_value299)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result142__;
                if(right_node_202) { right_node_202 = come_decrement_ref_count2(right_node_202, ((struct sNode*)right_node_202)->finalize, ((struct sNode*)right_node_202)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==45&&*(info->p+2)==61)||(*info->p==45&&*(info->p+1)==61))) {
                    if(*info->p==92) {
                        info->p+=3;
                        skip_spaces_and_lf(info);
                        quote_204=(_Bool)1;
                    }
                    else {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        quote_204=(_Bool)0;
                    }
                    right_node_205=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 880, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sMinusEqualNode*)(__right_value302=sMinusEqualNode_initialize((struct sMinusEqualNode*)come_increment_ref_count((struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "19eq.c", 880, "sMinusEqualNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_205),quote_204,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sMinusEqualNode_finalize;
                    _inf_value4->clone=(void*)sMinusEqualNode_clone;
                    _inf_value4->compile=(void*)sMinusEqualNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sNodeBase_terminated;
                    _inf_value4->kind=(void*)sMinusEqualNode_kind;
                    __result145__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value307=_inf_value4));
                    if(right_node_205) { right_node_205 = come_decrement_ref_count2(right_node_205, ((struct sNode*)right_node_205)->finalize, ((struct sNode*)right_node_205)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*g*/come_call_finalizer3(__right_value302,sMinusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value307) { __right_value307 = come_decrement_ref_count2(__right_value307, ((struct sNode*)__right_value307)->finalize, ((struct sNode*)__right_value307)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    gComeFunResultObject = (void*)0;
                    return __result145__;
                    if(right_node_205) { right_node_205 = come_decrement_ref_count2(right_node_205, ((struct sNode*)right_node_205)->finalize, ((struct sNode*)right_node_205)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==42&&*(info->p+2)==61)||(*info->p==42&&*(info->p+1)==61))) {
                        if(*info->p==92) {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            quote_207=(_Bool)1;
                        }
                        else {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            quote_207=(_Bool)0;
                        }
                        right_node_208=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 898, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sMultEqualNode*)(__right_value310=sMultEqualNode_initialize((struct sMultEqualNode*)come_increment_ref_count((struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "19eq.c", 898, "sMultEqualNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_208),quote_207,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sMultEqualNode_finalize;
                        _inf_value5->clone=(void*)sMultEqualNode_clone;
                        _inf_value5->compile=(void*)sMultEqualNode_compile;
                        _inf_value5->sline=(void*)sNodeBase_sline;
                        _inf_value5->sname=(void*)sNodeBase_sname;
                        _inf_value5->terminated=(void*)sNodeBase_terminated;
                        _inf_value5->kind=(void*)sMultEqualNode_kind;
                        __result148__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value315=_inf_value5));
                        if(right_node_208) { right_node_208 = come_decrement_ref_count2(right_node_208, ((struct sNode*)right_node_208)->finalize, ((struct sNode*)right_node_208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*g*/come_call_finalizer3(__right_value310,sMultEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(__right_value315) { __right_value315 = come_decrement_ref_count2(__right_value315, ((struct sNode*)__right_value315)->finalize, ((struct sNode*)__right_value315)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        gComeFunResultObject = (void*)0;
                        return __result148__;
                        if(right_node_208) { right_node_208 = come_decrement_ref_count2(right_node_208, ((struct sNode*)right_node_208)->finalize, ((struct sNode*)right_node_208)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==47&&*(info->p+2)==61)||(*info->p==47&&*(info->p+1)==61))) {
                            if(*info->p==92) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                quote_210=(_Bool)1;
                            }
                            else {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                                quote_210=(_Bool)0;
                            }
                            right_node_211=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 916, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sDivEqualNode*)(__right_value318=sDivEqualNode_initialize((struct sDivEqualNode*)come_increment_ref_count((struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "19eq.c", 916, "sDivEqualNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_211),quote_210,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sDivEqualNode_finalize;
                            _inf_value6->clone=(void*)sDivEqualNode_clone;
                            _inf_value6->compile=(void*)sDivEqualNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sNodeBase_terminated;
                            _inf_value6->kind=(void*)sDivEqualNode_kind;
                            __result151__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value323=_inf_value6));
                            if(right_node_211) { right_node_211 = come_decrement_ref_count2(right_node_211, ((struct sNode*)right_node_211)->finalize, ((struct sNode*)right_node_211)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*g*/come_call_finalizer3(__right_value318,sDivEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value323) { __right_value323 = come_decrement_ref_count2(__right_value323, ((struct sNode*)__right_value323)->finalize, ((struct sNode*)__right_value323)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result151__;
                            if(right_node_211) { right_node_211 = come_decrement_ref_count2(right_node_211, ((struct sNode*)right_node_211)->finalize, ((struct sNode*)right_node_211)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==37&&*(info->p+2)==61)||(*info->p==37&&*(info->p+1)==61))) {
                                if(*info->p==92) {
                                    info->p+=3;
                                    skip_spaces_and_lf(info);
                                    quote_213=(_Bool)1;
                                }
                                else {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    quote_213=(_Bool)0;
                                }
                                right_node_214=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 935, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sModEqualNode*)(__right_value326=sModEqualNode_initialize((struct sModEqualNode*)come_increment_ref_count((struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "19eq.c", 935, "sModEqualNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_214),quote_213,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sModEqualNode_finalize;
                                _inf_value7->clone=(void*)sModEqualNode_clone;
                                _inf_value7->compile=(void*)sModEqualNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sNodeBase_terminated;
                                _inf_value7->kind=(void*)sModEqualNode_kind;
                                __result154__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value331=_inf_value7));
                                if(right_node_214) { right_node_214 = come_decrement_ref_count2(right_node_214, ((struct sNode*)right_node_214)->finalize, ((struct sNode*)right_node_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*g*/come_call_finalizer3(__right_value326,sModEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(__right_value331) { __right_value331 = come_decrement_ref_count2(__right_value331, ((struct sNode*)__right_value331)->finalize, ((struct sNode*)__right_value331)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                gComeFunResultObject = (void*)0;
                                return __result154__;
                                if(right_node_214) { right_node_214 = come_decrement_ref_count2(right_node_214, ((struct sNode*)right_node_214)->finalize, ((struct sNode*)right_node_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)==61)||(*info->p==60&&*(info->p+1)==60&&*(info->p+2)==61))) {
                                    if(*info->p==92) {
                                        info->p+=4;
                                        skip_spaces_and_lf(info);
                                        quote_216=(_Bool)1;
                                    }
                                    else {
                                        info->p+=3;
                                        skip_spaces_and_lf(info);
                                        quote_216=(_Bool)0;
                                    }
                                    right_node_217=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 953, "struct sNode");
                                    _inf_obj_value8=come_increment_ref_count(((struct sLShifEqualNode*)(__right_value334=sLShifEqualNode_initialize((struct sLShifEqualNode*)come_increment_ref_count((struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "19eq.c", 953, "sLShifEqualNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_217),quote_216,info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sLShifEqualNode_finalize;
                                    _inf_value8->clone=(void*)sLShifEqualNode_clone;
                                    _inf_value8->compile=(void*)sLShifEqualNode_compile;
                                    _inf_value8->sline=(void*)sNodeBase_sline;
                                    _inf_value8->sname=(void*)sNodeBase_sname;
                                    _inf_value8->terminated=(void*)sNodeBase_terminated;
                                    _inf_value8->kind=(void*)sLShifEqualNode_kind;
                                    __result157__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value339=_inf_value8));
                                    if(right_node_217) { right_node_217 = come_decrement_ref_count2(right_node_217, ((struct sNode*)right_node_217)->finalize, ((struct sNode*)right_node_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    /*g*/come_call_finalizer3(__right_value334,sLShifEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(__right_value339) { __right_value339 = come_decrement_ref_count2(__right_value339, ((struct sNode*)__right_value339)->finalize, ((struct sNode*)__right_value339)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    gComeFunResultObject = (void*)0;
                                    return __result157__;
                                    if(right_node_217) { right_node_217 = come_decrement_ref_count2(right_node_217, ((struct sNode*)right_node_217)->finalize, ((struct sNode*)right_node_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)==61)||(*info->p==62&&*(info->p+1)==62&&*(info->p+2)==61))) {
                                        if(*info->p==92) {
                                            info->p+=4;
                                            skip_spaces_and_lf(info);
                                            quote_219=(_Bool)1;
                                        }
                                        else {
                                            info->p+=3;
                                            skip_spaces_and_lf(info);
                                            quote_219=(_Bool)0;
                                        }
                                        right_node_220=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 971, "struct sNode");
                                        _inf_obj_value9=come_increment_ref_count(((struct sRShiftEqualNode*)(__right_value342=sRShiftEqualNode_initialize((struct sRShiftEqualNode*)come_increment_ref_count((struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "19eq.c", 971, "sRShiftEqualNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_220),quote_219,info))));
                                        _inf_value9->_protocol_obj=_inf_obj_value9;
                                        _inf_value9->finalize=(void*)sRShiftEqualNode_finalize;
                                        _inf_value9->clone=(void*)sRShiftEqualNode_clone;
                                        _inf_value9->compile=(void*)sRShiftEqualNode_compile;
                                        _inf_value9->sline=(void*)sNodeBase_sline;
                                        _inf_value9->sname=(void*)sNodeBase_sname;
                                        _inf_value9->terminated=(void*)sNodeBase_terminated;
                                        _inf_value9->kind=(void*)sRShiftEqualNode_kind;
                                        __result160__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value347=_inf_value9));
                                        if(right_node_220) { right_node_220 = come_decrement_ref_count2(right_node_220, ((struct sNode*)right_node_220)->finalize, ((struct sNode*)right_node_220)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        /*g*/come_call_finalizer3(__right_value342,sRShiftEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(__right_value347) { __right_value347 = come_decrement_ref_count2(__right_value347, ((struct sNode*)__right_value347)->finalize, ((struct sNode*)__right_value347)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        gComeFunResultObject = (void*)0;
                                        return __result160__;
                                        if(right_node_220) { right_node_220 = come_decrement_ref_count2(right_node_220, ((struct sNode*)right_node_220)->finalize, ((struct sNode*)right_node_220)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==94&&*(info->p+2)==61)||(*info->p==94&&*(info->p+1)==61))) {
                                            if(*info->p==92) {
                                                info->p+=3;
                                                skip_spaces_and_lf(info);
                                                quote_222=(_Bool)1;
                                            }
                                            else {
                                                info->p+=2;
                                                skip_spaces_and_lf(info);
                                                quote_222=(_Bool)0;
                                            }
                                            right_node_223=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 989, "struct sNode");
                                            _inf_obj_value10=come_increment_ref_count(((struct sXorEqualNode*)(__right_value350=sXorEqualNode_initialize((struct sXorEqualNode*)come_increment_ref_count((struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "19eq.c", 989, "sXorEqualNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_223),quote_222,info))));
                                            _inf_value10->_protocol_obj=_inf_obj_value10;
                                            _inf_value10->finalize=(void*)sXorEqualNode_finalize;
                                            _inf_value10->clone=(void*)sXorEqualNode_clone;
                                            _inf_value10->compile=(void*)sXorEqualNode_compile;
                                            _inf_value10->sline=(void*)sNodeBase_sline;
                                            _inf_value10->sname=(void*)sNodeBase_sname;
                                            _inf_value10->terminated=(void*)sNodeBase_terminated;
                                            _inf_value10->kind=(void*)sXorEqualNode_kind;
                                            __result163__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value355=_inf_value10));
                                            if(right_node_223) { right_node_223 = come_decrement_ref_count2(right_node_223, ((struct sNode*)right_node_223)->finalize, ((struct sNode*)right_node_223)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            /*g*/come_call_finalizer3(__right_value350,sXorEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(__right_value355) { __right_value355 = come_decrement_ref_count2(__right_value355, ((struct sNode*)__right_value355)->finalize, ((struct sNode*)__right_value355)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            gComeFunResultObject = (void*)0;
                                            return __result163__;
                                            if(right_node_223) { right_node_223 = come_decrement_ref_count2(right_node_223, ((struct sNode*)right_node_223)->finalize, ((struct sNode*)right_node_223)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==38&&*(info->p+2)==61)||(*info->p==38&&*(info->p+1)==61))) {
                                                if(*info->p==92) {
                                                    info->p+=3;
                                                    skip_spaces_and_lf(info);
                                                    quote_225=(_Bool)1;
                                                }
                                                else {
                                                    info->p+=2;
                                                    skip_spaces_and_lf(info);
                                                    quote_225=(_Bool)0;
                                                }
                                                right_node_226=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1006, "struct sNode");
                                                _inf_obj_value11=come_increment_ref_count(((struct sAndEqualNode*)(__right_value358=sAndEqualNode_initialize((struct sAndEqualNode*)come_increment_ref_count((struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "19eq.c", 1006, "sAndEqualNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_226),quote_225,info))));
                                                _inf_value11->_protocol_obj=_inf_obj_value11;
                                                _inf_value11->finalize=(void*)sAndEqualNode_finalize;
                                                _inf_value11->clone=(void*)sAndEqualNode_clone;
                                                _inf_value11->compile=(void*)sAndEqualNode_compile;
                                                _inf_value11->sline=(void*)sNodeBase_sline;
                                                _inf_value11->sname=(void*)sNodeBase_sname;
                                                _inf_value11->terminated=(void*)sNodeBase_terminated;
                                                _inf_value11->kind=(void*)sAndEqualNode_kind;
                                                __result166__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value363=_inf_value11));
                                                if(right_node_226) { right_node_226 = come_decrement_ref_count2(right_node_226, ((struct sNode*)right_node_226)->finalize, ((struct sNode*)right_node_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                /*g*/come_call_finalizer3(__right_value358,sAndEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(__right_value363) { __right_value363 = come_decrement_ref_count2(__right_value363, ((struct sNode*)__right_value363)->finalize, ((struct sNode*)__right_value363)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                gComeFunResultObject = (void*)0;
                                                return __result166__;
                                                if(right_node_226) { right_node_226 = come_decrement_ref_count2(right_node_226, ((struct sNode*)right_node_226)->finalize, ((struct sNode*)right_node_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==124&&*(info->p+2)==61)||(*info->p==124&&*(info->p+1)==61))) {
                                                    if(*info->p==92) {
                                                        info->p+=3;
                                                        skip_spaces_and_lf(info);
                                                        quote_228=(_Bool)1;
                                                    }
                                                    else {
                                                        info->p+=2;
                                                        skip_spaces_and_lf(info);
                                                        quote_228=(_Bool)0;
                                                    }
                                                    right_node_229=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1023, "struct sNode");
                                                    _inf_obj_value12=come_increment_ref_count(((struct sOrEqualNode*)(__right_value366=sOrEqualNode_initialize((struct sOrEqualNode*)come_increment_ref_count((struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "19eq.c", 1023, "sOrEqualNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_229),quote_228,info))));
                                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                                    _inf_value12->finalize=(void*)sOrEqualNode_finalize;
                                                    _inf_value12->clone=(void*)sOrEqualNode_clone;
                                                    _inf_value12->compile=(void*)sOrEqualNode_compile;
                                                    _inf_value12->sline=(void*)sNodeBase_sline;
                                                    _inf_value12->sname=(void*)sNodeBase_sname;
                                                    _inf_value12->terminated=(void*)sNodeBase_terminated;
                                                    _inf_value12->kind=(void*)sOrEqualNode_kind;
                                                    __result169__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value371=_inf_value12));
                                                    if(right_node_229) { right_node_229 = come_decrement_ref_count2(right_node_229, ((struct sNode*)right_node_229)->finalize, ((struct sNode*)right_node_229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    /*g*/come_call_finalizer3(__right_value366,sOrEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(__right_value371) { __right_value371 = come_decrement_ref_count2(__right_value371, ((struct sNode*)__right_value371)->finalize, ((struct sNode*)__right_value371)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    gComeFunResultObject = (void*)0;
                                                    return __result169__;
                                                    if(right_node_229) { right_node_229 = come_decrement_ref_count2(right_node_229, ((struct sNode*)right_node_229)->finalize, ((struct sNode*)right_node_229)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(((*info->p==92&&*(info->p+1)==61&&*(info->p+2)!=61)||(*info->p==61&&*(info->p+1)!=61))) {
                                                        if(*info->p==92) {
                                                            info->p+=2;
                                                            skip_spaces_and_lf(info);
                                                            quote_231=(_Bool)1;
                                                        }
                                                        else {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            quote_231=(_Bool)0;
                                                        }
                                                        right_node_232=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1040, "struct sNode");
                                                        _inf_obj_value13=come_increment_ref_count(((struct sExpEqualNode*)(__right_value374=sExpEqualNode_initialize((struct sExpEqualNode*)come_increment_ref_count((struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "19eq.c", 1040, "sExpEqualNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_232),quote_231,info))));
                                                        _inf_value13->_protocol_obj=_inf_obj_value13;
                                                        _inf_value13->finalize=(void*)sExpEqualNode_finalize;
                                                        _inf_value13->clone=(void*)sExpEqualNode_clone;
                                                        _inf_value13->compile=(void*)sExpEqualNode_compile;
                                                        _inf_value13->sline=(void*)sNodeBase_sline;
                                                        _inf_value13->sname=(void*)sNodeBase_sname;
                                                        _inf_value13->terminated=(void*)sNodeBase_terminated;
                                                        _inf_value13->kind=(void*)sExpEqualNode_kind;
                                                        __result172__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value379=_inf_value13));
                                                        if(right_node_232) { right_node_232 = come_decrement_ref_count2(right_node_232, ((struct sNode*)right_node_232)->finalize, ((struct sNode*)right_node_232)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        /*g*/come_call_finalizer3(__right_value374,sExpEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(__right_value379) { __right_value379 = come_decrement_ref_count2(__right_value379, ((struct sNode*)__right_value379)->finalize, ((struct sNode*)__right_value379)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        gComeFunResultObject = (void*)0;
                                                        return __result172__;
                                                        if(right_node_232) { right_node_232 = come_decrement_ref_count2(right_node_232, ((struct sNode*)right_node_232)->finalize, ((struct sNode*)right_node_232)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    __result173__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value380=post_position_operator((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(__right_value380) { __right_value380 = come_decrement_ref_count2(__right_value380, ((struct sNode*)__right_value380)->finalize, ((struct sNode*)__right_value380)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result173__;
}

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self){
char* __dec_obj153;
struct sNode* __dec_obj154;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj153=self->sname;
            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj154=self->mLeft;
            if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self){
void* __result_obj__=(void*)0;
struct sPlusPlusNode* __result134__;
void* __right_value282 = (void*)0;
struct sPlusPlusNode* result_198;
void* __right_value283 = (void*)0;
char* __dec_obj155;
void* __right_value284 = (void*)0;
struct sNode* __dec_obj156;
struct sPlusPlusNode* __result135__;
    if(self==(void*)0) {
        __result134__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    result_198=(struct sPlusPlusNode*)come_increment_ref_count((struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "sPlusPlusNode_clone", 3, "sPlusPlusNode"));
    if(self!=((void*)0)) {
        result_198->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj155=result_198->sname;
        result_198->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj156=result_198->mLeft;
        result_198->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_198->mQuote=self->mQuote;
    }
    __result135__ = gComeFunResultObject = __result_obj__ = result_198;
    /*i*/come_call_finalizer3(result_198,sPlusPlusNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

static void sMinusMinusNode_finalize(struct sMinusMinusNode* self){
char* __dec_obj157;
struct sNode* __dec_obj158;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj157=self->sname;
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj158=self->mLeft;
            if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self){
void* __result_obj__=(void*)0;
struct sMinusMinusNode* __result137__;
void* __right_value288 = (void*)0;
struct sMinusMinusNode* result_200;
void* __right_value289 = (void*)0;
char* __dec_obj159;
void* __right_value290 = (void*)0;
struct sNode* __dec_obj160;
struct sMinusMinusNode* __result138__;
    if(self==(void*)0) {
        __result137__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result137__;
    }
    result_200=(struct sMinusMinusNode*)come_increment_ref_count((struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "sMinusMinusNode_clone", 3, "sMinusMinusNode"));
    if(self!=((void*)0)) {
        result_200->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj159=result_200->sname;
        result_200->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj160=result_200->mLeft;
        result_200->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_200->mQuote=self->mQuote;
    }
    __result138__ = gComeFunResultObject = __result_obj__ = result_200;
    /*i*/come_call_finalizer3(result_200,sMinusMinusNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

static void sPlusEqualNode_finalize(struct sPlusEqualNode* self){
char* __dec_obj161;
struct sNode* __dec_obj162;
struct sNode* __dec_obj163;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj161=self->sname;
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj162=self->mLeft;
            if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj163=self->mRight;
            if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self){
void* __result_obj__=(void*)0;
struct sPlusEqualNode* __result140__;
void* __right_value295 = (void*)0;
struct sPlusEqualNode* result_203;
void* __right_value296 = (void*)0;
char* __dec_obj164;
void* __right_value297 = (void*)0;
struct sNode* __dec_obj165;
void* __right_value298 = (void*)0;
struct sNode* __dec_obj166;
struct sPlusEqualNode* __result141__;
    if(self==(void*)0) {
        __result140__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    result_203=(struct sPlusEqualNode*)come_increment_ref_count((struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "sPlusEqualNode_clone", 3, "sPlusEqualNode"));
    if(self!=((void*)0)) {
        result_203->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj164=result_203->sname;
        result_203->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj165=result_203->mLeft;
        result_203->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj166=result_203->mRight;
        result_203->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_203->mQuote=self->mQuote;
    }
    __result141__ = gComeFunResultObject = __result_obj__ = result_203;
    /*i*/come_call_finalizer3(result_203,sPlusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result141__;
}

static void sMinusEqualNode_finalize(struct sMinusEqualNode* self){
char* __dec_obj167;
struct sNode* __dec_obj168;
struct sNode* __dec_obj169;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj167=self->sname;
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj168=self->mLeft;
            if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj169=self->mRight;
            if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self){
void* __result_obj__=(void*)0;
struct sMinusEqualNode* __result143__;
void* __right_value303 = (void*)0;
struct sMinusEqualNode* result_206;
void* __right_value304 = (void*)0;
char* __dec_obj170;
void* __right_value305 = (void*)0;
struct sNode* __dec_obj171;
void* __right_value306 = (void*)0;
struct sNode* __dec_obj172;
struct sMinusEqualNode* __result144__;
    if(self==(void*)0) {
        __result143__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    result_206=(struct sMinusEqualNode*)come_increment_ref_count((struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "sMinusEqualNode_clone", 3, "sMinusEqualNode"));
    if(self!=((void*)0)) {
        result_206->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj170=result_206->sname;
        result_206->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_206->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj171=result_206->mLeft;
        result_206->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj172=result_206->mRight;
        result_206->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result144__ = gComeFunResultObject = __result_obj__ = result_206;
    /*i*/come_call_finalizer3(result_206,sMinusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result144__;
}

static void sMultEqualNode_finalize(struct sMultEqualNode* self){
char* __dec_obj173;
struct sNode* __dec_obj174;
struct sNode* __dec_obj175;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj173=self->sname;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj174=self->mLeft;
            if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj175=self->mRight;
            if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self){
void* __result_obj__=(void*)0;
struct sMultEqualNode* __result146__;
void* __right_value311 = (void*)0;
struct sMultEqualNode* result_209;
void* __right_value312 = (void*)0;
char* __dec_obj176;
void* __right_value313 = (void*)0;
struct sNode* __dec_obj177;
void* __right_value314 = (void*)0;
struct sNode* __dec_obj178;
struct sMultEqualNode* __result147__;
    if(self==(void*)0) {
        __result146__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    result_209=(struct sMultEqualNode*)come_increment_ref_count((struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "sMultEqualNode_clone", 3, "sMultEqualNode"));
    if(self!=((void*)0)) {
        result_209->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj176=result_209->sname;
        result_209->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_209->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj177=result_209->mLeft;
        result_209->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj178=result_209->mRight;
        result_209->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result147__ = gComeFunResultObject = __result_obj__ = result_209;
    /*i*/come_call_finalizer3(result_209,sMultEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result147__;
}

static void sDivEqualNode_finalize(struct sDivEqualNode* self){
char* __dec_obj179;
struct sNode* __dec_obj180;
struct sNode* __dec_obj181;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj179=self->sname;
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj180=self->mLeft;
            if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj181=self->mRight;
            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self){
void* __result_obj__=(void*)0;
struct sDivEqualNode* __result149__;
void* __right_value319 = (void*)0;
struct sDivEqualNode* result_212;
void* __right_value320 = (void*)0;
char* __dec_obj182;
void* __right_value321 = (void*)0;
struct sNode* __dec_obj183;
void* __right_value322 = (void*)0;
struct sNode* __dec_obj184;
struct sDivEqualNode* __result150__;
    if(self==(void*)0) {
        __result149__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    result_212=(struct sDivEqualNode*)come_increment_ref_count((struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "sDivEqualNode_clone", 3, "sDivEqualNode"));
    if(self!=((void*)0)) {
        result_212->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj182=result_212->sname;
        result_212->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_212->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj183=result_212->mLeft;
        result_212->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj184=result_212->mRight;
        result_212->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result150__ = gComeFunResultObject = __result_obj__ = result_212;
    /*i*/come_call_finalizer3(result_212,sDivEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result150__;
}

static void sModEqualNode_finalize(struct sModEqualNode* self){
char* __dec_obj185;
struct sNode* __dec_obj186;
struct sNode* __dec_obj187;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj185=self->sname;
            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj186=self->mLeft;
            if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj187=self->mRight;
            if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self){
void* __result_obj__=(void*)0;
struct sModEqualNode* __result152__;
void* __right_value327 = (void*)0;
struct sModEqualNode* result_215;
void* __right_value328 = (void*)0;
char* __dec_obj188;
void* __right_value329 = (void*)0;
struct sNode* __dec_obj189;
void* __right_value330 = (void*)0;
struct sNode* __dec_obj190;
struct sModEqualNode* __result153__;
    if(self==(void*)0) {
        __result152__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    result_215=(struct sModEqualNode*)come_increment_ref_count((struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "sModEqualNode_clone", 3, "sModEqualNode"));
    if(self!=((void*)0)) {
        result_215->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj188=result_215->sname;
        result_215->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_215->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj189=result_215->mLeft;
        result_215->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj190=result_215->mRight;
        result_215->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result153__ = gComeFunResultObject = __result_obj__ = result_215;
    /*i*/come_call_finalizer3(result_215,sModEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result153__;
}

static void sLShifEqualNode_finalize(struct sLShifEqualNode* self){
char* __dec_obj191;
struct sNode* __dec_obj192;
struct sNode* __dec_obj193;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj191=self->sname;
            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj192=self->mLeft;
            if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj193=self->mRight;
            if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self){
void* __result_obj__=(void*)0;
struct sLShifEqualNode* __result155__;
void* __right_value335 = (void*)0;
struct sLShifEqualNode* result_218;
void* __right_value336 = (void*)0;
char* __dec_obj194;
void* __right_value337 = (void*)0;
struct sNode* __dec_obj195;
void* __right_value338 = (void*)0;
struct sNode* __dec_obj196;
struct sLShifEqualNode* __result156__;
    if(self==(void*)0) {
        __result155__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    result_218=(struct sLShifEqualNode*)come_increment_ref_count((struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "sLShifEqualNode_clone", 3, "sLShifEqualNode"));
    if(self!=((void*)0)) {
        result_218->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj194=result_218->sname;
        result_218->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_218->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj195=result_218->mLeft;
        result_218->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj196=result_218->mRight;
        result_218->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result156__ = gComeFunResultObject = __result_obj__ = result_218;
    /*i*/come_call_finalizer3(result_218,sLShifEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result156__;
}

static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self){
char* __dec_obj197;
struct sNode* __dec_obj198;
struct sNode* __dec_obj199;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj197=self->sname;
            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj198=self->mLeft;
            if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count2(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj199=self->mRight;
            if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self){
void* __result_obj__=(void*)0;
struct sRShiftEqualNode* __result158__;
void* __right_value343 = (void*)0;
struct sRShiftEqualNode* result_221;
void* __right_value344 = (void*)0;
char* __dec_obj200;
void* __right_value345 = (void*)0;
struct sNode* __dec_obj201;
void* __right_value346 = (void*)0;
struct sNode* __dec_obj202;
struct sRShiftEqualNode* __result159__;
    if(self==(void*)0) {
        __result158__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result158__;
    }
    result_221=(struct sRShiftEqualNode*)come_increment_ref_count((struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "sRShiftEqualNode_clone", 3, "sRShiftEqualNode"));
    if(self!=((void*)0)) {
        result_221->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj200=result_221->sname;
        result_221->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_221->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj201=result_221->mLeft;
        result_221->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count2(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj202=result_221->mRight;
        result_221->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result159__ = gComeFunResultObject = __result_obj__ = result_221;
    /*i*/come_call_finalizer3(result_221,sRShiftEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

static void sXorEqualNode_finalize(struct sXorEqualNode* self){
char* __dec_obj203;
struct sNode* __dec_obj204;
struct sNode* __dec_obj205;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj203=self->sname;
            __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj204=self->mLeft;
            if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj205=self->mRight;
            if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self){
void* __result_obj__=(void*)0;
struct sXorEqualNode* __result161__;
void* __right_value351 = (void*)0;
struct sXorEqualNode* result_224;
void* __right_value352 = (void*)0;
char* __dec_obj206;
void* __right_value353 = (void*)0;
struct sNode* __dec_obj207;
void* __right_value354 = (void*)0;
struct sNode* __dec_obj208;
struct sXorEqualNode* __result162__;
    if(self==(void*)0) {
        __result161__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result161__;
    }
    result_224=(struct sXorEqualNode*)come_increment_ref_count((struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "sXorEqualNode_clone", 3, "sXorEqualNode"));
    if(self!=((void*)0)) {
        result_224->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj206=result_224->sname;
        result_224->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_224->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj207=result_224->mLeft;
        result_224->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj208=result_224->mRight;
        result_224->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result162__ = gComeFunResultObject = __result_obj__ = result_224;
    /*i*/come_call_finalizer3(result_224,sXorEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static void sAndEqualNode_finalize(struct sAndEqualNode* self){
char* __dec_obj209;
struct sNode* __dec_obj210;
struct sNode* __dec_obj211;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj209=self->sname;
            __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj210=self->mLeft;
            if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj211=self->mRight;
            if(__dec_obj211) { __dec_obj211 = come_decrement_ref_count2(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self){
void* __result_obj__=(void*)0;
struct sAndEqualNode* __result164__;
void* __right_value359 = (void*)0;
struct sAndEqualNode* result_227;
void* __right_value360 = (void*)0;
char* __dec_obj212;
void* __right_value361 = (void*)0;
struct sNode* __dec_obj213;
void* __right_value362 = (void*)0;
struct sNode* __dec_obj214;
struct sAndEqualNode* __result165__;
    if(self==(void*)0) {
        __result164__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result164__;
    }
    result_227=(struct sAndEqualNode*)come_increment_ref_count((struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "sAndEqualNode_clone", 3, "sAndEqualNode"));
    if(self!=((void*)0)) {
        result_227->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj212=result_227->sname;
        result_227->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_227->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj213=result_227->mLeft;
        result_227->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count2(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj214=result_227->mRight;
        result_227->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj214) { __dec_obj214 = come_decrement_ref_count2(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result165__ = gComeFunResultObject = __result_obj__ = result_227;
    /*i*/come_call_finalizer3(result_227,sAndEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result165__;
}

static void sOrEqualNode_finalize(struct sOrEqualNode* self){
char* __dec_obj215;
struct sNode* __dec_obj216;
struct sNode* __dec_obj217;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj215=self->sname;
            __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj216=self->mLeft;
            if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj217=self->mRight;
            if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self){
void* __result_obj__=(void*)0;
struct sOrEqualNode* __result167__;
void* __right_value367 = (void*)0;
struct sOrEqualNode* result_230;
void* __right_value368 = (void*)0;
char* __dec_obj218;
void* __right_value369 = (void*)0;
struct sNode* __dec_obj219;
void* __right_value370 = (void*)0;
struct sNode* __dec_obj220;
struct sOrEqualNode* __result168__;
    if(self==(void*)0) {
        __result167__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result167__;
    }
    result_230=(struct sOrEqualNode*)come_increment_ref_count((struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "sOrEqualNode_clone", 3, "sOrEqualNode"));
    if(self!=((void*)0)) {
        result_230->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj218=result_230->sname;
        result_230->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_230->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj219=result_230->mLeft;
        result_230->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj220=result_230->mRight;
        result_230->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result168__ = gComeFunResultObject = __result_obj__ = result_230;
    /*i*/come_call_finalizer3(result_230,sOrEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result168__;
}

static void sExpEqualNode_finalize(struct sExpEqualNode* self){
char* __dec_obj221;
struct sNode* __dec_obj222;
struct sNode* __dec_obj223;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj221=self->sname;
            __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(self->mLeft==gComeFunResultObject) {
            __dec_obj222=self->mLeft;
            if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count2(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(self->mRight==gComeFunResultObject) {
            __dec_obj223=self->mRight;
            if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self){
void* __result_obj__=(void*)0;
struct sExpEqualNode* __result170__;
void* __right_value375 = (void*)0;
struct sExpEqualNode* result_233;
void* __right_value376 = (void*)0;
char* __dec_obj224;
void* __right_value377 = (void*)0;
struct sNode* __dec_obj225;
void* __right_value378 = (void*)0;
struct sNode* __dec_obj226;
struct sExpEqualNode* __result171__;
    if(self==(void*)0) {
        __result170__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    result_233=(struct sExpEqualNode*)come_increment_ref_count((struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "sExpEqualNode_clone", 3, "sExpEqualNode"));
    if(self!=((void*)0)) {
        result_233->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj224=result_233->sname;
        result_233->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_233->mQuote=self->mQuote;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj225=result_233->mLeft;
        result_233->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj226=result_233->mRight;
        result_233->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result171__ = gComeFunResultObject = __result_obj__ = result_233;
    /*i*/come_call_finalizer3(result_233,sExpEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

