/// previous struct definition ///
struct __sFILEX;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sBlock;

struct sVarTable;

/// struct definition ///
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

typedef unsigned long  int size_t;

typedef long  long fpos_t;

struct __sbuf
{
    unsigned char* _base;
    int _size;
};

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
    unsigned char* buf;
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
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mNoArrayPointerNum;
    int mTypedefOriginalPointerNum;
    struct sNode* mSizeNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    char* mTupleName;
};

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
    _Bool mInline;
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
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct buffer* mHeader;
};

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

struct map$2charphbufferph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
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
    struct map$2charphbufferph* struct_definition;
    struct map$2charphbufferph* previous_struct_definition;
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
    int sline_top;
    struct sFun* calling_fun;
    struct map$2charphint* outputed_class;
    struct map$2charphcharph* uniq_definition;
    _Bool nocomelib;
    _Bool in_top_level;
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

// source head

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
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
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
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* str);
struct buffer* buffer_append_format(struct buffer* self, char* str, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* string_to_buffer(char* self);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
char* buffer_printable(struct buffer* self);
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
_Bool size_t_equals(long self, unsigned long  int right);
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
unsigned long  int size_t_clone(long self);
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
char* charp_printable(char* str);
char* xbasename(char* path);
char* xextname(char* path);
char* xnoextname(char* path);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_);
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
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
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
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
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
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
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
struct sNode* create_nothing_node(struct sInfo* info);
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
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item);
static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item);
static void map$2charphcharph_rehash(struct map$2charphcharph* self);
static char* map$2charphcharph_begin(struct map$2charphcharph* self);
static _Bool map$2charphcharph_end(struct map$2charphcharph* self);
static char* map$2charphcharph_next(struct map$2charphcharph* self);
static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
char* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
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
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static int list$1sTypeph_length(struct list$1sTypeph* self);
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
// inline function
static static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static static inline unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result1__;
    __result1__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result2__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2410, "buffer"))));
    buffer_append(result_0,self,sizeof(char)*len);
    __result2__ = gComeFunResultObject = __result_obj__ = result_0;
    /*i*/come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result3__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2417, "buffer"))));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result3__ = gComeFunResultObject = __result_obj__ = result_1;
    /*i*/come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_3;
struct buffer* __result4__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2426, "buffer"))));
    buffer_append(result_3,(char*)self,sizeof(short)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_3;
    /*i*/come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_4;
struct buffer* __result5__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2433, "buffer"))));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_4;
    /*i*/come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_5;
struct buffer* __result6__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2440, "buffer"))));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_5;
    /*i*/come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_6;
struct buffer* __result7__;
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2447, "buffer"))));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_6;
    /*i*/come_call_finalizer3(result_6,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_7;
struct buffer* __result8__;
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2454, "buffer"))));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result8__ = gComeFunResultObject = __result_obj__ = result_7;
    /*i*/come_call_finalizer3(result_7,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result8__;
}
static static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2754, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value16,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
struct smart_pointer$1char* __result11__;
    __result11__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2759, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value19,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result11__;
}
static static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct smart_pointer$1short* __result13__;
    __result13__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2764, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value22,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result13__;
}
static static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct smart_pointer$1int* __result15__;
    __result15__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2769, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value25,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result15__;
}
static static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct smart_pointer$1long* __result17__;
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2774, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value28,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* buf_8;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct smart_pointer$1char* __result18__;
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2807, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result18__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2809, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
    /*i*/come_call_finalizer3(buf_8,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value32,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result18__;
}
static static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* buf_9;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct smart_pointer$1charp* __result20__;
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2814, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 2816, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
    /*i*/come_call_finalizer3(buf_9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value36,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_10;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct smart_pointer$1short* __result21__;
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2821, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2823, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
    /*i*/come_call_finalizer3(buf_10,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value40,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* buf_11;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct smart_pointer$1int* __result22__;
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2828, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2830, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
    /*i*/come_call_finalizer3(buf_11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value44,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* buf_12;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1long* __result23__;
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2835, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result23__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2837, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
    /*i*/come_call_finalizer3(buf_12,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result23__;
}
static static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* buf_13;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct smart_pointer$1float* __result25__;
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2842, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result25__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 2844, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
    /*i*/come_call_finalizer3(buf_13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value52,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result25__;
}
static static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* buf_14;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1double* __result27__;
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2849, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result27__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 2851, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
    /*i*/come_call_finalizer3(buf_14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result27__;
}
static static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char* __result30__;
    __result30__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 2856, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result30__;
}
static static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result33__;
    __result33__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2861, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result33__;
}
static static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result36__;
    __result36__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 2866, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result36__;
}
static static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result39__;
    __result39__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 2871, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result39__;
}
static static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result42__;
    __result42__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 2876, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result42__;
}
static static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result45__;
    __result45__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 2881, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result45__;
}
static static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result48__;
    __result48__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 2886, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result48__;
}
static static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 2891, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result52__;
    __result52__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 2896, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result54__;
    __result54__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 2901, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result56__;
    __result56__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 2906, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result58__;
    __result58__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 2911, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result58__;
}
static static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 2916, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 2921, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
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
static static inline unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static static inline unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static static inline unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static static inline unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static static inline unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value113 = (void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=xsprintf(msg,self)));
    /* U11 */__right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=xsprintf(msg,self)));
    /* U11 */__right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=xsprintf(msg,self)));
    /* U11 */__right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static static inline char* string_printable(char* str){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
char* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value116=string_printable(str)));
    /* U11 */__right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

// body function
static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result9__;
    __dec_obj1=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result9__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result9__;
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
struct smart_pointer$1short* __result12__;
    __dec_obj3=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result12__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result12__;
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
struct smart_pointer$1int* __result14__;
    __dec_obj5=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result14__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result14__;
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
struct smart_pointer$1long* __result16__;
    __dec_obj7=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result16__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result16__;
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
struct smart_pointer$1charp* __result19__;
    __dec_obj9=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result19__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result19__;
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
struct smart_pointer$1float* __result24__;
    __dec_obj11=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result24__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result24__;
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
struct smart_pointer$1double* __result26__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result26__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result26__;
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
struct list$1char* __result29__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_15=0;    i_15<num_value;    i_15++    ){
        list$1char_push_back(self,values[i_15]);
    }
    __result29__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result29__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
struct list_item$1char* litem_16;
void* __right_value59 = (void*)0;
struct list_item$1char* litem_17;
void* __right_value60 = (void*)0;
struct list_item$1char* litem_18;
struct list$1char* __result28__;
    if(    self->len==0) {
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 230, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 240, "list_item$1char"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 250, "list_item$1char"))));
        litem_18->prev=self->tail;
        litem_18->next=((void*)0);
        litem_18->item=item;
        self->tail->next=litem_18;
        self->tail=litem_18;
    }
    self->len++;
    __result28__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result28__;
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
struct list$1charp* __result32__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_21=0;    i_21<num_value;    i_21++    ){
        list$1charp_push_back(self,values[i_21]);
    }
    __result32__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result32__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
struct list_item$1charp* litem_22;
void* __right_value64 = (void*)0;
struct list_item$1charp* litem_23;
void* __right_value65 = (void*)0;
struct list_item$1charp* litem_24;
struct list$1charp* __result31__;
    if(    self->len==0) {
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 230, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else if(    self->len==1) {
        litem_23=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 240, "list_item$1charp"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        litem_23->item=item;
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 250, "list_item$1charp"))));
        litem_24->prev=self->tail;
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail->next=litem_24;
        self->tail=litem_24;
    }
    self->len++;
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result31__;
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
struct list$1short* __result35__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1short_push_back(self,values[i_27]);
    }
    __result35__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result35__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value68 = (void*)0;
struct list_item$1short* litem_28;
void* __right_value69 = (void*)0;
struct list_item$1short* litem_29;
void* __right_value70 = (void*)0;
struct list_item$1short* litem_30;
struct list$1short* __result34__;
    if(    self->len==0) {
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 230, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 240, "list_item$1short"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 250, "list_item$1short"))));
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result34__;
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
struct list$1int* __result38__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_33=0;    i_33<num_value;    i_33++    ){
        list$1int_push_back(self,values[i_33]);
    }
    __result38__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result38__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
struct list_item$1int* litem_34;
void* __right_value74 = (void*)0;
struct list_item$1int* litem_35;
void* __right_value75 = (void*)0;
struct list_item$1int* litem_36;
struct list$1int* __result37__;
    if(    self->len==0) {
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 230, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1) {
        litem_35=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 240, "list_item$1int"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 250, "list_item$1int"))));
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result37__;
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
struct list$1long* __result41__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_39=0;    i_39<num_value;    i_39++    ){
        list$1long_push_back(self,values[i_39]);
    }
    __result41__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result41__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value78 = (void*)0;
struct list_item$1long* litem_40;
void* __right_value79 = (void*)0;
struct list_item$1long* litem_41;
void* __right_value80 = (void*)0;
struct list_item$1long* litem_42;
struct list$1long* __result40__;
    if(    self->len==0) {
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 230, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 240, "list_item$1long"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 250, "list_item$1long"))));
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result40__;
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
struct list$1float* __result44__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_45=0;    i_45<num_value;    i_45++    ){
        list$1float_push_back(self,values[i_45]);
    }
    __result44__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result44__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
struct list_item$1float* litem_46;
void* __right_value84 = (void*)0;
struct list_item$1float* litem_47;
void* __right_value85 = (void*)0;
struct list_item$1float* litem_48;
struct list$1float* __result43__;
    if(    self->len==0) {
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 230, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else if(    self->len==1) {
        litem_47=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 240, "list_item$1float"))));
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        litem_47->item=item;
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        litem_48=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 250, "list_item$1float"))));
        litem_48->prev=self->tail;
        litem_48->next=((void*)0);
        litem_48->item=item;
        self->tail->next=litem_48;
        self->tail=litem_48;
    }
    self->len++;
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result43__;
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
struct list$1double* __result47__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_51=0;    i_51<num_value;    i_51++    ){
        list$1double_push_back(self,values[i_51]);
    }
    __result47__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result47__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value88 = (void*)0;
struct list_item$1double* litem_52;
void* __right_value89 = (void*)0;
struct list_item$1double* litem_53;
void* __right_value90 = (void*)0;
struct list_item$1double* litem_54;
struct list$1double* __result46__;
    if(    self->len==0) {
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 230, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else if(    self->len==1) {
        litem_53=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 240, "list_item$1double"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        litem_53->item=item;
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 250, "list_item$1double"))));
        litem_54->prev=self->tail;
        litem_54->next=((void*)0);
        litem_54->item=item;
        self->tail->next=litem_54;
        self->tail=litem_54;
    }
    self->len++;
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result46__;
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
struct vector$1char* __result49__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 1024, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result49__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result49__;
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
struct vector$1charp* __result51__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 1024, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result51__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result51__;
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
struct vector$1short* __result53__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value99=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 1024, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result53__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
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
struct vector$1int* __result55__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 1024, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result55__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
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
struct vector$1long* __result57__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 1024, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result57__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
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
struct vector$1float* __result59__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 1024, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result59__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
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
struct vector$1double* __result61__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 1024, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result61__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result61__;
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
void* __right_value117 = (void*)0;
struct sSemicolonNode* __result67__;
    ((struct sNodeBase*)(__right_value117=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value117,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result67__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
char* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value118=__builtin_string("sSemicolonNode")));
    /* U11 */__right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
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
void* __right_value119 = (void*)0;
struct sLambdaNode* __result69__;
    ((struct sNodeBase*)(__right_value119=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value119,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
char* __result70__;
    __result70__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value120=__builtin_string("sLambdaNode")));
    /* U11 */__right_value120 = come_decrement_ref_count2(__right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_66;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
struct sType* result_type_67;
void* __right_value123 = (void*)0;
int block_level_68;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct CVALUE* come_value_69;
void* __right_value126 = (void*)0;
char* __dec_obj18;
void* __right_value163 = (void*)0;
struct sType* __dec_obj65;
_Bool __result90__;
    come_fun_66=info->come_fun;
    info->come_fun=self->mFun;
    result_type_67=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "sType")),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value123=make_define_var(result_type_67,"__result_obj__",(_Bool)0,info))));
        /* U11 */__right_value123 = come_decrement_ref_count2(__right_value123, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
    __dec_obj65=come_value_69->type;
    come_value_69->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_69->var=((void*)0);
    add_come_last_code(info,"%s",come_value_69->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_69));
    info->come_fun=come_fun_66;
    __result90__ = (_Bool)1;
    /*i*/come_call_finalizer3(result_type_67,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_69,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result90__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result71__;
void* __right_value127 = (void*)0;
struct sType* result_70;
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
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value159 = (void*)0;
struct sNode* __dec_obj61;
void* __right_value160 = (void*)0;
char* __dec_obj62;
void* __right_value161 = (void*)0;
char* __dec_obj63;
void* __right_value162 = (void*)0;
char* __dec_obj64;
struct sType* __result88__;
    if(    self==(void*)0) {
        __result71__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result71__;
    }
    result_70=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_70->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj42=result_70->mNoSolvedGenericsType;
        result_70->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj42,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj43=result_70->mOriginalLoadVarType;
        result_70->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
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
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj60=result_70->mChannelType;
        result_70->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
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
        result_70->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_70->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_70->mNoCallingDestructor=self->mNoCallingDestructor;
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
        __dec_obj61=result_70->mSizeNum;
        result_70->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_70->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj62=result_70->mOriginalTypeName;
        result_70->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        result_70->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_70->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_70->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj63=result_70->mAsmName;
        result_70->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_70->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_70->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_70->mLambdaArrayNum=self->mLambdaArrayNum;
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
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj64=result_70->mTupleName;
        result_70->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        /*G*/ __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result88__ = gComeFunResultObject = __result_obj__ = result_70;
    /*i*/come_call_finalizer3(result_70,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result72__;
void* __right_value128 = (void*)0;
struct tuple1$1sTypeph* result_71;
void* __right_value129 = (void*)0;
struct sType* __dec_obj19;
struct tuple1$1sTypeph* __result73__;
    if(    self==(void*)0) {
        __result72__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_71=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj19=result_71->v1;
        result_71->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result73__ = gComeFunResultObject = __result_obj__ = result_71;
    /*i*/come_call_finalizer3(result_71,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj20;
struct tuple1$1sTypeph* __dec_obj22;
char* __dec_obj24;
struct list$1sTypeph* __dec_obj25;
struct list$1sNodeph* __dec_obj27;
struct list$1sTypeph* __dec_obj29;
struct list$1charph* __dec_obj30;
struct tuple1$1sTypeph* __dec_obj32;
struct sNode* __dec_obj34;
struct tuple1$1sTypeph* __dec_obj35;
struct sNode* __dec_obj37;
char* __dec_obj38;
char* __dec_obj39;
char* __dec_obj40;
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
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj24=self->mGenericsName;
            /*G*/ __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj25=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj27=self->mArrayNum;
            come_call_finalizer3(__dec_obj27,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj29=self->mParamTypes;
            come_call_finalizer3(__dec_obj29,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj30=self->mParamNames;
            come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj32=self->mResultType;
            come_call_finalizer3(__dec_obj32,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj34=self->mAlignas;
            /* U1 */ if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj35=self->mChannelType;
            come_call_finalizer3(__dec_obj35,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj40=self->mTupleName;
            /*G*/ __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct sType* __dec_obj26;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj26=self->item;
            come_call_finalizer3(__dec_obj26,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct sNode* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            /* U1 */ if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); };
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
char* __dec_obj31;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj31=self->item;
            /*G*/ __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
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
struct sType* __dec_obj36;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj36=self->v1;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj41;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj41=self->v1;
            come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result74__;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1sTypeph* result_84;
struct list_item$1sTypeph* it_85;
void* __right_value138 = (void*)0;
struct list$1sTypeph* __result77__;
    if(    self==((void*)0)) {
        __result74__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    result_84=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 146, "list$1sTypeph"))));
    it_85=self->head;
    while(it_85!=((void*)0)) {
        list$1sTypeph_add(result_84,(struct sType*)come_increment_ref_count(sType_clone(it_85->item)));
        it_85=it_85->next;
    }
    __result77__ = gComeFunResultObject = __result_obj__ = result_84;
    /*i*/come_call_finalizer3(result_84,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value135 = (void*)0;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj45;
void* __right_value136 = (void*)0;
struct list_item$1sTypeph* litem_87;
struct sType* __dec_obj46;
void* __right_value137 = (void*)0;
struct list_item$1sTypeph* litem_88;
struct sType* __dec_obj47;
struct list$1sTypeph* __result76__;
    if(    self->len==0) {
        litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 160, "list_item$1sTypeph"))));
        litem_86->prev=((void*)0);
        litem_86->next=((void*)0);
        __dec_obj45=litem_86->item;
        litem_86->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_86;
        self->head=litem_86;
    }
    else if(    self->len==1) {
        litem_87=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value136=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 170, "list_item$1sTypeph"))));
        litem_87->prev=self->head;
        litem_87->next=((void*)0);
        __dec_obj46=litem_87->item;
        litem_87->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_87;
        self->head->next=litem_87;
    }
    else {
        litem_88=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value137=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 180, "list_item$1sTypeph"))));
        litem_88->prev=self->tail;
        litem_88->next=((void*)0);
        __dec_obj47=litem_88->item;
        litem_88->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_88;
        self->tail=litem_88;
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
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct list$1sNodeph* result_89;
struct list_item$1sNodeph* it_90;
void* __right_value146 = (void*)0;
struct list$1sNodeph* __result83__;
    if(    self==((void*)0)) {
        __result78__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result78__;
    }
    result_89=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 146, "list$1sNodeph"))));
    it_90=self->head;
    while(it_90!=((void*)0)) {
        list$1sNodeph_add(result_89,(struct sNode*)come_increment_ref_count(sNode_clone(it_90->item)));
        it_90=it_90->next;
    }
    __result83__ = gComeFunResultObject = __result_obj__ = result_89;
    /*i*/come_call_finalizer3(result_89,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value142 = (void*)0;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj49;
void* __right_value143 = (void*)0;
struct list_item$1sNodeph* litem_92;
struct sNode* __dec_obj50;
void* __right_value144 = (void*)0;
struct list_item$1sNodeph* litem_93;
struct sNode* __dec_obj51;
struct list$1sNodeph* __result80__;
    if(    self->len==0) {
        litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value142=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 160, "list_item$1sNodeph"))));
        litem_91->prev=((void*)0);
        litem_91->next=((void*)0);
        __dec_obj49=litem_91->item;
        litem_91->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_91;
        self->head=litem_91;
    }
    else if(    self->len==1) {
        litem_92=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 170, "list_item$1sNodeph"))));
        litem_92->prev=self->head;
        litem_92->next=((void*)0);
        __dec_obj50=litem_92->item;
        litem_92->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_92;
        self->head->next=litem_92;
    }
    else {
        litem_93=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 180, "list_item$1sNodeph"))));
        litem_93->prev=self->tail;
        litem_93->next=((void*)0);
        __dec_obj51=litem_93->item;
        litem_93->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_93;
        self->tail=litem_93;
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
void* __right_value145 = (void*)0;
struct sNode* result_94;
struct sNode* __result82__;
    if(    self==(void*)0) {
        __result81__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result81__;
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
    __result82__ = gComeFunResultObject = __result_obj__ = result_94;
    if(result_94) { result_94 = come_decrement_ref_count2(result_94, ((struct sNode*)result_94)->finalize, ((struct sNode*)result_94)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result84__;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct list$1charph* result_95;
struct list_item$1charph* it_96;
void* __right_value154 = (void*)0;
struct list$1charph* __result87__;
    if(    self==((void*)0)) {
        __result84__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result84__;
    }
    result_95=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 146, "list$1charph"))));
    it_96=self->head;
    while(it_96!=((void*)0)) {
        list$1charph_add(result_95,(char*)come_increment_ref_count(string_clone(it_96->item)));
        it_96=it_96->next;
    }
    __result87__ = gComeFunResultObject = __result_obj__ = result_95;
    /*i*/come_call_finalizer3(result_95,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value151 = (void*)0;
struct list_item$1charph* litem_97;
char* __dec_obj54;
void* __right_value152 = (void*)0;
struct list_item$1charph* litem_98;
char* __dec_obj55;
void* __right_value153 = (void*)0;
struct list_item$1charph* litem_99;
char* __dec_obj56;
struct list$1charph* __result86__;
    if(    self->len==0) {
        litem_97=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value151=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 160, "list_item$1charph"))));
        litem_97->prev=((void*)0);
        litem_97->next=((void*)0);
        __dec_obj54=litem_97->item;
        litem_97->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_97;
        self->head=litem_97;
    }
    else if(    self->len==1) {
        litem_98=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value152=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 170, "list_item$1charph"))));
        litem_98->prev=self->head;
        litem_98->next=((void*)0);
        __dec_obj55=litem_98->item;
        litem_98->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_98;
        self->head->next=litem_98;
    }
    else {
        litem_99=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value153=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 180, "list_item$1charph"))));
        litem_99->prev=self->tail;
        litem_99->next=((void*)0);
        __dec_obj56=litem_99->item;
        litem_99->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_99;
        self->tail=litem_99;
    }
    self->len++;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value164 = (void*)0;
struct list_item$1CVALUEph* litem_100;
struct CVALUE* __dec_obj66;
void* __right_value165 = (void*)0;
struct list_item$1CVALUEph* litem_101;
struct CVALUE* __dec_obj70;
void* __right_value166 = (void*)0;
struct list_item$1CVALUEph* litem_102;
struct CVALUE* __dec_obj71;
struct list$1CVALUEph* __result89__;
    if(    self->len==0) {
        litem_100=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value164=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 230, "list_item$1CVALUEph"))));
        litem_100->prev=((void*)0);
        litem_100->next=((void*)0);
        __dec_obj66=litem_100->item;
        litem_100->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj66,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_100;
        self->head=litem_100;
    }
    else if(    self->len==1) {
        litem_101=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value165=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 240, "list_item$1CVALUEph"))));
        litem_101->prev=self->head;
        litem_101->next=((void*)0);
        __dec_obj70=litem_101->item;
        litem_101->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj70,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_101;
        self->head->next=litem_101;
    }
    else {
        litem_102=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value166=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 250, "list_item$1CVALUEph"))));
        litem_102->prev=self->tail;
        litem_102->next=((void*)0);
        __dec_obj71=litem_102->item;
        litem_102->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj71,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_102;
        self->tail=litem_102;
    }
    self->len++;
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj67;
struct sType* __dec_obj68;
char* __dec_obj69;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj67=self->c_value;
            /*G*/ __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj68=self->type;
            come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj69=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value167 = (void*)0;
struct sFun* __dec_obj72;
struct sFunNode* __result91__;
    ((struct sNodeBase*)(__right_value167=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value167,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj72=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj72,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value168 = (void*)0;
char* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value168=__builtin_string("sFunNode")));
    /* U11 */__right_value168 = come_decrement_ref_count2(__right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_103;
char* come_fun_name_104;
void* __right_value169 = (void*)0;
char* __dec_obj90;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct sType* result_type_105;
void* __right_value172 = (void*)0;
int block_level_106;
void* __right_value173 = (void*)0;
char* __dec_obj91;
_Bool __result93__;
    come_fun_103=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_104=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj90=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    /*G*/ __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_105=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value172=make_define_var(result_type_105,"__result_obj__",(_Bool)0,info))));
            /* U11 */__right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_106=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_106;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value173=xsprintf("come_heap_final();\n"))));
            /* U11 */__right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_103;
    __dec_obj91=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_104);
    /*G*/ __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result93__ = (_Bool)1;
    /* U13 */come_fun_name_104 = come_decrement_ref_count2(come_fun_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result93__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj73;
struct sType* __dec_obj74;
struct list$1sTypeph* __dec_obj75;
struct list$1charph* __dec_obj76;
struct list$1charph* __dec_obj77;
struct sType* __dec_obj78;
struct sBlock* __dec_obj79;
struct buffer* __dec_obj82;
struct buffer* __dec_obj83;
struct buffer* __dec_obj84;
struct buffer* __dec_obj85;
char* __dec_obj86;
char* __dec_obj87;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj73=self->mName;
            /*G*/ __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj74=self->mResultType;
            come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj75=self->mParamTypes;
            come_call_finalizer3(__dec_obj75,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj76=self->mParamNames;
            come_call_finalizer3(__dec_obj76,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj77=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj77,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj78=self->mLambdaType;
            come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj79=self->mBlock;
            come_call_finalizer3(__dec_obj79,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj82=self->mSource;
            come_call_finalizer3(__dec_obj82,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj83=self->mSourceHead;
            come_call_finalizer3(__dec_obj83,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj84=self->mSourceHead2;
            come_call_finalizer3(__dec_obj84,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj85=self->mSourceDefer;
            come_call_finalizer3(__dec_obj85,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj86=self->mComeHeader;
            /*G*/ __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj87=self->mDeclareSName;
            /*G*/ __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj80;
struct sVarTable* __dec_obj81;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj80=self->mNodes;
            come_call_finalizer3(__dec_obj80,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj81=self->mVarTable;
            come_call_finalizer3(__dec_obj81,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
struct list$1sNodeph* __dec_obj92;
struct sBlock* __result94__;
    __dec_obj92=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "list$1sNodeph"))));
    come_call_finalizer3(__dec_obj92,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value176 = (void*)0;
struct sType* __dec_obj93;
void* __right_value177 = (void*)0;
struct list$1charph* __dec_obj94;
void* __right_value178 = (void*)0;
struct list$1charph* __dec_obj95;
char* __dec_obj96;
struct sType* __dec_obj97;
struct list$1sTypeph* __dec_obj98;
struct list$1charph* __dec_obj99;
struct list$1charph* __dec_obj100;
char* __dec_obj101;
void* __right_value179 = (void*)0;
char* __dec_obj102;
struct sGenericsFun* __result95__;
    __dec_obj93=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(sType_clone(impl_type));
    come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj94=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_type_names));
    come_call_finalizer3(__dec_obj94,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj95=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(method_generics_type_names));
    come_call_finalizer3(__dec_obj95,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj96=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    /*G*/ __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj97=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj98=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj98,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj99=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj99,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj100=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj100,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj101=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    /*G*/ __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj102=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    /*G*/ __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
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
    return __result95__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj103;
struct list$1charph* __dec_obj104;
struct list$1charph* __dec_obj105;
char* __dec_obj106;
struct sType* __dec_obj107;
struct list$1sTypeph* __dec_obj108;
struct list$1charph* __dec_obj109;
struct list$1charph* __dec_obj110;
char* __dec_obj111;
char* __dec_obj112;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj103=self->mImplType;
            come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj104=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj104,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj105=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj105,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj106=self->mName;
            /*G*/ __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj107=self->mResultType;
            come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj108=self->mParamTypes;
            come_call_finalizer3(__dec_obj108,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj109=self->mParamNames;
            come_call_finalizer3(__dec_obj109,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj110=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj110,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj111=self->mBlock;
            /*G*/ __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj112=self->mGenericsSName;
            /*G*/ __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
struct sBlock* result_107;
int sline_top_108;
int block_level_109;
char* p_saved_110;
int sline_saved_111;
char* sname_saved_112;
void* __right_value182 = (void*)0;
char* __dec_obj113;
char* __dec_obj114;
struct map$2charphcharph* __dec_obj115;
char* p_115;
int sline_116;
char* sname_117;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
char* module_name_118;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
struct list$1charph* params_119;
void* __right_value187 = (void*)0;
char* word_120;
void* __right_value188 = (void*)0;
char* __dec_obj116;
void* __right_value189 = (void*)0;
char* __dec_obj117;
struct sBlock* __result100__;
struct sClassModule* module_124;
void* __right_value190 = (void*)0;
void* __right_value196 = (void*)0;
struct map$2charphcharph* __dec_obj123;
int i_128;
struct list$1charph* o2_saved_129;
char* it_132;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
char* __dec_obj124;
void* __right_value204 = (void*)0;
struct sNode* node_179;
void* __right_value205 = (void*)0;
char* __dec_obj125;
_Bool omit_semicolon_183;
void* __right_value209 = (void*)0;
char* __dec_obj129;
char* head_198;
void* __right_value210 = (void*)0;
struct sNode* value_199;
char* tail_200;
void* __right_value211 = (void*)0;
struct sNode* __dec_obj130;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct sNode* node_202;
void* __right_value214 = (void*)0;
char* __dec_obj131;
struct sNode* node_203;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value219 = (void*)0;
struct sNode* __dec_obj134;
void* __right_value220 = (void*)0;
struct sNode* __dec_obj135;
_Bool omit_semicolon_205;
char* p_206;
char* head_207;
void* __right_value221 = (void*)0;
char* source_208;
void* __right_value222 = (void*)0;
struct sNode* node_209;
struct sBlock* __result139__;
node_203 = (void*)0;
    result_107=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 159, "sBlock")),info));
    sline_top_108=info->sline_top;
    info->sline_top=info->sline;
    block_level_109=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_110=((void*)0);
        sline_saved_111=0;
        sname_saved_112=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_110) {
                if(                *info->p==0) {
                    info->p=p_saved_110;
                    info->sline=sline_saved_111;
                    __dec_obj113=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_112));
                    /*G*/ __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_110=((void*)0);
                    sline_saved_111=0;
                    __dec_obj114=sname_saved_112;
                    sname_saved_112=((void*)0);
                    /*G*/ __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj115=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj115,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
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
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value183=parse_word(info)));
                /* U11 */__right_value183 = come_decrement_ref_count2(__right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_118=(char*)come_increment_ref_count(parse_word(info));
                params_119=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 211, "list$1charph"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_120=(char*)come_increment_ref_count(parse_word(info));
                        list$1charph_add(params_119,(char*)come_increment_ref_count(word_120));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid source end");
                            exit(2);
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            /* U13 */word_120 = come_decrement_ref_count2(word_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        /* U13 */word_120 = come_decrement_ref_count2(word_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_110=info->p;
                sline_saved_111=info->sline;
                __dec_obj116=sname_saved_112;
                sname_saved_112=(char*)come_increment_ref_count(__builtin_string(info->sname));
                /*G*/ __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj117=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_118));
                /*G*/ __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                map$2charphsClassModulephp_operator_load_element(info->modules,module_name_118)==((void*)0)) {
                    err_msg(info,"module not found");
                    __result100__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    /* U13 */module_name_118 = come_decrement_ref_count2(module_name_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(params_119,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */sname_saved_112 = come_decrement_ref_count2(sname_saved_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_107,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result100__;
                }
                module_124=((struct sClassModule*)come_null_check(map$2charphsClassModulephp_operator_load_element(info->modules,module_name_118), "05function.c", 258, 0));
                if(                list$1charph_length(module_124->mParams)!=list$1charph_length(params_119)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj123=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "05function.c", 265, "map$2charphcharph"))));
                come_call_finalizer3(__dec_obj123,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_128=0;
                for(                o2_saved_129=(struct list$1charph*)come_increment_ref_count((module_124->mParams)),it_132=list$1charph_begin((o2_saved_129));                !list$1charph_end((o2_saved_129));                it_132=list$1charph_next((o2_saved_129))                ){
                    ((char*)(__right_value202=map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_132)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(list$1charphp_operator_load_element(params_119,i_128), "05function.c", 269, 1)))))));
                    /* U11 */__right_value202 = come_decrement_ref_count2(__right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_128++;
                }
                /*i*/come_call_finalizer3(o2_saved_129,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_124->mText;
                info->sline=module_124->mSLine;
                __dec_obj124=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_124->mSName));
                /*G*/ __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */module_name_118 = come_decrement_ref_count2(module_name_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(params_119,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_179=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj125=info->sname;
            info->sname=(char*)come_increment_ref_count(node_179->sname(node_179->_protocol_obj));
            /*G*/ __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_179->sline(node_179->_protocol_obj);
            if(            node_179==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_179));
            parse_sharp_v5(info);
            if(            node_179->terminated(node_179->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_183=(_Bool)1;
            if(            node_179->terminated(node_179->_protocol_obj)) {
                omit_semicolon_183=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_183=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_107->mOmitSemicolon=omit_semicolon_183;
                if(                omit_semicolon_183&&in_function) {
                    list$1sNodeph_delete(result_107->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_115;
                    info->sline=sline_116;
                    __dec_obj129=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_117));
                    /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_198=info->p;
                    value_199=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_200=info->p;
                    __dec_obj130=value_199;
                    value_199=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_199),info));
                    /* U1 */ if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_201[tail_200-head_198+1];
                    memset(&buf_201, 0, sizeof(char)                    *(tail_200-head_198+1)                    );
                    memcpy(buf_201,head_198,tail_200-head_198);
                    buf_201[tail_200-head_198]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_202=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_199),(char*)come_increment_ref_count(__builtin_string(buf_201)),info));
                    list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_202));
                    if(value_199) { value_199 = come_decrement_ref_count2(value_199, ((struct sNode*)value_199)->finalize, ((struct sNode*)value_199)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_202) { node_202 = come_decrement_ref_count2(node_202, ((struct sNode*)node_202)->finalize, ((struct sNode*)node_202)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_179) { node_179 = come_decrement_ref_count2(node_179, ((struct sNode*)node_179)->finalize, ((struct sNode*)node_179)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_199) { value_199 = come_decrement_ref_count2(value_199, ((struct sNode*)value_199)->finalize, ((struct sNode*)value_199)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_202) { node_202 = come_decrement_ref_count2(node_202, ((struct sNode*)node_202)->finalize, ((struct sNode*)node_202)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node_179) { node_179 = come_decrement_ref_count2(node_179, ((struct sNode*)node_179)->finalize, ((struct sNode*)node_179)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            if(node_179) { node_179 = come_decrement_ref_count2(node_179, ((struct sNode*)node_179)->finalize, ((struct sNode*)node_179)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(        p_saved_110) {
            if(            info->p==0) {
                info->p=p_saved_110;
                info->sline=sline_saved_111;
                __dec_obj131=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_112));
                /*G*/ __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_110=((void*)0);
                sline_saved_111=0;
            }
        }
        /* U13 */sname_saved_112 = come_decrement_ref_count2(sname_saved_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 366, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value216=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 366, "sSemicolonNode")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj134=node_203;
            node_203=(struct sNode*)come_increment_ref_count(_inf_value1);
            /* U1 */ if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value216,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_203));
        }
        else {
            __dec_obj135=node_203;
            node_203=(struct sNode*)come_increment_ref_count(expression_v13(info));
            /* U1 */ if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_203==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_203->terminated(node_203->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_205=(_Bool)1;
            if(            node_203->terminated(node_203->_protocol_obj)) {
                omit_semicolon_205=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_205=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_107->mOmitSemicolon=omit_semicolon_205;
            list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_203));
        }
        if(node_203) { node_203 = come_decrement_ref_count2(node_203, ((struct sNode*)node_203)->finalize, ((struct sNode*)node_203)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_206=info->p;
        head_207=info->head;
        source_208=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_208;
        info->head=source_208;
        node_209=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_209==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_209));
        info->p=p_206;
        info->head=head_207;
        /* U13 */source_208 = come_decrement_ref_count2(source_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_209) { node_209 = come_decrement_ref_count2(node_209, ((struct sNode*)node_209)->finalize, ((struct sNode*)node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_109;
    __result139__ = gComeFunResultObject = __result_obj__ = result_107;
    /*i*/come_call_finalizer3(result_107,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result139__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_113;
int i_114;
    for(    i_113=0;    i_113<self->size;    i_113++    ){
        if(        self->item_existance[i_113]) {
            if(            1) {
                /* U13 */self->items[i_113] = come_decrement_ref_count2(self->items[i_113], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_114=0;    i_114<self->size;    i_114++    ){
        if(        self->item_existance[i_114]) {
            if(            1) {
                /* U13 */self->keys[i_114] = come_decrement_ref_count2(self->keys[i_114], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_121;
unsigned int hash_122;
unsigned int it_123;
struct sClassModule* __result96__;
struct sClassModule* __result97__;
struct sClassModule* __result98__;
struct sClassModule* __result99__;
default_value_121 = (void*)0;
    memset(&default_value_121,0,sizeof(struct sClassModule*));
    hash_122=string_get_hash_key(((char*)key))%self->size;
    it_123=hash_122;
    while((_Bool)1) {
        if(        self->item_existance[it_123]) {
            if(            string_equals(self->keys[it_123],key)) {
                __result96__ = gComeFunResultObject = __result_obj__ = self->items[it_123];
                /*i*/come_call_finalizer3(default_value_121,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result96__;
            }
            it_123++;
            if(            it_123>=self->size) {
                it_123=0;
            }
            else if(            it_123==hash_122) {
                __result97__ = gComeFunResultObject = __result_obj__ = default_value_121;
                /*i*/come_call_finalizer3(default_value_121,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result97__;
            }
        }
        else {
            __result98__ = gComeFunResultObject = __result_obj__ = default_value_121;
            /*i*/come_call_finalizer3(default_value_121,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result98__;
        }
    }
    __result99__ = gComeFunResultObject = __result_obj__ = default_value_121;
    /*i*/come_call_finalizer3(default_value_121,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj118;
char* __dec_obj119;
struct list$1charph* __dec_obj120;
char* __dec_obj121;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj118=self->mName;
            /*G*/ __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj119=self->mText;
            /*G*/ __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj120=self->mParams;
            come_call_finalizer3(__dec_obj120,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj121=self->mSName;
            /*G*/ __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
int i_125;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct list$1charp* __dec_obj122;
struct map$2charphcharph* __result102__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value191=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1407, "char*%"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value192=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1408, "char*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value193=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1409, "bool"))));
    for(    i_125=0;    i_125<128;    i_125++    ){
        self->item_existance[i_125]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj122=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1419, "list$1charp"))));
    come_call_finalizer3(__dec_obj122,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_126;
int i_127;
    for(    i_126=0;    i_126<self->size;    i_126++    ){
        if(        self->item_existance[i_126]) {
            if(            1) {
                /* U13 */self->items[i_126] = come_decrement_ref_count2(self->items[i_126], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_127=0;    i_127<self->size;    i_127++    ){
        if(        self->item_existance[i_127]) {
            if(            1) {
                /* U13 */self->keys[i_127] = come_decrement_ref_count2(self->keys[i_127], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_130;
char* __result103__;
char* __result104__;
char* result_131;
char* __result105__;
result_130 = (void*)0;
result_131 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_130,0,sizeof(char*));
        __result103__ = gComeFunResultObject = __result_obj__ = result_130;
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    self->it=self->head;
    if(    self->it) {
        __result104__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    memset(&result_131,0,sizeof(char*));
    __result105__ = gComeFunResultObject = __result_obj__ = result_131;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_133;
char* __result106__;
char* __result107__;
char* result_134;
char* __result108__;
result_133 = (void*)0;
result_134 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_133,0,sizeof(char*));
        __result106__ = gComeFunResultObject = __result_obj__ = result_133;
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result107__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    memset(&result_134,0,sizeof(char*));
    __result108__ = gComeFunResultObject = __result_obj__ = result_134;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_135;
int i_136;
char* __result109__;
char* default_value_137;
char* __result110__;
default_value_137 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_135=self->head;
    i_136=0;
    while(it_135!=((void*)0)) {
        if(        position==i_136) {
            __result109__ = gComeFunResultObject = __result_obj__ = it_135->item;
            gComeFunResultObject = (void*)0;
            return __result109__;
        }
        it_135=it_135->next;
        i_136++;
    }
    memset(&default_value_137,0,sizeof(char*));
    __result110__ = gComeFunResultObject = __result_obj__ = default_value_137;
    /* U13 */default_value_137 = come_decrement_ref_count2(default_value_137, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
char* __result132__;
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    __result132__ = gComeFunResultObject = __result_obj__ = item;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_155;
unsigned int it_156;
_Bool same_key_exist_173;
char* it2_176;
struct map$2charphcharph* __result131__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_155=string_get_hash_key(key)%self->size;
    it_156=hash_155;
    while((_Bool)1) {
        if(        self->item_existance[it_156]) {
            if(            string_equals(self->keys[it_156],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_156]);
                    /* U13 */self->keys[it_156] = come_decrement_ref_count2(self->keys[it_156], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_156]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_156]);
                    self->keys[it_156]=key;
                }
                if(                1) {
                    /* U13 */self->items[it_156] = come_decrement_ref_count2(self->items[it_156], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_156]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_156]=item;
                }
                break;
            }
            it_156++;
            if(            it_156>=self->size) {
                it_156=0;
            }
            else if(            it_156==hash_155) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_156]=(_Bool)1;
            if(            1) {
                self->keys[it_156]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_156]=key;
            }
            if(            1) {
                self->items[it_156]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_156]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_173=(_Bool)0;
    for(    it2_176=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_176=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_176,key)) {
            same_key_exist_173=(_Bool)1;
        }
    }
    if(    !same_key_exist_173) {
        list$1charp_push_back(self->key_list,key);
    }
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_138;
void* __right_value199 = (void*)0;
char** keys_139;
void* __right_value200 = (void*)0;
char** items_140;
void* __right_value201 = (void*)0;
_Bool* item_existance_141;
int len_142;
char* it_145;
char* default_value_148;
char* it2_149;
unsigned int hash_152;
int n_153;
char* default_value_154;
default_value_148 = (void*)0;
default_value_154 = (void*)0;
    size_138=self->size*10;
    keys_139=(char**)come_increment_ref_count(((char**)(__right_value199=(char**)come_calloc(1, sizeof(char*)*(1*(size_138)), "/usr/local/include/comelang.h", 1635, "char*%"))));
    items_140=(char**)come_increment_ref_count(((char**)(__right_value200=(char**)come_calloc(1, sizeof(char*)*(1*(size_138)), "/usr/local/include/comelang.h", 1636, "char*%"))));
    item_existance_141=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value201=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_138)), "/usr/local/include/comelang.h", 1637, "bool"))));
    len_142=0;
    for(    it_145=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_145=map$2charphcharph_next(self)    ){
        memset(&default_value_148,0,sizeof(char*));
        it2_149=map$2charphcharph_at(self,it_145,default_value_148);
        hash_152=string_get_hash_key(it_145)%size_138;
        n_153=hash_152;
        while((_Bool)1) {
            if(            item_existance_141[n_153]) {
                n_153++;
                if(                n_153>=size_138) {
                    n_153=0;
                }
                else if(                n_153==hash_152) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_141[n_153]=(_Bool)1;
                keys_139[n_153]=it_145;
                items_140[n_153]=map$2charphcharph_at(self,it_145,default_value_154);
                len_142++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_139;
    self->items=items_140;
    self->item_existance=item_existance_141;
    self->size=size_138;
    self->len=len_142;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_143;
char* __result111__;
char* __result112__;
char* result_144;
char* __result113__;
result_143 = (void*)0;
result_144 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_143,0,sizeof(char*));
        __result111__ = gComeFunResultObject = __result_obj__ = result_143;
        gComeFunResultObject = (void*)0;
        return __result111__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result112__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    memset(&result_144,0,sizeof(char*));
    __result113__ = gComeFunResultObject = __result_obj__ = result_144;
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_146;
char* __result114__;
char* __result115__;
char* result_147;
char* __result116__;
result_146 = (void*)0;
result_147 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_146,0,sizeof(char*));
        __result114__ = gComeFunResultObject = __result_obj__ = result_146;
        gComeFunResultObject = (void*)0;
        return __result114__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result115__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    memset(&result_147,0,sizeof(char*));
    __result116__ = gComeFunResultObject = __result_obj__ = result_147;
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_150;
unsigned int it_151;
char* __result117__;
char* __result118__;
char* __result119__;
char* __result120__;
    hash_150=string_get_hash_key(((char*)key))%self->size;
    it_151=hash_150;
    while((_Bool)1) {
        if(        self->item_existance[it_151]) {
            if(            string_equals(self->keys[it_151],key)) {
                __result117__ = gComeFunResultObject = __result_obj__ = self->items[it_151];
                /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result117__;
            }
            it_151++;
            if(            it_151>=self->size) {
                it_151=0;
            }
            else if(            it_151==hash_150) {
                __result118__ = gComeFunResultObject = __result_obj__ = default_value;
                /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result118__;
            }
        }
        else {
            __result119__ = gComeFunResultObject = __result_obj__ = default_value;
            /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result119__;
        }
    }
    __result120__ = gComeFunResultObject = __result_obj__ = default_value;
    /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_157;
struct list_item$1charp* it_158;
struct list$1charp* __result124__;
    it2_157=0;
    it_158=self->head;
    while(it_158!=((void*)0)) {
        if(        charp_equals(it_158->item,item)) {
            list$1charp_delete(self,it2_157,it2_157+1);
            break;
        }
        it2_157++;
        it_158=it_158->next;
    }
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result124__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_159;
struct list$1charp* __result121__;
struct list_item$1charp* it_162;
int i_163;
struct list_item$1charp* prev_it_164;
struct list_item$1charp* it_165;
int i_166;
struct list_item$1charp* prev_it_167;
struct list_item$1charp* it_168;
struct list_item$1charp* head_prev_it_169;
struct list_item$1charp* tail_it_170;
int i_171;
struct list_item$1charp* prev_it_172;
struct list$1charp* __result123__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_159=tail;
        tail=head;
        head=tmp_159;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result121__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result121__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_162=self->head;
        i_163=0;
        while(it_162!=((void*)0)) {
            if(            i_163<tail) {
                prev_it_164=it_162;
                it_162=it_162->next;
                i_163++;
                /*i*/come_call_finalizer3(prev_it_164,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_163==tail) {
                self->head=it_162;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_162=it_162->next;
                i_163++;
            }
        }
    }
    else if(    tail==self->len) {
        it_165=self->head;
        i_166=0;
        while(it_165!=((void*)0)) {
            if(            i_166==head) {
                self->tail=it_165->prev;
                self->tail->next=((void*)0);
            }
            if(            i_166>=head) {
                prev_it_167=it_165;
                it_165=it_165->next;
                i_166++;
                /*i*/come_call_finalizer3(prev_it_167,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_165=it_165->next;
                i_166++;
            }
        }
    }
    else {
        it_168=self->head;
        head_prev_it_169=((void*)0);
        tail_it_170=((void*)0);
        i_171=0;
        while(it_168!=((void*)0)) {
            if(            i_171==head) {
                head_prev_it_169=it_168->prev;
            }
            if(            i_171==tail) {
                tail_it_170=it_168;
            }
            if(            i_171>=head&&i_171<tail) {
                prev_it_172=it_168;
                it_168=it_168->next;
                i_171++;
                /*i*/come_call_finalizer3(prev_it_172,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_168=it_168->next;
                i_171++;
            }
        }
        if(        head_prev_it_169!=((void*)0)) {
            head_prev_it_169->next=tail_it_170;
        }
        if(        tail_it_170!=((void*)0)) {
            tail_it_170->prev=head_prev_it_169;
        }
    }
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_160;
struct list_item$1charp* prev_it_161;
struct list$1charp* __result122__;
    it_160=self->head;
    while(it_160!=((void*)0)) {
        prev_it_161=it_160;
        it_160=it_160->next;
        /*i*/come_call_finalizer3(prev_it_161,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_174;
char* __result125__;
char* __result126__;
char* result_175;
char* __result127__;
result_174 = (void*)0;
result_175 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_174,0,sizeof(char*));
        __result125__ = gComeFunResultObject = __result_obj__ = result_174;
        gComeFunResultObject = (void*)0;
        return __result125__;
    }
    self->it=self->head;
    if(    self->it) {
        __result126__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result126__;
    }
    memset(&result_175,0,sizeof(char*));
    __result127__ = gComeFunResultObject = __result_obj__ = result_175;
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_177;
char* __result128__;
char* __result129__;
char* result_178;
char* __result130__;
result_177 = (void*)0;
result_178 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_177,0,sizeof(char*));
        __result128__ = gComeFunResultObject = __result_obj__ = result_177;
        gComeFunResultObject = (void*)0;
        return __result128__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result129__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result129__;
    }
    memset(&result_178,0,sizeof(char*));
    __result130__ = gComeFunResultObject = __result_obj__ = result_178;
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value206 = (void*)0;
struct list_item$1sNodeph* litem_180;
struct sNode* __dec_obj126;
void* __right_value207 = (void*)0;
struct list_item$1sNodeph* litem_181;
struct sNode* __dec_obj127;
void* __right_value208 = (void*)0;
struct list_item$1sNodeph* litem_182;
struct sNode* __dec_obj128;
struct list$1sNodeph* __result133__;
    if(    self->len==0) {
        litem_180=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value206=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 230, "list_item$1sNodeph"))));
        litem_180->prev=((void*)0);
        litem_180->next=((void*)0);
        __dec_obj126=litem_180->item;
        litem_180->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_180;
        self->head=litem_180;
    }
    else if(    self->len==1) {
        litem_181=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value207=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 240, "list_item$1sNodeph"))));
        litem_181->prev=self->head;
        litem_181->next=((void*)0);
        __dec_obj127=litem_181->item;
        litem_181->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_181;
        self->head->next=litem_181;
    }
    else {
        litem_182=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value208=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 250, "list_item$1sNodeph"))));
        litem_182->prev=self->tail;
        litem_182->next=((void*)0);
        __dec_obj128=litem_182->item;
        litem_182->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_182;
        self->tail=litem_182;
    }
    self->len++;
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_184;
struct list$1sNodeph* __result134__;
struct list_item$1sNodeph* it_187;
int i_188;
struct list_item$1sNodeph* prev_it_189;
struct list_item$1sNodeph* it_190;
int i_191;
struct list_item$1sNodeph* prev_it_192;
struct list_item$1sNodeph* it_193;
struct list_item$1sNodeph* head_prev_it_194;
struct list_item$1sNodeph* tail_it_195;
int i_196;
struct list_item$1sNodeph* prev_it_197;
struct list$1sNodeph* __result136__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_184=tail;
        tail=head;
        head=tmp_184;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result134__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_187=self->head;
        i_188=0;
        while(it_187!=((void*)0)) {
            if(            i_188<tail) {
                prev_it_189=it_187;
                it_187=it_187->next;
                i_188++;
                /*i*/come_call_finalizer3(prev_it_189,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_188==tail) {
                self->head=it_187;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_187=it_187->next;
                i_188++;
            }
        }
    }
    else if(    tail==self->len) {
        it_190=self->head;
        i_191=0;
        while(it_190!=((void*)0)) {
            if(            i_191==head) {
                self->tail=it_190->prev;
                self->tail->next=((void*)0);
            }
            if(            i_191>=head) {
                prev_it_192=it_190;
                it_190=it_190->next;
                i_191++;
                /*i*/come_call_finalizer3(prev_it_192,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_190=it_190->next;
                i_191++;
            }
        }
    }
    else {
        it_193=self->head;
        head_prev_it_194=((void*)0);
        tail_it_195=((void*)0);
        i_196=0;
        while(it_193!=((void*)0)) {
            if(            i_196==head) {
                head_prev_it_194=it_193->prev;
            }
            if(            i_196==tail) {
                tail_it_195=it_193;
            }
            if(            i_196>=head&&i_196<tail) {
                prev_it_197=it_193;
                it_193=it_193->next;
                i_196++;
                /*i*/come_call_finalizer3(prev_it_197,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_193=it_193->next;
                i_196++;
            }
        }
        if(        head_prev_it_194!=((void*)0)) {
            head_prev_it_194->next=tail_it_195;
        }
        if(        tail_it_195!=((void*)0)) {
            tail_it_195->prev=head_prev_it_194;
        }
    }
    __result136__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result136__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_185;
struct list_item$1sNodeph* prev_it_186;
struct list$1sNodeph* __result135__;
    it_185=self->head;
    while(it_185!=((void*)0)) {
        prev_it_186=it_185;
        it_185=it_185->next;
        /*i*/come_call_finalizer3(prev_it_186,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result135__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result135__;
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
char* __dec_obj132;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj132=self->sname;
            /*G*/ __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result137__;
void* __right_value217 = (void*)0;
struct sSemicolonNode* result_204;
void* __right_value218 = (void*)0;
char* __dec_obj133;
struct sSemicolonNode* __result138__;
    if(    self==(void*)0) {
        __result137__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result137__;
    }
    result_204=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"));
    if(    self!=((void*)0)) {
        result_204->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj133=result_204->sname;
        result_204->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result138__ = gComeFunResultObject = __result_obj__ = result_204;
    /*i*/come_call_finalizer3(result_204,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_210;
struct sVarTable* old_table_211;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct sVarTable* __dec_obj136;
struct sVarTable* current_loop_vtable_212;
struct list$1sTypeph* param_types__213;
struct list$1charph* param_names__214;
int i_215;
struct list$1charph* o2_saved_216;
char* name_217;
void* __right_value225 = (void*)0;
struct sType* type_218;
void* __right_value226 = (void*)0;
int block_level_222;
int i_223;
struct list$1sNodeph* o2_saved_224;
struct sNode* node_227;
struct list$1sRightValueObjectph* right_value_objects_230;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj141;
char* __dec_obj142;
char* __dec_obj143;
int stack_num_before_235;
int sline_236;
void* __right_value229 = (void*)0;
char* sname_237;
void* __right_value230 = (void*)0;
char* __dec_obj144;
_Bool Value_238;
void* __right_value231 = (void*)0;
struct CVALUE* come_value_239;
void* __right_value236 = (void*)0;
struct CVALUE* come_value2_240;
void* __right_value237 = (void*)0;
char* __dec_obj148;
void* __right_value238 = (void*)0;
struct CVALUE* come_value2_242;
struct sVar* var__243;
void* __right_value239 = (void*)0;
struct CVALUE* come_value3_244;
void* __right_value240 = (void*)0;
_Bool _if_conditional1;
void* __right_value241 = (void*)0;
struct sType* __dec_obj149;
void* __right_value242 = (void*)0;
char* c_value_261;
void* __right_value243 = (void*)0;
char* __dec_obj150;
void* __right_value244 = (void*)0;
char* __dec_obj151;
void* __right_value245 = (void*)0;
char* __dec_obj152;
_Bool Value_262;
void* __right_value246 = (void*)0;
char* __dec_obj153;
struct list$1sRightValueObjectph* __dec_obj154;
void* __if_result__0_265 = (void*)0;
struct list$1sVarph* o2_saved_266;
struct sVar* it_269;
struct list$1sVarph* __dec_obj160;
memset(&i_215, 0, sizeof(int));
memset(&i_223, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_210=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_211=info->lv_table;
    if(    !no_var_table) {
        __dec_obj136=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 440, "sVarTable")),(_Bool)0,old_table_211));
        come_call_finalizer3(__dec_obj136,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_212=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__213=info->param_types;
    param_names__214=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_216=(param_names),name_217=list$1charph_begin((o2_saved_216));        !list$1charph_end((o2_saved_216));        name_217=list$1charph_next((o2_saved_216))        ){
            type_218=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_215), "05function.c", 458, 2))));
            type_218->mFunctionParam=(_Bool)1;
            type_218->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_217,(struct sType*)come_increment_ref_count(sType_clone(type_218)),info);
            i_215++;
            /*i*/come_call_finalizer3(type_218,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_222=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_224=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_227=list$1sNodeph_begin((o2_saved_224));        !list$1sNodeph_end((o2_saved_224));        node_227=list$1sNodeph_next((o2_saved_224))        ){
            right_value_objects_230=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj141=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 477, "list$1sRightValueObjectph"))));
            come_call_finalizer3(__dec_obj141,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj142=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            /*G*/ __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj143=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            /*G*/ __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_235=list$1CVALUEph_length(info->stack);
            sline_236=info->sline;
            sname_237=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_227->sline(node_227->_protocol_obj);
            __dec_obj144=info->sname;
            info->sname=(char*)come_increment_ref_count(node_227->sname(node_227->_protocol_obj));
            /*G*/ __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_223==list$1sNodeph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_238=node_compile(node_227,info);
                if(                !Value_238) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEph_length(info->stack)==stack_num_before_235+1) {
                    come_value_239=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_239->type->mClass->mName,"void")&&come_value_239->type->mPointerNum==0) {
                        come_value2_240=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_239));
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_240));
                        __dec_obj148=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_240->c_value));
                        /*G*/ __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_240,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_242=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_239));
                        var__243=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__243) {
                            come_value3_244=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 513, "CVALUE"));
                            if(                            var__243->mType->mClass=="void"&&var__243->mType->mPointerNum==1) {
                                if(                                (_if_conditional1=(!check_assign_type("invalid if result value",var__243->mType,((struct sType*)(__right_value240=sType_clone(come_value_239->type))),come_value3_244,info,(_Bool)1,(_Bool)1,info))),                                /*f*/come_call_finalizer3(__right_value240,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional1) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj149=var__243->mType;
                            var__243->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_239->type));
                            come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_239->type->mHeap) {
                                c_value_261=(char*)come_increment_ref_count(increment_ref_count_object(come_value_239->type,come_value_239->c_value,info));
                                __dec_obj150=come_value2_242->c_value;
                                come_value2_242->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__243->mCValueName,c_value_261));
                                /*G*/ __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                                /* U13 */c_value_261 = come_decrement_ref_count2(c_value_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj151=come_value2_242->c_value;
                                come_value2_242->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__243->mCValueName,come_value_239->c_value));
                                /*G*/ __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            /*i*/come_call_finalizer3(come_value3_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_242));
                        __dec_obj152=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_242->c_value));
                        /*G*/ __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_242,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(come_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_262=node_compile(node_227,info);
                if(                !Value_262) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_236;
            __dec_obj153=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_237));
            /*G*/ __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_235);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectph_reset(info->right_value_objects);
            }
            __dec_obj154=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_230);
            come_call_finalizer3(__dec_obj154,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_223++;
            /*i*/come_call_finalizer3(right_value_objects_230,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */sname_237 = come_decrement_ref_count2(sname_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_224,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_222==0) {
            for(            o2_saved_266=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_269=list$1sVarph_begin((o2_saved_266));            !list$1sVarph_end((o2_saved_266));            it_269=list$1sVarph_next((o2_saved_266))            ){
                free_object(it_269->mType,it_269->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            /*i*/come_call_finalizer3(o2_saved_266,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj160=info->match_it_var;
            __if_result__0_265=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj160,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(__if_result__0_265,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_211;
    info->block_level=block_level_222;
    info->param_types=param_types__213;
    info->param_names=param_names__214;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_212;
    info->inhibits_output_code=inhibits_output_code_210;
    return 0;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_219;
int i_220;
struct sType* __result140__;
struct sType* default_value_221;
struct sType* __result141__;
default_value_221 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_219=self->head;
    i_220=0;
    while(it_219!=((void*)0)) {
        if(        position==i_220) {
            __result140__ = gComeFunResultObject = __result_obj__ = it_219->item;
            gComeFunResultObject = (void*)0;
            return __result140__;
        }
        it_219=it_219->next;
        i_220++;
    }
    memset(&default_value_221,0,sizeof(struct sType*));
    __result141__ = gComeFunResultObject = __result_obj__ = default_value_221;
    /*i*/come_call_finalizer3(default_value_221,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result141__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_225;
struct sNode* __result142__;
struct sNode* __result143__;
struct sNode* result_226;
struct sNode* __result144__;
result_225 = (void*)0;
result_226 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_225,0,sizeof(struct sNode*));
        __result142__ = gComeFunResultObject = __result_obj__ = result_225;
        gComeFunResultObject = (void*)0;
        return __result142__;
    }
    self->it=self->head;
    if(    self->it) {
        __result143__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    memset(&result_226,0,sizeof(struct sNode*));
    __result144__ = gComeFunResultObject = __result_obj__ = result_226;
    gComeFunResultObject = (void*)0;
    return __result144__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_228;
struct sNode* __result145__;
struct sNode* __result146__;
struct sNode* result_229;
struct sNode* __result147__;
result_228 = (void*)0;
result_229 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_228,0,sizeof(struct sNode*));
        __result145__ = gComeFunResultObject = __result_obj__ = result_228;
        gComeFunResultObject = (void*)0;
        return __result145__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result146__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    memset(&result_229,0,sizeof(struct sNode*));
    __result147__ = gComeFunResultObject = __result_obj__ = result_229;
    gComeFunResultObject = (void*)0;
    return __result147__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result148__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result148__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_231;
struct list_item$1sRightValueObjectph* prev_it_232;
    it_231=self->head;
    while(it_231!=((void*)0)) {
        prev_it_232=it_231;
        it_231=it_231->next;
        /*i*/come_call_finalizer3(prev_it_232,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj137;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj137=self->item;
            come_call_finalizer3(__dec_obj137,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj138;
char* __dec_obj139;
char* __dec_obj140;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj138=self->mType;
            come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj139=self->mVarName;
            /*G*/ __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj140=self->mFunName;
            /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_233;
struct list_item$1sRightValueObjectph* prev_it_234;
    it_233=self->head;
    while(it_233!=((void*)0)) {
        prev_it_234=it_233;
        it_233=it_233->next;
        /*i*/come_call_finalizer3(prev_it_234,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct CVALUE* __result149__;
void* __right_value232 = (void*)0;
struct CVALUE* result_241;
void* __right_value233 = (void*)0;
char* __dec_obj145;
void* __right_value234 = (void*)0;
struct sType* __dec_obj146;
void* __right_value235 = (void*)0;
char* __dec_obj147;
struct CVALUE* __result150__;
    if(    self==(void*)0) {
        __result149__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    result_241=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj145=result_241->c_value;
        result_241->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        /*G*/ __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj146=result_241->type;
        result_241->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_241->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_241->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj147=result_241->c_value_without_right_value_objects;
        result_241->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        /*G*/ __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result150__ = gComeFunResultObject = __result_obj__ = result_241;
    /*i*/come_call_finalizer3(result_241,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result150__;
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
struct list_item$1tuple2$2charphsTypephph* it_245;
struct list_item$1tuple2$2charphsTypephph* it2_246;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_245=left->head;
    it2_246=right->head;
    while(it_245!=((void*)0)) {
        if(        !tuple2$2charphsTypeph_equals(it_245->item,it2_246->item)) {
            return (_Bool)0;
        }
        it_245=it_245->next;
        it2_246=it2_246->next;
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
struct list_item$1sTypeph* it_247;
struct list_item$1sTypeph* it2_248;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_247=left->head;
    it2_248=right->head;
    while(it_247!=((void*)0)) {
        if(        !sType_equals(it_247->item,it2_248->item)) {
            return (_Bool)0;
        }
        it_247=it_247->next;
        it2_248=it2_248->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_249;
struct list_item$1sNodeph* it2_250;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_249=left->head;
    it2_250=right->head;
    while(it_249!=((void*)0)) {
        if(        !sNode_equals(it_249->item,it2_250->item)) {
            return (_Bool)0;
        }
        it_249=it_249->next;
        it2_250=it2_250->next;
    }
    return (_Bool)1;
}

static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_251;
struct list_item$1charph* it2_252;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_251=left->head;
    it2_252=right->head;
    while(it_251!=((void*)0)) {
        if(        !string_equals(it_251->item,it2_252->item)) {
            return (_Bool)0;
        }
        it_251=it_251->next;
        it2_252=it2_252->next;
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
struct list_item$1tuple2$2charphsTypephph* it_253;
struct list_item$1tuple2$2charphsTypephph* it2_254;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_253=left->head;
    it2_254=right->head;
    while(it_253!=((void*)0)) {
        if(        !(tuple2$2charphsTypeph_operator_equals(it_253->item,it2_254->item))) {
            return (_Bool)0;
        }
        it_253=it_253->next;
        it2_254=it2_254->next;
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
    if(    !tuple1$1sTypeph_equals(left->mChannelType,right->mChannelType)) {
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
    if(    !bool_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
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
    if(    !int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
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
    if(    !string_equals(left->mTupleName,right->mTupleName)) {
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
    if(    tuple1$1sTypeph_operator_not_equals(left->mChannelType,right->mChannelType)) {
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
    if(    bool_operator_not_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
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
    if(    int_operator_not_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
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
    if(    string_operator_not_equals(left->mTupleName,right->mTupleName)) {
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
struct list_item$1sTypeph* it_255;
struct list_item$1sTypeph* it2_256;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_255=left->head;
    it2_256=right->head;
    while(it_255!=((void*)0)) {
        if(        !(sType_operator_equals(it_255->item,it2_256->item))) {
            return (_Bool)0;
        }
        it_255=it_255->next;
        it2_256=it2_256->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    return !list$1sNodeph_operator_equals(left,right);
}

static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_257;
struct list_item$1sNodeph* it2_258;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_257=left->head;
    it2_258=right->head;
    while(it_257!=((void*)0)) {
        if(        !(sNode_operator_equals(it_257->item,it2_258->item))) {
            return (_Bool)0;
        }
        it_257=it_257->next;
        it2_258=it2_258->next;
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
struct list_item$1charph* it_259;
struct list_item$1charph* it2_260;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_259=left->head;
    it2_260=right->head;
    while(it_259!=((void*)0)) {
        if(        !(string_operator_equals(it_259->item,it2_260->item))) {
            return (_Bool)0;
        }
        it_259=it_259->next;
        it2_260=it2_260->next;
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
struct list_item$1sRightValueObjectph* it_263;
struct list_item$1sRightValueObjectph* prev_it_264;
struct list$1sRightValueObjectph* __result151__;
    it_263=self->head;
    while(it_263!=((void*)0)) {
        prev_it_264=it_263;
        it_263=it_263->next;
        /*i*/come_call_finalizer3(prev_it_264,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result151__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_267;
struct sVar* __result152__;
struct sVar* __result153__;
struct sVar* result_268;
struct sVar* __result154__;
result_267 = (void*)0;
result_268 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_267,0,sizeof(struct sVar*));
        __result152__ = gComeFunResultObject = __result_obj__ = result_267;
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    self->it=self->head;
    if(    self->it) {
        __result153__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    memset(&result_268,0,sizeof(struct sVar*));
    __result154__ = gComeFunResultObject = __result_obj__ = result_268;
    gComeFunResultObject = (void*)0;
    return __result154__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_270;
struct sVar* __result155__;
struct sVar* __result156__;
struct sVar* result_271;
struct sVar* __result157__;
result_270 = (void*)0;
result_271 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_270,0,sizeof(struct sVar*));
        __result155__ = gComeFunResultObject = __result_obj__ = result_270;
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result156__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    memset(&result_271,0,sizeof(struct sVar*));
    __result157__ = gComeFunResultObject = __result_obj__ = result_271;
    gComeFunResultObject = (void*)0;
    return __result157__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_272;
struct list_item$1sVarph* prev_it_273;
    it_272=self->head;
    while(it_272!=((void*)0)) {
        prev_it_273=it_272;
        it_272=it_272->next;
        /*i*/come_call_finalizer3(prev_it_273,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj155;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj155=self->item;
            come_call_finalizer3(__dec_obj155,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj156;
char* __dec_obj157;
struct sType* __dec_obj158;
char* __dec_obj159;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj156=self->mName;
            /*G*/ __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj157=self->mCValueName;
            /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj158=self->mType;
            come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj159=self->mFunName;
            /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_274;
struct list_item$1sVarph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        /*i*/come_call_finalizer3(prev_it_275,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
char* head_276;
_Bool dquort_277;
_Bool squort_278;
int sline_279;
int nest_280;
char* tail_281;
void* __right_value247 = (void*)0;
char* buf_282;
void* __right_value248 = (void*)0;
char* __result158__;
    head_276=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_277=(_Bool)0;
        squort_278=(_Bool)0;
        sline_279=0;
        nest_280=0;
        while(1) {
            if(            dquort_277) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_279);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_277=!dquort_277;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_279);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_279);
                        exit(2);
                    }
                }
            }
            else if(            squort_278) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_279);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_278=!squort_278;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_279);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_279);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_279=info->sline;
                info->p++;
                squort_278=!squort_278;
            }
            else if(            *info->p==34) {
                sline_279=info->sline;
                info->p++;
                dquort_277=!dquort_277;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_280++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_280==0) {
                    skip_spaces_and_lf(info);
                    break;
                }
                nest_280--;
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
    tail_281=info->p;
    buf_282=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_281-head_276+1)), "05function.c", 745, "char"));
    memcpy(buf_282,head_276,tail_281-head_276);
    buf_282[tail_281-head_276]=0;
    __result158__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value248=__builtin_string(buf_282)));
    /* U13 */buf_282 = come_decrement_ref_count2(buf_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_283;
char* p3_284;
int i_285;
    terminated_283=(_Bool)0;
    p3_284=p;
    for(    i_285=0;    i_285<strlen(p2);    i_285++    ){
        if(        *p3_284==0) {
            terminated_283=(_Bool)1;
            break;
        }
        p3_284++;
    }
    return !terminated_283&&memcmp(p,p2,strlen(p2))==0;
}

char* parse_attribute(struct sInfo* info, _Bool parse_function_attribute){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct buffer* asm_fun_name_286;
int nest_287;
int nest_288;
int nest_289;
int nest_290;
int nest_291;
int brace_num_292;
int len_293;
_Bool in_dquort_294;
int brace_num_295;
int brace_num_296;
void* __right_value251 = (void*)0;
char* word_297;
int brace_num_298;
void* __right_value252 = (void*)0;
char* __result159__;
    asm_fun_name_286=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 768, "buffer"))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_287=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_287++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_287--;
                        if(                        nest_287==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_288=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_288++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_288--;
                        if(                        nest_288==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_289=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_289++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_289--;
                        if(                        nest_289==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_290=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_290++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_290--;
                        if(                        nest_290==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_291=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_291++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_291--;
                        if(                        nest_291==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
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
        else if(        strmemcmp(info->p,"__pure2")) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute__")) {
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_292=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_292++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_292--;
                        if(                        brace_num_292==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_293=0;
            if(            *info->p==40) {
                in_dquort_294=(_Bool)0;
                brace_num_295=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_294=!in_dquort_294;
                    }
                    else if(                    in_dquort_294) {
                        buffer_append_char(asm_fun_name_286,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_295++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_295--;
                        if(                        brace_num_295==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_296=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_296++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_296--;
                        if(                        brace_num_296==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        parse_function_attribute&&*info->p==95) {
            word_297=(char*)come_increment_ref_count(parse_word(info));
            if(            *info->p==40) {
                brace_num_298=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_298++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_298--;
                        if(                        brace_num_298==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            /* U13 */word_297 = come_decrement_ref_count2(word_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result159__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value252=buffer_to_string(asm_fun_name_286)));
    /*i*/come_call_finalizer3(asm_fun_name_286,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
char* head_299;
int head_sline_300;
void* __right_value253 = (void*)0;
char* buf_301;
void* __right_value254 = (void*)0;
struct sNode* node_302;
_Bool Value_303;
    while(*info->p) {
        parse_sharp_v5(info);
        head_299=info->p;
        head_sline_300=info->sline;
        buf_301=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            /* U13 */buf_301 = come_decrement_ref_count2(buf_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_302=(struct sNode*)come_increment_ref_count(top_level_v99(buf_301,head_299,head_sline_300,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_302!=((void*)0)) {
            Value_303=node_compile(node_302,info);
            if(            !Value_303) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            /* U13 */buf_301 = come_decrement_ref_count2(buf_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_302) { node_302 = come_decrement_ref_count2(node_302, ((struct sNode*)node_302)->finalize, ((struct sNode*)node_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        /* U13 */buf_301 = come_decrement_ref_count2(buf_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_302) { node_302 = come_decrement_ref_count2(node_302, ((struct sNode*)node_302)->finalize, ((struct sNode*)node_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value255 = (void*)0;
char* name_304;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct sType* result_type_305;
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
struct sType* __list_values1___306[5];
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1sTypeph* param_types_311;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
char* __list_values2___312[5];
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1charph* param_names_317;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1charph* param_default_parametors_318;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct sFun* main_fun_319;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
char* name_341;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct sType* result_type_342;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct sType* __list_values3___343[1];
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1sTypeph* param_types_344;
void* __right_value303 = (void*)0;
char* __list_values4___345[1];
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct list$1charph* param_names_346;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct list$1charph* param_default_parametors_347;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sFun* main_fun_348;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
char* name_349;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sType* result_type_350;
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
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct sType* __list_values5___351[7];
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct list$1sTypeph* param_types_352;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
char* __list_values6___353[7];
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct list$1charph* param_names_354;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct list$1charph* param_default_parametors_355;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sFun* main_fun_356;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
char* name_357;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sType* result_type_358;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sType* __list_values7___359[5];
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct list$1sTypeph* param_types_360;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
char* __list_values8___361[5];
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct list$1charph* param_names_362;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct list$1charph* param_default_parametors_363;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct sFun* main_fun_364;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
char* name_365;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sType* result_type_366;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sType* __list_values9___367[1];
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct list$1sTypeph* param_types_368;
void* __right_value384 = (void*)0;
char* __list_values10___369[1];
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct list$1charph* param_names_370;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct list$1charph* param_default_parametors_371;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct sFun* main_fun_372;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
char* name_373;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sType* result_type_374;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sType* __list_values11___375[4];
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct list$1sTypeph* param_types_376;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
char* __list_values12___377[4];
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct list$1charph* param_names_378;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct list$1charph* param_default_parametors_379;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sFun* main_fun_380;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
char* name_381;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct sType* result_type_382;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sType* __list_values13___383[3];
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct list$1sTypeph* param_types_384;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
char* __list_values14___385[3];
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1charph* param_names_386;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct list$1charph* param_default_parametors_387;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sFun* main_fun_388;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
char* name_389;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct sType* result_type_390;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sType* __list_values15___391[1];
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1sTypeph* param_types_392;
void* __right_value453 = (void*)0;
char* __list_values16___393[1];
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct list$1charph* param_names_394;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct list$1charph* param_default_parametors_395;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sFun* main_fun_396;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
char* name_397;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sType* result_type_398;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sType* __list_values17___399[3];
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct list$1sTypeph* param_types_400;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
char* __list_values18___401[3];
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct list$1charph* param_names_402;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct list$1charph* param_default_parametors_403;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sFun* main_fun_404;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
char* name_405;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* result_type_406;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct list$1sTypeph* param_types_407;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct list$1charph* param_names_408;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct list$1charph* param_default_parametors_409;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sFun* main_fun_410;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
char* name_411;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* result_type_412;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sType* __list_values19___413[4];
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct list$1sTypeph* param_types_414;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
char* __list_values20___415[4];
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct list$1charph* param_names_416;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct list$1charph* param_default_parametors_417;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sFun* main_fun_418;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
char* name_419;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sType* result_type_420;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct list$1sTypeph* param_types_421;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct list$1charph* param_names_422;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct list$1charph* param_default_parametors_423;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sFun* fun_424;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
char* name_425;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sType* result_type_426;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct list$1sTypeph* param_types_427;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct list$1charph* param_names_428;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct list$1charph* param_default_parametors_429;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sFun* fun_430;
void* __right_value553 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_304=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_305=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1141, "sType")),"void*",(_Bool)0,info));
        param_types_311=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___306[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value259=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1142, "sType")),"int",(_Bool)0,info)))),
__list_values1___306[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value261=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1142, "sType")),"int",(_Bool)0,info)))),
__list_values1___306[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value263=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1142, "sType")),"char*",(_Bool)0,info)))),
__list_values1___306[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value265=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1142, "sType")),"int",(_Bool)0,info)))),
__list_values1___306[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value267=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1142, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1142, "struct list$1sTypeph")),5,__list_values1___306)));
        /*g*/come_call_finalizer3(__right_value259,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value261,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value263,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value265,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value267,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_317=(struct list$1charph*)come_increment_ref_count((__list_values2___312[0]=(char*)come_increment_ref_count(((char*)(__right_value273=__builtin_string("count")))),
__list_values2___312[1]=(char*)come_increment_ref_count(((char*)(__right_value274=__builtin_string("size")))),
__list_values2___312[2]=(char*)come_increment_ref_count(((char*)(__right_value275=__builtin_string("sname")))),
__list_values2___312[3]=(char*)come_increment_ref_count(((char*)(__right_value276=__builtin_string("sline")))),
__list_values2___312[4]=(char*)come_increment_ref_count(((char*)(__right_value277=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1143, "struct list$1charph")),5,__list_values2___312)));
        /* U11 */__right_value273 = come_decrement_ref_count2(__right_value273, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value274 = come_decrement_ref_count2(__right_value274, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_318=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1144, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_318,((void*)0));
        list$1charph_push_back(param_default_parametors_318,((void*)0));
        list$1charph_push_back(param_default_parametors_318,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_318,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_318,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_319=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1150, "sFun")),(char*)come_increment_ref_count(name_304),(struct sType*)come_increment_ref_count(result_type_305),(struct list$1sTypeph*)come_increment_ref_count(param_types_311),(struct list$1charph*)come_increment_ref_count(param_names_317),(struct list$1charph*)come_increment_ref_count(param_default_parametors_318),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_304)),(struct sFun*)come_increment_ref_count(main_fun_319));
        /* U13 */name_304 = come_decrement_ref_count2(name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_305,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_311,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_317,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_318,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_319,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_341=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_342=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1161, "sType")),"void*",(_Bool)0,info));
        param_types_344=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___343[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value300=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1162, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1162, "struct list$1sTypeph")),1,__list_values3___343)));
        /*g*/come_call_finalizer3(__right_value300,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_346=(struct list$1charph*)come_increment_ref_count((__list_values4___345[0]=(char*)come_increment_ref_count(((char*)(__right_value303=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1163, "struct list$1charph")),1,__list_values4___345)));
        /* U11 */__right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_347=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1164, "list$1charph"))));
        main_fun_348=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1165, "sFun")),(char*)come_increment_ref_count(name_341),(struct sType*)come_increment_ref_count(result_type_342),(struct list$1sTypeph*)come_increment_ref_count(param_types_344),(struct list$1charph*)come_increment_ref_count(param_names_346),(struct list$1charph*)come_increment_ref_count(param_default_parametors_347),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_341)),(struct sFun*)come_increment_ref_count(main_fun_348));
        /* U13 */name_341 = come_decrement_ref_count2(name_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_342,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_344,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_346,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_347,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_348,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_349=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_350=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1176, "sType")),"void",(_Bool)0,info));
        param_types_352=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___351[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value317=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1177, "sType")),"void*",(_Bool)0,info)))),
__list_values5___351[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value319=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1177, "sType")),"void*",(_Bool)0,info)))),
__list_values5___351[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value321=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1177, "sType")),"void*",(_Bool)0,info)))),
__list_values5___351[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value323=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1177, "sType")),"void*",(_Bool)0,info)))),
__list_values5___351[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value325=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1177, "sType")),"int",(_Bool)0,info)))),
__list_values5___351[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value327=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1177, "sType")),"int",(_Bool)0,info)))),
__list_values5___351[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value329=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1177, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1177, "struct list$1sTypeph")),7,__list_values5___351)));
        /*g*/come_call_finalizer3(__right_value317,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value319,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value321,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value323,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value325,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value327,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value329,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_354=(struct list$1charph*)come_increment_ref_count((__list_values6___353[0]=(char*)come_increment_ref_count(((char*)(__right_value332=__builtin_string("fun")))),
__list_values6___353[1]=(char*)come_increment_ref_count(((char*)(__right_value333=__builtin_string("mem")))),
__list_values6___353[2]=(char*)come_increment_ref_count(((char*)(__right_value334=__builtin_string("protocol_fun")))),
__list_values6___353[3]=(char*)come_increment_ref_count(((char*)(__right_value335=__builtin_string("protocol_obj")))),
__list_values6___353[4]=(char*)come_increment_ref_count(((char*)(__right_value336=__builtin_string("call_finalizer_only")))),
__list_values6___353[5]=(char*)come_increment_ref_count(((char*)(__right_value337=__builtin_string("no_decrement")))),
__list_values6___353[6]=(char*)come_increment_ref_count(((char*)(__right_value338=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1178, "struct list$1charph")),7,__list_values6___353)));
        /* U11 */__right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_355=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1179, "list$1charph"))));
        main_fun_356=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1180, "sFun")),(char*)come_increment_ref_count(name_349),(struct sType*)come_increment_ref_count(result_type_350),(struct list$1sTypeph*)come_increment_ref_count(param_types_352),(struct list$1charph*)come_increment_ref_count(param_names_354),(struct list$1charph*)come_increment_ref_count(param_default_parametors_355),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_349)),(struct sFun*)come_increment_ref_count(main_fun_356));
        /* U13 */name_349 = come_decrement_ref_count2(name_349, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_350,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_352,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_354,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_355,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_356,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_357=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_358=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1191, "sType")),"void*",(_Bool)0,info));
        param_types_360=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___359[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value352=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1192, "sType")),"void*",(_Bool)0,info)))),
__list_values7___359[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value354=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1192, "sType")),"void*",(_Bool)0,info)))),
__list_values7___359[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value356=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1192, "sType")),"void*",(_Bool)0,info)))),
__list_values7___359[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value358=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1192, "sType")),"bool",(_Bool)0,info)))),
__list_values7___359[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value360=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1192, "sType")),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1192, "struct list$1sTypeph")),5,__list_values7___359)));
        /*g*/come_call_finalizer3(__right_value352,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value354,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value356,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value358,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value360,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_362=(struct list$1charph*)come_increment_ref_count((__list_values8___361[0]=(char*)come_increment_ref_count(((char*)(__right_value363=__builtin_string("mem")))),
__list_values8___361[1]=(char*)come_increment_ref_count(((char*)(__right_value364=__builtin_string("protocol_fun")))),
__list_values8___361[2]=(char*)come_increment_ref_count(((char*)(__right_value365=__builtin_string("protocol_obj")))),
__list_values8___361[3]=(char*)come_increment_ref_count(((char*)(__right_value366=__builtin_string("no_decrement")))),
__list_values8___361[4]=(char*)come_increment_ref_count(((char*)(__right_value367=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1193, "struct list$1charph")),5,__list_values8___361)));
        /* U11 */__right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_363=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1194, "list$1charph"))));
        main_fun_364=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1195, "sFun")),(char*)come_increment_ref_count(name_357),(struct sType*)come_increment_ref_count(result_type_358),(struct list$1sTypeph*)come_increment_ref_count(param_types_360),(struct list$1charph*)come_increment_ref_count(param_names_362),(struct list$1charph*)come_increment_ref_count(param_default_parametors_363),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_357)),(struct sFun*)come_increment_ref_count(main_fun_364));
        /* U13 */name_357 = come_decrement_ref_count2(name_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_358,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_360,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_362,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_363,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_364,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_365=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_366=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1206, "sType")),"void",(_Bool)0,info));
        param_types_368=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___367[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value381=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1207, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1207, "struct list$1sTypeph")),1,__list_values9___367)));
        /*g*/come_call_finalizer3(__right_value381,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_370=(struct list$1charph*)come_increment_ref_count((__list_values10___369[0]=(char*)come_increment_ref_count(((char*)(__right_value384=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1208, "struct list$1charph")),1,__list_values10___369)));
        /* U11 */__right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_371=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1209, "list$1charph"))));
        main_fun_372=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1210, "sFun")),(char*)come_increment_ref_count(name_365),(struct sType*)come_increment_ref_count(result_type_366),(struct list$1sTypeph*)come_increment_ref_count(param_types_368),(struct list$1charph*)come_increment_ref_count(param_names_370),(struct list$1charph*)come_increment_ref_count(param_default_parametors_371),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_365)),(struct sFun*)come_increment_ref_count(main_fun_372));
        /* U13 */name_365 = come_decrement_ref_count2(name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_366,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_368,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_370,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_371,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_372,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_373=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_374=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1221, "sType")),"void*",(_Bool)0,info));
        param_types_376=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___375[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value398=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1222, "sType")),"void*",(_Bool)0,info)))),
__list_values11___375[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value400=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1222, "sType")),"char*",(_Bool)0,info)))),
__list_values11___375[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value402=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1222, "sType")),"int",(_Bool)0,info)))),
__list_values11___375[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value404=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1222, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1222, "struct list$1sTypeph")),4,__list_values11___375)));
        /*g*/come_call_finalizer3(__right_value398,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value400,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value402,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value404,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_378=(struct list$1charph*)come_increment_ref_count((__list_values12___377[0]=(char*)come_increment_ref_count(((char*)(__right_value407=__builtin_string("block")))),
__list_values12___377[1]=(char*)come_increment_ref_count(((char*)(__right_value408=__builtin_string("sname")))),
__list_values12___377[2]=(char*)come_increment_ref_count(((char*)(__right_value409=__builtin_string("sline")))),
__list_values12___377[3]=(char*)come_increment_ref_count(((char*)(__right_value410=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1223, "struct list$1charph")),4,__list_values12___377)));
        /* U11 */__right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_379=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1224, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_379,((void*)0));
        list$1charph_push_back(param_default_parametors_379,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_379,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_379,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_380=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1229, "sFun")),(char*)come_increment_ref_count(name_373),(struct sType*)come_increment_ref_count(result_type_374),(struct list$1sTypeph*)come_increment_ref_count(param_types_376),(struct list$1charph*)come_increment_ref_count(param_names_378),(struct list$1charph*)come_increment_ref_count(param_default_parametors_379),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_373)),(struct sFun*)come_increment_ref_count(main_fun_380));
        /* U13 */name_373 = come_decrement_ref_count2(name_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_374,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_376,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_378,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_379,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_380,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_381=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_382=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1240, "sType")),"void*",(_Bool)0,info));
        param_types_384=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___383[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value427=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1241, "sType")),"void*",(_Bool)0,info)))),
__list_values13___383[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value429=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1241, "sType")),"int",(_Bool)0,info)))),
__list_values13___383[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value431=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1241, "sType")),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1241, "struct list$1sTypeph")),3,__list_values13___383)));
        /*g*/come_call_finalizer3(__right_value427,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value429,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value431,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_386=(struct list$1charph*)come_increment_ref_count((__list_values14___385[0]=(char*)come_increment_ref_count(((char*)(__right_value434=__builtin_string("b")))),
__list_values14___385[1]=(char*)come_increment_ref_count(((char*)(__right_value435=__builtin_string("c")))),
__list_values14___385[2]=(char*)come_increment_ref_count(((char*)(__right_value436=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1242, "struct list$1charph")),3,__list_values14___385)));
        /* U11 */__right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_387=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1243, "list$1charph"))));
        main_fun_388=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1244, "sFun")),(char*)come_increment_ref_count(name_381),(struct sType*)come_increment_ref_count(result_type_382),(struct list$1sTypeph*)come_increment_ref_count(param_types_384),(struct list$1charph*)come_increment_ref_count(param_names_386),(struct list$1charph*)come_increment_ref_count(param_default_parametors_387),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_381)),(struct sFun*)come_increment_ref_count(main_fun_388));
        /* U13 */name_381 = come_decrement_ref_count2(name_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_382,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_384,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_386,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_387,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_388,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_389=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_390=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1255, "sType")),"char*",(_Bool)0,info));
        param_types_392=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___391[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value450=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1256, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1256, "struct list$1sTypeph")),1,__list_values15___391)));
        /*g*/come_call_finalizer3(__right_value450,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_394=(struct list$1charph*)come_increment_ref_count((__list_values16___393[0]=(char*)come_increment_ref_count(((char*)(__right_value453=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1257, "struct list$1charph")),1,__list_values16___393)));
        /* U11 */__right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_395=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1258, "list$1charph"))));
        main_fun_396=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1259, "sFun")),(char*)come_increment_ref_count(name_389),(struct sType*)come_increment_ref_count(result_type_390),(struct list$1sTypeph*)come_increment_ref_count(param_types_392),(struct list$1charph*)come_increment_ref_count(param_names_394),(struct list$1charph*)come_increment_ref_count(param_default_parametors_395),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_389)),(struct sFun*)come_increment_ref_count(main_fun_396));
        /* U13 */name_389 = come_decrement_ref_count2(name_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_390,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_392,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_394,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_395,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_396,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_397=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_398=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1270, "sType")),"void",(_Bool)0,info));
        param_types_400=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___399[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value467=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1271, "sType")),"int",(_Bool)0,info)))),
__list_values17___399[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value469=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1271, "sType")),"int",(_Bool)0,info)))),
__list_values17___399[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value471=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1271, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1271, "struct list$1sTypeph")),3,__list_values17___399)));
        /*g*/come_call_finalizer3(__right_value467,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value469,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value471,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_402=(struct list$1charph*)come_increment_ref_count((__list_values18___401[0]=(char*)come_increment_ref_count(((char*)(__right_value474=xsprintf("come_malloc")))),
__list_values18___401[1]=(char*)come_increment_ref_count(((char*)(__right_value475=xsprintf("come_debug")))),
__list_values18___401[2]=(char*)come_increment_ref_count(((char*)(__right_value476=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1272, "struct list$1charph")),3,__list_values18___401)));
        /* U11 */__right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_403=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1273, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_403,((void*)0));
        main_fun_404=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1275, "sFun")),(char*)come_increment_ref_count(name_397),(struct sType*)come_increment_ref_count(result_type_398),(struct list$1sTypeph*)come_increment_ref_count(param_types_400),(struct list$1charph*)come_increment_ref_count(param_names_402),(struct list$1charph*)come_increment_ref_count(param_default_parametors_403),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_397)),(struct sFun*)come_increment_ref_count(main_fun_404));
        /* U13 */name_397 = come_decrement_ref_count2(name_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_398,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_400,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_402,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_403,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_404,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_405=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_406=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1286, "sType")),"void",(_Bool)0,info));
        param_types_407=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1287, "list$1sTypeph"))));
        param_names_408=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1288, "list$1charph"))));
        param_default_parametors_409=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1289, "list$1charph"))));
        main_fun_410=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1290, "sFun")),(char*)come_increment_ref_count(name_405),(struct sType*)come_increment_ref_count(result_type_406),(struct list$1sTypeph*)come_increment_ref_count(param_types_407),(struct list$1charph*)come_increment_ref_count(param_names_408),(struct list$1charph*)come_increment_ref_count(param_default_parametors_409),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_405)),(struct sFun*)come_increment_ref_count(main_fun_410));
        /* U13 */name_405 = come_decrement_ref_count2(name_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_406,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_407,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_408,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_409,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_410,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_411=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_412=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1301, "sType")),"void*",(_Bool)0,info));
        param_types_414=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___413[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value504=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1302, "sType")),"void*",(_Bool)0,info)))),
__list_values19___413[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value506=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1302, "sType")),"char*",(_Bool)0,info)))),
__list_values19___413[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value508=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1302, "sType")),"int",(_Bool)0,info)))),
__list_values19___413[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value510=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1302, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1302, "struct list$1sTypeph")),4,__list_values19___413)));
        /*g*/come_call_finalizer3(__right_value504,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value506,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value508,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value510,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_416=(struct list$1charph*)come_increment_ref_count((__list_values20___415[0]=(char*)come_increment_ref_count(((char*)(__right_value513=__builtin_string("mem")))),
__list_values20___415[1]=(char*)come_increment_ref_count(((char*)(__right_value514=__builtin_string("sname")))),
__list_values20___415[2]=(char*)come_increment_ref_count(((char*)(__right_value515=__builtin_string("sline")))),
__list_values20___415[3]=(char*)come_increment_ref_count(((char*)(__right_value516=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1303, "struct list$1charph")),4,__list_values20___415)));
        /* U11 */__right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value514 = come_decrement_ref_count2(__right_value514, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value516 = come_decrement_ref_count2(__right_value516, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_417=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1304, "list$1charph"))));
        main_fun_418=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1305, "sFun")),(char*)come_increment_ref_count(name_411),(struct sType*)come_increment_ref_count(result_type_412),(struct list$1sTypeph*)come_increment_ref_count(param_types_414),(struct list$1charph*)come_increment_ref_count(param_names_416),(struct list$1charph*)come_increment_ref_count(param_default_parametors_417),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_411)),(struct sFun*)come_increment_ref_count(main_fun_418));
        /* U13 */name_411 = come_decrement_ref_count2(name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_412,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_414,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_416,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_417,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_418,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_419=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_420=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1316, "sType")),"void",(_Bool)0,info));
        param_types_421=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1317, "list$1sTypeph"))));
        param_names_422=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1318, "list$1charph"))));
        param_default_parametors_423=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1319, "list$1charph"))));
        fun_424=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1320, "sFun")),(char*)come_increment_ref_count(name_419),(struct sType*)come_increment_ref_count(result_type_420),(struct list$1sTypeph*)come_increment_ref_count(param_types_421),(struct list$1charph*)come_increment_ref_count(param_names_422),(struct list$1charph*)come_increment_ref_count(param_default_parametors_423),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_419)),(struct sFun*)come_increment_ref_count(fun_424));
        /* U13 */name_419 = come_decrement_ref_count2(name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_420,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_421,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_422,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_423,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_424,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_425=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_426=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1331, "sType")),"void",(_Bool)0,info));
        param_types_427=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1332, "list$1sTypeph"))));
        param_names_428=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1333, "list$1charph"))));
        param_default_parametors_429=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1334, "list$1charph"))));
        fun_430=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1335, "sFun")),(char*)come_increment_ref_count(name_425),(struct sType*)come_increment_ref_count(result_type_426),(struct list$1sTypeph*)come_increment_ref_count(param_types_427),(struct list$1charph*)come_increment_ref_count(param_names_428),(struct list$1charph*)come_increment_ref_count(param_default_parametors_429),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_425)),(struct sFun*)come_increment_ref_count(fun_430));
        /* U13 */name_425 = come_decrement_ref_count2(name_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_428,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_429,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_430,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_307;
struct list$1sTypeph* __result161__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_307=0;    i_307<num_value;    i_307++    ){
        list$1sTypeph_push_back(self,values[i_307]);
    }
    __result161__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
struct list_item$1sTypeph* litem_308;
struct sType* __dec_obj161;
void* __right_value269 = (void*)0;
struct list_item$1sTypeph* litem_309;
struct sType* __dec_obj162;
void* __right_value270 = (void*)0;
struct list_item$1sTypeph* litem_310;
struct sType* __dec_obj163;
struct list$1sTypeph* __result160__;
    if(    self->len==0) {
        litem_308=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value268=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 230, "list_item$1sTypeph"))));
        litem_308->prev=((void*)0);
        litem_308->next=((void*)0);
        __dec_obj161=litem_308->item;
        litem_308->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_308;
        self->head=litem_308;
    }
    else if(    self->len==1) {
        litem_309=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value269=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 240, "list_item$1sTypeph"))));
        litem_309->prev=self->head;
        litem_309->next=((void*)0);
        __dec_obj162=litem_309->item;
        litem_309->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_309;
        self->head->next=litem_309;
    }
    else {
        litem_310=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value270=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 250, "list_item$1sTypeph"))));
        litem_310->prev=self->tail;
        litem_310->next=((void*)0);
        __dec_obj163=litem_310->item;
        litem_310->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_310;
        self->tail=litem_310;
    }
    self->len++;
    __result160__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_313;
struct list$1charph* __result163__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_313=0;    i_313<num_value;    i_313++    ){
        list$1charph_push_back(self,values[i_313]);
    }
    __result163__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result163__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_314;
char* __dec_obj164;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_315;
char* __dec_obj165;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_316;
char* __dec_obj166;
struct list$1charph* __result162__;
    if(    self->len==0) {
        litem_314=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 230, "list_item$1charph"))));
        litem_314->prev=((void*)0);
        litem_314->next=((void*)0);
        __dec_obj164=litem_314->item;
        litem_314->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_314;
        self->head=litem_314;
    }
    else if(    self->len==1) {
        litem_315=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 240, "list_item$1charph"))));
        litem_315->prev=self->head;
        litem_315->next=((void*)0);
        __dec_obj165=litem_315->item;
        litem_315->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_315;
        self->head->next=litem_315;
    }
    else {
        litem_316=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 250, "list_item$1charph"))));
        litem_316->prev=self->tail;
        litem_316->next=((void*)0);
        __dec_obj166=litem_316->item;
        litem_316->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_316;
        self->tail=litem_316;
    }
    self->len++;
    __result162__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_337;
unsigned int it_338;
_Bool same_key_exist_339;
char* it2_340;
struct map$2charphsFunph* __result174__;
    if(    self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_337=string_get_hash_key(key)%self->size;
    it_338=hash_337;
    while((_Bool)1) {
        if(        self->item_existance[it_338]) {
            if(            string_equals(self->keys[it_338],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_338]);
                    /* U13 */self->keys[it_338] = come_decrement_ref_count2(self->keys[it_338], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_338]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_338]);
                    self->keys[it_338]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_338],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_338]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_338]=item;
                }
                break;
            }
            it_338++;
            if(            it_338>=self->size) {
                it_338=0;
            }
            else if(            it_338==hash_337) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_338]=(_Bool)1;
            if(            1) {
                self->keys[it_338]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_338]=key;
            }
            if(            1) {
                self->items[it_338]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_338]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_339=(_Bool)0;
    for(    it2_340=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_340=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_340,key)) {
            same_key_exist_339=(_Bool)1;
        }
    }
    if(    !same_key_exist_339) {
        list$1charp_push_back(self->key_list,key);
    }
    __result174__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result174__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_320;
void* __right_value292 = (void*)0;
char** keys_321;
void* __right_value293 = (void*)0;
struct sFun** items_322;
void* __right_value294 = (void*)0;
_Bool* item_existance_323;
int len_324;
char* it_327;
struct sFun* default_value_330;
struct sFun* it2_331;
unsigned int hash_334;
int n_335;
struct sFun* default_value_336;
default_value_330 = (void*)0;
default_value_336 = (void*)0;
    size_320=self->size*10;
    keys_321=(char**)come_increment_ref_count(((char**)(__right_value292=(char**)come_calloc(1, sizeof(char*)*(1*(size_320)), "/usr/local/include/comelang.h", 1635, "char*%"))));
    items_322=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value293=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_320)), "/usr/local/include/comelang.h", 1636, "sFun*%"))));
    item_existance_323=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value294=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_320)), "/usr/local/include/comelang.h", 1637, "bool"))));
    len_324=0;
    for(    it_327=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_327=map$2charphsFunph_next(self)    ){
        memset(&default_value_330,0,sizeof(struct sFun*));
        it2_331=map$2charphsFunph_at(self,it_327,default_value_330);
        hash_334=string_get_hash_key(it_327)%size_320;
        n_335=hash_334;
        while((_Bool)1) {
            if(            item_existance_323[n_335]) {
                n_335++;
                if(                n_335>=size_320) {
                    n_335=0;
                }
                else if(                n_335==hash_334) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_323[n_335]=(_Bool)1;
                keys_321[n_335]=it_327;
                items_322[n_335]=map$2charphsFunph_at(self,it_327,default_value_336);
                len_324++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_321;
    self->items=items_322;
    self->item_existance=item_existance_323;
    self->size=size_320;
    self->len=len_324;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_325;
char* __result164__;
char* __result165__;
char* result_326;
char* __result166__;
result_325 = (void*)0;
result_326 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_325,0,sizeof(char*));
        __result164__ = gComeFunResultObject = __result_obj__ = result_325;
        gComeFunResultObject = (void*)0;
        return __result164__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result165__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result165__;
    }
    memset(&result_326,0,sizeof(char*));
    __result166__ = gComeFunResultObject = __result_obj__ = result_326;
    gComeFunResultObject = (void*)0;
    return __result166__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_328;
char* __result167__;
char* __result168__;
char* result_329;
char* __result169__;
result_328 = (void*)0;
result_329 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_328,0,sizeof(char*));
        __result167__ = gComeFunResultObject = __result_obj__ = result_328;
        gComeFunResultObject = (void*)0;
        return __result167__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result168__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    memset(&result_329,0,sizeof(char*));
    __result169__ = gComeFunResultObject = __result_obj__ = result_329;
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_332;
unsigned int it_333;
struct sFun* __result170__;
struct sFun* __result171__;
struct sFun* __result172__;
struct sFun* __result173__;
    hash_332=string_get_hash_key(((char*)key))%self->size;
    it_333=hash_332;
    while((_Bool)1) {
        if(        self->item_existance[it_333]) {
            if(            string_equals(self->keys[it_333],key)) {
                __result170__ = gComeFunResultObject = __result_obj__ = self->items[it_333];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result170__;
            }
            it_333++;
            if(            it_333>=self->size) {
                it_333=0;
            }
            else if(            it_333==hash_332) {
                __result171__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result171__;
            }
        }
        else {
            __result172__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result172__;
        }
    }
    __result173__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result173__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_431;
_Bool is_type_name_flag_432;
int sline_433;
_Bool define_struct_nobody_434;
char* p_435;
int sline_436;
void* __right_value554 = (void*)0;
char* word_437;
_Bool define_function_pointer_result_function_438;
_Bool define_variable_between_brace_439;
char* p_440;
void* __right_value555 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_441=0;
char* fun_name_442=0;
_Bool err_443=0;
void* __right_value556 = (void*)0;
char* word_444;
_Bool define_function_flag_445;
char* p_446;
void* __right_value557 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_447=0;
char* fun_name_448=0;
_Bool err_449=0;
char* word_450;
void* __right_value558 = (void*)0;
char* __dec_obj169;
void* __right_value559 = (void*)0;
char* __dec_obj170;
char* __dec_obj171;
void* __right_value560 = (void*)0;
char* __dec_obj172;
_Bool define_variable_451;
char* p_452;
void* __right_value561 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_453=0;
char* fun_name_454=0;
_Bool err_455=0;
void* __right_value562 = (void*)0;
char* word_456;
void* __right_value563 = (void*)0;
char* word_457;
char* p_458;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
char* word_459;
void* __right_value566 = (void*)0;
char* __dec_obj173;
void* __right_value567 = (void*)0;
char* word_460;
void* __right_value568 = (void*)0;
char* word_463;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct sNode* node_464;
struct sNode* __result176__;
void* __right_value571 = (void*)0;
struct sNode* __result177__;
char* header_head_465;
void* __right_value572 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_466=0;
char* fun_name_467=0;
_Bool err_468=0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1sTypeph* param_types_469;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct list$1charph* param_names_470;
void* __right_value577 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_471=0;
char* param_name_472=0;
_Bool err_473=0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct list$1sTypeph* param_types2_475;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct list$1charph* param_names2_476;
void* __right_value584 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_477=0;
char* param_name_478=0;
_Bool err_479=0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
char* header_tail_481;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sType* result_type2_482;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct tuple1$1sTypeph* __dec_obj175;
void* __right_value591 = (void*)0;
struct list$1sTypeph* __dec_obj176;
void* __right_value592 = (void*)0;
struct list$1charph* __dec_obj177;
_Bool var_args_483;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct buffer* header_buf_484;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct list$1charph* param_default_parametors_485;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sFun* fun_486;
void* __right_value602 = (void*)0;
struct sFun* fun2_490;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value640 = (void*)0;
struct sNode* __result205__;
void* __right_value641 = (void*)0;
struct sNode* node_525;
struct sNode* __result206__;
void* __right_value642 = (void*)0;
struct sNode* node_526;
char* source_tail_527;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct buffer* header_528;
struct sNode* __result207__;
void* __right_value645 = (void*)0;
char* buf2_529;
void* __right_value646 = (void*)0;
struct sNode* __result208__;
    info->in_top_level=(_Bool)1;
    source_head_431=info->p;
    is_type_name_flag_432=is_type_name(buf,info);
    sline_433=info->sline;
    define_struct_nobody_434=(_Bool)0;
    {
        p_435=info->p;
        sline_436=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_437=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_434=(_Bool)1;
                }
                /* U13 */word_437 = come_decrement_ref_count2(word_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_436;
    }
    define_function_pointer_result_function_438=(_Bool)0;
    define_variable_between_brace_439=(_Bool)0;
    if(    is_type_name_flag_432) {
        p_440=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value555=backtrace_parse_type((_Bool)0,info)));
            result_type_441=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_442=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_443=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value555,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_438=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_444=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_444,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_439=(_Bool)1;
                            }
                        }
                        /* U13 */word_444 = come_decrement_ref_count2(word_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            /*i*/come_call_finalizer3(result_type_441,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_442 = come_decrement_ref_count2(fun_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_433;
    }
    define_function_flag_445=(_Bool)0;
    if(    is_type_name_flag_432&&!define_function_pointer_result_function_438&&charp_operator_not_equals(buf,"__typeof__")) {
        p_446=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value557=backtrace_parse_type((_Bool)0,info)));
            result_type_447=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_448=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_449=multiple_assign_var2->v3;
            /*g*/come_call_finalizer3(__right_value557,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            /*i*/come_call_finalizer3(result_type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_448 = come_decrement_ref_count2(fun_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_450=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj169=word_450;
                word_450=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_450,"extern")) {
                    __dec_obj170=word_450;
                    word_450=(char*)come_increment_ref_count(parse_word(info));
                    /*G*/ __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj171=word_450;
                word_450=((void*)0);
                /*G*/ __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_450) {
                if(                is_type_name(word_450,info)) {
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
                        __dec_obj172=word_450;
                        word_450=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_450)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_432) {
                        define_function_flag_445=(_Bool)1;
                    }
                }
            }
            /* U13 */word_450 = come_decrement_ref_count2(word_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_446;
        info->sline=sline_433;
    }
    define_variable_451=(_Bool)1;
    if(    is_type_name_flag_432&&!define_function_pointer_result_function_438) {
        p_452=info->p;
        info->p=head;
        if(        !is_type_name_flag_432) {
            define_variable_451=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value561=backtrace_parse_type((_Bool)0,info)));
            result_type_453=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_454=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_455=multiple_assign_var3->v3;
            /*g*/come_call_finalizer3(__right_value561,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_456=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_451=(_Bool)1;
                            }
                        }
                        /* U13 */word_456 = come_decrement_ref_count2(word_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_457=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_457,info)&&*info->p!=40) {
                            define_variable_451=(_Bool)1;
                        }
                    }
                    /* U13 */word_457 = come_decrement_ref_count2(word_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            /*i*/come_call_finalizer3(result_type_453,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_454 = come_decrement_ref_count2(fun_name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_451=(_Bool)0;
        }
        else if(        define_variable_451) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_451=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_451=(_Bool)0;
            }
        }
        info->p=p_452;
        info->sline=sline_433;
    }
    else {
        define_variable_451=(_Bool)0;
    }
    {
        p_458=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value564=parse_word(info)));
                /* U11 */__right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_459=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj173=word_459;
                        word_459=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_459,"extends")) {
                            define_variable_451=(_Bool)0;
                        }
                    }
                    /* U13 */word_459 = come_decrement_ref_count2(word_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_451=(_Bool)0;
        }
        else if(        define_variable_451) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_451=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_451=(_Bool)0;
            }
        }
        info->p=p_458;
        info->sline=sline_433;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_460=(char*)come_increment_ref_count(parse_word(info));
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
                    word_463=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(word_463)));
                    /* U13 */word_463 = come_decrement_ref_count2(word_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_464=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result176__ = gComeFunResultObject = __result_obj__ = node_464;
            if(node_464) { node_464 = come_decrement_ref_count2(node_464, ((struct sNode*)node_464)->finalize, ((struct sNode*)node_464)->_protocol_obj, 0, 1, 0, (void*)0); } 
            /* U13 */word_460 = come_decrement_ref_count2(word_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result176__;
            if(node_464) { node_464 = come_decrement_ref_count2(node_464, ((struct sNode*)node_464)->finalize, ((struct sNode*)node_464)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        /* U13 */word_460 = come_decrement_ref_count2(word_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_434) {
    }
    else if(    define_variable_between_brace_439) {
        info->p=head;
        info->sline=sline_433;
        __result177__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value571=parse_global_variable(info)));
        if(__right_value571) { __right_value571 = come_decrement_ref_count2(__right_value571, ((struct sNode*)__right_value571)->finalize, ((struct sNode*)__right_value571)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result177__;
    }
    else if(    define_function_pointer_result_function_438) {
        header_head_465=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value572=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_466=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_467=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_468=multiple_assign_var4->v3;
        /*g*/come_call_finalizer3(__right_value572,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_469=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1662, "list$1sTypeph"))));
            param_names_470=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1663, "list$1charph"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value577=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_471=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_472=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_473=multiple_assign_var5->v3;
                    /*g*/come_call_finalizer3(__right_value577,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_473) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypeph_push_back(param_types_469,(struct sType*)come_increment_ref_count(param_type_471));
                    static int num_function_pointer_result_var_name_a_474=0;
                    list$1charph_push_back(param_names_470,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_474)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value579=parse_word(info)));
                        /* U11 */__right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*i*/come_call_finalizer3(param_type_471,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */param_name_472 = come_decrement_ref_count2(param_name_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    /*i*/come_call_finalizer3(param_type_471,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */param_name_472 = come_decrement_ref_count2(param_name_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_475=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1709, "list$1sTypeph"))));
                param_names2_476=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1710, "list$1charph"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value584=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_477=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_478=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_479=multiple_assign_var6->v3;
                        /*g*/come_call_finalizer3(__right_value584,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_479) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypeph_push_back(param_types2_475,(struct sType*)come_increment_ref_count(param_type_477));
                        static int num_function_pointer_result_var_name_b_480=0;
                        list$1charph_push_back(param_names2_476,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_480)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value586=parse_word(info)));
                            /* U11 */__right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            /*i*/come_call_finalizer3(param_type_477,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /* U13 */param_name_478 = come_decrement_ref_count2(param_name_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        /*i*/come_call_finalizer3(param_type_477,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */param_name_478 = come_decrement_ref_count2(param_name_478, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_481=info->p;
                result_type2_482=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1752, "sType")),"lambda",(_Bool)0,info));
                __dec_obj175=result_type2_482->mResultType;
                result_type2_482->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1754, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_466)));
                come_call_finalizer3(__dec_obj175,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj176=result_type2_482->mParamTypes;
                result_type2_482->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_475));
                come_call_finalizer3(__dec_obj176,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj177=result_type2_482->mParamNames;
                result_type2_482->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_476));
                come_call_finalizer3(__dec_obj177,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_482->mVarArgs=(_Bool)0;
                result_type2_482->mStatic=(_Bool)0;
                var_args_483=(_Bool)0;
                header_buf_484=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1762, "buffer"))));
                buffer_append(header_buf_484,header_head_465,header_tail_481-header_head_465);
                buffer_append_char(header_buf_484,0);
                param_default_parametors_485=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1766, "list$1charph"))));
                fun_486=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1768, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_467)),(struct sType*)come_increment_ref_count(result_type2_482),(struct list$1sTypeph*)come_increment_ref_count(param_types_469),(struct list$1charph*)come_increment_ref_count(param_names_470),(struct list$1charph*)come_increment_ref_count(param_default_parametors_485),(_Bool)1,var_args_483,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_484)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0));
                fun2_490=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value602=__builtin_string(fun_name_467))));
                /* U11 */__right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_490==((void*)0)||fun2_490->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_467)),(struct sFun*)come_increment_ref_count(fun_486));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1780, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value605=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1780, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_486),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result205__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value640=_inf_value2));
                /*i*/come_call_finalizer3(param_types2_475,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_476,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_482,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_484,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_486,sFun_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_469,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_470,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_466,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name_467 = come_decrement_ref_count2(fun_name_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value605,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value640) { __right_value640 = come_decrement_ref_count2(__right_value640, ((struct sNode*)__right_value640)->finalize, ((struct sNode*)__right_value640)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result205__;
                /*i*/come_call_finalizer3(param_types2_475,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_476,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_482,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_484,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_486,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            /*i*/come_call_finalizer3(param_types_469,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_470,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_466,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_467 = come_decrement_ref_count2(fun_name_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    define_function_flag_445) {
        info->p=head;
        info->sline=sline_433;
        node_525=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result206__ = gComeFunResultObject = __result_obj__ = node_525;
        if(node_525) { node_525 = come_decrement_ref_count2(node_525, ((struct sNode*)node_525)->finalize, ((struct sNode*)node_525)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result206__;
        if(node_525) { node_525 = come_decrement_ref_count2(node_525, ((struct sNode*)node_525)->finalize, ((struct sNode*)node_525)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_451) {
        info->p=head;
        info->sline=sline_433;
        node_526=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_527=info->p;
        header_528=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1804, "buffer"))));
        buffer_append(header_528,source_head_431,source_tail_527-source_head_431);
        __result207__ = gComeFunResultObject = __result_obj__ = node_526;
        if(node_526) { node_526 = come_decrement_ref_count2(node_526, ((struct sNode*)node_526)->finalize, ((struct sNode*)node_526)->_protocol_obj, 0, 1, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_528,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result207__;
        if(node_526) { node_526 = come_decrement_ref_count2(node_526, ((struct sNode*)node_526)->finalize, ((struct sNode*)node_526)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_528,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_433;
    buf2_529=(char*)come_increment_ref_count(parse_word(info));
    __result208__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value646=top_level_v98(buf2_529,head,head_sline,info)));
    /* U13 */buf2_529 = come_decrement_ref_count2(buf2_529, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value646) { __right_value646 = come_decrement_ref_count2(__right_value646, ((struct sNode*)__right_value646)->finalize, ((struct sNode*)__right_value646)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj167;
char* __dec_obj168;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj167=self->v1;
            come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj168=self->v2;
            /*G*/ __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_461;
struct list_item$1charph* prev_it_462;
struct list$1charph* __result175__;
    it_461=self->head;
    while(it_461!=((void*)0)) {
        prev_it_462=it_461;
        it_461=it_461->next;
        /*i*/come_call_finalizer3(prev_it_462,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result175__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result175__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj174;
struct tuple1$1sTypeph* __result178__;
    __dec_obj174=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result178__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result178__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_487;
unsigned int hash_488;
unsigned int it_489;
struct sFun* __result179__;
struct sFun* __result180__;
struct sFun* __result181__;
struct sFun* __result182__;
default_value_487 = (void*)0;
    memset(&default_value_487,0,sizeof(struct sFun*));
    hash_488=string_get_hash_key(((char*)key))%self->size;
    it_489=hash_488;
    while((_Bool)1) {
        if(        self->item_existance[it_489]) {
            if(            string_equals(self->keys[it_489],key)) {
                __result179__ = gComeFunResultObject = __result_obj__ = self->items[it_489];
                /*i*/come_call_finalizer3(default_value_487,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result179__;
            }
            it_489++;
            if(            it_489>=self->size) {
                it_489=0;
            }
            else if(            it_489==hash_488) {
                __result180__ = gComeFunResultObject = __result_obj__ = default_value_487;
                /*i*/come_call_finalizer3(default_value_487,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result180__;
            }
        }
        else {
            __result181__ = gComeFunResultObject = __result_obj__ = default_value_487;
            /*i*/come_call_finalizer3(default_value_487,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result181__;
        }
    }
    __result182__ = gComeFunResultObject = __result_obj__ = default_value_487;
    /*i*/come_call_finalizer3(default_value_487,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result182__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result184__;
void* __right_value608 = (void*)0;
struct sFun* result_492;
void* __right_value609 = (void*)0;
char* __dec_obj181;
void* __right_value610 = (void*)0;
struct sType* __dec_obj182;
void* __right_value611 = (void*)0;
struct list$1sTypeph* __dec_obj183;
void* __right_value612 = (void*)0;
struct list$1charph* __dec_obj184;
void* __right_value613 = (void*)0;
struct list$1charph* __dec_obj185;
void* __right_value614 = (void*)0;
struct sType* __dec_obj186;
void* __right_value632 = (void*)0;
struct sBlock* __dec_obj192;
void* __right_value633 = (void*)0;
struct buffer* __dec_obj193;
void* __right_value634 = (void*)0;
struct buffer* __dec_obj194;
void* __right_value635 = (void*)0;
struct buffer* __dec_obj195;
void* __right_value636 = (void*)0;
struct buffer* __dec_obj196;
void* __right_value637 = (void*)0;
char* __dec_obj197;
void* __right_value638 = (void*)0;
char* __dec_obj198;
struct sFun* __result203__;
    if(    self==(void*)0) {
        __result184__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result184__;
    }
    result_492=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj181=result_492->mName;
        result_492->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj182=result_492->mResultType;
        result_492->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj183=result_492->mParamTypes;
        result_492->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj183,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj184=result_492->mParamNames;
        result_492->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj184,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj185=result_492->mParamDefaultParametors;
        result_492->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj185,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj186=result_492->mLambdaType;
        result_492->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj192=result_492->mBlock;
        result_492->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer3(__dec_obj192,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_492->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_492->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj193=result_492->mSource;
        result_492->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer3(__dec_obj193,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj194=result_492->mSourceHead;
        result_492->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer3(__dec_obj194,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj195=result_492->mSourceHead2;
        result_492->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer3(__dec_obj195,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj196=result_492->mSourceDefer;
        result_492->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer3(__dec_obj196,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_492->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_492->mInline=self->mInline;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj197=result_492->mComeHeader;
        result_492->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        /*G*/ __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_492->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj198=result_492->mDeclareSName;
        result_492->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        /*G*/ __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_492->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_492->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_492->no_output_come_code2=self->no_output_come_code2;
    }
    __result203__ = gComeFunResultObject = __result_obj__ = result_492;
    /*i*/come_call_finalizer3(result_492,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result185__;
void* __right_value615 = (void*)0;
struct sBlock* result_493;
void* __right_value616 = (void*)0;
struct list$1sNodeph* __dec_obj187;
void* __right_value631 = (void*)0;
struct sVarTable* __dec_obj191;
struct sBlock* __result202__;
    if(    self==(void*)0) {
        __result185__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result185__;
    }
    result_493=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj187=result_493->mNodes;
        result_493->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj187,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj191=result_493->mVarTable;
        result_493->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj191,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_493->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result202__ = gComeFunResultObject = __result_obj__ = result_493;
    /*i*/come_call_finalizer3(result_493,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result202__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result186__;
void* __right_value617 = (void*)0;
struct sVarTable* result_494;
void* __right_value630 = (void*)0;
struct map$2charphsVarph* __dec_obj190;
struct sVarTable* __result201__;
    if(    self==(void*)0) {
        __result186__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result186__;
    }
    result_494=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj190=result_494->mVars;
        result_494->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj190,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_494->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_494->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_494->mID=self->mID;
    }
    __result201__ = gComeFunResultObject = __result_obj__ = result_494;
    /*i*/come_call_finalizer3(result_494,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result201__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result187__;
void* __right_value618 = (void*)0;
void* __right_value624 = (void*)0;
struct map$2charphsVarph* result_498;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct list$1charp* __dec_obj189;
char* it_501;
struct sVar* default_value_504;
struct sVar* it2_507;
struct map$2charphsVarph* __result200__;
default_value_504 = (void*)0;
    if(    self==((void*)0)) {
        __result187__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result187__;
    }
    result_498=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 1478, "map$2charphsVarph"))));
    __dec_obj189=result_498->key_list;
    result_498->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1480, "list$1charp"))));
    come_call_finalizer3(__dec_obj189,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_501=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_501=map$2charphsVarph_next(self)    ){
        memset(&default_value_504,0,sizeof(struct sVar*));
        it2_507=map$2charphsVarph_at(self,it_501,default_value_504);
        map$2charphsVarph_put(result_498,it_501,it2_507);
    }
    __result200__ = gComeFunResultObject = __result_obj__ = result_498;
    /*i*/come_call_finalizer3(result_498,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
int i_495;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct list$1charp* __dec_obj188;
struct map$2charphsVarph* __result188__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value619=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 1407, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value620=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 1408, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value621=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 1409, "bool"))));
    for(    i_495=0;    i_495<128;    i_495++    ){
        self->item_existance[i_495]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj188=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 1419, "list$1charp"))));
    come_call_finalizer3(__dec_obj188,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result188__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result188__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_496;
int i_497;
    for(    i_496=0;    i_496<self->size;    i_496++    ){
        if(        self->item_existance[i_496]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_496],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_497=0;    i_497<self->size;    i_497++    ){
        if(        self->item_existance[i_497]) {
            if(            1) {
                /* U13 */self->keys[i_497] = come_decrement_ref_count2(self->keys[i_497], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_499;
char* __result189__;
char* __result190__;
char* result_500;
char* __result191__;
result_499 = (void*)0;
result_500 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_499,0,sizeof(char*));
        __result189__ = gComeFunResultObject = __result_obj__ = result_499;
        gComeFunResultObject = (void*)0;
        return __result189__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result190__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result190__;
    }
    memset(&result_500,0,sizeof(char*));
    __result191__ = gComeFunResultObject = __result_obj__ = result_500;
    gComeFunResultObject = (void*)0;
    return __result191__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_502;
char* __result192__;
char* __result193__;
char* result_503;
char* __result194__;
result_502 = (void*)0;
result_503 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_502,0,sizeof(char*));
        __result192__ = gComeFunResultObject = __result_obj__ = result_502;
        gComeFunResultObject = (void*)0;
        return __result192__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result193__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result193__;
    }
    memset(&result_503,0,sizeof(char*));
    __result194__ = gComeFunResultObject = __result_obj__ = result_503;
    gComeFunResultObject = (void*)0;
    return __result194__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_505;
unsigned int it_506;
struct sVar* __result195__;
struct sVar* __result196__;
struct sVar* __result197__;
struct sVar* __result198__;
    hash_505=string_get_hash_key(((char*)key))%self->size;
    it_506=hash_505;
    while((_Bool)1) {
        if(        self->item_existance[it_506]) {
            if(            string_equals(self->keys[it_506],key)) {
                __result195__ = gComeFunResultObject = __result_obj__ = self->items[it_506];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result195__;
            }
            it_506++;
            if(            it_506>=self->size) {
                it_506=0;
            }
            else if(            it_506==hash_505) {
                __result196__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result196__;
            }
        }
        else {
            __result197__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result197__;
        }
    }
    __result198__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_519;
int it_520;
_Bool same_key_exist_521;
char* it2_522;
struct map$2charphsVarph* __result199__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_519=string_get_hash_key(key)%self->size;
    it_520=hash_519;
    while((_Bool)1) {
        if(        self->item_existance[it_520]) {
            if(            string_equals(self->keys[it_520],key)) {
                if(                1) {
                    /* U13 */self->keys[it_520] = come_decrement_ref_count2(self->keys[it_520], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_520]);
                    self->keys[it_520]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_520]);
                    self->keys[it_520]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_520],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_520]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_520]=item;
                }
                break;
            }
            it_520++;
            if(            it_520>=self->size) {
                it_520=0;
            }
            else if(            it_520==hash_519) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_520]=(_Bool)1;
            if(            1) {
                self->keys[it_520]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_520]=key;
            }
            if(            1) {
                self->items[it_520]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_520]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_521=(_Bool)0;
    for(    it2_522=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_522=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_522,key)) {
            same_key_exist_521=(_Bool)1;
        }
    }
    if(    !same_key_exist_521) {
        list$1charp_push_back(self->key_list,key);
    }
    __result199__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_508;
void* __right_value627 = (void*)0;
char** keys_509;
void* __right_value628 = (void*)0;
struct sVar** items_510;
void* __right_value629 = (void*)0;
_Bool* item_existance_511;
int len_512;
char* it_513;
struct sVar* default_value_514;
struct sVar* it2_515;
unsigned int hash_516;
int n_517;
struct sVar* default_value_518;
default_value_514 = (void*)0;
default_value_518 = (void*)0;
    size_508=self->size*10;
    keys_509=(char**)come_increment_ref_count(((char**)(__right_value627=(char**)come_calloc(1, sizeof(char*)*(1*(size_508)), "/usr/local/include/comelang.h", 1635, "char*%"))));
    items_510=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value628=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_508)), "/usr/local/include/comelang.h", 1636, "sVar*%"))));
    item_existance_511=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value629=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_508)), "/usr/local/include/comelang.h", 1637, "bool"))));
    len_512=0;
    for(    it_513=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_513=map$2charphsVarph_next(self)    ){
        memset(&default_value_514,0,sizeof(struct sVar*));
        it2_515=map$2charphsVarph_at(self,it_513,default_value_514);
        hash_516=string_get_hash_key(it_513)%size_508;
        n_517=hash_516;
        while((_Bool)1) {
            if(            item_existance_511[n_517]) {
                n_517++;
                if(                n_517>=size_508) {
                    n_517=0;
                }
                else if(                n_517==hash_516) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_511[n_517]=(_Bool)1;
                keys_509[n_517]=it_513;
                items_510[n_517]=map$2charphsVarph_at(self,it_513,default_value_518);
                len_512++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_509;
    self->items=items_510;
    self->item_existance=item_existance_511;
    self->size=size_508;
    self->len=len_512;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_523;
int i_524;
    for(    i_523=0;    i_523<self->size;    i_523++    ){
        if(        self->item_existance[i_523]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_523],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_524=0;    i_524<self->size;    i_524++    ){
        if(        self->item_existance[i_524]) {
            if(            1) {
                /* U13 */self->keys[i_524] = come_decrement_ref_count2(self->keys[i_524], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_530;
int caller_line_531;
char* caller_sname_532;
_Bool comma_instead_of_semicolon_533;
char* last_code_534;
char* __dec_obj200;
char* last_code2_535;
char* __dec_obj201;
void* __right_value647 = (void*)0;
char* sname_top_536;
int sline_top_537;
struct sFun* funX_538;
_Bool __result209__;
void* __right_value648 = (void*)0;
struct sType* result_type_539;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct list$1sTypeph* param_types_540;
struct list$1sTypeph* o2_saved_541;
struct sType* it_544;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct sType* param_type_547;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct list$1charph* param_names_548;
void* __right_value655 = (void*)0;
struct list$1charph* param_default_parametors_549;
char* p_550;
int sline_551;
char* sname_552;
char* head_553;
struct buffer* source_554;
void* __right_value656 = (void*)0;
struct buffer* __dec_obj202;
struct sType* generics_type_saved_555;
void* __right_value657 = (void*)0;
struct sType* __dec_obj203;
struct list$1charph* method_generics_type_names_556;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct list$1charph* __dec_obj204;
struct list$1charph* o2_saved_557;
char* it_558;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct list$1charph* __dec_obj205;
char* __dec_obj206;
void* __right_value662 = (void*)0;
struct sBlock* block_559;
struct buffer* __dec_obj207;
char* __dec_obj208;
_Bool var_args_560;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct sFun* fun_561;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value674 = (void*)0;
struct sNode* node_562;
_Bool in_generics_fun_564;
_Bool Value_565;
void* __if_result__1_566 = (void*)0;
_Bool __result218__;
struct sType* __dec_obj213;
struct list$1charph* __dec_obj214;
void* __right_value675 = (void*)0;
char* __dec_obj215;
char* __dec_obj216;
char* __dec_obj217;
_Bool __result219__;
    caller_fun_530=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_531=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_532=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_533=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_534=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj200=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_535=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj201=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_536=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_537=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_538=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(    funX_538) {
        __result209__ = (_Bool)1;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_534 = come_decrement_ref_count2(last_code_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_535 = come_decrement_ref_count2(last_code2_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_536 = come_decrement_ref_count2(sname_top_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result209__;
    }
    result_type_539=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_540=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1850, "list$1sTypeph"))));
    for(    o2_saved_541=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_544=list$1sTypeph_begin((o2_saved_541));    !list$1sTypeph_end((o2_saved_541));    it_544=list$1sTypeph_next((o2_saved_541))    ){
        param_type_547=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value651=sType_clone(it_544))),generics_type,info));
        /*g*/come_call_finalizer3(__right_value651,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_547->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_540,(struct sType*)come_increment_ref_count(sType_clone(param_type_547)));
        /*i*/come_call_finalizer3(param_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_541,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_548=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_549=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_550=info->p;
    sline_551=info->sline;
    sname_552=(char*)come_increment_ref_count(info->sname);
    head_553=info->head;
    source_554=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj202=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj202,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_555=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj203=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_556=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj204=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1877, "list$1charph"))));
    come_call_finalizer3(__dec_obj204,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_557=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_558=list$1charph_begin((o2_saved_557));    !list$1charph_end((o2_saved_557));    it_558=list$1charph_next((o2_saved_557))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_558)));
    }
    /*i*/come_call_finalizer3(o2_saved_557,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj205=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj205,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj206=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_559=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_553;
    __dec_obj207=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_554);
    come_call_finalizer3(__dec_obj207,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_550;
    info->sline=sline_551;
    __dec_obj208=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_552);
    /*G*/ __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_539->mInline=(_Bool)0;
    result_type_539->mStatic=(_Bool)0;
    result_type_539->mUniq=(_Bool)0;
    var_args_560=generics_fun->mVarArgs;
    fun_561=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1901, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_539),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_540)),(struct list$1charph*)come_increment_ref_count(param_names_548),(struct list$1charph*)come_increment_ref_count(param_default_parametors_549),(_Bool)0,var_args_560,(struct sBlock*)come_increment_ref_count(block_559),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_561));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1908, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value670=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1908, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_561),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_562=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value670,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_564=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_565=node_compile(node_562,info);
    if(    !Value_565) {
        __result218__ = (_Bool)0;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_534 = come_decrement_ref_count2(last_code_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_535 = come_decrement_ref_count2(last_code2_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_536 = come_decrement_ref_count2(sname_top_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_539,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_540,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_548,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_549,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_552 = come_decrement_ref_count2(sname_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_554,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(generics_type_saved_555,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_556,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_559,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_561,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_562) { node_562 = come_decrement_ref_count2(node_562, ((struct sNode*)node_562)->finalize, ((struct sNode*)node_562)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result218__;
    }
    else {
        __if_result__1_566=(void*)(Value_565);
;
    }
    info->in_generics_fun=in_generics_fun_564;
    __dec_obj213=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_555);
    come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj214=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_556);
    come_call_finalizer3(__dec_obj214,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj215=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_536));
    /*G*/ __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_537;
    __dec_obj216=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_534);
    /*G*/ __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj217=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_535);
    /*G*/ __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_530;
    info->caller_line=caller_line_531;
    info->caller_sname=caller_sname_532;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_533;
    __result219__ = (_Bool)1;
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code_534 = come_decrement_ref_count2(last_code_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_535 = come_decrement_ref_count2(last_code2_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */sname_top_536 = come_decrement_ref_count2(sname_top_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_539,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_540,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_548,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_549,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */sname_552 = come_decrement_ref_count2(sname_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_554,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(generics_type_saved_555,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_556,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_559,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_561,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_562) { node_562 = come_decrement_ref_count2(node_562, ((struct sNode*)node_562)->finalize, ((struct sNode*)node_562)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result219__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_542;
struct sType* __result210__;
struct sType* __result211__;
struct sType* result_543;
struct sType* __result212__;
result_542 = (void*)0;
result_543 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_542,0,sizeof(struct sType*));
        __result210__ = gComeFunResultObject = __result_obj__ = result_542;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    self->it=self->head;
    if(    self->it) {
        __result211__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    memset(&result_543,0,sizeof(struct sType*));
    __result212__ = gComeFunResultObject = __result_obj__ = result_543;
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_545;
struct sType* __result213__;
struct sType* __result214__;
struct sType* result_546;
struct sType* __result215__;
result_545 = (void*)0;
result_546 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_545,0,sizeof(struct sType*));
        __result213__ = gComeFunResultObject = __result_obj__ = result_545;
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result214__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    memset(&result_546,0,sizeof(struct sType*));
    __result215__ = gComeFunResultObject = __result_obj__ = result_546;
    gComeFunResultObject = (void*)0;
    return __result215__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_567;
int caller_line_568;
char* caller_sname_569;
_Bool comma_instead_of_semicolon_570;
char* last_code_571;
char* __dec_obj218;
char* last_code2_572;
char* __dec_obj219;
void* __right_value676 = (void*)0;
char* sname_top_573;
int sline_top_574;
struct sFun* funX_575;
_Bool __result220__;
void* __right_value677 = (void*)0;
struct sType* result_type_576;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct list$1sTypeph* param_types_577;
struct list$1sTypeph* o2_saved_578;
struct sType* it_579;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sType* param_type_580;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct list$1charph* param_names_581;
void* __right_value684 = (void*)0;
struct list$1charph* param_default_parametors_582;
char* p_583;
int sline_584;
char* sname_585;
char* head_586;
struct buffer* source_587;
void* __right_value685 = (void*)0;
struct buffer* __dec_obj220;
struct list$1charph* method_generics_type_names_588;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct list$1charph* __dec_obj221;
struct list$1charph* o2_saved_589;
char* it_590;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct list$1charph* __dec_obj222;
char* __dec_obj223;
void* __right_value690 = (void*)0;
struct sBlock* block_591;
struct buffer* __dec_obj224;
char* __dec_obj225;
_Bool var_args_592;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct sFun* fun_593;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value702 = (void*)0;
struct sNode* node_594;
_Bool Value_596;
void* __if_result__2_597 = (void*)0;
_Bool __result223__;
struct list$1charph* __dec_obj230;
void* __right_value703 = (void*)0;
char* __dec_obj231;
char* __dec_obj232;
char* __dec_obj233;
_Bool __result224__;
    caller_fun_567=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_568=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_569=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_570=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_571=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj218=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_572=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj219=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_573=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_574=info->sline;
    funX_575=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(    funX_575) {
        __result220__ = (_Bool)1;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_571 = come_decrement_ref_count2(last_code_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_572 = come_decrement_ref_count2(last_code2_572, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_573 = come_decrement_ref_count2(sname_top_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result220__;
    }
    result_type_576=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_577=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1962, "list$1sTypeph"))));
    for(    o2_saved_578=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_579=list$1sTypeph_begin((o2_saved_578));    !list$1sTypeph_end((o2_saved_578));    it_579=list$1sTypeph_next((o2_saved_578))    ){
        param_type_580=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value680=sType_clone(it_579))),info));
        /*g*/come_call_finalizer3(__right_value680,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_580->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_577,(struct sType*)come_increment_ref_count(sType_clone(param_type_580)));
        /*i*/come_call_finalizer3(param_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_578,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_581=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_582=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_583=info->p;
    sline_584=info->sline;
    sname_585=(char*)come_increment_ref_count(info->sname);
    head_586=info->head;
    source_587=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj220=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj220,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_588=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj221=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1986, "list$1charph"))));
    come_call_finalizer3(__dec_obj221,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_589=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_590=list$1charph_begin((o2_saved_589));    !list$1charph_end((o2_saved_589));    it_590=list$1charph_next((o2_saved_589))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_590)));
    }
    /*i*/come_call_finalizer3(o2_saved_589,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj222=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj222,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj223=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_591=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_586;
    __dec_obj224=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_587);
    come_call_finalizer3(__dec_obj224,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_583;
    info->sline=sline_584;
    __dec_obj225=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_585);
    /*G*/ __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_576->mInline=(_Bool)0;
    result_type_576->mStatic=(_Bool)0;
    result_type_576->mUniq=(_Bool)0;
    var_args_592=generics_fun->mVarArgs;
    fun_593=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2010, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_576),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_577)),(struct list$1charph*)come_increment_ref_count(param_names_581),(struct list$1charph*)come_increment_ref_count(param_default_parametors_582),(_Bool)0,var_args_592,(struct sBlock*)come_increment_ref_count(block_591),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_593));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2017, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value698=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2017, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_593),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_594=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value698,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_596=node_compile(node_594,info);
    if(    !Value_596) {
        __result223__ = (_Bool)0;
        /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code_571 = come_decrement_ref_count2(last_code_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */last_code2_572 = come_decrement_ref_count2(last_code2_572, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */sname_top_573 = come_decrement_ref_count2(sname_top_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_581,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_582,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_585 = come_decrement_ref_count2(sname_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_587,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_588,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_591,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_593,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_594) { node_594 = come_decrement_ref_count2(node_594, ((struct sNode*)node_594)->finalize, ((struct sNode*)node_594)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result223__;
    }
    else {
        __if_result__2_597=(void*)(Value_596);
;
    }
    __dec_obj230=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_588);
    come_call_finalizer3(__dec_obj230,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj231=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_573));
    /*G*/ __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_574;
    __dec_obj232=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_571);
    /*G*/ __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj233=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_572);
    /*G*/ __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_567;
    info->caller_line=caller_line_568;
    info->caller_sname=caller_sname_569;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_570;
    __result224__ = (_Bool)1;
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code_571 = come_decrement_ref_count2(last_code_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_572 = come_decrement_ref_count2(last_code2_572, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */sname_top_573 = come_decrement_ref_count2(sname_top_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_576,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_577,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_581,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_582,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */sname_585 = come_decrement_ref_count2(sname_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_587,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_588,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_591,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_593,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_594) { node_594 = come_decrement_ref_count2(node_594, ((struct sNode*)node_594)->finalize, ((struct sNode*)node_594)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result224__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_598;
char* source_head_599;
struct sType* result_type_600;
char* var_name_601;
_Bool constructor__602;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct sType* __dec_obj234;
void* __right_value706 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_603=0;
char* var_name2_604=0;
_Bool err_605=0;
struct sType* __dec_obj235;
char* __dec_obj236;
_Bool method_definition_606;
char* p_607;
int sline_608;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct buffer* buf2_609;
char* fun_name_610;
char* base_fun_name_611;
void* __right_value709 = (void*)0;
char* __dec_obj237;
void* __right_value710 = (void*)0;
char* __dec_obj238;
void* __right_value711 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_612=0;
char* name_613=0;
_Bool err_614=0;
void* __right_value712 = (void*)0;
char* __dec_obj239;
void* __right_value713 = (void*)0;
char* __dec_obj240;
void* __right_value714 = (void*)0;
char* __dec_obj241;
void* __right_value715 = (void*)0;
char* __dec_obj242;
void* __right_value716 = (void*)0;
char* __dec_obj243;
void* __right_value717 = (void*)0;
char* __dec_obj244;
void* __right_value718 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1sTypeph* param_types_615=0;
struct list$1charph* param_names_616=0;
struct list$1charph* param_default_parametors_617=0;
_Bool var_args_618=0;
char* header_tail_619;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct buffer* header_buf_620;
int version_621;
int n_622;
_Bool in_top_level_623;
void* __right_value721 = (void*)0;
struct sBlock* block_624;
void* __right_value722 = (void*)0;
char* fun_name_626;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct sFun* fun_627;
void* __right_value728 = (void*)0;
struct sFun* fun2_628;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value734 = (void*)0;
struct sNode* __result227__;
void* __right_value735 = (void*)0;
char* none_generics_name_630;
void* __right_value736 = (void*)0;
char* generics_sname_631;
int generics_sline_632;
void* __right_value737 = (void*)0;
char* block_633;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct sGenericsFun* fun_634;
void* __right_value744 = (void*)0;
char* fun_name3_635;
void* __right_value748 = (void*)0;
struct sNode* __result239__;
void* __right_value749 = (void*)0;
char* generics_sname_657;
int generics_sline_658;
void* __right_value750 = (void*)0;
char* block_659;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct sGenericsFun* fun_660;
void* __right_value757 = (void*)0;
char* fun_name3_661;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct sNode* __result240__;
char* source_tail_662;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct buffer* header_663;
void* __right_value762 = (void*)0;
char* name_664;
void* __right_value763 = (void*)0;
char* name_665;
int i_666;
struct sType* param_type_667;
char* param_name_668;
char* default_parametor_669;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
char* impl_name_670;
void* __right_value767 = (void*)0;
char* result_type_name_671;
void* __right_value768 = (void*)0;
char* impl_name_672;
void* __right_value769 = (void*)0;
char* result_type_name_673;
int i_674;
struct sType* param_type_675;
char* param_name_676;
char* default_parametor_677;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sBlock* block_678;
_Bool static_fun_679;
_Bool inline_fun_680;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
char* new_fun_name_681;
void* __right_value776 = (void*)0;
char* __dec_obj250;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct sFun* fun_682;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct sFun* fun2_683;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value791 = (void*)0;
struct sNode* __result243__;
void* __right_value792 = (void*)0;
char* new_fun_name_685;
void* __right_value793 = (void*)0;
char* __dec_obj255;
_Bool result_type_static_686;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct sFun* fun_687;
void* __right_value799 = (void*)0;
struct sFun* fun2_688;
void* __right_value800 = (void*)0;
char* source_tail_689;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct buffer* header_690;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value809 = (void*)0;
struct sNode* __result246__;
void* __right_value810 = (void*)0;
char* asm_fun_692;
void* __right_value811 = (void*)0;
char* __dec_obj260;
_Bool result_type_static_693;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct sFun* fun_694;
void* __right_value817 = (void*)0;
struct sFun* fun2_695;
void* __right_value818 = (void*)0;
char* source_tail_696;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct buffer* header_697;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value827 = (void*)0;
struct sNode* __result249__;
struct sNode* __result250__;
fun_name_610 = (void*)0;
    header_head_598=info->p;
    source_head_599=info->p;
    result_type_600=((void*)0);
    var_name_601=((void*)0);
    constructor__602=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value704=parse_word(info)));
        /* U11 */__right_value704 = come_decrement_ref_count2(__right_value704, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj234=result_type_600;
        result_type_600=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_600->mHeap=(_Bool)1;
        constructor__602=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value706=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_603=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_604=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_605=multiple_assign_var7->v3;
        /*g*/come_call_finalizer3(__right_value706,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj235=result_type_600;
        result_type_600=(struct sType*)come_increment_ref_count(result_type2_603);
        come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj236=var_name_601;
        var_name_601=(char*)come_increment_ref_count(var_name2_604);
        /*G*/ __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_605) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*i*/come_call_finalizer3(result_type2_603,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name2_604 = come_decrement_ref_count2(var_name2_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_606=(_Bool)0;
    {
        p_607=info->p;
        sline_608=info->sline;
        buf2_609=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2081, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_609,*info->p);
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
        if(        buffer_length(buf2_609)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_606=(_Bool)1;
        }
        info->p=p_607;
        info->sline=sline_608;
        /*i*/come_call_finalizer3(buf2_609,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_611=((void*)0);
    if(    constructor__602) {
        __dec_obj237=base_fun_name_611;
        base_fun_name_611=(char*)come_increment_ref_count(__builtin_string("initialize"));
        /*G*/ __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj238=fun_name_610;
        fun_name_610=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_611,info,(_Bool)1));
        /*G*/ __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_606) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value711=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_612=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_613=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_614=multiple_assign_var8->v3;
        /*g*/come_call_finalizer3(__right_value711,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_614) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj239=base_fun_name_611;
        base_fun_name_611=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj240=fun_name_610;
        fun_name_610=(char*)come_increment_ref_count(create_method_name(obj_type_612,(_Bool)0,base_fun_name_611,info,(_Bool)1));
        /*G*/ __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_612,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_613 = come_decrement_ref_count2(name_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj241=base_fun_name_611;
        base_fun_name_611=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj242=fun_name_610;
        fun_name_610=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_611,info,(_Bool)1));
        /*G*/ __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj243=fun_name_610;
        fun_name_610=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj244=base_fun_name_611;
        base_fun_name_611=(char*)come_increment_ref_count(__builtin_string(fun_name_610));
        /*G*/ __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_611,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value718=parse_params(info,constructor__602)));
    param_types_615=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_616=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_617=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_618=multiple_assign_var9->v4;
    /*g*/come_call_finalizer3(__right_value718,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_619=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_611,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_620=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2148, "buffer"))));
    buffer_append(header_buf_620,header_head_598,header_tail_619-header_head_598);
    buffer_append_char(header_buf_620,0);
    version_621=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_622=0;
        while(xisdigit(*info->p)) {
            n_622=n_622*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_621=n_622;
    }
    in_top_level_623=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_611,"lambda")) {
        block_624=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_625=0;
        lambda_num_625++;
        fun_name_626=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_625));
        result_type_600->mInline=(_Bool)0;
        result_type_600->mStatic=(_Bool)0;
        result_type_600->mUniq=(_Bool)0;
        fun_627=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2183, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_626)),(struct sType*)come_increment_ref_count(result_type_600),(struct list$1sTypeph*)come_increment_ref_count(param_types_615),(struct list$1charph*)come_increment_ref_count(param_names_616),(struct list$1charph*)come_increment_ref_count(param_default_parametors_617),(_Bool)0,var_args_618,(struct sBlock*)come_increment_ref_count(block_624),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_620)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        fun2_628=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value728=__builtin_string(fun_name_626))));
        /* U11 */__right_value728 = come_decrement_ref_count2(__right_value728, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_628==((void*)0)||fun2_628->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_626)),(struct sFun*)come_increment_ref_count(fun_627));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2193, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value731=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2193, "sLambdaNode")),fun_627,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result227__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value734=_inf_value5));
        /*i*/come_call_finalizer3(block_624,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_626 = come_decrement_ref_count2(fun_name_626, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_627,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_601 = come_decrement_ref_count2(var_name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_610 = come_decrement_ref_count2(fun_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_611 = come_decrement_ref_count2(base_fun_name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_615,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_616,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_617,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_620,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value731,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value734) { __right_value734 = come_decrement_ref_count2(__right_value734, ((struct sNode*)__right_value734)->finalize, ((struct sNode*)__right_value734)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result227__;
        /*i*/come_call_finalizer3(block_624,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_626 = come_decrement_ref_count2(fun_name_626, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_627,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
        none_generics_name_630=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_631=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_632=info->sline;
        block_633=(char*)come_increment_ref_count(skip_block(info));
        fun_634=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2203, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value739=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value740=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_610)),(struct sType*)come_increment_ref_count(result_type_600),(struct list$1sTypeph*)come_increment_ref_count(param_types_615),(struct list$1charph*)come_increment_ref_count(param_names_616),(struct list$1charph*)come_increment_ref_count(param_default_parametors_617),var_args_618,(char*)come_increment_ref_count(block_633),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_631)),generics_sline_632));
        /*g*/come_call_finalizer3(__right_value739,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value740,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_635=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_630,base_fun_name_611));
        map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_635)),(struct sGenericsFun*)come_increment_ref_count(fun_634));
        __result239__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        /* U13 */none_generics_name_630 = come_decrement_ref_count2(none_generics_name_630, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */generics_sname_631 = come_decrement_ref_count2(generics_sname_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_633 = come_decrement_ref_count2(block_633, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_634,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_635 = come_decrement_ref_count2(fun_name3_635, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_601 = come_decrement_ref_count2(var_name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_610 = come_decrement_ref_count2(fun_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_611 = come_decrement_ref_count2(base_fun_name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_615,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_616,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_617,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_620,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result239__;
        /* U13 */none_generics_name_630 = come_decrement_ref_count2(none_generics_name_630, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */generics_sname_631 = come_decrement_ref_count2(generics_sname_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_633 = come_decrement_ref_count2(block_633, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_634,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_635 = come_decrement_ref_count2(fun_name3_635, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charph_length(info->method_generics_type_names)>0) {
        generics_sname_657=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_658=info->sline;
        block_659=(char*)come_increment_ref_count(skip_block(info));
        fun_660=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2217, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value752=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value753=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_610)),(struct sType*)come_increment_ref_count(result_type_600),(struct list$1sTypeph*)come_increment_ref_count(param_types_615),(struct list$1charph*)come_increment_ref_count(param_names_616),(struct list$1charph*)come_increment_ref_count(param_default_parametors_617),var_args_618,(char*)come_increment_ref_count(block_659),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_657)),generics_sline_658));
        /*g*/come_call_finalizer3(__right_value752,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value753,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_661=(char*)come_increment_ref_count(charp_clone(base_fun_name_611));
        if(        method_definition_606) {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_610)),(struct sGenericsFun*)come_increment_ref_count(fun_660));
        }
        else {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_661)),(struct sGenericsFun*)come_increment_ref_count(fun_660));
        }
        __result240__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        /* U13 */generics_sname_657 = come_decrement_ref_count2(generics_sname_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_659 = come_decrement_ref_count2(block_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_660,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_661 = come_decrement_ref_count2(fun_name3_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_601 = come_decrement_ref_count2(var_name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_610 = come_decrement_ref_count2(fun_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_611 = come_decrement_ref_count2(base_fun_name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_615,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_616,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_617,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_620,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result240__;
        /* U13 */generics_sname_657 = come_decrement_ref_count2(generics_sname_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */block_659 = come_decrement_ref_count2(block_659, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_660,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_661 = come_decrement_ref_count2(fun_name3_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_662=info->p-1;
        header_663=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2233, "buffer"))));
        if(        constructor__602) {
            if(            list$1sTypeph_length(param_types_615)==1) {
                name_664=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_663,"extern %s*%% %s*::initialize(%s*%% self);\n",name_664,name_664,name_664);
                /* U13 */name_664 = come_decrement_ref_count2(name_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_665=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_663,"extern %s*%% %s*::initialize(%s*%% self, ",name_665,name_665,name_665);
                for(                i_666=1;                i_666<list$1sTypeph_length(param_types_615);                i_666++                ){
                    param_type_667=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_615,i_666), "05function.c", 2245, 3));
                    param_name_668=((char*)come_null_check(list$1charphp_operator_load_element(param_names_616,i_666), "05function.c", 2246, 4));
                    default_parametor_669=list$1charphp_operator_load_element(param_default_parametors_617,i_666);
                    if(                    default_parametor_669) {
                        buffer_append_format(header_663,"extern %s %s=%s",((char*)(__right_value764=make_come_type_name_string_no_solved(param_type_667,(_Bool)0,info))),param_name_668,default_parametor_669);
                        /* U11 */__right_value764 = come_decrement_ref_count2(__right_value764, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_663,"extern %s %s",((char*)(__right_value765=make_come_type_name_string_no_solved(param_type_667,(_Bool)0,info))),param_name_668);
                        /* U11 */__right_value765 = come_decrement_ref_count2(__right_value765, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_666!=list$1sTypeph_length(param_types_615)-1) {
                        buffer_append_str(header_663,",");
                    }
                }
                buffer_append_str(header_663,");\n");
                /* U13 */name_665 = come_decrement_ref_count2(name_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypeph_length(param_types_615)==1) {
                impl_name_670=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_671=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_600,(_Bool)0,info));
                buffer_append_format(header_663,"extern %s %s*::%s(%s* self);\n",result_type_name_671,impl_name_670,base_fun_name_611,impl_name_670);
                /* U13 */impl_name_670 = come_decrement_ref_count2(impl_name_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */result_type_name_671 = come_decrement_ref_count2(result_type_name_671, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_672=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_673=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_600,(_Bool)0,info));
                buffer_append_format(header_663,"extern %s %s*::%s(%s* self, ",result_type_name_673,impl_name_672,base_fun_name_611,impl_name_672);
                for(                i_674=1;                i_674<list$1sTypeph_length(param_types_615);                i_674++                ){
                    param_type_675=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_615,i_674), "05function.c", 2276, 5));
                    param_name_676=((char*)come_null_check(list$1charphp_operator_load_element(param_names_616,i_674), "05function.c", 2277, 6));
                    default_parametor_677=list$1charphp_operator_load_element(param_default_parametors_617,i_674);
                    if(                    default_parametor_677) {
                        buffer_append_format(header_663,"extern %s %s=%s",((char*)(__right_value770=make_come_type_name_string_no_solved(param_type_675,(_Bool)0,info))),param_name_676,default_parametor_677);
                        /* U11 */__right_value770 = come_decrement_ref_count2(__right_value770, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_663,"extern %s %s",((char*)(__right_value771=make_come_type_name_string_no_solved(param_type_675,(_Bool)0,info))),param_name_676);
                        /* U11 */__right_value771 = come_decrement_ref_count2(__right_value771, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_674!=list$1sTypeph_length(param_types_615)-1) {
                        buffer_append_str(header_663,",");
                    }
                }
                buffer_append_str(header_663,");\n");
                /* U13 */impl_name_672 = come_decrement_ref_count2(impl_name_672, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */result_type_name_673 = come_decrement_ref_count2(result_type_name_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_663,source_head_599,source_tail_662-source_head_599);
            buffer_append_str(header_663,";\n");
        }
        if(        !result_type_600->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value772=buffer_to_string(header_663))));
                /* U11 */__right_value772 = come_decrement_ref_count2(__right_value772, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_678=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__602,(_Bool)1));
        static_fun_679=(_Bool)0;
        if(        result_type_600->mStatic) {
            result_type_600->mStatic=(_Bool)0;
            result_type_600->mUniq=(_Bool)0;
            static_fun_679=(_Bool)1;
        }
        inline_fun_680=(_Bool)0;
        if(        result_type_600->mInline) {
            result_type_600->mInline=(_Bool)0;
            result_type_600->mUniq=(_Bool)0;
            inline_fun_680=(_Bool)1;
        }
        if(        version_621>0) {
            new_fun_name_681=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value774=__builtin_string(fun_name_610))),version_621));
            /* U11 */__right_value774 = come_decrement_ref_count2(__right_value774, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj250=fun_name_610;
            fun_name_610=(char*)come_increment_ref_count(__builtin_string(new_fun_name_681));
            /*G*/ __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U13 */new_fun_name_681 = come_decrement_ref_count2(new_fun_name_681, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_682=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2327, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_610)),(struct sType*)come_increment_ref_count(result_type_600),(struct list$1sTypeph*)come_increment_ref_count(param_types_615),(struct list$1charph*)come_increment_ref_count(param_names_616),(struct list$1charph*)come_increment_ref_count(param_default_parametors_617),(_Bool)0,var_args_618,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_678)),static_fun_679,(char*)come_increment_ref_count(buffer_to_string(header_buf_620)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_680));
        if(        info->in_class) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_610)),(struct sFun*)come_increment_ref_count(fun_682));
        }
        else {
            fun2_683=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value784=__builtin_string(fun_name_610))));
            /* U11 */__right_value784 = come_decrement_ref_count2(__right_value784, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_683==((void*)0)||fun2_683->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_610)),(struct sFun*)come_increment_ref_count(fun_682));
            }
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2347, "struct sNode");
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value787=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2347, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_682),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result243__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value791=_inf_value6));
        /*i*/come_call_finalizer3(header_663,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_678,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_682,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_601 = come_decrement_ref_count2(var_name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */fun_name_610 = come_decrement_ref_count2(fun_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */base_fun_name_611 = come_decrement_ref_count2(base_fun_name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_615,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_616,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_617,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_620,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value787,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value791) { __right_value791 = come_decrement_ref_count2(__right_value791, ((struct sNode*)__right_value791)->finalize, ((struct sNode*)__right_value791)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result243__;
        /*i*/come_call_finalizer3(header_663,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_678,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_682,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_621>0) {
            new_fun_name_685=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_610,version_621));
            __dec_obj255=fun_name_610;
            fun_name_610=(char*)come_increment_ref_count(__builtin_string(new_fun_name_685));
            /*G*/ __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U13 */new_fun_name_685 = come_decrement_ref_count2(new_fun_name_685, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_static_686=result_type_600->mStatic;
            result_type_600->mStatic=(_Bool)0;
            result_type_600->mUniq=(_Bool)0;
            result_type_600->mInline=(_Bool)0;
            fun_687=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2364, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_610)),(struct sType*)come_increment_ref_count(result_type_600),(struct list$1sTypeph*)come_increment_ref_count(param_types_615),(struct list$1charph*)come_increment_ref_count(param_names_616),(struct list$1charph*)come_increment_ref_count(param_default_parametors_617),(_Bool)1,var_args_618,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_620)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0));
            fun2_688=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value799=__builtin_string(fun_name_610))));
            /* U11 */__right_value799 = come_decrement_ref_count2(__right_value799, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_688==((void*)0)||fun2_688->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_610)),(struct sFun*)come_increment_ref_count(fun_687));
            }
            source_tail_689=info->p;
            header_690=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2378, "buffer"))));
            buffer_append(header_690,source_head_599,source_tail_689-source_head_599);
            if(            !result_type_static_686) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value803=buffer_to_string(header_690))));
                    /* U11 */__right_value803 = come_decrement_ref_count2(__right_value803, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2387, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value805=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2387, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_687),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result246__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value809=_inf_value7));
            /*i*/come_call_finalizer3(fun_687,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_690,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_601 = come_decrement_ref_count2(var_name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_610 = come_decrement_ref_count2(fun_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */base_fun_name_611 = come_decrement_ref_count2(base_fun_name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_615,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_616,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_617,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_620,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value805,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value809) { __right_value809 = come_decrement_ref_count2(__right_value809, ((struct sNode*)__right_value809)->finalize, ((struct sNode*)__right_value809)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result246__;
            /*i*/come_call_finalizer3(fun_687,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_690,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            asm_fun_692=(char*)come_increment_ref_count(parse_attribute(info,(_Bool)1));
            if(            string_operator_not_equals(asm_fun_692,"")) {
                __dec_obj260=fun_name_610;
                fun_name_610=(char*)come_increment_ref_count(__builtin_string(asm_fun_692));
                /*G*/ __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            expected_next_character(59,info);
            result_type_static_693=result_type_600->mStatic;
            result_type_600->mStatic=(_Bool)0;
            result_type_600->mUniq=(_Bool)0;
            result_type_600->mInline=(_Bool)0;
            fun_694=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2403, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_610)),(struct sType*)come_increment_ref_count(result_type_600),(struct list$1sTypeph*)come_increment_ref_count(param_types_615),(struct list$1charph*)come_increment_ref_count(param_names_616),(struct list$1charph*)come_increment_ref_count(param_default_parametors_617),(_Bool)1,var_args_618,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_620)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0));
            fun2_695=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value817=__builtin_string(fun_name_610))));
            /* U11 */__right_value817 = come_decrement_ref_count2(__right_value817, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_695==((void*)0)||fun2_695->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_610)),(struct sFun*)come_increment_ref_count(fun_694));
            }
            source_tail_696=info->p;
            header_697=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2417, "buffer"))));
            buffer_append(header_697,source_head_599,source_tail_696-source_head_599);
            if(            !result_type_static_693) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value821=buffer_to_string(header_697))));
                    /* U11 */__right_value821 = come_decrement_ref_count2(__right_value821, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2426, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value823=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2426, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_694),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result249__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value827=_inf_value8));
            /* U13 */asm_fun_692 = come_decrement_ref_count2(asm_fun_692, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_694,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_697,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_601 = come_decrement_ref_count2(var_name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */fun_name_610 = come_decrement_ref_count2(fun_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */base_fun_name_611 = come_decrement_ref_count2(base_fun_name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_615,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_616,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_617,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_620,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value823,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value827) { __right_value827 = come_decrement_ref_count2(__right_value827, ((struct sNode*)__right_value827)->finalize, ((struct sNode*)__right_value827)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result249__;
            /* U13 */asm_fun_692 = come_decrement_ref_count2(asm_fun_692, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_694,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_697,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_623;
    __result250__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    /*i*/come_call_finalizer3(result_type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_601 = come_decrement_ref_count2(var_name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */fun_name_610 = come_decrement_ref_count2(fun_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */base_fun_name_611 = come_decrement_ref_count2(base_fun_name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_615,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_616,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_617,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(header_buf_620,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj245;
struct list$1charph* __dec_obj246;
struct list$1charph* __dec_obj247;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj245=self->v1;
            come_call_finalizer3(__dec_obj245,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj246=self->v2;
            come_call_finalizer3(__dec_obj246,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj247=self->v3;
            come_call_finalizer3(__dec_obj247,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj248;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj248=self->sname;
            /*G*/ __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result225__;
void* __right_value732 = (void*)0;
struct sLambdaNode* result_629;
void* __right_value733 = (void*)0;
char* __dec_obj249;
struct sLambdaNode* __result226__;
    if(    self==(void*)0) {
        __result225__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    result_629=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(    self!=((void*)0)) {
        result_629->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj249=result_629->sname;
        result_629->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_629->mFun=self->mFun;
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_629;
    /*i*/come_call_finalizer3(result_629,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_653;
unsigned int it_654;
_Bool same_key_exist_655;
char* it2_656;
struct map$2charphsGenericsFunph* __result238__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_653=string_get_hash_key(key)%self->size;
    it_654=hash_653;
    while((_Bool)1) {
        if(        self->item_existance[it_654]) {
            if(            string_equals(self->keys[it_654],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_654]);
                    /* U13 */self->keys[it_654] = come_decrement_ref_count2(self->keys[it_654], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_654]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_654]);
                    self->keys[it_654]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_654],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_654]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_654]=item;
                }
                break;
            }
            it_654++;
            if(            it_654>=self->size) {
                it_654=0;
            }
            else if(            it_654==hash_653) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_654]=(_Bool)1;
            if(            1) {
                self->keys[it_654]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_654]=key;
            }
            if(            1) {
                self->items[it_654]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_654]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_655=(_Bool)0;
    for(    it2_656=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_656=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_656,key)) {
            same_key_exist_655=(_Bool)1;
        }
    }
    if(    !same_key_exist_655) {
        list$1charp_push_back(self->key_list,key);
    }
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_636;
void* __right_value745 = (void*)0;
char** keys_637;
void* __right_value746 = (void*)0;
struct sGenericsFun** items_638;
void* __right_value747 = (void*)0;
_Bool* item_existance_639;
int len_640;
char* it_643;
struct sGenericsFun* default_value_646;
struct sGenericsFun* it2_647;
unsigned int hash_650;
int n_651;
struct sGenericsFun* default_value_652;
default_value_646 = (void*)0;
default_value_652 = (void*)0;
    size_636=self->size*10;
    keys_637=(char**)come_increment_ref_count(((char**)(__right_value745=(char**)come_calloc(1, sizeof(char*)*(1*(size_636)), "/usr/local/include/comelang.h", 1635, "char*%"))));
    items_638=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value746=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_636)), "/usr/local/include/comelang.h", 1636, "sGenericsFun*%"))));
    item_existance_639=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value747=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_636)), "/usr/local/include/comelang.h", 1637, "bool"))));
    len_640=0;
    for(    it_643=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_643=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_646,0,sizeof(struct sGenericsFun*));
        it2_647=map$2charphsGenericsFunph_at(self,it_643,default_value_646);
        hash_650=string_get_hash_key(it_643)%size_636;
        n_651=hash_650;
        while((_Bool)1) {
            if(            item_existance_639[n_651]) {
                n_651++;
                if(                n_651>=size_636) {
                    n_651=0;
                }
                else if(                n_651==hash_650) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_639[n_651]=(_Bool)1;
                keys_637[n_651]=it_643;
                items_638[n_651]=map$2charphsGenericsFunph_at(self,it_643,default_value_652);
                len_640++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_637;
    self->items=items_638;
    self->item_existance=item_existance_639;
    self->size=size_636;
    self->len=len_640;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_641;
char* __result228__;
char* __result229__;
char* result_642;
char* __result230__;
result_641 = (void*)0;
result_642 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_641,0,sizeof(char*));
        __result228__ = gComeFunResultObject = __result_obj__ = result_641;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result229__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    memset(&result_642,0,sizeof(char*));
    __result230__ = gComeFunResultObject = __result_obj__ = result_642;
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_644;
char* __result231__;
char* __result232__;
char* result_645;
char* __result233__;
result_644 = (void*)0;
result_645 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_644,0,sizeof(char*));
        __result231__ = gComeFunResultObject = __result_obj__ = result_644;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result232__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    memset(&result_645,0,sizeof(char*));
    __result233__ = gComeFunResultObject = __result_obj__ = result_645;
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_648;
unsigned int it_649;
struct sGenericsFun* __result234__;
struct sGenericsFun* __result235__;
struct sGenericsFun* __result236__;
struct sGenericsFun* __result237__;
    hash_648=string_get_hash_key(((char*)key))%self->size;
    it_649=hash_648;
    while((_Bool)1) {
        if(        self->item_existance[it_649]) {
            if(            string_equals(self->keys[it_649],key)) {
                __result234__ = gComeFunResultObject = __result_obj__ = self->items[it_649];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result234__;
            }
            it_649++;
            if(            it_649>=self->size) {
                it_649=0;
            }
            else if(            it_649==hash_648) {
                __result235__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result235__;
            }
        }
        else {
            __result236__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result236__;
        }
    }
    __result237__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_699;
char* __dec_obj265;
char* last_code2_700;
char* __dec_obj266;
_Bool comma_instead_of_semicolon_701;
struct sClass* current_stack_frame_struct_702;
struct sFun* finalizer_703;
void* __right_value828 = (void*)0;
char* real_fun_name_704;
void* __right_value829 = (void*)0;
char* user_real_fun_name_705;
struct sFun* user_finalizer_706;
void* __right_value830 = (void*)0;
struct sType* type2_707;
struct sClass* klass_708;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct buffer* source_709;
struct list$1tuple2$2charphsTypephph* o2_saved_718;
struct tuple2$2charphsTypeph* it_721;
struct tuple2$2charphsTypeph* multiple_assign_var10 = (void*)0;
char* name_724=0;
struct sType* field_type_725=0;
char* p_728;
int sline_729;
char* sname_730;
char* head_731;
struct buffer* source3_732;
struct buffer* __dec_obj274;
void* __right_value833 = (void*)0;
char* __dec_obj275;
void* __right_value834 = (void*)0;
struct sBlock* block_733;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct sType* result_type_734;
void* __right_value837 = (void*)0;
char* name_735;
void* __right_value838 = (void*)0;
struct sType* self_type_736;
struct sType* __list_values21___737[1];
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct list$1sTypeph* param_types_738;
void* __right_value841 = (void*)0;
char* __list_values22___739[1];
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct list$1charph* param_names_740;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct list$1charph* param_default_parametors_741;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct buffer* header_buf_742;
void* __right_value848 = (void*)0;
int i_743;
struct sType* param_type_744;
char* param_name_745;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct sFun* fun_746;
void* __right_value854 = (void*)0;
struct sFun* fun2_747;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value861 = (void*)0;
struct sNode* node_748;
_Bool Value_750;
struct buffer* __dec_obj280;
char* __dec_obj281;
char* __dec_obj282;
char* __dec_obj283;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct tuple2$2sFunpcharph* __result264__;
    last_code_699=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj265=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_700=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj266=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_701=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_702=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_703=((void*)0);
    real_fun_name_704=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_705=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_706=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_705);
    type2_707=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_707;
    klass_708=type->mClass;
    if(    type->mPointerNum>0&&klass_708->mStruct||type->mAllocaValue) {
        source_709=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2467, "buffer"))));
        buffer_append_char(source_709,123);
        if(        user_finalizer_706) {
            char source2_710[1024];
            memset(&source2_710, 0, sizeof(char)            *(1024)            );
            snprintf(source2_710,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_705);
            buffer_append_str(source_709,source2_710);
        }
        klass_708=map$2charphsClassphp_operator_load_element(info->classes,klass_708->mName);
        for(        o2_saved_718=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_708->mFields)),it_721=list$1tuple2$2charphsTypephph_begin((o2_saved_718));        !list$1tuple2$2charphsTypephph_end((o2_saved_718));        it_721=list$1tuple2$2charphsTypephph_next((o2_saved_718))        ){
            multiple_assign_var10=it_721;
            name_724=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_725=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_725->mClass->mName)&&type->mPointerNum==field_type_725->mPointerNum&&field_type_725->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_725->mHeap) {
                char source2_726[1024];
                memset(&source2_726, 0, sizeof(char)                *(1024)                );
                snprintf(source2_726,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_724,name_724,name_724,name_724);
                buffer_append_str(source_709,source2_726);
            }
            else if(            field_type_725->mChannel) {
                char source2_727[1024];
                memset(&source2_727, 0, sizeof(char)                *(1024)                );
                snprintf(source2_727,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_724,name_724);
                buffer_append_str(source_709,source2_727);
                snprintf(source2_727,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_724,name_724);
                buffer_append_str(source_709,source2_727);
            }
            /* U13 */name_724 = come_decrement_ref_count2(name_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_725,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_718,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_709,125);
        p_728=info->p;
        sline_729=info->sline;
        sname_730=(char*)come_increment_ref_count(info->sname);
        head_731=info->head;
        source3_732=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj274=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_709);
        come_call_finalizer3(__dec_obj274,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_709->buf;
        info->head=source_709->buf;
        __dec_obj275=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_704));
        /*G*/ __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_733=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_734=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2522, "sType")),"void",(_Bool)0,info));
        name_735=(char*)come_increment_ref_count(string_clone(real_fun_name_704));
        self_type_736=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_736->mHeap=(_Bool)0;
        if(        self_type_736->mPointerNum==0) {
            self_type_736->mPointerNum=1;
        }
        if(        self_type_736->mPointerNum>1) {
            self_type_736->mPointerNum=1;
        }
        param_types_738=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___737[0]=(struct sType*)come_increment_ref_count(self_type_736),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2532, "struct list$1sTypeph")),1,__list_values21___737)));
        param_names_740=(struct list$1charph*)come_increment_ref_count((__list_values22___739[0]=(char*)come_increment_ref_count(((char*)(__right_value841=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2533, "struct list$1charph")),1,__list_values22___739)));
        /* U11 */__right_value841 = come_decrement_ref_count2(__right_value841, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_741=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2534, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_741,((void*)0));
        header_buf_742=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2537, "buffer"))));
        buffer_append_str(header_buf_742,((char*)(__right_value848=make_come_type_name_string(result_type_734,info))));
        /* U11 */__right_value848 = come_decrement_ref_count2(__right_value848, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_742," ");
        buffer_append_str(header_buf_742,real_fun_name_704);
        buffer_append_str(header_buf_742,"(");
        for(        i_743=0;        i_743<list$1sTypeph_length(param_types_738);        i_743++        ){
            param_type_744=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_738,i_743), "05function.c", 2545, 7));
            param_name_745=((char*)come_null_check(list$1charphp_operator_load_element(param_names_740,i_743), "05function.c", 2546, 8));
            buffer_append_str(header_buf_742,((char*)(__right_value849=make_come_type_name_string(param_type_744,info))));
            /* U11 */__right_value849 = come_decrement_ref_count2(__right_value849, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_742," ");
            buffer_append_str(header_buf_742,param_name_745);
            if(            i_743!=list$1sTypeph_length(param_types_738)-1) {
                buffer_append_str(header_buf_742,",");
            }
        }
        buffer_append_str(header_buf_742,")");
        result_type_734->mStatic=(_Bool)0;
        result_type_734->mUniq=(_Bool)0;
        result_type_734->mInline=(_Bool)0;
        fun_746=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2562, "sFun")),(char*)come_increment_ref_count(name_735),(struct sType*)come_increment_ref_count(result_type_734),(struct list$1sTypeph*)come_increment_ref_count(param_types_738),(struct list$1charph*)come_increment_ref_count(param_names_740),(struct list$1charph*)come_increment_ref_count(param_default_parametors_741),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_733),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_742)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        fun2_747=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value854=__builtin_string(fun_name))));
        /* U11 */__right_value854 = come_decrement_ref_count2(__right_value854, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_747==((void*)0)||fun2_747->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_735)),(struct sFun*)come_increment_ref_count(fun_746));
        }
        finalizer_703=fun_746;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2578, "struct sNode");
        _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value857=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2578, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_746),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_748=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*g*/come_call_finalizer3(__right_value857,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_750=node_compile(node_748,info);
        if(        !Value_750) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        else {
        }
        __dec_obj280=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_732);
        come_call_finalizer3(__dec_obj280,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_728;
        info->head=head_731;
        info->sline=sline_729;
        __dec_obj281=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_730);
        /*G*/ __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_709,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_730 = come_decrement_ref_count2(sname_730, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_732,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_733,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_734,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_735 = come_decrement_ref_count2(name_735, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_736,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_738,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_740,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_741,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_742,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_746,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_748) { node_748 = come_decrement_ref_count2(node_748, ((struct sNode*)node_748)->finalize, ((struct sNode*)node_748)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_702;
    __dec_obj282=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_699);
    /*G*/ __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj283=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_700);
    /*G*/ __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_701;
    __result264__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value863=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2598, "struct tuple2$2sFunpcharph")),finalizer_703,(char*)come_increment_ref_count(real_fun_name_704))));
    /* U13 */last_code_699 = come_decrement_ref_count2(last_code_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_700 = come_decrement_ref_count2(last_code2_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_704 = come_decrement_ref_count2(real_fun_name_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */user_real_fun_name_705 = come_decrement_ref_count2(user_real_fun_name_705, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_707,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value863,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_711;
unsigned int hash_712;
unsigned int it_713;
struct sClass* __result251__;
struct sClass* __result252__;
struct sClass* __result253__;
struct sClass* __result254__;
default_value_711 = (void*)0;
    memset(&default_value_711,0,sizeof(struct sClass*));
    hash_712=string_get_hash_key(((char*)key))%self->size;
    it_713=hash_712;
    while((_Bool)1) {
        if(        self->item_existance[it_713]) {
            if(            string_equals(self->keys[it_713],key)) {
                __result251__ = gComeFunResultObject = __result_obj__ = self->items[it_713];
                /*i*/come_call_finalizer3(default_value_711,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result251__;
            }
            it_713++;
            if(            it_713>=self->size) {
                it_713=0;
            }
            else if(            it_713==hash_712) {
                __result252__ = gComeFunResultObject = __result_obj__ = default_value_711;
                /*i*/come_call_finalizer3(default_value_711,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result252__;
            }
        }
        else {
            __result253__ = gComeFunResultObject = __result_obj__ = default_value_711;
            /*i*/come_call_finalizer3(default_value_711,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result253__;
        }
    }
    __result254__ = gComeFunResultObject = __result_obj__ = default_value_711;
    /*i*/come_call_finalizer3(default_value_711,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj267;
struct list$1tuple2$2charphsTypephph* __dec_obj268;
char* __dec_obj272;
char* __dec_obj273;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj267=self->mName;
            /*G*/ __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj268=self->mFields;
            come_call_finalizer3(__dec_obj268,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj272=self->mDeclareSName;
            /*G*/ __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj273=self->mParentClassName;
            /*G*/ __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_714;
struct list_item$1tuple2$2charphsTypephph* prev_it_715;
    it_714=self->head;
    while(it_714!=((void*)0)) {
        prev_it_715=it_714;
        it_714=it_714->next;
        /*i*/come_call_finalizer3(prev_it_715,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj269;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj269=self->item;
            come_call_finalizer3(__dec_obj269,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj270;
struct sType* __dec_obj271;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj270=self->v1;
            /*G*/ __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj271=self->v2;
            come_call_finalizer3(__dec_obj271,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_716;
struct list_item$1tuple2$2charphsTypephph* prev_it_717;
    it_716=self->head;
    while(it_716!=((void*)0)) {
        prev_it_717=it_716;
        it_716=it_716->next;
        /*i*/come_call_finalizer3(prev_it_717,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_719;
struct tuple2$2charphsTypeph* __result255__;
struct tuple2$2charphsTypeph* __result256__;
struct tuple2$2charphsTypeph* result_720;
struct tuple2$2charphsTypeph* __result257__;
result_719 = (void*)0;
result_720 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_719,0,sizeof(struct tuple2$2charphsTypeph*));
        __result255__ = gComeFunResultObject = __result_obj__ = result_719;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    self->it=self->head;
    if(    self->it) {
        __result256__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    memset(&result_720,0,sizeof(struct tuple2$2charphsTypeph*));
    __result257__ = gComeFunResultObject = __result_obj__ = result_720;
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_722;
struct tuple2$2charphsTypeph* __result258__;
struct tuple2$2charphsTypeph* __result259__;
struct tuple2$2charphsTypeph* result_723;
struct tuple2$2charphsTypeph* __result260__;
result_722 = (void*)0;
result_723 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_722,0,sizeof(struct tuple2$2charphsTypeph*));
        __result258__ = gComeFunResultObject = __result_obj__ = result_722;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result259__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    memset(&result_723,0,sizeof(struct tuple2$2charphsTypeph*));
    __result260__ = gComeFunResultObject = __result_obj__ = result_723;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj284;
struct tuple2$2sFunpcharph* __result263__;
    self->v1=v1;
    __dec_obj284=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj285;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj285=self->v2;
            /*G*/ __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_751;
char* __dec_obj286;
char* last_code2_752;
char* __dec_obj287;
_Bool comma_instead_of_semicolon_753;
struct sClass* current_stack_frame_struct_754;
struct sFun* finalizer_755;
void* __right_value864 = (void*)0;
char* real_fun_name_756;
void* __right_value865 = (void*)0;
struct sType* type2_757;
struct sClass* klass_758;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct buffer* source_759;
struct list$1tuple2$2charphsTypephph* o2_saved_760;
struct tuple2$2charphsTypeph* it_761;
struct tuple2$2charphsTypeph* multiple_assign_var11 = (void*)0;
char* name_762=0;
struct sType* field_type_763=0;
char* p_765;
int sline_766;
char* sname_767;
char* head_768;
struct buffer* source3_769;
struct buffer* __dec_obj288;
void* __right_value868 = (void*)0;
char* __dec_obj289;
void* __right_value869 = (void*)0;
struct sBlock* block_770;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
struct sType* result_type_771;
void* __right_value872 = (void*)0;
char* name_772;
void* __right_value873 = (void*)0;
struct sType* self_type_773;
struct sType* __list_values23___774[1];
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct list$1sTypeph* param_types_775;
void* __right_value876 = (void*)0;
char* __list_values24___776[1];
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct list$1charph* param_names_777;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct list$1charph* param_default_parametors_778;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
struct buffer* header_buf_779;
void* __right_value883 = (void*)0;
int i_780;
struct sType* param_type_781;
char* param_name_782;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct sFun* fun_783;
void* __right_value889 = (void*)0;
struct sFun* fun2_784;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value896 = (void*)0;
struct sNode* node_785;
_Bool Value_787;
struct buffer* __dec_obj294;
char* __dec_obj295;
char* __dec_obj296;
char* __dec_obj297;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct tuple2$2sFunpcharph* __result267__;
    last_code_751=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj286=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_752=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj287=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_753=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_754=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_755=((void*)0);
    real_fun_name_756=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_757=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_757;
    klass_758=type->mClass;
    if(    type->mPointerNum>0&&klass_758->mStruct) {
        source_759=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2624, "buffer"))));
        buffer_append_char(source_759,123);
        klass_758=map$2charphsClassphp_operator_load_element(info->classes,klass_758->mName);
        for(        o2_saved_760=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_758->mFields)),it_761=list$1tuple2$2charphsTypephph_begin((o2_saved_760));        !list$1tuple2$2charphsTypephph_end((o2_saved_760));        it_761=list$1tuple2$2charphsTypephph_next((o2_saved_760))        ){
            multiple_assign_var11=it_761;
            name_762=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_763=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_763->mClass->mName)&&type->mPointerNum==field_type_763->mPointerNum&&field_type_763->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_763->mHeap) {
                char source2_764[1024];
                memset(&source2_764, 0, sizeof(char)                *(1024)                );
                snprintf(source2_764,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { force_delete borrow self.%s; }}\n",name_762,name_762,name_762,name_762);
                buffer_append_str(source_759,source2_764);
            }
            /* U13 */name_762 = come_decrement_ref_count2(name_762, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_763,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_760,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_759,125);
        p_765=info->p;
        sline_766=info->sline;
        sname_767=(char*)come_increment_ref_count(info->sname);
        head_768=info->head;
        source3_769=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj288=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_759);
        come_call_finalizer3(__dec_obj288,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_759->buf;
        info->head=source_759->buf;
        __dec_obj289=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_756));
        /*G*/ __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_770=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_771=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2663, "sType")),"void",(_Bool)0,info));
        name_772=(char*)come_increment_ref_count(string_clone(real_fun_name_756));
        self_type_773=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_773->mHeap=(_Bool)0;
        if(        self_type_773->mPointerNum>1) {
            self_type_773->mPointerNum=1;
        }
        param_types_775=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___774[0]=(struct sType*)come_increment_ref_count(self_type_773),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2670, "struct list$1sTypeph")),1,__list_values23___774)));
        param_names_777=(struct list$1charph*)come_increment_ref_count((__list_values24___776[0]=(char*)come_increment_ref_count(((char*)(__right_value876=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2671, "struct list$1charph")),1,__list_values24___776)));
        /* U11 */__right_value876 = come_decrement_ref_count2(__right_value876, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_778=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2672, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_778,((void*)0));
        header_buf_779=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2675, "buffer"))));
        buffer_append_str(header_buf_779,((char*)(__right_value883=make_come_type_name_string(result_type_771,info))));
        /* U11 */__right_value883 = come_decrement_ref_count2(__right_value883, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_779," ");
        buffer_append_str(header_buf_779,real_fun_name_756);
        buffer_append_str(header_buf_779,"(");
        for(        i_780=0;        i_780<list$1sTypeph_length(param_types_775);        i_780++        ){
            param_type_781=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_775,i_780), "05function.c", 2683, 9));
            param_name_782=((char*)come_null_check(list$1charphp_operator_load_element(param_names_777,i_780), "05function.c", 2684, 10));
            buffer_append_str(header_buf_779,((char*)(__right_value884=make_come_type_name_string(param_type_781,info))));
            /* U11 */__right_value884 = come_decrement_ref_count2(__right_value884, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_779," ");
            buffer_append_str(header_buf_779,param_name_782);
            if(            i_780!=list$1sTypeph_length(param_types_775)-1) {
                buffer_append_str(header_buf_779,",");
            }
        }
        buffer_append_str(header_buf_779,")");
        result_type_771->mStatic=(_Bool)0;
        result_type_771->mUniq=(_Bool)0;
        result_type_771->mInline=(_Bool)0;
        fun_783=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2700, "sFun")),(char*)come_increment_ref_count(name_772),(struct sType*)come_increment_ref_count(result_type_771),(struct list$1sTypeph*)come_increment_ref_count(param_types_775),(struct list$1charph*)come_increment_ref_count(param_names_777),(struct list$1charph*)come_increment_ref_count(param_default_parametors_778),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_770),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_779)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        fun2_784=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value889=__builtin_string(fun_name))));
        /* U11 */__right_value889 = come_decrement_ref_count2(__right_value889, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_784==((void*)0)||fun2_784->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_772)),(struct sFun*)come_increment_ref_count(fun_783));
        }
        finalizer_755=fun_783;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2716, "struct sNode");
        _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value892=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2716, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_783),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_785=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*g*/come_call_finalizer3(__right_value892,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_787=node_compile(node_785,info);
        if(        !Value_787) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        else {
        }
        __dec_obj294=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_769);
        come_call_finalizer3(__dec_obj294,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_765;
        info->head=head_768;
        info->sline=sline_766;
        __dec_obj295=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_767);
        /*G*/ __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_759,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_767 = come_decrement_ref_count2(sname_767, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_769,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_770,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_771,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_772 = come_decrement_ref_count2(name_772, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_773,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_775,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_777,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_778,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_779,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_783,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_785) { node_785 = come_decrement_ref_count2(node_785, ((struct sNode*)node_785)->finalize, ((struct sNode*)node_785)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_754;
    __dec_obj296=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_751);
    /*G*/ __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj297=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_752);
    /*G*/ __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_753;
    __result267__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value898=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2736, "struct tuple2$2sFunpcharph")),finalizer_755,(char*)come_increment_ref_count(real_fun_name_756))));
    /* U13 */last_code_751 = come_decrement_ref_count2(last_code_751, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_752 = come_decrement_ref_count2(last_code2_752, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_756 = come_decrement_ref_count2(real_fun_name_756, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_757,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value898,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_788;
char* __dec_obj298;
char* last_code2_789;
char* __dec_obj299;
_Bool comma_instead_of_semicolon_790;
struct sClass* current_stack_frame_struct_791;
struct sFun* equaler_792;
void* __right_value899 = (void*)0;
char* real_fun_name_793;
void* __right_value900 = (void*)0;
struct sType* type2_794;
struct sClass* klass_795;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
struct buffer* source_796;
char* name_797;
struct list$1tuple2$2charphsTypephph* o2_saved_799;
struct tuple2$2charphsTypeph* it_800;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_801=0;
struct sType* field_type_802=0;
char* p_804;
int sline_805;
char* sname_806;
char* head_807;
struct buffer* source3_808;
struct buffer* __dec_obj300;
void* __right_value903 = (void*)0;
char* __dec_obj301;
void* __right_value904 = (void*)0;
struct sBlock* block_809;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
struct sType* result_type_810;
void* __right_value907 = (void*)0;
char* name_811;
void* __right_value908 = (void*)0;
struct sType* left_type_812;
void* __right_value909 = (void*)0;
struct sType* right_type_813;
struct sType* __list_values25___814[2];
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct list$1sTypeph* param_types_815;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
char* __list_values26___816[2];
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
struct list$1charph* param_names_817;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
struct list$1charph* param_default_parametors_818;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct buffer* header_buf_819;
void* __right_value920 = (void*)0;
int i_820;
struct sType* param_type_821;
char* param_name_822;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
struct sFun* fun_823;
void* __right_value926 = (void*)0;
struct sFun* fun2_824;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value933 = (void*)0;
struct sNode* node_825;
_Bool Value_827;
struct buffer* __dec_obj306;
char* __dec_obj307;
char* __dec_obj308;
char* __dec_obj309;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
struct tuple2$2sFunpcharph* __result270__;
    last_code_788=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj298=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_789=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj299=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_790=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_791=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_792=((void*)0);
    real_fun_name_793=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_794=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_794;
    klass_795=type->mClass;
    if(    type->mPointerNum>0&&!klass_795->mNumber) {
        source_796=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2761, "buffer"))));
        buffer_append_char(source_796,123);
        if(        klass_795->mProtocol) {
            name_797="_protocol_obj";
            char source2_798[1024];
            memset(&source2_798, 0, sizeof(char)            *(1024)            );
            snprintf(source2_798,1024,"return left.%s.equals(right.%s);\n",name_797,name_797);
            buffer_append_str(source_796,source2_798);
        }
        else {
            klass_795=map$2charphsClassphp_operator_load_element(info->classes,klass_795->mName);
            for(            o2_saved_799=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_795->mFields)),it_800=list$1tuple2$2charphsTypephph_begin((o2_saved_799));            !list$1tuple2$2charphsTypephph_end((o2_saved_799));            it_800=list$1tuple2$2charphsTypephph_next((o2_saved_799))            ){
                multiple_assign_var12=it_800;
                name_801=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_802=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_802->mClass->mName)&&type->mPointerNum==field_type_802->mPointerNum&&field_type_802->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_803[1024];
                memset(&source2_803, 0, sizeof(char)                *(1024)                );
                snprintf(source2_803,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_801,name_801,name_801);
                buffer_append_str(source_796,source2_803);
                /* U13 */name_801 = come_decrement_ref_count2(name_801, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_802,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_799,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_796,"return true;");
        buffer_append_char(source_796,125);
        p_804=info->p;
        sline_805=info->sline;
        sname_806=(char*)come_increment_ref_count(info->sname);
        head_807=info->head;
        source3_808=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj300=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_796);
        come_call_finalizer3(__dec_obj300,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_796->buf;
        info->head=source_796->buf;
        __dec_obj301=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_793));
        /*G*/ __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_809=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_810=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2807, "sType")),"bool",(_Bool)0,info));
        name_811=(char*)come_increment_ref_count(string_clone(real_fun_name_793));
        left_type_812=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_812->mHeap=(_Bool)0;
        right_type_813=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_813->mHeap=(_Bool)0;
        param_types_815=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___814[0]=(struct sType*)come_increment_ref_count(left_type_812),
__list_values25___814[1]=(struct sType*)come_increment_ref_count(right_type_813),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2813, "struct list$1sTypeph")),2,__list_values25___814)));
        param_names_817=(struct list$1charph*)come_increment_ref_count((__list_values26___816[0]=(char*)come_increment_ref_count(((char*)(__right_value912=__builtin_string("left")))),
__list_values26___816[1]=(char*)come_increment_ref_count(((char*)(__right_value913=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2814, "struct list$1charph")),2,__list_values26___816)));
        /* U11 */__right_value912 = come_decrement_ref_count2(__right_value912, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value913 = come_decrement_ref_count2(__right_value913, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_818=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2815, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_818,((void*)0));
        list$1charph_push_back(param_default_parametors_818,((void*)0));
        header_buf_819=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2819, "buffer"))));
        buffer_append_str(header_buf_819,((char*)(__right_value920=make_come_type_name_string(result_type_810,info))));
        /* U11 */__right_value920 = come_decrement_ref_count2(__right_value920, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_819," ");
        buffer_append_str(header_buf_819,real_fun_name_793);
        buffer_append_str(header_buf_819,"(");
        for(        i_820=0;        i_820<list$1sTypeph_length(param_types_815);        i_820++        ){
            param_type_821=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_815,i_820), "05function.c", 2827, 11));
            param_name_822=((char*)come_null_check(list$1charphp_operator_load_element(param_names_817,i_820), "05function.c", 2828, 12));
            buffer_append_str(header_buf_819,((char*)(__right_value921=make_come_type_name_string(param_type_821,info))));
            /* U11 */__right_value921 = come_decrement_ref_count2(__right_value921, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_819," ");
            buffer_append_str(header_buf_819,param_name_822);
            if(            i_820!=list$1sTypeph_length(param_types_815)-1) {
                buffer_append_str(header_buf_819,",");
            }
        }
        buffer_append_str(header_buf_819,")");
        result_type_810->mStatic=(_Bool)0;
        result_type_810->mUniq=(_Bool)0;
        result_type_810->mInline=(_Bool)0;
        fun_823=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2844, "sFun")),(char*)come_increment_ref_count(name_811),(struct sType*)come_increment_ref_count(result_type_810),(struct list$1sTypeph*)come_increment_ref_count(param_types_815),(struct list$1charph*)come_increment_ref_count(param_names_817),(struct list$1charph*)come_increment_ref_count(param_default_parametors_818),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_809),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_819)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        fun2_824=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value926=__builtin_string(fun_name))));
        /* U11 */__right_value926 = come_decrement_ref_count2(__right_value926, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_824==((void*)0)||fun2_824->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_811)),(struct sFun*)come_increment_ref_count(fun_823));
        }
        equaler_792=fun_823;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2860, "struct sNode");
        _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value929=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2860, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_823),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_825=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*g*/come_call_finalizer3(__right_value929,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_827=node_compile(node_825,info);
        if(        !Value_827) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj306=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_808);
        come_call_finalizer3(__dec_obj306,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_804;
        info->head=head_807;
        info->sline=sline_805;
        __dec_obj307=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_806);
        /*G*/ __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_796,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    info->current_stack_frame_struct=current_stack_frame_struct_791;
    __dec_obj308=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_788);
    /*G*/ __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj309=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_789);
    /*G*/ __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_790;
    __result270__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value935=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2880, "struct tuple2$2sFunpcharph")),equaler_792,(char*)come_increment_ref_count(real_fun_name_793))));
    /* U13 */last_code_788 = come_decrement_ref_count2(last_code_788, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_789 = come_decrement_ref_count2(last_code2_789, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_793 = come_decrement_ref_count2(real_fun_name_793, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_794,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value935,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_828;
char* __dec_obj310;
char* last_code2_829;
char* __dec_obj311;
_Bool comma_instead_of_semicolon_830;
struct sClass* current_stack_frame_struct_831;
struct sFun* equaler_832;
void* __right_value936 = (void*)0;
char* real_fun_name_833;
void* __right_value937 = (void*)0;
struct sType* type2_834;
struct sClass* klass_835;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
struct buffer* source_836;
char* name_837;
int i_840;
struct list$1tuple2$2charphsTypephph* o2_saved_841;
struct tuple2$2charphsTypeph* it_842;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_843=0;
struct sType* field_type_844=0;
char* p_848;
int sline_849;
char* sname_850;
char* head_851;
struct buffer* source3_852;
struct buffer* __dec_obj312;
void* __right_value940 = (void*)0;
char* __dec_obj313;
void* __right_value941 = (void*)0;
struct sBlock* block_853;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct sType* result_type_854;
void* __right_value944 = (void*)0;
char* name_855;
void* __right_value945 = (void*)0;
struct sType* left_type_856;
void* __right_value946 = (void*)0;
struct sType* right_type_857;
struct sType* __list_values27___858[2];
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
struct list$1sTypeph* param_types_859;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
char* __list_values28___860[2];
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct list$1charph* param_names_861;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
struct list$1charph* param_default_parametors_862;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
struct buffer* header_buf_863;
void* __right_value957 = (void*)0;
int i_864;
struct sType* param_type_865;
char* param_name_866;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct sFun* fun_867;
void* __right_value963 = (void*)0;
struct sFun* fun2_868;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value970 = (void*)0;
struct sNode* node_869;
_Bool Value_871;
struct buffer* __dec_obj318;
char* __dec_obj319;
char* __dec_obj320;
char* __dec_obj321;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct tuple2$2sFunpcharph* __result273__;
    last_code_828=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj310=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_829=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj311=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        source_836=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2905, "buffer"))));
        buffer_append_char(source_836,123);
        if(        klass_835->mProtocol) {
            name_837="_protocol_obj";
            char source2_838[1024];
            memset(&source2_838, 0, sizeof(char)            *(1024)            );
            snprintf(source2_838,1024,"return left.%s !== right.%s;\n",name_837,name_837);
            buffer_append_str(source_836,source2_838);
        }
        else {
            char source2_839[1024];
            memset(&source2_839, 0, sizeof(char)            *(1024)            );
            snprintf(source2_839,1024,"return !(");
            buffer_append_str(source_836,source2_839);
            snprintf(source2_839,1024,"( ");
            buffer_append_str(source_836,source2_839);
            i_840=0;
            klass_835=map$2charphsClassphp_operator_load_element(info->classes,klass_835->mName);
            for(            o2_saved_841=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_835->mFields)),it_842=list$1tuple2$2charphsTypephph_begin((o2_saved_841));            !list$1tuple2$2charphsTypephph_end((o2_saved_841));            it_842=list$1tuple2$2charphsTypephph_next((o2_saved_841))            ){
                multiple_assign_var13=it_842;
                name_843=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_844=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_844->mClass->mName)&&type->mPointerNum==field_type_844->mPointerNum&&field_type_844->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_845[1024];
                memset(&source2_845, 0, sizeof(char)                *(1024)                );
                snprintf(source2_845,1024,"(left.%s === right.%s)",name_843,name_843,name_843);
                buffer_append_str(source_836,source2_845);
                if(                i_840==list$1tuple2$2charphsTypephph_length(klass_835->mFields)-1) {
                    char source2_846[1024];
                    memset(&source2_846, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_846,1024,"));");
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
        __dec_obj312=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_836);
        come_call_finalizer3(__dec_obj312,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_836->buf;
        info->head=source_836->buf;
        __dec_obj313=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_833));
        /*G*/ __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_853=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_854=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2971, "sType")),"bool",(_Bool)0,info));
        name_855=(char*)come_increment_ref_count(string_clone(real_fun_name_833));
        left_type_856=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_856->mHeap=(_Bool)0;
        right_type_857=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_857->mHeap=(_Bool)0;
        param_types_859=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___858[0]=(struct sType*)come_increment_ref_count(left_type_856),
__list_values27___858[1]=(struct sType*)come_increment_ref_count(right_type_857),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2977, "struct list$1sTypeph")),2,__list_values27___858)));
        param_names_861=(struct list$1charph*)come_increment_ref_count((__list_values28___860[0]=(char*)come_increment_ref_count(((char*)(__right_value949=__builtin_string("left")))),
__list_values28___860[1]=(char*)come_increment_ref_count(((char*)(__right_value950=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2978, "struct list$1charph")),2,__list_values28___860)));
        /* U11 */__right_value949 = come_decrement_ref_count2(__right_value949, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value950 = come_decrement_ref_count2(__right_value950, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_862=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2979, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_862,((void*)0));
        list$1charph_push_back(param_default_parametors_862,((void*)0));
        header_buf_863=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2983, "buffer"))));
        buffer_append_str(header_buf_863,((char*)(__right_value957=make_come_type_name_string(result_type_854,info))));
        /* U11 */__right_value957 = come_decrement_ref_count2(__right_value957, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_863," ");
        buffer_append_str(header_buf_863,real_fun_name_833);
        buffer_append_str(header_buf_863,"(");
        for(        i_864=0;        i_864<list$1sTypeph_length(param_types_859);        i_864++        ){
            param_type_865=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_859,i_864), "05function.c", 2991, 13));
            param_name_866=((char*)come_null_check(list$1charphp_operator_load_element(param_names_861,i_864), "05function.c", 2992, 14));
            buffer_append_str(header_buf_863,((char*)(__right_value958=make_come_type_name_string(param_type_865,info))));
            /* U11 */__right_value958 = come_decrement_ref_count2(__right_value958, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_863," ");
            buffer_append_str(header_buf_863,param_name_866);
            if(            i_864!=list$1sTypeph_length(param_types_859)-1) {
                buffer_append_str(header_buf_863,",");
            }
        }
        buffer_append_str(header_buf_863,")");
        result_type_854->mStatic=(_Bool)0;
        result_type_854->mUniq=(_Bool)0;
        result_type_854->mInline=(_Bool)0;
        fun_867=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3008, "sFun")),(char*)come_increment_ref_count(name_855),(struct sType*)come_increment_ref_count(result_type_854),(struct list$1sTypeph*)come_increment_ref_count(param_types_859),(struct list$1charph*)come_increment_ref_count(param_names_861),(struct list$1charph*)come_increment_ref_count(param_default_parametors_862),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_853),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_863)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        fun2_868=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value963=__builtin_string(fun_name))));
        /* U11 */__right_value963 = come_decrement_ref_count2(__right_value963, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_868==((void*)0)||fun2_868->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_855)),(struct sFun*)come_increment_ref_count(fun_867));
        }
        equaler_832=fun_867;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3024, "struct sNode");
        _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value966=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3024, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_867),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_869=(struct sNode*)come_increment_ref_count(_inf_value12);
        /*g*/come_call_finalizer3(__right_value966,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_871=node_compile(node_869,info);
        if(        !Value_871) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj318=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_852);
        come_call_finalizer3(__dec_obj318,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_848;
        info->head=head_851;
        info->sline=sline_849;
        __dec_obj319=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_850);
        /*G*/ __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    __dec_obj320=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_828);
    /*G*/ __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj321=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_829);
    /*G*/ __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_830;
    __result273__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value972=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3044, "struct tuple2$2sFunpcharph")),equaler_832,(char*)come_increment_ref_count(real_fun_name_833))));
    /* U13 */last_code_828 = come_decrement_ref_count2(last_code_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_829 = come_decrement_ref_count2(last_code2_829, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_833 = come_decrement_ref_count2(real_fun_name_833, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_834,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value972,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_872;
char* __dec_obj322;
char* last_code2_873;
char* __dec_obj323;
_Bool comma_instead_of_semicolon_874;
struct sClass* current_stack_frame_struct_875;
struct sFun* equaler_876;
void* __right_value973 = (void*)0;
char* real_fun_name_877;
void* __right_value974 = (void*)0;
struct sType* type2_878;
struct sClass* klass_879;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct buffer* source_880;
char* name_881;
int i_884;
struct list$1tuple2$2charphsTypephph* o2_saved_885;
struct tuple2$2charphsTypeph* it_886;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_887=0;
struct sType* field_type_888=0;
char* p_892;
int sline_893;
char* sname_894;
char* head_895;
struct buffer* source3_896;
struct buffer* __dec_obj324;
void* __right_value977 = (void*)0;
char* __dec_obj325;
void* __right_value978 = (void*)0;
struct sBlock* block_897;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct sType* result_type_898;
void* __right_value981 = (void*)0;
char* name_899;
void* __right_value982 = (void*)0;
struct sType* left_type_900;
void* __right_value983 = (void*)0;
struct sType* right_type_901;
struct sType* __list_values29___902[2];
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct list$1sTypeph* param_types_903;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
char* __list_values30___904[2];
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
struct list$1charph* param_names_905;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct list$1charph* param_default_parametors_906;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
struct buffer* header_buf_907;
void* __right_value994 = (void*)0;
int i_908;
struct sType* param_type_909;
char* param_name_910;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
struct sFun* fun_911;
void* __right_value1000 = (void*)0;
struct sFun* fun2_912;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1007 = (void*)0;
struct sNode* node_913;
_Bool Value_915;
struct buffer* __dec_obj330;
char* __dec_obj331;
char* __dec_obj332;
char* __dec_obj333;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
struct tuple2$2sFunpcharph* __result276__;
    last_code_872=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj322=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_873=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj323=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        source_880=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3069, "buffer"))));
        buffer_append_char(source_880,123);
        if(        klass_879->mProtocol) {
            name_881="_protocol_obj";
            char source2_882[1024];
            memset(&source2_882, 0, sizeof(char)            *(1024)            );
            snprintf(source2_882,1024,"return !left.%s.equals(right.%s);\n",name_881,name_881);
            buffer_append_str(source_880,source2_882);
        }
        else {
            char source2_883[1024];
            memset(&source2_883, 0, sizeof(char)            *(1024)            );
            snprintf(source2_883,1024,"return !(");
            buffer_append_str(source_880,source2_883);
            i_884=0;
            klass_879=map$2charphsClassphp_operator_load_element(info->classes,klass_879->mName);
            for(            o2_saved_885=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_879->mFields)),it_886=list$1tuple2$2charphsTypephph_begin((o2_saved_885));            !list$1tuple2$2charphsTypephph_end((o2_saved_885));            it_886=list$1tuple2$2charphsTypephph_next((o2_saved_885))            ){
                multiple_assign_var14=it_886;
                name_887=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_888=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_888->mClass->mName)&&type->mPointerNum==field_type_888->mPointerNum&&field_type_888->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_889[1024];
                memset(&source2_889, 0, sizeof(char)                *(1024)                );
                snprintf(source2_889,1024,"left.%s.equals(right.%s)",name_887,name_887);
                buffer_append_str(source_880,source2_889);
                if(                i_884==list$1tuple2$2charphsTypephph_length(klass_879->mFields)-1) {
                    char source2_890[1024];
                    memset(&source2_890, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_890,1024,");");
                    buffer_append_str(source_880,source2_890);
                }
                else {
                    char source2_891[1024];
                    memset(&source2_891, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_891,1024," && ");
                    buffer_append_str(source_880,source2_891);
                }
                i_884++;
                /* U13 */name_887 = come_decrement_ref_count2(name_887, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_888,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_885,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_880,125);
        p_892=info->p;
        sline_893=info->sline;
        sname_894=(char*)come_increment_ref_count(info->sname);
        head_895=info->head;
        source3_896=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj324=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_880);
        come_call_finalizer3(__dec_obj324,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_880->buf;
        info->head=source_880->buf;
        __dec_obj325=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_877));
        /*G*/ __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_897=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_898=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3132, "sType")),"bool",(_Bool)0,info));
        name_899=(char*)come_increment_ref_count(string_clone(real_fun_name_877));
        left_type_900=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_900->mHeap=(_Bool)0;
        right_type_901=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_901->mHeap=(_Bool)0;
        param_types_903=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___902[0]=(struct sType*)come_increment_ref_count(left_type_900),
__list_values29___902[1]=(struct sType*)come_increment_ref_count(right_type_901),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3138, "struct list$1sTypeph")),2,__list_values29___902)));
        param_names_905=(struct list$1charph*)come_increment_ref_count((__list_values30___904[0]=(char*)come_increment_ref_count(((char*)(__right_value986=__builtin_string("left")))),
__list_values30___904[1]=(char*)come_increment_ref_count(((char*)(__right_value987=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3139, "struct list$1charph")),2,__list_values30___904)));
        /* U11 */__right_value986 = come_decrement_ref_count2(__right_value986, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value987 = come_decrement_ref_count2(__right_value987, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_906=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3140, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_906,((void*)0));
        list$1charph_push_back(param_default_parametors_906,((void*)0));
        header_buf_907=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3144, "buffer"))));
        buffer_append_str(header_buf_907,((char*)(__right_value994=make_come_type_name_string(result_type_898,info))));
        /* U11 */__right_value994 = come_decrement_ref_count2(__right_value994, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_907," ");
        buffer_append_str(header_buf_907,real_fun_name_877);
        buffer_append_str(header_buf_907,"(");
        for(        i_908=0;        i_908<list$1sTypeph_length(param_types_903);        i_908++        ){
            param_type_909=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_903,i_908), "05function.c", 3152, 15));
            param_name_910=((char*)come_null_check(list$1charphp_operator_load_element(param_names_905,i_908), "05function.c", 3153, 16));
            buffer_append_str(header_buf_907,((char*)(__right_value995=make_come_type_name_string(param_type_909,info))));
            /* U11 */__right_value995 = come_decrement_ref_count2(__right_value995, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_907," ");
            buffer_append_str(header_buf_907,param_name_910);
            if(            i_908!=list$1sTypeph_length(param_types_903)-1) {
                buffer_append_str(header_buf_907,",");
            }
        }
        buffer_append_str(header_buf_907,")");
        result_type_898->mStatic=(_Bool)0;
        result_type_898->mUniq=(_Bool)0;
        result_type_898->mInline=(_Bool)0;
        fun_911=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3169, "sFun")),(char*)come_increment_ref_count(name_899),(struct sType*)come_increment_ref_count(result_type_898),(struct list$1sTypeph*)come_increment_ref_count(param_types_903),(struct list$1charph*)come_increment_ref_count(param_names_905),(struct list$1charph*)come_increment_ref_count(param_default_parametors_906),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_897),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_907)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        fun2_912=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1000=__builtin_string(fun_name))));
        /* U11 */__right_value1000 = come_decrement_ref_count2(__right_value1000, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_912==((void*)0)||fun2_912->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_899)),(struct sFun*)come_increment_ref_count(fun_911));
        }
        equaler_876=fun_911;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3185, "struct sNode");
        _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1003=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3185, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_911),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_913=(struct sNode*)come_increment_ref_count(_inf_value13);
        /*g*/come_call_finalizer3(__right_value1003,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_915=node_compile(node_913,info);
        if(        !Value_915) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj330=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_896);
        come_call_finalizer3(__dec_obj330,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_892;
        info->head=head_895;
        info->sline=sline_893;
        __dec_obj331=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_894);
        /*G*/ __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_880,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_894 = come_decrement_ref_count2(sname_894, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_896,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_897,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_898,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_899 = come_decrement_ref_count2(name_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_900,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_901,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_903,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_905,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_906,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_907,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_911,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_913) { node_913 = come_decrement_ref_count2(node_913, ((struct sNode*)node_913)->finalize, ((struct sNode*)node_913)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_875;
    __dec_obj332=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_872);
    /*G*/ __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj333=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_873);
    /*G*/ __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_874;
    __result276__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1009=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3205, "struct tuple2$2sFunpcharph")),equaler_876,(char*)come_increment_ref_count(real_fun_name_877))));
    /* U13 */last_code_872 = come_decrement_ref_count2(last_code_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_873 = come_decrement_ref_count2(last_code2_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_877 = come_decrement_ref_count2(real_fun_name_877, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_878,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1009,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_916;
char* __dec_obj334;
char* last_code2_917;
char* __dec_obj335;
_Bool comma_instead_of_semicolon_918;
struct sClass* current_stack_frame_struct_919;
struct sFun* equaler_920;
void* __right_value1010 = (void*)0;
char* real_fun_name_921;
void* __right_value1011 = (void*)0;
struct sType* type2_922;
struct sClass* klass_923;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct buffer* source_924;
char* name_925;
struct list$1tuple2$2charphsTypephph* o2_saved_928;
struct tuple2$2charphsTypeph* it_929;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_930=0;
struct sType* field_type_931=0;
char* p_933;
int sline_934;
char* sname_935;
char* head_936;
struct buffer* source3_937;
struct buffer* __dec_obj336;
void* __right_value1014 = (void*)0;
char* __dec_obj337;
void* __right_value1015 = (void*)0;
struct sBlock* block_938;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
struct sType* result_type_939;
void* __right_value1018 = (void*)0;
char* name_940;
void* __right_value1019 = (void*)0;
struct sType* left_type_941;
void* __right_value1020 = (void*)0;
struct sType* right_type_942;
struct sType* __list_values31___943[2];
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct list$1sTypeph* param_types_944;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
char* __list_values32___945[2];
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct list$1charph* param_names_946;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
struct list$1charph* param_default_parametors_947;
void* __right_value1029 = (void*)0;
void* __right_value1030 = (void*)0;
struct buffer* header_buf_948;
void* __right_value1031 = (void*)0;
int i_949;
struct sType* param_type_950;
char* param_name_951;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct sFun* fun_952;
void* __right_value1037 = (void*)0;
struct sFun* fun2_953;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1044 = (void*)0;
struct sNode* node_954;
_Bool Value_956;
struct buffer* __dec_obj342;
char* __dec_obj343;
char* __dec_obj344;
char* __dec_obj345;
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
struct tuple2$2sFunpcharph* __result279__;
    last_code_916=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj334=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_917=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj335=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_918=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_919=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_920=((void*)0);
    real_fun_name_921=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_922=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_922;
    klass_923=type->mClass;
    if(    type->mPointerNum>0&&!klass_923->mNumber) {
        source_924=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3230, "buffer"))));
        buffer_append_char(source_924,123);
        if(        klass_923->mProtocol) {
            name_925="_protocol_obj";
            char source2_926[1024];
            memset(&source2_926, 0, sizeof(char)            *(1024)            );
            snprintf(source2_926,1024,"return left.%s === right.%s;\n",name_925,name_925);
            buffer_append_str(source_924,source2_926);
        }
        else {
            char source2_927[1024];
            memset(&source2_927, 0, sizeof(char)            *(1024)            );
            klass_923=map$2charphsClassphp_operator_load_element(info->classes,klass_923->mName);
            for(            o2_saved_928=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_923->mFields)),it_929=list$1tuple2$2charphsTypephph_begin((o2_saved_928));            !list$1tuple2$2charphsTypephph_end((o2_saved_928));            it_929=list$1tuple2$2charphsTypephph_next((o2_saved_928))            ){
                multiple_assign_var15=it_929;
                name_930=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_931=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_931->mClass->mName)&&type->mPointerNum==field_type_931->mPointerNum&&field_type_931->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_932[1024];
                memset(&source2_932, 0, sizeof(char)                *(1024)                );
                snprintf(source2_932,1024,"if(left.%s !== right.%s) { return false; }\n",name_930,name_930,name_930);
                buffer_append_str(source_924,source2_932);
                /* U13 */name_930 = come_decrement_ref_count2(name_930, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_931,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_928,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_924,"return true;\n");
        buffer_append_char(source_924,125);
        p_933=info->p;
        sline_934=info->sline;
        sname_935=(char*)come_increment_ref_count(info->sname);
        head_936=info->head;
        source3_937=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj336=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_924);
        come_call_finalizer3(__dec_obj336,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_924->buf;
        info->head=source_924->buf;
        __dec_obj337=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_921));
        /*G*/ __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_938=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_939=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3278, "sType")),"bool",(_Bool)0,info));
        name_940=(char*)come_increment_ref_count(string_clone(real_fun_name_921));
        left_type_941=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_941->mHeap=(_Bool)0;
        right_type_942=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_942->mHeap=(_Bool)0;
        param_types_944=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___943[0]=(struct sType*)come_increment_ref_count(left_type_941),
__list_values31___943[1]=(struct sType*)come_increment_ref_count(right_type_942),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3284, "struct list$1sTypeph")),2,__list_values31___943)));
        param_names_946=(struct list$1charph*)come_increment_ref_count((__list_values32___945[0]=(char*)come_increment_ref_count(((char*)(__right_value1023=__builtin_string("left")))),
__list_values32___945[1]=(char*)come_increment_ref_count(((char*)(__right_value1024=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3285, "struct list$1charph")),2,__list_values32___945)));
        /* U11 */__right_value1023 = come_decrement_ref_count2(__right_value1023, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value1024 = come_decrement_ref_count2(__right_value1024, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_947=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3286, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_947,((void*)0));
        list$1charph_push_back(param_default_parametors_947,((void*)0));
        header_buf_948=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3290, "buffer"))));
        buffer_append_str(header_buf_948,((char*)(__right_value1031=make_come_type_name_string(result_type_939,info))));
        /* U11 */__right_value1031 = come_decrement_ref_count2(__right_value1031, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_948," ");
        buffer_append_str(header_buf_948,real_fun_name_921);
        buffer_append_str(header_buf_948,"(");
        for(        i_949=0;        i_949<list$1sTypeph_length(param_types_944);        i_949++        ){
            param_type_950=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_944,i_949), "05function.c", 3298, 17));
            param_name_951=((char*)come_null_check(list$1charphp_operator_load_element(param_names_946,i_949), "05function.c", 3299, 18));
            buffer_append_str(header_buf_948,((char*)(__right_value1032=make_come_type_name_string(param_type_950,info))));
            /* U11 */__right_value1032 = come_decrement_ref_count2(__right_value1032, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_948," ");
            buffer_append_str(header_buf_948,param_name_951);
            if(            i_949!=list$1sTypeph_length(param_types_944)-1) {
                buffer_append_str(header_buf_948,",");
            }
        }
        buffer_append_str(header_buf_948,")");
        result_type_939->mStatic=(_Bool)0;
        result_type_939->mUniq=(_Bool)0;
        result_type_939->mInline=(_Bool)0;
        fun_952=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3315, "sFun")),(char*)come_increment_ref_count(name_940),(struct sType*)come_increment_ref_count(result_type_939),(struct list$1sTypeph*)come_increment_ref_count(param_types_944),(struct list$1charph*)come_increment_ref_count(param_names_946),(struct list$1charph*)come_increment_ref_count(param_default_parametors_947),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_938),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_948)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        fun2_953=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1037=__builtin_string(fun_name))));
        /* U11 */__right_value1037 = come_decrement_ref_count2(__right_value1037, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_953==((void*)0)||fun2_953->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_940)),(struct sFun*)come_increment_ref_count(fun_952));
        }
        equaler_920=fun_952;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3331, "struct sNode");
        _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1040=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3331, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_952),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_954=(struct sNode*)come_increment_ref_count(_inf_value14);
        /*g*/come_call_finalizer3(__right_value1040,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_956=node_compile(node_954,info);
        if(        !Value_956) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        else {
        }
        __dec_obj342=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_937);
        come_call_finalizer3(__dec_obj342,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_933;
        info->head=head_936;
        info->sline=sline_934;
        __dec_obj343=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_935);
        /*G*/ __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_924,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_935 = come_decrement_ref_count2(sname_935, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_937,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_938,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_939,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_940 = come_decrement_ref_count2(name_940, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_941,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_942,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_944,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_946,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_947,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_948,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_952,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_954) { node_954 = come_decrement_ref_count2(node_954, ((struct sNode*)node_954)->finalize, ((struct sNode*)node_954)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_919;
    __dec_obj344=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_916);
    /*G*/ __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj345=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_917);
    /*G*/ __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_918;
    __result279__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1046=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3351, "struct tuple2$2sFunpcharph")),equaler_920,(char*)come_increment_ref_count(real_fun_name_921))));
    /* U13 */last_code_916 = come_decrement_ref_count2(last_code_916, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_917 = come_decrement_ref_count2(last_code2_917, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_921 = come_decrement_ref_count2(real_fun_name_921, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_922,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1046,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_957;
char* __dec_obj346;
char* last_code2_958;
char* __dec_obj347;
_Bool comma_instead_of_semicolon_959;
struct sClass* current_stack_frame_struct_960;
struct sFun* cloner_961;
void* __right_value1047 = (void*)0;
char* real_fun_name_962;
void* __right_value1048 = (void*)0;
struct sType* type2_963;
struct sClass* klass_964;
void* __right_value1049 = (void*)0;
void* __right_value1050 = (void*)0;
struct buffer* source_965;
void* __right_value1051 = (void*)0;
char* name_966;
struct list$1tuple2$2charphsTypephph* o2_saved_968;
struct tuple2$2charphsTypeph* it_969;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_970=0;
struct sType* field_type_971=0;
struct list$1tuple2$2charphsTypephph* o2_saved_974;
struct tuple2$2charphsTypeph* it_975;
struct tuple2$2charphsTypeph* multiple_assign_var17 = (void*)0;
char* name_976=0;
struct sType* field_type_977=0;
char* p_981;
int sline_982;
char* sname_983;
struct buffer* source3_984;
char* head_985;
struct buffer* __dec_obj348;
void* __right_value1052 = (void*)0;
char* __dec_obj349;
void* __right_value1053 = (void*)0;
struct sBlock* block_986;
void* __right_value1054 = (void*)0;
struct sType* result_type_987;
void* __right_value1055 = (void*)0;
char* name_988;
void* __right_value1056 = (void*)0;
struct sType* self_type_989;
struct sType* __list_values33___990[1];
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
struct list$1sTypeph* param_types_991;
void* __right_value1059 = (void*)0;
char* __list_values34___992[1];
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
struct list$1charph* param_names_993;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct list$1charph* param_default_parametors_994;
void* __right_value1064 = (void*)0;
void* __right_value1065 = (void*)0;
struct buffer* header_buf_995;
void* __right_value1066 = (void*)0;
int i_996;
struct sType* param_type_997;
char* param_name_998;
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
void* __right_value1071 = (void*)0;
struct sFun* fun_999;
void* __right_value1072 = (void*)0;
struct sFun* fun2_1000;
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
void* __right_value1075 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1079 = (void*)0;
struct sNode* node_1001;
_Bool Value_1003;
char* __dec_obj354;
struct buffer* __dec_obj355;
char* __dec_obj356;
char* __dec_obj357;
void* __right_value1080 = (void*)0;
void* __right_value1081 = (void*)0;
struct tuple2$2sFunpcharph* __result282__;
    last_code_957=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj346=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_958=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj347=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_959=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_960=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_961=((void*)0);
    real_fun_name_962=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_963=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_963;
    klass_964=type->mClass;
    if(    type->mPointerNum>0&&!klass_964->mNumber) {
        source_965=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3376, "buffer"))));
        buffer_append_str(source_965,"{\n");
        buffer_append_str(source_965,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_965,"var result = new %s;\n",((char*)(__right_value1051=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        /* U11 */__right_value1051 = come_decrement_ref_count2(__right_value1051, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_964->mProtocol) {
            name_966="_protocol_obj";
            char source2_967[1024];
            memset(&source2_967, 0, sizeof(char)            *(1024)            );
            snprintf(source2_967,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_965,source2_967);
            klass_964=map$2charphsClassphp_operator_load_element(info->classes,klass_964->mName);
            for(            o2_saved_968=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_964->mFields)),it_969=list$1tuple2$2charphsTypephph_begin((o2_saved_968));            !list$1tuple2$2charphsTypephph_end((o2_saved_968));            it_969=list$1tuple2$2charphsTypephph_next((o2_saved_968))            ){
                multiple_assign_var16=it_969;
                name_970=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_971=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_971->mClass->mName)&&type->mPointerNum==field_type_971->mPointerNum&&field_type_971->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                string_operator_equals(name_970,"_protocol_obj")) {
                }
                else if(                list$1sNodeph_length(field_type_971->mArrayNum)>0) {
                    char source2_972[1024];
                    memset(&source2_972, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_972,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_970,name_970,name_970);
                    buffer_append_str(source_965,source2_972);
                }
                else {
                    char source2_973[1024];
                    memset(&source2_973, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_973,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_970,name_970);
                    buffer_append_str(source_965,source2_973);
                }
                /* U13 */name_970 = come_decrement_ref_count2(name_970, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_971,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_968,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_964=map$2charphsClassphp_operator_load_element(info->classes,klass_964->mName);
            for(            o2_saved_974=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_964->mFields)),it_975=list$1tuple2$2charphsTypephph_begin((o2_saved_974));            !list$1tuple2$2charphsTypephph_end((o2_saved_974));            it_975=list$1tuple2$2charphsTypephph_next((o2_saved_974))            ){
                multiple_assign_var17=it_975;
                name_976=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_977=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_977->mClass->mName)&&type->mPointerNum==field_type_977->mPointerNum&&field_type_977->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                field_type_977->mHeap) {
                    char source2_978[1024];
                    memset(&source2_978, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_978,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_976,name_976,name_976);
                    buffer_append_str(source_965,source2_978);
                }
                else if(                list$1sNodeph_length(field_type_977->mArrayNum)>0) {
                    char source2_979[1024];
                    memset(&source2_979, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_979,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_976,name_976,name_976);
                    buffer_append_str(source_965,source2_979);
                }
                else {
                    char source2_980[1024];
                    memset(&source2_980, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_980,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_976,name_976);
                    buffer_append_str(source_965,source2_980);
                }
                /* U13 */name_976 = come_decrement_ref_count2(name_976, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_977,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_974,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_965,"return result;");
        buffer_append_char(source_965,125);
        p_981=info->p;
        sline_982=info->sline;
        sname_983=(char*)come_increment_ref_count(info->sname);
        source3_984=(struct buffer*)come_increment_ref_count(info->source);
        head_985=info->head;
        __dec_obj348=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_965);
        come_call_finalizer3(__dec_obj348,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj349=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_962));
        /*G*/ __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_986=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_987=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_988=(char*)come_increment_ref_count(string_clone(real_fun_name_962));
        self_type_989=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_989->mHeap=(_Bool)0;
        param_types_991=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___990[0]=(struct sType*)come_increment_ref_count(self_type_989),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3470, "struct list$1sTypeph")),1,__list_values33___990)));
        param_names_993=(struct list$1charph*)come_increment_ref_count((__list_values34___992[0]=(char*)come_increment_ref_count(((char*)(__right_value1059=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3471, "struct list$1charph")),1,__list_values34___992)));
        /* U11 */__right_value1059 = come_decrement_ref_count2(__right_value1059, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_994=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3472, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_994,((void*)0));
        header_buf_995=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3475, "buffer"))));
        buffer_append_str(header_buf_995,((char*)(__right_value1066=make_come_type_name_string(result_type_987,info))));
        /* U11 */__right_value1066 = come_decrement_ref_count2(__right_value1066, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_995," ");
        buffer_append_str(header_buf_995,real_fun_name_962);
        buffer_append_str(header_buf_995,"(");
        for(        i_996=0;        i_996<list$1sTypeph_length(param_types_991);        i_996++        ){
            param_type_997=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_991,i_996), "05function.c", 3483, 19));
            param_name_998=((char*)come_null_check(list$1charphp_operator_load_element(param_names_993,i_996), "05function.c", 3484, 20));
            buffer_append_str(header_buf_995,((char*)(__right_value1067=make_come_type_name_string(param_type_997,info))));
            /* U11 */__right_value1067 = come_decrement_ref_count2(__right_value1067, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_995," ");
            buffer_append_str(header_buf_995,param_name_998);
            if(            i_996!=list$1sTypeph_length(param_types_991)-1) {
                buffer_append_str(header_buf_995,",");
            }
        }
        buffer_append_str(header_buf_995,")");
        result_type_987->mStatic=(_Bool)0;
        result_type_987->mUniq=(_Bool)0;
        result_type_987->mInline=(_Bool)0;
        fun_999=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3500, "sFun")),(char*)come_increment_ref_count(name_988),(struct sType*)come_increment_ref_count(result_type_987),(struct list$1sTypeph*)come_increment_ref_count(param_types_991),(struct list$1charph*)come_increment_ref_count(param_names_993),(struct list$1charph*)come_increment_ref_count(param_default_parametors_994),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_986),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_995)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        fun_999->mCloner=(_Bool)1;
        fun2_1000=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1072=__builtin_string(fun_name))));
        /* U11 */__right_value1072 = come_decrement_ref_count2(__right_value1072, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1000==((void*)0)||fun2_1000->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_988)),(struct sFun*)come_increment_ref_count(fun_999));
        }
        cloner_961=fun_999;
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3517, "struct sNode");
        _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1075=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3517, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_999),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sFunNode_finalize;
        _inf_value15->clone=(void*)sFunNode_clone;
        _inf_value15->compile=(void*)sFunNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sFunNode_kind;
        node_1001=(struct sNode*)come_increment_ref_count(_inf_value15);
        /*g*/come_call_finalizer3(__right_value1075,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1003=node_compile(node_1001,info);
        if(        !Value_1003) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        else {
        }
        __dec_obj354=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_983);
        /*G*/ __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_982;
        __dec_obj355=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_984);
        come_call_finalizer3(__dec_obj355,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_981;
        info->head=head_985;
        info->sline=sline_982;
        /*i*/come_call_finalizer3(source_965,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_983 = come_decrement_ref_count2(sname_983, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_984,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_986,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_987,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_988 = come_decrement_ref_count2(name_988, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_989,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_991,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_993,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_994,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_995,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_999,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1001) { node_1001 = come_decrement_ref_count2(node_1001, ((struct sNode*)node_1001)->finalize, ((struct sNode*)node_1001)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_960;
    __dec_obj356=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_957);
    /*G*/ __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj357=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_958);
    /*G*/ __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_959;
    __result282__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1081=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3539, "struct tuple2$2sFunpcharph")),cloner_961,(char*)come_increment_ref_count(real_fun_name_962))));
    /* U13 */last_code_957 = come_decrement_ref_count2(last_code_957, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_958 = come_decrement_ref_count2(last_code2_958, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_962 = come_decrement_ref_count2(real_fun_name_962, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_963,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1081,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1004;
char* __dec_obj358;
char* last_code2_1005;
char* __dec_obj359;
_Bool comma_instead_of_semicolon_1006;
struct sClass* current_stack_frame_struct_1007;
struct sFun* cloner_1008;
void* __right_value1082 = (void*)0;
char* real_fun_name_1009;
void* __right_value1083 = (void*)0;
struct sType* type2_1010;
struct sClass* klass_1011;
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
struct buffer* source_1012;
int i_1013;
struct list$1tuple2$2charphsTypephph* o2_saved_1014;
struct tuple2$2charphsTypeph* it_1015;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1016=0;
struct sType* field_type_1017=0;
char* p_1020;
int sline_1021;
char* sname_1022;
struct buffer* source3_1023;
char* head_1024;
struct buffer* __dec_obj360;
void* __right_value1086 = (void*)0;
char* __dec_obj361;
void* __right_value1087 = (void*)0;
struct sBlock* block_1025;
void* __right_value1088 = (void*)0;
void* __right_value1089 = (void*)0;
struct sType* result_type_1026;
void* __right_value1090 = (void*)0;
char* name_1027;
void* __right_value1091 = (void*)0;
struct sType* self_type_1028;
struct sType* __list_values35___1029[1];
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
struct list$1sTypeph* param_types_1030;
void* __right_value1094 = (void*)0;
char* __list_values36___1031[1];
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
struct list$1charph* param_names_1032;
void* __right_value1097 = (void*)0;
void* __right_value1098 = (void*)0;
struct list$1charph* param_default_parametors_1033;
void* __right_value1099 = (void*)0;
void* __right_value1100 = (void*)0;
struct buffer* header_buf_1034;
void* __right_value1101 = (void*)0;
int i_1035;
struct sType* param_type_1036;
char* param_name_1037;
void* __right_value1102 = (void*)0;
void* __right_value1103 = (void*)0;
void* __right_value1104 = (void*)0;
void* __right_value1105 = (void*)0;
void* __right_value1106 = (void*)0;
struct sFun* fun_1038;
void* __right_value1107 = (void*)0;
struct sFun* fun2_1039;
void* __right_value1108 = (void*)0;
void* __right_value1109 = (void*)0;
void* __right_value1110 = (void*)0;
struct sNode* _inf_value16;
struct sFunNode* _inf_obj_value16;
void* __right_value1114 = (void*)0;
struct sNode* node_1040;
_Bool Value_1042;
char* __dec_obj366;
struct buffer* __dec_obj367;
char* __dec_obj368;
char* __dec_obj369;
void* __right_value1115 = (void*)0;
void* __right_value1116 = (void*)0;
struct tuple2$2sFunpcharph* __result285__;
    last_code_1004=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj358=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj358 = come_decrement_ref_count2(__dec_obj358, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1005=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj359=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1006=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1007=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1008=((void*)0);
    real_fun_name_1009=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1010=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1010;
    klass_1011=type->mClass;
    if(    type->mPointerNum>0&&!klass_1011->mNumber) {
        source_1012=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3564, "buffer"))));
        buffer_append_str(source_1012,"{\n");
        buffer_append_str(source_1012,"var result = new buffer();\n");
        buffer_append_format(source_1012,"result.append_str(\"%s {\");\n",klass_1011->mName);
        i_1013=0;
        klass_1011=map$2charphsClassphp_operator_load_element(info->classes,klass_1011->mName);
        for(        o2_saved_1014=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1011->mFields)),it_1015=list$1tuple2$2charphsTypephph_begin((o2_saved_1014));        !list$1tuple2$2charphsTypephph_end((o2_saved_1014));        it_1015=list$1tuple2$2charphsTypephph_next((o2_saved_1014))        ){
            multiple_assign_var18=it_1015;
            name_1016=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            field_type_1017=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_1017->mClass->mName)&&type->mPointerNum==field_type_1017->mPointerNum&&field_type_1017->mHeap) {
                err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            i_1013==list$1tuple2$2charphsTypephph_length(klass_1011->mFields)-1) {
                char source2_1018[1024];
                memset(&source2_1018, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1018,1024,"result.append_str(\"%s:\");\n",name_1016);
                buffer_append_str(source_1012,source2_1018);
                snprintf(source2_1018,1024,"result.append_str(self.%s.to_string());\n",name_1016);
                buffer_append_str(source_1012,source2_1018);
            }
            else {
                char source2_1019[1024];
                memset(&source2_1019, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1019,1024,"result.append_str(\"%s:\");\n",name_1016);
                buffer_append_str(source_1012,source2_1019);
                snprintf(source2_1019,1024,"result.append_str(self.%s.to_string());\n",name_1016);
                buffer_append_str(source_1012,source2_1019);
                snprintf(source2_1019,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1012,source2_1019);
            }
            i_1013++;
            /* U13 */name_1016 = come_decrement_ref_count2(name_1016, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_1017,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_1014,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1012,"result.append_str(\"}\");\n");
        buffer_append_format(source_1012,"return result.to_string();\n");
        buffer_append_char(source_1012,125);
        p_1020=info->p;
        sline_1021=info->sline;
        sname_1022=(char*)come_increment_ref_count(info->sname);
        source3_1023=(struct buffer*)come_increment_ref_count(info->source);
        head_1024=info->head;
        __dec_obj360=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1012);
        come_call_finalizer3(__dec_obj360,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj361=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1009));
        /*G*/ __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1025=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1026=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3631, "sType")),"char*",(_Bool)0,info));
        result_type_1026->mHeap=(_Bool)1;
        name_1027=(char*)come_increment_ref_count(string_clone(real_fun_name_1009));
        self_type_1028=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1028->mHeap=(_Bool)0;
        param_types_1030=(struct list$1sTypeph*)come_increment_ref_count((__list_values35___1029[0]=(struct sType*)come_increment_ref_count(self_type_1028),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3636, "struct list$1sTypeph")),1,__list_values35___1029)));
        param_names_1032=(struct list$1charph*)come_increment_ref_count((__list_values36___1031[0]=(char*)come_increment_ref_count(((char*)(__right_value1094=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3637, "struct list$1charph")),1,__list_values36___1031)));
        /* U11 */__right_value1094 = come_decrement_ref_count2(__right_value1094, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1033=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3638, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1033,((void*)0));
        header_buf_1034=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3641, "buffer"))));
        buffer_append_str(header_buf_1034,((char*)(__right_value1101=make_come_type_name_string(result_type_1026,info))));
        /* U11 */__right_value1101 = come_decrement_ref_count2(__right_value1101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1034," ");
        buffer_append_str(header_buf_1034,real_fun_name_1009);
        buffer_append_str(header_buf_1034,"(");
        for(        i_1035=0;        i_1035<list$1sTypeph_length(param_types_1030);        i_1035++        ){
            param_type_1036=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_1030,i_1035), "05function.c", 3649, 21));
            param_name_1037=((char*)come_null_check(list$1charphp_operator_load_element(param_names_1032,i_1035), "05function.c", 3650, 22));
            buffer_append_str(header_buf_1034,((char*)(__right_value1102=make_come_type_name_string(param_type_1036,info))));
            /* U11 */__right_value1102 = come_decrement_ref_count2(__right_value1102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1034," ");
            buffer_append_str(header_buf_1034,param_name_1037);
            if(            i_1035!=list$1sTypeph_length(param_types_1030)-1) {
                buffer_append_str(header_buf_1034,",");
            }
        }
        buffer_append_str(header_buf_1034,")");
        result_type_1026->mStatic=(_Bool)0;
        result_type_1026->mUniq=(_Bool)0;
        result_type_1026->mInline=(_Bool)0;
        fun_1038=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3666, "sFun")),(char*)come_increment_ref_count(name_1027),(struct sType*)come_increment_ref_count(result_type_1026),(struct list$1sTypeph*)come_increment_ref_count(param_types_1030),(struct list$1charph*)come_increment_ref_count(param_names_1032),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1033),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1025),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1034)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0));
        fun_1038->mCloner=(_Bool)1;
        fun2_1039=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1107=__builtin_string(fun_name))));
        /* U11 */__right_value1107 = come_decrement_ref_count2(__right_value1107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1039==((void*)0)||fun2_1039->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1027)),(struct sFun*)come_increment_ref_count(fun_1038));
        }
        cloner_1008=fun_1038;
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3683, "struct sNode");
        _inf_obj_value16=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1110=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3683, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1038),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sFunNode_finalize;
        _inf_value16->clone=(void*)sFunNode_clone;
        _inf_value16->compile=(void*)sFunNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sFunNode_kind;
        node_1040=(struct sNode*)come_increment_ref_count(_inf_value16);
        /*g*/come_call_finalizer3(__right_value1110,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1042=node_compile(node_1040,info);
        if(        !Value_1042) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        else {
        }
        __dec_obj366=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1022);
        /*G*/ __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1021;
        __dec_obj367=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1023);
        come_call_finalizer3(__dec_obj367,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1020;
        info->head=head_1024;
        info->sline=sline_1021;
        /*i*/come_call_finalizer3(source_1012,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_1022 = come_decrement_ref_count2(sname_1022, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_1023,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_1025,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_1026,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_1027 = come_decrement_ref_count2(name_1027, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_1028,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_1030,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_1032,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_1033,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_1034,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_1038,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1040) { node_1040 = come_decrement_ref_count2(node_1040, ((struct sNode*)node_1040)->finalize, ((struct sNode*)node_1040)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1007;
    __dec_obj368=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1004);
    /*G*/ __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj369=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1005);
    /*G*/ __dec_obj369 = come_decrement_ref_count2(__dec_obj369, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1006;
    __result285__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1116=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3705, "struct tuple2$2sFunpcharph")),cloner_1008,(char*)come_increment_ref_count(real_fun_name_1009))));
    /* U13 */last_code_1004 = come_decrement_ref_count2(last_code_1004, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */last_code2_1005 = come_decrement_ref_count2(last_code2_1005, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */real_fun_name_1009 = come_decrement_ref_count2(real_fun_name_1009, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_1010,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1116,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj362;
struct sFun* __dec_obj363;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj362=self->sname;
            /*G*/ __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj363=self->mFun;
            come_call_finalizer3(__dec_obj363,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result283__;
void* __right_value1111 = (void*)0;
struct sFunNode* result_1041;
void* __right_value1112 = (void*)0;
char* __dec_obj364;
void* __right_value1113 = (void*)0;
struct sFun* __dec_obj365;
struct sFunNode* __result284__;
    if(    self==(void*)0) {
        __result283__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    result_1041=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(    self!=((void*)0)) {
        result_1041->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj364=result_1041->sname;
        result_1041->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj365=result_1041->mFun;
        result_1041->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer3(__dec_obj365,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result284__ = gComeFunResultObject = __result_obj__ = result_1041;
    /*i*/come_call_finalizer3(result_1041,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

