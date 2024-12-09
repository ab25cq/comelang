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
    _Bool new_;
    struct sFun* calling_fun;
    struct map$2charphint* outputed_class;
    struct map$2charphcharph* uniq_definition;
    _Bool nocomelib;
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
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple3$3sTypepcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
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
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
char* parse_attribute(struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
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
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
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
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
void skip_paren(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static int list$1charph_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values);
static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
// uniq global variable
// inline function
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result1__;
    __result1__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result2__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2399, "buffer"))));
    buffer_append(result_0,self,sizeof(char)*len);
    __result2__ = gComeFunResultObject = __result_obj__ = result_0;
    /*i*/come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result3__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2406, "buffer"))));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result3__ = gComeFunResultObject = __result_obj__ = result_1;
    /*i*/come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_3;
struct buffer* __result4__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2415, "buffer"))));
    buffer_append(result_3,(char*)self,sizeof(short)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_3;
    /*i*/come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_4;
struct buffer* __result5__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2422, "buffer"))));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_4;
    /*i*/come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_5;
struct buffer* __result6__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2429, "buffer"))));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_5;
    /*i*/come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_6;
struct buffer* __result7__;
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2436, "buffer"))));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_6;
    /*i*/come_call_finalizer3(result_6,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_7;
struct buffer* __result8__;
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2443, "buffer"))));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result8__ = gComeFunResultObject = __result_obj__ = result_7;
    /*i*/come_call_finalizer3(result_7,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result8__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2743, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value16,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
struct smart_pointer$1char* __result11__;
    __result11__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2748, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value19,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result11__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct smart_pointer$1short* __result13__;
    __result13__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2753, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value22,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result13__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct smart_pointer$1int* __result15__;
    __result15__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2758, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value25,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result15__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct smart_pointer$1long* __result17__;
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2763, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value28,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* buf_8;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct smart_pointer$1char* __result18__;
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2796, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result18__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2798, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
    /*i*/come_call_finalizer3(buf_8,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value32,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result18__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* buf_9;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct smart_pointer$1charp* __result20__;
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2803, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 2805, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
    /*i*/come_call_finalizer3(buf_9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value36,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_10;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct smart_pointer$1short* __result21__;
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2810, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2812, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
    /*i*/come_call_finalizer3(buf_10,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value40,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* buf_11;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct smart_pointer$1int* __result22__;
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2817, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2819, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
    /*i*/come_call_finalizer3(buf_11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value44,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* buf_12;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1long* __result23__;
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2824, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result23__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2826, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
    /*i*/come_call_finalizer3(buf_12,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result23__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* buf_13;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct smart_pointer$1float* __result25__;
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2831, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result25__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 2833, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
    /*i*/come_call_finalizer3(buf_13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value52,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result25__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* buf_14;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1double* __result27__;
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2838, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result27__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 2840, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
    /*i*/come_call_finalizer3(buf_14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result27__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char* __result30__;
    __result30__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 2845, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result30__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result33__;
    __result33__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2850, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result33__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result36__;
    __result36__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 2855, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result36__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result39__;
    __result39__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 2860, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result39__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result42__;
    __result42__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 2865, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result42__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result45__;
    __result45__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 2870, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result45__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result48__;
    __result48__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 2875, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result48__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 2880, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result52__;
    __result52__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 2885, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result54__;
    __result54__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 2890, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result56__;
    __result56__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 2895, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result58__;
    __result58__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 2900, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result58__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 2905, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 2910, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
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
void* __right_value113 = (void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=xsprintf(msg,self)));
    /* U11 */__right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=xsprintf(msg,self)));
    /* U11 */__right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=xsprintf(msg,self)));
    /* U11 */__right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static inline char* string_printable(char* str){
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
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 219, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 229, "list_item$1char"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 239, "list_item$1char"))));
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
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 219, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else if(    self->len==1) {
        litem_23=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 229, "list_item$1charp"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        litem_23->item=item;
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 239, "list_item$1charp"))));
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
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 219, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 229, "list_item$1short"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 239, "list_item$1short"))));
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
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 219, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1) {
        litem_35=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 229, "list_item$1int"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 239, "list_item$1int"))));
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
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 219, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 229, "list_item$1long"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 239, "list_item$1long"))));
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
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 219, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else if(    self->len==1) {
        litem_47=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 229, "list_item$1float"))));
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        litem_47->item=item;
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        litem_48=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 239, "list_item$1float"))));
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
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 219, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else if(    self->len==1) {
        litem_53=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 229, "list_item$1double"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        litem_53->item=item;
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 239, "list_item$1double"))));
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
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "char")));
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
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "char*")));
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
    self->items=((short*)(__right_value99=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "short")));
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
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "int")));
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
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "long")));
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
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "float")));
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
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 1013, "double")));
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












_Bool is_type_name(char* buf, struct sInfo* info){
struct sClass* klass_66;
struct sType* type_86;
struct sClass* generics_class_90;
void* __right_value117 = (void*)0;
_Bool generics_type_name_91;
void* __right_value118 = (void*)0;
_Bool mgenerics_type_name_97;
    klass_66=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_86=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_90=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_91=list$1charph_contained(info->generics_type_names,((char*)(__right_value117=__builtin_string(buf))));
    /* U11 */__right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    mgenerics_type_name_97=list$1charph_contained(info->method_generics_type_names,((char*)(__right_value118=__builtin_string(buf))));
    /* U11 */__right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    gComeC) {
        return (type_86&&type_86->mTypedef)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"uniq")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__")||(klass_66&&klass_66->mNumber)||(klass_66&&klass_66->mFloat)||charp_operator_equals(buf,"void")||charp_operator_equals(buf,"_Nullable")||generics_class_90||generics_type_name_91||mgenerics_type_name_97;
    }
    else {
        return generics_class_90||generics_type_name_91||mgenerics_type_name_97||klass_66||type_86||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"uniq")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"exception")||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40));
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_67;
unsigned int hash_68;
unsigned int it_69;
struct sClass* __result67__;
struct sClass* __result68__;
struct sClass* __result69__;
struct sClass* __result70__;
default_value_67 = (void*)0;
    memset(&default_value_67,0,sizeof(struct sClass*));
    hash_68=string_get_hash_key(((char*)key))%self->size;
    it_69=hash_68;
    while((_Bool)1) {
        if(        self->item_existance[it_69]) {
            if(            string_equals(self->keys[it_69],key)) {
                __result67__ = gComeFunResultObject = __result_obj__ = self->items[it_69];
                /*i*/come_call_finalizer3(default_value_67,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result67__;
            }
            it_69++;
            if(            it_69>=self->size) {
                it_69=0;
            }
            else if(            it_69==hash_68) {
                __result68__ = gComeFunResultObject = __result_obj__ = default_value_67;
                /*i*/come_call_finalizer3(default_value_67,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result68__;
            }
        }
        else {
            __result69__ = gComeFunResultObject = __result_obj__ = default_value_67;
            /*i*/come_call_finalizer3(default_value_67,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result69__;
        }
    }
    __result70__ = gComeFunResultObject = __result_obj__ = default_value_67;
    /*i*/come_call_finalizer3(default_value_67,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result70__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj15;
struct list$1tuple2$2charphsTypephph* __dec_obj16;
char* __dec_obj41;
char* __dec_obj42;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj15=self->mName;
            /*G*/ __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj16=self->mFields;
            come_call_finalizer3(__dec_obj16,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj41=self->mDeclareSName;
            /*G*/ __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj42=self->mParentClassName;
            /*G*/ __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_70;
struct list_item$1tuple2$2charphsTypephph* prev_it_71;
    it_70=self->head;
    while(it_70!=((void*)0)) {
        prev_it_71=it_70;
        it_70=it_70->next;
        /*i*/come_call_finalizer3(prev_it_71,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj17;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj17=self->item;
            come_call_finalizer3(__dec_obj17,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj18;
struct sType* __dec_obj19;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj18=self->v1;
            /*G*/ __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj19=self->v2;
            come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
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

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_84;
struct list_item$1tuple2$2charphsTypephph* prev_it_85;
    it_84=self->head;
    while(it_84!=((void*)0)) {
        prev_it_85=it_84;
        it_84=it_84->next;
        /*i*/come_call_finalizer3(prev_it_85,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_87;
unsigned int hash_88;
unsigned int it_89;
struct sType* __result71__;
struct sType* __result72__;
struct sType* __result73__;
struct sType* __result74__;
default_value_87 = (void*)0;
    memset(&default_value_87,0,sizeof(struct sType*));
    hash_88=string_get_hash_key(((char*)key))%self->size;
    it_89=hash_88;
    while((_Bool)1) {
        if(        self->item_existance[it_89]) {
            if(            string_equals(self->keys[it_89],key)) {
                __result71__ = gComeFunResultObject = __result_obj__ = self->items[it_89];
                /*i*/come_call_finalizer3(default_value_87,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result71__;
            }
            it_89++;
            if(            it_89>=self->size) {
                it_89=0;
            }
            else if(            it_89==hash_88) {
                __result72__ = gComeFunResultObject = __result_obj__ = default_value_87;
                /*i*/come_call_finalizer3(default_value_87,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result72__;
            }
        }
        else {
            __result73__ = gComeFunResultObject = __result_obj__ = default_value_87;
            /*i*/come_call_finalizer3(default_value_87,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result73__;
        }
    }
    __result74__ = gComeFunResultObject = __result_obj__ = default_value_87;
    /*i*/come_call_finalizer3(default_value_87,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
char* it_94;
    for(    it_94=list$1charph_begin(self);    !list$1charph_end(self);    it_94=list$1charph_next(self)    ){
        if(        string_equals(it_94,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_92;
char* __result75__;
char* __result76__;
char* result_93;
char* __result77__;
result_92 = (void*)0;
result_93 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_92,0,sizeof(char*));
        __result75__ = gComeFunResultObject = __result_obj__ = result_92;
        gComeFunResultObject = (void*)0;
        return __result75__;
    }
    self->it=self->head;
    if(    self->it) {
        __result76__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    memset(&result_93,0,sizeof(char*));
    __result77__ = gComeFunResultObject = __result_obj__ = result_93;
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_95;
char* __result78__;
char* __result79__;
char* result_96;
char* __result80__;
result_95 = (void*)0;
result_96 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_95,0,sizeof(char*));
        __result78__ = gComeFunResultObject = __result_obj__ = result_95;
        gComeFunResultObject = (void*)0;
        return __result78__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result79__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    memset(&result_96,0,sizeof(char*));
    __result80__ = gComeFunResultObject = __result_obj__ = result_96;
    gComeFunResultObject = (void*)0;
    return __result80__;
}

void skip_paren(struct sInfo* info){
int nest_98;
    nest_98=0;
    while((_Bool)1) {
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_98++;
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_98--;
            if(            nest_98==0) {
                break;
            }
        }
        else {
            info->p++;
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
int line_99;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct buffer* fname_100;
void* __right_value121 = (void*)0;
char* __dec_obj43;
    while(strmemcmp(info->p,"__attribute__")) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(strmemcmp(info->p,"__extension__")) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
    while(*info->p==35) {
        skip_spaces_and_lf(info);
        info->p++;
        skip_spaces_and_lf(info);
        if(        strmemcmp(info->p,"pragma")) {
            while(*info->p) {
                if(                *info->p==10) {
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        xisdigit(*info->p)) {
            line_99=0;
            fname_100=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 75, "buffer"))));
            while(xisdigit(*info->p)) {
                line_99=line_99*10+(*info->p-48);
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==34) {
                info->p++;
                while(*info->p!=34) {
                    buffer_append_char(fname_100,*info->p);
                    info->p++;
                }
                while(*info->p!=10) {
                    info->p++;
                }
                info->p++;
            }
            info->sline=line_99;
            __dec_obj43=info->sname;
            info->sname=(char*)come_increment_ref_count(buffer_to_string(fname_100));
            /*G*/ __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
            skip_spaces_and_lf(info);
            /*i*/come_call_finalizer3(fname_100,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==34) {
            info->p++;
            while(*info->p!=34) {
                info->p++;
            }
            while(*info->p!=10) {
                info->p++;
            }
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    while(strmemcmp(info->p,"__attribute__")) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(strmemcmp(info->p,"__extension__")) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
char c_101;
    c_101=*(info->p+strlen(str));
    return strmemcmp(info->p,str)&&(c_101==59||c_101==32||c_101==9||c_101==10||c_101==10||c_101==40);
}

char* parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
void* __right_value123 = (void*)0;
struct buffer* buf_102;
void* __right_value124 = (void*)0;
_Bool _if_conditional1;
void* __right_value125 = (void*)0;
char* __result81__;
void* __right_value126 = (void*)0;
char* result_103;
void* __right_value127 = (void*)0;
char* __result86__;
char* __result87__;
    buf_102=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 137, "buffer"))));
    parse_sharp_v5(info);
    while((*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36)) {
        buffer_append_char(buf_102,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(    (_if_conditional1=(string_length(((char*)(__right_value124=buffer_to_string(buf_102))))==0)),    /* U10 */ (__right_value124 = come_decrement_ref_count2(__right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional1) {
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        __result81__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value125=__builtin_string("")));
        /*i*/come_call_finalizer3(buf_102,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U11 */__right_value125 = come_decrement_ref_count2(__right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result81__;
    }
    result_103=(char*)come_increment_ref_count(buffer_to_string(buf_102));
    if(    info->module_params&&map$2charphcharphp_operator_load_element(info->module_params,result_103)) {
        __result86__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value127=__builtin_string(((char*)come_null_check(map$2charphcharphp_operator_load_element(info->module_params,result_103), "05type.c", 155, 0)))));
        /*i*/come_call_finalizer3(buf_102,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */result_103 = come_decrement_ref_count2(result_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value127 = come_decrement_ref_count2(__right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result86__;
    }
    __result87__ = gComeFunResultObject = __result_obj__ = result_103;
    /*i*/come_call_finalizer3(buf_102,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */result_103 = come_decrement_ref_count2(result_103, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key){
void* __result_obj__=(void*)0;
char* default_value_104;
unsigned int hash_105;
unsigned int it_106;
char* __result82__;
char* __result83__;
char* __result84__;
char* __result85__;
default_value_104 = (void*)0;
    memset(&default_value_104,0,sizeof(char*));
    hash_105=string_get_hash_key(((char*)key))%self->size;
    it_106=hash_105;
    while((_Bool)1) {
        if(        self->item_existance[it_106]) {
            if(            string_equals(self->keys[it_106],key)) {
                __result82__ = gComeFunResultObject = __result_obj__ = self->items[it_106];
                /* U13 */default_value_104 = come_decrement_ref_count2(default_value_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result82__;
            }
            it_106++;
            if(            it_106>=self->size) {
                it_106=0;
            }
            else if(            it_106==hash_105) {
                __result83__ = gComeFunResultObject = __result_obj__ = default_value_104;
                /* U13 */default_value_104 = come_decrement_ref_count2(default_value_104, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result83__;
            }
        }
        else {
            __result84__ = gComeFunResultObject = __result_obj__ = default_value_104;
            /* U13 */default_value_104 = come_decrement_ref_count2(default_value_104, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result84__;
        }
    }
    __result85__ = gComeFunResultObject = __result_obj__ = default_value_104;
    /* U13 */default_value_104 = come_decrement_ref_count2(default_value_104, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

char* backtrace_parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
char* p_107;
int sline_108;
char* buf_109;
void* __right_value128 = (void*)0;
char* __dec_obj44;
void* __right_value129 = (void*)0;
char* __dec_obj45;
char* __result88__;
buf_109 = (void*)0;
    p_107=info->p;
    sline_108=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        __dec_obj44=buf_109;
        buf_109=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj45=buf_109;
        buf_109=(char*)come_increment_ref_count(__builtin_string(""));
        /*G*/ __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    info->p=p_107;
    info->sline=sline_108;
    __result88__ = gComeFunResultObject = __result_obj__ = buf_109;
    /* U13 */buf_109 = come_decrement_ref_count2(buf_109, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

void skip_spaces_and_lf(struct sInfo* info){
    while((_Bool)1) {
        if(        *info->p==32||*info->p==9) {
            info->p++;
        }
        else if(        *info->p==10) {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct list$1sTypeph* o2_saved_110;
struct sType* it_113;
_Bool __result95__;
    for(    o2_saved_110=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_113=list$1sTypeph_begin((o2_saved_110));    !list$1sTypeph_end((o2_saved_110));    it_113=list$1sTypeph_next((o2_saved_110))    ){
        if(        is_contained_generics_class(it_113,info)) {
            __result95__ = (_Bool)1;
            /*i*/come_call_finalizer3(o2_saved_110,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            return __result95__;
        }
    }
    /*i*/come_call_finalizer3(o2_saved_110,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(    type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_111;
struct sType* __result89__;
struct sType* __result90__;
struct sType* result_112;
struct sType* __result91__;
result_111 = (void*)0;
result_112 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_111,0,sizeof(struct sType*));
        __result89__ = gComeFunResultObject = __result_obj__ = result_111;
        gComeFunResultObject = (void*)0;
        return __result89__;
    }
    self->it=self->head;
    if(    self->it) {
        __result90__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result90__;
    }
    memset(&result_112,0,sizeof(struct sType*));
    __result91__ = gComeFunResultObject = __result_obj__ = result_112;
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_114;
struct sType* __result92__;
struct sType* __result93__;
struct sType* result_115;
struct sType* __result94__;
result_114 = (void*)0;
result_115 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_114,0,sizeof(struct sType*));
        __result92__ = gComeFunResultObject = __result_obj__ = result_114;
        gComeFunResultObject = (void*)0;
        return __result92__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result93__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result93__;
    }
    memset(&result_115,0,sizeof(struct sType*));
    __result94__ = gComeFunResultObject = __result_obj__ = result_115;
    gComeFunResultObject = (void*)0;
    return __result94__;
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct list$1sTypeph* param_types_116;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct list$1charph* param_names_117;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
struct list$1charph* param_default_parametors_118;
_Bool var_args_119;
void* __right_value139 = (void*)0;
void* __right_value173 = (void*)0;
struct sType* type__123;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
_Bool void_param_139;
char* p_140;
int sline_141;
void* __right_value176 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* param_type_142=0;
char* param_name_143=0;
_Bool err_144=0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result115__;
void* __right_value179 = (void*)0;
struct sType* param_type2_145;
void* __right_value183 = (void*)0;
void* __right_value187 = (void*)0;
char* p_152;
_Bool no_comma_153;
void* __right_value188 = (void*)0;
struct sNode* node_154;
char* p2_155;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result119__;
    param_types_116=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 216, "list$1sTypeph"))));
    param_names_117=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 217, "list$1charph"))));
    param_default_parametors_118=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 218, "list$1charph"))));
    var_args_119=(_Bool)0;
    if(    in_constructor_) {
        list$1charph_add(param_names_117,(char*)come_increment_ref_count(xsprintf("self")));
        type__123=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        type__123->mHeap=(_Bool)1;
        list$1sTypeph_add(param_types_116,(struct sType*)come_increment_ref_count(type__123));
        list$1charph_add(param_default_parametors_118,((void*)0));
        /*i*/come_call_finalizer3(type__123,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->in_class) {
        list$1charph_add(param_names_117,(char*)come_increment_ref_count(xsprintf("self")));
        list$1sTypeph_add(param_types_116,(struct sType*)come_increment_ref_count(sType_clone(info->impl_type)));
        list$1charph_add(param_default_parametors_118,((void*)0));
    }
    expected_next_character(40,info);
    void_param_139=(_Bool)0;
    {
        p_140=info->p;
        sline_141=info->sline;
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                void_param_139=(_Bool)1;
            }
        }
        info->p=p_140;
        info->sline=sline_141;
    }
    if(    void_param_139) {
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value176=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_142=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_143=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_144=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value176,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_144) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result115__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(__right_value178=tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_increment_ref_count((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool)*(1), "05type.c", 280, "struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool")),(struct list$1sTypeph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                /*i*/come_call_finalizer3(param_type_142,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */param_name_143 = come_decrement_ref_count2(param_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_116,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_117,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_118,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value178,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result115__;
            }
            param_type2_145=(struct sType*)come_increment_ref_count(solve_generics(param_type_142,info->generics_type,info));
            param_type2_145->mFunctionParam=(_Bool)1;
            list$1sTypeph_push_back(param_types_116,(struct sType*)come_increment_ref_count(sType_clone(param_type2_145)));
            list$1charph_push_back(param_names_117,(char*)come_increment_ref_count(string_clone(param_name_143)));
            if(            *info->p==61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_152=info->p;
                no_comma_153=info->no_comma;
                info->no_comma=(_Bool)1;
                node_154=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_153;
                p2_155=info->p;
                char buf_156[p2_155-p_152+1];
                memset(&buf_156, 0, sizeof(char)                *(p2_155-p_152+1)                );
                memcpy(buf_156,p_152,p2_155-p_152);
                buf_156[p2_155-p_152]=0;
                list$1charph_push_back(param_default_parametors_118,(char*)come_increment_ref_count(__builtin_string(buf_156)));
                if(node_154) { node_154 = come_decrement_ref_count2(node_154, ((struct sNode*)node_154)->finalize, ((struct sNode*)node_154)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1charph_push_back(param_default_parametors_118,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_119=(_Bool)1;
                    expected_next_character(41,info);
                    /*i*/come_call_finalizer3(param_type_142,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */param_name_143 = come_decrement_ref_count2(param_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_type2_145,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                /*i*/come_call_finalizer3(param_type_142,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */param_name_143 = come_decrement_ref_count2(param_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_type2_145,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            /*i*/come_call_finalizer3(param_type_142,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */param_name_143 = come_decrement_ref_count2(param_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_type2_145,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result119__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value191=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05type.c", 340, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")),(struct list$1sTypeph*)come_increment_ref_count(param_types_116),(struct list$1charph*)come_increment_ref_count(param_names_117),(struct list$1charph*)come_increment_ref_count(param_default_parametors_118),var_args_119)));
    /*i*/come_call_finalizer3(param_types_116,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_117,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_118,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value191,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result96__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result97__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct list_item$1charph* litem_120;
char* __dec_obj46;
void* __right_value137 = (void*)0;
struct list_item$1charph* litem_121;
char* __dec_obj47;
void* __right_value138 = (void*)0;
struct list_item$1charph* litem_122;
char* __dec_obj48;
struct list$1charph* __result98__;
    if(    self->len==0) {
        litem_120=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value136=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1charph"))));
        litem_120->prev=((void*)0);
        litem_120->next=((void*)0);
        __dec_obj46=litem_120->item;
        litem_120->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_120;
        self->head=litem_120;
    }
    else if(    self->len==1) {
        litem_121=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value137=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1charph"))));
        litem_121->prev=self->head;
        litem_121->next=((void*)0);
        __dec_obj47=litem_121->item;
        litem_121->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_121;
        self->head->next=litem_121;
    }
    else {
        litem_122=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value138=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1charph"))));
        litem_122->prev=self->tail;
        litem_122->next=((void*)0);
        __dec_obj48=litem_122->item;
        litem_122->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_122;
        self->tail=litem_122;
    }
    self->len++;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result99__;
void* __right_value140 = (void*)0;
struct sType* result_124;
void* __right_value143 = (void*)0;
struct tuple1$1sTypeph* __dec_obj51;
void* __right_value144 = (void*)0;
struct tuple1$1sTypeph* __dec_obj52;
void* __right_value145 = (void*)0;
char* __dec_obj53;
void* __right_value152 = (void*)0;
struct list$1sTypeph* __dec_obj57;
void* __right_value160 = (void*)0;
struct list$1sNodeph* __dec_obj61;
void* __right_value161 = (void*)0;
struct list$1sTypeph* __dec_obj62;
void* __right_value165 = (void*)0;
struct list$1charph* __dec_obj63;
void* __right_value166 = (void*)0;
struct tuple1$1sTypeph* __dec_obj64;
void* __right_value167 = (void*)0;
struct sNode* __dec_obj65;
void* __right_value168 = (void*)0;
struct tuple1$1sTypeph* __dec_obj66;
void* __right_value169 = (void*)0;
struct sNode* __dec_obj67;
void* __right_value170 = (void*)0;
char* __dec_obj68;
void* __right_value171 = (void*)0;
char* __dec_obj69;
void* __right_value172 = (void*)0;
char* __dec_obj70;
struct sType* __result113__;
    if(    self==(void*)0) {
        __result99__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    result_124=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_124->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj51=result_124->mNoSolvedGenericsType;
        result_124->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj51,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj52=result_124->mOriginalLoadVarType;
        result_124->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj52,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj53=result_124->mGenericsName;
        result_124->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj57=result_124->mGenericsTypes;
        result_124->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj57,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj61=result_124->mArrayNum;
        result_124->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj61,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_124->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj62=result_124->mParamTypes;
        result_124->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj62,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj63=result_124->mParamNames;
        result_124->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj63,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj64=result_124->mResultType;
        result_124->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj64,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_124->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj65=result_124->mAlignas;
        result_124->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj66=result_124->mChannelType;
        result_124->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj66,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_124->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_124->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_124->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_124->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_124->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_124->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_124->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_124->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_124->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_124->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_124->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_124->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_124->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_124->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_124->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_124->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_124->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_124->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_124->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_124->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_124->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_124->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_124->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj67=result_124->mSizeNum;
        result_124->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_124->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj68=result_124->mOriginalTypeName;
        result_124->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_124->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_124->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_124->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_124->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_124->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_124->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_124->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_124->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj69=result_124->mAsmName;
        result_124->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_124->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_124->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_124->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_124->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_124->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj70=result_124->mTupleName;
        result_124->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        /*G*/ __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result113__ = gComeFunResultObject = __result_obj__ = result_124;
    /*i*/come_call_finalizer3(result_124,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result100__;
void* __right_value141 = (void*)0;
struct tuple1$1sTypeph* result_125;
void* __right_value142 = (void*)0;
struct sType* __dec_obj49;
struct tuple1$1sTypeph* __result101__;
    if(    self==(void*)0) {
        __result100__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    result_125=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj49=result_125->v1;
        result_125->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = result_125;
    /*i*/come_call_finalizer3(result_125,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj50;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj50=self->v1;
            come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result102__;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct list$1sTypeph* result_126;
struct list_item$1sTypeph* it_127;
void* __right_value151 = (void*)0;
struct list$1sTypeph* __result104__;
    if(    self==((void*)0)) {
        __result102__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    result_126=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 135, "list$1sTypeph"))));
    it_127=self->head;
    while(it_127!=((void*)0)) {
        list$1sTypeph_add(result_126,(struct sType*)come_increment_ref_count(sType_clone(it_127->item)));
        it_127=it_127->next;
    }
    __result104__ = gComeFunResultObject = __result_obj__ = result_126;
    /*i*/come_call_finalizer3(result_126,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value148 = (void*)0;
struct list_item$1sTypeph* litem_128;
struct sType* __dec_obj54;
void* __right_value149 = (void*)0;
struct list_item$1sTypeph* litem_129;
struct sType* __dec_obj55;
void* __right_value150 = (void*)0;
struct list_item$1sTypeph* litem_130;
struct sType* __dec_obj56;
struct list$1sTypeph* __result103__;
    if(    self->len==0) {
        litem_128=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value148=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1sTypeph"))));
        litem_128->prev=((void*)0);
        litem_128->next=((void*)0);
        __dec_obj54=litem_128->item;
        litem_128->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_128;
        self->head=litem_128;
    }
    else if(    self->len==1) {
        litem_129=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value149=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1sTypeph"))));
        litem_129->prev=self->head;
        litem_129->next=((void*)0);
        __dec_obj55=litem_129->item;
        litem_129->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_129;
        self->head->next=litem_129;
    }
    else {
        litem_130=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value150=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1sTypeph"))));
        litem_130->prev=self->tail;
        litem_130->next=((void*)0);
        __dec_obj56=litem_130->item;
        litem_130->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_130;
        self->tail=litem_130;
    }
    self->len++;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result105__;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct list$1sNodeph* result_131;
struct list_item$1sNodeph* it_132;
void* __right_value159 = (void*)0;
struct list$1sNodeph* __result110__;
    if(    self==((void*)0)) {
        __result105__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    result_131=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 135, "list$1sNodeph"))));
    it_132=self->head;
    while(it_132!=((void*)0)) {
        list$1sNodeph_add(result_131,(struct sNode*)come_increment_ref_count(sNode_clone(it_132->item)));
        it_132=it_132->next;
    }
    __result110__ = gComeFunResultObject = __result_obj__ = result_131;
    /*i*/come_call_finalizer3(result_131,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result106__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value155 = (void*)0;
struct list_item$1sNodeph* litem_133;
struct sNode* __dec_obj58;
void* __right_value156 = (void*)0;
struct list_item$1sNodeph* litem_134;
struct sNode* __dec_obj59;
void* __right_value157 = (void*)0;
struct list_item$1sNodeph* litem_135;
struct sNode* __dec_obj60;
struct list$1sNodeph* __result107__;
    if(    self->len==0) {
        litem_133=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value155=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 149, "list_item$1sNodeph"))));
        litem_133->prev=((void*)0);
        litem_133->next=((void*)0);
        __dec_obj58=litem_133->item;
        litem_133->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_133;
        self->head=litem_133;
    }
    else if(    self->len==1) {
        litem_134=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value156=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 159, "list_item$1sNodeph"))));
        litem_134->prev=self->head;
        litem_134->next=((void*)0);
        __dec_obj59=litem_134->item;
        litem_134->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_134;
        self->head->next=litem_134;
    }
    else {
        litem_135=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value157=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 169, "list_item$1sNodeph"))));
        litem_135->prev=self->tail;
        litem_135->next=((void*)0);
        __dec_obj60=litem_135->item;
        litem_135->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_135;
        self->tail=litem_135;
    }
    self->len++;
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result108__;
void* __right_value158 = (void*)0;
struct sNode* result_136;
struct sNode* __result109__;
    if(    self==(void*)0) {
        __result108__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    result_136=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_136->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_136->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_136->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_136->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_136->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_136->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_136->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_136->kind=self->kind;
    }
    __result109__ = gComeFunResultObject = __result_obj__ = result_136;
    if(result_136) { result_136 = come_decrement_ref_count2(result_136, ((struct sNode*)result_136)->finalize, ((struct sNode*)result_136)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result111__;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct list$1charph* result_137;
struct list_item$1charph* it_138;
void* __right_value164 = (void*)0;
struct list$1charph* __result112__;
    if(    self==((void*)0)) {
        __result111__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result111__;
    }
    result_137=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 135, "list$1charph"))));
    it_138=self->head;
    while(it_138!=((void*)0)) {
        list$1charph_add(result_137,(char*)come_increment_ref_count(string_clone(it_138->item)));
        it_138=it_138->next;
    }
    __result112__ = gComeFunResultObject = __result_obj__ = result_137;
    /*i*/come_call_finalizer3(result_137,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj71;
char* __dec_obj72;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj71=self->v1;
            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj72=self->v2;
            /*G*/ __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result114__;
    self->v1=v1;
    self->v2=v2;
    self->v3=v3;
    self->v4=v4;
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self){
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value180 = (void*)0;
struct list_item$1sTypeph* litem_146;
struct sType* __dec_obj73;
void* __right_value181 = (void*)0;
struct list_item$1sTypeph* litem_147;
struct sType* __dec_obj74;
void* __right_value182 = (void*)0;
struct list_item$1sTypeph* litem_148;
struct sType* __dec_obj75;
struct list$1sTypeph* __result116__;
    if(    self->len==0) {
        litem_146=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value180=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 219, "list_item$1sTypeph"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        __dec_obj73=litem_146->item;
        litem_146->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value181=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 229, "list_item$1sTypeph"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        __dec_obj74=litem_147->item;
        litem_147->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value182=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 239, "list_item$1sTypeph"))));
        litem_148->prev=self->tail;
        litem_148->next=((void*)0);
        __dec_obj75=litem_148->item;
        litem_148->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_148;
        self->tail=litem_148;
    }
    self->len++;
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value184 = (void*)0;
struct list_item$1charph* litem_149;
char* __dec_obj76;
void* __right_value185 = (void*)0;
struct list_item$1charph* litem_150;
char* __dec_obj77;
void* __right_value186 = (void*)0;
struct list_item$1charph* litem_151;
char* __dec_obj78;
struct list$1charph* __result117__;
    if(    self->len==0) {
        litem_149=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value184=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 219, "list_item$1charph"))));
        litem_149->prev=((void*)0);
        litem_149->next=((void*)0);
        __dec_obj76=litem_149->item;
        litem_149->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_149;
        self->head=litem_149;
    }
    else if(    self->len==1) {
        litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value185=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 229, "list_item$1charph"))));
        litem_150->prev=self->head;
        litem_150->next=((void*)0);
        __dec_obj77=litem_150->item;
        litem_150->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_150;
        self->head->next=litem_150;
    }
    else {
        litem_151=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value186=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 239, "list_item$1charph"))));
        litem_151->prev=self->tail;
        litem_151->next=((void*)0);
        __dec_obj78=litem_151->item;
        litem_151->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_151;
        self->tail=litem_151;
    }
    self->len++;
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __dec_obj79;
struct list$1charph* __dec_obj80;
struct list$1charph* __dec_obj81;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result118__;
    __dec_obj79=self->v1;
    self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj79,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj80=self->v2;
    self->v2=(struct list$1charph*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj80,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj81=self->v3;
    self->v3=(struct list$1charph*)come_increment_ref_count(v3);
    come_call_finalizer3(__dec_obj81,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->v4=v4;
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj82;
struct list$1charph* __dec_obj83;
struct list$1charph* __dec_obj84;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj82=self->v1;
            come_call_finalizer3(__dec_obj82,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj83=self->v2;
            come_call_finalizer3(__dec_obj83,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj84=self->v3;
            come_call_finalizer3(__dec_obj84,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value192 = (void*)0;
struct sType* right_type2_157;
struct sType* left_no_solved_generics_type_158;
struct sType* right_no_solved_generics_type_159;
struct sClass* left_class_160;
struct sClass* right_class_161;
_Bool parent_class_162;
void* __right_value193 = (void*)0;
char* left_type_name_163;
void* __right_value194 = (void*)0;
char* __dec_obj85;
void* __right_value195 = (void*)0;
struct sType* __dec_obj86;
void* __right_value196 = (void*)0;
struct sType* __dec_obj87;
void* __right_value197 = (void*)0;
char* left_type_name_164;
void* __right_value198 = (void*)0;
char* __dec_obj88;
void* __right_value199 = (void*)0;
struct sType* __dec_obj89;
void* __right_value200 = (void*)0;
struct sType* __dec_obj90;
_Bool __result120__;
int i_165;
void* __right_value201 = (void*)0;
char* left_type_name_169;
void* __right_value202 = (void*)0;
char* __dec_obj91;
void* __right_value203 = (void*)0;
struct sType* __dec_obj92;
void* __right_value204 = (void*)0;
struct sType* __dec_obj93;
void* __right_value205 = (void*)0;
char* left_type_name_170;
void* __right_value206 = (void*)0;
char* __dec_obj94;
void* __right_value207 = (void*)0;
struct sType* __dec_obj95;
void* __right_value208 = (void*)0;
struct sType* __dec_obj96;
void* __right_value209 = (void*)0;
char* __dec_obj97;
void* __right_value210 = (void*)0;
struct sType* __dec_obj98;
void* __right_value211 = (void*)0;
struct sType* __dec_obj99;
void* __right_value212 = (void*)0;
char* left_type_name_171;
void* __right_value213 = (void*)0;
char* __dec_obj100;
void* __right_value214 = (void*)0;
struct sType* __dec_obj101;
void* __right_value215 = (void*)0;
struct sType* __dec_obj102;
void* __right_value216 = (void*)0;
char* left_type_name_172;
void* __right_value217 = (void*)0;
char* __dec_obj103;
void* __right_value218 = (void*)0;
struct sType* __dec_obj104;
void* __right_value219 = (void*)0;
struct sType* __dec_obj105;
_Bool __result123__;
_Bool __result124__;
_Bool __result125__;
_Bool __result126__;
_Bool __result127__;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct buffer* buf2_173;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
char* __dec_obj106;
void* __right_value228 = (void*)0;
struct sType* __dec_obj107;
void* __right_value229 = (void*)0;
struct sType* __dec_obj108;
_Bool __result128__;
_Bool __result129__;
_Bool __result130__;
void* __right_value230 = (void*)0;
char* method_name_174;
struct sType* obj_type_177;
struct sType* obj_type2_178;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
char* __dec_obj124;
_Bool __result135__;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct buffer* buf2_179;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct sType* type_180;
void* __right_value237 = (void*)0;
char* __dec_obj125;
void* __right_value238 = (void*)0;
struct sType* __dec_obj126;
void* __right_value239 = (void*)0;
struct sType* __dec_obj127;
_Bool __result136__;
_Bool __result137__;
_Bool __result138__;
void* __right_value240 = (void*)0;
char* method_name_181;
struct sType* obj_type_182;
struct sType* obj_type2_183;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
char* __dec_obj128;
_Bool __result139__;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct buffer* buf2_184;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct sType* type_185;
void* __right_value247 = (void*)0;
char* __dec_obj129;
void* __right_value248 = (void*)0;
struct sType* __dec_obj130;
void* __right_value249 = (void*)0;
struct sType* __dec_obj131;
void* __right_value250 = (void*)0;
char* method_name_186;
struct sType* obj_type_187;
struct sType* obj_type2_188;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
char* __dec_obj132;
_Bool __result140__;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct buffer* buf2_189;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct sType* type_190;
void* __right_value257 = (void*)0;
char* __dec_obj133;
void* __right_value258 = (void*)0;
struct sType* __dec_obj134;
void* __right_value259 = (void*)0;
struct sType* __dec_obj135;
void* __right_value260 = (void*)0;
char* method_name_191;
struct sType* obj_type_192;
struct sType* obj_type2_193;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
char* __dec_obj136;
_Bool __result141__;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct buffer* buf2_194;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct sType* type_195;
void* __right_value267 = (void*)0;
char* __dec_obj137;
void* __right_value268 = (void*)0;
struct sType* __dec_obj138;
void* __right_value269 = (void*)0;
struct sType* __dec_obj139;
_Bool __result142__;
_Bool __result143__;
_Bool __result144__;
_Bool __result145__;
void* __right_value270 = (void*)0;
char* tmp_196;
void* __right_value271 = (void*)0;
char* __dec_obj140;
void* __right_value272 = (void*)0;
struct sType* __dec_obj141;
void* __right_value273 = (void*)0;
struct sType* __dec_obj142;
_Bool __result146__;
_Bool __result147__;
void* __right_value274 = (void*)0;
char* tmp_197;
void* __right_value275 = (void*)0;
char* __dec_obj143;
void* __right_value276 = (void*)0;
struct sType* __dec_obj144;
_Bool __result148__;
int i_198;
_Bool __result149__;
    right_type2_157=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    left_no_solved_generics_type_158=left_type->mNoSolvedGenericsType->v1;
    right_no_solved_generics_type_159=right_type2_157->mNoSolvedGenericsType->v1;
    left_class_160=left_type->mClass;
    right_class_161=right_type2_157->mClass;
    parent_class_162=(_Bool)0;
    if(    string_operator_not_equals(left_class_160->mName,right_class_161->mName)) {
        while(left_class_160&&right_class_161) {
            if(            string_operator_equals(left_class_160->mName,right_class_161->mName)) {
                parent_class_162=(_Bool)1;
            }
            if(            right_class_161->mParentClassName) {
                right_class_161=map$2charphsClassphp_operator_load_element(info->classes,right_class_161->mParentClassName);
            }
            else {
                right_class_161=((void*)0);
            }
        }
    }
    if(    pointer_massive) {
        if(        left_type->mPointerNum>0&&right_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
        }
        else if(        right_type->mPointerNum>0&&left_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
        }
        else if(        left_type->mPointerNum>0&&right_type->mPointerNum>0) {
            if(            string_operator_equals(left_type->mClass->mName,"void")) {
            }
            else if(            string_operator_not_equals(left_type->mClass->mName,right_type->mClass->mName)) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                    exit(2);
                }
            }
        }
    }
    if(    left_no_solved_generics_type_158&&right_no_solved_generics_type_159) {
        if(        right_type->mPointerNum==0&&left_type->mPointerNum>0) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_158->mGenericsTypes),left_no_solved_generics_type_158->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_159->mGenericsTypes),right_no_solved_generics_type_159->mClass->mName,right_type2_157->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_163=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj85=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_163,come_value->c_value));
                /*G*/ __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj86=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj87=right_type2_157;
                right_type2_157=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */left_type_name_163 = come_decrement_ref_count2(left_type_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_158->mGenericsTypes),left_no_solved_generics_type_158->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_159->mGenericsTypes),right_no_solved_generics_type_159->mClass->mName,right_type2_157->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_164=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj88=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_164,come_value->c_value));
                /*G*/ __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj89=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj90=right_type2_157;
                right_type2_157=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */left_type_name_164 = come_decrement_ref_count2(left_type_name_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_157->mClass->mName)&&left_type->mPointerNum==right_type2_157->mPointerNum) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_157->mClass->mName)&&(left_type->mPointerNum!=right_type2_157->mPointerNum||left_type->mHeap!=right_type2_157->mHeap)) {
            err_msg(info,"poinetr num err");
            printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_158->mGenericsTypes),left_no_solved_generics_type_158->mClass->mName,left_type->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_159->mGenericsTypes),right_no_solved_generics_type_159->mClass->mName,right_type2_157->mClass->mName);
            exit(2);
        }
        else if(        list$1sTypeph_length(left_no_solved_generics_type_158->mGenericsTypes)>0) {
            if(            (string_operator_equals(left_no_solved_generics_type_158->mClass->mName,"void")&&left_no_solved_generics_type_158->mPointerNum>0&&right_no_solved_generics_type_159->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_159->mClass->mName,"void")&&right_no_solved_generics_type_159->mPointerNum>0&&left_no_solved_generics_type_158->mPointerNum>0)) {
            }
            else {
                if(                list$1sTypeph_length(left_no_solved_generics_type_158->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_159->mGenericsTypes)) {
                    if(                    print_err_msg) {
                        err_msg(info,"generics type parametor number error");
                        printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_158->mGenericsTypes),left_no_solved_generics_type_158->mClass->mName,left_type->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_159->mGenericsTypes),right_no_solved_generics_type_159->mClass->mName,right_type2_157->mClass->mName);
                        exit(2);
                    }
                    __result120__ = (_Bool)0;
                    /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result120__;
                }
                for(                i_165=0;                i_165<list$1sTypeph_length(left_no_solved_generics_type_158->mGenericsTypes);                i_165++                ){
                    check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_no_solved_generics_type_158->mGenericsTypes,i_165), "05type.c", 464, 1)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_no_solved_generics_type_159->mGenericsTypes,i_165), "05type.c", 464, 2)),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
                }
                check_assign_type(msg,left_no_solved_generics_type_158,right_no_solved_generics_type_159,come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
            }
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_158->mGenericsTypes),left_no_solved_generics_type_158->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_159->mGenericsTypes),right_no_solved_generics_type_159->mClass->mName,right_type2_157->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_169=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj91=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_169,come_value->c_value));
            /*G*/ __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj92=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj93=right_type2_157;
            right_type2_157=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */left_type_name_169 = come_decrement_ref_count2(left_type_name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_158->mGenericsTypes),left_no_solved_generics_type_158->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_159->mGenericsTypes),right_no_solved_generics_type_159->mClass->mName,right_type2_157->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_170=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj94=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_170,come_value->c_value));
            /*G*/ __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj95=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj96=right_type2_157;
            right_type2_157=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */left_type_name_170 = come_decrement_ref_count2(left_type_name_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    left_type->mHeap&&!right_type2_157->mHeap&&left_type->mPointerNum>0&&right_type2_157->mPointerNum>0&&string_operator_not_equals(right_type2_157->mClass->mName,"void")&&!info->in_generics_fun&&!left_type->mMultipleTypes&&!right_type->mMultipleTypes) {
        err_msg(info,"%s",msg);
        err_msg(info,"type error heap");
        printf("left type is %s pointer num %d heap %d\n",left_type->mClass->mName,left_type->mPointerNum,left_type->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum,right_type2_157->mHeap);
        exit(2);
    }
    else if(    parent_class_162&&left_type->mPointerNum==1&&right_type->mPointerNum==1) {
        __dec_obj97=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type->mClass->mName,come_value->c_value));
        /*G*/ __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj98=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
        come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj99=right_type2_157;
        right_type2_157=(struct sType*)come_increment_ref_count(sType_clone(left_type));
        come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_171=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj100=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_171,come_value->c_value));
            /*G*/ __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj101=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj102=right_type2_157;
            right_type2_157=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */left_type_name_171 = come_decrement_ref_count2(left_type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_172=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj103=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_172,come_value->c_value));
            /*G*/ __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj104=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj105=right_type2_157;
            right_type2_157=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */left_type_name_172 = come_decrement_ref_count2(left_type_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    check_no_pointer) {
        if(        left_type->mPointerNum>0) {
            if(            right_type2_157->mPointerNum>0) {
                if(                string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_157->mClass->mName,"void")) {
                }
                else if(                string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_157->mClass->mName,"va_list")) {
                }
                else if(                string_operator_not_equals(left_type->mClass->mName,right_type2_157->mClass->mName)) {
                    if(                    print_err_msg) {
                        err_msg(info,"type error1");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                        exit(2);
                    }
                    __result123__ = (_Bool)0;
                    /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result123__;
                }
            }
            else if(            right_type->mPointerNum==0) {
            }
            else {
                if(                print_err_msg) {
                    err_msg(info,"type error2");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                    exit(2);
                }
                __result124__ = (_Bool)0;
                /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result124__;
            }
        }
        else if(        left_type->mPointerNum==0&&right_type2_157->mPointerNum>0) {
            if(            print_err_msg) {
                err_msg(info,"type error3");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
            __result125__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result125__;
        }
        else if(        left_type->mPointerNum>0&&right_type2_157->mPointerNum==0&&string_operator_equals(right_type2_157->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_157->mClass->mName)) {
            if(            print_err_msg) {
                err_msg(info,"type error4");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
            __result126__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result126__;
        }
    }
    else if(    !left_type->mNullValue&&right_type2_157->mNullValue) {
        if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_157->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_157->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_157->mClass->mName,"void")&&right_type2_157->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"type error6");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
            __result127__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result127__;
        }
        else {
            buf2_173=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 622, "buffer"))));
            buffer_append_str(buf2_173,((char*)(__right_value226=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(__right_value222=string_to_string(come_value->c_value))),((char*)(__right_value223=string_to_string(info->sname))),((char*)(__right_value224=int_to_string(info->sline))),((char*)(__right_value225=int_to_string(gComeDebugStackFrameID++)))))));
            /* U11 */__right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj106=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_173));
            /*G*/ __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj107=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj108=right_type2_157;
            right_type2_157=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf2_173,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_157->mClass->mName,"integer")&&right_type2_157->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_157->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_157->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_157->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error7");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
            __result128__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result128__;
        }
        else if(        string_operator_equals(right_type2_157->mClass->mName,"void")&&right_type2_157->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_157->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error8");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
            __result129__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result129__;
        }
        else if(        string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_157->mClass->mName,"lambda")) {
        }
        else if(        right_type2_157->mPointerNum>0) {
            if(            print_err_msg) {
                err_msg(info,"type error9");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
            __result130__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result130__;
        }
        else {
            method_name_174=(char*)come_increment_ref_count(create_method_name(right_type2_157,(_Bool)0,"to_integer",info,(_Bool)1));
            if(            map$2charphsFunph_at(info->funcs,method_name_174,((void*)0))==((void*)0)) {
                obj_type_177=right_type2_157->mNoSolvedGenericsType->v1;
                if(                obj_type_177&&list$1sTypeph_length(obj_type_177->mGenericsTypes)>0) {
                    obj_type2_178=right_type2_157;
                    __dec_obj124=method_name_174;
                    method_name_174=(char*)come_increment_ref_count(make_generics_function(obj_type2_178,(char*)come_increment_ref_count(__builtin_string("to_integer")),info,(_Bool)1));
                    /*G*/ __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    if(                    print_err_msg) {
                        err_msg(info,"require to_integer implementation(%s)",right_type2_157->mClass->mName);
                        exit(2);
                    }
                    __result135__ = (_Bool)0;
                    /* U13 */method_name_174 = come_decrement_ref_count2(method_name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result135__;
                }
            }
            buf2_179=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 689, "buffer"))));
            buffer_append_str(buf2_179,method_name_174);
            buffer_append_str(buf2_179,"(");
            buffer_append_str(buf2_179,come_value->c_value);
            buffer_append_str(buf2_179,")");
            type_180=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 696, "sType")),"integer",(_Bool)0,info));
            type_180->mHeap=(_Bool)1;
            type_180->mPointerNum=1;
            __dec_obj125=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_179));
            /*G*/ __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj126=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_180));
            come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            append_object_to_right_values2(come_value,(struct sType*)come_increment_ref_count(type_180),info,(_Bool)0);
            __dec_obj127=right_type2_157;
            right_type2_157=(struct sType*)come_increment_ref_count(sType_clone(type_180));
            come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */method_name_174 = come_decrement_ref_count2(method_name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf2_179,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_180,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"floating")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_157->mClass->mName,"floating")&&right_type2_157->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_157->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_157->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_157->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error7");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
            __result136__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result136__;
        }
        else if(        string_operator_equals(right_type2_157->mClass->mName,"void")&&right_type2_157->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_157->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error8");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
            __result137__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result137__;
        }
        else if(        string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_157->mClass->mName,"lambda")) {
        }
        else if(        right_type2_157->mPointerNum>0) {
            if(            print_err_msg) {
                err_msg(info,"type error9");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
            __result138__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result138__;
        }
        else {
            method_name_181=(char*)come_increment_ref_count(create_method_name(right_type2_157,(_Bool)0,"to_floating",info,(_Bool)1));
            if(            map$2charphsFunph_at(info->funcs,method_name_181,((void*)0))==((void*)0)) {
                obj_type_182=right_type2_157->mNoSolvedGenericsType->v1;
                if(                obj_type_182&&list$1sTypeph_length(obj_type_182->mGenericsTypes)>0) {
                    obj_type2_183=right_type2_157;
                    __dec_obj128=method_name_181;
                    method_name_181=(char*)come_increment_ref_count(make_generics_function(obj_type2_183,(char*)come_increment_ref_count(__builtin_string("to_floating")),info,(_Bool)1));
                    /*G*/ __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    if(                    print_err_msg) {
                        err_msg(info,"require to_floating implementation(%s)",right_type2_157->mClass->mName);
                        exit(2);
                    }
                    __result139__ = (_Bool)0;
                    /* U13 */method_name_181 = come_decrement_ref_count2(method_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result139__;
                }
            }
            buf2_184=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 764, "buffer"))));
            buffer_append_str(buf2_184,method_name_181);
            buffer_append_str(buf2_184,"(");
            buffer_append_str(buf2_184,come_value->c_value);
            buffer_append_str(buf2_184,")");
            type_185=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 771, "sType")),"floating",(_Bool)0,info));
            type_185->mHeap=(_Bool)1;
            type_185->mPointerNum=1;
            __dec_obj129=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_184));
            /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj130=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_185));
            come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            append_object_to_right_values2(come_value,(struct sType*)come_increment_ref_count(type_185),info,(_Bool)0);
            __dec_obj131=right_type2_157;
            right_type2_157=(struct sType*)come_increment_ref_count(sType_clone(type_185));
            come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */method_name_181 = come_decrement_ref_count2(method_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf2_184,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1)) {
        method_name_186=(char*)come_increment_ref_count(create_method_name(right_type2_157,(_Bool)0,"to_int",info,(_Bool)1));
        if(        map$2charphsFunph_at(info->funcs,method_name_186,((void*)0))==((void*)0)) {
            obj_type_187=right_type2_157->mNoSolvedGenericsType->v1;
            if(            obj_type_187&&list$1sTypeph_length(obj_type_187->mGenericsTypes)>0) {
                obj_type2_188=right_type2_157;
                __dec_obj132=method_name_186;
                method_name_186=(char*)come_increment_ref_count(make_generics_function(obj_type2_188,(char*)come_increment_ref_count(__builtin_string("to_int")),info,(_Bool)1));
                /*G*/ __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                if(                print_err_msg) {
                    err_msg(info,"require to_string implementation(%s)",right_type2_157->mClass->mName);
                    exit(1);
                }
                __result140__ = (_Bool)0;
                /* U13 */method_name_186 = come_decrement_ref_count2(method_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result140__;
            }
        }
        buf2_189=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 801, "buffer"))));
        buffer_append_str(buf2_189,method_name_186);
        buffer_append_str(buf2_189,"(");
        buffer_append_str(buf2_189,come_value->c_value);
        buffer_append_str(buf2_189,")");
        type_190=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 808, "sType")),"int",(_Bool)0,info));
        __dec_obj133=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_189));
        /*G*/ __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj134=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_190));
        come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj135=right_type2_157;
        right_type2_157=(struct sType*)come_increment_ref_count(sType_clone(type_190));
        come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */method_name_186 = come_decrement_ref_count2(method_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf2_189,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_190,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(left_type->mClass->mName,"double")&&(string_operator_equals(right_type->mClass->mName,"floating")&&right_type->mPointerNum==1)) {
        method_name_191=(char*)come_increment_ref_count(create_method_name(right_type2_157,(_Bool)0,"to_double",info,(_Bool)1));
        if(        map$2charphsFunph_at(info->funcs,method_name_191,((void*)0))==((void*)0)) {
            obj_type_192=right_type2_157->mNoSolvedGenericsType->v1;
            if(            obj_type_192&&list$1sTypeph_length(obj_type_192->mGenericsTypes)>0) {
                obj_type2_193=right_type2_157;
                __dec_obj136=method_name_191;
                method_name_191=(char*)come_increment_ref_count(make_generics_function(obj_type2_193,(char*)come_increment_ref_count(__builtin_string("to_double")),info,(_Bool)1));
                /*G*/ __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                if(                print_err_msg) {
                    err_msg(info,"require to_double implementation(%s)",right_type2_157->mClass->mName);
                    exit(1);
                }
                __result141__ = (_Bool)0;
                /* U13 */method_name_191 = come_decrement_ref_count2(method_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result141__;
            }
        }
        buf2_194=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 834, "buffer"))));
        buffer_append_str(buf2_194,method_name_191);
        buffer_append_str(buf2_194,"(");
        buffer_append_str(buf2_194,come_value->c_value);
        buffer_append_str(buf2_194,")");
        type_195=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 841, "sType")),"double",(_Bool)0,info));
        __dec_obj137=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_194));
        /*G*/ __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj138=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_195));
        come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj139=right_type2_157;
        right_type2_157=(struct sType*)come_increment_ref_count(sType_clone(type_195));
        come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */method_name_191 = come_decrement_ref_count2(method_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf2_194,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_195,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_157->mClass->mName,"char")&&right_type2_157->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_157->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_157->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_157->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error10");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
            __result142__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result142__;
        }
        else if(        string_operator_equals(right_type2_157->mClass->mName,"void")&&right_type2_157->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_157->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error11");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
            __result143__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result143__;
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_157->mClass->mName)&&!(left_type->mPointerNum>0&&right_type2_157->mPointerNum==0)) {
            if(            print_err_msg) {
                err_msg(info,"type error12");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
            __result144__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result144__;
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_157->mClass->mName,"void")&&right_type2_157->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_157->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_157->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_157->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_157->mClass->mName,"void")&&right_type2_157->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_157->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error13");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
            __result145__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result145__;
        }
        else if(        right_type2_157->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                    exit(2);
                }
            }
            else {
                tmp_196=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj140=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(string_clone(tmp_196));
                /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj141=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj142=right_type2_157;
                right_type2_157=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */tmp_196 = come_decrement_ref_count2(tmp_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    else if(    left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct)) {
        if(        right_type2_157->mPointerNum>0||(right_type2_157->mPointerNum==0&&right_type2_157->mClass->mStruct)) {
            if(            string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_157->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_157->mClass->mName,"va_list")) {
            }
            else if(            string_operator_not_equals(left_type->mClass->mName,right_type2_157->mClass->mName)) {
                if(                print_err_msg) {
                    err_msg(info,"type error14");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                    exit(2);
                }
                __result146__ = (_Bool)0;
                /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result146__;
            }
            else if(            int_operator_not_equals(left_type->mPointerNum,right_type2_157->mPointerNum)) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
            }
            else if(            list$1sNodeph_length(right_type2_157->mArrayNum)>0) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum,list$1sNodeph_length(right_type2_157->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_157->mClass->mName,"void")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_157->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_157->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_157->mClass->mName,"lambda")) {
        }
        else if(        left_type->mPointerNum>0&&right_type2_157->mPointerNum==0&&string_operator_equals(right_type2_157->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error15");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
            __result147__ = (_Bool)0;
            /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result147__;
        }
        else if(        left_type->mPointerNum>0&&!(string_operator_equals(right_type2_157->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_157->mPointerNum==0) {
            tmp_197=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj143=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(string_clone(tmp_197));
            /*G*/ __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj144=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
            come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
            __result148__ = (_Bool)1;
            /* U13 */tmp_197 = come_decrement_ref_count2(tmp_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result148__;
            /* U13 */tmp_197 = come_decrement_ref_count2(tmp_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1sTypeph_length(left_type->mGenericsTypes)>0) {
            if(            list$1sTypeph_length(left_type->mGenericsTypes)!=list$1sTypeph_length(right_type2_157->mGenericsTypes)) {
                err_msg(info,"generics type number error");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_157->mClass->mName,right_type2_157->mPointerNum);
                exit(2);
            }
            for(            i_198=0;            i_198<list$1sTypeph_length(left_type->mGenericsTypes);            i_198++            ){
                check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mGenericsTypes,i_198), "05type.c", 1018, 3)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type2_157->mGenericsTypes,i_198), "05type.c", 1018, 4)),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
            }
        }
    }
    __result149__ = (_Bool)1;
    /*i*/come_call_finalizer3(right_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result149__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_166;
int i_167;
struct sType* __result121__;
struct sType* default_value_168;
struct sType* __result122__;
default_value_168 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_166=self->head;
    i_167=0;
    while(it_166!=((void*)0)) {
        if(        position==i_167) {
            __result121__ = gComeFunResultObject = __result_obj__ = it_166->item;
            gComeFunResultObject = (void*)0;
            return __result121__;
        }
        it_166=it_166->next;
        i_167++;
    }
    memset(&default_value_168,0,sizeof(struct sType*));
    __result122__ = gComeFunResultObject = __result_obj__ = default_value_168;
    /*i*/come_call_finalizer3(default_value_168,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_175;
unsigned int it_176;
struct sFun* __result131__;
struct sFun* __result132__;
struct sFun* __result133__;
struct sFun* __result134__;
    hash_175=string_get_hash_key(((char*)key))%self->size;
    it_176=hash_175;
    while((_Bool)1) {
        if(        self->item_existance[it_176]) {
            if(            string_equals(self->keys[it_176],key)) {
                __result131__ = gComeFunResultObject = __result_obj__ = self->items[it_176];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result131__;
            }
            it_176++;
            if(            it_176>=self->size) {
                it_176=0;
            }
            else if(            it_176==hash_175) {
                __result132__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result132__;
            }
        }
        else {
            __result133__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result133__;
        }
    }
    __result134__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
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

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
void* __right_value277 = (void*)0;
struct sType* right_type2_199;
void* __right_value278 = (void*)0;
char* method_name_200;
struct sType* obj_type_201;
struct sType* obj_type2_202;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
char* __dec_obj145;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct buffer* buf2_203;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct sType* type_204;
void* __right_value285 = (void*)0;
char* __dec_obj146;
void* __right_value286 = (void*)0;
struct sType* __dec_obj147;
void* __right_value287 = (void*)0;
struct sType* __dec_obj148;
void* __right_value288 = (void*)0;
char* method_name_205;
struct sType* obj_type_206;
struct sType* obj_type2_207;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
char* __dec_obj149;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct buffer* buf2_208;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sType* type_209;
void* __right_value295 = (void*)0;
char* __dec_obj150;
void* __right_value296 = (void*)0;
struct sType* __dec_obj151;
void* __right_value297 = (void*)0;
struct sType* __dec_obj152;
void* __right_value298 = (void*)0;
char* method_name_210;
struct sType* obj_type_211;
struct sType* obj_type2_212;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
char* __dec_obj153;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct buffer* buf2_213;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* type_214;
void* __right_value305 = (void*)0;
char* __dec_obj154;
void* __right_value306 = (void*)0;
struct sType* __dec_obj155;
void* __right_value307 = (void*)0;
struct sType* __dec_obj156;
void* __right_value308 = (void*)0;
char* method_name_215;
struct sType* obj_type_216;
struct sType* obj_type2_217;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
char* __dec_obj157;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct buffer* buf2_218;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sType* type_219;
void* __right_value315 = (void*)0;
char* __dec_obj158;
void* __right_value316 = (void*)0;
struct sType* __dec_obj159;
void* __right_value317 = (void*)0;
struct sType* __dec_obj160;
    right_type2_199=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    if(    string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_199->mClass->mName,"integer")&&right_type2_199->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_199->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_199->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_199->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_199->mClass->mName,"void")&&right_type2_199->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_199->mClass->mName,"void")) {
        }
        else if(        left_type->mPointerNum>0&&right_type2_199->mPointerNum==0&&string_operator_equals(right_type2_199->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
        }
        else if(        right_type->mPointerNum>0) {
        }
        else {
            method_name_200=(char*)come_increment_ref_count(create_method_name(right_type2_199,(_Bool)0,"to_integer",info,(_Bool)1));
            if(            map$2charphsFunph_at(info->funcs,method_name_200,((void*)0))==((void*)0)) {
                obj_type_201=right_type2_199->mNoSolvedGenericsType->v1;
                if(                obj_type_201&&list$1sTypeph_length(obj_type_201->mGenericsTypes)>0) {
                    obj_type2_202=right_type2_199;
                    __dec_obj145=method_name_200;
                    method_name_200=(char*)come_increment_ref_count(make_generics_function(obj_type2_202,(char*)come_increment_ref_count(__builtin_string("to_integer")),info,(_Bool)1));
                    /*G*/ __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",right_type2_199->mClass->mName);
                    exit(1);
                }
            }
            buf2_203=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 1061, "buffer"))));
            buffer_append_str(buf2_203,method_name_200);
            buffer_append_str(buf2_203,"(");
            buffer_append_str(buf2_203,come_value->c_value);
            buffer_append_str(buf2_203,")");
            type_204=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1068, "sType")),"integer",(_Bool)0,info));
            type_204->mHeap=(_Bool)1;
            type_204->mPointerNum=1;
            __dec_obj146=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_203));
            /*G*/ __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj147=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_204));
            come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            append_object_to_right_values2(come_value,(struct sType*)come_increment_ref_count(type_204),info,(_Bool)0);
            __dec_obj148=right_type2_199;
            right_type2_199=(struct sType*)come_increment_ref_count(sType_clone(type_204));
            come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */method_name_200 = come_decrement_ref_count2(method_name_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf2_203,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_204,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1)) {
        method_name_205=(char*)come_increment_ref_count(create_method_name(right_type2_199,(_Bool)0,"to_int",info,(_Bool)1));
        if(        map$2charphsFunph_at(info->funcs,method_name_205,((void*)0))==((void*)0)) {
            obj_type_206=right_type2_199->mNoSolvedGenericsType->v1;
            if(            obj_type_206&&list$1sTypeph_length(obj_type_206->mGenericsTypes)>0) {
                obj_type2_207=right_type2_199;
                __dec_obj149=method_name_205;
                method_name_205=(char*)come_increment_ref_count(make_generics_function(obj_type2_207,(char*)come_increment_ref_count(__builtin_string("to_int")),info,(_Bool)1));
                /*G*/ __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"require to_string implementation(%s)",right_type2_199->mClass->mName);
                exit(1);
            }
        }
        buf2_208=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 1095, "buffer"))));
        buffer_append_str(buf2_208,method_name_205);
        buffer_append_str(buf2_208,"(");
        buffer_append_str(buf2_208,come_value->c_value);
        buffer_append_str(buf2_208,")");
        type_209=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1102, "sType")),"int",(_Bool)0,info));
        __dec_obj150=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_208));
        /*G*/ __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj151=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_209));
        come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj152=right_type2_199;
        right_type2_199=(struct sType*)come_increment_ref_count(sType_clone(type_209));
        come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */method_name_205 = come_decrement_ref_count2(method_name_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf2_208,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_209,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(left_type->mClass->mName,"floating")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_199->mClass->mName,"floating")&&right_type2_199->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_199->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_199->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_199->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_199->mClass->mName,"void")&&right_type2_199->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_199->mClass->mName,"void")) {
        }
        else if(        left_type->mPointerNum>0&&right_type2_199->mPointerNum==0&&string_operator_equals(right_type2_199->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
        }
        else if(        right_type->mPointerNum>0) {
        }
        else {
            method_name_210=(char*)come_increment_ref_count(create_method_name(right_type2_199,(_Bool)0,"to_floating",info,(_Bool)1));
            if(            map$2charphsFunph_at(info->funcs,method_name_210,((void*)0))==((void*)0)) {
                obj_type_211=right_type2_199->mNoSolvedGenericsType->v1;
                if(                obj_type_211&&list$1sTypeph_length(obj_type_211->mGenericsTypes)>0) {
                    obj_type2_212=right_type2_199;
                    __dec_obj153=method_name_210;
                    method_name_210=(char*)come_increment_ref_count(make_generics_function(obj_type2_212,(char*)come_increment_ref_count(__builtin_string("to_floating")),info,(_Bool)1));
                    /*G*/ __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",right_type2_199->mClass->mName);
                    exit(1);
                }
            }
            buf2_213=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 1142, "buffer"))));
            buffer_append_str(buf2_213,method_name_210);
            buffer_append_str(buf2_213,"(");
            buffer_append_str(buf2_213,come_value->c_value);
            buffer_append_str(buf2_213,")");
            type_214=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1149, "sType")),"floating",(_Bool)0,info));
            type_214->mHeap=(_Bool)1;
            type_214->mPointerNum=1;
            __dec_obj154=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_213));
            /*G*/ __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj155=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_214));
            come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            append_object_to_right_values2(come_value,(struct sType*)come_increment_ref_count(type_214),info,(_Bool)0);
            __dec_obj156=right_type2_199;
            right_type2_199=(struct sType*)come_increment_ref_count(sType_clone(type_214));
            come_call_finalizer3(__dec_obj156,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */method_name_210 = come_decrement_ref_count2(method_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf2_213,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"double")&&(string_operator_equals(right_type->mClass->mName,"floating")&&right_type->mPointerNum==1)) {
        method_name_215=(char*)come_increment_ref_count(create_method_name(right_type2_199,(_Bool)0,"to_floating",info,(_Bool)1));
        if(        map$2charphsFunph_at(info->funcs,method_name_215,((void*)0))==((void*)0)) {
            obj_type_216=right_type2_199->mNoSolvedGenericsType->v1;
            if(            obj_type_216&&list$1sTypeph_length(obj_type_216->mGenericsTypes)>0) {
                obj_type2_217=right_type2_199;
                __dec_obj157=method_name_215;
                method_name_215=(char*)come_increment_ref_count(make_generics_function(obj_type2_217,(char*)come_increment_ref_count(__builtin_string("to_floating")),info,(_Bool)1));
                /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"require to_string implementation(%s)",right_type2_199->mClass->mName);
                exit(1);
            }
        }
        buf2_218=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 1176, "buffer"))));
        buffer_append_str(buf2_218,method_name_215);
        buffer_append_str(buf2_218,"(");
        buffer_append_str(buf2_218,come_value->c_value);
        buffer_append_str(buf2_218,")");
        type_219=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1183, "sType")),"double",(_Bool)0,info));
        __dec_obj158=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_218));
        /*G*/ __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj159=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_219));
        come_call_finalizer3(__dec_obj159,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj160=right_type2_199;
        right_type2_199=(struct sType*)come_increment_ref_count(sType_clone(type_219));
        come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */method_name_215 = come_decrement_ref_count2(method_name_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf2_218,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_219,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(right_type2_199,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value318 = (void*)0;
struct sType* result_type_220;
char* var_name_221;
char* p_222;
int sline_223;
void* __right_value319 = (void*)0;
char* word_224;
_Bool between_brace_225;
char* p_226;
int sline_227;
void* __right_value320 = (void*)0;
char* word_228;
char* p_229;
int sline_230;
void* __right_value321 = (void*)0;
char* word_231;
void* __right_value322 = (void*)0;
char* __dec_obj161;
void* __right_value323 = (void*)0;
char* __dec_obj162;
_Bool no_comma_233;
void* __right_value324 = (void*)0;
struct sNode* node_234;
struct sNode* __dec_obj163;
char* p_235;
int sline_236;
void* __right_value325 = (void*)0;
char* word_237;
void* __right_value326 = (void*)0;
struct sNode* node_238;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct tuple2$2sTypephcharph* __result152__;
    result_type_220=(struct sType*)come_increment_ref_count(sType_clone(base_type_name));
    if(    !first) {
        result_type_220->mPointerNum=result_type_220->mTypedefOriginalPointerNum;
    }
    var_name_221=((void*)0);
    {
        p_222=info->p;
        sline_223=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            word_224=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_224,"const")||string_operator_equals(word_224,"__restrict")||string_operator_equals(word_224,"restrict")||string_operator_equals(word_224,"__user")||string_operator_equals(word_224,"volatile")||string_operator_equals(word_224,"_Nonnull")||string_operator_equals(word_224,"_Nullable")||string_operator_equals(word_224,"_Null_unspecified")||string_operator_equals(word_224,"__user")||string_operator_equals(word_224,"_Addr")) {
            }
            else {
                info->p=p_222;
                info->sline=sline_223;
            }
            /* U13 */word_224 = come_decrement_ref_count2(word_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            info->p=p_222;
            info->sline=sline_223;
        }
    }
    between_brace_225=(_Bool)0;
    {
        p_226=info->p;
        sline_227=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_228=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_228,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        between_brace_225=(_Bool)1;
                    }
                }
                /* U13 */word_228 = come_decrement_ref_count2(word_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_226;
        info->sline=sline_227;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        {
            p_229=info->p;
            sline_230=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_231=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_231,"const")||string_operator_equals(word_231,"__restrict")||string_operator_equals(word_231,"restrict")||string_operator_equals(word_231,"__user")||string_operator_equals(word_231,"volatile")||string_operator_equals(word_231,"_Nonnull")||string_operator_equals(word_231,"_Nullable")||string_operator_equals(word_231,"_Null_unspecified")||string_operator_equals(word_231,"__user")||string_operator_equals(word_231,"_Addr")) {
                }
                else {
                    info->p=p_229;
                    info->sline=sline_230;
                }
                /* U13 */word_231 = come_decrement_ref_count2(word_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_229;
                info->sline=sline_230;
            }
        }
        result_type_220->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_225&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95) {
        __dec_obj161=var_name_221;
        var_name_221=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name_232=0;
        num_anonymous_var_name_232++;
        __dec_obj162=var_name_221;
        var_name_221=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_232));
        /*G*/ __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    between_brace_225&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_233=info->no_comma;
        info->no_comma=(_Bool)1;
        node_234=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_233;
        __dec_obj163=result_type_220->mSizeNum;
        result_type_220->mSizeNum=(struct sNode*)come_increment_ref_count(node_234);
        /* U1 */ if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
        if(node_234) { node_234 = come_decrement_ref_count2(node_234, ((struct sNode*)node_234)->finalize, ((struct sNode*)node_234)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_235=info->p;
            sline_236=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_237=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_237,"const")||string_operator_equals(word_237,"__restrict")||string_operator_equals(word_237,"restrict")||string_operator_equals(word_237,"__user")||string_operator_equals(word_237,"volatile")||string_operator_equals(word_237,"_Nonnull")||string_operator_equals(word_237,"_Nullable")||string_operator_equals(word_237,"_Null_unspecified")||string_operator_equals(word_237,"__user")||string_operator_equals(word_237,"_Addr")) {
                }
                else {
                    info->p=p_235;
                    info->sline=sline_236;
                }
                /* U13 */word_237 = come_decrement_ref_count2(word_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_235;
                info->sline=sline_236;
            }
        }
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_220->mArrayPointerType=(_Bool)1;
            result_type_220->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_238=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodeph_push_back(result_type_220->mArrayNum,(struct sNode*)come_increment_ref_count(node_238));
        parse_sharp_v5(info);
        result_type_220->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    ((char*)(__right_value330=parse_attribute(info)));
    /* U11 */__right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result152__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value332=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05type.c", 1356, "struct tuple2$2sTypephcharph")),(struct sType*)come_increment_ref_count(result_type_220),(char*)come_increment_ref_count(var_name_221))));
    /*i*/come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_220,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_221 = come_decrement_ref_count2(var_name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value332,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result152__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value327 = (void*)0;
struct list_item$1sNodeph* litem_239;
struct sNode* __dec_obj164;
void* __right_value328 = (void*)0;
struct list_item$1sNodeph* litem_240;
struct sNode* __dec_obj165;
void* __right_value329 = (void*)0;
struct list_item$1sNodeph* litem_241;
struct sNode* __dec_obj166;
struct list$1sNodeph* __result150__;
    if(    self->len==0) {
        litem_239=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value327=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 219, "list_item$1sNodeph"))));
        litem_239->prev=((void*)0);
        litem_239->next=((void*)0);
        __dec_obj164=litem_239->item;
        litem_239->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_239;
        self->head=litem_239;
    }
    else if(    self->len==1) {
        litem_240=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value328=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 229, "list_item$1sNodeph"))));
        litem_240->prev=self->head;
        litem_240->next=((void*)0);
        __dec_obj165=litem_240->item;
        litem_240->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_240;
        self->head->next=litem_240;
    }
    else {
        litem_241=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value329=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 239, "list_item$1sNodeph"))));
        litem_241->prev=self->tail;
        litem_241->next=((void*)0);
        __dec_obj166=litem_241->item;
        litem_241->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_241;
        self->tail=litem_241;
    }
    self->len++;
    __result150__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result150__;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj167;
char* __dec_obj168;
struct tuple2$2sTypephcharph* __result151__;
    __dec_obj167=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj168=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj169;
char* __dec_obj170;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj169=self->v1;
            come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj170=self->v2;
            /*G*/ __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_242;
int sline_243;
void* __right_value333 = (void*)0;
char* word_244;
    p_242=info->p;
    sline_243=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        word_244=(char*)come_increment_ref_count(parse_word(info));
        if(        string_operator_equals(word_244,"const")||string_operator_equals(word_244,"__restrict")||string_operator_equals(word_244,"restrict")||string_operator_equals(word_244,"__user")||string_operator_equals(word_244,"volatile")||string_operator_equals(word_244,"_Nonnull")||string_operator_equals(word_244,"_Nullable")||string_operator_equals(word_244,"_Null_unspecified")||string_operator_equals(word_244,"__user")||string_operator_equals(word_244,"_Addr")) {
        }
        else {
            info->p=p_242;
            info->sline=sline_243;
        }
        /* U13 */word_244 = come_decrement_ref_count2(word_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->p=p_242;
        info->sline=sline_243;
    }
}

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool no_output_err_245;
void* __right_value334 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* type_246=0;
char* name_247=0;
_Bool err_248=0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct tuple3$3sTypephcharphbool* __result154__;
    no_output_err_245=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value334=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_246=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_247=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_248=multiple_assign_var2->v3;
    /*g*/come_call_finalizer3(__right_value334,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_245;
    __result154__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value336=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1388, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type_246),(char*)come_increment_ref_count(name_247),err_248)));
    /*i*/come_call_finalizer3(type_246,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */name_247 = come_decrement_ref_count2(name_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value336,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj171;
char* __dec_obj172;
struct tuple3$3sTypephcharphbool* __result153__;
    __dec_obj171=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj172=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result153__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result153__;
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__=(void*)0;
char* head_249;
int head_sline_250;
void* __right_value337 = (void*)0;
char* type_name_251;
void* __right_value338 = (void*)0;
char* __dec_obj173;
_Bool record__252;
_Bool exception__253;
_Bool constant_254;
_Bool static__255;
_Bool volatile__256;
_Bool register__257;
_Bool unsigned__258;
_Bool long__259;
_Bool long_long_260;
_Bool short__261;
_Bool restrict__262;
_Bool struct__263;
_Bool union__264;
_Bool enum__265;
_Bool no_heap_266;
_Bool extern__267;
_Bool inline__268;
_Bool come_mem_core__269;
_Bool uniq__270;
struct sNode* alignas__271;
_Bool anonymous_type_272;
_Bool anonymous_name_273;
char* p_274;
int sline_275;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
char* __dec_obj174;
void* __right_value341 = (void*)0;
char* __dec_obj175;
void* __right_value342 = (void*)0;
char* __dec_obj176;
char* p_276;
int sline_277;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct tuple3$3sTypephcharphbool* __result155__;
char* p_278;
int sline_279;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct tuple3$3sTypephcharphbool* __result156__;
void* __right_value349 = (void*)0;
struct sNode* node_280;
_Bool Value_281;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct tuple3$3sTypephcharphbool* __result157__;
char* p_282;
int sline_283;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
char* __dec_obj177;
void* __right_value355 = (void*)0;
char* __dec_obj178;
void* __right_value356 = (void*)0;
char* __dec_obj179;
char* p_284;
int sline_285;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct tuple3$3sTypephcharphbool* __result158__;
void* __right_value360 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* type_286=0;
char* name_287=0;
_Bool err_288=0;
char* p_289;
int sline_290;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct tuple3$3sTypephcharphbool* __result159__;
void* __right_value365 = (void*)0;
char* __dec_obj180;
void* __right_value366 = (void*)0;
char* __dec_obj181;
void* __right_value367 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_291=0;
char* name_292=0;
_Bool err_293=0;
char* p_294;
int sline_295;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct tuple3$3sTypephcharphbool* __result160__;
void* __right_value371 = (void*)0;
struct sNode* exp_296;
struct sNode* __dec_obj182;
void* __right_value372 = (void*)0;
char* __dec_obj183;
void* __right_value373 = (void*)0;
char* __dec_obj184;
void* __right_value374 = (void*)0;
char* __dec_obj185;
void* __right_value375 = (void*)0;
char* __dec_obj186;
void* __right_value376 = (void*)0;
char* __dec_obj187;
void* __right_value377 = (void*)0;
char* __dec_obj188;
void* __right_value378 = (void*)0;
char* __dec_obj189;
void* __right_value379 = (void*)0;
char* __dec_obj190;
void* __right_value380 = (void*)0;
char* __dec_obj191;
void* __right_value381 = (void*)0;
char* __dec_obj192;
void* __right_value382 = (void*)0;
char* __dec_obj193;
void* __right_value383 = (void*)0;
char* __dec_obj194;
char* p_297;
int sline_298;
void* __right_value384 = (void*)0;
char* __dec_obj195;
void* __right_value385 = (void*)0;
char* __dec_obj196;
void* __right_value386 = (void*)0;
char* __dec_obj197;
void* __right_value387 = (void*)0;
char* __dec_obj198;
void* __right_value388 = (void*)0;
char* __dec_obj199;
void* __right_value389 = (void*)0;
char* __dec_obj200;
char* p_299;
int sline_300;
void* __right_value390 = (void*)0;
char* __dec_obj201;
char* p_301;
int sline_302;
void* __right_value391 = (void*)0;
char* __dec_obj202;
void* __right_value392 = (void*)0;
char* __dec_obj203;
void* __right_value393 = (void*)0;
char* __dec_obj204;
char* p_303;
int sline_304;
void* __right_value394 = (void*)0;
char* __dec_obj205;
void* __right_value395 = (void*)0;
char* __dec_obj206;
void* __right_value396 = (void*)0;
char* __dec_obj207;
void* __right_value397 = (void*)0;
char* __dec_obj208;
void* __right_value398 = (void*)0;
char* __dec_obj209;
void* __right_value399 = (void*)0;
char* __dec_obj210;
void* __right_value400 = (void*)0;
char* __dec_obj211;
void* __right_value401 = (void*)0;
char* __dec_obj212;
void* __right_value402 = (void*)0;
char* __dec_obj213;
void* __right_value403 = (void*)0;
char* __dec_obj214;
void* __right_value404 = (void*)0;
char* __dec_obj215;
char* p_305;
int sline_306;
void* __right_value405 = (void*)0;
char* __dec_obj216;
void* __right_value406 = (void*)0;
char* __dec_obj217;
int pointer_num_307;
_Bool heap_308;
_Bool channel_309;
char* tuple_name_310;
void* __right_value407 = (void*)0;
char* __dec_obj218;
_Bool lambda_flag_311;
char* pX_312;
int slineX_313;
void* __right_value408 = (void*)0;
struct sType* type_314;
char* var_name_315;
_Bool function_pointer_flag_316;
char* p_317;
int sline_318;
void* __right_value409 = (void*)0;
char* word_319;
_Bool var_name_between_brace_320;
char* p_321;
int sline_322;
void* __right_value410 = (void*)0;
char* word_323;
void* __right_value411 = (void*)0;
char* __dec_obj219;
void* __right_value412 = (void*)0;
struct sNode* node_325;
_Bool Value_326;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct tuple3$3sTypephcharphbool* __result161__;
int pointer_num_327;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sType* __dec_obj220;
void* __right_value417 = (void*)0;
char* __dec_obj221;
void* __right_value418 = (void*)0;
struct sNode* node_328;
_Bool Value_329;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct tuple3$3sTypephcharphbool* __result162__;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sType* __dec_obj222;
void* __right_value423 = (void*)0;
char* __dec_obj223;
void* __right_value424 = (void*)0;
struct sNode* node_330;
_Bool Value_331;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct tuple3$3sTypephcharphbool* __result163__;
int pointer_num_332;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct sType* __dec_obj224;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct tuple3$3sTypephcharphbool* __result164__;
void* __right_value431 = (void*)0;
char* __dec_obj225;
void* __right_value432 = (void*)0;
char* __dec_obj226;
void* __right_value433 = (void*)0;
char* __dec_obj227;
void* __right_value434 = (void*)0;
char* __dec_obj228;
_Bool no_comma_335;
void* __right_value435 = (void*)0;
struct sNode* node_336;
struct sNode* __dec_obj229;
struct sType* result_type_337;
void* __right_value436 = (void*)0;
struct sType* __dec_obj230;
int i_338;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sType* __dec_obj231;
int i_342;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct sType* __dec_obj232;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sType* __dec_obj233;
struct sNode* __dec_obj234;
void* __right_value445 = (void*)0;
char* __dec_obj235;
void* __right_value446 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var5 = (void*)0;
struct list$1sTypeph* param_types_343=0;
struct list$1charph* param_names_344=0;
struct list$1charph* param_default_parametors_345=0;
_Bool var_args_346=0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct sType* __dec_obj236;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct tuple1$1sTypeph* __dec_obj238;
struct list$1sTypeph* __dec_obj239;
struct list$1charph* __dec_obj240;
int function_pointer_num_347;
struct sType* result_type_348;
void* __right_value451 = (void*)0;
struct sType* __dec_obj241;
int i_349;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct sType* __dec_obj242;
int i_350;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sType* __dec_obj243;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sType* __dec_obj244;
struct sNode* __dec_obj245;
void* __right_value460 = (void*)0;
char* __dec_obj246;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct tuple3$3sTypephcharphbool* __result168__;
void* __right_value463 = (void*)0;
char* __dec_obj247;
_Bool function_pointer_array_352;
void* __right_value464 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var6 = (void*)0;
struct list$1sTypeph* param_types_353=0;
struct list$1charph* param_names_354=0;
struct list$1charph* param_default_parametors_355=0;
_Bool var_args_356=0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sType* __dec_obj248;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct tuple1$1sTypeph* __dec_obj249;
struct list$1sTypeph* __dec_obj250;
struct list$1charph* __dec_obj251;
void* __right_value470 = (void*)0;
struct sNode* exp_357;
_Bool Value_358;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct tuple3$3sTypephcharphbool* __result170__;
void* __right_value473 = (void*)0;
struct CVALUE* come_value_359;
void* __right_value474 = (void*)0;
struct sType* __dec_obj254;
void* __right_value475 = (void*)0;
char* __dec_obj255;
void* __right_value476 = (void*)0;
char* __dec_obj256;
void* __right_value477 = (void*)0;
char* __dec_obj257;
void* __right_value478 = (void*)0;
char* __dec_obj258;
_Bool no_comma_362;
void* __right_value479 = (void*)0;
struct sNode* node_363;
struct sNode* __dec_obj259;
void* __right_value480 = (void*)0;
struct sType* __dec_obj263;
void* __right_value481 = (void*)0;
char* __dec_obj264;
struct sNode* __dec_obj265;
char* __dec_obj266;
int i_364;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* __dec_obj267;
struct sNode* __dec_obj268;
char* __dec_obj269;
int i_365;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sType* __dec_obj270;
struct sNode* __dec_obj271;
char* __dec_obj272;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct tuple3$3sTypephcharphbool* __result171__;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sType* __dec_obj273;
void* __right_value492 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* generics_type_366=0;
char* var_name_367=0;
_Bool err_368=0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct tuple3$3sTypephcharphbool* __result172__;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct tuple3$3sTypephcharphbool* __result173__;
void* __right_value497 = (void*)0;
struct sType* __dec_obj274;
void* __right_value498 = (void*)0;
char* new_name_369;
struct sNode* __dec_obj275;
char* __dec_obj276;
struct sClass* klass_370;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sClass* klass_412;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sType* __dec_obj277;
struct sNode* __dec_obj278;
char* __dec_obj279;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct list$1sTypeph* types_413;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type2_414=0;
char* name_415=0;
_Bool err_416=0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct tuple3$3sTypephcharphbool* __result195__;
void* __right_value514 = (void*)0;
int num_tuples_417;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sType* __dec_obj280;
struct list$1sTypeph* o2_saved_418;
struct sType* it_419;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sType* __dec_obj281;
void* __right_value520 = (void*)0;
char* new_name_420;
void* __right_value521 = (void*)0;
char* __dec_obj282;
void* __right_value522 = (void*)0;
char* __dec_obj283;
void* __right_value523 = (void*)0;
char* __dec_obj284;
void* __right_value524 = (void*)0;
char* __dec_obj285;
_Bool no_comma_423;
void* __right_value525 = (void*)0;
struct sNode* node_424;
struct sNode* __dec_obj286;
void* __right_value526 = (void*)0;
struct sNode* node_425;
void* __right_value527 = (void*)0;
char* asm_name_426;
char* __dec_obj287;
void* __right_value528 = (void*)0;
struct sType* type_before_427;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sType* __dec_obj288;
void* __right_value531 = (void*)0;
struct sNode* __list_values1___428[1];
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct list$1sNodeph* __dec_obj289;
void* __right_value534 = (void*)0;
struct tuple1$1sTypeph* __dec_obj290;
struct sType* __dec_obj291;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sType* type2_430;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sType* type3_436;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sType* type4_437;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct tuple3$3sTypephcharphbool* __result200__;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct tuple3$3sTypephcharphbool* __result201__;
type_314 = (void*)0;
var_name_315 = (void*)0;
result_type_337 = (void*)0;
result_type_348 = (void*)0;
    head_249=info->p;
    head_sline_250=info->sline;
    info->define_struct=(_Bool)0;
    type_name_251=(char*)come_increment_ref_count(parse_word(info));
    while(string_operator_equals(type_name_251,"__extension__")) {
        __dec_obj173=type_name_251;
        type_name_251=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    record__252=(_Bool)0;
    exception__253=(_Bool)0;
    constant_254=(_Bool)0;
    static__255=(_Bool)0;
    volatile__256=(_Bool)0;
    register__257=(_Bool)0;
    unsigned__258=(_Bool)0;
    long__259=(_Bool)0;
    long_long_260=(_Bool)0;
    short__261=(_Bool)0;
    restrict__262=(_Bool)0;
    struct__263=(_Bool)0;
    union__264=(_Bool)0;
    enum__265=(_Bool)0;
    no_heap_266=(_Bool)0;
    extern__267=(_Bool)0;
    inline__268=(_Bool)0;
    come_mem_core__269=(_Bool)0;
    uniq__270=(_Bool)0;
    alignas__271=((void*)0);
    anonymous_type_272=(_Bool)0;
    anonymous_name_273=(_Bool)0;
    while((_Bool)1) {
        if(        string_operator_equals(type_name_251,"struct")) {
            struct__263=(_Bool)1;
            if(            *info->p==123) {
                p_274=info->p;
                sline_275=info->sline;
                ((char*)(__right_value339=skip_block(info)));
                /* U11 */__right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    anonymous_name_273=(_Bool)1;
                    anonymous_type_272=(_Bool)1;
                    __dec_obj174=type_name_251;
                    type_name_251=(char*)come_increment_ref_count(__builtin_string(""));
                    /*G*/ __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_274;
                    info->sline=sline_275;
                    break;
                }
                else {
                    anonymous_type_272=(_Bool)1;
                    __dec_obj175=type_name_251;
                    type_name_251=(char*)come_increment_ref_count(__builtin_string(""));
                    /*G*/ __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_274;
                    info->sline=sline_275;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62) {
                __dec_obj176=type_name_251;
                type_name_251=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60) {
                    p_276=info->p;
                    sline_277=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123) {
                            }
                            else {
                                info->p=p_276;
                                info->sline=sline_277;
                            }
                            break;
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid struct definition");
                            __result155__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value344=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1482, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*g*/come_call_finalizer3(__right_value344,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result155__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123) {
                    p_278=info->p;
                    sline_279=info->sline;
                    ((char*)(__right_value345=skip_block(info)));
                    /* U11 */__right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(                    strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                        ((char*)(__right_value346=parse_attribute(info)));
                        /* U11 */__right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==59) {
                        info->p=head_249;
                        info->sline=head_sline_250;
                        info->define_struct=(_Bool)1;
                        __result156__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value348=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1504, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*g*/come_call_finalizer3(__right_value348,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result156__;
                    }
                    else {
                        info->p=p_278;
                        info->sline=sline_279;
                        node_280=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_251),info));
                        Value_281=node_compile(node_280,info);
                        if(                        !Value_281) {
                            __result157__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value351=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1516, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(node_280) { node_280 = come_decrement_ref_count2(node_280, ((struct sNode*)node_280)->finalize, ((struct sNode*)node_280)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*g*/come_call_finalizer3(__right_value351,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result157__;
                        }
                        else {
                        }
                        if(node_280) { node_280 = come_decrement_ref_count2(node_280, ((struct sNode*)node_280)->finalize, ((struct sNode*)node_280)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                        if(node_280) { node_280 = come_decrement_ref_count2(node_280, ((struct sNode*)node_280)->finalize, ((struct sNode*)node_280)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_251,"union")) {
            union__264=(_Bool)1;
            if(            *info->p==123) {
                p_282=info->p;
                sline_283=info->sline;
                ((char*)(__right_value352=skip_block(info)));
                /* U11 */__right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((char*)(__right_value353=parse_attribute(info)));
                    /* U11 */__right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_249;
                    info->sline=head_sline_250;
                    info->define_struct=(_Bool)0;
                    anonymous_type_272=(_Bool)1;
                    __dec_obj177=type_name_251;
                    type_name_251=(char*)come_increment_ref_count(__builtin_string(""));
                    /*G*/ __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_282;
                    info->sline=sline_283;
                    break;
                }
                else {
                    anonymous_type_272=(_Bool)1;
                    __dec_obj178=type_name_251;
                    type_name_251=(char*)come_increment_ref_count(__builtin_string(""));
                    /*G*/ __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_282;
                    info->sline=sline_283;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj179=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_284=info->p;
                sline_285=info->sline;
                ((char*)(__right_value357=skip_block(info)));
                /* U11 */__right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_249;
                    info->sline=head_sline_250;
                    info->define_struct=(_Bool)1;
                    __result158__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value359=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1573, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*g*/come_call_finalizer3(__right_value359,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result158__;
                }
                else {
                    anonymous_type_272=(_Bool)1;
                    info->p=p_284;
                    info->sline=sline_285;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_251,"enum")) {
            enum__265=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value360=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_286=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_287=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                err_288=multiple_assign_var3->v3;
                /*g*/come_call_finalizer3(__right_value360,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                /*i*/come_call_finalizer3(type_286,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name_287 = come_decrement_ref_count2(name_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_289=info->p;
                sline_290=info->sline;
                ((char*)(__right_value361=skip_block(info)));
                /* U11 */__right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((char*)(__right_value362=parse_attribute(info)));
                    /* U11 */__right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_249;
                    info->sline=head_sline_250;
                    info->define_struct=(_Bool)1;
                    __result159__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value364=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1611, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*g*/come_call_finalizer3(__right_value364,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result159__;
                }
                else {
                    anonymous_type_272=(_Bool)1;
                    __dec_obj180=type_name_251;
                    type_name_251=(char*)come_increment_ref_count(__builtin_string(""));
                    /*G*/ __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_289;
                    info->sline=sline_290;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj181=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value367=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_291=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_292=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err_293=multiple_assign_var4->v3;
                /*g*/come_call_finalizer3(__right_value367,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                /*i*/come_call_finalizer3(type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name_292 = come_decrement_ref_count2(name_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_294=info->p;
                sline_295=info->sline;
                ((char*)(__right_value368=skip_block(info)));
                /* U11 */__right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_249;
                    info->sline=head_sline_250;
                    info->define_struct=(_Bool)1;
                    __result160__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value370=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1647, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*g*/come_call_finalizer3(__right_value370,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result160__;
                }
                else {
                    anonymous_type_272=(_Bool)1;
                    info->p=p_294;
                    info->sline=sline_295;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_251,"_Alignas")) {
            expected_next_character(40,info);
            exp_296=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj182=alignas__271;
            alignas__271=(struct sNode*)come_increment_ref_count(exp_296);
            /* U1 */ if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); };
            expected_next_character(41,info);
            __dec_obj183=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(exp_296) { exp_296 = come_decrement_ref_count2(exp_296, ((struct sNode*)exp_296)->finalize, ((struct sNode*)exp_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(type_name_251,"const")) {
            constant_254=(_Bool)1;
            __dec_obj184=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_251,"static")) {
            static__255=(_Bool)1;
            __dec_obj185=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_251,"uniq")) {
            uniq__270=(_Bool)1;
            __dec_obj186=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_251,"_Nullable")) {
            __dec_obj187=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_251,"record")) {
            record__252=(_Bool)1;
            __dec_obj188=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_251,"exception")) {
            exception__253=(_Bool)1;
            __dec_obj189=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_251,"come_mem_core")) {
            come_mem_core__269=(_Bool)1;
            __dec_obj190=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_251,"extern")) {
            extern__267=(_Bool)1;
            __dec_obj191=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_251,"_Noreturn")) {
            __dec_obj192=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_251,"inline")||string_operator_equals(type_name_251,"__inline")||string_operator_equals(type_name_251,"__inline__")||string_operator_equals(type_name_251,"__always_inline")) {
            inline__268=(_Bool)1;
            __dec_obj193=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_251,"volatile")) {
            volatile__256=(_Bool)1;
            __dec_obj194=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_251,"long")) {
            {
                p_297=info->p;
                sline_298=info->sline;
                if(                !xisalpha(*info->p)) {
                    info->p=p_297;
                    info->sline=sline_298;
                    __dec_obj195=type_name_251;
                    type_name_251=(char*)come_increment_ref_count(__builtin_string("long"));
                    /*G*/ __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                    break;
                }
                else {
                    __dec_obj196=type_name_251;
                    type_name_251=(char*)come_increment_ref_count(parse_word(info));
                    /*G*/ __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    string_operator_equals(type_name_251,"unsigned")) {
                        __dec_obj197=type_name_251;
                        type_name_251=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_251,"int")) {
                            long__259=(_Bool)1;
                            unsigned__258=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_251,"long")) {
                        p_297=info->p;
                        sline_298=info->sline;
                        if(                        xisalpha(*info->p)) {
                            long_long_260=(_Bool)1;
                            __dec_obj198=type_name_251;
                            type_name_251=(char*)come_increment_ref_count(parse_word(info));
                            /*G*/ __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            long__259=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_251,"int")) {
                            long_long_260=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_251,info)) {
                            __dec_obj199=type_name_251;
                            type_name_251=(char*)come_increment_ref_count(__builtin_string("long"));
                            /*G*/ __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                            long_long_260=(_Bool)1;
                            info->p=p_297;
                            info->sline=sline_298;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_251,info)) {
                        if(                        long__259) {
                            long_long_260=(_Bool)1;
                            long__259=(_Bool)0;
                        }
                        else {
                            long__259=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_297;
                        info->sline=sline_298;
                        __dec_obj200=type_name_251;
                        type_name_251=(char*)come_increment_ref_count(__builtin_string("long"));
                        /*G*/ __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_251,"unsigned")) {
            unsigned__258=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                p_299=info->p;
                sline_300=info->sline;
                __dec_obj201=type_name_251;
                type_name_251=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_251,"short")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_301=info->p;
                        sline_302=info->sline;
                        __dec_obj202=type_name_251;
                        type_name_251=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_251,info)) {
                            short__261=(_Bool)1;
                        }
                        else {
                            short__261=(_Bool)1;
                            __dec_obj203=type_name_251;
                            type_name_251=(char*)come_increment_ref_count(__builtin_string("int"));
                            /*G*/ __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_301;
                            info->sline=sline_302;
                        }
                    }
                    else {
                        short__261=(_Bool)1;
                        __dec_obj204=type_name_251;
                        type_name_251=(char*)come_increment_ref_count(__builtin_string("int"));
                        /*G*/ __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_251,"long")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_303=info->p;
                        sline_304=info->sline;
                        __dec_obj205=type_name_251;
                        type_name_251=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_251,info)) {
                            long__259=(_Bool)1;
                        }
                        else {
                            long__259=(_Bool)1;
                            __dec_obj206=type_name_251;
                            type_name_251=(char*)come_increment_ref_count(__builtin_string("int"));
                            /*G*/ __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_303;
                            info->sline=sline_304;
                        }
                    }
                    else {
                        long__259=(_Bool)1;
                        __dec_obj207=type_name_251;
                        type_name_251=(char*)come_increment_ref_count(__builtin_string("int"));
                        /*G*/ __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_251,info)) {
                    __dec_obj208=type_name_251;
                    type_name_251=(char*)come_increment_ref_count(__builtin_string("int"));
                    /*G*/ __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_299;
                    info->sline=sline_300;
                    break;
                }
            }
            else {
                __dec_obj209=type_name_251;
                type_name_251=(char*)come_increment_ref_count(__builtin_string("int"));
                /*G*/ __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_251,"signed")||string_operator_equals(type_name_251,"__signed__")) {
            unsigned__258=(_Bool)0;
            __dec_obj210=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_251,"register")) {
            register__257=(_Bool)1;
            __dec_obj211=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_251,"restrict")) {
            restrict__262=(_Bool)1;
            __dec_obj212=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_251,"_Addr")) {
            __dec_obj213=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_251,"__restrict")) {
            restrict__262=(_Bool)1;
            __dec_obj214=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_251,"tup")) {
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj215=type_name_251;
            type_name_251=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_multiple_type=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_251,"short")) {
            short__261=(_Bool)0;
            if(            *info->p==58) {
                break;
            }
            else if(            xisalnum(*info->p)) {
                p_305=info->p;
                sline_306=info->sline;
                __dec_obj216=type_name_251;
                type_name_251=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_251,"int")) {
                    short__261=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_251,"short")) {
                    short__261=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_251,info)) {
                    info->p=p_305;
                    info->sline=sline_306;
                }
                else {
                    __dec_obj217=type_name_251;
                    type_name_251=(char*)come_increment_ref_count(__builtin_string("short"));
                    /*G*/ __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_305;
                    info->sline=sline_306;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    pointer_num_307=0;
    heap_308=(_Bool)0;
    channel_309=(_Bool)0;
    while(1) {
        if(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_307++;
        }
        else if(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_308=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_309=(_Bool)1;
        }
        else {
            break;
        }
    }
    tuple_name_310=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&string_operator_not_equals(type_name_251,"int")) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj218=tuple_name_310;
        tuple_name_310=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    lambda_flag_311=(_Bool)0;
    {
        pX_312=info->p;
        slineX_313=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value408=parse_word(info)));
            /* U11 */__right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            *info->p==40&&info->in_typedef) {
                lambda_flag_311=(_Bool)1;
            }
        }
        info->p=pX_312;
        info->sline=slineX_313;
    }
    function_pointer_flag_316=(_Bool)0;
    {
        p_317=info->p;
        sline_318=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94) {
                function_pointer_flag_316=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                word_319=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40) {
                        function_pointer_flag_316=(_Bool)1;
                    }
                }
                /* U13 */word_319 = come_decrement_ref_count2(word_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_317;
        info->sline=sline_318;
    }
    var_name_between_brace_320=(_Bool)0;
    {
        p_321=info->p;
        sline_322=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_323=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_323,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        var_name_between_brace_320=(_Bool)1;
                    }
                }
                /* U13 */word_323 = come_decrement_ref_count2(word_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_321;
        info->sline=sline_322;
    }
    if(    anonymous_type_272&&*info->p==123) {
        static int anonymous_num_324=0;
        if(        struct__263) {
            if(            string_operator_equals(type_name_251,"")) {
                __dec_obj219=type_name_251;
                type_name_251=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_324));
                /*G*/ __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_325=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_251),info));
            Value_326=node_compile(node_325,info);
            if(            !Value_326) {
                err_msg(info,"parse_struct is failed");
                __result161__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value414=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2065, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */tuple_name_310 = come_decrement_ref_count2(tuple_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */var_name_315 = come_decrement_ref_count2(var_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value414,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result161__;
            }
            else {
            }
            pointer_num_327=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                pointer_num_327++;
            }
            __dec_obj220=type_314;
            type_314=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2075, "sType")),type_name_251,(_Bool)0,info));
            come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_314->mPointerNum=pointer_num_327;
            if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        enum__265) {
            if(            string_operator_equals(type_name_251,"")) {
                __dec_obj221=type_name_251;
                type_name_251=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_324));
                /*G*/ __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_328=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_251),info));
            if(            !info->no_output_err) {
                Value_329=node_compile(node_328,info);
                if(                !Value_329) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result162__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value420=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2089, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /* U13 */tuple_name_310 = come_decrement_ref_count2(tuple_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */var_name_315 = come_decrement_ref_count2(var_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*g*/come_call_finalizer3(__right_value420,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result162__;
                }
                else {
                }
            }
            __dec_obj222=type_314;
            type_314=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2093, "sType")),type_name_251,(_Bool)0,info));
            come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        union__264) {
            if(            string_operator_equals(type_name_251,"")) {
                __dec_obj223=type_name_251;
                type_name_251=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_324));
                /*G*/ __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_330=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_251),info));
            Value_331=node_compile(node_330,info);
            if(            !Value_331) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result163__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value426=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2105, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_330) { node_330 = come_decrement_ref_count2(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */tuple_name_310 = come_decrement_ref_count2(tuple_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */var_name_315 = come_decrement_ref_count2(var_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value426,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result163__;
            }
            else {
            }
            pointer_num_332=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                pointer_num_332++;
            }
            __dec_obj224=type_314;
            type_314=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2116, "sType")),type_name_251,(_Bool)0,info));
            come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_314->mPointerNum=pointer_num_332;
            if(node_330) { node_330 = come_decrement_ref_count2(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"unexpected { character");
            __result164__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value430=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2122, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /* U13 */tuple_name_310 = come_decrement_ref_count2(tuple_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_315 = come_decrement_ref_count2(var_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value430,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result164__;
        }
        if(        parse_variable_name) {
            parse_sharp_v5(info);
            if(            var_name_between_brace_320&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj225=var_name_315;
                var_name_315=(char*)come_increment_ref_count(__builtin_string(""));
                /*G*/ __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_273) {
                static int num_anonymous_var_name_333=0;
                num_anonymous_var_name_333++;
                __dec_obj226=var_name_315;
                var_name_315=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_333));
                /*G*/ __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj227=var_name_315;
                var_name_315=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_334=0;
                num_anonymous_var_name_334++;
                __dec_obj228=var_name_315;
                var_name_315=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_334));
                /*G*/ __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_320&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_335=info->no_comma;
                info->no_comma=(_Bool)1;
                node_336=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_335;
                __dec_obj229=type_314->mSizeNum;
                type_314->mSizeNum=(struct sNode*)come_increment_ref_count(node_336);
                /* U1 */ if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_336) { node_336 = come_decrement_ref_count2(node_336, ((struct sNode*)node_336)->finalize, ((struct sNode*)node_336)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    else if(    lambda_flag_311) {
        if(        map$2charphsTypephp_operator_load_element(info->types,type_name_251)) {
            __dec_obj230=result_type_337;
            result_type_337=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_251)));
            come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
            result_type_337->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_337->mClass->mName), "05type.c", 2171, 5));
        }
        else if(        list$1charph_contained(info->generics_type_names,type_name_251)) {
            for(            i_338=0;            i_338<list$1charph_length(info->generics_type_names);            i_338++            ){
                if(                string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_338), "05type.c", 2175, 6)),type_name_251)) {
                    __dec_obj231=result_type_337;
                    result_type_337=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2176, "sType")),((char*)(__right_value438=xsprintf("generics_type%d",i_338))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U11 */__right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charph_contained(info->method_generics_type_names,type_name_251)) {
            for(            i_342=0;            i_342<list$1charph_length(info->method_generics_type_names);            i_342++            ){
                if(                string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_342), "05type.c", 2182, 7)),type_name_251)) {
                    __dec_obj232=result_type_337;
                    result_type_337=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2183, "sType")),((char*)(__right_value441=xsprintf("mgenerics_type%d",i_342))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U11 */__right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj233=result_type_337;
            result_type_337=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2188, "sType")),type_name_251,(_Bool)0,info));
            come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_337->mConstant=result_type_337->mConstant||constant_254;
        __dec_obj234=result_type_337->mAlignas;
        result_type_337->mAlignas=(struct sNode*)come_increment_ref_count(alignas__271);
        /* U1 */ if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_337->mRegister=register__257;
        result_type_337->mUnsigned=result_type_337->mUnsigned||unsigned__258;
        result_type_337->mVolatile=volatile__256;
        result_type_337->mRecord=result_type_337->mStatic||static__255;
        result_type_337->mUniq=result_type_337->mUniq||uniq__270;
        result_type_337->mStatic=result_type_337->mRecord||record__252;
        result_type_337->mException=result_type_337->mException||exception__253;
        result_type_337->mExtern=result_type_337->mExtern||extern__267;
        result_type_337->mInline=result_type_337->mInline||inline__268;
        result_type_337->mRestrict=result_type_337->mRestrict||restrict__262;
        result_type_337->mLongLong=result_type_337->mLongLong||long_long_260;
        result_type_337->mLong=result_type_337->mLong||long__259;
        result_type_337->mShort=result_type_337->mShort||short__261;
        result_type_337->mPointerNum=pointer_num_307;
        result_type_337->mHeap=result_type_337->mHeap||heap_308;
        result_type_337->mChannel=result_type_337->mChannel||channel_309;
        __dec_obj235=var_name_315;
        var_name_315=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
        multiple_assign_var5=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value446=parse_params(info,(_Bool)0)));
        param_types_343=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var5->v1);
        param_names_344=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v2);
        param_default_parametors_345=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v3);
        var_args_346=multiple_assign_var5->v4;
        /*g*/come_call_finalizer3(__right_value446,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj236=type_314;
        type_314=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2214, "sType")),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj238=type_314->mResultType;
        type_314->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2216, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_337)));
        come_call_finalizer3(__dec_obj238,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj239=type_314->mParamTypes;
        type_314->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_343);
        come_call_finalizer3(__dec_obj239,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj240=type_314->mParamNames;
        type_314->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_344);
        come_call_finalizer3(__dec_obj240,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_314->mVarArgs=var_args_346;
        type_314->mExtern=extern__267;
        /*i*/come_call_finalizer3(result_type_337,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_343,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_344,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_345,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    function_pointer_flag_316) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_347=0;
        while(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            function_pointer_num_347++;
        }
        skip_pointer_attribute(info);
        if(        map$2charphsTypephp_operator_load_element(info->types,type_name_251)) {
            __dec_obj241=result_type_348;
            result_type_348=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_251)));
            come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
            result_type_348->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_348->mClass->mName), "05type.c", 2240, 8));
        }
        else if(        list$1charph_contained(info->generics_type_names,type_name_251)) {
            for(            i_349=0;            i_349<list$1charph_length(info->generics_type_names);            i_349++            ){
                if(                string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_349), "05type.c", 2245, 9)),type_name_251)) {
                    __dec_obj242=result_type_348;
                    result_type_348=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2246, "sType")),((char*)(__right_value453=xsprintf("generics_type%d",i_349))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U11 */__right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charph_contained(info->method_generics_type_names,type_name_251)) {
            for(            i_350=0;            i_350<list$1charph_length(info->method_generics_type_names);            i_350++            ){
                if(                string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_350), "05type.c", 2252, 10)),type_name_251)) {
                    __dec_obj243=result_type_348;
                    result_type_348=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2253, "sType")),((char*)(__right_value456=xsprintf("mgenerics_type%d",i_350))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U11 */__right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj244=result_type_348;
            result_type_348=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2258, "sType")),type_name_251,(_Bool)0,info));
            come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_348->mConstant=result_type_348->mConstant||constant_254;
        __dec_obj245=result_type_348->mAlignas;
        result_type_348->mAlignas=(struct sNode*)come_increment_ref_count(alignas__271);
        /* U1 */ if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_348->mRegister=register__257;
        result_type_348->mUnsigned=result_type_348->mUnsigned||unsigned__258;
        result_type_348->mVolatile=volatile__256;
        result_type_348->mStatic=result_type_348->mStatic||static__255;
        result_type_348->mUniq=result_type_348->mUniq||uniq__270;
        result_type_348->mRecord=result_type_348->mRecord||record__252;
        result_type_348->mException=result_type_348->mException||exception__253;
        result_type_348->mExtern=result_type_348->mExtern||extern__267;
        result_type_348->mInline=result_type_348->mInline||inline__268;
        result_type_348->mRestrict=result_type_348->mRestrict||restrict__262;
        result_type_348->mLongLong=result_type_348->mLongLong||long_long_260;
        result_type_348->mLong=result_type_348->mLong||long__259;
        result_type_348->mShort=result_type_348->mShort||short__261;
        result_type_348->mPointerNum+=pointer_num_307;
        result_type_348->mHeap=result_type_348->mHeap||heap_308;
        result_type_348->mChannel=result_type_348->mChannel||channel_309;
        if(        xisalnum(*info->p)||*info->p==95) {
            __dec_obj246=var_name_315;
            var_name_315=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            *info->p==40) {
                __result168__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value462=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2283, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(result_type_348),(char*)come_increment_ref_count(var_name_315),(_Bool)0)));
                /*i*/come_call_finalizer3(result_type_348,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */tuple_name_310 = come_decrement_ref_count2(tuple_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */var_name_315 = come_decrement_ref_count2(var_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value462,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result168__;
            }
        }
        else {
            static int num_anonymous_var_name_351=0;
            num_anonymous_var_name_351++;
            __dec_obj247=var_name_315;
            var_name_315=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_351));
            /*G*/ __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        function_pointer_array_352=(_Bool)0;
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_352=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var6=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value464=parse_params(info,(_Bool)0)));
        param_types_353=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var6->v1);
        param_names_354=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v2);
        param_default_parametors_355=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v3);
        var_args_356=multiple_assign_var6->v4;
        /*g*/come_call_finalizer3(__right_value464,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj248=type_314;
        type_314=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2305, "sType")),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj249=type_314->mResultType;
        type_314->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2307, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(sType_clone(result_type_348))));
        come_call_finalizer3(__dec_obj249,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj250=type_314->mParamTypes;
        type_314->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_353);
        come_call_finalizer3(__dec_obj250,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj251=type_314->mParamNames;
        type_314->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_354);
        come_call_finalizer3(__dec_obj251,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_314->mVarArgs=var_args_356;
        type_314->mExtern=extern__267;
        if(        function_pointer_array_352) {
            type_314->mLambdaArray=(_Bool)1;
        }
        type_314->mFunctionPointerNum=function_pointer_num_347;
        /*i*/come_call_finalizer3(result_type_348,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_353,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_354,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_355,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(type_name_251,"__typeof__")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_357=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_358=node_compile(exp_357,info);
        if(        !Value_358) {
            err_msg(info,"invalid __typeof__ expression");
            __result170__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypepcharphbool*)(__right_value472=tuple3$3sTypepcharphbool_initialize((struct tuple3$3sTypepcharphbool*)come_increment_ref_count((struct tuple3$3sTypepcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypepcharphbool)*(1), "05type.c", 2328, "struct tuple3$3sTypepcharphbool")),(struct sType*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            if(exp_357) { exp_357 = come_decrement_ref_count2(exp_357, ((struct sNode*)exp_357)->finalize, ((struct sNode*)exp_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /* U13 */tuple_name_310 = come_decrement_ref_count2(tuple_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_315 = come_decrement_ref_count2(var_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value472,tuple3$3sTypepcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result170__;
        }
        else {
        }
        come_value_359=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj254=type_314;
        type_314=(struct sType*)come_increment_ref_count(sType_clone(come_value_359->type));
        come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        parse_variable_name) {
            parse_sharp_v5(info);
            if(            var_name_between_brace_320&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj255=var_name_315;
                var_name_315=(char*)come_increment_ref_count(__builtin_string(""));
                /*G*/ __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_273) {
                static int num_anonymous_var_name_360=0;
                num_anonymous_var_name_360++;
                __dec_obj256=var_name_315;
                var_name_315=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_360));
                /*G*/ __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj257=var_name_315;
                var_name_315=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_361=0;
                num_anonymous_var_name_361++;
                __dec_obj258=var_name_315;
                var_name_315=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_361));
                /*G*/ __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_320&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_362=info->no_comma;
                info->no_comma=(_Bool)1;
                node_363=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_362;
                __dec_obj259=type_314->mSizeNum;
                type_314->mSizeNum=(struct sNode*)come_increment_ref_count(node_363);
                /* U1 */ if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_363) { node_363 = come_decrement_ref_count2(node_363, ((struct sNode*)node_363)->finalize, ((struct sNode*)node_363)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        if(exp_357) { exp_357 = come_decrement_ref_count2(exp_357, ((struct sNode*)exp_357)->finalize, ((struct sNode*)exp_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_359,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(        map$2charphsTypephp_operator_load_element(info->types,type_name_251)) {
            __dec_obj263=type_314;
            type_314=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_251)));
            come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_314->mTypedefOriginalPointerNum=type_314->mPointerNum;
            type_314->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,type_314->mClass->mName), "05type.c", 2383, 11));
            __dec_obj264=type_314->mOriginalTypeName;
            type_314->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_251));
            /*G*/ __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
            type_314->mOriginalTypeNamePointerNum=pointer_num_307;
            type_314->mOriginalTypeNameHeap=heap_308;
            type_314->mConstant=type_314->mConstant||constant_254;
            __dec_obj265=type_314->mAlignas;
            type_314->mAlignas=(struct sNode*)come_increment_ref_count(alignas__271);
            /* U1 */ if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); };
            type_314->mRegister=register__257;
            type_314->mUnsigned=type_314->mUnsigned||unsigned__258;
            type_314->mVolatile=volatile__256;
            type_314->mStatic=type_314->mStatic||static__255;
            type_314->mUniq=type_314->mUniq||uniq__270;
            type_314->mRecord=type_314->mRecord||record__252;
            type_314->mException=type_314->mException||exception__253;
            type_314->mExtern=type_314->mExtern||extern__267;
            type_314->mInline=type_314->mInline||inline__268;
            type_314->mRestrict=type_314->mRestrict||restrict__262;
            type_314->mLongLong=type_314->mLongLong||long_long_260;
            type_314->mLong=type_314->mLong||long__259;
            type_314->mShort=type_314->mShort||short__261;
            type_314->mPointerNum+=pointer_num_307;
            type_314->mHeap=type_314->mHeap||heap_308;
            type_314->mChannel=type_314->mChannel||channel_309;
            __dec_obj266=type_314->mTupleName;
            type_314->mTupleName=(char*)come_increment_ref_count(tuple_name_310);
            /*G*/ __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charph_contained(info->generics_type_names,type_name_251)) {
            for(            i_364=0;            i_364<list$1charph_length(info->generics_type_names);            i_364++            ){
                if(                string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_364), "05type.c", 2410, 12)),type_name_251)) {
                    __dec_obj267=type_314;
                    type_314=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2411, "sType")),((char*)(__right_value483=xsprintf("generics_type%d",i_364))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj267,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U11 */__right_value483 = come_decrement_ref_count2(__right_value483, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_314->mConstant=type_314->mConstant||constant_254;
            __dec_obj268=type_314->mAlignas;
            type_314->mAlignas=(struct sNode*)come_increment_ref_count(alignas__271);
            /* U1 */ if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); };
            type_314->mRegister=register__257;
            type_314->mUnsigned=type_314->mUnsigned||unsigned__258;
            type_314->mVolatile=volatile__256;
            type_314->mStatic=type_314->mStatic||static__255;
            type_314->mUniq=type_314->mUniq||uniq__270;
            type_314->mRecord=type_314->mRecord||record__252;
            type_314->mException=type_314->mException||exception__253;
            type_314->mExtern=type_314->mExtern||extern__267;
            type_314->mInline=type_314->mInline||inline__268;
            type_314->mRestrict=type_314->mRestrict||restrict__262;
            type_314->mLongLong=type_314->mLongLong||long_long_260;
            type_314->mLong=type_314->mLong||long__259;
            type_314->mShort=type_314->mShort||short__261;
            type_314->mPointerNum+=pointer_num_307;
            type_314->mHeap=type_314->mHeap||heap_308;
            type_314->mChannel=type_314->mChannel||channel_309;
            __dec_obj269=type_314->mTupleName;
            type_314->mTupleName=(char*)come_increment_ref_count(tuple_name_310);
            /*G*/ __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charph_contained(info->method_generics_type_names,type_name_251)) {
            for(            i_365=0;            i_365<list$1charph_length(info->method_generics_type_names);            i_365++            ){
                if(                string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_365), "05type.c", 2437, 13)),type_name_251)) {
                    __dec_obj270=type_314;
                    type_314=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2438, "sType")),((char*)(__right_value486=xsprintf("mgenerics_type%d",i_365))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj270,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U11 */__right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_314->mConstant=type_314->mConstant||constant_254;
            __dec_obj271=type_314->mAlignas;
            type_314->mAlignas=(struct sNode*)come_increment_ref_count(alignas__271);
            /* U1 */ if(__dec_obj271) { __dec_obj271 = come_decrement_ref_count2(__dec_obj271, ((struct sNode*)__dec_obj271)->finalize, ((struct sNode*)__dec_obj271)->_protocol_obj, 0,0,0, (void*)0); };
            type_314->mRegister=register__257;
            type_314->mUnsigned=type_314->mUnsigned||unsigned__258;
            type_314->mVolatile=volatile__256;
            type_314->mStatic=type_314->mStatic||static__255;
            type_314->mUniq=type_314->mUniq||uniq__270;
            type_314->mRecord=type_314->mRecord||record__252;
            type_314->mException=type_314->mException||exception__253;
            type_314->mExtern=type_314->mExtern||extern__267;
            type_314->mInline=type_314->mInline||inline__268;
            type_314->mRestrict=type_314->mRestrict||restrict__262;
            type_314->mLongLong=type_314->mLongLong||long_long_260;
            type_314->mLong=type_314->mLong||long__259;
            type_314->mShort=type_314->mShort||short__261;
            type_314->mPointerNum+=pointer_num_307;
            type_314->mHeap=type_314->mHeap||heap_308;
            type_314->mChannel=type_314->mChannel||channel_309;
            __dec_obj272=type_314->mTupleName;
            type_314->mTupleName=(char*)come_increment_ref_count(tuple_name_310);
            /*G*/ __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_251)==((void*)0)) {
                __result171__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value489=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2468, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */tuple_name_310 = come_decrement_ref_count2(tuple_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */var_name_315 = come_decrement_ref_count2(var_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value489,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result171__;
            }
            __dec_obj273=type_314;
            type_314=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2471, "sType")),type_name_251,(_Bool)0,info));
            come_call_finalizer3(__dec_obj273,sType_finalize, 0, 0, 0, 0, (void*)0);
            while((_Bool)1) {
                multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value492=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_366=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                var_name_367=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                err_368=multiple_assign_var7->v3;
                /*g*/come_call_finalizer3(__right_value492,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_368) {
                    __result172__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value494=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2477, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    /*i*/come_call_finalizer3(generics_type_366,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */var_name_367 = come_decrement_ref_count2(var_name_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /* U13 */tuple_name_310 = come_decrement_ref_count2(tuple_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */var_name_315 = come_decrement_ref_count2(var_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*g*/come_call_finalizer3(__right_value494,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result172__;
                }
                list$1sTypeph_push_back(type_314->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_366));
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    /*i*/come_call_finalizer3(generics_type_366,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */var_name_367 = come_decrement_ref_count2(var_name_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid generics type\n");
                    __result173__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value496=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2494, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    /*i*/come_call_finalizer3(generics_type_366,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */var_name_367 = come_decrement_ref_count2(var_name_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /* U13 */tuple_name_310 = come_decrement_ref_count2(tuple_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */var_name_315 = come_decrement_ref_count2(var_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*g*/come_call_finalizer3(__right_value496,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result173__;
                }
                /*i*/come_call_finalizer3(generics_type_366,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */var_name_367 = come_decrement_ref_count2(var_name_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            is_contained_generics_class(type_314,info)) {
                __dec_obj274=type_314;
                type_314=(struct sType*)come_increment_ref_count(solve_generics(type_314,info->generics_type,info));
                come_call_finalizer3(__dec_obj274,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_314,type_314,info)) {
                    new_name_369=(char*)come_increment_ref_count(create_generics_name(type_314,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_369);
                    exit(7);
                    /* U13 */new_name_369 = come_decrement_ref_count2(new_name_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_314->mConstant=type_314->mConstant||constant_254;
            __dec_obj275=type_314->mAlignas;
            type_314->mAlignas=(struct sNode*)come_increment_ref_count(alignas__271);
            /* U1 */ if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); };
            type_314->mRegister=register__257;
            type_314->mUnsigned=type_314->mUnsigned||unsigned__258;
            type_314->mVolatile=volatile__256;
            type_314->mStatic=type_314->mStatic||static__255;
            type_314->mUniq=type_314->mUniq||uniq__270;
            type_314->mRecord=type_314->mRecord||record__252;
            type_314->mException=type_314->mException||exception__253;
            type_314->mExtern=type_314->mExtern||extern__267;
            type_314->mInline=type_314->mInline||inline__268;
            type_314->mRestrict=type_314->mRestrict||restrict__262;
            type_314->mLongLong=type_314->mLongLong||long_long_260;
            type_314->mLong=type_314->mLong||long__259;
            type_314->mShort=type_314->mShort||short__261;
            type_314->mPointerNum+=pointer_num_307;
            type_314->mHeap=type_314->mHeap||heap_308;
            type_314->mChannel=type_314->mChannel||channel_309;
            __dec_obj276=type_314->mTupleName;
            type_314->mTupleName=(char*)come_increment_ref_count(tuple_name_310);
            /*G*/ __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(            struct__263) {
                klass_370=map$2charphsClassphp_operator_load_element(info->classes,type_name_251);
                if(                klass_370==((void*)0)&&*info->p!=60) {
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_251),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2535, "sClass")),type_name_251,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            if(            union__264) {
                klass_412=map$2charphsClassphp_operator_load_element(info->classes,type_name_251);
                if(                klass_412==((void*)0)&&*info->p!=60) {
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_251),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2542, "sClass")),type_name_251,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            __dec_obj277=type_314;
            type_314=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2546, "sType")),type_name_251,(_Bool)0,info));
            come_call_finalizer3(__dec_obj277,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_314->mConstant=type_314->mConstant||constant_254;
            __dec_obj278=type_314->mAlignas;
            type_314->mAlignas=(struct sNode*)come_increment_ref_count(alignas__271);
            /* U1 */ if(__dec_obj278) { __dec_obj278 = come_decrement_ref_count2(__dec_obj278, ((struct sNode*)__dec_obj278)->finalize, ((struct sNode*)__dec_obj278)->_protocol_obj, 0,0,0, (void*)0); };
            type_314->mRegister=register__257;
            type_314->mUnsigned=type_314->mUnsigned||unsigned__258;
            type_314->mVolatile=volatile__256;
            type_314->mStatic=type_314->mStatic||static__255;
            type_314->mUniq=type_314->mUniq||uniq__270;
            type_314->mRecord=type_314->mRecord||record__252;
            type_314->mException=type_314->mException||exception__253;
            type_314->mExtern=type_314->mExtern||extern__267;
            type_314->mInline=type_314->mInline||inline__268;
            type_314->mRestrict=type_314->mRestrict||restrict__262;
            type_314->mLongLong=type_314->mLongLong||long_long_260;
            type_314->mLong=type_314->mLong||long__259;
            type_314->mShort=type_314->mShort||short__261;
            type_314->mPointerNum+=pointer_num_307;
            type_314->mHeap=type_314->mHeap||heap_308;
            type_314->mChannel=type_314->mChannel||channel_309;
            __dec_obj279=type_314->mTupleName;
            type_314->mTupleName=(char*)come_increment_ref_count(tuple_name_310);
            /*G*/ __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_314->mPointerNum++;
                if(                type_314->mNoSolvedGenericsType->v1) {
                    type_314->mNoSolvedGenericsType->v1->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_314->mHeap=(_Bool)1;
                if(                type_314->mNoSolvedGenericsType->v1) {
                    type_314->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==38) {
                info->p++;
                skip_spaces_and_lf(info);
                type_314->mNoHeap=(_Bool)1;
                if(                type_314->mNoSolvedGenericsType->v1) {
                    type_314->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63) {
                info->p++;
                if(                *info->p==63) {
                    info->p++;
                    type_314->mGuardValue=(_Bool)1;
                }
                else {
                    type_314->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_314->mNoCallingDestructor=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_314->mPointerNum++;
                if(                type_314->mNoSolvedGenericsType->v1) {
                    type_314->mNoSolvedGenericsType->v1->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_314->mHeap=(_Bool)1;
                if(                type_314->mNoSolvedGenericsType->v1) {
                    type_314->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                }
            }
            else if(            gComePthread&&*info->p==64) {
                info->p++;
                skip_spaces_and_lf(info);
                type_314->mChannel=(_Bool)1;
                if(                type_314->mNoSolvedGenericsType->v1) {
                    type_314->mNoSolvedGenericsType->v1->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44) {
            types_413=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 2665, "list$1sTypeph"))));
            list$1sTypeph_push_back(types_413,(struct sType*)come_increment_ref_count(sType_clone(type_314)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value511=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_414=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_415=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_416=multiple_assign_var8->v3;
                /*g*/come_call_finalizer3(__right_value511,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_416) {
                    __result195__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value513=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2676, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    /*i*/come_call_finalizer3(type2_414,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */name_415 = come_decrement_ref_count2(name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(types_413,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /* U13 */tuple_name_310 = come_decrement_ref_count2(tuple_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */var_name_315 = come_decrement_ref_count2(var_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*g*/come_call_finalizer3(__right_value513,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result195__;
                }
                list$1sTypeph_push_back(types_413,(struct sType*)come_increment_ref_count(sType_clone(type2_414)));
                /*i*/come_call_finalizer3(type2_414,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name_415 = come_decrement_ref_count2(name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_417=list$1sTypeph_length(types_413);
            __dec_obj280=type_314;
            type_314=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2689, "sType")),((char*)(__right_value516=xsprintf("tuple%d",num_tuples_417))),(_Bool)0,info));
            come_call_finalizer3(__dec_obj280,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U11 */__right_value516 = come_decrement_ref_count2(__right_value516, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            type_314->mPointerNum++;
            type_314->mHeap=(_Bool)1;
            for(            o2_saved_418=(struct list$1sTypeph*)come_increment_ref_count((types_413)),it_419=list$1sTypeph_begin((o2_saved_418));            !list$1sTypeph_end((o2_saved_418));            it_419=list$1sTypeph_next((o2_saved_418))            ){
                list$1sTypeph_push_back(type_314->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_419)));
            }
            /*i*/come_call_finalizer3(o2_saved_418,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            if(            is_contained_generics_class(type_314,info)) {
                __dec_obj281=type_314;
                type_314=(struct sType*)come_increment_ref_count(solve_generics(type_314,info->generics_type,info));
                come_call_finalizer3(__dec_obj281,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_314,type_314,info)) {
                    new_name_420=(char*)come_increment_ref_count(create_generics_name(type_314,info));
                    printf("output generics is failed(%s)\n",new_name_420);
                    exit(9);
                    /* U13 */new_name_420 = come_decrement_ref_count2(new_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_314->mMultipleTypes=(_Bool)1;
            /*i*/come_call_finalizer3(types_413,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        parse_variable_name) {
            parse_sharp_v5(info);
            if(            var_name_between_brace_320&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj282=var_name_315;
                var_name_315=(char*)come_increment_ref_count(__builtin_string(""));
                /*G*/ __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_273) {
                static int num_anonymous_var_name_421=0;
                num_anonymous_var_name_421++;
                __dec_obj283=var_name_315;
                var_name_315=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_421));
                /*G*/ __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj284=var_name_315;
                var_name_315=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_422=0;
                num_anonymous_var_name_422++;
                __dec_obj285=var_name_315;
                var_name_315=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_422));
                /*G*/ __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_320&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_423=info->no_comma;
                info->no_comma=(_Bool)1;
                node_424=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_423;
                __dec_obj286=type_314->mSizeNum;
                type_314->mSizeNum=(struct sNode*)come_increment_ref_count(node_424);
                /* U1 */ if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_424) { node_424 = come_decrement_ref_count2(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    parse_sharp_v5(info);
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            type_314->mArrayPointerType=(_Bool)1;
            type_314->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_425=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodeph_push_back(type_314->mArrayNum,(struct sNode*)come_increment_ref_count(node_425));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_425) { node_425 = come_decrement_ref_count2(node_425, ((struct sNode*)node_425)->finalize, ((struct sNode*)node_425)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    asm_name_426=(char*)come_increment_ref_count(parse_attribute(info));
    __dec_obj287=type_314->mAsmName;
    type_314->mAsmName=(char*)come_increment_ref_count(asm_name_426);
    /*G*/ __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    if(    type_314->mChannel) {
        type_before_427=(struct sType*)come_increment_ref_count(sType_clone(type_314));
        __dec_obj288=type_314;
        type_314=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2787, "sType")),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj288,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj289=type_314->mArrayNum;
        type_314->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count((__list_values1___428[0]=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value531=create_int_node(2,info)))),
list$1sNodeph_initialize_with_values((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05type.c", 2788, "struct list$1sNodeph")),1,__list_values1___428)));
        come_call_finalizer3(__dec_obj289,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        if(__right_value531) { __right_value531 = come_decrement_ref_count2(__right_value531, ((struct sNode*)__right_value531)->finalize, ((struct sNode*)__right_value531)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj290=type_314->mChannelType;
        type_314->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2789, "tuple1$1sTypeph"));
        come_call_finalizer3(__dec_obj290,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj291=type_314->mChannelType->v1;
        type_314->mChannelType->v1=(struct sType*)come_increment_ref_count(type_before_427);
        come_call_finalizer3(__dec_obj291,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_314->mChannel=(_Bool)1;
        /*i*/come_call_finalizer3(type_before_427,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_314->mException) {
        type2_430=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2794, "sType")),"tuple2",(_Bool)0,info));
        list$1sTypephp_operator_store_element(type2_430->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2795, "sType")),"generics_type0",(_Bool)0,info)));
        list$1sTypephp_operator_store_element(type2_430->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2796, "sType")),"generics_type1",(_Bool)0,info)));
        type2_430->mPointerNum=1;
        type2_430->mHeap=(_Bool)1;
        type3_436=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2800, "sType")),"tuple2",(_Bool)0,info));
        list$1sTypephp_operator_store_element(type3_436->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_314));
        list$1sTypephp_operator_store_element(type3_436->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2802, "sType")),"char*",(_Bool)0,info)));
        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type3_436->mGenericsTypes,1), "05type.c", 2803, 14))->mHeap=(_Bool)1;
        type4_437=(struct sType*)come_increment_ref_count(solve_generics(type2_430,type3_436,info));
        type4_437->mException=(_Bool)1;
        __result200__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value547=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2809, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type4_437),(char*)come_increment_ref_count(var_name_315),(_Bool)1)));
        /*i*/come_call_finalizer3(type2_430,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type3_436,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type4_437,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /* U13 */tuple_name_310 = come_decrement_ref_count2(tuple_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_315 = come_decrement_ref_count2(var_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */asm_name_426 = come_decrement_ref_count2(asm_name_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value547,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result200__;
        /*i*/come_call_finalizer3(type2_430,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type3_436,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type4_437,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result201__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value549=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2812, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type_314),(char*)come_increment_ref_count(var_name_315),(_Bool)1)));
    /* U13 */type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__271) { alignas__271 = come_decrement_ref_count2(alignas__271, ((struct sNode*)alignas__271)->finalize, ((struct sNode*)alignas__271)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */tuple_name_310 = come_decrement_ref_count2(tuple_name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_315 = come_decrement_ref_count2(var_name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */asm_name_426 = come_decrement_ref_count2(asm_name_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value549,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result201__;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_339;
int i_340;
char* __result165__;
char* default_value_341;
char* __result166__;
default_value_341 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_339=self->head;
    i_340=0;
    while(it_339!=((void*)0)) {
        if(        position==i_340) {
            __result165__ = gComeFunResultObject = __result_obj__ = it_339->item;
            gComeFunResultObject = (void*)0;
            return __result165__;
        }
        it_339=it_339->next;
        i_340++;
    }
    memset(&default_value_341,0,sizeof(char*));
    __result166__ = gComeFunResultObject = __result_obj__ = default_value_341;
    /* U13 */default_value_341 = come_decrement_ref_count2(default_value_341, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result166__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj237;
struct tuple1$1sTypeph* __result167__;
    __dec_obj237=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result167__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result167__;
}

static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
char* __dec_obj252;
struct tuple3$3sTypepcharphbool* __result169__;
    self->v1=v1;
    __dec_obj252=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result169__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple3$3sTypepcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self){
char* __dec_obj253;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj253=self->v2;
            /*G*/ __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj260;
struct sType* __dec_obj261;
char* __dec_obj262;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj260=self->c_value;
            /*G*/ __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj261=self->type;
            come_call_finalizer3(__dec_obj261,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj262=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_388;
unsigned int it_389;
_Bool same_key_exist_406;
char* it2_409;
struct map$2charphsClassph* __result194__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_388=string_get_hash_key(key)%self->size;
    it_389=hash_388;
    while((_Bool)1) {
        if(        self->item_existance[it_389]) {
            if(            string_equals(self->keys[it_389],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_389]);
                    /* U13 */self->keys[it_389] = come_decrement_ref_count2(self->keys[it_389], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_389]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_389]);
                    self->keys[it_389]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_389],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_389]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_389]=item;
                }
                break;
            }
            it_389++;
            if(            it_389>=self->size) {
                it_389=0;
            }
            else if(            it_389==hash_388) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_389]=(_Bool)1;
            if(            1) {
                self->keys[it_389]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_389]=key;
            }
            if(            1) {
                self->items[it_389]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_389]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_406=(_Bool)0;
    for(    it2_409=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_409=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_409,key)) {
            same_key_exist_406=(_Bool)1;
        }
    }
    if(    !same_key_exist_406) {
        list$1charp_push_back(self->key_list,key);
    }
    __result194__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result194__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_371;
void* __right_value499 = (void*)0;
char** keys_372;
void* __right_value500 = (void*)0;
struct sClass** items_373;
void* __right_value501 = (void*)0;
_Bool* item_existance_374;
int len_375;
char* it_378;
struct sClass* default_value_381;
struct sClass* it2_382;
unsigned int hash_385;
int n_386;
struct sClass* default_value_387;
default_value_381 = (void*)0;
default_value_387 = (void*)0;
    size_371=self->size*10;
    keys_372=(char**)come_increment_ref_count(((char**)(__right_value499=(char**)come_calloc(1, sizeof(char*)*(1*(size_371)), "/usr/local/include/comelang.h", 1624, "char*%"))));
    items_373=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value500=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_371)), "/usr/local/include/comelang.h", 1625, "sClass*%"))));
    item_existance_374=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value501=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_371)), "/usr/local/include/comelang.h", 1626, "bool"))));
    len_375=0;
    for(    it_378=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_378=map$2charphsClassph_next(self)    ){
        memset(&default_value_381,0,sizeof(struct sClass*));
        it2_382=map$2charphsClassph_at(self,it_378,default_value_381);
        hash_385=string_get_hash_key(it_378)%size_371;
        n_386=hash_385;
        while((_Bool)1) {
            if(            item_existance_374[n_386]) {
                n_386++;
                if(                n_386>=size_371) {
                    n_386=0;
                }
                else if(                n_386==hash_385) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_374[n_386]=(_Bool)1;
                keys_372[n_386]=it_378;
                items_373[n_386]=map$2charphsClassph_at(self,it_378,default_value_387);
                len_375++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_372;
    self->items=items_373;
    self->item_existance=item_existance_374;
    self->size=size_371;
    self->len=len_375;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_376;
char* __result174__;
char* __result175__;
char* result_377;
char* __result176__;
result_376 = (void*)0;
result_377 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_376,0,sizeof(char*));
        __result174__ = gComeFunResultObject = __result_obj__ = result_376;
        gComeFunResultObject = (void*)0;
        return __result174__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result175__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result175__;
    }
    memset(&result_377,0,sizeof(char*));
    __result176__ = gComeFunResultObject = __result_obj__ = result_377;
    gComeFunResultObject = (void*)0;
    return __result176__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_379;
char* __result177__;
char* __result178__;
char* result_380;
char* __result179__;
result_379 = (void*)0;
result_380 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_379,0,sizeof(char*));
        __result177__ = gComeFunResultObject = __result_obj__ = result_379;
        gComeFunResultObject = (void*)0;
        return __result177__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result178__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result178__;
    }
    memset(&result_380,0,sizeof(char*));
    __result179__ = gComeFunResultObject = __result_obj__ = result_380;
    gComeFunResultObject = (void*)0;
    return __result179__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_383;
unsigned int it_384;
struct sClass* __result180__;
struct sClass* __result181__;
struct sClass* __result182__;
struct sClass* __result183__;
    hash_383=string_get_hash_key(((char*)key))%self->size;
    it_384=hash_383;
    while((_Bool)1) {
        if(        self->item_existance[it_384]) {
            if(            string_equals(self->keys[it_384],key)) {
                __result180__ = gComeFunResultObject = __result_obj__ = self->items[it_384];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result180__;
            }
            it_384++;
            if(            it_384>=self->size) {
                it_384=0;
            }
            else if(            it_384==hash_383) {
                __result181__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result181__;
            }
        }
        else {
            __result182__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result182__;
        }
    }
    __result183__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_390;
struct list_item$1charp* it_391;
struct list$1charp* __result187__;
    it2_390=0;
    it_391=self->head;
    while(it_391!=((void*)0)) {
        if(        charp_equals(it_391->item,item)) {
            list$1charp_delete(self,it2_390,it2_390+1);
            break;
        }
        it2_390++;
        it_391=it_391->next;
    }
    __result187__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result187__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_392;
struct list$1charp* __result184__;
struct list_item$1charp* it_395;
int i_396;
struct list_item$1charp* prev_it_397;
struct list_item$1charp* it_398;
int i_399;
struct list_item$1charp* prev_it_400;
struct list_item$1charp* it_401;
struct list_item$1charp* head_prev_it_402;
struct list_item$1charp* tail_it_403;
int i_404;
struct list_item$1charp* prev_it_405;
struct list$1charp* __result186__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_392=tail;
        tail=head;
        head=tmp_392;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result184__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result184__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_395=self->head;
        i_396=0;
        while(it_395!=((void*)0)) {
            if(            i_396<tail) {
                prev_it_397=it_395;
                it_395=it_395->next;
                i_396++;
                /*i*/come_call_finalizer3(prev_it_397,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_396==tail) {
                self->head=it_395;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_395=it_395->next;
                i_396++;
            }
        }
    }
    else if(    tail==self->len) {
        it_398=self->head;
        i_399=0;
        while(it_398!=((void*)0)) {
            if(            i_399==head) {
                self->tail=it_398->prev;
                self->tail->next=((void*)0);
            }
            if(            i_399>=head) {
                prev_it_400=it_398;
                it_398=it_398->next;
                i_399++;
                /*i*/come_call_finalizer3(prev_it_400,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_398=it_398->next;
                i_399++;
            }
        }
    }
    else {
        it_401=self->head;
        head_prev_it_402=((void*)0);
        tail_it_403=((void*)0);
        i_404=0;
        while(it_401!=((void*)0)) {
            if(            i_404==head) {
                head_prev_it_402=it_401->prev;
            }
            if(            i_404==tail) {
                tail_it_403=it_401;
            }
            if(            i_404>=head&&i_404<tail) {
                prev_it_405=it_401;
                it_401=it_401->next;
                i_404++;
                /*i*/come_call_finalizer3(prev_it_405,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_401=it_401->next;
                i_404++;
            }
        }
        if(        head_prev_it_402!=((void*)0)) {
            head_prev_it_402->next=tail_it_403;
        }
        if(        tail_it_403!=((void*)0)) {
            tail_it_403->prev=head_prev_it_402;
        }
    }
    __result186__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_393;
struct list_item$1charp* prev_it_394;
struct list$1charp* __result185__;
    it_393=self->head;
    while(it_393!=((void*)0)) {
        prev_it_394=it_393;
        it_393=it_393->next;
        /*i*/come_call_finalizer3(prev_it_394,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result185__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result185__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_407;
char* __result188__;
char* __result189__;
char* result_408;
char* __result190__;
result_407 = (void*)0;
result_408 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_407,0,sizeof(char*));
        __result188__ = gComeFunResultObject = __result_obj__ = result_407;
        gComeFunResultObject = (void*)0;
        return __result188__;
    }
    self->it=self->head;
    if(    self->it) {
        __result189__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result189__;
    }
    memset(&result_408,0,sizeof(char*));
    __result190__ = gComeFunResultObject = __result_obj__ = result_408;
    gComeFunResultObject = (void*)0;
    return __result190__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_410;
char* __result191__;
char* __result192__;
char* result_411;
char* __result193__;
result_410 = (void*)0;
result_411 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_410,0,sizeof(char*));
        __result191__ = gComeFunResultObject = __result_obj__ = result_410;
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result192__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result192__;
    }
    memset(&result_411,0,sizeof(char*));
    __result193__ = gComeFunResultObject = __result_obj__ = result_411;
    gComeFunResultObject = (void*)0;
    return __result193__;
}

static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values){
void* __result_obj__=(void*)0;
int i_429;
struct list$1sNodeph* __result196__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_429=0;    i_429<num_value;    i_429++    ){
        list$1sNodeph_push_back(self,values[i_429]);
    }
    __result196__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result196__;
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
struct sType* __result199__;
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    __result199__ = gComeFunResultObject = __result_obj__ = item;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_431;
int i_432;
struct sType* default_value_433;
struct list$1sTypeph* __result197__;
struct list_item$1sTypeph* it_434;
int i_435;
struct sType* __dec_obj292;
struct list$1sTypeph* __result198__;
default_value_433 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_431=self->len;
        for(        i_432=0;        i_432<position-len_431;        i_432++        ){
            memset(&default_value_433,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_433));
            /*i*/come_call_finalizer3(default_value_433,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result197__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result197__;
    }
    it_434=self->head;
    i_435=0;
    while(it_434!=((void*)0)) {
        if(        position==i_435) {
            __dec_obj292=it_434->item;
            it_434->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj292,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_434=it_434->next;
        i_435++;
    }
    __result198__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

