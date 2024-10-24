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
struct sNothingNode
{
    int sline;
    char* sname;
};
struct sNewNode
{
    int sline;
    char* sname;
    struct sType* type;
    struct list$1tuple2$2charphsNodephph* initializer;
};
struct sImplementsNode
{
    int sline;
    char* sname;
    struct sNode* obj_exp;
    struct sType* inf_type;
};
struct sTrueNode
{
    int sline;
    char* sname;
};
struct sFalseNode
{
    int sline;
    char* sname;
};
struct sSizeOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sSizeOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sTypeOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sTypeOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sDynamicTypeOfNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sAlignOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sAlignOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sAlignOfNode2
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sAlignOfExpNode2
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sAlignAsNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sAlignAsExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sDeleteNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sForceDeleteNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sDelegateNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sShareNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sBorrowNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sCloneNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sDupeNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sDummyHeapNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sGCIncNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sGCDecNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sGCDecNoFreeNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sIsHeap
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sIsPointer
{
    int sline;
    char* sname;
    struct sType* type;
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
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, _Bool throw_or_rescue, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info);
char* sNewNode_kind(struct sNewNode* self);
_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);
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
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);
char* sImplementsNode_kind(struct sImplementsNode* self);
_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);
char* sTrueNode_kind(struct sTrueNode* self);
_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);
char* sFalseNode_kind(struct sFalseNode* self);
_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);
char* sSizeOfNode_kind(struct sSizeOfNode* self);
_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);
struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self);
_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);
struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info);
char* sTypeOfNode_kind(struct sTypeOfNode* self);
_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info);
struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self);
_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info);
struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info);
char* sDynamicTypeOfNode_kind(struct sDynamicTypeOfNode* self);
_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info);
static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode_kind(struct sAlignOfNode* self);
_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);
struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self);
_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);
struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode2_kind(struct sAlignOfNode2* self);
_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);
struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);
_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);
struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);
char* sAlignAsNode_kind(struct sAlignAsNode* self);
_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);
struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self);
_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);
struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);
char* sDeleteNode_kind(struct sDeleteNode* self);
_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);
struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info);
char* sForceDeleteNode_kind(struct sForceDeleteNode* self);
_Bool sForceDeleteNode_compile(struct sForceDeleteNode* self, struct sInfo* info);
struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info);
char* sDelegateNode_kind(struct sDelegateNode* self);
_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info);
struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info);
char* sShareNode_kind(struct sShareNode* self);
_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info);
struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);
char* sBorrowNode_kind(struct sBorrowNode* self);
_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);
struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);
char* sCloneNode_kind(struct sCloneNode* self);
_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);
char* sDupeNode_kind(struct sDupeNode* self);
_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);
struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);
char* sDummyHeapNode_kind(struct sDummyHeapNode* self);
_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);
struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);
char* sGCIncNode_kind(struct sGCIncNode* self);
_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);
struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNode_kind(struct sGCDecNode* self);
_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);
struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self);
_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info);
struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);
char* sIsHeap_kind(struct sIsHeap* self);
_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);
struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info);
char* sIsPointer_kind(struct sIsPointer* self);
_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sNewNode_finalize(struct sNewNode* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static void sTrueNode_finalize(struct sTrueNode* self);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
static void sFalseNode_finalize(struct sFalseNode* self);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
static void sDeleteNode_finalize(struct sDeleteNode* self);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static void sForceDeleteNode_finalize(struct sForceDeleteNode* self);
static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self);
static void sBorrowNode_finalize(struct sBorrowNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static void sDelegateNode_finalize(struct sDelegateNode* self);
static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self);
static void sShareNode_finalize(struct sShareNode* self);
static struct sShareNode* sShareNode_clone(struct sShareNode* self);
static void sCloneNode_finalize(struct sCloneNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static void sDupeNode_finalize(struct sDupeNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static void sGCIncNode_finalize(struct sGCIncNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static void sGCDecNode_finalize(struct sGCDecNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self);
static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self);
static void sIsHeap_finalize(struct sIsHeap* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static void sIsPointer_finalize(struct sIsPointer* self);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self);
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
static void sNothingNode_finalize(struct sNothingNode* self);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
static void sImplementsNode_finalize(struct sImplementsNode* self);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
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










struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
struct sNothingNode* __result65__;
    ((struct sNodeBase*)(__right_value116=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value116,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result65__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
char* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value117=__builtin_string("sNothingNode")));
    __right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
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

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
void* __right_value154 = (void*)0;
struct sType* __dec_obj61;
struct list$1tuple2$2charphsNodephph* __dec_obj62;
struct sNewNode* __result85__;
    ((struct sNodeBase*)(__right_value118=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value118,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj61=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /* a*/come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj62=self->initializer;
    self->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer);
    /* a*/come_call_finalizer3(__dec_obj62,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

char* sNewNode_kind(struct sNewNode* self){
void* __result_obj__=(void*)0;
void* __right_value155 = (void*)0;
char* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value155=__builtin_string("sNewNode")));
    __right_value155 = come_decrement_ref_count2(__right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
struct sType* type_98;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
struct CVALUE* come_value_99;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
struct buffer* num_string_100;
struct list$1sNodeph* o2_saved_101;
struct sNode* it_104;
_Bool __result93__;
void* __right_value160 = (void*)0;
struct CVALUE* cvalue_107;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct sType* type2_108;
void* __right_value163 = (void*)0;
char* type_name_111;
void* __right_value164 = (void*)0;
char* type_name2_112;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
char* var_name_114;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
struct buffer* buf_115;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
int i_116;
struct list$1tuple2$2charphsNodephph* o2_saved_117;
struct tuple2$2charphsNodeph* it_120;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* field_name_123;
struct sNode* exp_124;
_Bool __result101__;
void* __right_value172 = (void*)0;
struct CVALUE* come_value2_125;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
char* __dec_obj72;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
char* __dec_obj73;
void* __right_value178 = (void*)0;
struct sType* __dec_obj74;
_Bool __result103__;
    type_98=self->type;
    come_value_99=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 40, "CVALUE"))));
    num_string_100=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 42, "buffer"))));
    buffer_append_str(num_string_100,"1");
    for(    o2_saved_101=(struct list$1sNodeph*)come_increment_ref_count((type_98->mArrayNum)),it_104=list$1sNodeph_begin((o2_saved_101));    !list$1sNodeph_end((o2_saved_101));    it_104=list$1sNodeph_next((o2_saved_101))    ){
        if(!node_compile(it_104,info)) {
            __result93__ = (_Bool)0;
            /*i*/come_call_finalizer3(o2_saved_101,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_100,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result93__;
        }
        cvalue_107=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        buffer_append_str(num_string_100,((char*)(__right_value161=xsprintf("*(%s)",cvalue_107->c_value))));
        __right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(cvalue_107,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_101,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    type2_108=(struct sType*)come_increment_ref_count(solve_generics(type_98,info->generics_type,info));
    list$1sNodeph_reset(type2_108->mArrayNum);
    type_name_111=(char*)come_increment_ref_count(make_type_name_string(type2_108,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)1));
    type_name2_112=(char*)come_increment_ref_count(make_come_type_name_string(type2_108,info));
    type2_108->mHeap=(_Bool)1;
    type2_108->mPointerNum++;
    if(type2_108->mNoSolvedGenericsType->v1) {
        type2_108->mNoSolvedGenericsType->v1->mPointerNum++;
        type2_108->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
    }
    if(self->initializer) {
        static int obj_num_113=0;
        var_name_114=(char*)come_increment_ref_count(xsprintf("__new_obj\%s",((char*)(__right_value165=int_to_string(obj_num_113)))));
        __right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        obj_num_113++;
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value167=make_define_var(type2_108,var_name_114,(_Bool)0,info))));
        __right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buf_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 85, "buffer"))));
        buffer_append_str(buf_115,((char*)(__right_value171=xsprintf("(%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\"), ",var_name_114,type_name_111,type_name_111,((char*)(__right_value170=buffer_to_string(num_string_100))),info->sname,info->sline,type_name2_112))));
        __right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        i_116=0;
        for(        o2_saved_117=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((self->initializer)),it_120=list$1tuple2$2charphsNodephph_begin((o2_saved_117));        !list$1tuple2$2charphsNodephph_end((o2_saved_117));        it_120=list$1tuple2$2charphsNodephph_next((o2_saved_117))        ){
            multiple_assign_var1=it_120;
            field_name_123=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            exp_124=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            if(!node_compile(exp_124,info)) {
                __result101__ = (_Bool)0;
                field_name_123 = come_decrement_ref_count2(field_name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(exp_124) { exp_124 = come_decrement_ref_count2(exp_124, ((struct sNode*)exp_124)->finalize, ((struct sNode*)exp_124)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(o2_saved_117,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                var_name_114 = come_decrement_ref_count2(var_name_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(buf_115,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(num_string_100,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_108,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_111 = come_decrement_ref_count2(type_name_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                type_name2_112 = come_decrement_ref_count2(type_name2_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result101__;
            }
            come_value2_125=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_115,((char*)(__right_value173=xsprintf("%s->%s = %s",var_name_114,field_name_123,come_value2_125->c_value))));
            __right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_115,",");
            i_116++;
            field_name_123 = come_decrement_ref_count2(field_name_123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(exp_124) { exp_124 = come_decrement_ref_count2(exp_124, ((struct sNode*)exp_124)->finalize, ((struct sNode*)exp_124)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value2_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_117,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_115,((char*)(__right_value174=xsprintf("%s)",var_name_114))));
        __right_value174 = come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj72=come_value_99->c_value;
        come_value_99->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_115));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        var_name_114 = come_decrement_ref_count2(var_name_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_115,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj73=come_value_99->c_value;
        come_value_99->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_111,type_name_111,((char*)(__right_value176=buffer_to_string(num_string_100))),info->sname,info->sline,type_name2_112));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    __dec_obj74=come_value_99->type;
    come_value_99->type=(struct sType*)come_increment_ref_count(sType_clone(type2_108));
    /* a*/come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_99->var=((void*)0);
    append_object_to_right_values2(come_value_99,(struct sType*)come_increment_ref_count(type2_108),info,(_Bool)0);
    add_come_last_code(info,"%s;\n",come_value_99->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_99));
    __result103__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_100,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_108,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_111 = come_decrement_ref_count2(type_name_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_112 = come_decrement_ref_count2(type_name2_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result103__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result67__;
void* __right_value119 = (void*)0;
struct sType* result_64;
void* __right_value122 = (void*)0;
struct tuple1$1sTypeph* __dec_obj39;
void* __right_value123 = (void*)0;
struct tuple1$1sTypeph* __dec_obj40;
void* __right_value124 = (void*)0;
struct tuple1$1sTypeph* __dec_obj41;
void* __right_value125 = (void*)0;
char* __dec_obj42;
void* __right_value132 = (void*)0;
struct list$1sTypeph* __dec_obj46;
void* __right_value140 = (void*)0;
struct list$1sNodeph* __dec_obj50;
void* __right_value141 = (void*)0;
struct list$1sTypeph* __dec_obj51;
void* __right_value148 = (void*)0;
struct list$1charph* __dec_obj55;
void* __right_value149 = (void*)0;
struct tuple1$1sTypeph* __dec_obj56;
void* __right_value150 = (void*)0;
struct sNode* __dec_obj57;
void* __right_value151 = (void*)0;
struct sNode* __dec_obj58;
void* __right_value152 = (void*)0;
char* __dec_obj59;
void* __right_value153 = (void*)0;
char* __dec_obj60;
struct sType* __result84__;
    if(self==(void*)0) {
        __result67__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result67__;
    }
    result_64=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_64->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj39=result_64->mNoSolvedGenericsType;
        result_64->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        /* a*/come_call_finalizer3(__dec_obj39,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj40=result_64->mOriginalLoadVarType;
        result_64->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        /* a*/come_call_finalizer3(__dec_obj40,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj41=result_64->mNoExceptionType;
        result_64->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        /* a*/come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj42=result_64->mGenericsName;
        result_64->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj46=result_64->mGenericsTypes;
        result_64->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        /* a*/come_call_finalizer3(__dec_obj46,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj50=result_64->mArrayNum;
        result_64->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        /* a*/come_call_finalizer3(__dec_obj50,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_64->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj51=result_64->mParamTypes;
        result_64->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj51,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj55=result_64->mParamNames;
        result_64->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj55,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj56=result_64->mResultType;
        result_64->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj56,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_64->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj57=result_64->mAlignas;
        result_64->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_64->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_64->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_64->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_64->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_64->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_64->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_64->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_64->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_64->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_64->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_64->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_64->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_64->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_64->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_64->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_64->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_64->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_64->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_64->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_64->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_64->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_64->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_64->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_64->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_64->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(self!=((void*)0)) {
        result_64->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_64->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj58=result_64->mSizeNum;
        result_64->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_64->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result_64->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_64->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj59=result_64->mOriginalTypeName;
        result_64->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_64->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_64->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_64->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_64->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_64->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_64->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_64->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_64->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_64->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj60=result_64->mAsmName;
        result_64->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_64->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_64->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_64->mNoNumberArray=self->mNoNumberArray;
    }
    if(self!=((void*)0)) {
        result_64->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result_64->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)) {
        result_64->mOriginIsArray=self->mOriginIsArray;
    }
    __result84__ = gComeFunResultObject = __result_obj__ = result_64;
    /*i*/come_call_finalizer3(result_64,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result68__;
void* __right_value120 = (void*)0;
struct tuple1$1sTypeph* result_65;
void* __right_value121 = (void*)0;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result69__;
    if(self==(void*)0) {
        __result68__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    result_65=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj17=result_65->v1;
        result_65->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /* a*/come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result69__ = gComeFunResultObject = __result_obj__ = result_65;
    /*i*/come_call_finalizer3(result_65,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj18;
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
            __dec_obj18=self->mNoSolvedGenericsType;
            /* a*/come_call_finalizer3(__dec_obj18,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj20=self->mOriginalLoadVarType;
            /* a*/come_call_finalizer3(__dec_obj20,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj22=self->mNoExceptionType;
            /* a*/come_call_finalizer3(__dec_obj22,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_66;
struct list_item$1sTypeph* prev_it_67;
    it_66=self->head;
    while(it_66!=((void*)0)) {
        prev_it_67=it_66;
        it_66=it_66->next;
        /*i*/come_call_finalizer3(prev_it_67,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_68;
struct list_item$1sTypeph* prev_it_69;
    it_68=self->head;
    while(it_68!=((void*)0)) {
        prev_it_69=it_68;
        it_68=it_68->next;
        /*i*/come_call_finalizer3(prev_it_69,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_70;
struct list_item$1sNodeph* prev_it_71;
    it_70=self->head;
    while(it_70!=((void*)0)) {
        prev_it_71=it_70;
        it_70=it_70->next;
        /*i*/come_call_finalizer3(prev_it_71,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_72;
struct list_item$1sNodeph* prev_it_73;
    it_72=self->head;
    while(it_72!=((void*)0)) {
        prev_it_73=it_72;
        it_72=it_72->next;
        /*i*/come_call_finalizer3(prev_it_73,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_74;
struct list_item$1charph* prev_it_75;
    it_74=self->head;
    while(it_74!=((void*)0)) {
        prev_it_75=it_74;
        it_74=it_74->next;
        /*i*/come_call_finalizer3(prev_it_75,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* it_76;
struct list_item$1charph* prev_it_77;
    it_76=self->head;
    while(it_76!=((void*)0)) {
        prev_it_77=it_76;
        it_76=it_76->next;
        /*i*/come_call_finalizer3(prev_it_77,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list$1sTypeph* __result70__;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
struct list$1sTypeph* result_78;
struct list_item$1sTypeph* it_79;
void* __right_value131 = (void*)0;
struct list$1sTypeph* __result73__;
    if(self==((void*)0)) {
        __result70__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    result_78=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sTypeph"))));
    it_79=self->head;
    while(it_79!=((void*)0)) {
        list$1sTypeph_add(result_78,(struct sType*)come_increment_ref_count(sType_clone(it_79->item)));
        it_79=it_79->next;
    }
    __result73__ = gComeFunResultObject = __result_obj__ = result_78;
    /*i*/come_call_finalizer3(result_78,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result71__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct list_item$1sTypeph* litem_80;
struct sType* __dec_obj43;
void* __right_value129 = (void*)0;
struct list_item$1sTypeph* litem_81;
struct sType* __dec_obj44;
void* __right_value130 = (void*)0;
struct list_item$1sTypeph* litem_82;
struct sType* __dec_obj45;
struct list$1sTypeph* __result72__;
    if(self->len==0) {
        litem_80=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value128=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sTypeph"))));
        litem_80->prev=((void*)0);
        litem_80->next=((void*)0);
        __dec_obj43=litem_80->item;
        litem_80->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_80;
        self->head=litem_80;
    }
    else {
        if(self->len==1) {
            litem_81=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value129=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sTypeph"))));
            litem_81->prev=self->head;
            litem_81->next=((void*)0);
            __dec_obj44=litem_81->item;
            litem_81->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_81;
            self->head->next=litem_81;
        }
        else {
            litem_82=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value130=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sTypeph"))));
            litem_82->prev=self->tail;
            litem_82->next=((void*)0);
            __dec_obj45=litem_82->item;
            litem_82->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_82;
            self->tail=litem_82;
        }
    }
    self->len++;
    __result72__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result72__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result74__;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1sNodeph* result_83;
struct list_item$1sNodeph* it_84;
void* __right_value139 = (void*)0;
struct list$1sNodeph* __result79__;
    if(self==((void*)0)) {
        __result74__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    result_83=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 137, "list$1sNodeph"))));
    it_84=self->head;
    while(it_84!=((void*)0)) {
        list$1sNodeph_add(result_83,(struct sNode*)come_increment_ref_count(sNode_clone(it_84->item)));
        it_84=it_84->next;
    }
    __result79__ = gComeFunResultObject = __result_obj__ = result_83;
    /*i*/come_call_finalizer3(result_83,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result75__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result75__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
struct list_item$1sNodeph* litem_85;
struct sNode* __dec_obj47;
void* __right_value136 = (void*)0;
struct list_item$1sNodeph* litem_86;
struct sNode* __dec_obj48;
void* __right_value137 = (void*)0;
struct list_item$1sNodeph* litem_87;
struct sNode* __dec_obj49;
struct list$1sNodeph* __result76__;
    if(self->len==0) {
        litem_85=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value135=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1sNodeph"))));
        litem_85->prev=((void*)0);
        litem_85->next=((void*)0);
        __dec_obj47=litem_85->item;
        litem_85->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_85;
        self->head=litem_85;
    }
    else {
        if(self->len==1) {
            litem_86=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value136=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1sNodeph"))));
            litem_86->prev=self->head;
            litem_86->next=((void*)0);
            __dec_obj48=litem_86->item;
            litem_86->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_86;
            self->head->next=litem_86;
        }
        else {
            litem_87=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value137=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1sNodeph"))));
            litem_87->prev=self->tail;
            litem_87->next=((void*)0);
            __dec_obj49=litem_87->item;
            litem_87->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_87;
            self->tail=litem_87;
        }
    }
    self->len++;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result77__;
void* __right_value138 = (void*)0;
struct sNode* result_88;
struct sNode* __result78__;
    if(self==(void*)0) {
        __result77__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    result_88=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_88->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_88->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_88->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_88->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_88->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_88->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_88->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_88->kind=self->kind;
    }
    __result78__ = gComeFunResultObject = __result_obj__ = result_88;
    if(result_88) { result_88 = come_decrement_ref_count2(result_88, ((struct sNode*)result_88)->finalize, ((struct sNode*)result_88)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result80__;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct list$1charph* result_89;
struct list_item$1charph* it_90;
void* __right_value147 = (void*)0;
struct list$1charph* __result83__;
    if(self==((void*)0)) {
        __result80__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result80__;
    }
    result_89=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 137, "list$1charph"))));
    it_90=self->head;
    while(it_90!=((void*)0)) {
        list$1charph_add(result_89,(char*)come_increment_ref_count(string_clone(it_90->item)));
        it_90=it_90->next;
    }
    __result83__ = gComeFunResultObject = __result_obj__ = result_89;
    /*i*/come_call_finalizer3(result_89,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value144 = (void*)0;
struct list_item$1charph* litem_91;
char* __dec_obj52;
void* __right_value145 = (void*)0;
struct list_item$1charph* litem_92;
char* __dec_obj53;
void* __right_value146 = (void*)0;
struct list_item$1charph* litem_93;
char* __dec_obj54;
struct list$1charph* __result82__;
    if(self->len==0) {
        litem_91=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1charph"))));
        litem_91->prev=((void*)0);
        litem_91->next=((void*)0);
        __dec_obj52=litem_91->item;
        litem_91->item=(char*)come_increment_ref_count(item);
        __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_91;
        self->head=litem_91;
    }
    else {
        if(self->len==1) {
            litem_92=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value145=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1charph"))));
            litem_92->prev=self->head;
            litem_92->next=((void*)0);
            __dec_obj53=litem_92->item;
            litem_92->item=(char*)come_increment_ref_count(item);
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_92;
            self->head->next=litem_92;
        }
        else {
            litem_93=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value146=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1charph"))));
            litem_93->prev=self->tail;
            litem_93->next=((void*)0);
            __dec_obj54=litem_93->item;
            litem_93->item=(char*)come_increment_ref_count(item);
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_93;
            self->tail=litem_93;
        }
    }
    self->len++;
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_94;
struct list_item$1tuple2$2charphsNodephph* prev_it_95;
    it_94=self->head;
    while(it_94!=((void*)0)) {
        prev_it_95=it_94;
        it_94=it_94->next;
        /*i*/come_call_finalizer3(prev_it_95,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj63;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj63=self->item;
            /* a*/come_call_finalizer3(__dec_obj63,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_96;
struct list_item$1tuple2$2charphsNodephph* prev_it_97;
    it_96=self->head;
    while(it_96!=((void*)0)) {
        prev_it_97=it_96;
        it_96=it_96->next;
        /*i*/come_call_finalizer3(prev_it_97,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_102;
struct sNode* __result87__;
struct sNode* __result88__;
struct sNode* result_103;
struct sNode* __result89__;
result_102 = (void*)0;
result_103 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_102,0,sizeof(struct sNode*));
        __result87__ = gComeFunResultObject = __result_obj__ = result_102;
        gComeFunResultObject = (void*)0;
        return __result87__;
    }
    self->it=self->head;
    if(self->it) {
        __result88__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result88__;
    }
    memset(&result_103,0,sizeof(struct sNode*));
    __result89__ = gComeFunResultObject = __result_obj__ = result_103;
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_105;
struct sNode* __result90__;
struct sNode* __result91__;
struct sNode* result_106;
struct sNode* __result92__;
result_105 = (void*)0;
result_106 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_105,0,sizeof(struct sNode*));
        __result90__ = gComeFunResultObject = __result_obj__ = result_105;
        gComeFunResultObject = (void*)0;
        return __result90__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result91__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result91__;
    }
    memset(&result_106,0,sizeof(struct sNode*));
    __result92__ = gComeFunResultObject = __result_obj__ = result_106;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj69;
struct sType* __dec_obj70;
char* __dec_obj71;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(self->c_value==gComeFunResultObject) {
            __dec_obj69=self->c_value;
            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj70=self->type;
            /* a*/come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj71=self->c_value_without_right_value_objects;
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_109;
struct list_item$1sNodeph* prev_it_110;
struct list$1sNodeph* __result94__;
    it_109=self->head;
    while(it_109!=((void*)0)) {
        prev_it_110=it_109;
        it_109=it_109->next;
        /*i*/come_call_finalizer3(prev_it_110,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_118;
struct tuple2$2charphsNodeph* __result95__;
struct tuple2$2charphsNodeph* __result96__;
struct tuple2$2charphsNodeph* result_119;
struct tuple2$2charphsNodeph* __result97__;
result_118 = (void*)0;
result_119 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_118,0,sizeof(struct tuple2$2charphsNodeph*));
        __result95__ = gComeFunResultObject = __result_obj__ = result_118;
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    self->it=self->head;
    if(self->it) {
        __result96__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result96__;
    }
    memset(&result_119,0,sizeof(struct tuple2$2charphsNodeph*));
    __result97__ = gComeFunResultObject = __result_obj__ = result_119;
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_121;
struct tuple2$2charphsNodeph* __result98__;
struct tuple2$2charphsNodeph* __result99__;
struct tuple2$2charphsNodeph* result_122;
struct tuple2$2charphsNodeph* __result100__;
result_121 = (void*)0;
result_122 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_121,0,sizeof(struct tuple2$2charphsNodeph*));
        __result98__ = gComeFunResultObject = __result_obj__ = result_121;
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result99__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    memset(&result_122,0,sizeof(struct tuple2$2charphsNodeph*));
    __result100__ = gComeFunResultObject = __result_obj__ = result_122;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value179 = (void*)0;
struct list_item$1CVALUEph* litem_126;
struct CVALUE* __dec_obj75;
void* __right_value180 = (void*)0;
struct list_item$1CVALUEph* litem_127;
struct CVALUE* __dec_obj76;
void* __right_value181 = (void*)0;
struct list_item$1CVALUEph* litem_128;
struct CVALUE* __dec_obj77;
struct list$1CVALUEph* __result102__;
    if(self->len==0) {
        litem_126=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value179=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 221, "list_item$1CVALUEph"))));
        litem_126->prev=((void*)0);
        litem_126->next=((void*)0);
        __dec_obj75=litem_126->item;
        litem_126->item=(struct CVALUE*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj75,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_126;
        self->head=litem_126;
    }
    else {
        if(self->len==1) {
            litem_127=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value180=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 231, "list_item$1CVALUEph"))));
            litem_127->prev=self->head;
            litem_127->next=((void*)0);
            __dec_obj76=litem_127->item;
            litem_127->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj76,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_127;
            self->head->next=litem_127;
        }
        else {
            litem_128=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value181=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 241, "list_item$1CVALUEph"))));
            litem_128->prev=self->tail;
            litem_128->next=((void*)0);
            __dec_obj77=litem_128->item;
            litem_128->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj77,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_128;
            self->tail=litem_128;
        }
    }
    self->len++;
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
struct sNode* __dec_obj78;
void* __right_value184 = (void*)0;
struct sType* __dec_obj79;
struct sImplementsNode* __result104__;
    ((struct sNodeBase*)(__right_value182=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value182,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj78=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(obj_exp));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj79=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(sType_clone(inf_type));
    /* a*/come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __result_obj__=(void*)0;
void* __right_value185 = (void*)0;
char* __result105__;
    __result105__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value185=__builtin_string("sImplementsNode")));
    __right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __right_value186 = (void*)0;
struct sNode* obj_exp_129;
void* __right_value187 = (void*)0;
struct sType* inf_type_130;
_Bool __result106__;
void* __right_value188 = (void*)0;
struct CVALUE* come_value_131;
void* __right_value189 = (void*)0;
struct sType* type_132;
struct sClass* klass_133;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct CVALUE* come_value2_134;
void* __right_value192 = (void*)0;
struct sType* type2_135;
void* __right_value193 = (void*)0;
char* type_name_136;
void* __right_value194 = (void*)0;
char* type_name2_137;
void* __right_value195 = (void*)0;
char* buf_139;
void* __right_value196 = (void*)0;
char* buf2_140;
void* __right_value197 = (void*)0;
struct sType* typeX_141;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
int i_142;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* name_146;
struct sType* field_type_147;
void* __right_value200 = (void*)0;
char* method_name_148;
struct sFun* fun_149;
struct sClass* klass2_152;
void* __right_value201 = (void*)0;
char* __dec_obj108;
void* __right_value202 = (void*)0;
char* __dec_obj109;
void* __right_value203 = (void*)0;
struct sType* type3_160;
void* __right_value204 = (void*)0;
struct sType* __dec_obj110;
_Bool __result117__;
    obj_exp_129=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
    inf_type_130=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
    if(!node_compile(obj_exp_129,info)) {
        __result106__ = (_Bool)0;
        if(obj_exp_129) { obj_exp_129 = come_decrement_ref_count2(obj_exp_129, ((struct sNode*)obj_exp_129)->finalize, ((struct sNode*)obj_exp_129)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(inf_type_130,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result106__;
    }
    come_value_131=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_132=(struct sType*)come_increment_ref_count(sType_clone(come_value_131->type));
    type_132->mPointerNum--;
    type_132->mHeap=(_Bool)0;
    klass_133=inf_type_130->mClass;
    come_value2_134=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 159, "CVALUE"))));
    type2_135=(struct sType*)come_increment_ref_count(sType_clone(inf_type_130));
    type_name_136=(char*)come_increment_ref_count(make_type_name_string(inf_type_130,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    type_name2_137=(char*)come_increment_ref_count(make_type_name_string(type_132,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    static int inf_num_138=0;
    buf_139=(char*)come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name_136,++inf_num_138));
    add_come_code_at_function_head(info,buf_139);
    buf2_140=(char*)come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2_137,inf_num_138));
    add_come_code_at_function_head(info,buf2_140);
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_138,type_name_136,type_name_136,info->sname,info->sline,type_name_136);
    add_come_code(info,"_inf_obj_value%d=come_increment_ref_count(%s);\n",inf_num_138,come_value_131->c_value);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_138,inf_num_138);
    typeX_141=(struct sType*)come_increment_ref_count(sType_clone(type_132));
    typeX_141->mPointerNum++;
    ((struct tuple2$2sFunpcharph*)(__right_value198=create_finalizer_automatically(typeX_141,"finalize",info)));
    /*g*/come_call_finalizer3(__right_value198,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    ((struct tuple2$2sFunpcharph*)(__right_value199=create_cloner_automatically(typeX_141,"clone",info)));
    /*g*/come_call_finalizer3(__right_value199,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    i_142=1;    i_142<list$1tuple2$2charphsTypephph_length(klass_133->mFields);    i_142++    ){
        multiple_assign_var2=((struct tuple2$2charphsTypeph*)come_null_check(list$1tuple2$2charphsTypephphp_operator_load_element(klass_133->mFields,i_142), "21obj.c", 184, 0));
        name_146=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        field_type_147=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
        method_name_148=(char*)come_increment_ref_count(create_method_name(type_132,(_Bool)0,name_146,info,(_Bool)1));
        fun_149=map$2charphsFunph_at(info->funcs,method_name_148,((void*)0));
        if(fun_149==((void*)0)) {
            klass2_152=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,type_132->mClass->mName), "21obj.c", 191, 1));
            while(map$2charphsClassphp_operator_load_element(info->classes,klass2_152->mParentClassName)) {
                klass2_152=map$2charphsClassphp_operator_load_element(info->classes,klass2_152->mParentClassName);
                __dec_obj108=method_name_148;
                method_name_148=(char*)come_increment_ref_count(create_method_name_using_class(klass2_152,(_Bool)0,name_146,info,(_Bool)1));
                __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_149=map$2charphsFunph_at(info->funcs,method_name_148,((void*)0));
                if(fun_149) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_138,name_146,method_name_148);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_138,name_146,method_name_148);
        }
        name_146 = come_decrement_ref_count2(name_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(field_type_147,sType_finalize, 0, 0, 0, 0, (void*)0);
        method_name_148 = come_decrement_ref_count2(method_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj109=come_value2_134->c_value;
    come_value2_134->c_value=(char*)come_increment_ref_count(xsprintf("_inf_value%d",inf_num_138));
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    type3_160=(struct sType*)come_increment_ref_count(sType_clone(inf_type_130));
    type3_160->mPointerNum++;
    type3_160->mHeap=(_Bool)1;
    type2_135->mHeap=(_Bool)1;
    __dec_obj110=come_value2_134->type;
    come_value2_134->type=(struct sType*)come_increment_ref_count(sType_clone(type2_135));
    /* a*/come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_134->type->mPointerNum++;
    come_value2_134->var=((void*)0);
    append_object_to_right_values2(come_value2_134,(struct sType*)come_increment_ref_count(type3_160),info,(_Bool)0);
    add_come_last_code(info,"%s;\n",come_value2_134->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_134));
    __result117__ = (_Bool)1;
    if(obj_exp_129) { obj_exp_129 = come_decrement_ref_count2(obj_exp_129, ((struct sNode*)obj_exp_129)->finalize, ((struct sNode*)obj_exp_129)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(inf_type_130,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_132,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_136 = come_decrement_ref_count2(type_name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_137 = come_decrement_ref_count2(type_name2_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_139 = come_decrement_ref_count2(buf_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_140 = come_decrement_ref_count2(buf2_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(typeX_141,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_160,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result117__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj83;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj83=self->v2;
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1tuple2$2charphsTypephph* it_143;
int i_144;
struct tuple2$2charphsTypeph* __result107__;
struct tuple2$2charphsTypeph* default_value_145;
struct tuple2$2charphsTypeph* __result108__;
default_value_145 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_143=self->head;
    i_144=0;
    while(it_143!=((void*)0)) {
        if(position==i_144) {
            __result107__ = gComeFunResultObject = __result_obj__ = it_143->item;
            gComeFunResultObject = (void*)0;
            return __result107__;
        }
        it_143=it_143->next;
        i_144++;
    }
    memset(&default_value_145,0,sizeof(struct tuple2$2charphsTypeph*));
    __result108__ = gComeFunResultObject = __result_obj__ = default_value_145;
    /*i*/come_call_finalizer3(default_value_145,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_150;
unsigned int it_151;
struct sFun* __result109__;
struct sFun* __result110__;
struct sFun* __result111__;
struct sFun* __result112__;
    hash_150=string_get_hash_key(((char*)key))%self->size;
    it_151=hash_150;
    while((_Bool)1) {
        if(self->item_existance[it_151]) {
            if(string_equals(self->keys[it_151],key)) {
                __result109__ = gComeFunResultObject = __result_obj__ = self->items[it_151];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result109__;
            }
            it_151++;
            if(it_151>=self->size) {
                it_151=0;
            }
            else {
                if(it_151==hash_150) {
                    __result110__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result110__;
                }
            }
        }
        else {
            __result111__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result111__;
        }
    }
    __result112__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj86;
struct sType* __dec_obj87;
struct list$1sTypeph* __dec_obj88;
struct list$1charph* __dec_obj89;
struct list$1charph* __dec_obj90;
struct sType* __dec_obj91;
struct sBlock* __dec_obj92;
struct buffer* __dec_obj95;
struct buffer* __dec_obj96;
struct buffer* __dec_obj97;
struct buffer* __dec_obj98;
char* __dec_obj99;
char* __dec_obj100;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj86=self->mName;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj87=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj88=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj88,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj89=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj89,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj90=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj90,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(self->mLambdaType==gComeFunResultObject) {
            __dec_obj91=self->mLambdaType;
            /* a*/come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj92=self->mBlock;
            /* a*/come_call_finalizer3(__dec_obj92,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj95=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj95,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj96=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj96,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj97=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj97,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(self->mSourceDefer==gComeFunResultObject) {
            __dec_obj98=self->mSourceDefer;
            /* a*/come_call_finalizer3(__dec_obj98,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(self->mComeHeader==gComeFunResultObject) {
            __dec_obj99=self->mComeHeader;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj100=self->mDeclareSName;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj93;
struct sVarTable* __dec_obj94;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(self->mNodes==gComeFunResultObject) {
            __dec_obj93=self->mNodes;
            /* a*/come_call_finalizer3(__dec_obj93,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(self->mVarTable==gComeFunResultObject) {
            __dec_obj94=self->mVarTable;
            /* a*/come_call_finalizer3(__dec_obj94,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_153;
unsigned int hash_154;
unsigned int it_155;
struct sClass* __result113__;
struct sClass* __result114__;
struct sClass* __result115__;
struct sClass* __result116__;
default_value_153 = (void*)0;
    memset(&default_value_153,0,sizeof(struct sClass*));
    hash_154=string_get_hash_key(((char*)key))%self->size;
    it_155=hash_154;
    while((_Bool)1) {
        if(self->item_existance[it_155]) {
            if(string_equals(self->keys[it_155],key)) {
                __result113__ = gComeFunResultObject = __result_obj__ = self->items[it_155];
                /*i*/come_call_finalizer3(default_value_153,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result113__;
            }
            it_155++;
            if(it_155>=self->size) {
                it_155=0;
            }
            else {
                if(it_155==hash_154) {
                    __result114__ = gComeFunResultObject = __result_obj__ = default_value_153;
                    /*i*/come_call_finalizer3(default_value_153,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result114__;
                }
            }
        }
        else {
            __result115__ = gComeFunResultObject = __result_obj__ = default_value_153;
            /*i*/come_call_finalizer3(default_value_153,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result115__;
        }
    }
    __result116__ = gComeFunResultObject = __result_obj__ = default_value_153;
    /*i*/come_call_finalizer3(default_value_153,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj101;
struct list$1tuple2$2charphsTypephph* __dec_obj102;
char* __dec_obj106;
char* __dec_obj107;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj101=self->mName;
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(self->mFields==gComeFunResultObject) {
            __dec_obj102=self->mFields;
            /* a*/come_call_finalizer3(__dec_obj102,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj106=self->mDeclareSName;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(self->mParentClassName==gComeFunResultObject) {
            __dec_obj107=self->mParentClassName;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_156;
struct list_item$1tuple2$2charphsTypephph* prev_it_157;
    it_156=self->head;
    while(it_156!=((void*)0)) {
        prev_it_157=it_156;
        it_156=it_156->next;
        /*i*/come_call_finalizer3(prev_it_157,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj103;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj103=self->item;
            /* a*/come_call_finalizer3(__dec_obj103,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj104;
struct sType* __dec_obj105;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj104=self->v1;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj105=self->v2;
            /* a*/come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_158;
struct list_item$1tuple2$2charphsTypephph* prev_it_159;
    it_158=self->head;
    while(it_158!=((void*)0)) {
        prev_it_159=it_158;
        it_158=it_158->next;
        /*i*/come_call_finalizer3(prev_it_159,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value205 = (void*)0;
struct sTrueNode* __result118__;
    ((struct sNodeBase*)(__right_value205=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value205,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __result_obj__=(void*)0;
void* __right_value206 = (void*)0;
char* __result119__;
    __result119__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value206=__builtin_string("sTrueNode")));
    __right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct CVALUE* come_value_161;
void* __right_value209 = (void*)0;
char* __dec_obj112;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct sType* __dec_obj113;
_Bool __result120__;
    come_value_161=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 245, "CVALUE"))));
    __dec_obj112=come_value_161->c_value;
    come_value_161->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)1"));
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj113=come_value_161->type;
    come_value_161->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 248, "sType")),"bool",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_161->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_161->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_161));
    __result120__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_161,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result120__;
}

struct sNode* create_true_object(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct sNode* _inf_value1;
struct sTrueNode* _inf_obj_value1;
void* __right_value216 = (void*)0;
struct sNode* __result123__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 261, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sTrueNode*)(__right_value213=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 261, "sTrueNode")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sTrueNode_finalize;
    _inf_value1->clone=(void*)sTrueNode_clone;
    _inf_value1->compile=(void*)sTrueNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sTrueNode_kind;
    __result123__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value216=_inf_value1));
    /*g*/come_call_finalizer3(__right_value213,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value216) { __right_value216 = come_decrement_ref_count2(__right_value216, ((struct sNode*)__right_value216)->finalize, ((struct sNode*)__right_value216)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result123__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value217 = (void*)0;
struct sFalseNode* __result124__;
    ((struct sNodeBase*)(__right_value217=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value217,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __result_obj__=(void*)0;
void* __right_value218 = (void*)0;
char* __result125__;
    __result125__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value218=__builtin_string("sFalseNode")));
    __right_value218 = come_decrement_ref_count2(__right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct CVALUE* come_value_163;
void* __right_value221 = (void*)0;
char* __dec_obj117;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct sType* __dec_obj118;
_Bool __result126__;
    come_value_163=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 278, "CVALUE"))));
    __dec_obj117=come_value_163->c_value;
    come_value_163->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)0"));
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj118=come_value_163->type;
    come_value_163->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 281, "sType")),"bool",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_163->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_163->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_163));
    __result126__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result126__;
}

struct sNode* create_false_object(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct sNode* _inf_value2;
struct sFalseNode* _inf_obj_value2;
void* __right_value228 = (void*)0;
struct sNode* __result129__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 294, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFalseNode*)(__right_value225=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 294, "sFalseNode")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFalseNode_finalize;
    _inf_value2->clone=(void*)sFalseNode_clone;
    _inf_value2->compile=(void*)sFalseNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFalseNode_kind;
    __result129__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value228=_inf_value2));
    /*g*/come_call_finalizer3(__right_value225,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value228) { __right_value228 = come_decrement_ref_count2(__right_value228, ((struct sNode*)__right_value228)->finalize, ((struct sNode*)__right_value228)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result129__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct sType* __dec_obj121;
struct sSizeOfNode* __result130__;
    ((struct sNodeBase*)(__right_value229=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value229,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj121=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /* a*/come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value231 = (void*)0;
char* __result131__;
    __result131__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value231=__builtin_string("sSizeOfNode")));
    __right_value231 = come_decrement_ref_count2(__right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
struct sType* type_165;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct CVALUE* come_value_166;
void* __right_value234 = (void*)0;
struct sType* type2_167;
void* __right_value235 = (void*)0;
char* type_name_168;
void* __right_value236 = (void*)0;
char* __dec_obj124;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct sType* __dec_obj125;
_Bool __result132__;
    type_165=self->type;
    come_value_166=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 315, "CVALUE"))));
    type2_167=(struct sType*)come_increment_ref_count(solve_generics(type_165,info->generics_type,info));
    type_name_168=(char*)come_increment_ref_count(make_type_name_string(type2_167,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    __dec_obj124=come_value_166->c_value;
    come_value_166->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",type_name_168));
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj125=come_value_166->type;
    come_value_166->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 322, "sType")),"long",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_166->type->mUnsigned=(_Bool)1;
    come_value_166->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_166->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
    __result132__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_167,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_168 = come_decrement_ref_count2(type_name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result132__;
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct sNode* __dec_obj126;
struct sSizeOfExpNode* __result133__;
struct sSizeOfExpNode* __result134__;
    ((struct sNodeBase*)(__right_value239=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value239,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj126=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result133__;
    __result134__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result134__;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value241 = (void*)0;
char* __result135__;
    __result135__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value241=__builtin_string("sSizeOfExpNode")));
    __right_value241 = come_decrement_ref_count2(__right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
struct sNode* exp_169;
_Bool __result136__;
void* __right_value242 = (void*)0;
struct CVALUE* come_value_170;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct CVALUE* come_value2_171;
void* __right_value245 = (void*)0;
char* __dec_obj129;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct sType* __dec_obj130;
_Bool __result137__;
    exp_169=(struct sNode*)come_increment_ref_count(self->exp);
    if(!node_compile(exp_169,info)) {
        __result136__ = (_Bool)0;
        if(exp_169) { exp_169 = come_decrement_ref_count2(exp_169, ((struct sNode*)exp_169)->finalize, ((struct sNode*)exp_169)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result136__;
    }
    come_value_170=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_171=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 361, "CVALUE"))));
    __dec_obj129=come_value2_171->c_value;
    come_value2_171->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",come_value_170->c_value));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj130=come_value2_171->type;
    come_value2_171->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 364, "sType")),"long",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_171->type->mUnsigned=(_Bool)1;
    come_value2_171->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_171->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_171));
    __result137__ = (_Bool)1;
    if(exp_169) { exp_169 = come_decrement_ref_count2(exp_169, ((struct sNode*)exp_169)->finalize, ((struct sNode*)exp_169)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result137__;
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct sType* __dec_obj131;
struct sTypeOfNode* __result138__;
    ((struct sNodeBase*)(__right_value248=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value248,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj131=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /* a*/come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result138__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
char* __result139__;
    __result139__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=__builtin_string("sTypeOfNode")));
    __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result139__;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
struct sType* type_172;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct CVALUE* come_value_173;
void* __right_value253 = (void*)0;
struct sType* type2_174;
void* __right_value254 = (void*)0;
char* type_name_175;
void* __right_value255 = (void*)0;
char* __dec_obj134;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct sType* __dec_obj135;
_Bool __result140__;
    type_172=self->type;
    come_value_173=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 394, "CVALUE"))));
    type2_174=(struct sType*)come_increment_ref_count(solve_generics(type_172,info->generics_type,info));
    type_name_175=(char*)come_increment_ref_count(make_type_name_string(type2_174,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj134=come_value_173->c_value;
    come_value_173->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_175));
    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj135=come_value_173->type;
    come_value_173->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 401, "sType")),"char*",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_173->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_173->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_173));
    __result140__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_174,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_175 = come_decrement_ref_count2(type_name_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result140__;
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct sNode* __dec_obj136;
struct sTypeOfExpNode* __result141__;
    ((struct sNodeBase*)(__right_value258=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value258,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj136=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
    __result141__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result141__;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
char* __result142__;
    __result142__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value260=__builtin_string("sTypeOfExpNode")));
    __right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
struct sNode* exp_176;
_Bool __result143__;
void* __right_value261 = (void*)0;
struct CVALUE* come_value_177;
void* __right_value262 = (void*)0;
struct sType* type_178;
void* __right_value263 = (void*)0;
struct sType* type2_179;
void* __right_value264 = (void*)0;
char* type_name_180;
void* __right_value265 = (void*)0;
char* __dec_obj139;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct sType* __dec_obj140;
_Bool __result144__;
    exp_176=(struct sNode*)come_increment_ref_count(self->exp);
    if(!node_compile(exp_176,info)) {
        __result143__ = (_Bool)0;
        if(exp_176) { exp_176 = come_decrement_ref_count2(exp_176, ((struct sNode*)exp_176)->finalize, ((struct sNode*)exp_176)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result143__;
    }
    come_value_177=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_178=(struct sType*)come_increment_ref_count(sType_clone(come_value_177->type));
    type2_179=(struct sType*)come_increment_ref_count(solve_generics(type_178,info->generics_type,info));
    type_name_180=(char*)come_increment_ref_count(make_type_name_string(type2_179,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj139=come_value_177->c_value;
    come_value_177->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_180));
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj140=come_value_177->type;
    come_value_177->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 444, "sType")),"char*",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_177->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_177->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_177));
    __result144__ = (_Bool)1;
    if(exp_176) { exp_176 = come_decrement_ref_count2(exp_176, ((struct sNode*)exp_176)->finalize, ((struct sNode*)exp_176)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_177,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_178,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_179,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_180 = come_decrement_ref_count2(type_name_180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result144__;
}

struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct sNode* __dec_obj141;
struct sDynamicTypeOfNode* __result145__;
    ((struct sNodeBase*)(__right_value268=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value268,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj141=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); }
    __result145__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDynamicTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result145__;
}

char* sDynamicTypeOfNode_kind(struct sDynamicTypeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value270 = (void*)0;
char* __result146__;
    __result146__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value270=__builtin_string("sDynamicTypeOfNode")));
    __right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result146__;
}

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info){
struct sNode* exp_181;
_Bool __result147__;
void* __right_value271 = (void*)0;
struct CVALUE* come_value_182;
void* __right_value272 = (void*)0;
struct sType* type_183;
void* __right_value273 = (void*)0;
struct sType* type2_184;
void* __right_value274 = (void*)0;
char* type_name_185;
void* __right_value275 = (void*)0;
char* __dec_obj144;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct sType* __dec_obj145;
_Bool __result148__;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct CVALUE* come_value2_186;
void* __right_value280 = (void*)0;
char* __dec_obj146;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sType* __dec_obj147;
_Bool __result149__;
    exp_181=(struct sNode*)come_increment_ref_count(self->exp);
    if(!node_compile(exp_181,info)) {
        __result147__ = (_Bool)0;
        if(exp_181) { exp_181 = come_decrement_ref_count2(exp_181, ((struct sNode*)exp_181)->finalize, ((struct sNode*)exp_181)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result147__;
    }
    come_value_182=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(!come_value_182->type->mHeap) {
        type_183=(struct sType*)come_increment_ref_count(sType_clone(come_value_182->type));
        type2_184=(struct sType*)come_increment_ref_count(solve_generics(type_183,info->generics_type,info));
        type_name_185=(char*)come_increment_ref_count(make_type_name_string(type2_184,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj144=come_value_182->c_value;
        come_value_182->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_185));
        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj145=come_value_182->type;
        come_value_182->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 488, "sType")),"char*",(_Bool)0,info));
        /* a*/come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_182->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_182->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_182));
        __result148__ = (_Bool)1;
        /*i*/come_call_finalizer3(type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_184,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_185 = come_decrement_ref_count2(type_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_181) { exp_181 = come_decrement_ref_count2(exp_181, ((struct sNode*)exp_181)->finalize, ((struct sNode*)exp_181)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result148__;
        /*i*/come_call_finalizer3(type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_184,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_185 = come_decrement_ref_count2(type_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value2_186=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 498, "CVALUE"))));
        __dec_obj146=come_value2_186->c_value;
        come_value2_186->c_value=(char*)come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",come_value_182->c_value));
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj147=come_value2_186->type;
        come_value2_186->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 501, "sType")),"char*",(_Bool)0,info));
        /* a*/come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_186->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value2_186->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_186));
        /*i*/come_call_finalizer3(come_value2_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result149__ = (_Bool)1;
    if(exp_181) { exp_181 = come_decrement_ref_count2(exp_181, ((struct sNode*)exp_181)->finalize, ((struct sNode*)exp_181)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result149__;
}

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self){
char* __dec_obj142;
struct sNode* __dec_obj143;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj142=self->sname;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        if(self->exp==gComeFunResultObject) {
            __dec_obj143=self->exp;
            if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct sType* __dec_obj148;
struct sAlignOfNode* __result150__;
struct sAlignOfNode* __result151__;
    ((struct sNodeBase*)(__right_value283=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value283,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj148=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /* a*/come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result150__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result150__;
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
char* __result152__;
    __result152__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value285=__builtin_string("sAlignOfNode")));
    __right_value285 = come_decrement_ref_count2(__right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result152__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
struct sType* type_187;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct CVALUE* come_value_188;
void* __right_value288 = (void*)0;
struct sType* type2_189;
void* __right_value289 = (void*)0;
char* type_name_190;
void* __right_value290 = (void*)0;
char* __dec_obj151;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sType* __dec_obj152;
_Bool __result153__;
    type_187=self->type;
    come_value_188=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 533, "CVALUE"))));
    type2_189=(struct sType*)come_increment_ref_count(solve_generics(type_187,info->generics_type,info));
    type_name_190=(char*)come_increment_ref_count(make_type_name_string(type2_189,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj151=come_value_188->c_value;
    come_value_188->c_value=(char*)come_increment_ref_count(xsprintf("_Alignof(%s)",type_name_190));
    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj152=come_value_188->type;
    come_value_188->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 540, "sType")),"long",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_188->type->mUnsigned=(_Bool)1;
    come_value_188->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_188->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_188));
    __result153__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_189,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_190 = come_decrement_ref_count2(type_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result153__;
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sNode* __dec_obj153;
struct sAlignOfExpNode* __result154__;
    ((struct sNodeBase*)(__right_value293=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value293,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj153=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
    __result154__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result154__;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value295 = (void*)0;
char* __result155__;
    __result155__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value295=__builtin_string("sAlignOfExpNode")));
    __right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result155__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
struct sNode* exp_191;
_Bool __result156__;
void* __right_value296 = (void*)0;
struct CVALUE* come_value_192;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct CVALUE* come_value2_193;
void* __right_value299 = (void*)0;
char* __dec_obj156;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct sType* __dec_obj157;
_Bool __result157__;
    exp_191=(struct sNode*)come_increment_ref_count(self->exp);
    if(!node_compile(exp_191,info)) {
        __result156__ = (_Bool)0;
        if(exp_191) { exp_191 = come_decrement_ref_count2(exp_191, ((struct sNode*)exp_191)->finalize, ((struct sNode*)exp_191)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result156__;
    }
    come_value_192=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_193=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 577, "CVALUE"))));
    __dec_obj156=come_value2_193->c_value;
    come_value2_193->c_value=(char*)come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value_192->c_value));
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj157=come_value2_193->type;
    come_value2_193->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 580, "sType")),"long",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_193->type->mUnsigned=(_Bool)1;
    come_value2_193->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_193->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_193));
    __result157__ = (_Bool)1;
    if(exp_191) { exp_191 = come_decrement_ref_count2(exp_191, ((struct sNode*)exp_191)->finalize, ((struct sNode*)exp_191)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_192,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_193,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result157__;
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sType* __dec_obj158;
struct sAlignOfNode2* __result158__;
    ((struct sNodeBase*)(__right_value302=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value302,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj158=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /* a*/come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result158__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
char* __result159__;
    __result159__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value304=__builtin_string("sAlignOfNode2")));
    __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
struct sType* type_194;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct CVALUE* come_value_195;
void* __right_value307 = (void*)0;
struct sType* type2_196;
void* __right_value308 = (void*)0;
char* type_name_197;
void* __right_value309 = (void*)0;
char* __dec_obj161;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sType* __dec_obj162;
_Bool __result160__;
    type_194=self->type;
    come_value_195=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 610, "CVALUE"))));
    type2_196=(struct sType*)come_increment_ref_count(solve_generics(type_194,info->generics_type,info));
    type_name_197=(char*)come_increment_ref_count(make_type_name_string(type2_196,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj161=come_value_195->c_value;
    come_value_195->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",type_name_197));
    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj162=come_value_195->type;
    come_value_195->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 617, "sType")),"long",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_195->type->mUnsigned=(_Bool)1;
    come_value_195->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_195->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_195));
    __result160__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_196,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result160__;
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sNode* __dec_obj163;
struct sAlignOfExpNode2* __result161__;
    ((struct sNodeBase*)(__right_value312=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value312,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj163=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
    __result161__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result161__;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __result_obj__=(void*)0;
void* __right_value314 = (void*)0;
char* __result162__;
    __result162__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value314=__builtin_string("sAlignOfExpNode2")));
    __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
struct sNode* exp_198;
_Bool __result163__;
void* __right_value315 = (void*)0;
struct CVALUE* come_value_199;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct CVALUE* come_value2_200;
void* __right_value318 = (void*)0;
char* __dec_obj166;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sType* __dec_obj167;
_Bool __result164__;
    exp_198=(struct sNode*)come_increment_ref_count(self->exp);
    if(!node_compile(exp_198,info)) {
        __result163__ = (_Bool)0;
        if(exp_198) { exp_198 = come_decrement_ref_count2(exp_198, ((struct sNode*)exp_198)->finalize, ((struct sNode*)exp_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result163__;
    }
    come_value_199=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_200=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 654, "CVALUE"))));
    __dec_obj166=come_value2_200->c_value;
    come_value2_200->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",come_value_199->c_value));
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj167=come_value2_200->type;
    come_value2_200->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 657, "sType")),"long",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_200->type->mUnsigned=(_Bool)1;
    come_value2_200->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_200->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_200));
    __result164__ = (_Bool)1;
    if(exp_198) { exp_198 = come_decrement_ref_count2(exp_198, ((struct sNode*)exp_198)->finalize, ((struct sNode*)exp_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_199,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_200,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result164__;
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sType* __dec_obj168;
struct sAlignAsNode* __result165__;
    ((struct sNodeBase*)(__right_value321=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value321,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj168=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /* a*/come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result165__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result165__;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __result_obj__=(void*)0;
void* __right_value323 = (void*)0;
char* __result166__;
    __result166__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value323=__builtin_string("sAlignAsNode")));
    __right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
struct sType* type_201;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct CVALUE* come_value_202;
void* __right_value326 = (void*)0;
struct sType* type2_203;
void* __right_value327 = (void*)0;
char* type_name_204;
void* __right_value328 = (void*)0;
char* __dec_obj171;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sType* __dec_obj172;
_Bool __result167__;
    type_201=self->type;
    come_value_202=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 687, "CVALUE"))));
    type2_203=(struct sType*)come_increment_ref_count(solve_generics(type_201,info->generics_type,info));
    type_name_204=(char*)come_increment_ref_count(make_type_name_string(type2_203,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj171=come_value_202->c_value;
    come_value_202->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",type_name_204));
    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj172=come_value_202->type;
    come_value_202->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 694, "sType")),"long",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_202->type->mUnsigned=(_Bool)1;
    come_value_202->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_202->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_202));
    __result167__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_203,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_204 = come_decrement_ref_count2(type_name_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result167__;
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sNode* __dec_obj173;
struct sAlignAsExpNode* __result168__;
    ((struct sNodeBase*)(__right_value331=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value331,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj173=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); }
    __result168__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result168__;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value333 = (void*)0;
char* __result169__;
    __result169__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value333=__builtin_string("sAlignAsExpNode")));
    __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result169__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
struct sNode* exp_205;
_Bool __result170__;
void* __right_value334 = (void*)0;
struct CVALUE* come_value_206;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct CVALUE* come_value2_207;
void* __right_value337 = (void*)0;
char* __dec_obj176;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sType* __dec_obj177;
_Bool __result171__;
    exp_205=(struct sNode*)come_increment_ref_count(self->exp);
    if(!node_compile(exp_205,info)) {
        __result170__ = (_Bool)0;
        if(exp_205) { exp_205 = come_decrement_ref_count2(exp_205, ((struct sNode*)exp_205)->finalize, ((struct sNode*)exp_205)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result170__;
    }
    come_value_206=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_207=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 731, "CVALUE"))));
    __dec_obj176=come_value2_207->c_value;
    come_value2_207->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",come_value_206->c_value));
    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj177=come_value2_207->type;
    come_value2_207->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 734, "sType")),"long",(_Bool)0,info));
    /* a*/come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_207->type->mUnsigned=(_Bool)1;
    come_value2_207->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_207->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_207));
    __result171__ = (_Bool)1;
    if(exp_205) { exp_205 = come_decrement_ref_count2(exp_205, ((struct sNode*)exp_205)->finalize, ((struct sNode*)exp_205)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result171__;
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sNode* __dec_obj178;
struct sDeleteNode* __result172__;
    ((struct sNodeBase*)(__right_value340=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value340,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj178=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
    __result172__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result172__;
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __result_obj__=(void*)0;
void* __right_value342 = (void*)0;
char* __result173__;
    __result173__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value342=__builtin_string("sDeleteNode")));
    __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result173__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
struct sNode* node_208;
void* __right_value343 = (void*)0;
struct CVALUE* come_value_209;
_Bool __result174__;
    node_208=self->node;
    if(!node_compile(node_208,info)) {
        return (_Bool)0;
    }
    come_value_209=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    free_object(come_value_209->type,come_value_209->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    __result174__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result174__;
}

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct sNode* __dec_obj181;
struct sForceDeleteNode* __result175__;
    ((struct sNodeBase*)(__right_value344=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value344,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj181=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
    __result175__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sForceDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result175__;
}

char* sForceDeleteNode_kind(struct sForceDeleteNode* self){
void* __result_obj__=(void*)0;
void* __right_value346 = (void*)0;
char* __result176__;
    __result176__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value346=__builtin_string("sForceDeleteNode")));
    __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

_Bool sForceDeleteNode_compile(struct sForceDeleteNode* self, struct sInfo* info){
struct sNode* node_210;
void* __right_value347 = (void*)0;
struct CVALUE* come_value_211;
_Bool __result177__;
    node_210=self->node;
    if(!node_compile(node_210,info)) {
        return (_Bool)0;
    }
    come_value_211=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    free_object(come_value_211->type,come_value_211->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)1);
    __result177__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result177__;
}

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct sNode* __dec_obj184;
struct sDelegateNode* __result178__;
struct sDelegateNode* __result179__;
    ((struct sNodeBase*)(__right_value348=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value348,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj184=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
    __result178__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result178__;
    __result179__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result179__;
}

char* sDelegateNode_kind(struct sDelegateNode* self){
void* __result_obj__=(void*)0;
void* __right_value350 = (void*)0;
char* __result180__;
    __result180__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value350=__builtin_string("sDelegateNode")));
    __right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info){
struct sNode* node_212;
void* __right_value351 = (void*)0;
struct CVALUE* come_value_213;
_Bool __result181__;
    node_212=self->node;
    if(!node_compile(node_212,info)) {
        return (_Bool)0;
    }
    come_value_213=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_213->type->mDelegate=(_Bool)1;
    if(come_value_213->var) {
        come_value_213->var->mType->mDelegate=(_Bool)1;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_213));
    __result181__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result181__;
}

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sNode* __dec_obj187;
struct sShareNode* __result182__;
    ((struct sNodeBase*)(__right_value352=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value352,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj187=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
    __result182__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result182__;
}

char* sShareNode_kind(struct sShareNode* self){
void* __result_obj__=(void*)0;
void* __right_value354 = (void*)0;
char* __result183__;
    __result183__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value354=__builtin_string("sShareNode")));
    __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info){
struct sNode* node_214;
void* __right_value355 = (void*)0;
struct CVALUE* come_value_215;
_Bool __result184__;
    node_214=self->node;
    if(!node_compile(node_214,info)) {
        return (_Bool)0;
    }
    come_value_215=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_215->type->mShare=(_Bool)1;
    if(come_value_215->var) {
        come_value_215->var->mType->mShare=(_Bool)1;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_215));
    __result184__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_215,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result184__;
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sNode* __dec_obj190;
struct sBorrowNode* __result185__;
struct sBorrowNode* __result186__;
    ((struct sNodeBase*)(__right_value356=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value356,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj190=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); }
    __result185__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result185__;
    __result186__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result186__;
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
char* __result187__;
    __result187__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value358=__builtin_string("sBorrowNode")));
    __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
struct sNode* node_216;
void* __right_value359 = (void*)0;
struct CVALUE* come_value_217;
struct sRightValueObject* right_value_objects_218;
int right_value_id_219;
_Bool __result188__;
    node_216=self->node;
    if(!node_compile(node_216,info)) {
        return (_Bool)0;
    }
    come_value_217=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_217->type->mHeap=(_Bool)0;
    right_value_objects_218=come_value_217->right_value_objects;
    if(right_value_objects_218) {
        right_value_id_219=right_value_objects_218->mID;
        if(right_value_id_219!=-1) {
            remove_object_from_right_values(right_value_id_219,info);
        }
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_217));
    __result188__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_217,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result188__;
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct sNode* __dec_obj193;
struct sCloneNode* __result189__;
    ((struct sNodeBase*)(__right_value360=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value360,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj193=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); }
    __result189__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result189__;
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __result_obj__=(void*)0;
void* __right_value362 = (void*)0;
char* __result190__;
    __result190__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value362=__builtin_string("sCloneNode")));
    __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result190__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
struct sNode* node_220;
void* __right_value363 = (void*)0;
struct CVALUE* left_value_221;
void* __right_value364 = (void*)0;
struct sType* left_type_222;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct CVALUE* come_value_223;
void* __right_value367 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var3;
struct sType* result_type_224;
char* c_value_225;
char* __dec_obj198;
void* __right_value368 = (void*)0;
struct sType* __dec_obj199;
_Bool __result191__;
    node_220=self->node;
    if(!node_compile(node_220,info)) {
        return (_Bool)0;
    }
    left_value_221=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_value_221->type->mClone=(_Bool)1;
    left_type_222=(struct sType*)come_increment_ref_count(sType_clone(left_value_221->type));
    if(left_type_222->mPointerNum==1&&string_operator_equals(left_type_222->mClass->mName,"void")&&left_type_222->mHeap==(_Bool)0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_221));
    }
    else {
        if(left_type_222->mPointerNum==0) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_221));
        }
        else {
            if(left_type_222->mPointerNum>0) {
                come_value_223=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 970, "CVALUE"))));
                multiple_assign_var3=((struct tuple2$2sTypephcharph*)(__right_value367=clone_object(left_type_222,left_value_221->c_value,info)));
                result_type_224=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                c_value_225=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                /*g*/come_call_finalizer3(__right_value367,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj198=come_value_223->c_value;
                come_value_223->c_value=(char*)come_increment_ref_count(c_value_225);
                __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj199=come_value_223->type;
                come_value_223->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_222));
                /* a*/come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_223->type->mHeap=(_Bool)1;
                come_value_223->type->mClone=(_Bool)1;
                come_value_223->var=((void*)0);
                append_object_to_right_values2(come_value_223,(struct sType*)come_increment_ref_count(left_type_222),info,(_Bool)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_223));
                /*i*/come_call_finalizer3(come_value_223,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_224,sType_finalize, 0, 0, 0, 0, (void*)0);
                c_value_225 = come_decrement_ref_count2(c_value_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result191__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type_222,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result191__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj196;
char* __dec_obj197;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj196=self->v1;
            /* a*/come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj197=self->v2;
            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sNode* __dec_obj200;
struct sDupeNode* __result192__;
    ((struct sNodeBase*)(__right_value369=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value369,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj200=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); }
    __result192__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result192__;
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __result_obj__=(void*)0;
void* __right_value371 = (void*)0;
char* __result193__;
    __result193__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value371=__builtin_string("sDupeNode")));
    __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result193__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
struct sNode* node_226;
void* __right_value372 = (void*)0;
struct CVALUE* left_value_227;
void* __right_value373 = (void*)0;
struct sType* left_type_228;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct CVALUE* come_value_229;
void* __right_value376 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var4;
struct sType* result_type_230;
char* c_value_231;
char* __dec_obj203;
void* __right_value377 = (void*)0;
struct sType* __dec_obj204;
_Bool __result194__;
    node_226=self->node;
    if(!node_compile(node_226,info)) {
        return (_Bool)0;
    }
    left_value_227=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_228=(struct sType*)come_increment_ref_count(sType_clone(left_value_227->type));
    if(left_type_228->mPointerNum==0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_227));
    }
    else {
        if(left_type_228->mPointerNum>0&&left_type_228->mHeap==(_Bool)0) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_227));
        }
        else {
            if(left_type_228->mPointerNum>0) {
                come_value_229=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1022, "CVALUE"))));
                multiple_assign_var4=((struct tuple2$2sTypephcharph*)(__right_value376=clone_object(left_type_228,left_value_227->c_value,info)));
                result_type_230=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                c_value_231=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                /*g*/come_call_finalizer3(__right_value376,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj203=come_value_229->c_value;
                come_value_229->c_value=(char*)come_increment_ref_count(c_value_231);
                __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj204=come_value_229->type;
                come_value_229->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_228));
                /* a*/come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_229->type->mHeap=(_Bool)1;
                come_value_229->var=((void*)0);
                append_object_to_right_values2(come_value_229,(struct sType*)come_increment_ref_count(left_type_228),info,(_Bool)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_229));
                /*i*/come_call_finalizer3(come_value_229,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_230,sType_finalize, 0, 0, 0, 0, (void*)0);
                c_value_231 = come_decrement_ref_count2(c_value_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result194__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_227,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type_228,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result194__;
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sNode* __dec_obj205;
struct sDummyHeapNode* __result195__;
    ((struct sNodeBase*)(__right_value378=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value378,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj205=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); }
    __result195__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result195__;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __result_obj__=(void*)0;
void* __right_value380 = (void*)0;
char* __result196__;
    __result196__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value380=__builtin_string("sDummyHeapNode")));
    __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result196__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
struct sNode* node_232;
void* __right_value381 = (void*)0;
struct CVALUE* come_value_233;
_Bool __result197__;
    node_232=self->node;
    if(!node_compile(node_232,info)) {
        return (_Bool)0;
    }
    come_value_233=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_233->type->mHeap=(_Bool)1;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_233));
    __result197__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_233,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result197__;
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct sNode* __dec_obj208;
struct sGCIncNode* __result198__;
    ((struct sNodeBase*)(__right_value382=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value382,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj208=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); }
    __result198__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result198__;
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __result_obj__=(void*)0;
void* __right_value384 = (void*)0;
char* __result199__;
    __result199__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value384=__builtin_string("sGCIncNode")));
    __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
struct sNode* node_234;
void* __right_value385 = (void*)0;
struct CVALUE* come_value_235;
struct sType* type_236;
void* __right_value386 = (void*)0;
char* type_name_237;
void* __right_value387 = (void*)0;
char* __dec_obj211;
_Bool __result200__;
    node_234=self->node;
    if(!node_compile(node_234,info)) {
        return (_Bool)0;
    }
    come_value_235=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_236=come_value_235->type;
    if(come_value_235->type->mHeap) {
        type_name_237=(char*)come_increment_ref_count(make_type_name_string(type_236,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj211=come_value_235->c_value;
        come_value_235->c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value_235->type,come_value_235->c_value,info));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        type_name_237 = come_decrement_ref_count2(type_name_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_235));
    __result200__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_235,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result200__;
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sNode* __dec_obj212;
struct sGCDecNode* __result201__;
    ((struct sNodeBase*)(__right_value388=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value388,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj212=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); }
    __result201__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result201__;
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
char* __result202__;
    __result202__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value390=__builtin_string("sGCDecNode")));
    __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result202__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
struct sNode* node_238;
void* __right_value391 = (void*)0;
struct CVALUE* come_value_239;
struct sType* type_240;
_Bool __result203__;
    node_238=self->node;
    if(!node_compile(node_238,info)) {
        return (_Bool)0;
    }
    come_value_239=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_240=come_value_239->type;
    decrement_ref_count_object(type_240,come_value_239->c_value,info,(_Bool)0,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_239));
    __result203__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result203__;
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct sNode* __dec_obj215;
struct sGCDecNoFreeNode* __result204__;
    ((struct sNodeBase*)(__right_value392=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value392,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj215=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); }
    __result204__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGCDecNoFreeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result204__;
}

char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self){
void* __result_obj__=(void*)0;
void* __right_value394 = (void*)0;
char* __result205__;
    __result205__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value394=__builtin_string("sGCDecNoFreeNode")));
    __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result205__;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info){
struct sNode* node_241;
void* __right_value395 = (void*)0;
struct CVALUE* come_value_242;
struct sType* type_243;
_Bool __result206__;
    node_241=self->node;
    if(!node_compile(node_241,info)) {
        return (_Bool)0;
    }
    come_value_242=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_243=come_value_242->type;
    decrement_ref_count_object(type_243,come_value_242->c_value,info,(_Bool)0,(_Bool)1);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_242));
    __result206__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_242,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result206__;
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sType* __dec_obj218;
struct sIsHeap* __result207__;
    ((struct sNodeBase*)(__right_value396=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value396,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj218=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /* a*/come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result207__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __result_obj__=(void*)0;
void* __right_value398 = (void*)0;
char* __result208__;
    __result208__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value398=__builtin_string("sIsHeap")));
    __right_value398 = come_decrement_ref_count2(__right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
struct sType* node_244;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct CVALUE* come_value_245;
void* __right_value401 = (void*)0;
char* __dec_obj221;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sType* __dec_obj222;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct CVALUE* come_value_246;
void* __right_value406 = (void*)0;
char* __dec_obj223;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct sType* __dec_obj224;
    node_244=self->type;
    if(self->type->mHeap) {
        come_value_245=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1199, "CVALUE"))));
        __dec_obj221=come_value_245->c_value;
        come_value_245->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj222=come_value_245->type;
        come_value_245->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1202, "sType")),"int",(_Bool)0,info));
        /* a*/come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_245->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_245));
        add_come_last_code(info,"%s;\n",come_value_245->c_value);
        /*i*/come_call_finalizer3(come_value_245,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_246=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1210, "CVALUE"))));
        __dec_obj223=come_value_246->c_value;
        come_value_246->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj224=come_value_246->type;
        come_value_246->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1213, "sType")),"int",(_Bool)0,info));
        /* a*/come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_246->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_246));
        add_come_last_code(info,"%s;\n",come_value_246->c_value);
        /*i*/come_call_finalizer3(come_value_246,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct sType* __dec_obj225;
struct sIsPointer* __result209__;
    ((struct sNodeBase*)(__right_value409=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value409,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj225=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /* a*/come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result209__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __result_obj__=(void*)0;
void* __right_value411 = (void*)0;
char* __result210__;
    __result210__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value411=__builtin_string("sIsPointer")));
    __right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
struct sType* node_247;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct CVALUE* come_value_248;
void* __right_value414 = (void*)0;
char* __dec_obj228;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sType* __dec_obj229;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_249;
void* __right_value419 = (void*)0;
char* __dec_obj230;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sType* __dec_obj231;
    node_247=self->type;
    if(self->type->mPointerNum>0) {
        come_value_248=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1244, "CVALUE"))));
        __dec_obj228=come_value_248->c_value;
        come_value_248->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj229=come_value_248->type;
        come_value_248->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1247, "sType")),"int",(_Bool)0,info));
        /* a*/come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_248->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_248));
        add_come_last_code(info,"%s;\n",come_value_248->c_value);
        /*i*/come_call_finalizer3(come_value_248,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_249=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1255, "CVALUE"))));
        __dec_obj230=come_value_249->c_value;
        come_value_249->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj231=come_value_249->type;
        come_value_249->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1258, "sType")),"int",(_Bool)0,info));
        /* a*/come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_249->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_249));
        add_come_last_code(info,"%s;\n",come_value_249->c_value);
        /*i*/come_call_finalizer3(come_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value422 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_250;
char* name_251;
_Bool err_252;
void* __right_value423 = (void*)0;
struct sType* inf_type_253;
void* __right_value424 = (void*)0;
struct sNode* node_254;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sNode* _inf_value3;
struct sImplementsNode* _inf_obj_value3;
void* __right_value431 = (void*)0;
struct sNode* __result213__;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct sNode* _inf_value4;
struct sNewNode* _inf_obj_value4;
void* __right_value447 = (void*)0;
struct sNode* obj_256;
void* __right_value448 = (void*)0;
char* fun_name_264;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sNode* __result222__;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1tuple2$2charphsNodephph* initializer_265;
void* __right_value453 = (void*)0;
char* field_name_266;
void* __right_value454 = (void*)0;
struct sNode* exp_267;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* __right_value463 = (void*)0;
struct sNode* __result226__;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sNode* _inf_value6;
struct sNewNode* _inf_obj_value6;
void* __right_value470 = (void*)0;
struct sNode* __result229__;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sNode* _inf_value7;
struct sTrueNode* _inf_obj_value7;
void* __right_value475 = (void*)0;
struct sNode* __result232__;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sNode* _inf_value8;
struct sFalseNode* _inf_obj_value8;
void* __right_value480 = (void*)0;
struct sNode* __result235__;
void* __right_value481 = (void*)0;
struct sNode* node_272;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sNode* _inf_value9;
struct sDeleteNode* _inf_obj_value9;
void* __right_value487 = (void*)0;
struct sNode* __result238__;
void* __right_value488 = (void*)0;
struct sNode* node_274;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct sNode* _inf_value10;
struct sForceDeleteNode* _inf_obj_value10;
void* __right_value494 = (void*)0;
struct sNode* __result241__;
void* __right_value495 = (void*)0;
struct sNode* node_276;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sNode* _inf_value11;
struct sBorrowNode* _inf_obj_value11;
void* __right_value501 = (void*)0;
struct sNode* __result244__;
void* __right_value502 = (void*)0;
struct sNode* node_278;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sNode* _inf_value12;
struct sDelegateNode* _inf_obj_value12;
void* __right_value508 = (void*)0;
struct sNode* __result247__;
void* __right_value509 = (void*)0;
struct sNode* node_280;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sNode* _inf_value13;
struct sShareNode* _inf_obj_value13;
void* __right_value515 = (void*)0;
struct sNode* __result250__;
void* __right_value516 = (void*)0;
struct sNode* node_282;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sNode* _inf_value14;
struct sCloneNode* _inf_obj_value14;
void* __right_value522 = (void*)0;
struct sNode* __result253__;
void* __right_value523 = (void*)0;
struct sNode* node_284;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sNode* _inf_value15;
struct sDupeNode* _inf_obj_value15;
void* __right_value529 = (void*)0;
struct sNode* __result256__;
void* __right_value530 = (void*)0;
struct sNode* node_286;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sNode* _inf_value16;
struct sDummyHeapNode* _inf_obj_value16;
void* __right_value536 = (void*)0;
struct sNode* __result259__;
void* __right_value537 = (void*)0;
struct sNode* node_288;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sNode* _inf_value17;
struct sGCIncNode* _inf_obj_value17;
void* __right_value543 = (void*)0;
struct sNode* __result262__;
void* __right_value544 = (void*)0;
struct sNode* node_290;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sNode* _inf_value18;
struct sGCDecNode* _inf_obj_value18;
void* __right_value550 = (void*)0;
struct sNode* __result265__;
void* __right_value551 = (void*)0;
struct sNode* node_292;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sNode* _inf_value19;
struct sGCDecNoFreeNode* _inf_obj_value19;
void* __right_value557 = (void*)0;
struct sNode* __result268__;
void* __right_value558 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_294;
char* param_name_295;
_Bool err_296;
void* __right_value559 = (void*)0;
struct sType* type2_297;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sNode* _inf_value20;
struct sIsHeap* _inf_obj_value20;
void* __right_value565 = (void*)0;
struct sNode* __result271__;
void* __right_value566 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* param_type_299;
char* param_name_300;
_Bool err_301;
void* __right_value567 = (void*)0;
struct sType* type2_302;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct sNode* _inf_value21;
struct sIsPointer* _inf_obj_value21;
void* __right_value573 = (void*)0;
struct sNode* __result274__;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sNode* _inf_value22;
struct sNothingNode* _inf_obj_value22;
void* __right_value578 = (void*)0;
struct sNode* __result277__;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct sNode* _inf_value23;
struct sNothingNode* _inf_obj_value23;
void* __right_value583 = (void*)0;
struct sNode* __result280__;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct sNode* _inf_value24;
struct sNothingNode* _inf_obj_value24;
void* __right_value588 = (void*)0;
struct sNode* __result283__;
_Bool come_c_307;
void* __right_value589 = (void*)0;
struct sNode* node_308;
struct sNode* __result284__;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sNode* _inf_value25;
struct sNothingNode* _inf_obj_value25;
void* __right_value594 = (void*)0;
struct sNode* __result287__;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct sNode* _inf_value26;
struct sNothingNode* _inf_obj_value26;
void* __right_value599 = (void*)0;
struct sNode* __result290__;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sNode* _inf_value27;
struct sNothingNode* _inf_obj_value27;
void* __right_value604 = (void*)0;
struct sNode* __result293__;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct sNode* _inf_value28;
struct sNothingNode* _inf_obj_value28;
void* __right_value609 = (void*)0;
struct sNode* __result296__;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct sNode* _inf_value29;
struct sNothingNode* _inf_obj_value29;
void* __right_value614 = (void*)0;
struct sNode* __result299__;
_Bool paren_314;
_Bool is_type_name_flag_315;
char* p_316;
int sline_317;
void* __right_value615 = (void*)0;
char* word_318;
void* __right_value616 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_319;
char* name_320;
_Bool err_321;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sNode* _inf_value30;
struct sSizeOfNode* _inf_obj_value30;
void* __right_value622 = (void*)0;
struct sNode* __result302__;
void* __right_value623 = (void*)0;
struct sNode* exp_323;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sNode* _inf_value31;
struct sSizeOfExpNode* _inf_obj_value31;
void* __right_value629 = (void*)0;
struct sNode* __result305__;
_Bool paren_325;
_Bool is_type_name_flag_326;
char* p_327;
int sline_328;
void* __right_value630 = (void*)0;
char* word_329;
void* __right_value631 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_330;
char* name_331;
_Bool err_332;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sNode* _inf_value32;
struct sTypeOfNode* _inf_obj_value32;
void* __right_value637 = (void*)0;
struct sNode* __result308__;
void* __right_value638 = (void*)0;
struct sNode* exp_334;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sNode* _inf_value33;
struct sTypeOfExpNode* _inf_obj_value33;
void* __right_value644 = (void*)0;
struct sNode* __result311__;
_Bool is_type_name_flag_336;
char* p_337;
int sline_338;
void* __right_value645 = (void*)0;
char* word_339;
void* __right_value646 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_340;
char* name_341;
_Bool err_342;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* _inf_value34;
struct sAlignOfNode* _inf_obj_value34;
void* __right_value652 = (void*)0;
struct sNode* __result314__;
void* __right_value653 = (void*)0;
struct sNode* exp_344;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sNode* _inf_value35;
struct sAlignOfExpNode* _inf_obj_value35;
void* __right_value659 = (void*)0;
struct sNode* __result317__;
_Bool is_type_name_flag_346;
char* p_347;
int sline_348;
void* __right_value660 = (void*)0;
char* word_349;
void* __right_value661 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_350;
char* name_351;
_Bool err_352;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct sNode* _inf_value36;
struct sAlignOfNode2* _inf_obj_value36;
void* __right_value667 = (void*)0;
struct sNode* __result320__;
void* __right_value668 = (void*)0;
struct sNode* exp_354;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sNode* _inf_value37;
struct sAlignOfExpNode2* _inf_obj_value37;
void* __right_value674 = (void*)0;
struct sNode* __result323__;
_Bool is_type_name_flag_356;
char* p_357;
int sline_358;
void* __right_value675 = (void*)0;
char* word_359;
void* __right_value676 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var12;
struct sType* type_360;
char* name_361;
_Bool err_362;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct sNode* _inf_value38;
struct sAlignAsNode* _inf_obj_value38;
void* __right_value682 = (void*)0;
struct sNode* __result326__;
void* __right_value683 = (void*)0;
struct sNode* exp_364;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct sNode* _inf_value39;
struct sAlignAsExpNode* _inf_obj_value39;
void* __right_value689 = (void*)0;
struct sNode* __result329__;
void* __right_value690 = (void*)0;
struct sNode* __result330__;
    if(!gComeC&&charp_operator_equals(buf,"new")) {
        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value422=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_250=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
        name_251=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        err_252=multiple_assign_var5->v3;
        /*g*/come_call_finalizer3(__right_value422,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(!err_252) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(*info->p==40) {
            if(type_250->mClass->mProtocol) {
                info->p++;
                skip_spaces_and_lf(info);
                inf_type_253=(struct sType*)come_increment_ref_count(sType_clone(type_250));
                node_254=(struct sNode*)come_increment_ref_count(expression_v13(info));
                expected_next_character(41,info);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1290, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sImplementsNode*)(__right_value426=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1290, "sImplementsNode")),(struct sNode*)come_increment_ref_count(node_254),(struct sType*)come_increment_ref_count(inf_type_253),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sImplementsNode_finalize;
                _inf_value3->clone=(void*)sImplementsNode_clone;
                _inf_value3->compile=(void*)sImplementsNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sImplementsNode_kind;
                __result213__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value431=_inf_value3));
                /*i*/come_call_finalizer3(inf_type_253,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_251 = come_decrement_ref_count2(name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value426,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value431) { __right_value431 = come_decrement_ref_count2(__right_value431, ((struct sNode*)__right_value431)->finalize, ((struct sNode*)__right_value431)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result213__;
                /*i*/come_call_finalizer3(inf_type_253,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1293, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sNewNode*)(__right_value433=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1293, "sNewNode")),(struct sType*)come_increment_ref_count(type_250),((void*)0),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sNewNode_finalize;
                _inf_value4->clone=(void*)sNewNode_clone;
                _inf_value4->compile=(void*)sNewNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sNodeBase_terminated;
                _inf_value4->kind=(void*)sNewNode_kind;
                obj_256=(struct sNode*)come_increment_ref_count(_inf_value4);
                /*g*/come_call_finalizer3(__right_value433,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
                fun_name_264=(char*)come_increment_ref_count(__builtin_string("initialize"));
                __result222__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value450=parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(obj_256)),(char*)come_increment_ref_count(fun_name_264),info)));
                if(obj_256) { obj_256 = come_decrement_ref_count2(obj_256, ((struct sNode*)obj_256)->finalize, ((struct sNode*)obj_256)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_264 = come_decrement_ref_count2(fun_name_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_251 = come_decrement_ref_count2(name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(__right_value450) { __right_value450 = come_decrement_ref_count2(__right_value450, ((struct sNode*)__right_value450)->finalize, ((struct sNode*)__right_value450)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result222__;
                if(obj_256) { obj_256 = come_decrement_ref_count2(obj_256, ((struct sNode*)obj_256)->finalize, ((struct sNode*)obj_256)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_264 = come_decrement_ref_count2(fun_name_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            if(*info->p==123) {
                info->p++;
                skip_spaces_and_lf(info);
                initializer_265=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "21obj.c", 1303, "list$1tuple2$2charphsNodephph"))));
                while((_Bool)1) {
                    field_name_266=(char*)come_increment_ref_count(parse_word(info));
                    expected_next_character(58,info);
                    exp_267=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1tuple2$2charphsNodephph_add(initializer_265,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "21obj.c", 1312, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(field_name_266),(struct sNode*)come_increment_ref_count(exp_267))));
                    if(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(*info->p==125) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            field_name_266 = come_decrement_ref_count2(field_name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(exp_267) { exp_267 = come_decrement_ref_count2(exp_267, ((struct sNode*)exp_267)->finalize, ((struct sNode*)exp_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            break;
                        }
                        else {
                            err_msg(info,"unexpected chractor(%c)",*info->p);
                            exit(2);
                        }
                    }
                    field_name_266 = come_decrement_ref_count2(field_name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(exp_267) { exp_267 = come_decrement_ref_count2(exp_267, ((struct sNode*)exp_267)->finalize, ((struct sNode*)exp_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1329, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sNewNode*)(__right_value458=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1329, "sNewNode")),(struct sType*)come_increment_ref_count(type_250),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer_265),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sNewNode_finalize;
                _inf_value5->clone=(void*)sNewNode_clone;
                _inf_value5->compile=(void*)sNewNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sNewNode_kind;
                __result226__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value463=_inf_value5));
                /*i*/come_call_finalizer3(initializer_265,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_251 = come_decrement_ref_count2(name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value458,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value463) { __right_value463 = come_decrement_ref_count2(__right_value463, ((struct sNode*)__right_value463)->finalize, ((struct sNode*)__right_value463)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result226__;
                /*i*/come_call_finalizer3(initializer_265,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1332, "struct sNode");
                _inf_obj_value6=come_increment_ref_count(((struct sNewNode*)(__right_value465=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1332, "sNewNode")),(struct sType*)come_increment_ref_count(type_250),((void*)0),info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sNewNode_finalize;
                _inf_value6->clone=(void*)sNewNode_clone;
                _inf_value6->compile=(void*)sNewNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sNewNode_kind;
                __result229__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value470=_inf_value6));
                /*i*/come_call_finalizer3(type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_251 = come_decrement_ref_count2(name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value465,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value470) { __right_value470 = come_decrement_ref_count2(__right_value470, ((struct sNode*)__right_value470)->finalize, ((struct sNode*)__right_value470)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result229__;
            }
        }
        /*i*/come_call_finalizer3(type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_251 = come_decrement_ref_count2(name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(charp_operator_equals(buf,"true")) {
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1336, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sTrueNode*)(__right_value472=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1336, "sTrueNode")),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sTrueNode_finalize;
            _inf_value7->clone=(void*)sTrueNode_clone;
            _inf_value7->compile=(void*)sTrueNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sTrueNode_kind;
            __result232__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value475=_inf_value7));
            /*g*/come_call_finalizer3(__right_value472,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value475) { __right_value475 = come_decrement_ref_count2(__right_value475, ((struct sNode*)__right_value475)->finalize, ((struct sNode*)__right_value475)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result232__;
        }
        else {
            if(charp_operator_equals(buf,"false")) {
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1339, "struct sNode");
                _inf_obj_value8=come_increment_ref_count(((struct sFalseNode*)(__right_value477=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1339, "sFalseNode")),info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sFalseNode_finalize;
                _inf_value8->clone=(void*)sFalseNode_clone;
                _inf_value8->compile=(void*)sFalseNode_compile;
                _inf_value8->sline=(void*)sNodeBase_sline;
                _inf_value8->sname=(void*)sNodeBase_sname;
                _inf_value8->terminated=(void*)sNodeBase_terminated;
                _inf_value8->kind=(void*)sFalseNode_kind;
                __result235__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value480=_inf_value8));
                /*g*/come_call_finalizer3(__right_value477,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value480) { __right_value480 = come_decrement_ref_count2(__right_value480, ((struct sNode*)__right_value480)->finalize, ((struct sNode*)__right_value480)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result235__;
            }
            else {
                if(charp_operator_equals(buf,"delete")) {
                    node_272=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1344, "struct sNode");
                    _inf_obj_value9=come_increment_ref_count(((struct sDeleteNode*)(__right_value483=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1344, "sDeleteNode")),(struct sNode*)come_increment_ref_count(node_272),info))));
                    _inf_value9->_protocol_obj=_inf_obj_value9;
                    _inf_value9->finalize=(void*)sDeleteNode_finalize;
                    _inf_value9->clone=(void*)sDeleteNode_clone;
                    _inf_value9->compile=(void*)sDeleteNode_compile;
                    _inf_value9->sline=(void*)sNodeBase_sline;
                    _inf_value9->sname=(void*)sNodeBase_sname;
                    _inf_value9->terminated=(void*)sNodeBase_terminated;
                    _inf_value9->kind=(void*)sDeleteNode_kind;
                    __result238__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value487=_inf_value9));
                    if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*g*/come_call_finalizer3(__right_value483,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value487) { __right_value487 = come_decrement_ref_count2(__right_value487, ((struct sNode*)__right_value487)->finalize, ((struct sNode*)__right_value487)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    gComeFunResultObject = (void*)0;
                    return __result238__;
                    if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(charp_operator_equals(buf,"force_delete")) {
                        node_274=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1349, "struct sNode");
                        _inf_obj_value10=come_increment_ref_count(((struct sForceDeleteNode*)(__right_value490=sForceDeleteNode_initialize((struct sForceDeleteNode*)come_increment_ref_count((struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "21obj.c", 1349, "sForceDeleteNode")),(struct sNode*)come_increment_ref_count(node_274),info))));
                        _inf_value10->_protocol_obj=_inf_obj_value10;
                        _inf_value10->finalize=(void*)sForceDeleteNode_finalize;
                        _inf_value10->clone=(void*)sForceDeleteNode_clone;
                        _inf_value10->compile=(void*)sForceDeleteNode_compile;
                        _inf_value10->sline=(void*)sNodeBase_sline;
                        _inf_value10->sname=(void*)sNodeBase_sname;
                        _inf_value10->terminated=(void*)sNodeBase_terminated;
                        _inf_value10->kind=(void*)sForceDeleteNode_kind;
                        __result241__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value494=_inf_value10));
                        if(node_274) { node_274 = come_decrement_ref_count2(node_274, ((struct sNode*)node_274)->finalize, ((struct sNode*)node_274)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*g*/come_call_finalizer3(__right_value490,sForceDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(__right_value494) { __right_value494 = come_decrement_ref_count2(__right_value494, ((struct sNode*)__right_value494)->finalize, ((struct sNode*)__right_value494)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        gComeFunResultObject = (void*)0;
                        return __result241__;
                        if(node_274) { node_274 = come_decrement_ref_count2(node_274, ((struct sNode*)node_274)->finalize, ((struct sNode*)node_274)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(charp_operator_equals(buf,"borrow")) {
                            node_276=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1355, "struct sNode");
                            _inf_obj_value11=come_increment_ref_count(((struct sBorrowNode*)(__right_value497=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1355, "sBorrowNode")),(struct sNode*)come_increment_ref_count(node_276),info))));
                            _inf_value11->_protocol_obj=_inf_obj_value11;
                            _inf_value11->finalize=(void*)sBorrowNode_finalize;
                            _inf_value11->clone=(void*)sBorrowNode_clone;
                            _inf_value11->compile=(void*)sBorrowNode_compile;
                            _inf_value11->sline=(void*)sNodeBase_sline;
                            _inf_value11->sname=(void*)sNodeBase_sname;
                            _inf_value11->terminated=(void*)sNodeBase_terminated;
                            _inf_value11->kind=(void*)sBorrowNode_kind;
                            __result244__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value501=_inf_value11));
                            if(node_276) { node_276 = come_decrement_ref_count2(node_276, ((struct sNode*)node_276)->finalize, ((struct sNode*)node_276)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*g*/come_call_finalizer3(__right_value497,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value501) { __right_value501 = come_decrement_ref_count2(__right_value501, ((struct sNode*)__right_value501)->finalize, ((struct sNode*)__right_value501)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result244__;
                            if(node_276) { node_276 = come_decrement_ref_count2(node_276, ((struct sNode*)node_276)->finalize, ((struct sNode*)node_276)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(charp_operator_equals(buf,"delegate")) {
                                node_278=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1360, "struct sNode");
                                _inf_obj_value12=come_increment_ref_count(((struct sDelegateNode*)(__right_value504=sDelegateNode_initialize((struct sDelegateNode*)come_increment_ref_count((struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "21obj.c", 1360, "sDelegateNode")),(struct sNode*)come_increment_ref_count(node_278),info))));
                                _inf_value12->_protocol_obj=_inf_obj_value12;
                                _inf_value12->finalize=(void*)sDelegateNode_finalize;
                                _inf_value12->clone=(void*)sDelegateNode_clone;
                                _inf_value12->compile=(void*)sDelegateNode_compile;
                                _inf_value12->sline=(void*)sNodeBase_sline;
                                _inf_value12->sname=(void*)sNodeBase_sname;
                                _inf_value12->terminated=(void*)sNodeBase_terminated;
                                _inf_value12->kind=(void*)sDelegateNode_kind;
                                __result247__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value508=_inf_value12));
                                if(node_278) { node_278 = come_decrement_ref_count2(node_278, ((struct sNode*)node_278)->finalize, ((struct sNode*)node_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*g*/come_call_finalizer3(__right_value504,sDelegateNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(__right_value508) { __right_value508 = come_decrement_ref_count2(__right_value508, ((struct sNode*)__right_value508)->finalize, ((struct sNode*)__right_value508)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                gComeFunResultObject = (void*)0;
                                return __result247__;
                                if(node_278) { node_278 = come_decrement_ref_count2(node_278, ((struct sNode*)node_278)->finalize, ((struct sNode*)node_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(charp_operator_equals(buf,"share")) {
                                    node_280=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1365, "struct sNode");
                                    _inf_obj_value13=come_increment_ref_count(((struct sShareNode*)(__right_value511=sShareNode_initialize((struct sShareNode*)come_increment_ref_count((struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "21obj.c", 1365, "sShareNode")),(struct sNode*)come_increment_ref_count(node_280),info))));
                                    _inf_value13->_protocol_obj=_inf_obj_value13;
                                    _inf_value13->finalize=(void*)sShareNode_finalize;
                                    _inf_value13->clone=(void*)sShareNode_clone;
                                    _inf_value13->compile=(void*)sShareNode_compile;
                                    _inf_value13->sline=(void*)sNodeBase_sline;
                                    _inf_value13->sname=(void*)sNodeBase_sname;
                                    _inf_value13->terminated=(void*)sNodeBase_terminated;
                                    _inf_value13->kind=(void*)sShareNode_kind;
                                    __result250__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value515=_inf_value13));
                                    if(node_280) { node_280 = come_decrement_ref_count2(node_280, ((struct sNode*)node_280)->finalize, ((struct sNode*)node_280)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    /*g*/come_call_finalizer3(__right_value511,sShareNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(__right_value515) { __right_value515 = come_decrement_ref_count2(__right_value515, ((struct sNode*)__right_value515)->finalize, ((struct sNode*)__right_value515)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    gComeFunResultObject = (void*)0;
                                    return __result250__;
                                    if(node_280) { node_280 = come_decrement_ref_count2(node_280, ((struct sNode*)node_280)->finalize, ((struct sNode*)node_280)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(charp_operator_equals(buf,"clone")) {
                                        node_282=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1370, "struct sNode");
                                        _inf_obj_value14=come_increment_ref_count(((struct sCloneNode*)(__right_value518=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1370, "sCloneNode")),(struct sNode*)come_increment_ref_count(node_282),info))));
                                        _inf_value14->_protocol_obj=_inf_obj_value14;
                                        _inf_value14->finalize=(void*)sCloneNode_finalize;
                                        _inf_value14->clone=(void*)sCloneNode_clone;
                                        _inf_value14->compile=(void*)sCloneNode_compile;
                                        _inf_value14->sline=(void*)sNodeBase_sline;
                                        _inf_value14->sname=(void*)sNodeBase_sname;
                                        _inf_value14->terminated=(void*)sNodeBase_terminated;
                                        _inf_value14->kind=(void*)sCloneNode_kind;
                                        __result253__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value522=_inf_value14));
                                        if(node_282) { node_282 = come_decrement_ref_count2(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        /*g*/come_call_finalizer3(__right_value518,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(__right_value522) { __right_value522 = come_decrement_ref_count2(__right_value522, ((struct sNode*)__right_value522)->finalize, ((struct sNode*)__right_value522)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        gComeFunResultObject = (void*)0;
                                        return __result253__;
                                        if(node_282) { node_282 = come_decrement_ref_count2(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(charp_operator_equals(buf,"dupe")) {
                                            node_284=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1375, "struct sNode");
                                            _inf_obj_value15=come_increment_ref_count(((struct sDupeNode*)(__right_value525=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1375, "sDupeNode")),(struct sNode*)come_increment_ref_count(node_284),info))));
                                            _inf_value15->_protocol_obj=_inf_obj_value15;
                                            _inf_value15->finalize=(void*)sDupeNode_finalize;
                                            _inf_value15->clone=(void*)sDupeNode_clone;
                                            _inf_value15->compile=(void*)sDupeNode_compile;
                                            _inf_value15->sline=(void*)sNodeBase_sline;
                                            _inf_value15->sname=(void*)sNodeBase_sname;
                                            _inf_value15->terminated=(void*)sNodeBase_terminated;
                                            _inf_value15->kind=(void*)sDupeNode_kind;
                                            __result256__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value529=_inf_value15));
                                            if(node_284) { node_284 = come_decrement_ref_count2(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            /*g*/come_call_finalizer3(__right_value525,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(__right_value529) { __right_value529 = come_decrement_ref_count2(__right_value529, ((struct sNode*)__right_value529)->finalize, ((struct sNode*)__right_value529)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            gComeFunResultObject = (void*)0;
                                            return __result256__;
                                            if(node_284) { node_284 = come_decrement_ref_count2(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(charp_operator_equals(buf,"dummy_heap")) {
                                                node_286=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1380, "struct sNode");
                                                _inf_obj_value16=come_increment_ref_count(((struct sDummyHeapNode*)(__right_value532=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1380, "sDummyHeapNode")),(struct sNode*)come_increment_ref_count(node_286),info))));
                                                _inf_value16->_protocol_obj=_inf_obj_value16;
                                                _inf_value16->finalize=(void*)sDummyHeapNode_finalize;
                                                _inf_value16->clone=(void*)sDummyHeapNode_clone;
                                                _inf_value16->compile=(void*)sDummyHeapNode_compile;
                                                _inf_value16->sline=(void*)sNodeBase_sline;
                                                _inf_value16->sname=(void*)sNodeBase_sname;
                                                _inf_value16->terminated=(void*)sNodeBase_terminated;
                                                _inf_value16->kind=(void*)sDummyHeapNode_kind;
                                                __result259__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value536=_inf_value16));
                                                if(node_286) { node_286 = come_decrement_ref_count2(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                /*g*/come_call_finalizer3(__right_value532,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(__right_value536) { __right_value536 = come_decrement_ref_count2(__right_value536, ((struct sNode*)__right_value536)->finalize, ((struct sNode*)__right_value536)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                gComeFunResultObject = (void*)0;
                                                return __result259__;
                                                if(node_286) { node_286 = come_decrement_ref_count2(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(charp_operator_equals(buf,"gc_inc")&&*info->p==40) {
                                                    info->p++;
                                                    skip_spaces_and_lf(info);
                                                    node_288=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                    expected_next_character(41,info);
                                                    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1390, "struct sNode");
                                                    _inf_obj_value17=come_increment_ref_count(((struct sGCIncNode*)(__right_value539=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1390, "sGCIncNode")),(struct sNode*)come_increment_ref_count(node_288),info))));
                                                    _inf_value17->_protocol_obj=_inf_obj_value17;
                                                    _inf_value17->finalize=(void*)sGCIncNode_finalize;
                                                    _inf_value17->clone=(void*)sGCIncNode_clone;
                                                    _inf_value17->compile=(void*)sGCIncNode_compile;
                                                    _inf_value17->sline=(void*)sNodeBase_sline;
                                                    _inf_value17->sname=(void*)sNodeBase_sname;
                                                    _inf_value17->terminated=(void*)sNodeBase_terminated;
                                                    _inf_value17->kind=(void*)sGCIncNode_kind;
                                                    __result262__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value543=_inf_value17));
                                                    if(node_288) { node_288 = come_decrement_ref_count2(node_288, ((struct sNode*)node_288)->finalize, ((struct sNode*)node_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    /*g*/come_call_finalizer3(__right_value539,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(__right_value543) { __right_value543 = come_decrement_ref_count2(__right_value543, ((struct sNode*)__right_value543)->finalize, ((struct sNode*)__right_value543)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    gComeFunResultObject = (void*)0;
                                                    return __result262__;
                                                    if(node_288) { node_288 = come_decrement_ref_count2(node_288, ((struct sNode*)node_288)->finalize, ((struct sNode*)node_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(charp_operator_equals(buf,"gc_dec")&&*info->p==40) {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                        node_290=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                        expected_next_character(41,info);
                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1400, "struct sNode");
                                                        _inf_obj_value18=come_increment_ref_count(((struct sGCDecNode*)(__right_value546=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1400, "sGCDecNode")),(struct sNode*)come_increment_ref_count(node_290),info))));
                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                        _inf_value18->finalize=(void*)sGCDecNode_finalize;
                                                        _inf_value18->clone=(void*)sGCDecNode_clone;
                                                        _inf_value18->compile=(void*)sGCDecNode_compile;
                                                        _inf_value18->sline=(void*)sNodeBase_sline;
                                                        _inf_value18->sname=(void*)sNodeBase_sname;
                                                        _inf_value18->terminated=(void*)sNodeBase_terminated;
                                                        _inf_value18->kind=(void*)sGCDecNode_kind;
                                                        __result265__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value550=_inf_value18));
                                                        if(node_290) { node_290 = come_decrement_ref_count2(node_290, ((struct sNode*)node_290)->finalize, ((struct sNode*)node_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        /*g*/come_call_finalizer3(__right_value546,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(__right_value550) { __right_value550 = come_decrement_ref_count2(__right_value550, ((struct sNode*)__right_value550)->finalize, ((struct sNode*)__right_value550)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        gComeFunResultObject = (void*)0;
                                                        return __result265__;
                                                        if(node_290) { node_290 = come_decrement_ref_count2(node_290, ((struct sNode*)node_290)->finalize, ((struct sNode*)node_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        if(charp_operator_equals(buf,"gc_dec_nofree")&&*info->p==40) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            node_292=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                            expected_next_character(41,info);
                                                            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1410, "struct sNode");
                                                            _inf_obj_value19=come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value553=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1410, "sGCDecNoFreeNode")),(struct sNode*)come_increment_ref_count(node_292),info))));
                                                            _inf_value19->_protocol_obj=_inf_obj_value19;
                                                            _inf_value19->finalize=(void*)sGCDecNoFreeNode_finalize;
                                                            _inf_value19->clone=(void*)sGCDecNoFreeNode_clone;
                                                            _inf_value19->compile=(void*)sGCDecNoFreeNode_compile;
                                                            _inf_value19->sline=(void*)sNodeBase_sline;
                                                            _inf_value19->sname=(void*)sNodeBase_sname;
                                                            _inf_value19->terminated=(void*)sNodeBase_terminated;
                                                            _inf_value19->kind=(void*)sGCDecNoFreeNode_kind;
                                                            __result268__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value557=_inf_value19));
                                                            if(node_292) { node_292 = come_decrement_ref_count2(node_292, ((struct sNode*)node_292)->finalize, ((struct sNode*)node_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            /*g*/come_call_finalizer3(__right_value553,sGCDecNoFreeNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                            if(__right_value557) { __right_value557 = come_decrement_ref_count2(__right_value557, ((struct sNode*)__right_value557)->finalize, ((struct sNode*)__right_value557)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            gComeFunResultObject = (void*)0;
                                                            return __result268__;
                                                            if(node_292) { node_292 = come_decrement_ref_count2(node_292, ((struct sNode*)node_292)->finalize, ((struct sNode*)node_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        else {
                                                            if(charp_operator_equals(buf,"isheap")&&*info->p==40) {
                                                                info->p++;
                                                                skip_spaces_and_lf(info);
                                                                multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value558=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                param_type_294=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                                                param_name_295=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                                                err_296=multiple_assign_var6->v3;
                                                                /*g*/come_call_finalizer3(__right_value558,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                if(!err_296) {
                                                                    err_msg(info,"parse_type failed");
                                                                    exit(2);
                                                                }
                                                                type2_297=(struct sType*)come_increment_ref_count(solve_generics(param_type_294,info->generics_type,info));
                                                                expected_next_character(41,info);
                                                                _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1426, "struct sNode");
                                                                _inf_obj_value20=come_increment_ref_count(((struct sIsHeap*)(__right_value561=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1426, "sIsHeap")),(struct sType*)come_increment_ref_count(type2_297),info))));
                                                                _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                _inf_value20->finalize=(void*)sIsHeap_finalize;
                                                                _inf_value20->clone=(void*)sIsHeap_clone;
                                                                _inf_value20->compile=(void*)sIsHeap_compile;
                                                                _inf_value20->sline=(void*)sNodeBase_sline;
                                                                _inf_value20->sname=(void*)sNodeBase_sname;
                                                                _inf_value20->terminated=(void*)sNodeBase_terminated;
                                                                _inf_value20->kind=(void*)sIsHeap_kind;
                                                                __result271__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value565=_inf_value20));
                                                                /*i*/come_call_finalizer3(param_type_294,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                param_name_295 = come_decrement_ref_count2(param_name_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                /*i*/come_call_finalizer3(type2_297,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                /*g*/come_call_finalizer3(__right_value561,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
                                                                if(__right_value565) { __right_value565 = come_decrement_ref_count2(__right_value565, ((struct sNode*)__right_value565)->finalize, ((struct sNode*)__right_value565)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                gComeFunResultObject = (void*)0;
                                                                return __result271__;
                                                                /*i*/come_call_finalizer3(param_type_294,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                param_name_295 = come_decrement_ref_count2(param_name_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                /*i*/come_call_finalizer3(type2_297,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
                                                            else {
                                                                if(charp_operator_equals(buf,"ispointer")&&*info->p==40) {
                                                                    info->p++;
                                                                    skip_spaces_and_lf(info);
                                                                    multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value566=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                    param_type_299=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                                                                    param_name_300=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                                                                    err_301=multiple_assign_var7->v3;
                                                                    /*g*/come_call_finalizer3(__right_value566,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    if(!err_301) {
                                                                        err_msg(info,"parse_type failed");
                                                                        exit(2);
                                                                    }
                                                                    type2_302=(struct sType*)come_increment_ref_count(solve_generics(param_type_299,info->generics_type,info));
                                                                    expected_next_character(41,info);
                                                                    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1442, "struct sNode");
                                                                    _inf_obj_value21=come_increment_ref_count(((struct sIsPointer*)(__right_value569=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1442, "sIsPointer")),(struct sType*)come_increment_ref_count(type2_302),info))));
                                                                    _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                    _inf_value21->finalize=(void*)sIsPointer_finalize;
                                                                    _inf_value21->clone=(void*)sIsPointer_clone;
                                                                    _inf_value21->compile=(void*)sIsPointer_compile;
                                                                    _inf_value21->sline=(void*)sNodeBase_sline;
                                                                    _inf_value21->sname=(void*)sNodeBase_sname;
                                                                    _inf_value21->terminated=(void*)sNodeBase_terminated;
                                                                    _inf_value21->kind=(void*)sIsPointer_kind;
                                                                    __result274__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value573=_inf_value21));
                                                                    /*i*/come_call_finalizer3(param_type_299,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    param_name_300 = come_decrement_ref_count2(param_name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    /*i*/come_call_finalizer3(type2_302,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    /*g*/come_call_finalizer3(__right_value569,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
                                                                    if(__right_value573) { __right_value573 = come_decrement_ref_count2(__right_value573, ((struct sNode*)__right_value573)->finalize, ((struct sNode*)__right_value573)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    gComeFunResultObject = (void*)0;
                                                                    return __result274__;
                                                                    /*i*/come_call_finalizer3(param_type_299,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    param_name_300 = come_decrement_ref_count2(param_name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    /*i*/come_call_finalizer3(type2_302,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                else {
                                                                    if(charp_operator_equals(buf,"using")) {
                                                                        if(parsecmp("comelang",info)) {
                                                                            info->p+=strlen("comelang");
                                                                            skip_spaces_and_lf(info);
                                                                            gComeC=(_Bool)0;
                                                                            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1451, "struct sNode");
                                                                            _inf_obj_value22=come_increment_ref_count(((struct sNothingNode*)(__right_value575=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1451, "sNothingNode")),info))));
                                                                            _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                            _inf_value22->finalize=(void*)sNothingNode_finalize;
                                                                            _inf_value22->clone=(void*)sNothingNode_clone;
                                                                            _inf_value22->compile=(void*)sNothingNode_compile;
                                                                            _inf_value22->sline=(void*)sNodeBase_sline;
                                                                            _inf_value22->sname=(void*)sNodeBase_sname;
                                                                            _inf_value22->terminated=(void*)sNodeBase_terminated;
                                                                            _inf_value22->kind=(void*)sNothingNode_kind;
                                                                            __result277__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value578=_inf_value22));
                                                                            /*g*/come_call_finalizer3(__right_value575,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            if(__right_value578) { __right_value578 = come_decrement_ref_count2(__right_value578, ((struct sNode*)__right_value578)->finalize, ((struct sNode*)__right_value578)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            gComeFunResultObject = (void*)0;
                                                                            return __result277__;
                                                                        }
                                                                        else {
                                                                            if(parsecmp("comelang-str",info)) {
                                                                                info->p+=strlen("comelang-str");
                                                                                skip_spaces_and_lf(info);
                                                                                gComeStr=(_Bool)1;
                                                                                _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1459, "struct sNode");
                                                                                _inf_obj_value23=come_increment_ref_count(((struct sNothingNode*)(__right_value580=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1459, "sNothingNode")),info))));
                                                                                _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                _inf_value23->finalize=(void*)sNothingNode_finalize;
                                                                                _inf_value23->clone=(void*)sNothingNode_clone;
                                                                                _inf_value23->compile=(void*)sNothingNode_compile;
                                                                                _inf_value23->sline=(void*)sNodeBase_sline;
                                                                                _inf_value23->sname=(void*)sNodeBase_sname;
                                                                                _inf_value23->terminated=(void*)sNodeBase_terminated;
                                                                                _inf_value23->kind=(void*)sNothingNode_kind;
                                                                                __result280__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value583=_inf_value23));
                                                                                /*g*/come_call_finalizer3(__right_value580,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(__right_value583) { __right_value583 = come_decrement_ref_count2(__right_value583, ((struct sNode*)__right_value583)->finalize, ((struct sNode*)__right_value583)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                gComeFunResultObject = (void*)0;
                                                                                return __result280__;
                                                                            }
                                                                            else {
                                                                                if(parsecmp("comelang-net",info)) {
                                                                                    info->p+=strlen("comelang-net");
                                                                                    skip_spaces_and_lf(info);
                                                                                    gComeNet=(_Bool)1;
                                                                                    _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1467, "struct sNode");
                                                                                    _inf_obj_value24=come_increment_ref_count(((struct sNothingNode*)(__right_value585=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1467, "sNothingNode")),info))));
                                                                                    _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                                    _inf_value24->finalize=(void*)sNothingNode_finalize;
                                                                                    _inf_value24->clone=(void*)sNothingNode_clone;
                                                                                    _inf_value24->compile=(void*)sNothingNode_compile;
                                                                                    _inf_value24->sline=(void*)sNodeBase_sline;
                                                                                    _inf_value24->sname=(void*)sNodeBase_sname;
                                                                                    _inf_value24->terminated=(void*)sNodeBase_terminated;
                                                                                    _inf_value24->kind=(void*)sNothingNode_kind;
                                                                                    __result283__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value588=_inf_value24));
                                                                                    /*g*/come_call_finalizer3(__right_value585,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(__right_value588) { __right_value588 = come_decrement_ref_count2(__right_value588, ((struct sNode*)__right_value588)->finalize, ((struct sNode*)__right_value588)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    gComeFunResultObject = (void*)0;
                                                                                    return __result283__;
                                                                                }
                                                                                else {
                                                                                    if(parsecmp("c",info)||parsecmp("C",info)) {
                                                                                        info->p+=strlen("c");
                                                                                        skip_spaces_and_lf(info);
                                                                                        come_c_307=gComeC;
                                                                                        gComeC=(_Bool)1;
                                                                                        if(*info->p==123) {
                                                                                            node_308=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,info));
                                                                                            gComeC=come_c_307;
                                                                                            __result284__ = gComeFunResultObject = __result_obj__ = node_308;
                                                                                            if(node_308) { node_308 = come_decrement_ref_count2(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                            gComeFunResultObject = (void*)0;
                                                                                            return __result284__;
                                                                                            if(node_308) { node_308 = come_decrement_ref_count2(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        }
                                                                                        else {
                                                                                            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1484, "struct sNode");
                                                                                            _inf_obj_value25=come_increment_ref_count(((struct sNothingNode*)(__right_value591=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1484, "sNothingNode")),info))));
                                                                                            _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                                            _inf_value25->finalize=(void*)sNothingNode_finalize;
                                                                                            _inf_value25->clone=(void*)sNothingNode_clone;
                                                                                            _inf_value25->compile=(void*)sNothingNode_compile;
                                                                                            _inf_value25->sline=(void*)sNodeBase_sline;
                                                                                            _inf_value25->sname=(void*)sNodeBase_sname;
                                                                                            _inf_value25->terminated=(void*)sNodeBase_terminated;
                                                                                            _inf_value25->kind=(void*)sNothingNode_kind;
                                                                                            __result287__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value594=_inf_value25));
                                                                                            /*g*/come_call_finalizer3(__right_value591,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(__right_value594) { __right_value594 = come_decrement_ref_count2(__right_value594, ((struct sNode*)__right_value594)->finalize, ((struct sNode*)__right_value594)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            gComeFunResultObject = (void*)0;
                                                                                            return __result287__;
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        if(parsecmp("gc",info)) {
                                                                                            info->p+=strlen("gc");
                                                                                            skip_spaces_and_lf(info);
                                                                                            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1491, "struct sNode");
                                                                                            _inf_obj_value26=come_increment_ref_count(((struct sNothingNode*)(__right_value596=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1491, "sNothingNode")),info))));
                                                                                            _inf_value26->_protocol_obj=_inf_obj_value26;
                                                                                            _inf_value26->finalize=(void*)sNothingNode_finalize;
                                                                                            _inf_value26->clone=(void*)sNothingNode_clone;
                                                                                            _inf_value26->compile=(void*)sNothingNode_compile;
                                                                                            _inf_value26->sline=(void*)sNodeBase_sline;
                                                                                            _inf_value26->sname=(void*)sNodeBase_sname;
                                                                                            _inf_value26->terminated=(void*)sNodeBase_terminated;
                                                                                            _inf_value26->kind=(void*)sNothingNode_kind;
                                                                                            __result290__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value599=_inf_value26));
                                                                                            /*g*/come_call_finalizer3(__right_value596,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(__right_value599) { __right_value599 = come_decrement_ref_count2(__right_value599, ((struct sNode*)__right_value599)->finalize, ((struct sNode*)__right_value599)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            gComeFunResultObject = (void*)0;
                                                                                            return __result290__;
                                                                                        }
                                                                                        else {
                                                                                            if(parsecmp("no-gc",info)) {
                                                                                                info->p+=strlen("no-gc");
                                                                                                skip_spaces_and_lf(info);
                                                                                                _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1498, "struct sNode");
                                                                                                _inf_obj_value27=come_increment_ref_count(((struct sNothingNode*)(__right_value601=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1498, "sNothingNode")),info))));
                                                                                                _inf_value27->_protocol_obj=_inf_obj_value27;
                                                                                                _inf_value27->finalize=(void*)sNothingNode_finalize;
                                                                                                _inf_value27->clone=(void*)sNothingNode_clone;
                                                                                                _inf_value27->compile=(void*)sNothingNode_compile;
                                                                                                _inf_value27->sline=(void*)sNodeBase_sline;
                                                                                                _inf_value27->sname=(void*)sNodeBase_sname;
                                                                                                _inf_value27->terminated=(void*)sNodeBase_terminated;
                                                                                                _inf_value27->kind=(void*)sNothingNode_kind;
                                                                                                __result293__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value604=_inf_value27));
                                                                                                /*g*/come_call_finalizer3(__right_value601,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                                if(__right_value604) { __right_value604 = come_decrement_ref_count2(__right_value604, ((struct sNode*)__right_value604)->finalize, ((struct sNode*)__right_value604)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                gComeFunResultObject = (void*)0;
                                                                                                return __result293__;
                                                                                            }
                                                                                            else {
                                                                                                if(parsecmp("unsafe",info)) {
                                                                                                    info->p+=strlen("unsafe");
                                                                                                    skip_spaces_and_lf(info);
                                                                                                    _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1504, "struct sNode");
                                                                                                    _inf_obj_value28=come_increment_ref_count(((struct sNothingNode*)(__right_value606=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1504, "sNothingNode")),info))));
                                                                                                    _inf_value28->_protocol_obj=_inf_obj_value28;
                                                                                                    _inf_value28->finalize=(void*)sNothingNode_finalize;
                                                                                                    _inf_value28->clone=(void*)sNothingNode_clone;
                                                                                                    _inf_value28->compile=(void*)sNothingNode_compile;
                                                                                                    _inf_value28->sline=(void*)sNodeBase_sline;
                                                                                                    _inf_value28->sname=(void*)sNodeBase_sname;
                                                                                                    _inf_value28->terminated=(void*)sNodeBase_terminated;
                                                                                                    _inf_value28->kind=(void*)sNothingNode_kind;
                                                                                                    __result296__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value609=_inf_value28));
                                                                                                    /*g*/come_call_finalizer3(__right_value606,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                                    if(__right_value609) { __right_value609 = come_decrement_ref_count2(__right_value609, ((struct sNode*)__right_value609)->finalize, ((struct sNode*)__right_value609)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                    gComeFunResultObject = (void*)0;
                                                                                                    return __result296__;
                                                                                                }
                                                                                                else {
                                                                                                    if(parsecmp("no-null-check",info)) {
                                                                                                        info->p+=strlen("no-null-check");
                                                                                                        skip_spaces_and_lf(info);
                                                                                                        _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1510, "struct sNode");
                                                                                                        _inf_obj_value29=come_increment_ref_count(((struct sNothingNode*)(__right_value611=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1510, "sNothingNode")),info))));
                                                                                                        _inf_value29->_protocol_obj=_inf_obj_value29;
                                                                                                        _inf_value29->finalize=(void*)sNothingNode_finalize;
                                                                                                        _inf_value29->clone=(void*)sNothingNode_clone;
                                                                                                        _inf_value29->compile=(void*)sNothingNode_compile;
                                                                                                        _inf_value29->sline=(void*)sNodeBase_sline;
                                                                                                        _inf_value29->sname=(void*)sNodeBase_sname;
                                                                                                        _inf_value29->terminated=(void*)sNodeBase_terminated;
                                                                                                        _inf_value29->kind=(void*)sNothingNode_kind;
                                                                                                        __result299__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value614=_inf_value29));
                                                                                                        /*g*/come_call_finalizer3(__right_value611,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                                        if(__right_value614) { __right_value614 = come_decrement_ref_count2(__right_value614, ((struct sNode*)__right_value614)->finalize, ((struct sNode*)__right_value614)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                        gComeFunResultObject = (void*)0;
                                                                                                        return __result299__;
                                                                                                    }
                                                                                                    else {
                                                                                                        err_msg(info,"invalid using");
                                                                                                        exit(2);
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
                                                                        if(charp_operator_equals(buf,"sizeof")) {
                                                                            paren_314=(_Bool)0;
                                                                            if(*info->p==40) {
                                                                                info->p++;
                                                                                skip_spaces_and_lf(info);
                                                                                paren_314=(_Bool)1;
                                                                            }
                                                                            is_type_name_flag_315=(_Bool)0;
                                                                            {
                                                                                p_316=info->p;
                                                                                sline_317=info->sline;
                                                                                if(xisalpha(*info->p)||*info->p==95) {
                                                                                    word_318=(char*)come_increment_ref_count(parse_word(info));
                                                                                    if(is_type_name(word_318,info)) {
                                                                                        is_type_name_flag_315=(_Bool)1;
                                                                                    }
                                                                                    word_318 = come_decrement_ref_count2(word_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                info->p=p_316;
                                                                                info->sline=sline_317;
                                                                            }
                                                                            if(is_type_name_flag_315) {
                                                                                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value616=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                type_319=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                                                name_320=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                                                err_321=multiple_assign_var8->v3;
                                                                                /*g*/come_call_finalizer3(__right_value616,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(!err_321) {
                                                                                    err_msg(info,"parse type");
                                                                                    exit(2);
                                                                                }
                                                                                if(paren_314&&*info->p==41) {
                                                                                    info->p++;
                                                                                    skip_spaces_and_lf(info);
                                                                                }
                                                                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1558, "struct sNode");
                                                                                _inf_obj_value30=come_increment_ref_count(((struct sSizeOfNode*)(__right_value618=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1558, "sSizeOfNode")),(struct sType*)come_increment_ref_count(type_319),info))));
                                                                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                                                                _inf_value30->finalize=(void*)sSizeOfNode_finalize;
                                                                                _inf_value30->clone=(void*)sSizeOfNode_clone;
                                                                                _inf_value30->compile=(void*)sSizeOfNode_compile;
                                                                                _inf_value30->sline=(void*)sNodeBase_sline;
                                                                                _inf_value30->sname=(void*)sNodeBase_sname;
                                                                                _inf_value30->terminated=(void*)sNodeBase_terminated;
                                                                                _inf_value30->kind=(void*)sSizeOfNode_kind;
                                                                                __result302__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value622=_inf_value30));
                                                                                /*i*/come_call_finalizer3(type_319,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                name_320 = come_decrement_ref_count2(name_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                /*g*/come_call_finalizer3(__right_value618,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(__right_value622) { __right_value622 = come_decrement_ref_count2(__right_value622, ((struct sNode*)__right_value622)->finalize, ((struct sNode*)__right_value622)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                gComeFunResultObject = (void*)0;
                                                                                return __result302__;
                                                                                /*i*/come_call_finalizer3(type_319,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                name_320 = come_decrement_ref_count2(name_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            else {
                                                                                exp_323=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                                                if(paren_314&&*info->p==41) {
                                                                                    info->p++;
                                                                                    skip_spaces_and_lf(info);
                                                                                }
                                                                                _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1570, "struct sNode");
                                                                                _inf_obj_value31=come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value625=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1570, "sSizeOfExpNode")),(struct sNode*)come_increment_ref_count(exp_323),info))));
                                                                                _inf_value31->_protocol_obj=_inf_obj_value31;
                                                                                _inf_value31->finalize=(void*)sSizeOfExpNode_finalize;
                                                                                _inf_value31->clone=(void*)sSizeOfExpNode_clone;
                                                                                _inf_value31->compile=(void*)sSizeOfExpNode_compile;
                                                                                _inf_value31->sline=(void*)sNodeBase_sline;
                                                                                _inf_value31->sname=(void*)sNodeBase_sname;
                                                                                _inf_value31->terminated=(void*)sNodeBase_terminated;
                                                                                _inf_value31->kind=(void*)sSizeOfExpNode_kind;
                                                                                __result305__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value629=_inf_value31));
                                                                                if(exp_323) { exp_323 = come_decrement_ref_count2(exp_323, ((struct sNode*)exp_323)->finalize, ((struct sNode*)exp_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                /*g*/come_call_finalizer3(__right_value625,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(__right_value629) { __right_value629 = come_decrement_ref_count2(__right_value629, ((struct sNode*)__right_value629)->finalize, ((struct sNode*)__right_value629)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                gComeFunResultObject = (void*)0;
                                                                                return __result305__;
                                                                                if(exp_323) { exp_323 = come_decrement_ref_count2(exp_323, ((struct sNode*)exp_323)->finalize, ((struct sNode*)exp_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(charp_operator_equals(buf,"typeof")) {
                                                                                paren_325=(_Bool)0;
                                                                                if(*info->p==40) {
                                                                                    info->p++;
                                                                                    skip_spaces_and_lf(info);
                                                                                    paren_325=(_Bool)1;
                                                                                }
                                                                                is_type_name_flag_326=(_Bool)0;
                                                                                {
                                                                                    p_327=info->p;
                                                                                    sline_328=info->sline;
                                                                                    if(xisalpha(*info->p)||*info->p==95) {
                                                                                        word_329=(char*)come_increment_ref_count(parse_word(info));
                                                                                        if(is_type_name(word_329,info)) {
                                                                                            is_type_name_flag_326=(_Bool)1;
                                                                                        }
                                                                                        word_329 = come_decrement_ref_count2(word_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    info->p=p_327;
                                                                                    info->sline=sline_328;
                                                                                }
                                                                                if(is_type_name_flag_326) {
                                                                                    multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value631=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                    type_330=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                                                                                    name_331=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                                                                                    err_332=multiple_assign_var9->v3;
                                                                                    /*g*/come_call_finalizer3(__right_value631,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(!err_332) {
                                                                                        err_msg(info,"parse type");
                                                                                        exit(2);
                                                                                    }
                                                                                    if(paren_325&&*info->p==41) {
                                                                                        info->p++;
                                                                                        skip_spaces_and_lf(info);
                                                                                    }
                                                                                    _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1615, "struct sNode");
                                                                                    _inf_obj_value32=come_increment_ref_count(((struct sTypeOfNode*)(__right_value633=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1615, "sTypeOfNode")),(struct sType*)come_increment_ref_count(type_330),info))));
                                                                                    _inf_value32->_protocol_obj=_inf_obj_value32;
                                                                                    _inf_value32->finalize=(void*)sTypeOfNode_finalize;
                                                                                    _inf_value32->clone=(void*)sTypeOfNode_clone;
                                                                                    _inf_value32->compile=(void*)sTypeOfNode_compile;
                                                                                    _inf_value32->sline=(void*)sNodeBase_sline;
                                                                                    _inf_value32->sname=(void*)sNodeBase_sname;
                                                                                    _inf_value32->terminated=(void*)sNodeBase_terminated;
                                                                                    _inf_value32->kind=(void*)sTypeOfNode_kind;
                                                                                    __result308__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value637=_inf_value32));
                                                                                    /*i*/come_call_finalizer3(type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    name_331 = come_decrement_ref_count2(name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    /*g*/come_call_finalizer3(__right_value633,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(__right_value637) { __right_value637 = come_decrement_ref_count2(__right_value637, ((struct sNode*)__right_value637)->finalize, ((struct sNode*)__right_value637)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    gComeFunResultObject = (void*)0;
                                                                                    return __result308__;
                                                                                    /*i*/come_call_finalizer3(type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    name_331 = come_decrement_ref_count2(name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                else {
                                                                                    exp_334=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                                                    if(paren_325&&*info->p==41) {
                                                                                        info->p++;
                                                                                        skip_spaces_and_lf(info);
                                                                                    }
                                                                                    _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1627, "struct sNode");
                                                                                    _inf_obj_value33=come_increment_ref_count(((struct sTypeOfExpNode*)(__right_value640=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1627, "sTypeOfExpNode")),(struct sNode*)come_increment_ref_count(exp_334),info))));
                                                                                    _inf_value33->_protocol_obj=_inf_obj_value33;
                                                                                    _inf_value33->finalize=(void*)sTypeOfExpNode_finalize;
                                                                                    _inf_value33->clone=(void*)sTypeOfExpNode_clone;
                                                                                    _inf_value33->compile=(void*)sTypeOfExpNode_compile;
                                                                                    _inf_value33->sline=(void*)sNodeBase_sline;
                                                                                    _inf_value33->sname=(void*)sNodeBase_sname;
                                                                                    _inf_value33->terminated=(void*)sNodeBase_terminated;
                                                                                    _inf_value33->kind=(void*)sTypeOfExpNode_kind;
                                                                                    __result311__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value644=_inf_value33));
                                                                                    if(exp_334) { exp_334 = come_decrement_ref_count2(exp_334, ((struct sNode*)exp_334)->finalize, ((struct sNode*)exp_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    /*g*/come_call_finalizer3(__right_value640,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(__right_value644) { __right_value644 = come_decrement_ref_count2(__right_value644, ((struct sNode*)__right_value644)->finalize, ((struct sNode*)__right_value644)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    gComeFunResultObject = (void*)0;
                                                                                    return __result311__;
                                                                                    if(exp_334) { exp_334 = come_decrement_ref_count2(exp_334, ((struct sNode*)exp_334)->finalize, ((struct sNode*)exp_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                            }
                                                                            else {
                                                                                if(charp_operator_equals(buf,"_Alignof")) {
                                                                                    expected_next_character(40,info);
                                                                                    is_type_name_flag_336=(_Bool)0;
                                                                                    {
                                                                                        p_337=info->p;
                                                                                        sline_338=info->sline;
                                                                                        if(xisalpha(*info->p)||*info->p==95) {
                                                                                            word_339=(char*)come_increment_ref_count(parse_word(info));
                                                                                            if(is_type_name(word_339,info)) {
                                                                                                is_type_name_flag_336=(_Bool)1;
                                                                                            }
                                                                                            word_339 = come_decrement_ref_count2(word_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        info->p=p_337;
                                                                                        info->sline=sline_338;
                                                                                    }
                                                                                    if(is_type_name_flag_336) {
                                                                                        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value646=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                        type_340=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                                                                                        name_341=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                                                                                        err_342=multiple_assign_var10->v3;
                                                                                        /*g*/come_call_finalizer3(__right_value646,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(!err_342) {
                                                                                            err_msg(info,"parse type");
                                                                                            exit(2);
                                                                                        }
                                                                                        expected_next_character(41,info);
                                                                                        _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1671, "struct sNode");
                                                                                        _inf_obj_value34=come_increment_ref_count(((struct sAlignOfNode*)(__right_value648=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1671, "sAlignOfNode")),(struct sType*)come_increment_ref_count(type_340),info))));
                                                                                        _inf_value34->_protocol_obj=_inf_obj_value34;
                                                                                        _inf_value34->finalize=(void*)sAlignOfNode_finalize;
                                                                                        _inf_value34->clone=(void*)sAlignOfNode_clone;
                                                                                        _inf_value34->compile=(void*)sAlignOfNode_compile;
                                                                                        _inf_value34->sline=(void*)sNodeBase_sline;
                                                                                        _inf_value34->sname=(void*)sNodeBase_sname;
                                                                                        _inf_value34->terminated=(void*)sNodeBase_terminated;
                                                                                        _inf_value34->kind=(void*)sAlignOfNode_kind;
                                                                                        __result314__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value652=_inf_value34));
                                                                                        /*i*/come_call_finalizer3(type_340,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        name_341 = come_decrement_ref_count2(name_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        /*g*/come_call_finalizer3(__right_value648,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(__right_value652) { __right_value652 = come_decrement_ref_count2(__right_value652, ((struct sNode*)__right_value652)->finalize, ((struct sNode*)__right_value652)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        gComeFunResultObject = (void*)0;
                                                                                        return __result314__;
                                                                                        /*i*/come_call_finalizer3(type_340,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        name_341 = come_decrement_ref_count2(name_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    else {
                                                                                        exp_344=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                                                        expected_next_character(41,info);
                                                                                        _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1678, "struct sNode");
                                                                                        _inf_obj_value35=come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value655=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1678, "sAlignOfExpNode")),(struct sNode*)come_increment_ref_count(exp_344),info))));
                                                                                        _inf_value35->_protocol_obj=_inf_obj_value35;
                                                                                        _inf_value35->finalize=(void*)sAlignOfExpNode_finalize;
                                                                                        _inf_value35->clone=(void*)sAlignOfExpNode_clone;
                                                                                        _inf_value35->compile=(void*)sAlignOfExpNode_compile;
                                                                                        _inf_value35->sline=(void*)sNodeBase_sline;
                                                                                        _inf_value35->sname=(void*)sNodeBase_sname;
                                                                                        _inf_value35->terminated=(void*)sNodeBase_terminated;
                                                                                        _inf_value35->kind=(void*)sAlignOfExpNode_kind;
                                                                                        __result317__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value659=_inf_value35));
                                                                                        if(exp_344) { exp_344 = come_decrement_ref_count2(exp_344, ((struct sNode*)exp_344)->finalize, ((struct sNode*)exp_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        /*g*/come_call_finalizer3(__right_value655,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(__right_value659) { __right_value659 = come_decrement_ref_count2(__right_value659, ((struct sNode*)__right_value659)->finalize, ((struct sNode*)__right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        gComeFunResultObject = (void*)0;
                                                                                        return __result317__;
                                                                                        if(exp_344) { exp_344 = come_decrement_ref_count2(exp_344, ((struct sNode*)exp_344)->finalize, ((struct sNode*)exp_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    if(charp_operator_equals(buf,"__alignof__")) {
                                                                                        expected_next_character(40,info);
                                                                                        is_type_name_flag_346=(_Bool)0;
                                                                                        {
                                                                                            p_347=info->p;
                                                                                            sline_348=info->sline;
                                                                                            if(xisalpha(*info->p)||*info->p==95) {
                                                                                                word_349=(char*)come_increment_ref_count(parse_word(info));
                                                                                                if(is_type_name(word_349,info)) {
                                                                                                    is_type_name_flag_346=(_Bool)1;
                                                                                                }
                                                                                                word_349 = come_decrement_ref_count2(word_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            info->p=p_347;
                                                                                            info->sline=sline_348;
                                                                                        }
                                                                                        if(is_type_name_flag_346) {
                                                                                            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value661=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                            type_350=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                                                                                            name_351=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                                                                                            err_352=multiple_assign_var11->v3;
                                                                                            /*g*/come_call_finalizer3(__right_value661,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(!err_352) {
                                                                                                err_msg(info,"parse type");
                                                                                                exit(2);
                                                                                            }
                                                                                            expected_next_character(41,info);
                                                                                            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1711, "struct sNode");
                                                                                            _inf_obj_value36=come_increment_ref_count(((struct sAlignOfNode2*)(__right_value663=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1711, "sAlignOfNode2")),(struct sType*)come_increment_ref_count(type_350),info))));
                                                                                            _inf_value36->_protocol_obj=_inf_obj_value36;
                                                                                            _inf_value36->finalize=(void*)sAlignOfNode2_finalize;
                                                                                            _inf_value36->clone=(void*)sAlignOfNode2_clone;
                                                                                            _inf_value36->compile=(void*)sAlignOfNode2_compile;
                                                                                            _inf_value36->sline=(void*)sNodeBase_sline;
                                                                                            _inf_value36->sname=(void*)sNodeBase_sname;
                                                                                            _inf_value36->terminated=(void*)sNodeBase_terminated;
                                                                                            _inf_value36->kind=(void*)sAlignOfNode2_kind;
                                                                                            __result320__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value667=_inf_value36));
                                                                                            /*i*/come_call_finalizer3(type_350,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            name_351 = come_decrement_ref_count2(name_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            /*g*/come_call_finalizer3(__right_value663,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(__right_value667) { __right_value667 = come_decrement_ref_count2(__right_value667, ((struct sNode*)__right_value667)->finalize, ((struct sNode*)__right_value667)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            gComeFunResultObject = (void*)0;
                                                                                            return __result320__;
                                                                                            /*i*/come_call_finalizer3(type_350,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            name_351 = come_decrement_ref_count2(name_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        else {
                                                                                            exp_354=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                                                            expected_next_character(41,info);
                                                                                            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1718, "struct sNode");
                                                                                            _inf_obj_value37=come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value670=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1718, "sAlignOfExpNode2")),(struct sNode*)come_increment_ref_count(exp_354),info))));
                                                                                            _inf_value37->_protocol_obj=_inf_obj_value37;
                                                                                            _inf_value37->finalize=(void*)sAlignOfExpNode2_finalize;
                                                                                            _inf_value37->clone=(void*)sAlignOfExpNode2_clone;
                                                                                            _inf_value37->compile=(void*)sAlignOfExpNode2_compile;
                                                                                            _inf_value37->sline=(void*)sNodeBase_sline;
                                                                                            _inf_value37->sname=(void*)sNodeBase_sname;
                                                                                            _inf_value37->terminated=(void*)sNodeBase_terminated;
                                                                                            _inf_value37->kind=(void*)sAlignOfExpNode2_kind;
                                                                                            __result323__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value674=_inf_value37));
                                                                                            if(exp_354) { exp_354 = come_decrement_ref_count2(exp_354, ((struct sNode*)exp_354)->finalize, ((struct sNode*)exp_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            /*g*/come_call_finalizer3(__right_value670,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(__right_value674) { __right_value674 = come_decrement_ref_count2(__right_value674, ((struct sNode*)__right_value674)->finalize, ((struct sNode*)__right_value674)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            gComeFunResultObject = (void*)0;
                                                                                            return __result323__;
                                                                                            if(exp_354) { exp_354 = come_decrement_ref_count2(exp_354, ((struct sNode*)exp_354)->finalize, ((struct sNode*)exp_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        if(charp_operator_equals(buf,"_Alignas")) {
                                                                                            expected_next_character(40,info);
                                                                                            is_type_name_flag_356=(_Bool)0;
                                                                                            {
                                                                                                p_357=info->p;
                                                                                                sline_358=info->sline;
                                                                                                if(xisalpha(*info->p)||*info->p==95) {
                                                                                                    word_359=(char*)come_increment_ref_count(parse_word(info));
                                                                                                    if(is_type_name(word_359,info)) {
                                                                                                        is_type_name_flag_356=(_Bool)1;
                                                                                                    }
                                                                                                    word_359 = come_decrement_ref_count2(word_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
                                                                                                info->p=p_357;
                                                                                                info->sline=sline_358;
                                                                                            }
                                                                                            if(is_type_name_flag_356) {
                                                                                                multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(__right_value676=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                                type_360=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                                                                                                name_361=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                                                                                                err_362=multiple_assign_var12->v3;
                                                                                                /*g*/come_call_finalizer3(__right_value676,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                                if(!err_362) {
                                                                                                    err_msg(info,"parse type");
                                                                                                    exit(2);
                                                                                                }
                                                                                                expected_next_character(41,info);
                                                                                                _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1751, "struct sNode");
                                                                                                _inf_obj_value38=come_increment_ref_count(((struct sAlignAsNode*)(__right_value678=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1751, "sAlignAsNode")),(struct sType*)come_increment_ref_count(type_360),info))));
                                                                                                _inf_value38->_protocol_obj=_inf_obj_value38;
                                                                                                _inf_value38->finalize=(void*)sAlignAsNode_finalize;
                                                                                                _inf_value38->clone=(void*)sAlignAsNode_clone;
                                                                                                _inf_value38->compile=(void*)sAlignAsNode_compile;
                                                                                                _inf_value38->sline=(void*)sNodeBase_sline;
                                                                                                _inf_value38->sname=(void*)sNodeBase_sname;
                                                                                                _inf_value38->terminated=(void*)sNodeBase_terminated;
                                                                                                _inf_value38->kind=(void*)sAlignAsNode_kind;
                                                                                                __result326__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value682=_inf_value38));
                                                                                                /*i*/come_call_finalizer3(type_360,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                name_361 = come_decrement_ref_count2(name_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                /*g*/come_call_finalizer3(__right_value678,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                                if(__right_value682) { __right_value682 = come_decrement_ref_count2(__right_value682, ((struct sNode*)__right_value682)->finalize, ((struct sNode*)__right_value682)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                gComeFunResultObject = (void*)0;
                                                                                                return __result326__;
                                                                                                /*i*/come_call_finalizer3(type_360,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                name_361 = come_decrement_ref_count2(name_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            else {
                                                                                                exp_364=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                                                                expected_next_character(41,info);
                                                                                                _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1758, "struct sNode");
                                                                                                _inf_obj_value39=come_increment_ref_count(((struct sAlignAsExpNode*)(__right_value685=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1758, "sAlignAsExpNode")),(struct sNode*)come_increment_ref_count(exp_364),info))));
                                                                                                _inf_value39->_protocol_obj=_inf_obj_value39;
                                                                                                _inf_value39->finalize=(void*)sAlignAsExpNode_finalize;
                                                                                                _inf_value39->clone=(void*)sAlignAsExpNode_clone;
                                                                                                _inf_value39->compile=(void*)sAlignAsExpNode_compile;
                                                                                                _inf_value39->sline=(void*)sNodeBase_sline;
                                                                                                _inf_value39->sname=(void*)sNodeBase_sname;
                                                                                                _inf_value39->terminated=(void*)sNodeBase_terminated;
                                                                                                _inf_value39->kind=(void*)sAlignAsExpNode_kind;
                                                                                                __result329__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value689=_inf_value39));
                                                                                                if(exp_364) { exp_364 = come_decrement_ref_count2(exp_364, ((struct sNode*)exp_364)->finalize, ((struct sNode*)exp_364)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                /*g*/come_call_finalizer3(__right_value685,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                                if(__right_value689) { __right_value689 = come_decrement_ref_count2(__right_value689, ((struct sNode*)__right_value689)->finalize, ((struct sNode*)__right_value689)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                gComeFunResultObject = (void*)0;
                                                                                                return __result329__;
                                                                                                if(exp_364) { exp_364 = come_decrement_ref_count2(exp_364, ((struct sNode*)exp_364)->finalize, ((struct sNode*)exp_364)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            }
        }
    }
    __result330__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value690=string_node_v20(buf,head,head_sline,info)));
    if(__right_value690) { __right_value690 = come_decrement_ref_count2(__right_value690, ((struct sNode*)__right_value690)->finalize, ((struct sNode*)__right_value690)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj232;
char* __dec_obj233;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj232=self->v1;
            /* a*/come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj233=self->v2;
            __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result215__;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_258;
struct list_item$1tuple2$2charphsNodephph* it_259;
void* __right_value445 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result220__;
    if(self==((void*)0)) {
        __result215__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result215__;
    }
    result_258=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 137, "list$1tuple2$2charphsNodephph"))));
    it_259=self->head;
    while(it_259!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_258,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_259->item)));
        it_259=it_259->next;
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_258;
    /*i*/come_call_finalizer3(result_258,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result216__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result216__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value439 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_260;
struct tuple2$2charphsNodeph* __dec_obj245;
void* __right_value440 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_261;
struct tuple2$2charphsNodeph* __dec_obj248;
void* __right_value441 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_262;
struct tuple2$2charphsNodeph* __dec_obj251;
struct list$1tuple2$2charphsNodephph* __result217__;
    if(self->len==0) {
        litem_260=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value439=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 151, "list_item$1tuple2$2charphsNodephph"))));
        litem_260->prev=((void*)0);
        litem_260->next=((void*)0);
        __dec_obj245=litem_260->item;
        litem_260->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj245,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_260;
        self->head=litem_260;
    }
    else {
        if(self->len==1) {
            litem_261=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value440=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 161, "list_item$1tuple2$2charphsNodephph"))));
            litem_261->prev=self->head;
            litem_261->next=((void*)0);
            __dec_obj248=litem_261->item;
            litem_261->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj248,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_261;
            self->head->next=litem_261;
        }
        else {
            litem_262=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value441=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 171, "list_item$1tuple2$2charphsNodephph"))));
            litem_262->prev=self->tail;
            litem_262->next=((void*)0);
            __dec_obj251=litem_262->item;
            litem_262->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj251,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_262;
            self->tail=litem_262;
        }
    }
    self->len++;
    __result217__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj252;
struct sNode* __dec_obj253;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj252=self->v1;
            __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj253=self->v2;
            if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count2(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result218__;
void* __right_value442 = (void*)0;
struct tuple2$2charphsNodeph* result_263;
void* __right_value443 = (void*)0;
char* __dec_obj254;
void* __right_value444 = (void*)0;
struct sNode* __dec_obj255;
struct tuple2$2charphsNodeph* __result219__;
    if(self==(void*)0) {
        __result218__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result218__;
    }
    result_263=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj254=result_263->v1;
        result_263->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj255=result_263->v2;
        result_263->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result219__ = gComeFunResultObject = __result_obj__ = result_263;
    /*i*/come_call_finalizer3(result_263,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj256;
struct sNode* __dec_obj257;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj256=self->v1;
            __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj257=self->v2;
            if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj259;
struct sNode* __dec_obj260;
struct tuple2$2charphsNodeph* __result223__;
    __dec_obj259=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj260=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); }
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static void sNewNode_finalize(struct sNewNode* self){
char* __dec_obj267;
struct sType* __dec_obj268;
struct list$1tuple2$2charphsNodephph* __dec_obj269;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj267=self->sname;
            __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj268=self->type;
            /* a*/come_call_finalizer3(__dec_obj268,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(self->initializer==gComeFunResultObject) {
            __dec_obj269=self->initializer;
            /* a*/come_call_finalizer3(__dec_obj269,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__=(void*)0;
struct sNewNode* __result227__;
void* __right_value466 = (void*)0;
struct sNewNode* result_269;
void* __right_value467 = (void*)0;
char* __dec_obj270;
void* __right_value468 = (void*)0;
struct sType* __dec_obj271;
void* __right_value469 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj272;
struct sNewNode* __result228__;
    if(self==(void*)0) {
        __result227__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_269=(struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "sNewNode"));
    if(self!=((void*)0)) {
        result_269->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj270=result_269->sname;
        result_269->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj271=result_269->type;
        result_269->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /* a*/come_call_finalizer3(__dec_obj271,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj272=result_269->initializer;
        result_269->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->initializer));
        /* a*/come_call_finalizer3(__dec_obj272,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result228__ = gComeFunResultObject = __result_obj__ = result_269;
    /*i*/come_call_finalizer3(result_269,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static void sTrueNode_finalize(struct sTrueNode* self){
char* __dec_obj273;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj273=self->sname;
            __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__=(void*)0;
struct sTrueNode* __result230__;
void* __right_value473 = (void*)0;
struct sTrueNode* result_270;
void* __right_value474 = (void*)0;
char* __dec_obj274;
struct sTrueNode* __result231__;
    if(self==(void*)0) {
        __result230__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_270=(struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "sTrueNode"));
    if(self!=((void*)0)) {
        result_270->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj274=result_270->sname;
        result_270->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_270;
    /*i*/come_call_finalizer3(result_270,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static void sFalseNode_finalize(struct sFalseNode* self){
char* __dec_obj275;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj275=self->sname;
            __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__=(void*)0;
struct sFalseNode* __result233__;
void* __right_value478 = (void*)0;
struct sFalseNode* result_271;
void* __right_value479 = (void*)0;
char* __dec_obj276;
struct sFalseNode* __result234__;
    if(self==(void*)0) {
        __result233__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_271=(struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "sFalseNode"));
    if(self!=((void*)0)) {
        result_271->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj276=result_271->sname;
        result_271->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_271;
    /*i*/come_call_finalizer3(result_271,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
char* __dec_obj277;
struct sNode* __dec_obj278;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj277=self->sname;
            __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node==gComeFunResultObject) {
            __dec_obj278=self->node;
            if(__dec_obj278) { __dec_obj278 = come_decrement_ref_count2(__dec_obj278, ((struct sNode*)__dec_obj278)->finalize, ((struct sNode*)__dec_obj278)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__=(void*)0;
struct sDeleteNode* __result236__;
void* __right_value484 = (void*)0;
struct sDeleteNode* result_273;
void* __right_value485 = (void*)0;
char* __dec_obj279;
void* __right_value486 = (void*)0;
struct sNode* __dec_obj280;
struct sDeleteNode* __result237__;
    if(self==(void*)0) {
        __result236__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    result_273=(struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "sDeleteNode"));
    if(self!=((void*)0)) {
        result_273->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj279=result_273->sname;
        result_273->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj280=result_273->node;
        result_273->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_273;
    /*i*/come_call_finalizer3(result_273,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static void sForceDeleteNode_finalize(struct sForceDeleteNode* self){
char* __dec_obj281;
struct sNode* __dec_obj282;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj281=self->sname;
            __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node==gComeFunResultObject) {
            __dec_obj282=self->node;
            if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self){
void* __result_obj__=(void*)0;
struct sForceDeleteNode* __result239__;
void* __right_value491 = (void*)0;
struct sForceDeleteNode* result_275;
void* __right_value492 = (void*)0;
char* __dec_obj283;
void* __right_value493 = (void*)0;
struct sNode* __dec_obj284;
struct sForceDeleteNode* __result240__;
    if(self==(void*)0) {
        __result239__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    result_275=(struct sForceDeleteNode*)come_increment_ref_count((struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "sForceDeleteNode_clone", 3, "sForceDeleteNode"));
    if(self!=((void*)0)) {
        result_275->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj283=result_275->sname;
        result_275->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj284=result_275->node;
        result_275->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_275;
    /*i*/come_call_finalizer3(result_275,sForceDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
char* __dec_obj285;
struct sNode* __dec_obj286;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj285=self->sname;
            __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node==gComeFunResultObject) {
            __dec_obj286=self->node;
            if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__=(void*)0;
struct sBorrowNode* __result242__;
void* __right_value498 = (void*)0;
struct sBorrowNode* result_277;
void* __right_value499 = (void*)0;
char* __dec_obj287;
void* __right_value500 = (void*)0;
struct sNode* __dec_obj288;
struct sBorrowNode* __result243__;
    if(self==(void*)0) {
        __result242__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    result_277=(struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "sBorrowNode"));
    if(self!=((void*)0)) {
        result_277->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj287=result_277->sname;
        result_277->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj288=result_277->node;
        result_277->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count2(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_277;
    /*i*/come_call_finalizer3(result_277,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static void sDelegateNode_finalize(struct sDelegateNode* self){
char* __dec_obj289;
struct sNode* __dec_obj290;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj289=self->sname;
            __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node==gComeFunResultObject) {
            __dec_obj290=self->node;
            if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self){
void* __result_obj__=(void*)0;
struct sDelegateNode* __result245__;
void* __right_value505 = (void*)0;
struct sDelegateNode* result_279;
void* __right_value506 = (void*)0;
char* __dec_obj291;
void* __right_value507 = (void*)0;
struct sNode* __dec_obj292;
struct sDelegateNode* __result246__;
    if(self==(void*)0) {
        __result245__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    result_279=(struct sDelegateNode*)come_increment_ref_count((struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "sDelegateNode_clone", 3, "sDelegateNode"));
    if(self!=((void*)0)) {
        result_279->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj291=result_279->sname;
        result_279->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj292=result_279->node;
        result_279->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result246__ = gComeFunResultObject = __result_obj__ = result_279;
    /*i*/come_call_finalizer3(result_279,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static void sShareNode_finalize(struct sShareNode* self){
char* __dec_obj293;
struct sNode* __dec_obj294;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj293=self->sname;
            __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node==gComeFunResultObject) {
            __dec_obj294=self->node;
            if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sShareNode* sShareNode_clone(struct sShareNode* self){
void* __result_obj__=(void*)0;
struct sShareNode* __result248__;
void* __right_value512 = (void*)0;
struct sShareNode* result_281;
void* __right_value513 = (void*)0;
char* __dec_obj295;
void* __right_value514 = (void*)0;
struct sNode* __dec_obj296;
struct sShareNode* __result249__;
    if(self==(void*)0) {
        __result248__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    result_281=(struct sShareNode*)come_increment_ref_count((struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "sShareNode_clone", 3, "sShareNode"));
    if(self!=((void*)0)) {
        result_281->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj295=result_281->sname;
        result_281->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj296=result_281->node;
        result_281->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj296) { __dec_obj296 = come_decrement_ref_count2(__dec_obj296, ((struct sNode*)__dec_obj296)->finalize, ((struct sNode*)__dec_obj296)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result249__ = gComeFunResultObject = __result_obj__ = result_281;
    /*i*/come_call_finalizer3(result_281,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void sCloneNode_finalize(struct sCloneNode* self){
char* __dec_obj297;
struct sNode* __dec_obj298;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj297=self->sname;
            __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node==gComeFunResultObject) {
            __dec_obj298=self->node;
            if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__=(void*)0;
struct sCloneNode* __result251__;
void* __right_value519 = (void*)0;
struct sCloneNode* result_283;
void* __right_value520 = (void*)0;
char* __dec_obj299;
void* __right_value521 = (void*)0;
struct sNode* __dec_obj300;
struct sCloneNode* __result252__;
    if(self==(void*)0) {
        __result251__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    result_283=(struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "sCloneNode"));
    if(self!=((void*)0)) {
        result_283->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj299=result_283->sname;
        result_283->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj300=result_283->node;
        result_283->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result252__ = gComeFunResultObject = __result_obj__ = result_283;
    /*i*/come_call_finalizer3(result_283,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void sDupeNode_finalize(struct sDupeNode* self){
char* __dec_obj301;
struct sNode* __dec_obj302;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj301=self->sname;
            __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node==gComeFunResultObject) {
            __dec_obj302=self->node;
            if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__=(void*)0;
struct sDupeNode* __result254__;
void* __right_value526 = (void*)0;
struct sDupeNode* result_285;
void* __right_value527 = (void*)0;
char* __dec_obj303;
void* __right_value528 = (void*)0;
struct sNode* __dec_obj304;
struct sDupeNode* __result255__;
    if(self==(void*)0) {
        __result254__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    result_285=(struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "sDupeNode"));
    if(self!=((void*)0)) {
        result_285->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj303=result_285->sname;
        result_285->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj304=result_285->node;
        result_285->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj304) { __dec_obj304 = come_decrement_ref_count2(__dec_obj304, ((struct sNode*)__dec_obj304)->finalize, ((struct sNode*)__dec_obj304)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result255__ = gComeFunResultObject = __result_obj__ = result_285;
    /*i*/come_call_finalizer3(result_285,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
char* __dec_obj305;
struct sNode* __dec_obj306;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj305=self->sname;
            __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node==gComeFunResultObject) {
            __dec_obj306=self->node;
            if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__=(void*)0;
struct sDummyHeapNode* __result257__;
void* __right_value533 = (void*)0;
struct sDummyHeapNode* result_287;
void* __right_value534 = (void*)0;
char* __dec_obj307;
void* __right_value535 = (void*)0;
struct sNode* __dec_obj308;
struct sDummyHeapNode* __result258__;
    if(self==(void*)0) {
        __result257__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    result_287=(struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "sDummyHeapNode"));
    if(self!=((void*)0)) {
        result_287->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj307=result_287->sname;
        result_287->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj308=result_287->node;
        result_287->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result258__ = gComeFunResultObject = __result_obj__ = result_287;
    /*i*/come_call_finalizer3(result_287,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
char* __dec_obj309;
struct sNode* __dec_obj310;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj309=self->sname;
            __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node==gComeFunResultObject) {
            __dec_obj310=self->node;
            if(__dec_obj310) { __dec_obj310 = come_decrement_ref_count2(__dec_obj310, ((struct sNode*)__dec_obj310)->finalize, ((struct sNode*)__dec_obj310)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__=(void*)0;
struct sGCIncNode* __result260__;
void* __right_value540 = (void*)0;
struct sGCIncNode* result_289;
void* __right_value541 = (void*)0;
char* __dec_obj311;
void* __right_value542 = (void*)0;
struct sNode* __dec_obj312;
struct sGCIncNode* __result261__;
    if(self==(void*)0) {
        __result260__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    result_289=(struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "sGCIncNode"));
    if(self!=((void*)0)) {
        result_289->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj311=result_289->sname;
        result_289->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj312=result_289->node;
        result_289->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj312) { __dec_obj312 = come_decrement_ref_count2(__dec_obj312, ((struct sNode*)__dec_obj312)->finalize, ((struct sNode*)__dec_obj312)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result261__ = gComeFunResultObject = __result_obj__ = result_289;
    /*i*/come_call_finalizer3(result_289,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
char* __dec_obj313;
struct sNode* __dec_obj314;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj313=self->sname;
            __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node==gComeFunResultObject) {
            __dec_obj314=self->node;
            if(__dec_obj314) { __dec_obj314 = come_decrement_ref_count2(__dec_obj314, ((struct sNode*)__dec_obj314)->finalize, ((struct sNode*)__dec_obj314)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__=(void*)0;
struct sGCDecNode* __result263__;
void* __right_value547 = (void*)0;
struct sGCDecNode* result_291;
void* __right_value548 = (void*)0;
char* __dec_obj315;
void* __right_value549 = (void*)0;
struct sNode* __dec_obj316;
struct sGCDecNode* __result264__;
    if(self==(void*)0) {
        __result263__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    result_291=(struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "sGCDecNode"));
    if(self!=((void*)0)) {
        result_291->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj315=result_291->sname;
        result_291->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj316=result_291->node;
        result_291->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result264__ = gComeFunResultObject = __result_obj__ = result_291;
    /*i*/come_call_finalizer3(result_291,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self){
char* __dec_obj317;
struct sNode* __dec_obj318;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj317=self->sname;
            __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node==gComeFunResultObject) {
            __dec_obj318=self->node;
            if(__dec_obj318) { __dec_obj318 = come_decrement_ref_count2(__dec_obj318, ((struct sNode*)__dec_obj318)->finalize, ((struct sNode*)__dec_obj318)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self){
void* __result_obj__=(void*)0;
struct sGCDecNoFreeNode* __result266__;
void* __right_value554 = (void*)0;
struct sGCDecNoFreeNode* result_293;
void* __right_value555 = (void*)0;
char* __dec_obj319;
void* __right_value556 = (void*)0;
struct sNode* __dec_obj320;
struct sGCDecNoFreeNode* __result267__;
    if(self==(void*)0) {
        __result266__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    result_293=(struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "sGCDecNoFreeNode_clone", 3, "sGCDecNoFreeNode"));
    if(self!=((void*)0)) {
        result_293->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj319=result_293->sname;
        result_293->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj320=result_293->node;
        result_293->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj320) { __dec_obj320 = come_decrement_ref_count2(__dec_obj320, ((struct sNode*)__dec_obj320)->finalize, ((struct sNode*)__dec_obj320)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result267__ = gComeFunResultObject = __result_obj__ = result_293;
    /*i*/come_call_finalizer3(result_293,sGCDecNoFreeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static void sIsHeap_finalize(struct sIsHeap* self){
char* __dec_obj321;
struct sType* __dec_obj322;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj321=self->sname;
            __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj322=self->type;
            /* a*/come_call_finalizer3(__dec_obj322,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__=(void*)0;
struct sIsHeap* __result269__;
void* __right_value562 = (void*)0;
struct sIsHeap* result_298;
void* __right_value563 = (void*)0;
char* __dec_obj323;
void* __right_value564 = (void*)0;
struct sType* __dec_obj324;
struct sIsHeap* __result270__;
    if(self==(void*)0) {
        __result269__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    result_298=(struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "sIsHeap"));
    if(self!=((void*)0)) {
        result_298->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj323=result_298->sname;
        result_298->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj324=result_298->type;
        result_298->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /* a*/come_call_finalizer3(__dec_obj324,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result270__ = gComeFunResultObject = __result_obj__ = result_298;
    /*i*/come_call_finalizer3(result_298,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static void sIsPointer_finalize(struct sIsPointer* self){
char* __dec_obj325;
struct sType* __dec_obj326;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj325=self->sname;
            __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj326=self->type;
            /* a*/come_call_finalizer3(__dec_obj326,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
void* __result_obj__=(void*)0;
struct sIsPointer* __result272__;
void* __right_value570 = (void*)0;
struct sIsPointer* result_303;
void* __right_value571 = (void*)0;
char* __dec_obj327;
void* __right_value572 = (void*)0;
struct sType* __dec_obj328;
struct sIsPointer* __result273__;
    if(self==(void*)0) {
        __result272__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    result_303=(struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "sIsPointer"));
    if(self!=((void*)0)) {
        result_303->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj327=result_303->sname;
        result_303->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj328=result_303->type;
        result_303->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /* a*/come_call_finalizer3(__dec_obj328,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result273__ = gComeFunResultObject = __result_obj__ = result_303;
    /*i*/come_call_finalizer3(result_303,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
char* __dec_obj345;
struct sType* __dec_obj346;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj345=self->sname;
            __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj346=self->type;
            /* a*/come_call_finalizer3(__dec_obj346,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__=(void*)0;
struct sSizeOfNode* __result300__;
void* __right_value619 = (void*)0;
struct sSizeOfNode* result_322;
void* __right_value620 = (void*)0;
char* __dec_obj347;
void* __right_value621 = (void*)0;
struct sType* __dec_obj348;
struct sSizeOfNode* __result301__;
    if(self==(void*)0) {
        __result300__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    result_322=(struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "sSizeOfNode"));
    if(self!=((void*)0)) {
        result_322->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj347=result_322->sname;
        result_322->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj348=result_322->type;
        result_322->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /* a*/come_call_finalizer3(__dec_obj348,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result301__ = gComeFunResultObject = __result_obj__ = result_322;
    /*i*/come_call_finalizer3(result_322,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
char* __dec_obj349;
struct sNode* __dec_obj350;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj349=self->sname;
            __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        if(self->exp==gComeFunResultObject) {
            __dec_obj350=self->exp;
            if(__dec_obj350) { __dec_obj350 = come_decrement_ref_count2(__dec_obj350, ((struct sNode*)__dec_obj350)->finalize, ((struct sNode*)__dec_obj350)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__=(void*)0;
struct sSizeOfExpNode* __result303__;
void* __right_value626 = (void*)0;
struct sSizeOfExpNode* result_324;
void* __right_value627 = (void*)0;
char* __dec_obj351;
void* __right_value628 = (void*)0;
struct sNode* __dec_obj352;
struct sSizeOfExpNode* __result304__;
    if(self==(void*)0) {
        __result303__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    result_324=(struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "sSizeOfExpNode"));
    if(self!=((void*)0)) {
        result_324->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj351=result_324->sname;
        result_324->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj352=result_324->exp;
        result_324->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj352) { __dec_obj352 = come_decrement_ref_count2(__dec_obj352, ((struct sNode*)__dec_obj352)->finalize, ((struct sNode*)__dec_obj352)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result304__ = gComeFunResultObject = __result_obj__ = result_324;
    /*i*/come_call_finalizer3(result_324,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
char* __dec_obj353;
struct sType* __dec_obj354;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj353=self->sname;
            __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj354=self->type;
            /* a*/come_call_finalizer3(__dec_obj354,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
void* __result_obj__=(void*)0;
struct sTypeOfNode* __result306__;
void* __right_value634 = (void*)0;
struct sTypeOfNode* result_333;
void* __right_value635 = (void*)0;
char* __dec_obj355;
void* __right_value636 = (void*)0;
struct sType* __dec_obj356;
struct sTypeOfNode* __result307__;
    if(self==(void*)0) {
        __result306__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    result_333=(struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "sTypeOfNode"));
    if(self!=((void*)0)) {
        result_333->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj355=result_333->sname;
        result_333->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj355 = come_decrement_ref_count2(__dec_obj355, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj356=result_333->type;
        result_333->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /* a*/come_call_finalizer3(__dec_obj356,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result307__ = gComeFunResultObject = __result_obj__ = result_333;
    /*i*/come_call_finalizer3(result_333,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
char* __dec_obj357;
struct sNode* __dec_obj358;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj357=self->sname;
            __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        if(self->exp==gComeFunResultObject) {
            __dec_obj358=self->exp;
            if(__dec_obj358) { __dec_obj358 = come_decrement_ref_count2(__dec_obj358, ((struct sNode*)__dec_obj358)->finalize, ((struct sNode*)__dec_obj358)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
void* __result_obj__=(void*)0;
struct sTypeOfExpNode* __result309__;
void* __right_value641 = (void*)0;
struct sTypeOfExpNode* result_335;
void* __right_value642 = (void*)0;
char* __dec_obj359;
void* __right_value643 = (void*)0;
struct sNode* __dec_obj360;
struct sTypeOfExpNode* __result310__;
    if(self==(void*)0) {
        __result309__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    result_335=(struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "sTypeOfExpNode"));
    if(self!=((void*)0)) {
        result_335->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj359=result_335->sname;
        result_335->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj360=result_335->exp;
        result_335->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj360) { __dec_obj360 = come_decrement_ref_count2(__dec_obj360, ((struct sNode*)__dec_obj360)->finalize, ((struct sNode*)__dec_obj360)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result310__ = gComeFunResultObject = __result_obj__ = result_335;
    /*i*/come_call_finalizer3(result_335,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
char* __dec_obj361;
struct sType* __dec_obj362;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj361=self->sname;
            __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj362=self->type;
            /* a*/come_call_finalizer3(__dec_obj362,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__=(void*)0;
struct sAlignOfNode* __result312__;
void* __right_value649 = (void*)0;
struct sAlignOfNode* result_343;
void* __right_value650 = (void*)0;
char* __dec_obj363;
void* __right_value651 = (void*)0;
struct sType* __dec_obj364;
struct sAlignOfNode* __result313__;
    if(self==(void*)0) {
        __result312__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    result_343=(struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "sAlignOfNode"));
    if(self!=((void*)0)) {
        result_343->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj363=result_343->sname;
        result_343->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj364=result_343->type;
        result_343->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /* a*/come_call_finalizer3(__dec_obj364,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result313__ = gComeFunResultObject = __result_obj__ = result_343;
    /*i*/come_call_finalizer3(result_343,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
char* __dec_obj365;
struct sNode* __dec_obj366;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj365=self->sname;
            __dec_obj365 = come_decrement_ref_count2(__dec_obj365, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        if(self->exp==gComeFunResultObject) {
            __dec_obj366=self->exp;
            if(__dec_obj366) { __dec_obj366 = come_decrement_ref_count2(__dec_obj366, ((struct sNode*)__dec_obj366)->finalize, ((struct sNode*)__dec_obj366)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__=(void*)0;
struct sAlignOfExpNode* __result315__;
void* __right_value656 = (void*)0;
struct sAlignOfExpNode* result_345;
void* __right_value657 = (void*)0;
char* __dec_obj367;
void* __right_value658 = (void*)0;
struct sNode* __dec_obj368;
struct sAlignOfExpNode* __result316__;
    if(self==(void*)0) {
        __result315__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    result_345=(struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "sAlignOfExpNode"));
    if(self!=((void*)0)) {
        result_345->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj367=result_345->sname;
        result_345->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj368=result_345->exp;
        result_345->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj368) { __dec_obj368 = come_decrement_ref_count2(__dec_obj368, ((struct sNode*)__dec_obj368)->finalize, ((struct sNode*)__dec_obj368)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result316__ = gComeFunResultObject = __result_obj__ = result_345;
    /*i*/come_call_finalizer3(result_345,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
char* __dec_obj369;
struct sType* __dec_obj370;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj369=self->sname;
            __dec_obj369 = come_decrement_ref_count2(__dec_obj369, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj370=self->type;
            /* a*/come_call_finalizer3(__dec_obj370,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__=(void*)0;
struct sAlignOfNode2* __result318__;
void* __right_value664 = (void*)0;
struct sAlignOfNode2* result_353;
void* __right_value665 = (void*)0;
char* __dec_obj371;
void* __right_value666 = (void*)0;
struct sType* __dec_obj372;
struct sAlignOfNode2* __result319__;
    if(self==(void*)0) {
        __result318__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    result_353=(struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "sAlignOfNode2"));
    if(self!=((void*)0)) {
        result_353->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj371=result_353->sname;
        result_353->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj371 = come_decrement_ref_count2(__dec_obj371, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj372=result_353->type;
        result_353->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /* a*/come_call_finalizer3(__dec_obj372,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result319__ = gComeFunResultObject = __result_obj__ = result_353;
    /*i*/come_call_finalizer3(result_353,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
char* __dec_obj373;
struct sNode* __dec_obj374;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj373=self->sname;
            __dec_obj373 = come_decrement_ref_count2(__dec_obj373, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        if(self->exp==gComeFunResultObject) {
            __dec_obj374=self->exp;
            if(__dec_obj374) { __dec_obj374 = come_decrement_ref_count2(__dec_obj374, ((struct sNode*)__dec_obj374)->finalize, ((struct sNode*)__dec_obj374)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__=(void*)0;
struct sAlignOfExpNode2* __result321__;
void* __right_value671 = (void*)0;
struct sAlignOfExpNode2* result_355;
void* __right_value672 = (void*)0;
char* __dec_obj375;
void* __right_value673 = (void*)0;
struct sNode* __dec_obj376;
struct sAlignOfExpNode2* __result322__;
    if(self==(void*)0) {
        __result321__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    result_355=(struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "sAlignOfExpNode2"));
    if(self!=((void*)0)) {
        result_355->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj375=result_355->sname;
        result_355->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj375 = come_decrement_ref_count2(__dec_obj375, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj376=result_355->exp;
        result_355->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj376) { __dec_obj376 = come_decrement_ref_count2(__dec_obj376, ((struct sNode*)__dec_obj376)->finalize, ((struct sNode*)__dec_obj376)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result322__ = gComeFunResultObject = __result_obj__ = result_355;
    /*i*/come_call_finalizer3(result_355,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
char* __dec_obj377;
struct sType* __dec_obj378;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj377=self->sname;
            __dec_obj377 = come_decrement_ref_count2(__dec_obj377, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj378=self->type;
            /* a*/come_call_finalizer3(__dec_obj378,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__=(void*)0;
struct sAlignAsNode* __result324__;
void* __right_value679 = (void*)0;
struct sAlignAsNode* result_363;
void* __right_value680 = (void*)0;
char* __dec_obj379;
void* __right_value681 = (void*)0;
struct sType* __dec_obj380;
struct sAlignAsNode* __result325__;
    if(self==(void*)0) {
        __result324__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    result_363=(struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "sAlignAsNode"));
    if(self!=((void*)0)) {
        result_363->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj379=result_363->sname;
        result_363->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj379 = come_decrement_ref_count2(__dec_obj379, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj380=result_363->type;
        result_363->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /* a*/come_call_finalizer3(__dec_obj380,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result325__ = gComeFunResultObject = __result_obj__ = result_363;
    /*i*/come_call_finalizer3(result_363,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
char* __dec_obj381;
struct sNode* __dec_obj382;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj381=self->sname;
            __dec_obj381 = come_decrement_ref_count2(__dec_obj381, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        if(self->exp==gComeFunResultObject) {
            __dec_obj382=self->exp;
            if(__dec_obj382) { __dec_obj382 = come_decrement_ref_count2(__dec_obj382, ((struct sNode*)__dec_obj382)->finalize, ((struct sNode*)__dec_obj382)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__=(void*)0;
struct sAlignAsExpNode* __result327__;
void* __right_value686 = (void*)0;
struct sAlignAsExpNode* result_365;
void* __right_value687 = (void*)0;
char* __dec_obj383;
void* __right_value688 = (void*)0;
struct sNode* __dec_obj384;
struct sAlignAsExpNode* __result328__;
    if(self==(void*)0) {
        __result327__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    result_365=(struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "sAlignAsExpNode"));
    if(self!=((void*)0)) {
        result_365->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj383=result_365->sname;
        result_365->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj383 = come_decrement_ref_count2(__dec_obj383, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj384=result_365->exp;
        result_365->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj384) { __dec_obj384 = come_decrement_ref_count2(__dec_obj384, ((struct sNode*)__dec_obj384)->finalize, ((struct sNode*)__dec_obj384)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result328__ = gComeFunResultObject = __result_obj__ = result_365;
    /*i*/come_call_finalizer3(result_365,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct sNode* _inf_value40;
struct sNothingNode* _inf_obj_value40;
void* __right_value695 = (void*)0;
struct sNode* __result333__;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sNode* _inf_value41;
struct sNothingNode* _inf_obj_value41;
void* __right_value700 = (void*)0;
struct sNode* __result336__;
_Bool come_c_368;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sNode* _inf_value42;
struct sNothingNode* _inf_obj_value42;
void* __right_value705 = (void*)0;
struct sNode* __result339__;
void* __right_value706 = (void*)0;
struct sNode* __result340__;
    if(charp_operator_equals(buf,"using")) {
        if(parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else {
            if(parsecmp("comelang-str",info)) {
                info->p+=strlen("comelang-str");
                skip_spaces_and_lf(info);
                gComeStr=(_Bool)1;
                _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1780, "struct sNode");
                _inf_obj_value40=come_increment_ref_count(((struct sNothingNode*)(__right_value692=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1780, "sNothingNode")),info))));
                _inf_value40->_protocol_obj=_inf_obj_value40;
                _inf_value40->finalize=(void*)sNothingNode_finalize;
                _inf_value40->clone=(void*)sNothingNode_clone;
                _inf_value40->compile=(void*)sNothingNode_compile;
                _inf_value40->sline=(void*)sNodeBase_sline;
                _inf_value40->sname=(void*)sNodeBase_sname;
                _inf_value40->terminated=(void*)sNodeBase_terminated;
                _inf_value40->kind=(void*)sNothingNode_kind;
                __result333__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value695=_inf_value40));
                /*g*/come_call_finalizer3(__right_value692,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value695) { __right_value695 = come_decrement_ref_count2(__right_value695, ((struct sNode*)__right_value695)->finalize, ((struct sNode*)__right_value695)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result333__;
            }
            else {
                if(parsecmp("comelang-net",info)) {
                    info->p+=strlen("comelang-net");
                    skip_spaces_and_lf(info);
                    gComeNet=(_Bool)1;
                    _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1788, "struct sNode");
                    _inf_obj_value41=come_increment_ref_count(((struct sNothingNode*)(__right_value697=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1788, "sNothingNode")),info))));
                    _inf_value41->_protocol_obj=_inf_obj_value41;
                    _inf_value41->finalize=(void*)sNothingNode_finalize;
                    _inf_value41->clone=(void*)sNothingNode_clone;
                    _inf_value41->compile=(void*)sNothingNode_compile;
                    _inf_value41->sline=(void*)sNodeBase_sline;
                    _inf_value41->sname=(void*)sNodeBase_sname;
                    _inf_value41->terminated=(void*)sNodeBase_terminated;
                    _inf_value41->kind=(void*)sNothingNode_kind;
                    __result336__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value700=_inf_value41));
                    /*g*/come_call_finalizer3(__right_value697,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value700) { __right_value700 = come_decrement_ref_count2(__right_value700, ((struct sNode*)__right_value700)->finalize, ((struct sNode*)__right_value700)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    gComeFunResultObject = (void*)0;
                    return __result336__;
                }
                else {
                    if(parsecmp("c",info)||parsecmp("C",info)) {
                        info->p+=strlen("c");
                        skip_spaces_and_lf(info);
                        if(*info->p==123) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_c_368=gComeC;
                            gComeC=(_Bool)1;
                            transpile_toplevel((_Bool)1,info);
                            gComeC=come_c_368;
                        }
                        else {
                            gComeC=(_Bool)1;
                        }
                    }
                    else {
                        if(parsecmp("gc",info)) {
                            info->p+=strlen("gc");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            if(parsecmp("no-gc",info)) {
                                info->p+=strlen("no-gc");
                                skip_spaces_and_lf(info);
                            }
                            else {
                                if(parsecmp("unsafe",info)) {
                                    info->p+=strlen("unsafe");
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    err_msg(info,"invalid using");
                                    exit(2);
                                }
                            }
                        }
                    }
                }
            }
        }
        _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1826, "struct sNode");
        _inf_obj_value42=come_increment_ref_count(((struct sNothingNode*)(__right_value702=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1826, "sNothingNode")),info))));
        _inf_value42->_protocol_obj=_inf_obj_value42;
        _inf_value42->finalize=(void*)sNothingNode_finalize;
        _inf_value42->clone=(void*)sNothingNode_clone;
        _inf_value42->compile=(void*)sNothingNode_compile;
        _inf_value42->sline=(void*)sNodeBase_sline;
        _inf_value42->sname=(void*)sNodeBase_sname;
        _inf_value42->terminated=(void*)sNodeBase_terminated;
        _inf_value42->kind=(void*)sNothingNode_kind;
        __result339__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value705=_inf_value42));
        /*g*/come_call_finalizer3(__right_value702,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value705) { __right_value705 = come_decrement_ref_count2(__right_value705, ((struct sNode*)__right_value705)->finalize, ((struct sNode*)__right_value705)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    __result340__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value706=top_level_v93(buf,head,head_sline,info)));
    if(__right_value706) { __right_value706 = come_decrement_ref_count2(__right_value706, ((struct sNode*)__right_value706)->finalize, ((struct sNode*)__right_value706)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static void sNothingNode_finalize(struct sNothingNode* self){
char* __dec_obj389;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj389=self->sname;
            __dec_obj389 = come_decrement_ref_count2(__dec_obj389, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
void* __result_obj__=(void*)0;
struct sNothingNode* __result337__;
void* __right_value703 = (void*)0;
struct sNothingNode* result_369;
void* __right_value704 = (void*)0;
char* __dec_obj390;
struct sNothingNode* __result338__;
    if(self==(void*)0) {
        __result337__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    result_369=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "sNothingNode"));
    if(self!=((void*)0)) {
        result_369->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj390=result_369->sname;
        result_369->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj390 = come_decrement_ref_count2(__dec_obj390, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result338__ = gComeFunResultObject = __result_obj__ = result_369;
    /*i*/come_call_finalizer3(result_369,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value707 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var13;
struct sType* type3_370;
char* name2_371;
_Bool err_372;
void* __right_value708 = (void*)0;
struct sType* inf_type_373;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct sNode* _inf_value43;
struct sImplementsNode* _inf_obj_value43;
void* __right_value715 = (void*)0;
struct sNode* __result343__;
void* __right_value716 = (void*)0;
struct sNode* __result344__;
    if(parsecmp("implements",info)) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var13=((struct tuple3$3sTypephcharphbool*)(__right_value707=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_370=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
        name2_371=(char*)come_increment_ref_count(multiple_assign_var13->v2);
        err_372=multiple_assign_var13->v3;
        /*g*/come_call_finalizer3(__right_value707,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(!err_372) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_373=(struct sType*)come_increment_ref_count(sType_clone(type3_370));
        _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1846, "struct sNode");
        _inf_obj_value43=come_increment_ref_count(((struct sImplementsNode*)(__right_value710=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1846, "sImplementsNode")),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_373),info))));
        _inf_value43->_protocol_obj=_inf_obj_value43;
        _inf_value43->finalize=(void*)sImplementsNode_finalize;
        _inf_value43->clone=(void*)sImplementsNode_clone;
        _inf_value43->compile=(void*)sImplementsNode_compile;
        _inf_value43->sline=(void*)sNodeBase_sline;
        _inf_value43->sname=(void*)sNodeBase_sname;
        _inf_value43->terminated=(void*)sNodeBase_terminated;
        _inf_value43->kind=(void*)sImplementsNode_kind;
        __result343__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value715=_inf_value43));
        /*i*/come_call_finalizer3(type3_370,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_371 = come_decrement_ref_count2(name2_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(inf_type_373,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value710,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value715) { __right_value715 = come_decrement_ref_count2(__right_value715, ((struct sNode*)__right_value715)->finalize, ((struct sNode*)__right_value715)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result343__;
        /*i*/come_call_finalizer3(type3_370,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_371 = come_decrement_ref_count2(name2_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(inf_type_373,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(*info->p==64) {
            info->p++;
            while(xisalnum(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
        }
    }
    __result344__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value716=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(__right_value716) { __right_value716 = come_decrement_ref_count2(__right_value716, ((struct sNode*)__right_value716)->finalize, ((struct sNode*)__right_value716)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
char* __dec_obj391;
struct sNode* __dec_obj392;
struct sType* __dec_obj393;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj391=self->sname;
            __dec_obj391 = come_decrement_ref_count2(__dec_obj391, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        if(self->obj_exp==gComeFunResultObject) {
            __dec_obj392=self->obj_exp;
            if(__dec_obj392) { __dec_obj392 = come_decrement_ref_count2(__dec_obj392, ((struct sNode*)__dec_obj392)->finalize, ((struct sNode*)__dec_obj392)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->inf_type!=((void*)0)) {
        if(self->inf_type==gComeFunResultObject) {
            __dec_obj393=self->inf_type;
            /* a*/come_call_finalizer3(__dec_obj393,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__=(void*)0;
struct sImplementsNode* __result341__;
void* __right_value711 = (void*)0;
struct sImplementsNode* result_374;
void* __right_value712 = (void*)0;
char* __dec_obj394;
void* __right_value713 = (void*)0;
struct sNode* __dec_obj395;
void* __right_value714 = (void*)0;
struct sType* __dec_obj396;
struct sImplementsNode* __result342__;
    if(self==(void*)0) {
        __result341__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    result_374=(struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "sImplementsNode"));
    if(self!=((void*)0)) {
        result_374->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj394=result_374->sname;
        result_374->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj394 = come_decrement_ref_count2(__dec_obj394, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __dec_obj395=result_374->obj_exp;
        result_374->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
        if(__dec_obj395) { __dec_obj395 = come_decrement_ref_count2(__dec_obj395, ((struct sNode*)__dec_obj395)->finalize, ((struct sNode*)__dec_obj395)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->inf_type!=((void*)0)) {
        __dec_obj396=result_374->inf_type;
        result_374->inf_type=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
        /* a*/come_call_finalizer3(__dec_obj396,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result342__ = gComeFunResultObject = __result_obj__ = result_374;
    /*i*/come_call_finalizer3(result_374,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

