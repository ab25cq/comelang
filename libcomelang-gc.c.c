// source head
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long  long __int64_t;
typedef unsigned long  long __uint64_t;
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
typedef unsigned long  int __darwin_size_t;
typedef __builtin_va_list __darwin_va_list;
typedef int __darwin_wchar_t;
typedef int __darwin_rune_t;
typedef int __darwin_wint_t;
typedef unsigned long  int __darwin_clock_t;
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
typedef unsigned long  long __darwin_ino64_t;
typedef unsigned long  long __darwin_ino_t;
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
typedef unsigned long  int __darwin_pthread_key_t;
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
typedef unsigned long  long u_int64_t;
typedef long long register_t;
typedef long intptr_t;
typedef unsigned long  int uintptr_t;
typedef unsigned long  long user_addr_t;
typedef unsigned long  long user_size_t;
typedef long long user_ssize_t;
typedef long long user_long_t;
typedef unsigned long  long user_ulong_t;
typedef long long user_time_t;
typedef long long user_off_t;
typedef unsigned long  long syscall_arg_t;
typedef __darwin_va_list va_list;
typedef unsigned long  int size_t;
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
    unsigned long  long __far;
    unsigned int __esr;
    unsigned int __exception;
};
struct __darwin_arm_exception_state64_v2
{
    unsigned long  long __far;
    unsigned long  long __esr;
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
    unsigned long  long __x[29];
    unsigned long  long __fp;
    unsigned long  long __lr;
    unsigned long  long __sp;
    unsigned long  long __pc;
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
    unsigned long  long __mdscr_el1;
};
struct __darwin_arm_debug_state64
{
    unsigned long  long __bvr[16];
    unsigned long  long __bcr[16];
    unsigned long  long __wvr[16];
    unsigned long  long __wcr[16];
    unsigned long  long __mdscr_el1;
};
struct __darwin_arm_cpmu_state64
{
    unsigned long  long __ctrs[16];
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
    unsigned long  int ss_size;
    int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
struct __darwin_ucontext
{
    int uc_onstack;
    unsigned int uc_sigmask;
    struct __darwin_sigaltstack uc_stack;
    struct __darwin_ucontext* uc_link;
    unsigned long  int uc_mcsize;
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
    unsigned long  int __pad[7];
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
typedef unsigned long  long uint64_t;
typedef char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long  long uint_least64_t;
typedef char int_fast8_t;
typedef short int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned short int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long  long uint_fast64_t;
typedef long  int intmax_t;
typedef unsigned long  int uintmax_t;
struct timeval
{
    long tv_sec;
    int tv_usec;
};
typedef unsigned long  long rlim_t;
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
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
};
struct rusage_info_v1
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
};
struct rusage_info_v2
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
};
struct rusage_info_v3
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
    unsigned long  long ri_cpu_time_qos_default;
    unsigned long  long ri_cpu_time_qos_maintenance;
    unsigned long  long ri_cpu_time_qos_background;
    unsigned long  long ri_cpu_time_qos_utility;
    unsigned long  long ri_cpu_time_qos_legacy;
    unsigned long  long ri_cpu_time_qos_user_initiated;
    unsigned long  long ri_cpu_time_qos_user_interactive;
    unsigned long  long ri_billed_system_time;
    unsigned long  long ri_serviced_system_time;
};
struct rusage_info_v4
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
    unsigned long  long ri_cpu_time_qos_default;
    unsigned long  long ri_cpu_time_qos_maintenance;
    unsigned long  long ri_cpu_time_qos_background;
    unsigned long  long ri_cpu_time_qos_utility;
    unsigned long  long ri_cpu_time_qos_legacy;
    unsigned long  long ri_cpu_time_qos_user_initiated;
    unsigned long  long ri_cpu_time_qos_user_interactive;
    unsigned long  long ri_billed_system_time;
    unsigned long  long ri_serviced_system_time;
    unsigned long  long ri_logical_writes;
    unsigned long  long ri_lifetime_max_phys_footprint;
    unsigned long  long ri_instructions;
    unsigned long  long ri_cycles;
    unsigned long  long ri_billed_energy;
    unsigned long  long ri_serviced_energy;
    unsigned long  long ri_interval_max_phys_footprint;
    unsigned long  long ri_runnable_time;
};
struct rusage_info_v5
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
    unsigned long  long ri_cpu_time_qos_default;
    unsigned long  long ri_cpu_time_qos_maintenance;
    unsigned long  long ri_cpu_time_qos_background;
    unsigned long  long ri_cpu_time_qos_utility;
    unsigned long  long ri_cpu_time_qos_legacy;
    unsigned long  long ri_cpu_time_qos_user_initiated;
    unsigned long  long ri_cpu_time_qos_user_interactive;
    unsigned long  long ri_billed_system_time;
    unsigned long  long ri_serviced_system_time;
    unsigned long  long ri_logical_writes;
    unsigned long  long ri_lifetime_max_phys_footprint;
    unsigned long  long ri_instructions;
    unsigned long  long ri_cycles;
    unsigned long  long ri_billed_energy;
    unsigned long  long ri_serviced_energy;
    unsigned long  long ri_interval_max_phys_footprint;
    unsigned long  long ri_runnable_time;
    unsigned long  long ri_flags;
};
struct rusage_info_v6
{
    unsigned char ri_uuid[16];
    unsigned long  long ri_user_time;
    unsigned long  long ri_system_time;
    unsigned long  long ri_pkg_idle_wkups;
    unsigned long  long ri_interrupt_wkups;
    unsigned long  long ri_pageins;
    unsigned long  long ri_wired_size;
    unsigned long  long ri_resident_size;
    unsigned long  long ri_phys_footprint;
    unsigned long  long ri_proc_start_abstime;
    unsigned long  long ri_proc_exit_abstime;
    unsigned long  long ri_child_user_time;
    unsigned long  long ri_child_system_time;
    unsigned long  long ri_child_pkg_idle_wkups;
    unsigned long  long ri_child_interrupt_wkups;
    unsigned long  long ri_child_pageins;
    unsigned long  long ri_child_elapsed_abstime;
    unsigned long  long ri_diskio_bytesread;
    unsigned long  long ri_diskio_byteswritten;
    unsigned long  long ri_cpu_time_qos_default;
    unsigned long  long ri_cpu_time_qos_maintenance;
    unsigned long  long ri_cpu_time_qos_background;
    unsigned long  long ri_cpu_time_qos_utility;
    unsigned long  long ri_cpu_time_qos_legacy;
    unsigned long  long ri_cpu_time_qos_user_initiated;
    unsigned long  long ri_cpu_time_qos_user_interactive;
    unsigned long  long ri_billed_system_time;
    unsigned long  long ri_serviced_system_time;
    unsigned long  long ri_logical_writes;
    unsigned long  long ri_lifetime_max_phys_footprint;
    unsigned long  long ri_instructions;
    unsigned long  long ri_cycles;
    unsigned long  long ri_billed_energy;
    unsigned long  long ri_serviced_energy;
    unsigned long  long ri_interval_max_phys_footprint;
    unsigned long  long ri_runnable_time;
    unsigned long  long ri_flags;
    unsigned long  long ri_user_ptime;
    unsigned long  long ri_system_ptime;
    unsigned long  long ri_pinstructions;
    unsigned long  long ri_pcycles;
    unsigned long  long ri_energy_nj;
    unsigned long  long ri_penergy_nj;
    unsigned long  long ri_secure_time_in_system;
    unsigned long  long ri_secure_ptime_in_system;
    unsigned long  long ri_neural_footprint;
    unsigned long  long ri_lifetime_max_neural_footprint;
    unsigned long  long ri_interval_max_neural_footprint;
    unsigned long  long ri_reserved[9];
};
typedef struct rusage_info_v6 rusage_info_current;
struct rlimit
{
    unsigned long  long rlim_cur;
    unsigned long  long rlim_max;
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
typedef unsigned long  long malloc_type_id_t;
typedef struct _malloc_zone_t malloc_zone_t;
typedef int dev_t;
typedef unsigned short int mode_t;
extern char* suboptarg;
typedef unsigned long  int rsize_t;
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
extern _Bool gComePthread;
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
    struct tuple1$1sTypeph* mChannelType;
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
    _Bool mChannel;
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
    _Bool no_output_come_code2;
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
struct map$2charphint
{
    char** keys;
    _Bool* item_existance;
    int* items;
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
    char* linker_option;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool no_output_come_code2;
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
    struct map$2charphint* outputed_class;
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
typedef long  int ptrdiff_t;
typedef long  double max_align_t;
typedef void* GC_PTR;
typedef unsigned long  int GC_word;
typedef long GC_signed_word;
extern unsigned long  int GC_gc_no;
typedef void* (*GC_oom_func)(unsigned long  int);
extern void* (*GC_oom_fn)(unsigned long  int);
typedef void (*GC_on_heap_resize_proc)(unsigned long  int);
extern void (*GC_on_heap_resize)(unsigned long  int);
enum anonymous_typeY8 { GC_EVENT_START
,GC_EVENT_MARK_START
,GC_EVENT_MARK_END
,GC_EVENT_RECLAIM_START
,GC_EVENT_RECLAIM_END
,GC_EVENT_END
,GC_EVENT_PRE_STOP_WORLD
,GC_EVENT_POST_STOP_WORLD
,GC_EVENT_PRE_START_WORLD
,GC_EVENT_POST_START_WORLD
,GC_EVENT_THREAD_SUSPENDED
,GC_EVENT_THREAD_UNSUSPENDED
};
typedef enum anonymous_typeY8 GC_EventType;
typedef void (*GC_on_collection_event_proc)(enum anonymous_typeY8);
extern int GC_find_leak;
extern int GC_all_interior_pointers;
extern int GC_finalize_on_demand;
extern int GC_java_finalization;
typedef void (*GC_finalizer_notifier_proc)();
extern void (*GC_finalizer_notifier)();
extern int GC_dont_gc;
extern int GC_dont_expand;
extern int GC_use_entire_heap;
extern int GC_full_freq;
extern unsigned long  int GC_non_gc_bytes;
extern int GC_no_dls;
extern unsigned long  int GC_free_space_divisor;
extern unsigned long  int GC_max_retries;
extern char* GC_stackbottom;
extern int GC_dont_precollect;
extern unsigned long  int GC_time_limit;
struct GC_timeval_s
{
    unsigned long  int tv_ms;
    unsigned long  int tv_nsec;
};
typedef int (*GC_stop_func)();
struct GC_prof_stats_s
{
    unsigned long  int heapsize_full;
    unsigned long  int free_bytes_full;
    unsigned long  int unmapped_bytes;
    unsigned long  int bytes_allocd_since_gc;
    unsigned long  int allocd_bytes_before_gc;
    unsigned long  int non_gc_bytes;
    unsigned long  int gc_no;
    unsigned long  int markers_m1;
    unsigned long  int bytes_reclaimed_since_gc;
    unsigned long  int reclaimed_bytes_before_gc;
    unsigned long  int expl_freed_bytes_since_gc;
    unsigned long  int obtained_from_os_bytes;
};
typedef void (*GC_finalization_proc)(void*,void*);
enum anonymous_typeY9 { GC_TOGGLE_REF_DROP
,GC_TOGGLE_REF_STRONG
,GC_TOGGLE_REF_WEAK
};
typedef enum anonymous_typeY9 GC_ToggleRefStatus;
typedef enum anonymous_typeY9 (*GC_toggleref_func)(void*);
typedef void (*GC_await_finalize_proc)(void*);
typedef void (*GC_warn_proc)(char*,unsigned long  int);
typedef void (*GC_abort_func)(const char*);
typedef unsigned long  int GC_hidden_pointer;
typedef void* (*GC_fn_type)(void*);
struct GC_stack_base
{
    void* mem_base;
};
typedef void* (*GC_stack_base_func)(struct GC_stack_base*,void*);
extern void (*GC_same_obj_print_proc)(void*,void*);
extern void (*GC_is_valid_displacement_print_proc)(void*);
extern void (*GC_is_visible_print_proc)(void*);
typedef int (*GC_has_static_roots_func)(const char*,void*,unsigned long  int);
struct sMemHeaderTiny
{
    unsigned long  int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
};
struct sMemHeader
{
    unsigned long  int size;
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
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX53, const char* anonymous_var_nameX54, struct __sFILE* anonymous_var_nameX55);
int fscanf(struct __sFILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, ...);
int fseek(struct __sFILE* anonymous_var_nameX58, long anonymous_var_nameX59, int anonymous_var_nameX60);
int fsetpos(struct __sFILE* anonymous_var_nameX61, const long  long* anonymous_var_nameX62);
long ftell(struct __sFILE* anonymous_var_nameX63);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
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
int setvbuf(struct __sFILE* anonymous_var_nameX76, char* anonymous_var_nameX77, int anonymous_var_nameX78, unsigned long  int anonymous_var_nameX79);
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
int snprintf(char* __str, unsigned long  int __size, const char* __format, ...);
int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX118);
int vscanf(const char* __format, va_list anonymous_var_nameX119);
int vsnprintf(char* __str, unsigned long  int __size, const char* __format, va_list anonymous_var_nameX120);
int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX121);
int dprintf(int anonymous_var_nameX122, const char* anonymous_var_nameX123, ...);
int vdprintf(int anonymous_var_nameX124, const char* anonymous_var_nameX125, va_list anonymous_var_nameX126);
long getdelim(char** __linep, unsigned long  int* __linecapp, int __delimiter, struct __sFILE* __stream);
long getline(char** __linep, unsigned long  int* __linecapp, struct __sFILE* __stream);
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode);
struct __sFILE* open_memstream(char** __bufp, unsigned long  int* __sizep);
int asprintf(char** anonymous_var_nameX127, const char* anonymous_var_nameX128, ...);
char* ctermid_r(char* anonymous_var_nameX129);
char* fgetln(struct __sFILE* anonymous_var_nameX130, unsigned long  int* anonymous_var_nameX131);
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
void* alloca(unsigned long  int anonymous_var_nameX204);
void* malloc_type_malloc(unsigned long  int size, unsigned long  long type_id);
void* malloc_type_calloc(unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
void malloc_type_free(void* ptr, unsigned long  long type_id);
void* malloc_type_realloc(void* ptr, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_valloc(unsigned long  int size, unsigned long  long type_id);
void* malloc_type_aligned_alloc(unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
int malloc_type_posix_memalign(void** memptr, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, unsigned long  int count, unsigned long  int size, unsigned long  long type_id);
void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long  long type_id);
void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id);
void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
void* malloc(unsigned long  int __size);
void* calloc(unsigned long  int __count, unsigned long  int __size);
void free(void* anonymous_var_nameX205);
void* realloc(void* __ptr, unsigned long  int __size);
void* reallocf(void* __ptr, unsigned long  int __size);
void* valloc(unsigned long  int __size);
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size);
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size);
void abort();
int abs(int anonymous_var_nameX206);
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* anonymous_var_nameX207);
int atoi(const char* anonymous_var_nameX208);
long atol(const char* anonymous_var_nameX209);
long long atoll(const char* anonymous_var_nameX210);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX5 div(int anonymous_var_nameX213, int anonymous_var_nameX214);
void exit(int anonymous_var_nameX215);
char* getenv(const char* anonymous_var_nameX216);
long labs(long anonymous_var_nameX217);
struct anonymous_typeX6 ldiv(long anonymous_var_nameX218, long anonymous_var_nameX219);
long long llabs(long  long anonymous_var_nameX220);
struct anonymous_typeX7 lldiv(long  long anonymous_var_nameX221, long  long anonymous_var_nameX222);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(int* anonymous_var_nameX223, const char* anonymous_var_nameX224, unsigned long  int anonymous_var_nameX225);
int mbtowc(int* anonymous_var_nameX226, const char* anonymous_var_nameX227, unsigned long  int anonymous_var_nameX228);
void qsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void quick_exit(int anonymous_var_nameX231);
int rand();
void srand(unsigned int anonymous_var_nameX232);
double strtod(const char* anonymous_var_nameX233, char** anonymous_var_nameX234);
float strtof(const char* anonymous_var_nameX235, char** anonymous_var_nameX236);
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* anonymous_var_nameX237, char** anonymous_var_nameX238);
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
int system(const char* anonymous_var_nameX239);
unsigned long  int wcstombs(char* anonymous_var_nameX240, const int* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
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
char* initstate(unsigned int anonymous_var_nameX263, char* anonymous_var_nameX264, unsigned long  int anonymous_var_nameX265);
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
int ptsname_r(int fildes, char* buffer, unsigned long  int buflen);
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
void arc4random_buf(void* __buf, unsigned long  int __nbytes);
void arc4random_stir();
unsigned int arc4random_uniform(unsigned int __upper_bound);
int atexit_b(void (*anonymous_lambda_var_nameZ8)());
void* bsearch_b(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
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
int heapsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int heapsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void psort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX334, int (*__compar)(void*,const void*,const void*));
void qsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void qsort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX340, int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* anonymous_var_nameX344);
int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
void sranddev();
void srandomdev();
long long strtonum(const char* __numstr, long  long __minval, long  long __maxval, const char** __errstrp);
long long strtoq(const char* __str, char** __endptr, int __base);
unsigned long  long strtouq(const char* __str, char** __endptr, int __base);
void* memchr(const void* __s, int __c, unsigned long  int __n);
int memcmp(const void* __s1, const void* __s2, unsigned long  int __n);
void* memcpy(void* __dst, const void* __src, unsigned long  int __n);
void* memmove(void* __dst, const void* __src, unsigned long  int __len);
void* memset(void* __b, int __c, unsigned long  int __len);
char* strcat(char* __s1, const char* __s2);
char* strchr(const char* __s, int __c);
int strcmp(const char* __s1, const char* __s2);
int strcoll(const char* __s1, const char* __s2);
char* strcpy(char* __dst, const char* __src);
unsigned long  int strcspn(const char* __s, const char* __charset);
char* strerror(int __errnum);
unsigned long  int strlen(const char* __s);
char* strncat(char* __s1, const char* __s2, unsigned long  int __n);
int strncmp(const char* __s1, const char* __s2, unsigned long  int __n);
char* strncpy(char* __dst, const char* __src, unsigned long  int __n);
char* strpbrk(const char* __s, const char* __charset);
char* strrchr(const char* __s, int __c);
unsigned long  int strspn(const char* __s, const char* __charset);
char* strstr(const char* __big, const char* __little);
char* strtok(char* __str, const char* __sep);
unsigned long  int strxfrm(char* __s1, const char* __s2, unsigned long  int __n);
char* strtok_r(char* __str, const char* __sep, char** __lasts);
int strerror_r(int __errnum, char* __strerrbuf, unsigned long  int __buflen);
char* strdup(const char* __s1);
void* memccpy(void* __dst, const void* __src, int __c, unsigned long  int __n);
char* stpcpy(char* __dst, const char* __src);
char* stpncpy(char* __dst, const char* __src, unsigned long  int __n);
char* strndup(const char* __s1, unsigned long  int __n);
unsigned long  int strnlen(const char* __s1, unsigned long  int __n);
char* strsignal(int __sig);
int memset_s(void* __s, unsigned long  int __smax, int __c, unsigned long  int __n);
void* memmem(const void* __big, unsigned long  int __big_len, const void* __little, unsigned long  int __little_len);
void memset_pattern4(void* __b, const void* __pattern4, unsigned long  int __len);
void memset_pattern8(void* __b, const void* __pattern8, unsigned long  int __len);
void memset_pattern16(void* __b, const void* __pattern16, unsigned long  int __len);
char* strcasestr(const char* __big, const char* __little);
char* strnstr(const char* __big, const char* __little, unsigned long  int __len);
unsigned long  int strlcat(char* __dst, const char* __source, unsigned long  int __size);
unsigned long  int strlcpy(char* __dst, const char* __source, unsigned long  int __size);
void strmode(int __mode, char* __bp);
char* strsep(char** __stringp, const char* __delim);
void swab(const void* anonymous_var_nameX345, void* anonymous_var_nameX346, long anonymous_var_nameX347);
int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int __len);
int strsignal_r(int __sig, char* __strsignalbuf, unsigned long  int __buflen);
int bcmp(const void* anonymous_var_nameX348, const void* anonymous_var_nameX349, unsigned long  int anonymous_var_nameX350);
void bcopy(const void* anonymous_var_nameX351, void* anonymous_var_nameX352, unsigned long  int anonymous_var_nameX353);
void bzero(void* anonymous_var_nameX354, unsigned long  int anonymous_var_nameX355);
char* index(const char* anonymous_var_nameX356, int anonymous_var_nameX357);
char* rindex(const char* anonymous_var_nameX358, int anonymous_var_nameX359);
int ffs(int anonymous_var_nameX360);
int strcasecmp(const char* anonymous_var_nameX361, const char* anonymous_var_nameX362);
int strncasecmp(const char* anonymous_var_nameX363, const char* anonymous_var_nameX364, unsigned long  int anonymous_var_nameX365);
int ffsl(long anonymous_var_nameX366);
int ffsll(long  long anonymous_var_nameX367);
int fls(int anonymous_var_nameX368);
int flsl(long anonymous_var_nameX369);
int flsll(long  long anonymous_var_nameX370);
struct lconv* localeconv();
char* setlocale(int anonymous_var_nameX371, const char* anonymous_var_nameX372);
int* __error();
static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short item);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values);
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
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
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
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
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
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
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
unsigned int GC_get_version();
unsigned long  int GC_get_gc_no();
void GC_set_oom_fn(void* (*anonymous_var_nameX413)(unsigned long  int));
void* (*GC_get_oom_fn())(unsigned long  int);
void GC_set_on_heap_resize(void (*anonymous_var_nameX415)(unsigned long  int));
void (*GC_get_on_heap_resize())(unsigned long  int);
void GC_set_on_collection_event(void (*anonymous_var_nameX417)(enum anonymous_typeY8));
void (*GC_get_on_collection_event())(enum anonymous_typeY8);
void GC_set_find_leak(int anonymous_var_nameX418);
int GC_get_find_leak();
void GC_set_all_interior_pointers(int anonymous_var_nameX419);
int GC_get_all_interior_pointers();
void GC_set_finalize_on_demand(int anonymous_var_nameX420);
int GC_get_finalize_on_demand();
void GC_set_java_finalization(int anonymous_var_nameX421);
int GC_get_java_finalization();
void GC_set_finalizer_notifier(void (*anonymous_var_nameX422)());
void (*GC_get_finalizer_notifier())();
void GC_set_dont_expand(int anonymous_var_nameX423);
int GC_get_dont_expand();
void GC_set_full_freq(int anonymous_var_nameX424);
int GC_get_full_freq();
void GC_set_non_gc_bytes(unsigned long  int anonymous_var_nameX425);
unsigned long  int GC_get_non_gc_bytes();
void GC_set_no_dls(int anonymous_var_nameX426);
int GC_get_no_dls();
void GC_set_free_space_divisor(unsigned long  int anonymous_var_nameX427);
unsigned long  int GC_get_free_space_divisor();
void GC_set_max_retries(unsigned long  int anonymous_var_nameX428);
unsigned long  int GC_get_max_retries();
void GC_set_dont_precollect(int anonymous_var_nameX429);
int GC_get_dont_precollect();
void GC_set_time_limit(unsigned long  int anonymous_var_nameX430);
unsigned long  int GC_get_time_limit();
void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX431);
struct GC_timeval_s GC_get_time_limit_tv();
void GC_set_allocd_bytes_per_finalizer(unsigned long  int anonymous_var_nameX432);
unsigned long  int GC_get_allocd_bytes_per_finalizer();
void GC_start_performance_measurement();
unsigned long  int GC_get_full_gc_total_time();
void GC_set_pages_executable(int anonymous_var_nameX433);
int GC_get_pages_executable();
void GC_set_min_bytes_allocd(unsigned long  int anonymous_var_nameX434);
unsigned long  int GC_get_min_bytes_allocd();
void GC_set_rate(int anonymous_var_nameX435);
int GC_get_rate();
void GC_set_max_prior_attempts(int anonymous_var_nameX436);
int GC_get_max_prior_attempts();
void GC_set_disable_automatic_collection(int anonymous_var_nameX437);
int GC_get_disable_automatic_collection();
void GC_set_handle_fork(int anonymous_var_nameX438);
void GC_atfork_prepare();
void GC_atfork_parent();
void GC_atfork_child();
void GC_init();
int GC_is_init_called();
void GC_deinit();
void* GC_malloc(unsigned long  int anonymous_var_nameX439);
void* GC_malloc_atomic(unsigned long  int anonymous_var_nameX440);
char* GC_strdup(const char* anonymous_var_nameX441);
char* GC_strndup(const char* anonymous_var_nameX442, unsigned long  int anonymous_var_nameX443);
void* GC_malloc_uncollectable(unsigned long  int anonymous_var_nameX444);
void* GC_malloc_stubborn(unsigned long  int anonymous_var_nameX445);
void* GC_memalign(unsigned long  int anonymous_var_nameX446, unsigned long  int anonymous_var_nameX447);
int GC_posix_memalign(void** anonymous_var_nameX448, unsigned long  int anonymous_var_nameX449, unsigned long  int anonymous_var_nameX450);
void GC_free(void* anonymous_var_nameX451);
void GC_change_stubborn(const void* anonymous_var_nameX452);
void GC_end_stubborn_change(const void* anonymous_var_nameX453);
void* GC_base(void* anonymous_var_nameX454);
int GC_is_heap_ptr(const void* anonymous_var_nameX455);
unsigned long  int GC_size(const void* anonymous_var_nameX456);
void* GC_realloc(void* anonymous_var_nameX457, unsigned long  int anonymous_var_nameX458);
int GC_expand_hp(unsigned long  int anonymous_var_nameX459);
void GC_set_max_heap_size(unsigned long  int anonymous_var_nameX460);
void GC_exclude_static_roots(void* anonymous_var_nameX461, void* anonymous_var_nameX462);
void GC_clear_exclusion_table();
void GC_clear_roots();
void GC_add_roots(void* anonymous_var_nameX463, void* anonymous_var_nameX464);
void GC_remove_roots(void* anonymous_var_nameX465, void* anonymous_var_nameX466);
void GC_register_displacement(unsigned long  int anonymous_var_nameX467);
void GC_debug_register_displacement(unsigned long  int anonymous_var_nameX468);
void GC_gcollect();
void GC_gcollect_and_unmap();
int GC_try_to_collect(int (*anonymous_var_nameX469)());
void GC_set_stop_func(int (*anonymous_var_nameX470)());
int (*GC_get_stop_func())();
unsigned long  int GC_get_heap_size();
unsigned long  int GC_get_free_bytes();
unsigned long  int GC_get_unmapped_bytes();
unsigned long  int GC_get_bytes_since_gc();
unsigned long  int GC_get_expl_freed_bytes_since_gc();
unsigned long  int GC_get_total_bytes();
unsigned long  int GC_get_obtained_from_os_bytes();
void GC_get_heap_usage_safe(unsigned long  int* anonymous_var_nameX471, unsigned long  int* anonymous_var_nameX472, unsigned long  int* anonymous_var_nameX473, unsigned long  int* anonymous_var_nameX474, unsigned long  int* anonymous_var_nameX475);
unsigned long  int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX476, unsigned long  int anonymous_var_nameX477);
unsigned long  int GC_get_size_map_at(int i);
unsigned long  int GC_get_memory_use();
void GC_disable();
int GC_is_disabled();
void GC_enable();
void GC_set_manual_vdb_allowed(int anonymous_var_nameX478);
int GC_get_manual_vdb_allowed();
void GC_enable_incremental();
int GC_is_incremental_mode();
int GC_incremental_protection_needs();
void GC_start_incremental_collection();
int GC_collect_a_little();
void* GC_malloc_ignore_off_page(unsigned long  int anonymous_var_nameX479);
void* GC_malloc_atomic_ignore_off_page(unsigned long  int anonymous_var_nameX480);
void* GC_malloc_atomic_uncollectable(unsigned long  int anonymous_var_nameX481);
void* GC_debug_malloc_atomic_uncollectable(unsigned long  int anonymous_var_nameX482, const char* s, int i);
void* GC_debug_malloc(unsigned long  int anonymous_var_nameX483, const char* s, int i);
void* GC_debug_malloc_atomic(unsigned long  int anonymous_var_nameX484, const char* s, int i);
char* GC_debug_strdup(const char* anonymous_var_nameX485, const char* s, int i);
char* GC_debug_strndup(const char* anonymous_var_nameX486, unsigned long  int anonymous_var_nameX487, const char* s, int i);
void* GC_debug_malloc_uncollectable(unsigned long  int anonymous_var_nameX488, const char* s, int i);
void* GC_debug_malloc_stubborn(unsigned long  int anonymous_var_nameX489, const char* s, int i);
void* GC_debug_malloc_ignore_off_page(unsigned long  int anonymous_var_nameX490, const char* s, int i);
void* GC_debug_malloc_atomic_ignore_off_page(unsigned long  int anonymous_var_nameX491, const char* s, int i);
void GC_debug_free(void* anonymous_var_nameX492);
void* GC_debug_realloc(void* anonymous_var_nameX493, unsigned long  int anonymous_var_nameX494, const char* s, int i);
void GC_debug_change_stubborn(const void* anonymous_var_nameX495);
void GC_debug_end_stubborn_change(const void* anonymous_var_nameX496);
void* GC_debug_malloc_replacement(unsigned long  int anonymous_var_nameX497);
void* GC_debug_realloc_replacement(void* anonymous_var_nameX498, unsigned long  int anonymous_var_nameX499);
void GC_register_finalizer(void* anonymous_var_nameX502, void (*anonymous_var_nameX503)(void*,void*), void* anonymous_var_nameX504, void (*anonymous_var_nameX505)(void*,void*), void** anonymous_var_nameX506);
void GC_debug_register_finalizer(void* anonymous_var_nameX507, void (*anonymous_var_nameX508)(void*,void*), void* anonymous_var_nameX509, void (*anonymous_var_nameX510)(void*,void*), void** anonymous_var_nameX511);
void GC_register_finalizer_ignore_self(void* anonymous_var_nameX512, void (*anonymous_var_nameX513)(void*,void*), void* anonymous_var_nameX514, void (*anonymous_var_nameX515)(void*,void*), void** anonymous_var_nameX516);
void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX517, void (*anonymous_var_nameX518)(void*,void*), void* anonymous_var_nameX519, void (*anonymous_var_nameX520)(void*,void*), void** anonymous_var_nameX521);
void GC_register_finalizer_no_order(void* anonymous_var_nameX522, void (*anonymous_var_nameX523)(void*,void*), void* anonymous_var_nameX524, void (*anonymous_var_nameX525)(void*,void*), void** anonymous_var_nameX526);
void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX527, void (*anonymous_var_nameX528)(void*,void*), void* anonymous_var_nameX529, void (*anonymous_var_nameX530)(void*,void*), void** anonymous_var_nameX531);
void GC_register_finalizer_unreachable(void* anonymous_var_nameX532, void (*anonymous_var_nameX533)(void*,void*), void* anonymous_var_nameX534, void (*anonymous_var_nameX535)(void*,void*), void** anonymous_var_nameX536);
void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX537, void (*anonymous_var_nameX538)(void*,void*), void* anonymous_var_nameX539, void (*anonymous_var_nameX540)(void*,void*), void** anonymous_var_nameX541);
int GC_register_disappearing_link(void** anonymous_var_nameX542);
int GC_general_register_disappearing_link(void** anonymous_var_nameX543, const void* anonymous_var_nameX544);
int GC_move_disappearing_link(void** anonymous_var_nameX545, void** anonymous_var_nameX546);
int GC_unregister_disappearing_link(void** anonymous_var_nameX547);
int GC_register_long_link(void** anonymous_var_nameX548, const void* anonymous_var_nameX549);
int GC_move_long_link(void** anonymous_var_nameX550, void** anonymous_var_nameX551);
int GC_unregister_long_link(void** anonymous_var_nameX552);
void GC_set_toggleref_func(enum anonymous_typeY9 (*anonymous_var_nameX554)(void*));
enum anonymous_typeY9 (*GC_get_toggleref_func())(void*);
int GC_toggleref_add(void* anonymous_var_nameX555, int anonymous_var_nameX556);
void GC_set_await_finalize_proc(void (*anonymous_var_nameX558)(void*));
void (*GC_get_await_finalize_proc())(void*);
int GC_should_invoke_finalizers();
int GC_invoke_finalizers();
void GC_noop1(unsigned long  int anonymous_var_nameX559);
void GC_set_warn_proc(void (*anonymous_var_nameX562)(char*,unsigned long  int));
void (*GC_get_warn_proc())(char*,unsigned long  int);
void GC_ignore_warn_proc(char* anonymous_var_nameX563, unsigned long  int anonymous_var_nameX564);
void GC_set_log_fd(int anonymous_var_nameX565);
void GC_set_abort_func(void (*anonymous_var_nameX567)(const char*));
void (*GC_get_abort_func())(const char*);
void GC_abort_on_oom();
void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX569)(void*), void* anonymous_var_nameX570);
void* GC_call_with_stack_base(void* (*anonymous_var_nameX573)(struct GC_stack_base*,void*), void* anonymous_var_nameX574);
void GC_start_mark_threads();
void* GC_do_blocking(void* (*anonymous_var_nameX575)(void*), void* anonymous_var_nameX576);
void* GC_call_with_gc_active(void* (*anonymous_var_nameX577)(void*), void* anonymous_var_nameX578);
int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX579);
void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX580);
void GC_set_stackbottom(void* anonymous_var_nameX581, const struct GC_stack_base* anonymous_var_nameX582);
void* GC_same_obj(void* anonymous_var_nameX583, void* anonymous_var_nameX584);
void* GC_pre_incr(void** anonymous_var_nameX585, long  int anonymous_var_nameX586);
void* GC_post_incr(void** anonymous_var_nameX587, long  int anonymous_var_nameX588);
void* GC_is_visible(void* anonymous_var_nameX589);
void* GC_is_valid_displacement(void* anonymous_var_nameX590);
void GC_dump();
void GC_dump_named(const char* anonymous_var_nameX591);
void GC_dump_regions();
void GC_dump_finalization();
void GC_ptr_store_and_dirty(void* anonymous_var_nameX592, const void* anonymous_var_nameX593);
void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX594, const void* anonymous_var_nameX595);
void* GC_malloc_many(unsigned long  int anonymous_var_nameX616);
void GC_register_has_static_roots_callback(int (*anonymous_var_nameX620)(const char*,void*,unsigned long  int));
void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX621);
int GC_get_force_unmap_on_gcollect();
void GC_win32_free_heap();
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
static void* alloc_from_pages(unsigned long  int size);
static void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
static void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
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
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* mem);
struct buffer* buffer_append_format(struct buffer* self, char* msg, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* string_to_buffer(char* self);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
_Bool bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
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
_Bool string_equals(char* self, char* right);
_Bool charp_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(char* self, char* right);
_Bool voidp_operator_not_equals(char* self, char* right);
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
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(unsigned long  int self);
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
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);
char* xbasename(char* path);
char* xnoextname(char* path);
char* xextname(char* path);
char* bool_to_string(_Bool self);
char* char_to_string(char self);
char* short_to_string(short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int left, unsigned long  int right);
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
int assert_v2(int exp);
struct integer* integer_initialize(struct integer* self, long value);
int integer_to_int(struct integer* self);
struct integer* bool_to_integer(long self);
struct integer* char_to_integer(long self);
struct integer* short_to_integer(long self);
struct integer* int_to_integer(long self);
struct integer* long_to_integer(long self);
int integer_compare(struct integer* left, struct integer* right);
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
char* integer_to_string(struct integer* self);
struct floating* floating_initialize(struct floating* self, double value);
double floating_to_double(struct floating* self);
int floating_compare(struct floating* left, struct floating* right);
struct floating* float_to_floating(float self);
struct floating* double_to_floating(double self);
_Bool floating_equals(struct floating* self, struct floating* right);
_Bool floating_operator_equals(struct floating* self, struct floating* right);
_Bool floating_operator_not_equals(struct floating* self, struct floating* right);
int floating_operator_add(struct floating* left, struct floating* right);
int floating_operator_sub(struct floating* left, struct floating* right);
int floating_operator_mult(struct floating* left, struct floating* right);
int floating_operator_div(struct floating* left, struct floating* right);
int floating_operator_gteq(struct floating* left, struct floating* right);
int floating_operator_lteq(struct floating* left, struct floating* right);
int floating_operator_lt(struct floating* left, struct floating* right);
int floating_operator_gt(struct floating* left, struct floating* right);
char* floating_to_string(struct floating* self);
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
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2424, "buffer"));
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_0;
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result2__;
    result_1=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2431, "buffer"));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_1;
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_3;
struct buffer* __result3__;
    result_3=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2440, "buffer"));
    buffer_append(result_3,(char*)self,sizeof(short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_3;
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_4;
struct buffer* __result4__;
    result_4=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2447, "buffer"));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_4;
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_5;
struct buffer* __result5__;
    result_5=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2454, "buffer"));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_5;
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_6;
struct buffer* __result6__;
    result_6=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2461, "buffer"));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_6;
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_7;
struct buffer* __result7__;
    result_7=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2468, "buffer"));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_7;
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result9__;
    __result9__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2768, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result9__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2773, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2778, "smart_pointer$1short"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result12__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result14__;
    __result14__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2783, "smart_pointer$1int"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result14__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result16__;
    __result16__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2788, "smart_pointer$1long"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_8;
struct smart_pointer$1char* __result17__;
    buf_8=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2821, "buffer"));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2823, "smart_pointer$1char"),buf_8);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_9;
struct smart_pointer$1charp* __result19__;
    buf_9=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2828, "buffer"));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 2830, "smart_pointer$1charp"),buf_9);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_10;
struct smart_pointer$1short* __result20__;
    buf_10=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2835, "buffer"));
    buffer_append(buf_10,(char*)self,sizeof(short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2837, "smart_pointer$1short"),buf_10);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_11;
struct smart_pointer$1int* __result21__;
    buf_11=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2842, "buffer"));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2844, "smart_pointer$1int"),buf_11);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_12;
struct smart_pointer$1long* __result22__;
    buf_12=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2849, "buffer"));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2851, "smart_pointer$1long"),buf_12);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_13;
struct smart_pointer$1float* __result24__;
    buf_13=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2856, "buffer"));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 2858, "smart_pointer$1float"),buf_13);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_14;
struct smart_pointer$1double* __result26__;
    buf_14=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2863, "buffer"));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 2865, "smart_pointer$1double"),buf_14);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = list$1char_initialize_with_values((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 2870, "list$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = list$1charp_initialize_with_values((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2875, "list$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = list$1short_initialize_with_values((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 2880, "list$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = list$1int_initialize_with_values((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 2885, "list$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = list$1long_initialize_with_values((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 2890, "list$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = list$1float_initialize_with_values((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 2895, "list$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = list$1double_initialize_with_values((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 2900, "list$1double"),len,self);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = vector$1char_initialize_with_values((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 2905, "vector$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = vector$1charp_initialize_with_values((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 2910, "vector$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = vector$1short_initialize_with_values((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 2915, "vector$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = vector$1int_initialize_with_values((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 2920, "vector$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = vector$1long_initialize_with_values((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 2925, "vector$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = vector$1float_initialize_with_values((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 2930, "vector$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = vector$1double_initialize_with_values((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 2935, "vector$1double"),len,self);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_43;
int i_44;
    result_43=(_Bool)0;
    for(    i_44=0;    i_44<len;    i_44++    ){
        if(        strncmp(self[i_44],str,strlen(self[i_44]))==0) {
            result_43=(_Bool)1;
            break;
        }
    }
    return result_43;
}
static inline unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

// body function









static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result8__;
    self->memory=value;
    self->p=(char*)value->buf;
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result8__;
}



static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result11__;
    self->memory=value;
    self->p=(short*)value->buf;
    __result11__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result11__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result13__;
    self->memory=value;
    self->p=(int*)value->buf;
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result13__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result15__;
    self->memory=value;
    self->p=(long*)value->buf;
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result15__;
}



static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1charp* __result18__;
    self->memory=value;
    self->p=(char**)value->buf;
    __result18__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result18__;
}





static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1float* __result23__;
    self->memory=value;
    self->p=(float*)value->buf;
    __result23__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result23__;
}


static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1double* __result25__;
    self->memory=value;
    self->p=(double*)value->buf;
    __result25__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result25__;
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
    gComeFunResultObject = (void*)0;
    return __result28__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
struct list_item$1char* litem_16;
struct list_item$1char* litem_17;
struct list_item$1char* litem_18;
struct list$1char* __result27__;
    if(    self->len==0) {
        litem_16=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 227, "list_item$1char");
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 237, "list_item$1char");
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 247, "list_item$1char");
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


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_19;
struct list$1charp* __result31__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_19=0;    i_19<num_value;    i_19++    ){
        list$1charp_push_back(self,values[i_19]);
    }
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result31__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
struct list_item$1charp* litem_20;
struct list_item$1charp* litem_21;
struct list_item$1charp* litem_22;
struct list$1charp* __result30__;
    if(    self->len==0) {
        litem_20=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 227, "list_item$1charp");
        litem_20->prev=((void*)0);
        litem_20->next=((void*)0);
        litem_20->item=item;
        self->tail=litem_20;
        self->head=litem_20;
    }
    else if(    self->len==1) {
        litem_21=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 237, "list_item$1charp");
        litem_21->prev=self->head;
        litem_21->next=((void*)0);
        litem_21->item=item;
        self->tail=litem_21;
        self->head->next=litem_21;
    }
    else {
        litem_22=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 247, "list_item$1charp");
        litem_22->prev=self->tail;
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail->next=litem_22;
        self->tail=litem_22;
    }
    self->len++;
    __result30__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result30__;
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_23;
struct list$1short* __result34__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_23=0;    i_23<num_value;    i_23++    ){
        list$1short_push_back(self,values[i_23]);
    }
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result34__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
struct list_item$1short* litem_24;
struct list_item$1short* litem_25;
struct list_item$1short* litem_26;
struct list$1short* __result33__;
    if(    self->len==0) {
        litem_24=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 227, "list_item$1short");
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail=litem_24;
        self->head=litem_24;
    }
    else if(    self->len==1) {
        litem_25=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 237, "list_item$1short");
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        litem_25->item=item;
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 247, "list_item$1short");
        litem_26->prev=self->tail;
        litem_26->next=((void*)0);
        litem_26->item=item;
        self->tail->next=litem_26;
        self->tail=litem_26;
    }
    self->len++;
    __result33__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result33__;
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_27;
struct list$1int* __result37__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1int_push_back(self,values[i_27]);
    }
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result37__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
struct list_item$1int* litem_28;
struct list_item$1int* litem_29;
struct list_item$1int* litem_30;
struct list$1int* __result36__;
    if(    self->len==0) {
        litem_28=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 227, "list_item$1int");
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 237, "list_item$1int");
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 247, "list_item$1int");
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result36__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result36__;
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_31;
struct list$1long* __result40__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_31=0;    i_31<num_value;    i_31++    ){
        list$1long_push_back(self,values[i_31]);
    }
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result40__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
struct list_item$1long* litem_32;
struct list_item$1long* litem_33;
struct list_item$1long* litem_34;
struct list$1long* __result39__;
    if(    self->len==0) {
        litem_32=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 227, "list_item$1long");
        litem_32->prev=((void*)0);
        litem_32->next=((void*)0);
        litem_32->item=item;
        self->tail=litem_32;
        self->head=litem_32;
    }
    else if(    self->len==1) {
        litem_33=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 237, "list_item$1long");
        litem_33->prev=self->head;
        litem_33->next=((void*)0);
        litem_33->item=item;
        self->tail=litem_33;
        self->head->next=litem_33;
    }
    else {
        litem_34=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 247, "list_item$1long");
        litem_34->prev=self->tail;
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail->next=litem_34;
        self->tail=litem_34;
    }
    self->len++;
    __result39__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result39__;
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_35;
struct list$1float* __result43__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_35=0;    i_35<num_value;    i_35++    ){
        list$1float_push_back(self,values[i_35]);
    }
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result43__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
struct list_item$1float* litem_36;
struct list_item$1float* litem_37;
struct list_item$1float* litem_38;
struct list$1float* __result42__;
    if(    self->len==0) {
        litem_36=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 227, "list_item$1float");
        litem_36->prev=((void*)0);
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail=litem_36;
        self->head=litem_36;
    }
    else if(    self->len==1) {
        litem_37=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 237, "list_item$1float");
        litem_37->prev=self->head;
        litem_37->next=((void*)0);
        litem_37->item=item;
        self->tail=litem_37;
        self->head->next=litem_37;
    }
    else {
        litem_38=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 247, "list_item$1float");
        litem_38->prev=self->tail;
        litem_38->next=((void*)0);
        litem_38->item=item;
        self->tail->next=litem_38;
        self->tail=litem_38;
    }
    self->len++;
    __result42__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result42__;
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_39;
struct list$1double* __result46__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_39=0;    i_39<num_value;    i_39++    ){
        list$1double_push_back(self,values[i_39]);
    }
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result46__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
struct list_item$1double* litem_40;
struct list_item$1double* litem_41;
struct list_item$1double* litem_42;
struct list$1double* __result45__;
    if(    self->len==0) {
        litem_40=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 227, "list_item$1double");
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 237, "list_item$1double");
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 247, "list_item$1double");
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result45__;
}


static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
struct vector$1char* __result48__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 1021, "char");
    memcpy(self->items,values,sizeof(char)*self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result48__;
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
struct vector$1charp* __result50__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 1021, "char*");
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result50__;
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
struct vector$1short* __result52__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 1021, "short");
    memcpy(self->items,values,sizeof(short)*self->len);
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result52__;
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
struct vector$1int* __result54__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 1021, "int");
    memcpy(self->items,values,sizeof(int)*self->len);
    __result54__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result54__;
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
struct vector$1long* __result56__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 1021, "long");
    memcpy(self->items,values,sizeof(long)*self->len);
    __result56__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result56__;
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
struct vector$1float* __result58__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 1021, "float");
    memcpy(self->items,values,sizeof(float)*self->len);
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result58__;
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
struct vector$1double* __result60__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 1021, "double");
    memcpy(self->items,values,sizeof(double)*self->len);
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result60__;
}











void come_push_stackframe(char* sname, int sline, int id){
    if(    gNumComeStackFrame<128) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(    gNumComeStackFrame>0) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
struct buffer* buf_45;
int i_46;
    buf_45=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 49, "buffer"));
    buffer_append_format(buf_45,"%s %d\n",sname,sline);
    for(    i_46=gNumComeStackFrame-2;    i_46>=0;    i_46--    ){
        buffer_append_format(buf_45,"%s %d #%d\n",gComeStackFrameSName[i_46],gComeStackFrameSLine[i_46],gComeStackFrameID[i_46]);
    }
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(buffer_to_string(buf_45));
}

void stackframe(){
int i_47;
    for(    i_47=gNumComeStackFrame-1;    i_47>=0;    i_47--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_47],gComeStackFrameSLine[i_47],gComeStackFrameID[i_47]);
    }
}

char* come_get_stackframe(){
void* __result_obj__=(void*)0;
char* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = __builtin_string(gComeStackFrameBuffer);
    gComeFunResultObject = (void*)0;
    return __result65__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__=(void*)0;
void* __result66__;
    if(    mem==((void*)0)) {
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
    if(    mem==((void*)0)) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(    mem<begin) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(    mem>=end) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result67__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result67__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
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
    if(    self<0) {
        block(parent);
    }
    return self;
}

int int_expect(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
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
    if(    self<0) {
        block(parent);
    }
    return self;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(    !test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_48;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    if(    gComeGCLib) {
        GC_init();
        GC_set_warn_proc(GC_ignore_warn_proc);
        GC_enable_incremental();
    }
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_48=0;    i_48<gHeapPages.mSizePages;    i_48++    ){
        gHeapPages.mPages[i_48]=calloc(1,sizeof(char)*2048*2);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*2048*2);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_49;
int n_50;
_Bool flag_51;
int i_52;
struct sMemHeaderTiny* it_53;
int n_54;
int i_55;
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib) {
    }
    else if(    gComeDebugLib) {
        it_49=gAllocMem;
        n_50=0;
        while(it_49) {
            n_50++;
            flag_51=(_Bool)0;
            printf("#%d ",n_50);
            if(            it_49->class_name) {
                printf("%p (%s): ",(char*)it_49+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_49->class_name);
            }
            for(            i_52=0;            i_52<16;            i_52++            ){
                if(                it_49->sname[i_52]) {
                    printf("%s %d #%d, ",it_49->sname[i_52],it_49->sline[i_52],it_49->id[i_52]);
                    flag_51=(_Bool)1;
                }
            }
            if(            flag_51) {
                puts("");
            }
            it_49=it_49->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_50,gNumAlloc,gNumFree);
    }
    else {
        it_53=(struct sMemHeaderTiny*)gAllocMem;
        n_54=0;
        while(it_53) {
            n_54++;
            it_53=it_53->next;
        }
        if(        n_54>0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_54,gNumAlloc,gNumFree);
        }
    }
    for(    i_55=0;    i_55<gHeapPages.mSizePages;    i_55++    ){
        free(gHeapPages.mPages[i_55]);
    }
    free(gHeapPages.mPages);
}

static void* alloc_from_pages(unsigned long  int size){
void* __result_obj__=(void*)0;
void* result_56;
unsigned long  int free_area_57;
int new_size_pages_58;
void** new_pages_59;
int i_60;
void* __result68__;
    result_56=((void*)0);
    if(    size<2048*2) {
        if(        gHeapPages.mFreeMem[size]) {
            result_56=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_56,0,size);
        }
        if(        result_56==((void*)0)) {
            free_area_57=gHeapPages.mPages[gHeapPages.mCurrentPages]+2048*2-gHeapPages.mTop;
            if(            size>=free_area_57) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages) {
                    new_size_pages_58=gHeapPages.mSizePages*2;
                    new_pages_59=calloc(1,sizeof(char*)*new_size_pages_58);
                    i_60=0;
                    for(                    ;                    i_60<gHeapPages.mSizePages;                    i_60++                    ){
                        new_pages_59[i_60]=gHeapPages.mPages[i_60];
                    }
                    for(                    ;                    i_60<new_size_pages_58;                    i_60++                    ){
                        new_pages_59[i_60]=calloc(1,sizeof(char)*2048*2);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_59;
                    gHeapPages.mSizePages=new_size_pages_58;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_56=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_56=calloc(1,size);
    }
    __result68__ = gComeFunResultObject = __result_obj__ = result_56;
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* result_61;
struct sMemHeader* it_62;
void* __result69__;
void* result_63;
struct sMemHeaderTiny* it_64;
void* __result70__;
    if(    gComeDebugLib) {
        result_61=GC_malloc(size+sizeof(struct sMemHeader));
        memset(result_61,0,size+sizeof(struct sMemHeader));
        it_62=result_61;
        it_62->allocated=177783;
        it_62->size=size+sizeof(struct sMemHeader);
        it_62->free_next=((void*)0);
        come_push_stackframe(sname,sline,0);
        if(        gNumComeStackFrame<16) {
            memcpy(it_62->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_62->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_62->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_62->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_62->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_62->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_62->next=gAllocMem;
        it_62->prev=((void*)0);
        if(        class_name) {
            it_62->class_name=strdup(class_name);
        }
        else {
            it_62->class_name=((void*)0);
        }
        if(        gAllocMem) {
            gAllocMem->prev=it_62;
        }
        gAllocMem=it_62;
        gNumAlloc++;
        __result69__ = gComeFunResultObject = __result_obj__ = (char*)result_61+sizeof(struct sMemHeader);
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    else {
        result_63=GC_malloc(size+sizeof(struct sMemHeaderTiny));
        memset(result_63,0,size+sizeof(struct sMemHeaderTiny));
        it_64=result_63;
        it_64->allocated=177783;
        it_64->size=size+sizeof(struct sMemHeaderTiny);
        it_64->free_next=((void*)0);
        it_64->next=(struct sMemHeaderTiny*)gAllocMem;
        it_64->prev=((void*)0);
        if(        gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_64;
        }
        gAllocMem=(struct sMemHeader*)it_64;
        gNumAlloc++;
        __result70__ = gComeFunResultObject = __result_obj__ = (char*)result_63+sizeof(struct sMemHeaderTiny);
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
}

static void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_65;
struct sMemHeader* prev_it_66;
struct sMemHeader* next_it_67;
unsigned long  int size_68;
struct sMemHeaderTiny* it_69;
struct sMemHeaderTiny* prev_it_70;
struct sMemHeaderTiny* next_it_71;
unsigned long  int size_72;
    if(    mem) {
        if(        gComeGCLib) {
        }
        else if(        gComeDebugLib) {
            it_65=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_65->allocated!=177783) {
                return;
            }
            it_65->allocated=0;
            prev_it_66=it_65->prev;
            next_it_67=it_65->next;
            if(            it_65->class_name) {
                free(it_65->class_name);
            }
            if(            gAllocMem==it_65) {
                gAllocMem=next_it_67;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_66) {
                    prev_it_66->next=next_it_67;
                }
                if(                next_it_67) {
                    next_it_67->prev=prev_it_66;
                }
            }
            size_68=it_65->size;
            if(            size_68<2048*2) {
                if(                gHeapPages.mFreeMem[size_68]==((void*)0)) {
                    it_65->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_68]=(struct sMemHeaderTiny*)it_65;
                }
                else {
                    it_65->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_68];
                    gHeapPages.mFreeMem[size_68]=(struct sMemHeaderTiny*)it_65;
                }
            }
            else {
                free(it_65);
            }
            gNumFree++;
        }
        else {
            it_69=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_69->allocated!=177783) {
                return;
            }
            it_69->allocated=0;
            prev_it_70=it_69->prev;
            next_it_71=it_69->next;
            if(            gAllocMem==it_69) {
                gAllocMem=(struct sMemHeader*)next_it_71;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_70) {
                    prev_it_70->next=next_it_71;
                }
                if(                next_it_71) {
                    next_it_71->prev=prev_it_70;
                }
            }
            size_72=it_69->size;
            if(            size_72<2048*2) {
                if(                gHeapPages.mFreeMem[size_72]==((void*)0)) {
                    it_69->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_72]=it_69;
                }
                else {
                    it_69->free_next=gHeapPages.mFreeMem[size_72];
                    gHeapPages.mFreeMem[size_72]=it_69;
                }
            }
            else {
                free(it_69);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_73;
char* __result71__;
    it_73=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
    if(    it_73->allocated!=177783) {
        printf("invalid heap object(%p)\n",it_73);
        exit(2);
    }
    __result71__ = gComeFunResultObject = __result_obj__ = it_73->class_name;
    gComeFunResultObject = (void*)0;
    return __result71__;
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
char* mem_74;
unsigned long  int* ref_count_75;
unsigned long  int* size2_76;
void* __result72__;
    mem_74=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name);
    ref_count_75=(unsigned long  int*)mem_74;
    *ref_count_75=0;
    size2_76=(unsigned long  int*)(mem_74+sizeof(unsigned long  int));
    *size2_76=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result72__ = gComeFunResultObject = __result_obj__ = mem_74+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    gComeFunResultObject = (void*)0;
    return __result72__;
}

void come_free_object(void* mem){
unsigned long  int* ref_count_77;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_77=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_77);
}

void come_free(void* mem){
unsigned long  int* ref_count_78;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_78=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_78);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* __result73__;
char* mem_79;
unsigned long  int* size_p_80;
unsigned long  int size_81;
void* result_82;
void* __result74__;
    if(    !block) {
        __result73__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result73__;
    }
    mem_79=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_80=(unsigned long  int*)(mem_79+sizeof(unsigned long  int));
    size_81=*size_p_80-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_82=come_calloc(1,size_81,sname,sline,class_name);
    memcpy(result_82,block,size_81);
    __result74__ = gComeFunResultObject = __result_obj__ = result_82;
    gComeFunResultObject = (void*)0;
    return __result74__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result75__;
unsigned long  int* ref_count_83;
void* __result76__;
    if(    mem==((void*)0)) {
        __result75__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result75__;
    }
    ref_count_83=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_83)++;
    __result76__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result76__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result77__;
unsigned long  int* ref_count_84;
void* __result78__;
    if(    mem==((void*)0)) {
        __result77__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    ref_count_84=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_84);
    __result78__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result78__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__=(void*)0;
void* __result79__;
unsigned long  int* ref_count_85;
unsigned long  int count_86;
void (*finalizer_87)(void*);
void* __result80__;
void* __result81__;
memset(&finalizer_87, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        __result79__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    ref_count_85=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_85)--;
    }
    count_86=*ref_count_85;
    if(    !no_free&&(count_86<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_87=protocol_fun;
            finalizer_87(protocol_obj);
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
unsigned long  int* ref_count_88;
unsigned long  int count_89;
void (*finalizer_90)(void*);
void* __result84__;
void* __result85__;
memset(&finalizer_90, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            __result82__ = gComeFunResultObject = __result_obj__ = mem;
            gComeFunResultObject = (void*)0;
            return __result82__;
        }
    }
    if(    mem==((void*)0)) {
        __result83__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result83__;
    }
    ref_count_88=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_88)--;
    }
    count_89=*ref_count_88;
    if(    !no_free&&(count_89<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_90=protocol_fun;
            finalizer_90(protocol_obj);
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
void (*finalizer_91)(void*);
void (*finalizer_92)(void*);
unsigned long  int* ref_count_93;
unsigned long  int count_94;
void (*finalizer_95)(void*);
void (*finalizer_96)(void*);
memset(&finalizer_91, 0, sizeof(void (*)(void*)));
memset(&finalizer_92, 0, sizeof(void (*)(void*)));
memset(&finalizer_95, 0, sizeof(void (*)(void*)));
memset(&finalizer_96, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_91=protocol_fun;
                finalizer_91(protocol_obj);
            }
            finalizer_92=fun;
            finalizer_92(mem);
        }
    }
    else {
        ref_count_93=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_93)--;
        }
        count_94=*ref_count_93;
        if(        !no_free&&(count_94<=0||force_delete_)) {
            if(            mem) {
                if(                protocol_obj&&protocol_fun) {
                    finalizer_95=protocol_fun;
                    finalizer_95(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(                fun) {
                    finalizer_96=fun;
                    finalizer_96(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_97)(void*);
void (*finalizer_98)(void*);
unsigned long  int* ref_count_99;
unsigned long  int count_100;
void (*finalizer_101)(void*);
void (*finalizer_102)(void*);
memset(&finalizer_97, 0, sizeof(void (*)(void*)));
memset(&finalizer_98, 0, sizeof(void (*)(void*)));
memset(&finalizer_101, 0, sizeof(void (*)(void*)));
memset(&finalizer_102, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_97=protocol_fun;
                finalizer_97(protocol_obj);
            }
            finalizer_98=fun;
            finalizer_98(mem);
        }
    }
    else {
        ref_count_99=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_99)--;
        }
        count_100=*ref_count_99;
        if(        !no_free&&(count_100<=0||force_delete_)) {
            if(            mem) {
                if(                protocol_obj&&protocol_fun) {
                    finalizer_101=protocol_fun;
                    finalizer_101(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(                fun) {
                    finalizer_102=fun;
                    finalizer_102(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_103)(void*);
unsigned long  int* ref_count_104;
unsigned long  int count_105;
void (*finalizer_106)(void*);
memset(&finalizer_103, 0, sizeof(void (*)(void*)));
memset(&finalizer_106, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            finalizer_103=fun;
            finalizer_103(mem);
        }
    }
    else {
        ref_count_104=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_104)--;
        }
        count_105=*ref_count_104;
        if(        !no_free&&(count_105<=0||force_delete_)) {
            if(            mem) {
                if(                fun) {
                    finalizer_106=fun;
                    finalizer_106(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__=(void*)0;
char* __result86__;
int len_107;
char* result_108;
char* __result87__;
    if(    str==((void*)0)) {
        __result86__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result86__;
    }
    len_107=strlen(str)+1;
    result_108=(char*)come_calloc(1, sizeof(char)*(1*(len_107)), "libcomelang-gc.c", 904, "char");
    strncpy(result_108,str,len_107);
    __result87__ = gComeFunResultObject = __result_obj__ = result_108;
    gComeFunResultObject = (void*)0;
    return __result87__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
_Bool found_109;
int i_110;
    found_109=(_Bool)0;
    for(    i_110=0;    i_110<len;    i_110++    ){
        if(        array[i_110]==element) {
            found_109=(_Bool)1;
            break;
        }
    }
    return found_109;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result88__;
    self->size=128;
    self->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 929, "char");
    self->buf[0]=0;
    self->len=0;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result88__;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf) {
    }
}

void buffer_force_finalize(struct buffer* self){
    if(    self&&self->buf) {
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result89__;
struct buffer* result_111;
struct buffer* __result90__;
    if(    self==((void*)0)) {
        __result89__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result89__;
    }
    result_111=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 951, "buffer");
    result_111->size=self->size;
    result_111->buf=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 954, "char");
    result_111->len=self->len;
    memcpy(result_111->buf,self->buf,self->len);
    __result90__ = gComeFunResultObject = __result_obj__ = result_111;
    gComeFunResultObject = (void*)0;
    return __result90__;
}

int buffer_length(struct buffer* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
    if(    self==((void*)0)) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(    self==((void*)0)) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size){
void* __result_obj__=(void*)0;
struct buffer* __result91__;
char* old_buf_112;
int old_len_113;
int new_size_114;
struct buffer* __result92__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result91__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result91__;
    }
    if(    self->len+size+1+1>=self->size) {
        old_buf_112=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 993, "char");
        memcpy(old_buf_112,self->buf,self->size);
        old_len_113=self->len;
        new_size_114=(self->size+size+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_114)), "libcomelang-gc.c", 997, "char");
        memcpy(self->buf,old_buf_112,old_len_113);
        self->buf[old_len_113]=0;
        self->size=new_size_114;
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
char* old_buf_115;
int old_len_116;
int new_size_117;
struct buffer* __result94__;
    if(    self==((void*)0)) {
        __result93__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result93__;
    }
    if(    self->len+1+1+1>=self->size) {
        old_buf_115=charp_clone(self->buf);
        old_len_116=self->len;
        new_size_117=(self->size+10+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_117)), "libcomelang-gc.c", 1020, "char");
        memcpy(self->buf,old_buf_115,old_len_116);
        self->buf[old_len_116]=0;
        self->size=new_size_117;
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
int size_118;
char* old_buf_119;
int old_len_120;
int new_size_121;
struct buffer* __result96__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result95__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    size_118=strlen(mem);
    if(    self->len+size_118+1+1>=self->size) {
        old_buf_119=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 1042, "char");
        memcpy(old_buf_119,self->buf,self->size);
        old_len_120=self->len;
        new_size_121=(self->size+size_118+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_121)), "libcomelang-gc.c", 1046, "char");
        memcpy(self->buf,old_buf_119,old_len_120);
        self->buf[old_len_120]=0;
        self->size=new_size_121;
    }
    memcpy(self->buf+self->len,mem,size_118);
    self->len+=size_118;
    self->buf[self->len]=0;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
void* __result_obj__=(void*)0;
struct buffer* __result97__;
va_list args_122;
char* result_123;
int len_124;
struct buffer* __result98__;
char* mem_125;
int size_126;
char* old_buf_127;
int old_len_128;
int new_size_129;
struct buffer* __result99__;
memset(&args_122, 0, sizeof(va_list));
result_123 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)) {
        __result97__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result97__;
    }
    __builtin_va_start(args_122,msg);
    len_124=vasprintf(&result_123,msg,args_122);
    __builtin_va_end(args_122);
    if(    len_124<0) {
        __result98__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    mem_125=__builtin_string(result_123);
    size_126=strlen(mem_125);
    if(    self->len+size_126+1+1>=self->size) {
        old_buf_127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 1079, "char");
        memcpy(old_buf_127,self->buf,self->size);
        old_len_128=self->len;
        new_size_129=(self->size+size_126+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_129)), "libcomelang-gc.c", 1083, "char");
        memcpy(self->buf,old_buf_127,old_len_128);
        self->buf[old_len_128]=0;
        self->size=new_size_129;
    }
    memcpy(self->buf+self->len,mem_125,size_126);
    self->len+=size_126;
    self->buf[self->len]=0;
    free(result_123);
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result99__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result100__;
int size_130;
char* old_buf_131;
int old_len_132;
int new_size_133;
struct buffer* __result101__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result100__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    size_130=strlen(mem)+1;
    if(    self->len+size_130+1+1+1>=self->size) {
        old_buf_131=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 1105, "char");
        memcpy(old_buf_131,self->buf,self->size);
        old_len_132=self->len;
        new_size_133=(self->size+size_130+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_133)), "libcomelang-gc.c", 1109, "char");
        memcpy(self->buf,old_buf_131,old_len_132);
        self->buf[old_len_132]=0;
        self->size=new_size_133;
    }
    memcpy(self->buf+self->len,mem,size_130);
    self->len+=size_130;
    self->buf[self->len]=0;
    self->len++;
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result101__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__=(void*)0;
struct buffer* __result102__;
int* mem_134;
int size_135;
char* old_buf_136;
int old_len_137;
int new_size_138;
struct buffer* __result103__;
    if(    self==((void*)0)) {
        __result102__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    mem_134=&value;
    size_135=sizeof(int);
    if(    self->len+size_135+1+1>=self->size) {
        old_buf_136=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 1132, "char");
        memcpy(old_buf_136,self->buf,self->size);
        old_len_137=self->len;
        new_size_138=(self->size+size_135+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_138)), "libcomelang-gc.c", 1136, "char");
        memcpy(self->buf,old_buf_136,old_len_137);
        self->buf[old_len_137]=0;
        self->size=new_size_138;
    }
    memcpy(self->buf+self->len,mem_134,size_135);
    self->len+=size_135;
    self->buf[self->len]=0;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__=(void*)0;
long* mem_139;
int size_140;
char* old_buf_141;
int old_len_142;
int new_size_143;
struct buffer* __result104__;
    mem_139=&value;
    size_140=sizeof(long);
    if(    self->len+size_140+1+1>=self->size) {
        old_buf_141=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 1155, "char");
        memcpy(old_buf_141,self->buf,self->size);
        old_len_142=self->len;
        new_size_143=(self->size+size_140+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_143)), "libcomelang-gc.c", 1159, "char");
        memcpy(self->buf,old_buf_141,old_len_142);
        self->buf[old_len_142]=0;
        self->size=new_size_143;
    }
    memcpy(self->buf+self->len,mem_139,size_140);
    self->len+=size_140;
    self->buf[self->len]=0;
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result104__;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
void* __result_obj__=(void*)0;
struct buffer* __result105__;
short* mem_144;
int size_145;
char* old_buf_146;
int old_len_147;
int new_size_148;
struct buffer* __result106__;
    if(    self==((void*)0)) {
        __result105__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    mem_144=&value;
    size_145=sizeof(short);
    if(    self->len+size_145+1+1>=self->size) {
        old_buf_146=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libcomelang-gc.c", 1182, "char");
        memcpy(old_buf_146,self->buf,self->size);
        old_len_147=self->len;
        new_size_148=(self->size+size_145+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_148)), "libcomelang-gc.c", 1186, "char");
        memcpy(self->buf,old_buf_146,old_len_147);
        self->buf[old_len_147]=0;
        self->size=new_size_148;
    }
    memcpy(self->buf+self->len,mem_144,size_145);
    self->len+=size_145;
    self->buf[self->len]=0;
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result107__;
int len_149;
int new_size_150;
int i_151;
struct buffer* __result108__;
    if(    self==((void*)0)) {
        __result107__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    len_149=self->len;
    len_149=(len_149+3)&~3;
    if(    len_149>=self->size) {
        new_size_150=(self->size+1+1)*2;
        self->buf=(char*)come_calloc(1, sizeof(char)*(1*(new_size_150)), "libcomelang-gc.c", 1210, "char");
        self->size=new_size_150;
    }
    for(    i_151=self->len;    i_151<len_149;    i_151++    ){
        self->buf[i_151]=0;
    }
    self->len=len_149;
    __result108__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__=(void*)0;
struct buffer* result_152;
struct buffer* __result109__;
struct buffer* __result110__;
    result_152=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 1240, "buffer"));
    if(    self==((void*)0)) {
        __result109__ = gComeFunResultObject = __result_obj__ = result_152;
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    buffer_append_str(result_152,self);
    __result110__ = gComeFunResultObject = __result_obj__ = result_152;
    gComeFunResultObject = (void*)0;
    return __result110__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__=(void*)0;
struct buffer* result_153;
struct buffer* __result111__;
struct buffer* __result112__;
    result_153=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 1253, "buffer"));
    if(    self==((void*)0)) {
        __result111__ = gComeFunResultObject = __result_obj__ = result_153;
        gComeFunResultObject = (void*)0;
        return __result111__;
    }
    buffer_append_str(result_153,self);
    __result112__ = gComeFunResultObject = __result_obj__ = result_153;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__=(void*)0;
char* __result113__;
char* __result114__;
    if(    self==((void*)0)) {
        __result113__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result113__;
    }
    __result114__ = gComeFunResultObject = __result_obj__ = __builtin_string(self->buf);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

_Bool bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short self, short right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long  int self, unsigned long  int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_operator_equals(char self, char right){
    return self==right;
}

_Bool short_operator_equals(short self, short right){
    return self==right;
}

_Bool int_operator_equals(int self, int right){
    return self==right;
}

_Bool long_operator_equals(long self, long right){
    return self==right;
}

_Bool bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool char_operator_not_equals(char self, char right){
    return !(self==right);
}

_Bool short_operator_not_equals(short self, short right){
    return !(self==right);
}

_Bool int_operator_not_equals(int self, int right){
    return !(self==right);
}

_Bool long_operator_not_equals(long self, long right){
    return !(self==right);
}

_Bool string_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right){
    return self==right;
}

_Bool string_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_operator_equals(char* self, char* right){
    return self==right;
}

_Bool voidp_operator_not_equals(char* self, char* right){
    return !charp_operator_equals(self,right);
}

_Bool string_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
char* __result115__;
int len_154;
char* result_155;
char* __result116__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result115__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    len_154=strlen(self)+strlen(right);
    result_155=(char*)come_calloc(1, sizeof(char)*(1*(len_154+1)), "libcomelang-gc.c", 1480, "char");
    strncpy(result_155,self,len_154+1);
    strncat(result_155,right,len_154+1);
    __result116__ = gComeFunResultObject = __result_obj__ = result_155;
    gComeFunResultObject = (void*)0;
    return __result116__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
char* __result117__;
int len_156;
char* result_157;
char* __result118__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result117__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result117__;
    }
    len_156=strlen(self)+strlen(right);
    result_157=(char*)come_calloc(1, sizeof(char)*(1*(len_156+1)), "libcomelang-gc.c", 1495, "char");
    strncpy(result_157,self,len_156+1);
    strncat(result_157,right,len_156+1);
    __result118__ = gComeFunResultObject = __result_obj__ = result_157;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
char* __result119__;
struct buffer* buf_158;
int i_159;
char* __result120__;
    if(    self==((void*)0)) {
        __result119__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result119__;
    }
    buf_158=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 1508, "buffer"));
    for(    i_159=0;    i_159<right;    i_159++    ){
        buffer_append_str(buf_158,self);
    }
    __result120__ = gComeFunResultObject = __result_obj__ = buffer_to_string(buf_158);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
char* __result121__;
struct buffer* buf_160;
int i_161;
char* __result122__;
    if(    self==((void*)0)) {
        __result121__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result121__;
    }
    buf_160=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 1522, "buffer"));
    for(    i_161=0;    i_161<right;    i_161++    ){
        buffer_append_str(buf_160,self);
    }
    __result122__ = gComeFunResultObject = __result_obj__ = buffer_to_string(buf_160);
    gComeFunResultObject = (void*)0;
    return __result122__;
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

unsigned int size_t_get_hash_key(unsigned long  int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int string_get_hash_key(char* value){
int result_162;
char* p_163;
    if(    value==((void*)0)) {
        return 0;
    }
    result_162=0;
    p_163=value;
    while(*p_163) {
        result_162+=(*p_163);
        p_163++;
    }
    return result_162;
}

unsigned int charp_get_hash_key(char* value){
int result_164;
char* p_165;
    if(    value==((void*)0)) {
        return 0;
    }
    result_164=0;
    p_165=value;
    while(*p_165) {
        result_164+=(*p_165);
        p_165++;
    }
    return result_164;
}

_Bool bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short self){
    return self;
}

int int_clone(int self){
    return self;
}

long  int long_clone(long self){
    return self;
}

unsigned long  int size_t_clone(unsigned long  int self){
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
char* __result123__;
char* __result124__;
    if(    self==((void*)0)) {
        __result123__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result123__;
    }
    __result124__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

char* string_clone(char* self){
void* __result_obj__=(void*)0;
char* __result125__;
char* __result126__;
    if(    self==((void*)0)) {
        __result125__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result125__;
    }
    __result126__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

_Bool xiswalpha(int c){
_Bool result_166;
    result_166=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_166;
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
_Bool result_167;
    result_167=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_167;
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
_Bool result_168;
    result_168=(c>=32&&c<=126);
    return result_168;
}

_Bool xiswascii(int c){
_Bool result_169;
    result_169=(c>=32&&c<=126);
    return result_169;
}

int string_length(char* str){
    if(    str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(    str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

char* string_reverse(char* str){
void* __result_obj__=(void*)0;
char* __result127__;
int len_170;
char* result_171;
int i_172;
char* __result128__;
    if(    str==((void*)0)) {
        __result127__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result127__;
    }
    len_170=strlen(str);
    result_171=(char*)come_calloc(1, sizeof(char)*(1*(len_170+1)), "libcomelang-gc.c", 1739, "char");
    for(    i_172=0;    i_172<len_170;    i_172++    ){
        result_171[i_172]=str[len_170-i_172-1];
    }
    result_171[len_170]=0;
    __result128__ = gComeFunResultObject = __result_obj__ = result_171;
    gComeFunResultObject = (void*)0;
    return __result128__;
}

char* charp_reverse(char* str){
void* __result_obj__=(void*)0;
char* __result129__;
int len_173;
char* result_174;
int i_175;
char* __result130__;
    if(    str==((void*)0)) {
        __result129__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result129__;
    }
    len_173=strlen(str);
    result_174=(char*)come_calloc(1, sizeof(char)*(1*(len_173+1)), "libcomelang-gc.c", 1756, "char");
    for(    i_175=0;    i_175<len_173;    i_175++    ){
        result_174[i_175]=str[len_173-i_175-1];
    }
    result_174[len_173]=0;
    __result130__ = gComeFunResultObject = __result_obj__ = result_174;
    gComeFunResultObject = (void*)0;
    return __result130__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result131__;
int len_176;
char* __result132__;
char* __result133__;
char* __result134__;
char* result_177;
char* __result135__;
    if(    str==((void*)0)) {
        __result131__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result131__;
    }
    len_176=strlen(str);
    if(    head<0) {
        head+=len_176;
    }
    if(    tail<0) {
        tail+=len_176+1;
    }
    if(    head>tail) {
        __result132__ = gComeFunResultObject = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        gComeFunResultObject = (void*)0;
        return __result132__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_176) {
        tail=len_176;
    }
    if(    head==tail) {
        __result133__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result133__;
    }
    if(    tail-head+1<1) {
        __result134__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    result_177=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang-gc.c", 1801, "char");
    memcpy(result_177,str+head,tail-head);
    result_177[tail-head]=0;
    __result135__ = gComeFunResultObject = __result_obj__ = result_177;
    gComeFunResultObject = (void*)0;
    return __result135__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result136__;
int len_178;
char* __result137__;
char* __result138__;
char* __result139__;
char* result_179;
char* __result140__;
    if(    str==((void*)0)) {
        __result136__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result136__;
    }
    len_178=strlen(str);
    if(    head<0) {
        head+=len_178;
    }
    if(    tail<0) {
        tail+=len_178+1;
    }
    if(    head>tail) {
        __result137__ = gComeFunResultObject = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        gComeFunResultObject = (void*)0;
        return __result137__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_178) {
        tail=len_178;
    }
    if(    head==tail) {
        __result138__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result138__;
    }
    if(    tail-head+1<1) {
        __result139__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result139__;
    }
    result_179=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang-gc.c", 1844, "char");
    memcpy(result_179,str+head,tail-head);
    result_179[tail-head]=0;
    __result140__ = gComeFunResultObject = __result_obj__ = result_179;
    gComeFunResultObject = (void*)0;
    return __result140__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result141__;
int len_180;
char* __result142__;
char* __result143__;
char* __result144__;
char* result_181;
char* __result145__;
    if(    str==((void*)0)) {
        __result141__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    len_180=strlen(str);
    if(    head<0) {
        head+=len_180;
    }
    if(    tail<0) {
        tail+=len_180+1;
    }
    if(    head>tail) {
        __result142__ = gComeFunResultObject = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        gComeFunResultObject = (void*)0;
        return __result142__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_180) {
        tail=len_180;
    }
    if(    head==tail) {
        __result143__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    if(    tail-head+1<1) {
        __result144__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result144__;
    }
    result_181=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang-gc.c", 1887, "char");
    memcpy(result_181,str+head,tail-head);
    result_181[tail-head]=0;
    __result145__ = gComeFunResultObject = __result_obj__ = result_181;
    gComeFunResultObject = (void*)0;
    return __result145__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result146__;
int len_182;
char* __result147__;
char* __result148__;
char* __result149__;
char* result_183;
char* __result150__;
    if(    str==((void*)0)) {
        __result146__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    len_182=strlen(str);
    if(    head<0) {
        head+=len_182;
    }
    if(    tail<0) {
        tail+=len_182+1;
    }
    if(    head>tail) {
        __result147__ = gComeFunResultObject = __result_obj__ = string_reverse(charp_substring(str,tail,head));
        gComeFunResultObject = (void*)0;
        return __result147__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_182) {
        tail=len_182;
    }
    if(    head==tail) {
        __result148__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result148__;
    }
    if(    tail-head+1<1) {
        __result149__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    result_183=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libcomelang-gc.c", 1930, "char");
    memcpy(result_183,str+head,tail-head);
    result_183[tail-head]=0;
    __result150__ = gComeFunResultObject = __result_obj__ = result_183;
    gComeFunResultObject = (void*)0;
    return __result150__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__=(void*)0;
char* __result151__;
va_list args_184;
char* result_185;
int len_186;
char* __result152__;
char* result2_187;
char* __result153__;
memset(&args_184, 0, sizeof(va_list));
result_185 = (void*)0;
    if(    msg==((void*)0)) {
        __result151__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    __builtin_va_start(args_184,msg);
    len_186=vasprintf(&result_185,msg,args_184);
    __builtin_va_end(args_184);
    if(    len_186<0) {
        __result152__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    result2_187=__builtin_string(result_185);
    free(result_185);
    __result153__ = gComeFunResultObject = __result_obj__ = result2_187;
    gComeFunResultObject = (void*)0;
    return __result153__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result154__;
int len_188;
char* __result155__;
char* __result156__;
char* sub_str_189;
char* __result157__;
    if(    str==((void*)0)) {
        __result154__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    len_188=strlen(str);
    if(    strcmp(str,"")==0) {
        __result155__ = gComeFunResultObject = __result_obj__ = __builtin_string(str);
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    if(    head<0) {
        head+=len_188;
    }
    if(    tail<0) {
        tail+=len_188+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result156__ = gComeFunResultObject = __result_obj__ = __builtin_string(str);
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    if(    tail>=len_188) {
        tail=len_188;
    }
    sub_str_189=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_189,string_length(sub_str_189)+1);
    __result157__ = gComeFunResultObject = __result_obj__ = __builtin_string(str);
    gComeFunResultObject = (void*)0;
    return __result157__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
char* __result158__;
int len_190;
char* __result159__;
char* __result160__;
char* sub_str_191;
char* __result161__;
    if(    str==((void*)0)) {
        __result158__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result158__;
    }
    len_190=strlen(str);
    if(    strcmp(str,"")==0) {
        __result159__ = gComeFunResultObject = __result_obj__ = __builtin_string(str);
        gComeFunResultObject = (void*)0;
        return __result159__;
    }
    if(    head<0) {
        head+=len_190;
    }
    if(    tail<0) {
        tail+=len_190+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result160__ = gComeFunResultObject = __result_obj__ = __builtin_string(str);
        gComeFunResultObject = (void*)0;
        return __result160__;
    }
    if(    tail>=len_190) {
        tail=len_190;
    }
    sub_str_191=charp_substring(str,tail,-1);
    memcpy(str+head,sub_str_191,string_length(sub_str_191)+1);
    __result161__ = gComeFunResultObject = __result_obj__ = __builtin_string(str);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__=(void*)0;
struct list$1charph* __result163__;
struct list$1charph* result_192;
struct buffer* str_193;
int i_194;
struct list$1charph* __result165__;
    if(    self==((void*)0)) {
        __result163__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-gc.c", 2041, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    result_192=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-gc.c", 2044, "list$1charph"));
    str_193=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 2046, "buffer"));
    for(    i_194=0;    i_194<charp_length(self);    i_194++    ){
        if(        self[i_194]==c) {
            list$1charph_push_back(result_192,__builtin_string(str_193->buf));
            buffer_reset(str_193);
        }
        else {
            buffer_append_char(str_193,self[i_194]);
        }
    }
    if(    buffer_length(str_193)!=0) {
        list$1charph_push_back(result_192,__builtin_string(str_193->buf));
    }
    __result165__ = gComeFunResultObject = __result_obj__ = result_192;
    gComeFunResultObject = (void*)0;
    return __result165__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result162__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result162__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
struct list_item$1charph* litem_195;
struct list_item$1charph* litem_196;
struct list_item$1charph* litem_197;
struct list$1charph* __result164__;
    if(    self->len==0) {
        litem_195=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 227, "list_item$1charph");
        litem_195->prev=((void*)0);
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head=litem_195;
    }
    else if(    self->len==1) {
        litem_196=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 237, "list_item$1charph");
        litem_196->prev=self->head;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail=litem_196;
        self->head->next=litem_196;
    }
    else {
        litem_197=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 247, "list_item$1charph");
        litem_197->prev=self->tail;
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail->next=litem_197;
        self->tail=litem_197;
    }
    self->len++;
    __result164__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result164__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__=(void*)0;
struct list$1charph* __result166__;
struct list$1charph* result_198;
struct buffer* str_199;
int i_200;
struct list$1charph* __result167__;
    if(    self==((void*)0)) {
        __result166__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-gc.c", 2067, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result166__;
    }
    result_198=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-gc.c", 2070, "list$1charph"));
    str_199=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 2072, "buffer"));
    for(    i_200=0;    i_200<charp_length(self);    i_200++    ){
        if(        self[i_200]==c) {
            list$1charph_push_back(result_198,__builtin_string(str_199->buf));
            buffer_reset(str_199);
        }
        else {
            buffer_append_char(str_199,self[i_200]);
        }
    }
    if(    buffer_length(str_199)!=0) {
        list$1charph_push_back(result_198,__builtin_string(str_199->buf));
    }
    __result167__ = gComeFunResultObject = __result_obj__ = result_198;
    gComeFunResultObject = (void*)0;
    return __result167__;
}

char* xbasename(char* path){
void* __result_obj__=(void*)0;
char* __result168__;
char* p_201;
char* __result169__;
char* __result170__;
char* __result171__;
    if(    path==((void*)0)) {
        __result168__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    p_201=path+strlen(path);
    while(p_201>=path) {
        if(        *p_201==47) {
            break;
        }
        else {
            p_201--;
        }
    }
    if(    p_201<path) {
        __result169__ = gComeFunResultObject = __result_obj__ = __builtin_string(path);
        gComeFunResultObject = (void*)0;
        return __result169__;
    }
    else {
        __result170__ = gComeFunResultObject = __result_obj__ = __builtin_string(p_201+1);
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    __result171__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
    gComeFunResultObject = (void*)0;
    return __result171__;
}

char* xnoextname(char* path){
void* __result_obj__=(void*)0;
char* __result172__;
char* path2_202;
char* p_203;
char* __result173__;
char* __result174__;
char* __result175__;
    if(    path==((void*)0)) {
        __result172__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result172__;
    }
    path2_202=xbasename(path);
    p_203=path2_202+strlen(path2_202);
    while(p_203>=path2_202) {
        if(        *p_203==46) {
            break;
        }
        else {
            p_203--;
        }
    }
    if(    p_203<path2_202) {
        __result173__ = gComeFunResultObject = __result_obj__ = __builtin_string(path2_202);
        gComeFunResultObject = (void*)0;
        return __result173__;
    }
    else {
        __result174__ = gComeFunResultObject = __result_obj__ = string_substring(path2_202,0,p_203-path2_202);
        gComeFunResultObject = (void*)0;
        return __result174__;
    }
    __result175__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
    gComeFunResultObject = (void*)0;
    return __result175__;
}

char* xextname(char* path){
void* __result_obj__=(void*)0;
char* __result176__;
char* p_204;
char* __result177__;
char* __result178__;
char* __result179__;
    if(    path==((void*)0)) {
        __result176__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result176__;
    }
    p_204=path+strlen(path);
    while(p_204>=path) {
        if(        *p_204==46) {
            break;
        }
        else {
            p_204--;
        }
    }
    if(    p_204<path) {
        __result177__ = gComeFunResultObject = __result_obj__ = __builtin_string(path);
        gComeFunResultObject = (void*)0;
        return __result177__;
    }
    else {
        __result178__ = gComeFunResultObject = __result_obj__ = __builtin_string(p_204+1);
        gComeFunResultObject = (void*)0;
        return __result178__;
    }
    __result179__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
    gComeFunResultObject = (void*)0;
    return __result179__;
}

char* bool_to_string(_Bool self){
void* __result_obj__=(void*)0;
char* __result180__;
char* __result181__;
    if(    self) {
        __result180__ = gComeFunResultObject = __result_obj__ = __builtin_string("true");
        gComeFunResultObject = (void*)0;
        return __result180__;
    }
    else {
        __result181__ = gComeFunResultObject = __result_obj__ = __builtin_string("false");
        gComeFunResultObject = (void*)0;
        return __result181__;
    }
}

char* char_to_string(char self){
void* __result_obj__=(void*)0;
char* __result182__;
    __result182__ = gComeFunResultObject = __result_obj__ = xsprintf("%c",self);
    gComeFunResultObject = (void*)0;
    return __result182__;
}

char* short_to_string(short self){
void* __result_obj__=(void*)0;
char* __result183__;
    __result183__ = gComeFunResultObject = __result_obj__ = xsprintf("%d",self);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

char* int_to_string(int self){
void* __result_obj__=(void*)0;
char* __result184__;
    __result184__ = gComeFunResultObject = __result_obj__ = xsprintf("%d",self);
    gComeFunResultObject = (void*)0;
    return __result184__;
}

char* long_to_string(long self){
void* __result_obj__=(void*)0;
char* __result185__;
    __result185__ = gComeFunResultObject = __result_obj__ = xsprintf("%ld",self);
    gComeFunResultObject = (void*)0;
    return __result185__;
}

char* size_t_to_string(unsigned long  int self){
void* __result_obj__=(void*)0;
char* __result186__;
    __result186__ = gComeFunResultObject = __result_obj__ = xsprintf("%ld",self);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

char* float_to_string(float self){
void* __result_obj__=(void*)0;
char* __result187__;
    __result187__ = gComeFunResultObject = __result_obj__ = xsprintf("%f",self);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

char* double_to_string(double self){
void* __result_obj__=(void*)0;
char* __result188__;
    __result188__ = gComeFunResultObject = __result_obj__ = xsprintf("%lf",self);
    gComeFunResultObject = (void*)0;
    return __result188__;
}

char* string_to_string(char* self){
void* __result_obj__=(void*)0;
char* __result189__;
char* __result190__;
    if(    self==((void*)0)) {
        __result189__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result189__;
    }
    __result190__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result190__;
}

char* charp_to_string(char* self){
void* __result_obj__=(void*)0;
char* __result191__;
char* __result192__;
    if(    self==((void*)0)) {
        __result191__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    __result192__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result192__;
}

int bool_compare(_Bool left, _Bool right){
    if(    !left&&right) {
        return -1;
    }
    else if(    left&&right) {
        return 0;
    }
    else if(    !left&&!right) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short left, short right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(unsigned long  int left, unsigned long  int right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

char* FILE_read(struct __sFILE* f){
void* __result_obj__=(void*)0;
char* __result193__;
struct buffer* buf_205;
int size_207;
char* __result194__;
    if(    f==((void*)0)) {
        __result193__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result193__;
    }
    buf_205=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 2402, "buffer"));
    while(1) {
        char buf2_206[1024];
        memset(&buf2_206, 0, sizeof(char)        *(1024)        );
        size_207=fread(buf2_206,1,1024,f);
        buffer_append(buf_205,buf2_206,size_207);
        if(        size_207<1024) {
            break;
        }
    }
    __result194__ = gComeFunResultObject = __result_obj__ = buffer_to_string(buf_205);
    gComeFunResultObject = (void*)0;
    return __result194__;
}

int FILE_write(struct __sFILE* f, char* str){
    if(    f==((void*)0)||str==((void*)0)) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct __sFILE* f){
int result_208;
    if(    f==((void*)0)) {
        return -1;
    }
    result_208=fclose(f);
    if(    result_208<0) {
        return result_208;
    }
    return result_208;
}

struct __sFILE* FILE_fprintf(struct __sFILE* f, const char* msg, ...){
void* __result_obj__=(void*)0;
struct __sFILE* __result195__;
va_list args_210;
int result_211;
struct __sFILE* __result196__;
struct __sFILE* __result197__;
memset(&args_210, 0, sizeof(va_list));
    if(    f==((void*)0)||msg==((void*)0)) {
        __result195__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result195__;
    }
    char msg2_209[1024*2*2*2];
    memset(&msg2_209, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_210,msg);
    vsnprintf(msg2_209,1024*2*2*2,msg,args_210);
    __builtin_va_end(args_210);
    result_211=fprintf(f,"%s",msg2_209);
    if(    result_211<0) {
        __result196__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result196__;
    }
    __result197__ = gComeFunResultObject = __result_obj__ = f;
    gComeFunResultObject = (void*)0;
    return __result197__;
}

int string_write(char* self, char* file_name, _Bool append){
struct __sFILE* f_212;
int result_213;
int result2_214;
f_212 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_212=fopen(file_name,"a");
    }
    else {
        f_212=fopen(file_name,"w");
    }
    if(    f_212==((void*)0)) {
        return -1;
    }
    result_213=fwrite(self,strlen(self),1,f_212);
    if(    result_213<0) {
        return result_213;
    }
    result2_214=fclose(f_212);
    if(    result2_214<0) {
        return result2_214;
    }
    return result_213;
}

int charp_write(char* self, char* file_name, _Bool append){
struct __sFILE* f_215;
int result_216;
int result2_217;
f_215 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_215=fopen(file_name,"a");
    }
    else {
        f_215=fopen(file_name,"w");
    }
    if(    f_215==((void*)0)) {
        return -1;
    }
    result_216=fwrite(self,strlen(self),1,f_215);
    if(    result_216<0) {
        return result_216;
    }
    result2_217=fclose(f_215);
    if(    result2_217<0) {
        return result2_217;
    }
    return result_216;
}

char* string_read(char* file_name){
void* __result_obj__=(void*)0;
char* __result198__;
struct __sFILE* f_218;
char* __result199__;
struct buffer* buf_219;
int size_221;
char* result_222;
int result2_223;
char* __result200__;
char* __result201__;
    if(    file_name==((void*)0)) {
        __result198__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result198__;
    }
    f_218=fopen(file_name,"r");
    if(    f_218==((void*)0)) {
        __result199__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result199__;
    }
    buf_219=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 2542, "buffer"));
    while(1) {
        char buf2_220[1024];
        memset(&buf2_220, 0, sizeof(char)        *(1024)        );
        size_221=fread(buf2_220,1,1024,f_218);
        buffer_append(buf_219,buf2_220,size_221);
        if(        size_221<1024) {
            break;
        }
    }
    result_222=buffer_to_string(buf_219);
    result2_223=fclose(f_218);
    if(    result2_223<0) {
        __result200__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result200__;
    }
    __result201__ = gComeFunResultObject = __result_obj__ = result_222;
    gComeFunResultObject = (void*)0;
    return __result201__;
}

char* charp_read(char* file_name){
void* __result_obj__=(void*)0;
char* __result202__;
struct __sFILE* f_224;
char* __result203__;
struct buffer* buf_225;
int size_227;
char* result_228;
int result2_229;
char* __result204__;
char* __result205__;
    if(    file_name==((void*)0)) {
        __result202__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result202__;
    }
    f_224=fopen(file_name,"r");
    if(    f_224==((void*)0)) {
        __result203__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    buf_225=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-gc.c", 2579, "buffer"));
    while(1) {
        char buf2_226[1024];
        memset(&buf2_226, 0, sizeof(char)        *(1024)        );
        size_227=fread(buf2_226,1,1024,f_224);
        buffer_append(buf_225,buf2_226,size_227);
        if(        size_227<1024) {
            break;
        }
    }
    result_228=buffer_to_string(buf_225);
    result2_229=fclose(f_224);
    if(    result2_229<0) {
        __result204__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result204__;
    }
    __result205__ = gComeFunResultObject = __result_obj__ = result_228;
    gComeFunResultObject = (void*)0;
    return __result205__;
}

struct list$1charph* FILE_readlines(struct __sFILE* f){
void* __result_obj__=(void*)0;
struct list$1charph* result_230;
struct list$1charph* __result206__;
struct list$1charph* __result207__;
    result_230=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-gc.c", 2606, "list$1charph"));
    if(    f==((void*)0)) {
        __result206__ = gComeFunResultObject = __result_obj__ = result_230;
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    while(1) {
        char buf_231[1024];
        memset(&buf_231, 0, sizeof(char)        *(1024)        );
        if(        fgets(buf_231,1024,f)==((void*)0)) {
            break;
        }
        list$1charph_push_back(result_230,__builtin_string(buf_231));
    }
    __result207__ = gComeFunResultObject = __result_obj__ = result_230;
    gComeFunResultObject = (void*)0;
    return __result207__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*)){
struct __sFILE* f_232;
    if(    path==((void*)0)||mode==((void*)0)) {
        return -1;
    }
    f_232=fopen(path,mode);
    if(    f_232) {
        block(parent,f_232);
        fclose(f_232);
        return 0;
    }
    return -1;
}

char* charp_puts(char* self){
void* __result_obj__=(void*)0;
char* __result208__;
char* __result209__;
    if(    self==((void*)0)) {
        __result208__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    puts(self);
    __result209__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

char* charp_print(char* self){
void* __result_obj__=(void*)0;
char* __result210__;
char* __result211__;
    if(    self==((void*)0)) {
        __result210__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    printf("%s",self);
    __result211__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result211__;
}

char* string_printf(char* self, ...){
void* __result_obj__=(void*)0;
char* __result212__;
char* msg2_233;
va_list args_234;
char* __result213__;
msg2_233 = (void*)0;
memset(&args_234, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result212__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    __builtin_va_start(args_234,self);
    vasprintf(&msg2_233,self,args_234);
    __builtin_va_end(args_234);
    printf("%s",msg2_233);
    free(msg2_233);
    __result213__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

char* charp_printf(char* self, ...){
void* __result_obj__=(void*)0;
char* __result214__;
char* msg2_235;
va_list args_236;
char* __result215__;
msg2_235 = (void*)0;
memset(&args_236, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result214__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    __builtin_va_start(args_236,self);
    vasprintf(&msg2_235,self,args_236);
    __builtin_va_end(args_236);
    printf("%s",msg2_235);
    free(msg2_235);
    __result215__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

char* string_puts(char* self){
void* __result_obj__=(void*)0;
char* __result216__;
char* __result217__;
    if(    self==((void*)0)) {
        __result216__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    puts(self);
    __result217__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_237;
    for(    i_237=0;    i_237<self;    i_237++    ){
        block(parent,i_237);
    }
}

int assert_v2(int exp){
    if(    exp) {
    }
    else {
        puts("assert failure");
        stackframe();
        exit(2);
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__=(void*)0;
struct integer* __result218__;
    self->value=value;
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result218__;
}

int integer_to_int(struct integer* self){
    return self->value;
}

struct integer* bool_to_integer(long self){
void* __result_obj__=(void*)0;
struct integer* __result219__;
    __result219__ = gComeFunResultObject = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang-gc.c", 2761, "integer"),self);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

struct integer* char_to_integer(long self){
void* __result_obj__=(void*)0;
struct integer* __result220__;
    __result220__ = gComeFunResultObject = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang-gc.c", 2766, "integer"),self);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

struct integer* short_to_integer(long self){
void* __result_obj__=(void*)0;
struct integer* __result221__;
    __result221__ = gComeFunResultObject = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang-gc.c", 2771, "integer"),self);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

struct integer* int_to_integer(long self){
void* __result_obj__=(void*)0;
struct integer* __result222__;
    __result222__ = gComeFunResultObject = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang-gc.c", 2776, "integer"),self);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

struct integer* long_to_integer(long self){
void* __result_obj__=(void*)0;
struct integer* __result223__;
    __result223__ = gComeFunResultObject = __result_obj__ = integer_initialize((struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libcomelang-gc.c", 2781, "integer"),self);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

int integer_compare(struct integer* left, struct integer* right){
    if(    left->value<right->value) {
        return -1;
    }
    else if(    left->value>right->value) {
        return 1;
    }
    else {
        return 0;
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
    return !integer_operator_equals(self,right);
}

int integer_operator_add(struct integer* left, struct integer* right){
    return left->value+right->value;
}

int integer_operator_sub(struct integer* left, struct integer* right){
    return left->value-right->value;
}

int integer_operator_mult(struct integer* left, struct integer* right){
    return left->value*right->value;
}

int integer_operator_div(struct integer* left, struct integer* right){
    return left->value/right->value;
}

int integer_operator_mod(struct integer* left, struct integer* right){
    return left->value%right->value;
}

int integer_operator_lshift(struct integer* left, struct integer* right){
    return left->value<<right->value;
}

int integer_operator_rshift(struct integer* left, struct integer* right){
    return left->value>>right->value;
}

int integer_operator_gteq(struct integer* left, struct integer* right){
    return left->value>=right->value;
}

int integer_operator_lteq(struct integer* left, struct integer* right){
    return left->value<=right->value;
}

int integer_operator_lt(struct integer* left, struct integer* right){
    return left->value<right->value;
}

int integer_operator_gt(struct integer* left, struct integer* right){
    return left->value>right->value;
}

int integer_operator_and(struct integer* left, struct integer* right){
    return left->value&right->value;
}

int integer_operator_xor(struct integer* left, struct integer* right){
    return left->value^right->value;
}

int integer_operator_or(struct integer* left, struct integer* right){
    return left->value|right->value;
}

char* integer_to_string(struct integer* self){
void* __result_obj__=(void*)0;
char* __result224__;
    __result224__ = gComeFunResultObject = __result_obj__ = long_to_string(self->value);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

struct floating* floating_initialize(struct floating* self, double value){
void* __result_obj__=(void*)0;
struct floating* __result225__;
    self->value=value;
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result225__;
}

double floating_to_double(struct floating* self){
    return self->value;
}

int floating_compare(struct floating* left, struct floating* right){
    if(    left->value<right->value) {
        return -1;
    }
    else if(    left->value>right->value) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

struct floating* float_to_floating(float self){
void* __result_obj__=(void*)0;
struct floating* __result226__;
    __result226__ = gComeFunResultObject = __result_obj__ = floating_initialize((struct floating*)come_calloc(1, sizeof(struct floating)*(1), "libcomelang-gc.c", 2921, "floating"),self);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

struct floating* double_to_floating(double self){
void* __result_obj__=(void*)0;
struct floating* __result227__;
    __result227__ = gComeFunResultObject = __result_obj__ = floating_initialize((struct floating*)come_calloc(1, sizeof(struct floating)*(1), "libcomelang-gc.c", 2926, "floating"),self);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

_Bool floating_equals(struct floating* self, struct floating* right){
    return self->value==right->value;
}

_Bool floating_operator_equals(struct floating* self, struct floating* right){
    return self->value==right->value;
}

_Bool floating_operator_not_equals(struct floating* self, struct floating* right){
    return !floating_operator_equals(self,right);
}

int floating_operator_add(struct floating* left, struct floating* right){
    return left->value+right->value;
}

int floating_operator_sub(struct floating* left, struct floating* right){
    return left->value-right->value;
}

int floating_operator_mult(struct floating* left, struct floating* right){
    return left->value*right->value;
}

int floating_operator_div(struct floating* left, struct floating* right){
    return left->value/right->value;
}

int floating_operator_gteq(struct floating* left, struct floating* right){
    return left->value>=right->value;
}

int floating_operator_lteq(struct floating* left, struct floating* right){
    return left->value<=right->value;
}

int floating_operator_lt(struct floating* left, struct floating* right){
    return left->value<right->value;
}

int floating_operator_gt(struct floating* left, struct floating* right){
    return left->value>right->value;
}

char* floating_to_string(struct floating* self){
void* __result_obj__=(void*)0;
char* __result228__;
    __result228__ = gComeFunResultObject = __result_obj__ = double_to_string(self->value);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

