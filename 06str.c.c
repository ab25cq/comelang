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
struct sStrNode
{
    int sline;
    char* sname;
    char* value;
};

struct sBufferNode
{
    int sline;
    char* sname;
    struct buffer* value;
    unsigned long  int size;
};

struct sSStringNode
{
    int sline;
    char* sname;
    char* value;
    struct list$1sNodeph* exps;
};

struct sCharNode
{
    int sline;
    char* sname;
    int value;
};

struct sWCharNode
{
    int sline;
    char* sname;
    int value;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char* sname;
    int* value;
};

struct sRegexNode
{
    int sline;
    char* sname;
    char* str;
    _Bool global;
    _Bool ignore_case;
};

struct sListNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* list_elements;
};

struct sTupleNode
{
    int sline;
    char* sname;
    struct list$1tuple2$2charphsNodephph* tuple_elements;
};

struct sSomeNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* tuple_elements;
};

struct sNullReturnValue
{
    int sline;
    char* sname;
};

struct sNullReturnValueOfException
{
    int sline;
    char* sname;
};

struct sNullValue
{
    int sline;
    char* sname;
    struct sType* type;
};

struct sNoneNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
char* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
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
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sSomeNode_kind(struct sSomeNode* self);
_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);
struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info);
char* sNullReturnValue_kind(struct sNullReturnValue* self);
_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
static void sNullReturnValue_finalize(struct sNullReturnValue* self);
static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self);
struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info);
char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self);
_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info);
struct sNode* create_null_return_value_of_exception(struct sInfo* info);
static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self);
static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self);
struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info);
char* sNullValue_kind(struct sNullValue* self);
_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
static void sNullValue_finalize(struct sNullValue* self);
static struct sNullValue* sNullValue_clone(struct sNullValue* self);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static void sStrNode_finalize(struct sStrNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static void sCharNode_finalize(struct sCharNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static void sWCharNode_finalize(struct sWCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static void sWStringNode_finalize(struct sWStringNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static void sSStringNode_finalize(struct sSStringNode* self);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static void sMapNode_finalize(struct sMapNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static void sListNode_finalize(struct sListNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* parse_some(struct sInfo* info);
static void sSomeNode_finalize(struct sSomeNode* self);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
struct sNode* parse_none(struct sInfo* info);
static void sNoneNode_finalize(struct sNoneNode* self);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
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
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2410, "buffer"))));
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
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2417, "buffer"))));
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
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2426, "buffer"))));
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
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2433, "buffer"))));
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
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2440, "buffer"))));
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
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2447, "buffer"))));
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
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2454, "buffer"))));
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
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2754, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result11__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2759, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result13__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2764, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result15__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2769, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2774, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2807, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result18__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 2809, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
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
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2814, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 2816, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
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
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2821, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 2823, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
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
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2828, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 2830, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
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
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2835, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result23__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 2837, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
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
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2842, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result25__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 2844, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
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
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 2849, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result27__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 2851, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
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
    __result30__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 2856, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result30__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result33__;
    __result33__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2861, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result33__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result36__;
    __result36__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 2866, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result36__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result39__;
    __result39__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 2871, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result39__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result42__;
    __result42__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 2876, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result42__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result45__;
    __result45__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 2881, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result45__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result48__;
    __result48__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 2886, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result48__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 2891, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result52__;
    __result52__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 2896, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result54__;
    __result54__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 2901, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result56__;
    __result56__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 2906, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result58__;
    __result58__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 2911, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result58__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 2916, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 2921, "vector$1double")),len,self)));
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












struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
char* __dec_obj16;
struct sStrNode* __result67__;
    ((struct sNodeBase*)(__right_value117=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value117,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj16=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    /*G*/ __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result67__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
char* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value119=__builtin_string("sStrNode")));
    /* U11 */__right_value119 = come_decrement_ref_count2(__right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct CVALUE* come_value_66;
void* __right_value122 = (void*)0;
char* __dec_obj19;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct sType* __dec_obj20;
_Bool __result70__;
    come_value_66=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "CVALUE"))));
    __dec_obj19=come_value_66->c_value;
    come_value_66->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    /*G*/ __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj20=come_value_66->type;
    come_value_66->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj20,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_66->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_66));
    add_come_last_code(info,"%s",come_value_66->c_value);
    __result70__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_66,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result70__;
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

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj21;
struct tuple1$1sTypeph* __dec_obj23;
char* __dec_obj25;
struct list$1sTypeph* __dec_obj26;
struct list$1sNodeph* __dec_obj28;
struct list$1sTypeph* __dec_obj30;
struct list$1charph* __dec_obj31;
struct tuple1$1sTypeph* __dec_obj33;
struct sNode* __dec_obj35;
struct tuple1$1sTypeph* __dec_obj36;
struct sNode* __dec_obj38;
char* __dec_obj39;
char* __dec_obj40;
char* __dec_obj41;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj21=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj21,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj23=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj23,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj25=self->mGenericsName;
            /*G*/ __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj26=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj28=self->mArrayNum;
            come_call_finalizer3(__dec_obj28,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj30=self->mParamTypes;
            come_call_finalizer3(__dec_obj30,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj31=self->mParamNames;
            come_call_finalizer3(__dec_obj31,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj33=self->mResultType;
            come_call_finalizer3(__dec_obj33,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj35=self->mAlignas;
            /* U1 */ if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj36=self->mChannelType;
            come_call_finalizer3(__dec_obj36,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj38=self->mSizeNum;
            /* U1 */ if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj39=self->mOriginalTypeName;
            /*G*/ __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj40=self->mAsmName;
            /*G*/ __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj41=self->mTupleName;
            /*G*/ __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct sType* __dec_obj27;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj27=self->item;
            come_call_finalizer3(__dec_obj27,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct sNode* __dec_obj29;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj29=self->item;
            /* U1 */ if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0, (void*)0); };
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
char* __dec_obj32;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj32=self->item;
            /*G*/ __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct sType* __dec_obj37;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj37=self->v1;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct list_item$1CVALUEph* litem_79;
struct CVALUE* __dec_obj42;
void* __right_value126 = (void*)0;
struct list_item$1CVALUEph* litem_80;
struct CVALUE* __dec_obj46;
void* __right_value127 = (void*)0;
struct list_item$1CVALUEph* litem_81;
struct CVALUE* __dec_obj47;
struct list$1CVALUEph* __result69__;
    if(    self->len==0) {
        litem_79=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value125=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 230, "list_item$1CVALUEph"))));
        litem_79->prev=((void*)0);
        litem_79->next=((void*)0);
        __dec_obj42=litem_79->item;
        litem_79->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj42,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_79;
        self->head=litem_79;
    }
    else if(    self->len==1) {
        litem_80=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value126=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 240, "list_item$1CVALUEph"))));
        litem_80->prev=self->head;
        litem_80->next=((void*)0);
        __dec_obj46=litem_80->item;
        litem_80->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj46,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_80;
        self->head->next=litem_80;
    }
    else {
        litem_81=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value127=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 250, "list_item$1CVALUEph"))));
        litem_81->prev=self->tail;
        litem_81->next=((void*)0);
        __dec_obj47=litem_81->item;
        litem_81->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_81;
        self->tail=litem_81;
    }
    self->len++;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj43;
struct sType* __dec_obj44;
char* __dec_obj45;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj43=self->c_value;
            /*G*/ __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj44=self->type;
            come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj45=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct buffer* __dec_obj48;
struct sBufferNode* __result71__;
    ((struct sNodeBase*)(__right_value128=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value128,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj48=self->value;
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj48,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->size=size;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
char* __result72__;
    __result72__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value129=__builtin_string("sBufferNode")));
    /* U11 */__right_value129 = come_decrement_ref_count2(__right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_82;
unsigned long  int size_83;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct CVALUE* come_value_84;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct buffer* buf_85;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct sType* type2_86;
void* __right_value137 = (void*)0;
char* __dec_obj51;
void* __right_value174 = (void*)0;
struct sType* __dec_obj77;
_Bool __result91__;
    value_82=(struct buffer*)come_increment_ref_count(self->value);
    size_83=self->size;
    come_value_84=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "CVALUE"))));
    buf_85=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 56, "buffer"))));
    buffer_append_format(buf_85,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\")), \"%s, %ld)",info->sname,info->sline,((char*)(__right_value134=buffer_to_string(value_82))),size_83);
    /* U11 */__right_value134 = come_decrement_ref_count2(__right_value134, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type2_86=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 60, "sType")),"buffer*",(_Bool)0,info));
    type2_86->mHeap=(_Bool)1;
    __dec_obj51=come_value_84->c_value;
    come_value_84->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_85));
    /*G*/ __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj77=come_value_84->type;
    come_value_84->type=(struct sType*)come_increment_ref_count(sType_clone(type2_86));
    come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_84->var=((void*)0);
    append_object_to_right_values2(come_value_84,(struct sType*)come_increment_ref_count(type2_86),info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_84));
    add_come_last_code(info,"%s",come_value_84->c_value);
    __result91__ = (_Bool)1;
    /*i*/come_call_finalizer3(value_82,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_84,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_85,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_86,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result91__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result73__;
void* __right_value138 = (void*)0;
struct sType* result_87;
void* __right_value141 = (void*)0;
struct tuple1$1sTypeph* __dec_obj54;
void* __right_value142 = (void*)0;
struct tuple1$1sTypeph* __dec_obj55;
void* __right_value143 = (void*)0;
char* __dec_obj56;
void* __right_value150 = (void*)0;
struct list$1sTypeph* __dec_obj60;
void* __right_value158 = (void*)0;
struct list$1sNodeph* __dec_obj64;
void* __right_value159 = (void*)0;
struct list$1sTypeph* __dec_obj65;
void* __right_value166 = (void*)0;
struct list$1charph* __dec_obj69;
void* __right_value167 = (void*)0;
struct tuple1$1sTypeph* __dec_obj70;
void* __right_value168 = (void*)0;
struct sNode* __dec_obj71;
void* __right_value169 = (void*)0;
struct tuple1$1sTypeph* __dec_obj72;
void* __right_value170 = (void*)0;
struct sNode* __dec_obj73;
void* __right_value171 = (void*)0;
char* __dec_obj74;
void* __right_value172 = (void*)0;
char* __dec_obj75;
void* __right_value173 = (void*)0;
char* __dec_obj76;
struct sType* __result90__;
    if(    self==(void*)0) {
        __result73__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result73__;
    }
    result_87=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_87->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj54=result_87->mNoSolvedGenericsType;
        result_87->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj55=result_87->mOriginalLoadVarType;
        result_87->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj55,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj56=result_87->mGenericsName;
        result_87->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj60=result_87->mGenericsTypes;
        result_87->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj60,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj64=result_87->mArrayNum;
        result_87->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj64,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_87->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj65=result_87->mParamTypes;
        result_87->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj65,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj69=result_87->mParamNames;
        result_87->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj69,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj70=result_87->mResultType;
        result_87->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj70,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_87->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj71=result_87->mAlignas;
        result_87->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj72=result_87->mChannelType;
        result_87->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj72,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_87->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_87->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_87->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_87->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_87->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_87->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_87->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_87->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_87->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_87->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_87->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_87->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_87->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_87->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_87->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_87->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_87->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_87->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_87->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_87->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_87->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_87->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_87->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj73=result_87->mSizeNum;
        result_87->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_87->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj74=result_87->mOriginalTypeName;
        result_87->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_87->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_87->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_87->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_87->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_87->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_87->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_87->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_87->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj75=result_87->mAsmName;
        result_87->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_87->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_87->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_87->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_87->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_87->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_87->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj76=result_87->mTupleName;
        result_87->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        /*G*/ __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result90__ = gComeFunResultObject = __result_obj__ = result_87;
    /*i*/come_call_finalizer3(result_87,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result74__;
void* __right_value139 = (void*)0;
struct tuple1$1sTypeph* result_88;
void* __right_value140 = (void*)0;
struct sType* __dec_obj52;
struct tuple1$1sTypeph* __result75__;
    if(    self==(void*)0) {
        __result74__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    result_88=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj52=result_88->v1;
        result_88->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result75__ = gComeFunResultObject = __result_obj__ = result_88;
    /*i*/come_call_finalizer3(result_88,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj53;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj53=self->v1;
            come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result76__;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
struct list$1sTypeph* result_89;
struct list_item$1sTypeph* it_90;
void* __right_value149 = (void*)0;
struct list$1sTypeph* __result79__;
    if(    self==((void*)0)) {
        __result76__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    result_89=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 146, "list$1sTypeph"))));
    it_90=self->head;
    while(it_90!=((void*)0)) {
        list$1sTypeph_add(result_89,(struct sType*)come_increment_ref_count(sType_clone(it_90->item)));
        it_90=it_90->next;
    }
    __result79__ = gComeFunResultObject = __result_obj__ = result_89;
    /*i*/come_call_finalizer3(result_89,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result77__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result77__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value146 = (void*)0;
struct list_item$1sTypeph* litem_91;
struct sType* __dec_obj57;
void* __right_value147 = (void*)0;
struct list_item$1sTypeph* litem_92;
struct sType* __dec_obj58;
void* __right_value148 = (void*)0;
struct list_item$1sTypeph* litem_93;
struct sType* __dec_obj59;
struct list$1sTypeph* __result78__;
    if(    self->len==0) {
        litem_91=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value146=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 160, "list_item$1sTypeph"))));
        litem_91->prev=((void*)0);
        litem_91->next=((void*)0);
        __dec_obj57=litem_91->item;
        litem_91->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_91;
        self->head=litem_91;
    }
    else if(    self->len==1) {
        litem_92=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value147=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 170, "list_item$1sTypeph"))));
        litem_92->prev=self->head;
        litem_92->next=((void*)0);
        __dec_obj58=litem_92->item;
        litem_92->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_92;
        self->head->next=litem_92;
    }
    else {
        litem_93=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value148=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 180, "list_item$1sTypeph"))));
        litem_93->prev=self->tail;
        litem_93->next=((void*)0);
        __dec_obj59=litem_93->item;
        litem_93->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_93;
        self->tail=litem_93;
    }
    self->len++;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result80__;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct list$1sNodeph* result_94;
struct list_item$1sNodeph* it_95;
void* __right_value157 = (void*)0;
struct list$1sNodeph* __result85__;
    if(    self==((void*)0)) {
        __result80__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result80__;
    }
    result_94=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 146, "list$1sNodeph"))));
    it_95=self->head;
    while(it_95!=((void*)0)) {
        list$1sNodeph_add(result_94,(struct sNode*)come_increment_ref_count(sNode_clone(it_95->item)));
        it_95=it_95->next;
    }
    __result85__ = gComeFunResultObject = __result_obj__ = result_94;
    /*i*/come_call_finalizer3(result_94,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result81__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value153 = (void*)0;
struct list_item$1sNodeph* litem_96;
struct sNode* __dec_obj61;
void* __right_value154 = (void*)0;
struct list_item$1sNodeph* litem_97;
struct sNode* __dec_obj62;
void* __right_value155 = (void*)0;
struct list_item$1sNodeph* litem_98;
struct sNode* __dec_obj63;
struct list$1sNodeph* __result82__;
    if(    self->len==0) {
        litem_96=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value153=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 160, "list_item$1sNodeph"))));
        litem_96->prev=((void*)0);
        litem_96->next=((void*)0);
        __dec_obj61=litem_96->item;
        litem_96->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_96;
        self->head=litem_96;
    }
    else if(    self->len==1) {
        litem_97=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value154=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 170, "list_item$1sNodeph"))));
        litem_97->prev=self->head;
        litem_97->next=((void*)0);
        __dec_obj62=litem_97->item;
        litem_97->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_97;
        self->head->next=litem_97;
    }
    else {
        litem_98=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value155=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 180, "list_item$1sNodeph"))));
        litem_98->prev=self->tail;
        litem_98->next=((void*)0);
        __dec_obj63=litem_98->item;
        litem_98->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_98;
        self->tail=litem_98;
    }
    self->len++;
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result83__;
void* __right_value156 = (void*)0;
struct sNode* result_99;
struct sNode* __result84__;
    if(    self==(void*)0) {
        __result83__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result83__;
    }
    result_99=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_99->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_99->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_99->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_99->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_99->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_99->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_99->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_99->kind=self->kind;
    }
    __result84__ = gComeFunResultObject = __result_obj__ = result_99;
    if(result_99) { result_99 = come_decrement_ref_count2(result_99, ((struct sNode*)result_99)->finalize, ((struct sNode*)result_99)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result86__;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
struct list$1charph* result_100;
struct list_item$1charph* it_101;
void* __right_value165 = (void*)0;
struct list$1charph* __result89__;
    if(    self==((void*)0)) {
        __result86__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result86__;
    }
    result_100=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 146, "list$1charph"))));
    it_101=self->head;
    while(it_101!=((void*)0)) {
        list$1charph_add(result_100,(char*)come_increment_ref_count(string_clone(it_101->item)));
        it_101=it_101->next;
    }
    __result89__ = gComeFunResultObject = __result_obj__ = result_100;
    /*i*/come_call_finalizer3(result_100,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result87__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value162 = (void*)0;
struct list_item$1charph* litem_102;
char* __dec_obj66;
void* __right_value163 = (void*)0;
struct list_item$1charph* litem_103;
char* __dec_obj67;
void* __right_value164 = (void*)0;
struct list_item$1charph* litem_104;
char* __dec_obj68;
struct list$1charph* __result88__;
    if(    self->len==0) {
        litem_102=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value162=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 160, "list_item$1charph"))));
        litem_102->prev=((void*)0);
        litem_102->next=((void*)0);
        __dec_obj66=litem_102->item;
        litem_102->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_102;
        self->head=litem_102;
    }
    else if(    self->len==1) {
        litem_103=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value163=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 170, "list_item$1charph"))));
        litem_103->prev=self->head;
        litem_103->next=((void*)0);
        __dec_obj67=litem_103->item;
        litem_103->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_103;
        self->head->next=litem_103;
    }
    else {
        litem_104=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value164=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 180, "list_item$1charph"))));
        litem_104->prev=self->tail;
        litem_104->next=((void*)0);
        __dec_obj68=litem_104->item;
        litem_104->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_104;
        self->tail=litem_104;
    }
    self->len++;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
char* __dec_obj78;
void* __right_value177 = (void*)0;
struct list$1sNodeph* __dec_obj79;
struct sSStringNode* __result92__;
    ((struct sNodeBase*)(__right_value175=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value175,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj78=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    /*G*/ __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj79=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(exps));
    come_call_finalizer3(__dec_obj79,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value178 = (void*)0;
char* __result93__;
    __result93__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value178=__builtin_string("sSStringNode")));
    /* U11 */__right_value178 = come_decrement_ref_count2(__right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct CVALUE* come_value_105;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
struct buffer* buf_106;
struct list$1sNodeph* o2_saved_107;
struct sNode* it_110;
_Bool Value_113;
_Bool __result100__;
void* __right_value183 = (void*)0;
struct CVALUE* come_value_114;
void* __right_value184 = (void*)0;
struct sType* come_value_type_115;
void* __right_value185 = (void*)0;
char* method_name_116;
struct sType* obj_type_119;
struct sType* obj_type2_120;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
char* __dec_obj98;
void* __right_value188 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1 = (void*)0;
struct sFun* fun2_121=0;
char* real_fun_name_122=0;
char* __dec_obj100;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
struct buffer* buf2_123;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct sType* type_124;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
char* c_value_125;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct sType* type2_126;
void* __right_value197 = (void*)0;
char* __dec_obj101;
void* __right_value198 = (void*)0;
struct sType* __dec_obj102;
_Bool __result105__;
    come_value_105=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 94, "CVALUE"))));
    buf_106=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 96, "buffer"))));
    buffer_append_str(buf_106,"xsprintf(\"");
    buffer_append_str(buf_106,self->value);
    buffer_append_str(buf_106,"\"");
    if(    list$1sNodeph_length(self->exps)>0) {
        for(        o2_saved_107=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_110=list$1sNodeph_begin((o2_saved_107));        !list$1sNodeph_end((o2_saved_107));        it_110=list$1sNodeph_next((o2_saved_107))        ){
            Value_113=node_compile(it_110,info);
            if(            !Value_113) {
                __result100__ = (_Bool)0;
                /*i*/come_call_finalizer3(o2_saved_107,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_105,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(buf_106,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result100__;
            }
            else {
            }
            come_value_114=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            come_value_type_115=(struct sType*)come_increment_ref_count(sType_clone(come_value_114->type));
            if(            list$1sNodeph_length(come_value_type_115->mArrayNum)>0) {
                come_value_type_115->mPointerNum+=list$1sNodeph_length(come_value_type_115->mArrayNum);
            }
            method_name_116=(char*)come_increment_ref_count(create_method_name(come_value_type_115,(_Bool)0,"to_string",info,(_Bool)1));
            if(            map$2charphsFunph_at(info->funcs,method_name_116,((void*)0))==((void*)0)) {
                obj_type_119=come_value_114->type->mNoSolvedGenericsType->v1;
                if(                obj_type_119&&list$1sTypeph_length(obj_type_119->mGenericsTypes)>0) {
                    obj_type2_120=come_value_114->type;
                    __dec_obj98=method_name_116;
                    method_name_116=(char*)come_increment_ref_count(make_generics_function(obj_type2_120,(char*)come_increment_ref_count(__builtin_string("to_string")),info,(_Bool)1));
                    /*G*/ __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value188=create_to_string_automatically(come_value_type_115,"to_string",info)));
                    fun2_121=multiple_assign_var1->v1;
                    real_fun_name_122=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                    /*g*/come_call_finalizer3(__right_value188,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    __dec_obj100=method_name_116;
                    method_name_116=(char*)come_increment_ref_count(real_fun_name_122);
                    /*G*/ __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    fun2_121==((void*)0)) {
                        err_msg(info,"require to_string implementation(%s)",come_value_114->type->mClass->mName);
                        exit(1);
                    }
                    /* U13 */real_fun_name_122 = come_decrement_ref_count2(real_fun_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            buf2_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 137, "buffer"))));
            buffer_append_str(buf2_123,method_name_116);
            buffer_append_str(buf2_123,"(");
            buffer_append_str(buf2_123,come_value_114->c_value);
            buffer_append_str(buf2_123,")");
            type_124=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 144, "sType")),"char*",(_Bool)0,info));
            type_124->mHeap=(_Bool)1;
            c_value_125=(char*)come_increment_ref_count(append_object_to_right_values(((char*)(__right_value193=buffer_to_string(buf2_123))),(struct sType*)come_increment_ref_count(type_124),info));
            /* U11 */__right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_106,",");
            buffer_append_str(buf_106,c_value_125);
            /*i*/come_call_finalizer3(come_value_114,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_type_115,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */method_name_116 = come_decrement_ref_count2(method_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf2_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_124,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */c_value_125 = come_decrement_ref_count2(c_value_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_107,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_106,")");
    type2_126=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 156, "sType")),"char*",(_Bool)0,info));
    type2_126->mHeap=(_Bool)1;
    __dec_obj101=come_value_105->c_value;
    come_value_105->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_106));
    /*G*/ __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj102=come_value_105->type;
    come_value_105->type=(struct sType*)come_increment_ref_count(sType_clone(type2_126));
    come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_105->var=((void*)0);
    append_object_to_right_values2(come_value_105,(struct sType*)come_increment_ref_count(type2_126),info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_105));
    add_come_last_code(info,"%s",come_value_105->c_value);
    __result105__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_105,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_106,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_126,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result105__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_108;
struct sNode* __result94__;
struct sNode* __result95__;
struct sNode* result_109;
struct sNode* __result96__;
result_108 = (void*)0;
result_109 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_108,0,sizeof(struct sNode*));
        __result94__ = gComeFunResultObject = __result_obj__ = result_108;
        gComeFunResultObject = (void*)0;
        return __result94__;
    }
    self->it=self->head;
    if(    self->it) {
        __result95__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    memset(&result_109,0,sizeof(struct sNode*));
    __result96__ = gComeFunResultObject = __result_obj__ = result_109;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_111;
struct sNode* __result97__;
struct sNode* __result98__;
struct sNode* result_112;
struct sNode* __result99__;
result_111 = (void*)0;
result_112 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_111,0,sizeof(struct sNode*));
        __result97__ = gComeFunResultObject = __result_obj__ = result_111;
        gComeFunResultObject = (void*)0;
        return __result97__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result98__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    memset(&result_112,0,sizeof(struct sNode*));
    __result99__ = gComeFunResultObject = __result_obj__ = result_112;
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_117;
unsigned int it_118;
struct sFun* __result101__;
struct sFun* __result102__;
struct sFun* __result103__;
struct sFun* __result104__;
    hash_117=string_get_hash_key(((char*)key))%self->size;
    it_118=hash_117;
    while((_Bool)1) {
        if(        self->item_existance[it_118]) {
            if(            string_equals(self->keys[it_118],key)) {
                __result101__ = gComeFunResultObject = __result_obj__ = self->items[it_118];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result101__;
            }
            it_118++;
            if(            it_118>=self->size) {
                it_118=0;
            }
            else if(            it_118==hash_117) {
                __result102__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result102__;
            }
        }
        else {
            __result103__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result103__;
        }
    }
    __result104__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj83;
struct sType* __dec_obj84;
struct list$1sTypeph* __dec_obj85;
struct list$1charph* __dec_obj86;
struct list$1charph* __dec_obj87;
struct sType* __dec_obj88;
struct sBlock* __dec_obj89;
struct buffer* __dec_obj92;
struct buffer* __dec_obj93;
struct buffer* __dec_obj94;
struct buffer* __dec_obj95;
char* __dec_obj96;
char* __dec_obj97;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj83=self->mName;
            /*G*/ __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj84=self->mResultType;
            come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj85=self->mParamTypes;
            come_call_finalizer3(__dec_obj85,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj86=self->mParamNames;
            come_call_finalizer3(__dec_obj86,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj87=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj87,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj88=self->mLambdaType;
            come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj89=self->mBlock;
            come_call_finalizer3(__dec_obj89,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj92=self->mSource;
            come_call_finalizer3(__dec_obj92,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj93=self->mSourceHead;
            come_call_finalizer3(__dec_obj93,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj94=self->mSourceHead2;
            come_call_finalizer3(__dec_obj94,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj95=self->mSourceDefer;
            come_call_finalizer3(__dec_obj95,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj96=self->mComeHeader;
            /*G*/ __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj97=self->mDeclareSName;
            /*G*/ __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj90;
struct sVarTable* __dec_obj91;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj90=self->mNodes;
            come_call_finalizer3(__dec_obj90,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj91=self->mVarTable;
            come_call_finalizer3(__dec_obj91,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj99;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj99=self->v2;
            /*G*/ __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value199 = (void*)0;
struct sCharNode* __result106__;
    ((struct sNodeBase*)(__right_value199=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value199,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value200 = (void*)0;
char* __result107__;
    __result107__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value200=__builtin_string("sCharNode")));
    /* U11 */__right_value200 = come_decrement_ref_count2(__right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct CVALUE* come_value_127;
void* __right_value203 = (void*)0;
char* __dec_obj104;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct sType* __dec_obj105;
_Bool __result108__;
    come_value_127=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 189, "CVALUE"))));
    __dec_obj104=come_value_127->c_value;
    come_value_127->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    /*G*/ __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj105=come_value_127->type;
    come_value_127->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 192, "sType")),"char",(_Bool)0,info));
    come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_127->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_127));
    add_come_last_code(info,"%s",come_value_127->c_value);
    __result108__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result108__;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, int value, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value206 = (void*)0;
struct sWCharNode* __result109__;
    ((struct sNodeBase*)(__right_value206=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value206,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    self->quote=quote;
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value207 = (void*)0;
char* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value207=__builtin_string("sWCharNode")));
    /* U11 */__right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct CVALUE* come_value_128;
void* __right_value210 = (void*)0;
char* __dec_obj107;
void* __right_value211 = (void*)0;
char* __dec_obj108;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct sType* __dec_obj109;
_Bool __result111__;
    come_value_128=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 220, "CVALUE"))));
    if(    self->quote) {
        __dec_obj107=come_value_128->c_value;
        come_value_128->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        /*G*/ __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj108=come_value_128->c_value;
        come_value_128->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        /*G*/ __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj109=come_value_128->type;
    come_value_128->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 228, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_128->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_128));
    add_come_last_code(info,"%s",come_value_128->c_value);
    __result111__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result111__;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, int* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value214 = (void*)0;
int* __dec_obj110;
struct sWStringNode* __result112__;
    ((struct sNodeBase*)(__right_value214=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value214,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj110=self->value;
    self->value=(int*)come_increment_ref_count(value);
    /*G*/ __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value215 = (void*)0;
char* __result113__;
    __result113__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value215=__builtin_string("sWStringNode")));
    /* U11 */__right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct CVALUE* come_value_129;
void* __right_value218 = (void*)0;
char* __dec_obj113;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct sType* __dec_obj114;
_Bool __result114__;
    come_value_129=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 255, "CVALUE"))));
    __dec_obj113=come_value_129->c_value;
    come_value_129->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    /*G*/ __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj114=come_value_129->type;
    come_value_129->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 258, "sType")),"int*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_129->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_129));
    add_come_last_code(info,"%s",come_value_129->c_value);
    __result114__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result114__;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
char* __dec_obj115;
struct sRegexNode* __result115__;
    ((struct sNodeBase*)(__right_value221=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value221,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj115=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    /*G*/ __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__=(void*)0;
void* __right_value223 = (void*)0;
char* __result116__;
    __result116__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value223=__builtin_string("sRegexNode")));
    /* U11 */__right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value229 = (void*)0;
struct sNode* obj_node_130;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_132;
void* __right_value235 = (void*)0;
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
struct sNode* node_138;
_Bool Value_139;
_Bool __result122__;
_Bool __result123__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 287, "struct sNode");
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value225=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 287, "sStrNode")),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_130=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*g*/come_call_finalizer3(__right_value225,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
    params_132=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 289, "list$1tuple2$2charphsNodephph"))));
    list$1tuple2$2charphsNodephph_add(params_132,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 291, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_130))));
    list$1tuple2$2charphsNodephph_add(params_132,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 292, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_132,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 293, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_132,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 294, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_132,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 295, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_132,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 296, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_132,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 297, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_132,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 298, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_132,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 299, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_138=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_130),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_132),((void*)0),info->sline,((void*)0),info));
    Value_139=node_compile(node_138,info);
    if(    !Value_139) {
        __result122__ = (_Bool)0;
        if(obj_node_130) { obj_node_130 = come_decrement_ref_count2(obj_node_130, ((struct sNode*)obj_node_130)->finalize, ((struct sNode*)obj_node_130)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_132,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_138) { node_138 = come_decrement_ref_count2(node_138, ((struct sNode*)node_138)->finalize, ((struct sNode*)node_138)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result122__;
    }
    else {
    }
    __result123__ = (_Bool)1;
    if(obj_node_130) { obj_node_130 = come_decrement_ref_count2(obj_node_130, ((struct sNode*)obj_node_130)->finalize, ((struct sNode*)obj_node_130)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(params_132,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_138) { node_138 = come_decrement_ref_count2(node_138, ((struct sNode*)node_138)->finalize, ((struct sNode*)node_138)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result123__;
}

static void sRegexNode_finalize(struct sRegexNode* self){
char* __dec_obj116;
char* __dec_obj117;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj116=self->sname;
            /*G*/ __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        if(        self->str==gComeFunResultObject) {
            __dec_obj117=self->str;
            /*G*/ __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result119__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_133;
struct list_item$1tuple2$2charphsNodephph* prev_it_134;
    it_133=self->head;
    while(it_133!=((void*)0)) {
        prev_it_134=it_133;
        it_133=it_133->next;
        /*i*/come_call_finalizer3(prev_it_134,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj122;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj122=self->item;
            come_call_finalizer3(__dec_obj122,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value232 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_135;
struct tuple2$2charphsNodeph* __dec_obj125;
void* __right_value233 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_136;
struct tuple2$2charphsNodeph* __dec_obj128;
void* __right_value234 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_137;
struct tuple2$2charphsNodeph* __dec_obj131;
struct list$1tuple2$2charphsNodephph* __result120__;
    if(    self->len==0) {
        litem_135=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value232=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 160, "list_item$1tuple2$2charphsNodephph"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        __dec_obj125=litem_135->item;
        litem_135->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj125,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value233=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 170, "list_item$1tuple2$2charphsNodephph"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        __dec_obj128=litem_136->item;
        litem_136->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj128,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value234=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 180, "list_item$1tuple2$2charphsNodephph"))));
        litem_137->prev=self->tail;
        litem_137->next=((void*)0);
        __dec_obj131=litem_137->item;
        litem_137->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj131,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_137;
        self->tail=litem_137;
    }
    self->len++;
    __result120__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj134;
struct sNode* __dec_obj135;
struct tuple2$2charphsNodeph* __result121__;
    __dec_obj134=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj135=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    /* U1 */ if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result121__;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value271 = (void*)0;
struct list$1sNodeph* __dec_obj136;
struct sListNode* __result124__;
    ((struct sNodeBase*)(__right_value271=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value271,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj136=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj136,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__=(void*)0;
void* __right_value272 = (void*)0;
char* __result125__;
    __result125__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value272=__builtin_string("sListNode")));
    /* U11 */__right_value272 = come_decrement_ref_count2(__right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_140;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1CVALUEph* params_141;
struct sType* list_element_type_144;
int n_145;
struct list$1sNodeph* o2_saved_146;
struct sNode* it_147;
void* __right_value275 = (void*)0;
_Bool _if_conditional1;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct sNode* value_node_148;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_149;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct sNode* exp_150;
void* __right_value289 = (void*)0;
struct sNode* __dec_obj140;
_Bool Value_151;
_Bool __result127__;
_Bool Value_152;
_Bool __result128__;
void* __right_value290 = (void*)0;
struct CVALUE* come_value_153;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sType* __dec_obj141;
void* __right_value293 = (void*)0;
struct sType* type_values_154;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
char* var_name_159;
void* __right_value299 = (void*)0;
struct sVar* var__160;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct buffer* source_161;
int i_162;
struct list$1CVALUEph* o2_saved_163;
struct CVALUE* it_166;
void* __right_value303 = (void*)0;
char* c_value_169;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct sType* list_type_173;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct sType* obj_type_177;
char* fun_name_178;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
char* generics_fun_name_179;
struct sFun* fun_180;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
char* __dec_obj148;
_Bool __result139__;
void* __right_value316 = (void*)0;
struct sType* result_type_181;
struct sType* type_182;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct CVALUE* obj_value_183;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct buffer* num_string_184;
void* __right_value321 = (void*)0;
struct sType* type2_185;
void* __right_value322 = (void*)0;
char* type_name_186;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
char* __dec_obj149;
void* __right_value325 = (void*)0;
struct sType* type3_187;
void* __right_value326 = (void*)0;
struct sType* __dec_obj150;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct list$1CVALUEph* come_params_188;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct CVALUE* come_value2_192;
void* __right_value331 = (void*)0;
char* __dec_obj151;
struct sType* __dec_obj152;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct CVALUE* come_value3_193;
void* __right_value334 = (void*)0;
char* __dec_obj153;
struct sType* __dec_obj154;
int j_194;
struct list$1CVALUEph* o2_saved_195;
struct CVALUE* it_196;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct CVALUE* come_value4_197;
void* __right_value337 = (void*)0;
char* __dec_obj155;
void* __right_value338 = (void*)0;
struct sType* __dec_obj156;
_Bool __result142__;
    list_elements_140=self->list_elements;
    params_141=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 331, "list$1CVALUEph"))));
    list_element_type_144=((void*)0);
    n_145=0;
    for(    o2_saved_146=(list_elements_140),it_147=list$1sNodeph_begin((o2_saved_146));    !list$1sNodeph_end((o2_saved_146));    it_147=list$1sNodeph_next((o2_saved_146))    ){
        if(        (_if_conditional1=(string_operator_equals(((char*)(__right_value275=it_147->kind(it_147->_protocol_obj))),"sWildCard"))),        /* U10 */ (__right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional1) {
            value_node_148=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value276=xsprintf("Value"))),info));
            /* U11 */__right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            params_149=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 339, "list$1tuple2$2charphsNodephph"))));
            list$1tuple2$2charphsNodephph_add(params_149,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 340, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_148))));
            list$1tuple2$2charphsNodephph_add(params_149,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 341, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_145,info)))));
            exp_150=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value287=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_148),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_149),((void*)0),0,((void*)0),info));
            /* U11 */__right_value287 = come_decrement_ref_count2(__right_value287, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj140=exp_150;
            exp_150=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_150,info));
            /* U1 */ if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); };
            Value_151=node_compile(exp_150,info);
            if(            !Value_151) {
                __result127__ = (_Bool)0;
                if(value_node_148) { value_node_148 = come_decrement_ref_count2(value_node_148, ((struct sNode*)value_node_148)->finalize, ((struct sNode*)value_node_148)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(params_149,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(exp_150) { exp_150 = come_decrement_ref_count2(exp_150, ((struct sNode*)exp_150)->finalize, ((struct sNode*)exp_150)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(params_141,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(list_element_type_144,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result127__;
            }
            else {
            }
            if(value_node_148) { value_node_148 = come_decrement_ref_count2(value_node_148, ((struct sNode*)value_node_148)->finalize, ((struct sNode*)value_node_148)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(params_149,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(exp_150) { exp_150 = come_decrement_ref_count2(exp_150, ((struct sNode*)exp_150)->finalize, ((struct sNode*)exp_150)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_152=node_compile(it_147,info);
            if(            !Value_152) {
                __result128__ = (_Bool)0;
                /*i*/come_call_finalizer3(params_141,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(list_element_type_144,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result128__;
            }
            else {
            }
        }
        come_value_153=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        list_element_type_144) {
            check_assign_type(((char*)(__right_value291=xsprintf("invalid list element type"))),list_element_type_144,come_value_153->type,come_value_153,(_Bool)0,(_Bool)1,(_Bool)0,info);
            /* U11 */__right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(params_141,(struct CVALUE*)come_increment_ref_count(come_value_153));
        __dec_obj141=list_element_type_144;
        list_element_type_144=(struct sType*)come_increment_ref_count(sType_clone(come_value_153->type));
        come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
        n_145++;
        /*i*/come_call_finalizer3(come_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_154=(struct sType*)come_increment_ref_count(sType_clone(list_element_type_144));
    list$1sNodeph_push_back(type_values_154->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(params_141),info)));
    type_values_154->mHeap=(_Bool)0;
    static int list_value_num_158=0;
    var_name_159=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_158));
    add_variable_to_table(var_name_159,(struct sType*)come_increment_ref_count(sType_clone(type_values_154)),info);
    var__160=get_variable_from_table(info->lv_table,var_name_159);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value300=make_define_var(type_values_154,var__160->mCValueName,(_Bool)0,info))));
    /* U11 */__right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_161=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 382, "buffer"))));
    buffer_append_str(source_161,"(");
    i_162=0;
    for(    o2_saved_163=(struct list$1CVALUEph*)come_increment_ref_count((params_141)),it_166=list$1CVALUEph_begin((o2_saved_163));    !list$1CVALUEph_end((o2_saved_163));    it_166=list$1CVALUEph_next((o2_saved_163))    ){
        if(        list_element_type_144->mHeap) {
            c_value_169=(char*)come_increment_ref_count(increment_ref_count_object(((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_141,i_162), "06str.c", 389, 0))->type,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_141,i_162), "06str.c", 389, 1))->c_value,info));
            buffer_append_format(source_161,"%s[%d]=%s,\n",var__160->mCValueName,i_162,c_value_169);
            /* U13 */c_value_169 = come_decrement_ref_count2(c_value_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_161,"%s[%d]=%s,\n",var__160->mCValueName,i_162,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_141,i_162), "06str.c", 393, 2))->c_value);
        }
        i_162++;
    }
    /*i*/come_call_finalizer3(o2_saved_163,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    list_type_173=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 402, "sType")),"list",(_Bool)0,info));
    list$1sTypeph_push_back(list_type_173->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(list_element_type_144)));
    obj_type_177=(struct sType*)come_increment_ref_count(sType_clone(list_type_173));
    fun_name_178="initialize_with_values";
    generics_fun_name_179=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value312=make_generics_function(obj_type_177,(char*)come_increment_ref_count(__builtin_string(fun_name_178)),info,(_Bool)1)))));
    /* U11 */__right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_180=map$2charphsFunph_at(info->funcs,generics_fun_name_179,((void*)0));
    if(    fun_180==((void*)0)) {
        __dec_obj148=generics_fun_name_179;
        generics_fun_name_179=(char*)come_increment_ref_count(create_method_name(obj_type_177,(_Bool)0,((char*)(__right_value314=__builtin_string(fun_name_178))),info,(_Bool)1));
        /*G*/ __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_180=map$2charphsFunph_at(info->funcs,generics_fun_name_179,((void*)0));
        if(        fun_180==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_179,info->come_fun->mName);
            __result139__ = (_Bool)1;
            /*i*/come_call_finalizer3(params_141,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(list_element_type_144,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_values_154,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_159 = come_decrement_ref_count2(var_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(source_161,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(list_type_173,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_177,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */generics_fun_name_179 = come_decrement_ref_count2(generics_fun_name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result139__;
        }
    }
    result_type_181=(struct sType*)come_increment_ref_count(sType_clone(fun_180->mResultType));
    result_type_181->mStatic=(_Bool)0;
    type_182=list_type_173;
    obj_value_183=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 428, "CVALUE"))));
    num_string_184=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 430, "buffer"))));
    buffer_append_str(num_string_184,"1");
    type2_185=(struct sType*)come_increment_ref_count(solve_generics(type_182,type_182,info));
    type_name_186=(char*)come_increment_ref_count(make_type_name_string(type2_185,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj149=obj_value_183->c_value;
    obj_value_183->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_186,type_name_186,((char*)(__right_value323=buffer_to_string(num_string_184))),info->sname,info->sline,type_name_186));
    /*G*/ __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_187=(struct sType*)come_increment_ref_count(sType_clone(type2_185));
    type3_187->mPointerNum++;
    type3_187->mHeap=(_Bool)1;
    type2_185->mHeap=(_Bool)1;
    __dec_obj150=obj_value_183->type;
    obj_value_183->type=(struct sType*)come_increment_ref_count(sType_clone(type2_185));
    come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_183->type->mPointerNum++;
    obj_value_183->var=((void*)0);
    append_object_to_right_values2(obj_value_183,(struct sType*)come_increment_ref_count(type3_187),info,(_Bool)0);
    come_params_188=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 450, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_180->mParamTypes,0), "06str.c", 452, 3))->mHeap&&obj_value_183->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_180->mParamTypes,0), "06str.c", 453, 4)),obj_value_183->type,obj_value_183,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_188,(struct CVALUE*)come_increment_ref_count(obj_value_183));
    come_value2_192=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 457, "CVALUE"))));
    __dec_obj151=come_value2_192->c_value;
    come_value2_192->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEph_length(params_141)));
    /*G*/ __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj152=come_value2_192->type;
    come_value2_192->type=((void*)0);
    come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_192->var=((void*)0);
    list$1CVALUEph_push_back(come_params_188,(struct CVALUE*)come_increment_ref_count(come_value2_192));
    come_value3_193=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 465, "CVALUE"))));
    __dec_obj153=come_value3_193->c_value;
    come_value3_193->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__160->mCValueName));
    /*G*/ __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj154=come_value3_193->type;
    come_value3_193->type=((void*)0);
    come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_193->var=((void*)0);
    list$1CVALUEph_push_back(come_params_188,(struct CVALUE*)come_increment_ref_count(come_value3_193));
    buffer_append_str(source_161,generics_fun_name_179);
    buffer_append_str(source_161,"(");
    j_194=0;
    for(    o2_saved_195=(struct list$1CVALUEph*)come_increment_ref_count((come_params_188)),it_196=list$1CVALUEph_begin((o2_saved_195));    !list$1CVALUEph_end((o2_saved_195));    it_196=list$1CVALUEph_next((o2_saved_195))    ){
        buffer_append_str(source_161,it_196->c_value);
        if(        j_194!=list$1CVALUEph_length(come_params_188)-1) {
            buffer_append_str(source_161,",");
        }
        j_194++;
    }
    /*i*/come_call_finalizer3(o2_saved_195,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_161,")");
    buffer_append_str(source_161,")");
    come_value4_197=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 491, "CVALUE"))));
    __dec_obj155=come_value4_197->c_value;
    come_value4_197->c_value=(char*)come_increment_ref_count(buffer_to_string(source_161));
    /*G*/ __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj156=come_value4_197->type;
    come_value4_197->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_181));
    come_call_finalizer3(__dec_obj156,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_197->type->mStatic=(_Bool)0;
    come_value4_197->var=((void*)0);
    if(    result_type_181->mHeap) {
        append_object_to_right_values2(come_value4_197,(struct sType*)come_increment_ref_count(result_type_181),info,(_Bool)0);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_197));
    add_come_last_code(info,"%s",come_value4_197->c_value);
    __result142__ = (_Bool)1;
    /*i*/come_call_finalizer3(params_141,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(list_element_type_144,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_values_154,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_159 = come_decrement_ref_count2(var_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_161,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(list_type_173,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_177,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */generics_fun_name_179 = come_decrement_ref_count2(generics_fun_name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_181,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_184,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_185,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_186 = come_decrement_ref_count2(type_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_187,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_188,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_192,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value3_193,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value4_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result142__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result126__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result126__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_142;
struct list_item$1CVALUEph* prev_it_143;
    it_142=self->head;
    while(it_142!=((void*)0)) {
        prev_it_143=it_142;
        it_142=it_142->next;
        /*i*/come_call_finalizer3(prev_it_143,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj139;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj139=self->item;
            come_call_finalizer3(__dec_obj139,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
struct list_item$1sNodeph* litem_155;
struct sNode* __dec_obj142;
void* __right_value295 = (void*)0;
struct list_item$1sNodeph* litem_156;
struct sNode* __dec_obj143;
void* __right_value296 = (void*)0;
struct list_item$1sNodeph* litem_157;
struct sNode* __dec_obj144;
struct list$1sNodeph* __result129__;
    if(    self->len==0) {
        litem_155=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value294=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 230, "list_item$1sNodeph"))));
        litem_155->prev=((void*)0);
        litem_155->next=((void*)0);
        __dec_obj142=litem_155->item;
        litem_155->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_155;
        self->head=litem_155;
    }
    else if(    self->len==1) {
        litem_156=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value295=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 240, "list_item$1sNodeph"))));
        litem_156->prev=self->head;
        litem_156->next=((void*)0);
        __dec_obj143=litem_156->item;
        litem_156->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_156;
        self->head->next=litem_156;
    }
    else {
        litem_157=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value296=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 250, "list_item$1sNodeph"))));
        litem_157->prev=self->tail;
        litem_157->next=((void*)0);
        __dec_obj144=litem_157->item;
        litem_157->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_157;
        self->tail=litem_157;
    }
    self->len++;
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_164;
struct CVALUE* __result130__;
struct CVALUE* __result131__;
struct CVALUE* result_165;
struct CVALUE* __result132__;
result_164 = (void*)0;
result_165 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_164,0,sizeof(struct CVALUE*));
        __result130__ = gComeFunResultObject = __result_obj__ = result_164;
        gComeFunResultObject = (void*)0;
        return __result130__;
    }
    self->it=self->head;
    if(    self->it) {
        __result131__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result131__;
    }
    memset(&result_165,0,sizeof(struct CVALUE*));
    __result132__ = gComeFunResultObject = __result_obj__ = result_165;
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_167;
struct CVALUE* __result133__;
struct CVALUE* __result134__;
struct CVALUE* result_168;
struct CVALUE* __result135__;
result_167 = (void*)0;
result_168 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_167,0,sizeof(struct CVALUE*));
        __result133__ = gComeFunResultObject = __result_obj__ = result_167;
        gComeFunResultObject = (void*)0;
        return __result133__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result134__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    memset(&result_168,0,sizeof(struct CVALUE*));
    __result135__ = gComeFunResultObject = __result_obj__ = result_168;
    gComeFunResultObject = (void*)0;
    return __result135__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_170;
int i_171;
struct CVALUE* __result136__;
struct CVALUE* default_value_172;
struct CVALUE* __result137__;
default_value_172 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_170=self->head;
    i_171=0;
    while(it_170!=((void*)0)) {
        if(        position==i_171) {
            __result136__ = gComeFunResultObject = __result_obj__ = it_170->item;
            gComeFunResultObject = (void*)0;
            return __result136__;
        }
        it_170=it_170->next;
        i_171++;
    }
    memset(&default_value_172,0,sizeof(struct CVALUE*));
    __result137__ = gComeFunResultObject = __result_obj__ = default_value_172;
    /*i*/come_call_finalizer3(default_value_172,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value306 = (void*)0;
struct list_item$1sTypeph* litem_174;
struct sType* __dec_obj145;
void* __right_value307 = (void*)0;
struct list_item$1sTypeph* litem_175;
struct sType* __dec_obj146;
void* __right_value308 = (void*)0;
struct list_item$1sTypeph* litem_176;
struct sType* __dec_obj147;
struct list$1sTypeph* __result138__;
    if(    self->len==0) {
        litem_174=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value306=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 230, "list_item$1sTypeph"))));
        litem_174->prev=((void*)0);
        litem_174->next=((void*)0);
        __dec_obj145=litem_174->item;
        litem_174->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_174;
        self->head=litem_174;
    }
    else if(    self->len==1) {
        litem_175=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value307=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 240, "list_item$1sTypeph"))));
        litem_175->prev=self->head;
        litem_175->next=((void*)0);
        __dec_obj146=litem_175->item;
        litem_175->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_175;
        self->head->next=litem_175;
    }
    else {
        litem_176=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value308=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 250, "list_item$1sTypeph"))));
        litem_176->prev=self->tail;
        litem_176->next=((void*)0);
        __dec_obj147=litem_176->item;
        litem_176->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_176;
        self->tail=litem_176;
    }
    self->len++;
    __result138__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_189;
int i_190;
struct sType* __result140__;
struct sType* default_value_191;
struct sType* __result141__;
default_value_191 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_189=self->head;
    i_190=0;
    while(it_189!=((void*)0)) {
        if(        position==i_190) {
            __result140__ = gComeFunResultObject = __result_obj__ = it_189->item;
            gComeFunResultObject = (void*)0;
            return __result140__;
        }
        it_189=it_189->next;
        i_190++;
    }
    memset(&default_value_191,0,sizeof(struct sType*));
    __result141__ = gComeFunResultObject = __result_obj__ = default_value_191;
    /*i*/come_call_finalizer3(default_value_191,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result141__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value339 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj157;
struct sTupleNode* __result143__;
    ((struct sNodeBase*)(__right_value339=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value339,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj157=self->tuple_elements;
    self->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj157,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result143__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result143__;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__=(void*)0;
void* __right_value340 = (void*)0;
char* __result144__;
    __result144__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value340=__builtin_string("sTupleNode")));
    /* U11 */__right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result144__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* tuple_elements_200;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct list$1sTypeph* tuple_types_201;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct list$1CVALUEph* tuple_values_202;
int n_203;
struct list$1tuple2$2charphsNodephph* o2_saved_204;
struct tuple2$2charphsNodeph* it_207;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* name_210=0;
struct sNode* node_211=0;
void* __right_value345 = (void*)0;
_Bool _if_conditional2;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sNode* value_node_212;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct sNode* exp_213;
_Bool Value_214;
_Bool __result151__;
_Bool Value_215;
_Bool __result152__;
void* __right_value350 = (void*)0;
struct CVALUE* come_value_216;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sType* type_218;
char* __dec_obj163;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sType* type_219;
struct list$1sTypeph* o2_saved_220;
struct sType* it_223;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct CVALUE* obj_value_226;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct buffer* num_string_227;
void* __right_value365 = (void*)0;
struct sType* type2_228;
void* __right_value366 = (void*)0;
char* type_name_229;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
char* __dec_obj164;
void* __right_value369 = (void*)0;
struct sType* type3_230;
void* __right_value370 = (void*)0;
struct sType* __dec_obj165;
void* __right_value371 = (void*)0;
struct sType* obj_type_231;
char* fun_name_232;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
char* generics_fun_name_233;
struct sFun* fun_234;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
char* __dec_obj166;
_Bool __result161__;
void* __right_value377 = (void*)0;
struct sType* result_type_235;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct list$1CVALUEph* come_params_236;
int i_237;
struct list$1CVALUEph* o2_saved_238;
struct CVALUE* it_239;
void* __right_value380 = (void*)0;
struct CVALUE* come_value_240;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct buffer* buf_241;
int j_242;
struct list$1CVALUEph* o2_saved_243;
struct CVALUE* it_244;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct CVALUE* come_value2_245;
void* __right_value385 = (void*)0;
char* __dec_obj167;
void* __right_value386 = (void*)0;
struct sType* __dec_obj168;
_Bool __result162__;
    tuple_elements_200=self->tuple_elements;
    tuple_types_201=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 528, "list$1sTypeph"))));
    tuple_values_202=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 529, "list$1CVALUEph"))));
    n_203=0;
    for(    o2_saved_204=(tuple_elements_200),it_207=list$1tuple2$2charphsNodephph_begin((o2_saved_204));    !list$1tuple2$2charphsNodephph_end((o2_saved_204));    it_207=list$1tuple2$2charphsNodephph_next((o2_saved_204))    ){
        multiple_assign_var2=it_207;
        name_210=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        node_211=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
        if(        (_if_conditional2=(string_operator_equals(((char*)(__right_value345=node_211->kind(node_211->_protocol_obj))),"sWildCard"))),        /* U10 */ (__right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional2) {
            value_node_212=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value346=xsprintf("Value"))),info));
            /* U11 */__right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            exp_213=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_212),(char*)come_increment_ref_count(xsprintf("v%d",n_203+1)),info));
            Value_214=node_compile(exp_213,info);
            if(            !Value_214) {
                __result151__ = (_Bool)0;
                if(value_node_212) { value_node_212 = come_decrement_ref_count2(value_node_212, ((struct sNode*)value_node_212)->finalize, ((struct sNode*)value_node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_213) { exp_213 = come_decrement_ref_count2(exp_213, ((struct sNode*)exp_213)->finalize, ((struct sNode*)exp_213)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */name_210 = come_decrement_ref_count2(name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_211) { node_211 = come_decrement_ref_count2(node_211, ((struct sNode*)node_211)->finalize, ((struct sNode*)node_211)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(tuple_types_201,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(tuple_values_202,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result151__;
            }
            else {
            }
            if(value_node_212) { value_node_212 = come_decrement_ref_count2(value_node_212, ((struct sNode*)value_node_212)->finalize, ((struct sNode*)value_node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_213) { exp_213 = come_decrement_ref_count2(exp_213, ((struct sNode*)exp_213)->finalize, ((struct sNode*)exp_213)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_215=node_compile(node_211,info);
            if(            !Value_215) {
                __result152__ = (_Bool)0;
                /* U13 */name_210 = come_decrement_ref_count2(name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_211) { node_211 = come_decrement_ref_count2(node_211, ((struct sNode*)node_211)->finalize, ((struct sNode*)node_211)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(tuple_types_201,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(tuple_values_202,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result152__;
            }
            else {
            }
        }
        come_value_216=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_202,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_216)));
        type_218=(struct sType*)come_increment_ref_count(sType_clone(come_value_216->type));
        __dec_obj163=type_218->mTupleName;
        type_218->mTupleName=(char*)come_increment_ref_count(name_210);
        /*G*/ __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        list$1sTypeph_push_back(tuple_types_201,(struct sType*)come_increment_ref_count(type_218));
        n_203++;
        /* U13 */name_210 = come_decrement_ref_count2(name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_211) { node_211 = come_decrement_ref_count2(node_211, ((struct sNode*)node_211)->finalize, ((struct sNode*)node_211)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_216,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_218,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_219=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 559, "sType")),((char*)(__right_value358=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_201)))),(_Bool)0,info));
    /* U11 */__right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_220=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_201)),it_223=list$1sTypeph_begin((o2_saved_220));    !list$1sTypeph_end((o2_saved_220));    it_223=list$1sTypeph_next((o2_saved_220))    ){
        list$1sTypeph_push_back(type_219->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_223)));
    }
    /*i*/come_call_finalizer3(o2_saved_220,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_226=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 565, "CVALUE"))));
    num_string_227=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 567, "buffer"))));
    buffer_append_str(num_string_227,"1");
    type2_228=(struct sType*)come_increment_ref_count(solve_generics(type_219,type_219,info));
    type_name_229=(char*)come_increment_ref_count(make_type_name_string(type2_228,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj164=obj_value_226->c_value;
    obj_value_226->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_229,type_name_229,((char*)(__right_value367=buffer_to_string(num_string_227))),info->sname,info->sline,type_name_229));
    /*G*/ __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_230=(struct sType*)come_increment_ref_count(sType_clone(type2_228));
    type3_230->mPointerNum++;
    type3_230->mHeap=(_Bool)1;
    type2_228->mHeap=(_Bool)1;
    __dec_obj165=obj_value_226->type;
    obj_value_226->type=(struct sType*)come_increment_ref_count(sType_clone(type2_228));
    come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_226->type->mPointerNum++;
    obj_value_226->var=((void*)0);
    append_object_to_right_values2(obj_value_226,(struct sType*)come_increment_ref_count(type3_230),info,(_Bool)0);
    obj_type_231=(struct sType*)come_increment_ref_count(sType_clone(type2_228));
    fun_name_232="initialize";
    generics_fun_name_233=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value373=make_generics_function(obj_type_231,(char*)come_increment_ref_count(__builtin_string(fun_name_232)),info,(_Bool)1)))));
    /* U11 */__right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_234=map$2charphsFunph_at(info->funcs,generics_fun_name_233,((void*)0));
    if(    fun_234==((void*)0)) {
        __dec_obj166=generics_fun_name_233;
        generics_fun_name_233=(char*)come_increment_ref_count(create_method_name(obj_type_231,(_Bool)0,((char*)(__right_value375=__builtin_string(fun_name_232))),info,(_Bool)1));
        /*G*/ __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_234=map$2charphsFunph_at(info->funcs,generics_fun_name_233,((void*)0));
        if(        fun_234==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_233,info->come_fun->mName);
            __result161__ = (_Bool)1;
            /*i*/come_call_finalizer3(tuple_types_201,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_202,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_219,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_226,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_227,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_228,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */type_name_229 = come_decrement_ref_count2(type_name_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type3_230,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_231,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */generics_fun_name_233 = come_decrement_ref_count2(generics_fun_name_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result161__;
        }
    }
    result_type_235=(struct sType*)come_increment_ref_count(sType_clone(fun_234->mResultType));
    result_type_235->mStatic=(_Bool)0;
    come_params_236=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 608, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_234->mParamTypes,0), "06str.c", 610, 5))->mHeap&&obj_value_226->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_234->mParamTypes,0), "06str.c", 611, 6)),obj_value_226->type,obj_value_226,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_236,(struct CVALUE*)come_increment_ref_count(obj_value_226));
    i_237=1;
    for(    o2_saved_238=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_202)),it_239=list$1CVALUEph_begin((o2_saved_238));    !list$1CVALUEph_end((o2_saved_238));    it_239=list$1CVALUEph_next((o2_saved_238))    ){
        come_value_240=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_239));
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_234->mParamTypes,i_237), "06str.c", 619, 7))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_234->mParamTypes,i_237), "06str.c", 619, 8))->mHeap&&come_value_240->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_234->mParamTypes,i_237), "06str.c", 620, 9)),come_value_240->type,come_value_240,info,(_Bool)1);
        }
        list$1CVALUEph_push_back(come_params_236,(struct CVALUE*)come_increment_ref_count(come_value_240));
        i_237++;
        /*i*/come_call_finalizer3(come_value_240,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_238,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_241=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 627, "buffer"))));
    buffer_append_str(buf_241,generics_fun_name_233);
    buffer_append_str(buf_241,"(");
    j_242=0;
    for(    o2_saved_243=(struct list$1CVALUEph*)come_increment_ref_count((come_params_236)),it_244=list$1CVALUEph_begin((o2_saved_243));    !list$1CVALUEph_end((o2_saved_243));    it_244=list$1CVALUEph_next((o2_saved_243))    ){
        buffer_append_str(buf_241,it_244->c_value);
        if(        j_242!=list$1CVALUEph_length(come_params_236)-1) {
            buffer_append_str(buf_241,",");
        }
        j_242++;
    }
    /*i*/come_call_finalizer3(o2_saved_243,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_241,")");
    come_value2_245=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 644, "CVALUE"))));
    __dec_obj167=come_value2_245->c_value;
    come_value2_245->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_241));
    /*G*/ __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj168=come_value2_245->type;
    come_value2_245->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_235));
    come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_245->type->mStatic=(_Bool)0;
    come_value2_245->var=((void*)0);
    if(    result_type_235->mHeap) {
        append_object_to_right_values2(come_value2_245,(struct sType*)come_increment_ref_count(result_type_235),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_245->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_245));
    __result162__ = (_Bool)1;
    /*i*/come_call_finalizer3(tuple_types_201,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_values_202,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_219,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_226,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_227,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_228,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_229 = come_decrement_ref_count2(type_name_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_230,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_231,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */generics_fun_name_233 = come_decrement_ref_count2(generics_fun_name_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_235,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_236,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_241,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_245,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result162__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_198;
struct list_item$1tuple2$2charphsNodephph* prev_it_199;
    it_198=self->head;
    while(it_198!=((void*)0)) {
        prev_it_199=it_198;
        it_198=it_198->next;
        /*i*/come_call_finalizer3(prev_it_199,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_205;
struct tuple2$2charphsNodeph* __result145__;
struct tuple2$2charphsNodeph* __result146__;
struct tuple2$2charphsNodeph* result_206;
struct tuple2$2charphsNodeph* __result147__;
result_205 = (void*)0;
result_206 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_205,0,sizeof(struct tuple2$2charphsNodeph*));
        __result145__ = gComeFunResultObject = __result_obj__ = result_205;
        gComeFunResultObject = (void*)0;
        return __result145__;
    }
    self->it=self->head;
    if(    self->it) {
        __result146__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    memset(&result_206,0,sizeof(struct tuple2$2charphsNodeph*));
    __result147__ = gComeFunResultObject = __result_obj__ = result_206;
    gComeFunResultObject = (void*)0;
    return __result147__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_208;
struct tuple2$2charphsNodeph* __result148__;
struct tuple2$2charphsNodeph* __result149__;
struct tuple2$2charphsNodeph* result_209;
struct tuple2$2charphsNodeph* __result150__;
result_208 = (void*)0;
result_209 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_208,0,sizeof(struct tuple2$2charphsNodeph*));
        __result148__ = gComeFunResultObject = __result_obj__ = result_208;
        gComeFunResultObject = (void*)0;
        return __result148__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result149__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    memset(&result_209,0,sizeof(struct tuple2$2charphsNodeph*));
    __result150__ = gComeFunResultObject = __result_obj__ = result_209;
    gComeFunResultObject = (void*)0;
    return __result150__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result153__;
void* __right_value351 = (void*)0;
struct CVALUE* result_217;
void* __right_value352 = (void*)0;
char* __dec_obj160;
void* __right_value353 = (void*)0;
struct sType* __dec_obj161;
void* __right_value354 = (void*)0;
char* __dec_obj162;
struct CVALUE* __result154__;
    if(    self==(void*)0) {
        __result153__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    result_217=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj160=result_217->c_value;
        result_217->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        /*G*/ __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj161=result_217->type;
        result_217->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_217->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_217->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj162=result_217->c_value_without_right_value_objects;
        result_217->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        /*G*/ __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result154__ = gComeFunResultObject = __result_obj__ = result_217;
    /*i*/come_call_finalizer3(result_217,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_221;
struct sType* __result155__;
struct sType* __result156__;
struct sType* result_222;
struct sType* __result157__;
result_221 = (void*)0;
result_222 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_221,0,sizeof(struct sType*));
        __result155__ = gComeFunResultObject = __result_obj__ = result_221;
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    self->it=self->head;
    if(    self->it) {
        __result156__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    memset(&result_222,0,sizeof(struct sType*));
    __result157__ = gComeFunResultObject = __result_obj__ = result_222;
    gComeFunResultObject = (void*)0;
    return __result157__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_224;
struct sType* __result158__;
struct sType* __result159__;
struct sType* result_225;
struct sType* __result160__;
result_224 = (void*)0;
result_225 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_224,0,sizeof(struct sType*));
        __result158__ = gComeFunResultObject = __result_obj__ = result_224;
        gComeFunResultObject = (void*)0;
        return __result158__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result159__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result159__;
    }
    memset(&result_225,0,sizeof(struct sType*));
    __result160__ = gComeFunResultObject = __result_obj__ = result_225;
    gComeFunResultObject = (void*)0;
    return __result160__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
struct list$1sNodeph* __dec_obj169;
struct sSomeNode* __result163__;
    ((struct sNodeBase*)(__right_value387=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value387,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj169=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj169,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result163__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result163__;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __result_obj__=(void*)0;
void* __right_value388 = (void*)0;
char* __result164__;
    __result164__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value388=__builtin_string("sSomeNode")));
    /* U11 */__right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_246;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct list$1sTypeph* tuple_types_247;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct list$1CVALUEph* tuple_values_248;
struct list$1sNodeph* o2_saved_249;
struct sNode* it_250;
_Bool Value_251;
_Bool __result165__;
void* __right_value393 = (void*)0;
struct CVALUE* come_value_252;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct sType* type_253;
struct list$1sTypeph* o2_saved_254;
struct sType* it_255;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct CVALUE* obj_value_256;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct buffer* num_string_257;
void* __right_value404 = (void*)0;
struct sType* type2_258;
void* __right_value405 = (void*)0;
char* type_name_259;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
char* __dec_obj172;
void* __right_value408 = (void*)0;
struct sType* type3_260;
void* __right_value409 = (void*)0;
struct sType* __dec_obj173;
void* __right_value410 = (void*)0;
struct sType* obj_type_261;
char* fun_name_262;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
char* generics_fun_name_263;
struct sFun* fun_264;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
char* __dec_obj174;
_Bool __result166__;
void* __right_value416 = (void*)0;
struct sType* result_type_265;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct list$1CVALUEph* come_params_266;
int i_267;
struct list$1CVALUEph* o2_saved_268;
struct CVALUE* it_269;
void* __right_value419 = (void*)0;
struct CVALUE* come_value_270;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct buffer* buf_271;
int j_272;
struct list$1CVALUEph* o2_saved_273;
struct CVALUE* it_274;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct CVALUE* come_value2_275;
void* __right_value424 = (void*)0;
char* __dec_obj175;
void* __right_value425 = (void*)0;
struct sType* __dec_obj176;
_Bool __result167__;
    tuple_elements_246=self->tuple_elements;
    tuple_types_247=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 681, "list$1sTypeph"))));
    tuple_values_248=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 682, "list$1CVALUEph"))));
    for(    o2_saved_249=(tuple_elements_246),it_250=list$1sNodeph_begin((o2_saved_249));    !list$1sNodeph_end((o2_saved_249));    it_250=list$1sNodeph_next((o2_saved_249))    ){
        Value_251=node_compile(it_250,info);
        if(        !Value_251) {
            __result165__ = (_Bool)0;
            /*i*/come_call_finalizer3(tuple_types_247,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_248,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result165__;
        }
        else {
        }
        come_value_252=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_248,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_252)));
        list$1sTypeph_push_back(tuple_types_247,(struct sType*)come_increment_ref_count(sType_clone(come_value_252->type)));
        /*i*/come_call_finalizer3(come_value_252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_253=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 696, "sType")),((char*)(__right_value397=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_247)))),(_Bool)0,info));
    /* U11 */__right_value397 = come_decrement_ref_count2(__right_value397, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_254=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_247)),it_255=list$1sTypeph_begin((o2_saved_254));    !list$1sTypeph_end((o2_saved_254));    it_255=list$1sTypeph_next((o2_saved_254))    ){
        list$1sTypeph_push_back(type_253->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_255)));
    }
    /*i*/come_call_finalizer3(o2_saved_254,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_256=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 702, "CVALUE"))));
    num_string_257=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 704, "buffer"))));
    buffer_append_str(num_string_257,"1");
    type2_258=(struct sType*)come_increment_ref_count(solve_generics(type_253,type_253,info));
    type_name_259=(char*)come_increment_ref_count(make_type_name_string(type2_258,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj172=obj_value_256->c_value;
    obj_value_256->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_259,type_name_259,((char*)(__right_value406=buffer_to_string(num_string_257))),info->sname,info->sline,type_name_259));
    /*G*/ __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_260=(struct sType*)come_increment_ref_count(sType_clone(type2_258));
    type3_260->mPointerNum++;
    type3_260->mHeap=(_Bool)1;
    type2_258->mHeap=(_Bool)1;
    __dec_obj173=obj_value_256->type;
    obj_value_256->type=(struct sType*)come_increment_ref_count(sType_clone(type2_258));
    come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_256->type->mPointerNum++;
    obj_value_256->var=((void*)0);
    append_object_to_right_values2(obj_value_256,(struct sType*)come_increment_ref_count(type3_260),info,(_Bool)0);
    obj_type_261=(struct sType*)come_increment_ref_count(sType_clone(type2_258));
    fun_name_262="initialize";
    generics_fun_name_263=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value412=make_generics_function(obj_type_261,(char*)come_increment_ref_count(__builtin_string(fun_name_262)),info,(_Bool)1)))));
    /* U11 */__right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_264=map$2charphsFunph_at(info->funcs,generics_fun_name_263,((void*)0));
    if(    fun_264==((void*)0)) {
        __dec_obj174=generics_fun_name_263;
        generics_fun_name_263=(char*)come_increment_ref_count(create_method_name(obj_type_261,(_Bool)0,((char*)(__right_value414=__builtin_string(fun_name_262))),info,(_Bool)1));
        /*G*/ __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_264=map$2charphsFunph_at(info->funcs,generics_fun_name_263,((void*)0));
        if(        fun_264==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_263,info->come_fun->mName);
            __result166__ = (_Bool)1;
            /*i*/come_call_finalizer3(tuple_types_247,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_248,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_253,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_256,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_257,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_258,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */type_name_259 = come_decrement_ref_count2(type_name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type3_260,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_261,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */generics_fun_name_263 = come_decrement_ref_count2(generics_fun_name_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result166__;
        }
    }
    result_type_265=(struct sType*)come_increment_ref_count(sType_clone(fun_264->mResultType));
    result_type_265->mStatic=(_Bool)0;
    come_params_266=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 745, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_264->mParamTypes,0), "06str.c", 747, 10))->mHeap&&obj_value_256->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_264->mParamTypes,0), "06str.c", 748, 11)),obj_value_256->type,obj_value_256,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_266,(struct CVALUE*)come_increment_ref_count(obj_value_256));
    i_267=1;
    for(    o2_saved_268=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_248)),it_269=list$1CVALUEph_begin((o2_saved_268));    !list$1CVALUEph_end((o2_saved_268));    it_269=list$1CVALUEph_next((o2_saved_268))    ){
        come_value_270=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_269));
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_264->mParamTypes,i_267), "06str.c", 756, 12))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_264->mParamTypes,i_267), "06str.c", 756, 13))->mHeap&&come_value_270->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_264->mParamTypes,i_267), "06str.c", 757, 14)),come_value_270->type,come_value_270,info,(_Bool)1);
        }
        list$1CVALUEph_push_back(come_params_266,(struct CVALUE*)come_increment_ref_count(come_value_270));
        i_267++;
        /*i*/come_call_finalizer3(come_value_270,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_268,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_271=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 764, "buffer"))));
    buffer_append_str(buf_271,generics_fun_name_263);
    buffer_append_str(buf_271,"(");
    j_272=0;
    for(    o2_saved_273=(struct list$1CVALUEph*)come_increment_ref_count((come_params_266)),it_274=list$1CVALUEph_begin((o2_saved_273));    !list$1CVALUEph_end((o2_saved_273));    it_274=list$1CVALUEph_next((o2_saved_273))    ){
        buffer_append_str(buf_271,it_274->c_value);
        if(        j_272!=list$1CVALUEph_length(come_params_266)-1) {
            buffer_append_str(buf_271,",");
        }
        j_272++;
    }
    /*i*/come_call_finalizer3(o2_saved_273,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_271,")");
    come_value2_275=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 781, "CVALUE"))));
    __dec_obj175=come_value2_275->c_value;
    come_value2_275->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_271));
    /*G*/ __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj176=come_value2_275->type;
    come_value2_275->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_265));
    come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_275->type->mStatic=(_Bool)0;
    come_value2_275->var=((void*)0);
    if(    result_type_265->mHeap) {
        append_object_to_right_values2(come_value2_275,(struct sType*)come_increment_ref_count(result_type_265),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_275->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_275));
    __result167__ = (_Bool)1;
    /*i*/come_call_finalizer3(tuple_types_247,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_values_248,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_253,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_256,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_257,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_258,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_259 = come_decrement_ref_count2(type_name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_260,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_261,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */generics_fun_name_263 = come_decrement_ref_count2(generics_fun_name_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_266,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_271,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result167__;
}

struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value426 = (void*)0;
struct sNullReturnValue* __result168__;
    ((struct sNodeBase*)(__right_value426=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value426,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result168__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result168__;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
void* __right_value427 = (void*)0;
char* __result169__;
    __result169__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value427=__builtin_string("sNullReturnValue")));
    /* U11 */__right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result169__;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct CVALUE* come_value_276;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct buffer* buf_277;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
char* var_name_279;
void* __right_value434 = (void*)0;
struct sType* result_type_280;
void* __right_value435 = (void*)0;
struct sType* result_type2_281;
struct sType* left_type_282;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct CVALUE* come_value2_283;
char* __dec_obj178;
struct sType* __dec_obj179;
    if(    info->come_fun) {
        come_value_276=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 816, "CVALUE"))));
        buf_277=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 818, "buffer"))));
        static int num_278=0;
        num_278++;
        var_name_279=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value432=int_to_string(num_278)))));
        /* U11 */__right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_280=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
        result_type2_281=(struct sType*)come_increment_ref_count(solve_generics(result_type_280,info->generics_type,info));
        left_type_282=(struct sType*)come_increment_ref_count(result_type2_281);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value436=make_define_var(left_type_282,var_name_279,(_Bool)0,info))));
        /* U11 */__right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_279,((char*)(__right_value437=make_type_name_string(left_type_282,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        /* U11 */__right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_283=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 834, "CVALUE"))));
        __dec_obj178=come_value2_283->c_value;
        come_value2_283->c_value=(char*)come_increment_ref_count(var_name_279);
        /*G*/ __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj179=come_value2_283->type;
        come_value2_283->type=(struct sType*)come_increment_ref_count(result_type2_281);
        come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_283->type->mStatic=(_Bool)0;
        come_value2_283->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_283));
        /*i*/come_call_finalizer3(come_value_276,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_277,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_279 = come_decrement_ref_count2(var_name_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_280,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_281,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_282,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_283,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value444 = (void*)0;
struct sNode* __result172__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 851, "struct sNode");
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value441=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 851, "sNullReturnValue")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result172__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value444=_inf_value2));
    /*g*/come_call_finalizer3(__right_value441,sNullReturnValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value444) { __right_value444 = come_decrement_ref_count2(__right_value444, ((struct sNode*)__right_value444)->finalize, ((struct sNode*)__right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result172__;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
char* __dec_obj180;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj180=self->sname;
            /*G*/ __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
struct sNullReturnValue* __result170__;
void* __right_value442 = (void*)0;
struct sNullReturnValue* result_284;
void* __right_value443 = (void*)0;
char* __dec_obj181;
struct sNullReturnValue* __result171__;
    if(    self==(void*)0) {
        __result170__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    result_284=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "sNullReturnValue"));
    if(    self!=((void*)0)) {
        result_284->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj181=result_284->sname;
        result_284->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result171__ = gComeFunResultObject = __result_obj__ = result_284;
    /*i*/come_call_finalizer3(result_284,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value445 = (void*)0;
struct sNullReturnValueOfException* __result173__;
    ((struct sNodeBase*)(__right_value445=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value445,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result173__;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
void* __right_value446 = (void*)0;
char* __result174__;
    __result174__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value446=__builtin_string("sNullReturnValue")));
    /* U11 */__right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result174__;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct CVALUE* come_value_285;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct buffer* buf_286;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
char* var_name_288;
void* __right_value453 = (void*)0;
struct sType* result_type_289;
void* __right_value454 = (void*)0;
struct sType* result_type2_290;
struct sType* __dec_obj183;
void* __right_value455 = (void*)0;
struct sType* left_type_291;
_Bool __result175__;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct CVALUE* come_value2_292;
char* __dec_obj184;
struct sType* __dec_obj185;
    if(    info->come_fun) {
        come_value_285=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 869, "CVALUE"))));
        buf_286=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 871, "buffer"))));
        static int num_287=0;
        num_287++;
        var_name_288=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value451=int_to_string(num_287)))));
        /* U11 */__right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_289=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
        result_type2_290=(struct sType*)come_increment_ref_count(solve_generics(result_type_289,info->generics_type,info));
        if(        result_type2_290->mNoSolvedGenericsType->v1) {
            __dec_obj183=result_type2_290;
            result_type2_290=(struct sType*)come_increment_ref_count(result_type2_290->mNoSolvedGenericsType->v1);
            come_call_finalizer3(__dec_obj183,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        left_type_291=(struct sType*)come_increment_ref_count(sType_clone(list$1sTypephp_operator_load_element(result_type2_290->mGenericsTypes,0)));
        if(        left_type_291==((void*)0)||string_operator_not_equals(result_type2_290->mClass->mName,"tuple2")) {
            err_msg(info,"function is not exception type");
            __result175__ = (_Bool)0;
            /*i*/come_call_finalizer3(come_value_285,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_286,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_288 = come_decrement_ref_count2(var_name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_289,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type2_290,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result175__;
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value456=make_define_var(left_type_291,var_name_288,(_Bool)0,info))));
        /* U11 */__right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_288,((char*)(__right_value457=make_type_name_string(left_type_291,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        /* U11 */__right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_292=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 896, "CVALUE"))));
        __dec_obj184=come_value2_292->c_value;
        come_value2_292->c_value=(char*)come_increment_ref_count(var_name_288);
        /*G*/ __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj185=come_value2_292->type;
        come_value2_292->type=(struct sType*)come_increment_ref_count(left_type_291);
        come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_292->type->mStatic=(_Bool)0;
        come_value2_292->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_292));
        /*i*/come_call_finalizer3(come_value_285,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_286,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_288 = come_decrement_ref_count2(var_name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_289,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_290,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_292,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value464 = (void*)0;
struct sNode* __result178__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 913, "struct sNode");
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value461=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 913, "sNullReturnValueOfException")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result178__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value464=_inf_value3));
    /*g*/come_call_finalizer3(__right_value461,sNullReturnValueOfException_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value464) { __right_value464 = come_decrement_ref_count2(__right_value464, ((struct sNode*)__right_value464)->finalize, ((struct sNode*)__right_value464)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result178__;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
char* __dec_obj186;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj186=self->sname;
            /*G*/ __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
struct sNullReturnValueOfException* __result176__;
void* __right_value462 = (void*)0;
struct sNullReturnValueOfException* result_293;
void* __right_value463 = (void*)0;
char* __dec_obj187;
struct sNullReturnValueOfException* __result177__;
    if(    self==(void*)0) {
        __result176__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result176__;
    }
    result_293=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "sNullReturnValueOfException"));
    if(    self!=((void*)0)) {
        result_293->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj187=result_293->sname;
        result_293->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result177__ = gComeFunResultObject = __result_obj__ = result_293;
    /*i*/come_call_finalizer3(result_293,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result177__;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value465 = (void*)0;
struct sType* __dec_obj188;
struct sNullValue* __result179__;
    ((struct sNodeBase*)(__right_value465=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value465,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj188=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result179__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result179__;
}

char* sNullValue_kind(struct sNullValue* self){
void* __result_obj__=(void*)0;
void* __right_value466 = (void*)0;
char* __result180__;
    __result180__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value466=__builtin_string("sNullValue")));
    /* U11 */__right_value466 = come_decrement_ref_count2(__right_value466, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct CVALUE* come_value_294;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct buffer* buf_295;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
char* var_name_297;
struct sType* left_type_298;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct CVALUE* come_value2_299;
char* __dec_obj191;
struct sType* __dec_obj192;
_Bool __result181__;
    come_value_294=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 932, "CVALUE"))));
    buf_295=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 934, "buffer"))));
    static int num_296=0;
    num_296++;
    var_name_297=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value471=int_to_string(num_296)))));
    /* U11 */__right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    left_type_298=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value473=make_define_var(left_type_298,var_name_297,(_Bool)0,info))));
    /* U11 */__right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_297,((char*)(__right_value474=make_type_name_string(left_type_298,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    /* U11 */__right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_299=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 946, "CVALUE"))));
    __dec_obj191=come_value2_299->c_value;
    come_value2_299->c_value=(char*)come_increment_ref_count(var_name_297);
    /*G*/ __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj192=come_value2_299->type;
    come_value2_299->type=(struct sType*)come_increment_ref_count(self->type);
    come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_299->type->mStatic=(_Bool)0;
    come_value2_299->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_299));
    __result181__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_294,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_295,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_297 = come_decrement_ref_count2(var_name_297, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type_298,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_299,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result181__;
}

struct sNode* create_null_value(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value482 = (void*)0;
struct sNode* __result184__;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 962, "struct sNode");
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value478=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "06str.c", 962, "sNullValue")),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result184__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value482=_inf_value4));
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value478,sNullValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value482) { __right_value482 = come_decrement_ref_count2(__right_value482, ((struct sNode*)__right_value482)->finalize, ((struct sNode*)__right_value482)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result184__;
}

static void sNullValue_finalize(struct sNullValue* self){
char* __dec_obj193;
struct sType* __dec_obj194;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj193=self->sname;
            /*G*/ __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj194=self->type;
            come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
void* __result_obj__=(void*)0;
struct sNullValue* __result182__;
void* __right_value479 = (void*)0;
struct sNullValue* result_300;
void* __right_value480 = (void*)0;
char* __dec_obj195;
void* __right_value481 = (void*)0;
struct sType* __dec_obj196;
struct sNullValue* __result183__;
    if(    self==(void*)0) {
        __result182__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result182__;
    }
    result_300=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "sNullValue"));
    if(    self!=((void*)0)) {
        result_300->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj195=result_300->sname;
        result_300->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj196=result_300->type;
        result_300->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result183__ = gComeFunResultObject = __result_obj__ = result_300;
    /*i*/come_call_finalizer3(result_300,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value483 = (void*)0;
struct list$1sNodeph* __dec_obj197;
struct sNoneNode* __result185__;
    ((struct sNodeBase*)(__right_value483=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value483,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj197=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj197,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result185__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result185__;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __result_obj__=(void*)0;
void* __right_value484 = (void*)0;
char* __result186__;
    __result186__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value484=__builtin_string("sNoneNode")));
    /* U11 */__right_value484 = come_decrement_ref_count2(__right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_301;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct list$1sTypeph* tuple_types_302;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct list$1CVALUEph* tuple_values_303;
int i_304;
struct list$1sNodeph* o2_saved_305;
struct sNode* it_306;
_Bool Value_307;
_Bool __result187__;
void* __right_value489 = (void*)0;
struct CVALUE* come_value_308;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sType* string_type_309;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sType* type_310;
struct list$1sTypeph* o2_saved_311;
struct sType* it_312;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct CVALUE* obj_value_313;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct buffer* num_string_314;
void* __right_value503 = (void*)0;
struct sType* type2_315;
void* __right_value504 = (void*)0;
char* type_name_316;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
char* __dec_obj200;
void* __right_value507 = (void*)0;
struct sType* type3_317;
void* __right_value508 = (void*)0;
struct sType* __dec_obj201;
void* __right_value509 = (void*)0;
struct sType* obj_type_318;
char* fun_name_319;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
char* generics_fun_name_320;
struct sFun* fun_321;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
char* __dec_obj202;
_Bool __result188__;
void* __right_value515 = (void*)0;
struct sType* result_type_322;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct list$1CVALUEph* come_params_323;
struct list$1CVALUEph* o2_saved_324;
struct CVALUE* it_325;
void* __right_value518 = (void*)0;
struct CVALUE* come_value_326;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct buffer* buf_327;
int j_328;
struct list$1CVALUEph* o2_saved_329;
struct CVALUE* it_330;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct CVALUE* come_value2_331;
void* __right_value523 = (void*)0;
char* __dec_obj203;
void* __right_value524 = (void*)0;
struct sType* __dec_obj204;
_Bool __result189__;
    tuple_elements_301=self->tuple_elements;
    tuple_types_302=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 982, "list$1sTypeph"))));
    tuple_values_303=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 983, "list$1CVALUEph"))));
    i_304=0;
    for(    o2_saved_305=(tuple_elements_301),it_306=list$1sNodeph_begin((o2_saved_305));    !list$1sNodeph_end((o2_saved_305));    it_306=list$1sNodeph_next((o2_saved_305))    ){
        Value_307=node_compile(it_306,info);
        if(        !Value_307) {
            __result187__ = (_Bool)0;
            /*i*/come_call_finalizer3(tuple_types_302,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_303,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result187__;
        }
        else {
        }
        come_value_308=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_303,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_308)));
        list$1sTypeph_push_back(tuple_types_302,(struct sType*)come_increment_ref_count(sType_clone(come_value_308->type)));
        if(        i_304==1) {
            string_type_309=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 998, "sType")),"char*",(_Bool)0,info));
            string_type_309->mHeap=(_Bool)1;
            check_assign_type(((char*)(__right_value494=xsprintf("invalid none type"))),string_type_309,come_value_308->type,come_value_308,(_Bool)0,(_Bool)1,(_Bool)0,info);
            /* U11 */__right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(string_type_309,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        i_304++;
        /*i*/come_call_finalizer3(come_value_308,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_310=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1006, "sType")),((char*)(__right_value496=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_302)))),(_Bool)0,info));
    /* U11 */__right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_311=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_302)),it_312=list$1sTypeph_begin((o2_saved_311));    !list$1sTypeph_end((o2_saved_311));    it_312=list$1sTypeph_next((o2_saved_311))    ){
        list$1sTypeph_push_back(type_310->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_312)));
    }
    /*i*/come_call_finalizer3(o2_saved_311,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_313=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1012, "CVALUE"))));
    num_string_314=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1014, "buffer"))));
    buffer_append_str(num_string_314,"1");
    type2_315=(struct sType*)come_increment_ref_count(solve_generics(type_310,type_310,info));
    type_name_316=(char*)come_increment_ref_count(make_type_name_string(type2_315,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj200=obj_value_313->c_value;
    obj_value_313->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_316,type_name_316,((char*)(__right_value505=buffer_to_string(num_string_314))),info->sname,info->sline,type_name_316));
    /*G*/ __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_317=(struct sType*)come_increment_ref_count(sType_clone(type2_315));
    type3_317->mPointerNum++;
    type3_317->mHeap=(_Bool)1;
    type2_315->mHeap=(_Bool)1;
    __dec_obj201=obj_value_313->type;
    obj_value_313->type=(struct sType*)come_increment_ref_count(sType_clone(type2_315));
    come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_313->type->mPointerNum++;
    obj_value_313->var=((void*)0);
    append_object_to_right_values2(obj_value_313,(struct sType*)come_increment_ref_count(type3_317),info,(_Bool)0);
    obj_type_318=(struct sType*)come_increment_ref_count(sType_clone(type2_315));
    fun_name_319="initialize";
    generics_fun_name_320=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value511=make_generics_function(obj_type_318,(char*)come_increment_ref_count(__builtin_string(fun_name_319)),info,(_Bool)1)))));
    /* U11 */__right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_321=map$2charphsFunph_at(info->funcs,generics_fun_name_320,((void*)0));
    if(    fun_321==((void*)0)) {
        __dec_obj202=generics_fun_name_320;
        generics_fun_name_320=(char*)come_increment_ref_count(create_method_name(obj_type_318,(_Bool)0,((char*)(__right_value513=__builtin_string(fun_name_319))),info,(_Bool)1));
        /*G*/ __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_321=map$2charphsFunph_at(info->funcs,generics_fun_name_320,((void*)0));
        if(        fun_321==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_320,info->come_fun->mName);
            __result188__ = (_Bool)1;
            /*i*/come_call_finalizer3(tuple_types_302,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_303,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_313,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_314,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_315,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */type_name_316 = come_decrement_ref_count2(type_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type3_317,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_318,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */generics_fun_name_320 = come_decrement_ref_count2(generics_fun_name_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result188__;
        }
    }
    result_type_322=(struct sType*)come_increment_ref_count(sType_clone(fun_321->mResultType));
    result_type_322->mStatic=(_Bool)0;
    come_params_323=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1055, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_321->mParamTypes,0), "06str.c", 1057, 15))->mHeap&&obj_value_313->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_321->mParamTypes,0), "06str.c", 1058, 16)),obj_value_313->type,obj_value_313,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_323,(struct CVALUE*)come_increment_ref_count(obj_value_313));
    i_304=1;
    for(    o2_saved_324=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_303)),it_325=list$1CVALUEph_begin((o2_saved_324));    !list$1CVALUEph_end((o2_saved_324));    it_325=list$1CVALUEph_next((o2_saved_324))    ){
        come_value_326=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_325));
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_321->mParamTypes,i_304), "06str.c", 1066, 17))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_321->mParamTypes,i_304), "06str.c", 1066, 18))->mHeap&&come_value_326->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_321->mParamTypes,i_304), "06str.c", 1067, 19)),come_value_326->type,come_value_326,info,(_Bool)1);
        }
        list$1CVALUEph_push_back(come_params_323,(struct CVALUE*)come_increment_ref_count(come_value_326));
        i_304++;
        /*i*/come_call_finalizer3(come_value_326,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_324,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_327=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1074, "buffer"))));
    buffer_append_str(buf_327,generics_fun_name_320);
    buffer_append_str(buf_327,"(");
    j_328=0;
    for(    o2_saved_329=(struct list$1CVALUEph*)come_increment_ref_count((come_params_323)),it_330=list$1CVALUEph_begin((o2_saved_329));    !list$1CVALUEph_end((o2_saved_329));    it_330=list$1CVALUEph_next((o2_saved_329))    ){
        buffer_append_str(buf_327,it_330->c_value);
        if(        j_328!=list$1CVALUEph_length(come_params_323)-1) {
            buffer_append_str(buf_327,",");
        }
        j_328++;
    }
    /*i*/come_call_finalizer3(o2_saved_329,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_327,")");
    come_value2_331=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1091, "CVALUE"))));
    __dec_obj203=come_value2_331->c_value;
    come_value2_331->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_327));
    /*G*/ __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj204=come_value2_331->type;
    come_value2_331->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_322));
    come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_331->type->mStatic=(_Bool)0;
    come_value2_331->var=((void*)0);
    if(    result_type_322->mHeap) {
        append_object_to_right_values2(come_value2_331,(struct sType*)come_increment_ref_count(result_type_322),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_331->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_331));
    __result189__ = (_Bool)1;
    /*i*/come_call_finalizer3(tuple_types_302,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_values_303,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_313,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_314,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_315,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_316 = come_decrement_ref_count2(type_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_317,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_318,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */generics_fun_name_320 = come_decrement_ref_count2(generics_fun_name_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_322,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_323,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_327,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_331,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result189__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value525 = (void*)0;
struct list$1sNodeph* __dec_obj205;
struct list$1sNodeph* __dec_obj206;
struct sMapNode* __result190__;
    ((struct sNodeBase*)(__right_value525=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value525,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj205=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj205,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj206=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj206,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result190__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result190__;
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__=(void*)0;
void* __right_value526 = (void*)0;
char* __result191__;
    __result191__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value526=__builtin_string("sMapNode")));
    /* U11 */__right_value526 = come_decrement_ref_count2(__right_value526, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result191__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_332;
struct list$1sNodeph* map_elements_333;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct list$1CVALUEph* key_params_334;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct list$1CVALUEph* element_params_335;
struct sType* map_key_type_336;
struct sType* map_element_type_337;
int i_338;
struct sNode* key_elements_339;
struct sNode* elements_343;
void* __right_value531 = (void*)0;
_Bool _if_conditional3;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sNode* value_node_344;
struct sNode* exp_345;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_346;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sNode* __dec_obj210;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_347;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sNode* __dec_obj211;
void* __right_value552 = (void*)0;
struct sNode* __dec_obj212;
_Bool Value_348;
_Bool __result194__;
void* __right_value553 = (void*)0;
struct CVALUE* come_value_349;
void* __right_value554 = (void*)0;
struct sType* __dec_obj213;
_Bool Value_350;
_Bool __result195__;
void* __right_value555 = (void*)0;
struct CVALUE* come_value_351;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sType* __dec_obj214;
void* __right_value558 = (void*)0;
_Bool _if_conditional4;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sNode* value_node_352;
struct sNode* exp2_353;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_354;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sNode* __dec_obj215;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_355;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct sNode* __dec_obj216;
void* __right_value579 = (void*)0;
struct sNode* __dec_obj217;
_Bool Value_356;
_Bool __result196__;
void* __right_value580 = (void*)0;
struct CVALUE* come_value2_357;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sType* __dec_obj218;
_Bool Value_358;
_Bool __result197__;
void* __right_value583 = (void*)0;
struct CVALUE* come_value2_359;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct sType* __dec_obj219;
void* __right_value586 = (void*)0;
struct sType* key_type_values_361;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
char* var_name_362;
void* __right_value589 = (void*)0;
struct sVar* var__363;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sType* element_type_values_364;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
char* var_name2_365;
void* __right_value594 = (void*)0;
struct sVar* var2__366;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct buffer* source_367;
int i_368;
struct CVALUE* key_param_369;
struct CVALUE* element_param_370;
void* __right_value598 = (void*)0;
char* c_value_371;
void* __right_value599 = (void*)0;
char* c_value_372;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sType* map_type_373;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sType* obj_type_374;
char* fun_name_375;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
char* generics_fun_name_376;
struct sFun* fun_377;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
char* __dec_obj220;
_Bool __result198__;
void* __right_value610 = (void*)0;
struct sType* result_type_378;
struct sType* type_379;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct CVALUE* obj_value_380;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct buffer* num_string_381;
void* __right_value615 = (void*)0;
struct sType* type2_382;
void* __right_value616 = (void*)0;
char* type_name_383;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
char* __dec_obj221;
void* __right_value619 = (void*)0;
struct sType* type3_384;
void* __right_value620 = (void*)0;
struct sType* __dec_obj222;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct list$1CVALUEph* come_params_385;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct CVALUE* come_value2_386;
void* __right_value625 = (void*)0;
char* __dec_obj223;
struct sType* __dec_obj224;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct CVALUE* come_value3_387;
void* __right_value628 = (void*)0;
char* __dec_obj225;
struct sType* __dec_obj226;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct CVALUE* come_value4_388;
void* __right_value631 = (void*)0;
char* __dec_obj227;
struct sType* __dec_obj228;
int j_389;
struct list$1CVALUEph* o2_saved_390;
struct CVALUE* it_391;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct CVALUE* come_value5_392;
void* __right_value634 = (void*)0;
char* __dec_obj229;
void* __right_value635 = (void*)0;
struct sType* __dec_obj230;
_Bool __result199__;
exp_345 = (void*)0;
exp2_353 = (void*)0;
    map_key_elements_332=self->map_key_elements;
    map_elements_333=self->map_elements;
    key_params_334=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1131, "list$1CVALUEph"))));
    element_params_335=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1132, "list$1CVALUEph"))));
    map_key_type_336=((void*)0);
    map_element_type_337=((void*)0);
    for(    i_338=0;    i_338<list$1sNodeph_length(map_key_elements_332);    i_338++    ){
        key_elements_339=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_key_elements_332,i_338), "06str.c", 1137, 20));
        elements_343=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_elements_333,i_338), "06str.c", 1138, 21));
        if(        (_if_conditional3=(string_operator_equals(((char*)(__right_value531=key_elements_339->kind(key_elements_339->_protocol_obj))),"sWildCard"))),        /* U10 */ (__right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional3) {
            value_node_344=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value532=xsprintf("Value"))),info));
            /* U11 */__right_value532 = come_decrement_ref_count2(__right_value532, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_346=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1145, "list$1tuple2$2charphsNodephph"))));
                list$1tuple2$2charphsNodephph_add(params_346,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1146, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_344))));
                __dec_obj210=exp_345;
                exp_345=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value539=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_344),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_346),((void*)0),0,((void*)0),info));
                /* U1 */ if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); };
                /* U11 */__right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(params_346,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_347=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1151, "list$1tuple2$2charphsNodephph"))));
                list$1tuple2$2charphsNodephph_add(params_347,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1152, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_345))));
                list$1tuple2$2charphsNodephph_add(params_347,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1153, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_338,info)))));
                __dec_obj211=exp_345;
                exp_345=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value550=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_345),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_347),((void*)0),0,((void*)0),info));
                /* U1 */ if(__dec_obj211) { __dec_obj211 = come_decrement_ref_count2(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0,0, (void*)0); };
                /* U11 */__right_value550 = come_decrement_ref_count2(__right_value550, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj212=exp_345;
                exp_345=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_345,info));
                /* U1 */ if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); };
                /*i*/come_call_finalizer3(params_347,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_348=node_compile(exp_345,info);
            if(            !Value_348) {
                __result194__ = (_Bool)0;
                if(value_node_344) { value_node_344 = come_decrement_ref_count2(value_node_344, ((struct sNode*)value_node_344)->finalize, ((struct sNode*)value_node_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_345) { exp_345 = come_decrement_ref_count2(exp_345, ((struct sNode*)exp_345)->finalize, ((struct sNode*)exp_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(key_params_334,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(element_params_335,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_key_type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_element_type_337,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result194__;
            }
            else {
            }
            come_value_349=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_push_back(key_params_334,(struct CVALUE*)come_increment_ref_count(come_value_349));
            __dec_obj213=map_key_type_336;
            map_key_type_336=(struct sType*)come_increment_ref_count(sType_clone(come_value_349->type));
            come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_344) { value_node_344 = come_decrement_ref_count2(value_node_344, ((struct sNode*)value_node_344)->finalize, ((struct sNode*)value_node_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_345) { exp_345 = come_decrement_ref_count2(exp_345, ((struct sNode*)exp_345)->finalize, ((struct sNode*)exp_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_349,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_350=node_compile(key_elements_339,info);
            if(            !Value_350) {
                __result195__ = (_Bool)0;
                /*i*/come_call_finalizer3(key_params_334,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(element_params_335,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_key_type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_element_type_337,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result195__;
            }
            else {
            }
            come_value_351=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_key_type_336) {
                check_assign_type(((char*)(__right_value556=xsprintf("invalid map key type"))),map_key_type_336,come_value_351->type,come_value_351,(_Bool)0,(_Bool)1,(_Bool)0,info);
                /* U11 */__right_value556 = come_decrement_ref_count2(__right_value556, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_push_back(key_params_334,(struct CVALUE*)come_increment_ref_count(come_value_351));
            __dec_obj214=map_key_type_336;
            map_key_type_336=(struct sType*)come_increment_ref_count(sType_clone(come_value_351->type));
            come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_351,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        (_if_conditional4=(string_operator_equals(((char*)(__right_value558=elements_343->kind(elements_343->_protocol_obj))),"sWildCard"))),        /* U10 */ (__right_value558 = come_decrement_ref_count2(__right_value558, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional4) {
            value_node_352=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value559=xsprintf("Value"))),info));
            /* U11 */__right_value559 = come_decrement_ref_count2(__right_value559, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_354=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1189, "list$1tuple2$2charphsNodephph"))));
                list$1tuple2$2charphsNodephph_add(params_354,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1190, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_352))));
                __dec_obj215=exp2_353;
                exp2_353=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value566=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_352),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_354),((void*)0),0,((void*)0),info));
                /* U1 */ if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); };
                /* U11 */__right_value566 = come_decrement_ref_count2(__right_value566, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(params_354,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_355=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1195, "list$1tuple2$2charphsNodephph"))));
                list$1tuple2$2charphsNodephph_add(params_355,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1196, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_353))));
                list$1tuple2$2charphsNodephph_add(params_355,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1197, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_338,info)))));
                __dec_obj216=exp2_353;
                exp2_353=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value577=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_353),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_355),((void*)0),0,((void*)0),info));
                /* U1 */ if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); };
                /* U11 */__right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj217=exp2_353;
                exp2_353=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_353,info));
                /* U1 */ if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); };
                /*i*/come_call_finalizer3(params_355,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_356=node_compile(exp2_353,info);
            if(            !Value_356) {
                __result196__ = (_Bool)0;
                if(value_node_352) { value_node_352 = come_decrement_ref_count2(value_node_352, ((struct sNode*)value_node_352)->finalize, ((struct sNode*)value_node_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp2_353) { exp2_353 = come_decrement_ref_count2(exp2_353, ((struct sNode*)exp2_353)->finalize, ((struct sNode*)exp2_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(key_params_334,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(element_params_335,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_key_type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_element_type_337,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result196__;
            }
            else {
            }
            come_value2_357=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_337) {
                check_assign_type(((char*)(__right_value581=xsprintf("invalid map element type"))),map_element_type_337,come_value2_357->type,come_value2_357,(_Bool)0,(_Bool)1,(_Bool)0,info);
                /* U11 */__right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_push_back(element_params_335,(struct CVALUE*)come_increment_ref_count(come_value2_357));
            __dec_obj218=map_element_type_337;
            map_element_type_337=(struct sType*)come_increment_ref_count(sType_clone(come_value2_357->type));
            come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_352) { value_node_352 = come_decrement_ref_count2(value_node_352, ((struct sNode*)value_node_352)->finalize, ((struct sNode*)value_node_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_353) { exp2_353 = come_decrement_ref_count2(exp2_353, ((struct sNode*)exp2_353)->finalize, ((struct sNode*)exp2_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value2_357,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_358=node_compile(elements_343,info);
            if(            !Value_358) {
                __result197__ = (_Bool)0;
                /*i*/come_call_finalizer3(key_params_334,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(element_params_335,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_key_type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_element_type_337,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result197__;
            }
            else {
            }
            come_value2_359=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_337) {
                check_assign_type(((char*)(__right_value584=xsprintf("invalid map element type"))),map_element_type_337,come_value2_359->type,come_value2_359,(_Bool)0,(_Bool)1,(_Bool)0,info);
                /* U11 */__right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_push_back(element_params_335,(struct CVALUE*)come_increment_ref_count(come_value2_359));
            __dec_obj219=map_element_type_337;
            map_element_type_337=(struct sType*)come_increment_ref_count(sType_clone(come_value2_359->type));
            come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value2_359,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    static int map_value_num_360=0;
    key_type_values_361=(struct sType*)come_increment_ref_count(sType_clone(map_key_type_336));
    list$1sNodeph_push_back(key_type_values_361->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(key_params_334),info)));
    key_type_values_361->mHeap=(_Bool)0;
    var_name_362=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_360));
    add_variable_to_table(var_name_362,(struct sType*)come_increment_ref_count(sType_clone(key_type_values_361)),info);
    var__363=get_variable_from_table(info->lv_table,var_name_362);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value590=make_define_var(key_type_values_361,var__363->mCValueName,(_Bool)0,info))));
    /* U11 */__right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    element_type_values_364=(struct sType*)come_increment_ref_count(sType_clone(map_element_type_337));
    list$1sNodeph_push_back(element_type_values_364->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(element_params_335),info)));
    element_type_values_364->mHeap=(_Bool)0;
    var_name2_365=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_360));
    add_variable_to_table(var_name2_365,(struct sType*)come_increment_ref_count(sType_clone(element_type_values_364)),info);
    var2__366=get_variable_from_table(info->lv_table,var_name2_365);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value595=make_define_var(element_type_values_364,var2__366->mCValueName,(_Bool)0,info))));
    /* U11 */__right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_367=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1258, "buffer"))));
    buffer_append_str(source_367,"(");
    for(    i_368=0;    i_368<list$1CVALUEph_length(key_params_334);    i_368++    ){
        key_param_369=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(key_params_334,i_368), "06str.c", 1263, 22));
        element_param_370=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(element_params_335,i_368), "06str.c", 1264, 23));
        if(        map_key_type_336->mHeap) {
            c_value_371=(char*)come_increment_ref_count(increment_ref_count_object(key_param_369->type,key_param_369->c_value,info));
            buffer_append_format(source_367,"%s[%d]=%s,\n",var__363->mCValueName,i_368,c_value_371);
            /* U13 */c_value_371 = come_decrement_ref_count2(c_value_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_367,"%s[%d]=%s,\n",var__363->mCValueName,i_368,key_param_369->c_value);
        }
        if(        map_element_type_337->mHeap) {
            c_value_372=(char*)come_increment_ref_count(increment_ref_count_object(element_param_370->type,element_param_370->c_value,info));
            buffer_append_format(source_367,"%s[%d]=%s,\n",var2__366->mCValueName,i_368,c_value_372);
            /* U13 */c_value_372 = come_decrement_ref_count2(c_value_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_367,"%s[%d]=%s,\n",var2__366->mCValueName,i_368,element_param_370->c_value);
        }
    }
    map_type_373=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1283, "sType")),"map",(_Bool)0,info));
    list$1sTypeph_push_back(map_type_373->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(map_key_type_336)));
    list$1sTypeph_push_back(map_type_373->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(map_element_type_337)));
    obj_type_374=(struct sType*)come_increment_ref_count(sType_clone(map_type_373));
    fun_name_375="initialize_with_values";
    generics_fun_name_376=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value606=make_generics_function(obj_type_374,(char*)come_increment_ref_count(__builtin_string(fun_name_375)),info,(_Bool)1)))));
    /* U11 */__right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_377=map$2charphsFunph_at(info->funcs,generics_fun_name_376,((void*)0));
    if(    fun_377==((void*)0)) {
        __dec_obj220=generics_fun_name_376;
        generics_fun_name_376=(char*)come_increment_ref_count(create_method_name(obj_type_374,(_Bool)0,((char*)(__right_value608=__builtin_string(fun_name_375))),info,(_Bool)1));
        /*G*/ __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_377=map$2charphsFunph_at(info->funcs,generics_fun_name_376,((void*)0));
        if(        fun_377==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_376,info->come_fun->mName);
            __result198__ = (_Bool)1;
            /*i*/come_call_finalizer3(key_params_334,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(element_params_335,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_key_type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_element_type_337,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(key_type_values_361,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_362 = come_decrement_ref_count2(var_name_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(element_type_values_364,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name2_365 = come_decrement_ref_count2(var_name2_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(source_367,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_type_373,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_374,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */generics_fun_name_376 = come_decrement_ref_count2(generics_fun_name_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result198__;
        }
    }
    result_type_378=(struct sType*)come_increment_ref_count(sType_clone(fun_377->mResultType));
    result_type_378->mStatic=(_Bool)0;
    type_379=map_type_373;
    obj_value_380=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1310, "CVALUE"))));
    num_string_381=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1312, "buffer"))));
    buffer_append_str(num_string_381,"1");
    type2_382=(struct sType*)come_increment_ref_count(solve_generics(type_379,type_379,info));
    type_name_383=(char*)come_increment_ref_count(make_type_name_string(type2_382,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj221=obj_value_380->c_value;
    obj_value_380->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_383,type_name_383,((char*)(__right_value617=buffer_to_string(num_string_381))),info->sname,info->sline,type_name_383));
    /*G*/ __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_384=(struct sType*)come_increment_ref_count(sType_clone(type2_382));
    type3_384->mPointerNum++;
    type3_384->mHeap=(_Bool)1;
    type2_382->mHeap=(_Bool)1;
    __dec_obj222=obj_value_380->type;
    obj_value_380->type=(struct sType*)come_increment_ref_count(sType_clone(type2_382));
    come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_380->type->mPointerNum++;
    obj_value_380->var=((void*)0);
    append_object_to_right_values2(obj_value_380,(struct sType*)come_increment_ref_count(type3_384),info,(_Bool)0);
    come_params_385=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1332, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_377->mParamTypes,0), "06str.c", 1334, 24))->mHeap&&obj_value_380->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_377->mParamTypes,0), "06str.c", 1335, 25)),obj_value_380->type,obj_value_380,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_385,(struct CVALUE*)come_increment_ref_count(obj_value_380));
    come_value2_386=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1339, "CVALUE"))));
    __dec_obj223=come_value2_386->c_value;
    come_value2_386->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEph_length(key_params_334)));
    /*G*/ __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj224=come_value2_386->type;
    come_value2_386->type=((void*)0);
    come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_386->var=((void*)0);
    list$1CVALUEph_push_back(come_params_385,(struct CVALUE*)come_increment_ref_count(come_value2_386));
    come_value3_387=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1347, "CVALUE"))));
    __dec_obj225=come_value3_387->c_value;
    come_value3_387->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__363->mCValueName));
    /*G*/ __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj226=come_value3_387->type;
    come_value3_387->type=((void*)0);
    come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_387->var=((void*)0);
    list$1CVALUEph_push_back(come_params_385,(struct CVALUE*)come_increment_ref_count(come_value3_387));
    come_value4_388=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1355, "CVALUE"))));
    __dec_obj227=come_value4_388->c_value;
    come_value4_388->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__366->mCValueName));
    /*G*/ __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj228=come_value4_388->type;
    come_value4_388->type=((void*)0);
    come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_388->var=((void*)0);
    list$1CVALUEph_push_back(come_params_385,(struct CVALUE*)come_increment_ref_count(come_value4_388));
    buffer_append_str(source_367,generics_fun_name_376);
    buffer_append_str(source_367,"(");
    j_389=0;
    for(    o2_saved_390=(struct list$1CVALUEph*)come_increment_ref_count((come_params_385)),it_391=list$1CVALUEph_begin((o2_saved_390));    !list$1CVALUEph_end((o2_saved_390));    it_391=list$1CVALUEph_next((o2_saved_390))    ){
        buffer_append_str(source_367,it_391->c_value);
        if(        j_389!=list$1CVALUEph_length(come_params_385)-1) {
            buffer_append_str(source_367,",");
        }
        j_389++;
    }
    /*i*/come_call_finalizer3(o2_saved_390,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_367,")");
    buffer_append_str(source_367,")");
    come_value5_392=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1381, "CVALUE"))));
    __dec_obj229=come_value5_392->c_value;
    come_value5_392->c_value=(char*)come_increment_ref_count(buffer_to_string(source_367));
    /*G*/ __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj230=come_value5_392->type;
    come_value5_392->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_378));
    come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value5_392->type->mStatic=(_Bool)0;
    come_value5_392->var=((void*)0);
    if(    result_type_378->mHeap) {
        append_object_to_right_values2(come_value5_392,(struct sType*)come_increment_ref_count(result_type_378),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value5_392->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_392));
    __result199__ = (_Bool)1;
    /*i*/come_call_finalizer3(key_params_334,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(element_params_335,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_key_type_336,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_element_type_337,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(key_type_values_361,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_362 = come_decrement_ref_count2(var_name_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(element_type_values_364,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name2_365 = come_decrement_ref_count2(var_name2_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_367,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_type_373,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_374,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */generics_fun_name_376 = come_decrement_ref_count2(generics_fun_name_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_378,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_380,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_381,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_383 = come_decrement_ref_count2(type_name_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_384,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_385,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_386,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value3_387,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value4_388,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value5_392,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result199__;
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_340;
int i_341;
struct sNode* __result192__;
struct sNode* default_value_342;
struct sNode* __result193__;
default_value_342 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_340=self->head;
    i_341=0;
    while(it_340!=((void*)0)) {
        if(        position==i_341) {
            __result192__ = gComeFunResultObject = __result_obj__ = it_340->item;
            gComeFunResultObject = (void*)0;
            return __result192__;
        }
        it_340=it_340->next;
        i_341++;
    }
    memset(&default_value_342,0,sizeof(struct sNode*));
    __result193__ = gComeFunResultObject = __result_obj__ = default_value_342;
    if(default_value_342) { default_value_342 = come_decrement_ref_count2(default_value_342, ((struct sNode*)default_value_342)->finalize, ((struct sNode*)default_value_342)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result193__;
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_393;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct list$1sNodeph* exps_394;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct buffer* value_395;
char* head_of_last_line_396;
int len_397;
void* __right_value640 = (void*)0;
struct sNode* exp_398;
int sline2_399;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value648 = (void*)0;
struct sNode* __result202__;
int sline_401;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct list$1sNodeph* exps_402;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct buffer* value_403;
char* head_of_last_line_404;
int len_405;
void* __right_value653 = (void*)0;
struct sNode* exp_406;
int sline2_407;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sNode* _inf_value6;
struct sSStringNode* _inf_obj_value6;
void* __right_value661 = (void*)0;
struct sNode* __result205__;
int sline_409;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct buffer* value_410;
char* p_411;
int sline_412;
int sline2_413;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct sNode* _inf_value7;
struct sStrNode* _inf_obj_value7;
void* __right_value670 = (void*)0;
struct sNode* __result208__;
int sline_415;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct buffer* value_416;
unsigned long  int size_417;
char* p_418;
int sline_419;
int len_420;
int sline2_421;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sNode* _inf_value8;
struct sBufferNode* _inf_obj_value8;
void* __right_value678 = (void*)0;
struct sNode* __result211__;
int sline_423;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct buffer* buf_424;
_Bool global_425;
_Bool ignore_case_426;
_Bool catch_exception_427;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value687 = (void*)0;
struct sNode* obj_428;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_430;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct buffer* method_block_431;
int method_block_sline_432;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct list$1sTypeph* method_generics_types_433;
void* __right_value729 = (void*)0;
struct sNode* node_434;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sNode* __dec_obj255;
struct sNode* __result214__;
int sline_435;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct buffer* value_436;
char* p_437;
int sline_438;
int len_439;
int sline2_440;
_Bool global_441;
_Bool ignore_case_442;
_Bool catch_exception_443;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct sNode* _inf_value10;
struct sStrNode* _inf_obj_value10;
void* __right_value740 = (void*)0;
struct sNode* obj_444;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_446;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct buffer* method_block_447;
int method_block_sline_448;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct list$1sTypeph* method_generics_types_449;
void* __right_value782 = (void*)0;
struct sNode* node_450;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct sNode* __dec_obj260;
struct sNode* __result217__;
int c_451;
int n_452;
int n_453;
unsigned long long int n_456;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct sNode* _inf_value11;
struct sCharNode* _inf_obj_value11;
void* __right_value789 = (void*)0;
struct sNode* __result220__;
int c_458;
_Bool quote_459;
int n_460;
int n_461;
unsigned long long int n_464;
unsigned char p2_465;
int size_466;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sNode* _inf_value12;
struct sWCharNode* _inf_obj_value12;
void* __right_value794 = (void*)0;
struct sNode* __result223__;
int sline_469;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
struct buffer* value_470;
char* p_471;
int sline_472;
int sline2_473;
int len_474;
void* __right_value797 = (void*)0;
int* wstr_475;
char* str_476;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct sNode* _inf_value13;
struct sWStringNode* _inf_obj_value13;
void* __right_value803 = (void*)0;
struct sNode* __result226__;
int sline_478;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct list$1sNodeph* exps_479;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct buffer* value_480;
char* p_481;
int sline_482;
int len_483;
void* __right_value808 = (void*)0;
struct sNode* exp_484;
int sline2_485;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct sNode* _inf_value14;
struct sSStringNode* _inf_obj_value14;
void* __right_value816 = (void*)0;
struct sNode* __result229__;
char* p_487;
_Bool no_comma_488;
void* __right_value817 = (void*)0;
struct sNode* node_489;
char* p2_490;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct buffer* first_element_source_491;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct list$1sNodeph* list_elements_492;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
struct list$1sNodeph* map_keys_493;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct list$1sNodeph* map_elements_494;
_Bool no_comma_495;
void* __right_value826 = (void*)0;
struct sNode* node2_496;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value833 = (void*)0;
struct sNode* __result232__;
_Bool no_comma_498;
void* __right_value834 = (void*)0;
struct sNode* node2_499;
void* __right_value835 = (void*)0;
struct sNode* node3_500;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct sNode* _inf_value16;
struct sMapNode* _inf_obj_value16;
void* __right_value842 = (void*)0;
struct sNode* __result235__;
_Bool no_comma_502;
void* __right_value843 = (void*)0;
struct sNode* node2_503;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct sNode* _inf_value17;
struct sListNode* _inf_obj_value17;
void* __right_value849 = (void*)0;
struct sNode* __result238__;
void* __right_value850 = (void*)0;
struct sNode* node_505;
struct sNode* __result239__;
struct sNode* __result240__;
memset(&c_451, 0, sizeof(int));
memset(&c_458, 0, sizeof(int));
memset(&quote_459, 0, sizeof(_Bool));
memset(&size_466, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        info->p+=4;
        info->sline++;
        sline_393=info->sline;
        exps_394=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1409, "list$1sNodeph"))));
        value_395=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1410, "buffer"))));
        head_of_last_line_396=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_396) {
                    buffer_trim(value_395,info->p-head_of_last_line_396);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_395,37);
                buffer_append_char(value_395,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_395,92);
                buffer_append_char(value_395,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_395,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_397=0;
                    while(xisdigit(*info->p)&&len_397<3) {
                        buffer_append_char(value_395,*info->p);
                        info->p++;
                        len_397++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_395,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_395,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_398=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_394,(struct sNode*)come_increment_ref_count(exp_398));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_395,"%s");
                    if(exp_398) { exp_398 = come_decrement_ref_count2(exp_398, ((struct sNode*)exp_398)->finalize, ((struct sNode*)exp_398)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_395,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_395,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_395,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_395,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_395,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_395,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_395,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_395,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_395,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_395,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_399=info->sline;
                info->sline=sline_393;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_395,92);
                    buffer_append_char(value_395,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_396=info->p;
                }
                else {
                    buffer_append_char(value_395,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1559, "struct sNode");
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value643=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1559, "sSStringNode")),(char*)come_increment_ref_count(buffer_to_string(value_395)),(struct list$1sNodeph*)come_increment_ref_count(exps_394),sline_393,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result202__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value648=_inf_value5));
        /*i*/come_call_finalizer3(exps_394,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_395,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value643,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value648) { __right_value648 = come_decrement_ref_count2(__right_value648, ((struct sNode*)__right_value648)->finalize, ((struct sNode*)__right_value648)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result202__;
        /*i*/come_call_finalizer3(exps_394,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_395,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==104&&*(info->p+1)==34) {
        info->p+=2;
        info->sline++;
        sline_401=info->sline;
        exps_402=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1567, "list$1sNodeph"))));
        value_403=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1568, "buffer"))));
        head_of_last_line_404=((void*)0);
        while(1) {
            if(            *info->p==34) {
                if(                head_of_last_line_404) {
                    buffer_trim(value_403,info->p-head_of_last_line_404);
                }
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_403,37);
                buffer_append_char(value_403,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_403,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_405=0;
                    while(xisdigit(*info->p)&&len_405<3) {
                        buffer_append_char(value_403,*info->p);
                        info->p++;
                        len_405++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_403,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_403,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_406=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_402,(struct sNode*)come_increment_ref_count(exp_406));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_403,"%s");
                    if(exp_406) { exp_406 = come_decrement_ref_count2(exp_406, ((struct sNode*)exp_406)->finalize, ((struct sNode*)exp_406)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_403,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_403,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_403,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_403,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_403,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_403,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_403,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_403,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_403,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_403,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_407=info->sline;
                info->sline=sline_401;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_403,92);
                    buffer_append_char(value_403,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_404=info->p;
                }
                else {
                    buffer_append_char(value_403,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1701, "struct sNode");
        _inf_obj_value6=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value656=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1701, "sSStringNode")),(char*)come_increment_ref_count(buffer_to_string(value_403)),(struct list$1sNodeph*)come_increment_ref_count(exps_402),sline_401,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sSStringNode_finalize;
        _inf_value6->clone=(void*)sSStringNode_clone;
        _inf_value6->compile=(void*)sSStringNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sSStringNode_kind;
        __result205__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value661=_inf_value6));
        /*i*/come_call_finalizer3(exps_402,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_403,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value656,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value661) { __right_value661 = come_decrement_ref_count2(__right_value661, ((struct sNode*)__right_value661)->finalize, ((struct sNode*)__right_value661)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result205__;
        /*i*/come_call_finalizer3(exps_402,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_403,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==34) {
        info->p++;
        sline_409=info->sline;
        value_410=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1709, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_411=info->p;
                sline_412=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_411;
                    info->sline=sline_412;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_410,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_410,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_410,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_413=info->sline;
                info->sline=sline_409;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_413;
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_410,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1761, "struct sNode");
        _inf_obj_value7=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value666=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1761, "sStrNode")),(char*)come_increment_ref_count(buffer_to_string(value_410)),sline_409,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStrNode_finalize;
        _inf_value7->clone=(void*)sStrNode_clone;
        _inf_value7->compile=(void*)sStrNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStrNode_kind;
        __result208__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value670=_inf_value7));
        /*i*/come_call_finalizer3(value_410,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value666,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value670) { __right_value670 = come_decrement_ref_count2(__right_value670, ((struct sNode*)__right_value670)->finalize, ((struct sNode*)__right_value670)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result208__;
        /*i*/come_call_finalizer3(value_410,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        info->p+=2;
        sline_415=info->sline;
        value_416=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1769, "buffer"))));
        size_417=0;
        while(1) {
            if(            *info->p==34) {
                buffer_append_char(value_416,*info->p);
                info->p++;
                p_418=info->p;
                sline_419=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_418;
                    info->sline=sline_419;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_416,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_420=0;
                    while(xisdigit(*info->p)&&len_420<3) {
                        buffer_append_char(value_416,*info->p);
                        info->p++;
                        len_420++;
                    }
                    size_417++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_416,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_416,*info->p);
                        info->p++;
                    }
                    size_417++;
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_416,*info->p);
                        info->p++;
                        size_417++;
                        break;
                        case 110:
                        buffer_append_char(value_416,*info->p);
                        info->p++;
                        size_417++;
                        break;
                        case 116:
                        buffer_append_char(value_416,*info->p);
                        info->p++;
                        size_417++;
                        break;
                        case 114:
                        buffer_append_char(value_416,*info->p);
                        info->p++;
                        size_417++;
                        break;
                        case 118:
                        buffer_append_char(value_416,*info->p);
                        info->p++;
                        size_417++;
                        break;
                        case 102:
                        buffer_append_char(value_416,*info->p);
                        info->p++;
                        size_417++;
                        break;
                        case 97:
                        buffer_append_char(value_416,*info->p);
                        info->p++;
                        size_417++;
                        break;
                        case 98:
                        buffer_append_char(value_416,*info->p);
                        info->p++;
                        size_417++;
                        break;
                        case 92:
                        buffer_append_char(value_416,*info->p);
                        info->p++;
                        size_417++;
                        break;
                        default:
                        buffer_append_char(value_416,*info->p);
                        info->p++;
                        size_417++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_421=info->sline;
                info->sline=sline_415;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_416,*info->p);
                info->p++;
                size_417++;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1895, "struct sNode");
        _inf_obj_value8=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value674=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "06str.c", 1895, "sBufferNode")),(struct buffer*)come_increment_ref_count(value_416),size_417,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sBufferNode_finalize;
        _inf_value8->clone=(void*)sBufferNode_clone;
        _inf_value8->compile=(void*)sBufferNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sBufferNode_kind;
        __result211__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value678=_inf_value8));
        /*i*/come_call_finalizer3(value_416,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value674,sBufferNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value678) { __right_value678 = come_decrement_ref_count2(__right_value678, ((struct sNode*)__right_value678)->finalize, ((struct sNode*)__right_value678)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result211__;
        /*i*/come_call_finalizer3(value_416,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==47) {
        info->p++;
        sline_423=info->sline;
        buf_424=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1902, "buffer"))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_424,*info->p);
                info->p++;
            }
            else if(            *info->p==47) {
                info->p++;
                break;
            }
            else if(            *info->p==0) {
                err_msg(info,"require closing / for regex");
                exit(5);
            }
            else {
                buffer_append_char(buf_424,*info->p);
                info->p++;
            }
        }
        global_425=(_Bool)0;
        ignore_case_426=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_425=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_426=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_427=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_427=(_Bool)1;
        }
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1946, "struct sNode");
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value683=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1946, "sStrNode")),(char*)come_increment_ref_count(buffer_to_string(buf_424)),sline_423,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_428=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*g*/come_call_finalizer3(__right_value683,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_430=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1948, "list$1tuple2$2charphsNodephph"))));
        list$1tuple2$2charphsNodephph_add(params_430,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1950, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_428))));
        list$1tuple2$2charphsNodephph_add(params_430,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1951, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_426)?(((struct sNode*)(__right_value694=create_int_node(1,info)))):(((struct sNode*)(__right_value695=create_int_node(0,info)))))))));
        if(__right_value694) { __right_value694 = come_decrement_ref_count2(__right_value694, ((struct sNode*)__right_value694)->finalize, ((struct sNode*)__right_value694)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value695) { __right_value695 = come_decrement_ref_count2(__right_value695, ((struct sNode*)__right_value695)->finalize, ((struct sNode*)__right_value695)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_430,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1952, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_430,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1953, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_425)?(((struct sNode*)(__right_value703=create_int_node(1,info)))):(((struct sNode*)(__right_value704=create_int_node(0,info)))))))));
        if(__right_value703) { __right_value703 = come_decrement_ref_count2(__right_value703, ((struct sNode*)__right_value703)->finalize, ((struct sNode*)__right_value703)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value704) { __right_value704 = come_decrement_ref_count2(__right_value704, ((struct sNode*)__right_value704)->finalize, ((struct sNode*)__right_value704)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_430,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1954, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_430,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1955, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_430,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1956, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_430,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1957, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_430,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1958, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_431=((void*)0);
        method_block_sline_432=info->sline;
        method_generics_types_433=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 1964, "list$1sTypeph"))));
        node_434=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_428),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_430),method_block_431,method_block_sline_432,method_generics_types_433,info));
        if(        !catch_exception_427) {
            __dec_obj255=node_434;
            node_434=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node_434)),info));
            /* U1 */ if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); };
        }
        __result214__ = gComeFunResultObject = __result_obj__ = node_434;
        /*i*/come_call_finalizer3(buf_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_428) { obj_428 = come_decrement_ref_count2(obj_428, ((struct sNode*)obj_428)->finalize, ((struct sNode*)obj_428)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_430,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_types_433,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_434) { node_434 = come_decrement_ref_count2(node_434, ((struct sNode*)node_434)->finalize, ((struct sNode*)node_434)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result214__;
        /*i*/come_call_finalizer3(buf_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_428) { obj_428 = come_decrement_ref_count2(obj_428, ((struct sNode*)obj_428)->finalize, ((struct sNode*)obj_428)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_430,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_types_433,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_434) { node_434 = come_decrement_ref_count2(node_434, ((struct sNode*)node_434)->finalize, ((struct sNode*)node_434)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        info->p+=2;
        sline_435=info->sline;
        value_436=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1979, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_437=info->p;
                sline_438=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_437;
                    info->sline=sline_438;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_436,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_439=0;
                    while(xisdigit(*info->p)&&len_439<3) {
                        buffer_append_char(value_436,*info->p);
                        info->p++;
                        len_439++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_436,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_436,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_436,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_436,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_436,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_436,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_436,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_436,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_436,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_436,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_436,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_436,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_440=info->sline;
                info->sline=sline_435;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_436,*info->p);
                info->p++;
            }
        }
        global_441=(_Bool)0;
        ignore_case_442=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_441=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_442=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_443=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_443=(_Bool)1;
        }
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2110, "struct sNode");
        _inf_obj_value10=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value736=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 2110, "sStrNode")),(char*)come_increment_ref_count(buffer_to_string(value_436)),sline_435,info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sStrNode_finalize;
        _inf_value10->clone=(void*)sStrNode_clone;
        _inf_value10->compile=(void*)sStrNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sStrNode_kind;
        obj_444=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*g*/come_call_finalizer3(__right_value736,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_446=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 2112, "list$1tuple2$2charphsNodephph"))));
        list$1tuple2$2charphsNodephph_add(params_446,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2114, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_444))));
        list$1tuple2$2charphsNodephph_add(params_446,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2115, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_442)?(((struct sNode*)(__right_value747=create_int_node(1,info)))):(((struct sNode*)(__right_value748=create_int_node(0,info)))))))));
        if(__right_value747) { __right_value747 = come_decrement_ref_count2(__right_value747, ((struct sNode*)__right_value747)->finalize, ((struct sNode*)__right_value747)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value748) { __right_value748 = come_decrement_ref_count2(__right_value748, ((struct sNode*)__right_value748)->finalize, ((struct sNode*)__right_value748)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_446,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2116, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_446,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2117, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_441)?(((struct sNode*)(__right_value756=create_int_node(1,info)))):(((struct sNode*)(__right_value757=create_int_node(0,info)))))))));
        if(__right_value756) { __right_value756 = come_decrement_ref_count2(__right_value756, ((struct sNode*)__right_value756)->finalize, ((struct sNode*)__right_value756)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value757) { __right_value757 = come_decrement_ref_count2(__right_value757, ((struct sNode*)__right_value757)->finalize, ((struct sNode*)__right_value757)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_446,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2118, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_446,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2119, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_446,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2120, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_446,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2121, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_446,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2122, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_447=((void*)0);
        method_block_sline_448=info->sline;
        method_generics_types_449=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 2128, "list$1sTypeph"))));
        node_450=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_444),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_446),method_block_447,method_block_sline_448,method_generics_types_449,info));
        if(        !catch_exception_443) {
            __dec_obj260=node_450;
            node_450=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node_450)),info));
            /* U1 */ if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); };
        }
        __result217__ = gComeFunResultObject = __result_obj__ = node_450;
        /*i*/come_call_finalizer3(value_436,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_444) { obj_444 = come_decrement_ref_count2(obj_444, ((struct sNode*)obj_444)->finalize, ((struct sNode*)obj_444)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_446,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_types_449,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_450) { node_450 = come_decrement_ref_count2(node_450, ((struct sNode*)node_450)->finalize, ((struct sNode*)node_450)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result217__;
        /*i*/come_call_finalizer3(value_436,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_444) { obj_444 = come_decrement_ref_count2(obj_444, ((struct sNode*)obj_444)->finalize, ((struct sNode*)obj_444)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_446,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_types_449,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_450) { node_450 = come_decrement_ref_count2(node_450, ((struct sNode*)node_450)->finalize, ((struct sNode*)node_450)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==39) {
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_452=0;
                while(xisdigit(*info->p)) {
                    n_452=n_452*8+*info->p-48;
                    info->p++;
                }
                c_451=n_452;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_451=10;
                    info->p++;
                    break;
                    case 116:
                    c_451=9;
                    info->p++;
                    break;
                    case 114:
                    c_451=13;
                    info->p++;
                    break;
                    case 97:
                    c_451=7;
                    info->p++;
                    break;
                    case 102:
                    c_451=12;
                    info->p++;
                    break;
                    case 118:
                    c_451=11;
                    info->p++;
                    break;
                    case 98:
                    c_451=8;
                    info->p++;
                    break;
                    case 92:
                    c_451=92;
                    info->p++;
                    break;
                    case 48:
                    c_451=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_453=0;
                        while(xisdigit(*info->p)) {
                            n_453=n_453*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_451=n_453;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_454[128];
                        memset(&buf_454, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_454,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_455[2];
                            memset(&buf2_455, 0, sizeof(char)                            *(2)                            );
                            buf2_455[0]=*info->p;
                            buf2_455[1]=0;
                            info->p++;
                            strncat(buf_454,buf2_455,128);
                        }
                        n_456=strtoll(buf_454,((void*)0),0);
                        c_451=n_456;
                    }
                    break;
                    default:
                    c_451=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_451=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2253, "struct sNode");
            _inf_obj_value11=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value786=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 2253, "sCharNode")),c_451,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sCharNode_finalize;
            _inf_value11->clone=(void*)sCharNode_clone;
            _inf_value11->compile=(void*)sCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sCharNode_kind;
            __result220__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value789=_inf_value11));
            /*g*/come_call_finalizer3(__right_value786,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value789) { __right_value789 = come_decrement_ref_count2(__right_value789, ((struct sNode*)__right_value789)->finalize, ((struct sNode*)__right_value789)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result220__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        info->p+=2;
        if(        *info->p==92) {
            quote_459=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_460=0;
                while(xisdigit(*info->p)) {
                    n_460=n_460*8+*info->p-48;
                    info->p++;
                }
                c_458=n_460;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_458=10;
                    info->p++;
                    break;
                    case 116:
                    c_458=9;
                    info->p++;
                    break;
                    case 114:
                    c_458=13;
                    info->p++;
                    break;
                    case 97:
                    c_458=7;
                    info->p++;
                    break;
                    case 92:
                    c_458=92;
                    info->p++;
                    break;
                    case 48:
                    c_458=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_461=0;
                        while(xisdigit(*info->p)) {
                            n_461=n_461*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_458=n_461;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_462[128];
                        memset(&buf_462, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_462,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_463[2];
                            memset(&buf2_463, 0, sizeof(char)                            *(2)                            );
                            buf2_463[0]=*info->p;
                            buf2_463[1]=0;
                            info->p++;
                            strncat(buf_462,buf2_463,128);
                        }
                        n_464=strtoll(buf_462,((void*)0),0);
                        c_458=n_464;
                    }
                    break;
                    default:
                    c_458=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_459=(_Bool)0;
            p2_465=*(unsigned char*)info->p;
            if(            p2_465>127) {
                char str_467[6+1];
                memset(&str_467, 0, sizeof(char)                *(6+1)                );
                size_466=((p2_465&128)>>7)+((p2_465&64)>>6)+((p2_465&32)>>5)+((p2_465&16)>>4);
                if(                size_466>6) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str_467,info->p,size_466);
                    str_467[size_466]=0;
                    if(                    mbtowc(&c_458,str_467,size_466)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                    }
                    else {
                        info->p+=size_466;
                    }
                }
            }
            else {
                c_458=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
            info->err_num++;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2392, "struct sNode");
            _inf_obj_value12=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value791=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2392, "sWCharNode")),c_458,quote_459,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sWCharNode_finalize;
            _inf_value12->clone=(void*)sWCharNode_clone;
            _inf_value12->compile=(void*)sWCharNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sWCharNode_kind;
            __result223__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value794=_inf_value12));
            /*g*/come_call_finalizer3(__right_value791,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value794) { __right_value794 = come_decrement_ref_count2(__right_value794, ((struct sNode*)__right_value794)->finalize, ((struct sNode*)__right_value794)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result223__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        info->p+=2;
        sline_469=info->sline;
        value_470=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2401, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_471=info->p;
                sline_472=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_471;
                    info->sline=sline_472;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_470,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_470,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_470,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_473=info->sline;
                info->sline=sline_469;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_470,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_474=value_470->len;
        wstr_475=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_474+1)), "06str.c", 2452, "int"));
        str_476=value_470->buf;
        if(        mbstowcs(wstr_475,str_476,len_474+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_475[len_474]=0;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2463, "struct sNode");
        _inf_obj_value13=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value799=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2463, "sWStringNode")),(int*)come_increment_ref_count(wstr_475),sline_469,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sWStringNode_finalize;
        _inf_value13->clone=(void*)sWStringNode_clone;
        _inf_value13->compile=(void*)sWStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sWStringNode_kind;
        __result226__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value803=_inf_value13));
        /*i*/come_call_finalizer3(value_470,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */wstr_475 = come_decrement_ref_count2(wstr_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value799,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value803) { __right_value803 = come_decrement_ref_count2(__right_value803, ((struct sNode*)__right_value803)->finalize, ((struct sNode*)__right_value803)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result226__;
        /*i*/come_call_finalizer3(value_470,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */wstr_475 = come_decrement_ref_count2(wstr_475, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        info->p+=2;
        sline_478=info->sline;
        exps_479=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2471, "list$1sNodeph"))));
        value_480=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2472, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_481=info->p;
                sline_482=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_481;
                    info->sline=sline_482;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_480,37);
                buffer_append_char(value_480,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_480,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_483=0;
                    while(xisdigit(*info->p)&&len_483<3) {
                        buffer_append_char(value_480,*info->p);
                        info->p++;
                        len_483++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_480,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_480,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_484=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_479,(struct sNode*)come_increment_ref_count(exp_484));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_480,"%s");
                    if(exp_484) { exp_484 = come_decrement_ref_count2(exp_484, ((struct sNode*)exp_484)->finalize, ((struct sNode*)exp_484)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_480,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_480,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_480,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_480,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_480,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_480,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_480,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_480,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_480,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_480,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_485=info->sline;
                info->sline=sline_478;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_480,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2619, "struct sNode");
        _inf_obj_value14=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value811=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2619, "sSStringNode")),(char*)come_increment_ref_count(buffer_to_string(value_480)),(struct list$1sNodeph*)come_increment_ref_count(exps_479),sline_478,info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sSStringNode_finalize;
        _inf_value14->clone=(void*)sSStringNode_clone;
        _inf_value14->compile=(void*)sSStringNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sSStringNode_kind;
        __result229__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value816=_inf_value14));
        /*i*/come_call_finalizer3(exps_479,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_480,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value811,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value816) { __right_value816 = come_decrement_ref_count2(__right_value816, ((struct sNode*)__right_value816)->finalize, ((struct sNode*)__right_value816)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result229__;
        /*i*/come_call_finalizer3(exps_479,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_480,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        p_487=info->p;
        no_comma_488=info->no_comma;
        info->no_comma=(_Bool)1;
        node_489=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_488;
        p2_490=info->p;
        first_element_source_491=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2636, "buffer"))));
        buffer_append(first_element_source_491,p_487,p2_490-p_487);
        buffer_append_char(first_element_source_491,0);
        list_elements_492=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2641, "list$1sNodeph"))));
        map_keys_493=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2643, "list$1sNodeph"))));
        map_elements_494=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2644, "list$1sNodeph"))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(map_keys_493,(struct sNode*)come_increment_ref_count(node_489));
            no_comma_495=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_496=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_495;
            list$1sNodeph_push_back(map_elements_494,(struct sNode*)come_increment_ref_count(node2_496));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2667, "struct sNode");
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value828=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2667, "sMapNode")),(struct list$1sNodeph*)come_increment_ref_count(map_keys_493),(struct list$1sNodeph*)come_increment_ref_count(map_elements_494),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result232__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value833=_inf_value15));
                if(node2_496) { node2_496 = come_decrement_ref_count2(node2_496, ((struct sNode*)node2_496)->finalize, ((struct sNode*)node2_496)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_489) { node_489 = come_decrement_ref_count2(node_489, ((struct sNode*)node_489)->finalize, ((struct sNode*)node_489)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(first_element_source_491,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(list_elements_492,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_keys_493,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_elements_494,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value828,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value833) { __right_value833 = come_decrement_ref_count2(__right_value833, ((struct sNode*)__right_value833)->finalize, ((struct sNode*)__right_value833)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result232__;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_498=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_499=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_498;
                    list$1sNodeph_push_back(map_keys_493,(struct sNode*)come_increment_ref_count(node2_499));
                    expected_next_character(58,info);
                    no_comma_498=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_500=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_498;
                    list$1sNodeph_push_back(map_elements_494,(struct sNode*)come_increment_ref_count(node3_500));
                    if(                    *info->p==0) {
                        err_msg(info,"invalid source end");
                        exit(2);
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(node2_499) { node2_499 = come_decrement_ref_count2(node2_499, ((struct sNode*)node2_499)->finalize, ((struct sNode*)node2_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node3_500) { node3_500 = come_decrement_ref_count2(node3_500, ((struct sNode*)node3_500)->finalize, ((struct sNode*)node3_500)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",*info->p);
                        exit(2);
                    }
                    if(node2_499) { node2_499 = come_decrement_ref_count2(node2_499, ((struct sNode*)node2_499)->finalize, ((struct sNode*)node2_499)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node3_500) { node3_500 = come_decrement_ref_count2(node3_500, ((struct sNode*)node3_500)->finalize, ((struct sNode*)node3_500)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2712, "struct sNode");
                _inf_obj_value16=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value837=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2712, "sMapNode")),(struct list$1sNodeph*)come_increment_ref_count(map_keys_493),(struct list$1sNodeph*)come_increment_ref_count(map_elements_494),info))));
                _inf_value16->_protocol_obj=_inf_obj_value16;
                _inf_value16->finalize=(void*)sMapNode_finalize;
                _inf_value16->clone=(void*)sMapNode_clone;
                _inf_value16->compile=(void*)sMapNode_compile;
                _inf_value16->sline=(void*)sNodeBase_sline;
                _inf_value16->sname=(void*)sNodeBase_sname;
                _inf_value16->terminated=(void*)sNodeBase_terminated;
                _inf_value16->kind=(void*)sMapNode_kind;
                __result235__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value842=_inf_value16));
                if(node2_496) { node2_496 = come_decrement_ref_count2(node2_496, ((struct sNode*)node2_496)->finalize, ((struct sNode*)node2_496)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_489) { node_489 = come_decrement_ref_count2(node_489, ((struct sNode*)node_489)->finalize, ((struct sNode*)node_489)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(first_element_source_491,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(list_elements_492,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_keys_493,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_elements_494,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value837,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value842) { __right_value842 = come_decrement_ref_count2(__right_value842, ((struct sNode*)__right_value842)->finalize, ((struct sNode*)__right_value842)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result235__;
            }
            if(node2_496) { node2_496 = come_decrement_ref_count2(node2_496, ((struct sNode*)node2_496)->finalize, ((struct sNode*)node2_496)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(list_elements_492,(struct sNode*)come_increment_ref_count(node_489));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(list_elements_492,(struct sNode*)come_increment_ref_count(node_489));
            while((_Bool)1) {
                no_comma_502=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_503=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_502;
                list$1sNodeph_push_back(list_elements_492,(struct sNode*)come_increment_ref_count(node2_503));
                if(                *info->p==0) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node2_503) { node2_503 = come_decrement_ref_count2(node2_503, ((struct sNode*)node2_503)->finalize, ((struct sNode*)node2_503)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",*info->p);
                    exit(2);
                }
                if(node2_503) { node2_503 = come_decrement_ref_count2(node2_503, ((struct sNode*)node2_503)->finalize, ((struct sNode*)node2_503)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",*info->p);
            exit(2);
        }
        if(        list$1sNodeph_length(list_elements_492)>0) {
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2763, "struct sNode");
            _inf_obj_value17=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value845=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2763, "sListNode")),(struct list$1sNodeph*)come_increment_ref_count(list_elements_492),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sListNode_finalize;
            _inf_value17->clone=(void*)sListNode_clone;
            _inf_value17->compile=(void*)sListNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sListNode_kind;
            __result238__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value849=_inf_value17));
            if(node_489) { node_489 = come_decrement_ref_count2(node_489, ((struct sNode*)node_489)->finalize, ((struct sNode*)node_489)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(first_element_source_491,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(list_elements_492,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_keys_493,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_elements_494,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value845,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value849) { __right_value849 = come_decrement_ref_count2(__right_value849, ((struct sNode*)__right_value849)->finalize, ((struct sNode*)__right_value849)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result238__;
        }
        else {
        }
        if(node_489) { node_489 = come_decrement_ref_count2(node_489, ((struct sNode*)node_489)->finalize, ((struct sNode*)node_489)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(first_element_source_491,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(list_elements_492,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(map_keys_493,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(map_elements_494,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        node_505=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result239__ = gComeFunResultObject = __result_obj__ = node_505;
        if(node_505) { node_505 = come_decrement_ref_count2(node_505, ((struct sNode*)node_505)->finalize, ((struct sNode*)node_505)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result239__;
        if(node_505) { node_505 = come_decrement_ref_count2(node_505, ((struct sNode*)node_505)->finalize, ((struct sNode*)node_505)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result240__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static void sBufferNode_finalize(struct sBufferNode* self){
char* __dec_obj247;
struct buffer* __dec_obj248;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj247=self->sname;
            /*G*/ __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj248=self->value;
            come_call_finalizer3(__dec_obj248,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->value,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
void* __result_obj__=(void*)0;
struct sBufferNode* __result209__;
void* __right_value675 = (void*)0;
struct sBufferNode* result_422;
void* __right_value676 = (void*)0;
char* __dec_obj249;
void* __right_value677 = (void*)0;
struct buffer* __dec_obj250;
struct sBufferNode* __result210__;
    if(    self==(void*)0) {
        __result209__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    result_422=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "sBufferNode"));
    if(    self!=((void*)0)) {
        result_422->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj249=result_422->sname;
        result_422->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj250=result_422->value;
        result_422->value=(struct buffer*)come_increment_ref_count(buffer_clone(self->value));
        come_call_finalizer3(__dec_obj250,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_422->size=self->size;
    }
    __result210__ = gComeFunResultObject = __result_obj__ = result_422;
    /*i*/come_call_finalizer3(result_422,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static void sStrNode_finalize(struct sStrNode* self){
char* __dec_obj256;
char* __dec_obj257;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj256=self->sname;
            /*G*/ __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj257=self->value;
            /*G*/ __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__=(void*)0;
struct sStrNode* __result215__;
void* __right_value737 = (void*)0;
struct sStrNode* result_445;
void* __right_value738 = (void*)0;
char* __dec_obj258;
void* __right_value739 = (void*)0;
char* __dec_obj259;
struct sStrNode* __result216__;
    if(    self==(void*)0) {
        __result215__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result215__;
    }
    result_445=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "sStrNode"));
    if(    self!=((void*)0)) {
        result_445->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj258=result_445->sname;
        result_445->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj259=result_445->value;
        result_445->value=(char*)come_increment_ref_count(string_clone(self->value));
        /*G*/ __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result216__ = gComeFunResultObject = __result_obj__ = result_445;
    /*i*/come_call_finalizer3(result_445,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static void sCharNode_finalize(struct sCharNode* self){
char* __dec_obj261;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj261=self->sname;
            /*G*/ __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__=(void*)0;
struct sCharNode* __result218__;
void* __right_value787 = (void*)0;
struct sCharNode* result_457;
void* __right_value788 = (void*)0;
char* __dec_obj262;
struct sCharNode* __result219__;
    if(    self==(void*)0) {
        __result218__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result218__;
    }
    result_457=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "sCharNode"));
    if(    self!=((void*)0)) {
        result_457->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj262=result_457->sname;
        result_457->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_457->value=self->value;
    }
    __result219__ = gComeFunResultObject = __result_obj__ = result_457;
    /*i*/come_call_finalizer3(result_457,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static void sWCharNode_finalize(struct sWCharNode* self){
char* __dec_obj263;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj263=self->sname;
            /*G*/ __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__=(void*)0;
struct sWCharNode* __result221__;
void* __right_value792 = (void*)0;
struct sWCharNode* result_468;
void* __right_value793 = (void*)0;
char* __dec_obj264;
struct sWCharNode* __result222__;
    if(    self==(void*)0) {
        __result221__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_468=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "sWCharNode"));
    if(    self!=((void*)0)) {
        result_468->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj264=result_468->sname;
        result_468->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_468->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_468->quote=self->quote;
    }
    __result222__ = gComeFunResultObject = __result_obj__ = result_468;
    /*i*/come_call_finalizer3(result_468,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static void sWStringNode_finalize(struct sWStringNode* self){
char* __dec_obj265;
int* __dec_obj266;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj265=self->sname;
            /*G*/ __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj266=self->value;
            /*G*/ __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__=(void*)0;
struct sWStringNode* __result224__;
void* __right_value800 = (void*)0;
struct sWStringNode* result_477;
void* __right_value801 = (void*)0;
char* __dec_obj267;
void* __right_value802 = (void*)0;
int* __dec_obj268;
struct sWStringNode* __result225__;
    if(    self==(void*)0) {
        __result224__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_477=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "sWStringNode"));
    if(    self!=((void*)0)) {
        result_477->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj267=result_477->sname;
        result_477->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj268=result_477->value;
        result_477->value=(int*)come_increment_ref_count((int*)come_memdup(self->value, "sWStringNode_clone", 6, "int*"));
        /*G*/ __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result225__ = gComeFunResultObject = __result_obj__ = result_477;
    /*i*/come_call_finalizer3(result_477,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static void sSStringNode_finalize(struct sSStringNode* self){
char* __dec_obj269;
char* __dec_obj270;
struct list$1sNodeph* __dec_obj271;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj269=self->sname;
            /*G*/ __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj270=self->value;
            /*G*/ __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj271=self->exps;
            come_call_finalizer3(__dec_obj271,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__=(void*)0;
struct sSStringNode* __result227__;
void* __right_value812 = (void*)0;
struct sSStringNode* result_486;
void* __right_value813 = (void*)0;
char* __dec_obj272;
void* __right_value814 = (void*)0;
char* __dec_obj273;
void* __right_value815 = (void*)0;
struct list$1sNodeph* __dec_obj274;
struct sSStringNode* __result228__;
    if(    self==(void*)0) {
        __result227__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_486=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "sSStringNode"));
    if(    self!=((void*)0)) {
        result_486->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj272=result_486->sname;
        result_486->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj273=result_486->value;
        result_486->value=(char*)come_increment_ref_count(string_clone(self->value));
        /*G*/ __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj274=result_486->exps;
        result_486->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->exps));
        come_call_finalizer3(__dec_obj274,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result228__ = gComeFunResultObject = __result_obj__ = result_486;
    /*i*/come_call_finalizer3(result_486,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static void sMapNode_finalize(struct sMapNode* self){
char* __dec_obj281;
struct list$1sNodeph* __dec_obj282;
struct list$1sNodeph* __dec_obj283;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj281=self->sname;
            /*G*/ __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        if(        self->map_key_elements==gComeFunResultObject) {
            __dec_obj282=self->map_key_elements;
            come_call_finalizer3(__dec_obj282,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        if(        self->map_elements==gComeFunResultObject) {
            __dec_obj283=self->map_elements;
            come_call_finalizer3(__dec_obj283,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__=(void*)0;
struct sMapNode* __result233__;
void* __right_value838 = (void*)0;
struct sMapNode* result_501;
void* __right_value839 = (void*)0;
char* __dec_obj284;
void* __right_value840 = (void*)0;
struct list$1sNodeph* __dec_obj285;
void* __right_value841 = (void*)0;
struct list$1sNodeph* __dec_obj286;
struct sMapNode* __result234__;
    if(    self==(void*)0) {
        __result233__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_501=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "sMapNode"));
    if(    self!=((void*)0)) {
        result_501->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj284=result_501->sname;
        result_501->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj285=result_501->map_key_elements;
        result_501->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->map_key_elements));
        come_call_finalizer3(__dec_obj285,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj286=result_501->map_elements;
        result_501->map_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->map_elements));
        come_call_finalizer3(__dec_obj286,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_501;
    /*i*/come_call_finalizer3(result_501,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static void sListNode_finalize(struct sListNode* self){
char* __dec_obj287;
struct list$1sNodeph* __dec_obj288;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj287=self->sname;
            /*G*/ __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        if(        self->list_elements==gComeFunResultObject) {
            __dec_obj288=self->list_elements;
            come_call_finalizer3(__dec_obj288,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__=(void*)0;
struct sListNode* __result236__;
void* __right_value846 = (void*)0;
struct sListNode* result_504;
void* __right_value847 = (void*)0;
char* __dec_obj289;
void* __right_value848 = (void*)0;
struct list$1sNodeph* __dec_obj290;
struct sListNode* __result237__;
    if(    self==(void*)0) {
        __result236__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    result_504=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "sListNode"));
    if(    self!=((void*)0)) {
        result_504->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj289=result_504->sname;
        result_504->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj290=result_504->list_elements;
        result_504->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->list_elements));
        come_call_finalizer3(__dec_obj290,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_504;
    /*i*/come_call_finalizer3(result_504,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __result_obj__=(void*)0;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct list$1tuple2$2charphsNodephph* tuple_elements_506;
char* p_507;
char* name_508;
void* __right_value853 = (void*)0;
char* __dec_obj291;
_Bool no_comma_509;
void* __right_value854 = (void*)0;
struct sNode* node_510;
void* __right_value855 = (void*)0;
struct sNode* __dec_obj292;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct sNode* _inf_value18;
struct sTupleNode* _inf_obj_value18;
void* __right_value873 = (void*)0;
struct sNode* __result248__;
name_508 = (void*)0;
    tuple_elements_506=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 2778, "list$1tuple2$2charphsNodephph"))));
    while((_Bool)1) {
        p_507=info->p;
        if(        named_tuple) {
            __dec_obj291=name_508;
            name_508=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_509=info->no_comma;
        info->no_comma=(_Bool)1;
        node_510=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj292=node_510;
        node_510=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_510),info));
        /* U1 */ if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_509;
        list$1tuple2$2charphsNodephph_push_back(tuple_elements_506,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2797, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(string_clone(name_508)),(struct sNode*)come_increment_ref_count(node_510))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            /* U13 */name_508 = come_decrement_ref_count2(name_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_510) { node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",*info->p);
            exit(2);
        }
        /* U13 */name_508 = come_decrement_ref_count2(name_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_510) { node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2814, "struct sNode");
    _inf_obj_value18=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value863=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2814, "sTupleNode")),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements_506),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sTupleNode_finalize;
    _inf_value18->clone=(void*)sTupleNode_clone;
    _inf_value18->compile=(void*)sTupleNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sTupleNode_kind;
    __result248__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value873=_inf_value18));
    /*i*/come_call_finalizer3(tuple_elements_506,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value863,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value873) { __right_value873 = come_decrement_ref_count2(__right_value873, ((struct sNode*)__right_value873)->finalize, ((struct sNode*)__right_value873)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value856 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_511;
struct tuple2$2charphsNodeph* __dec_obj293;
void* __right_value857 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_512;
struct tuple2$2charphsNodeph* __dec_obj296;
void* __right_value858 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_513;
struct tuple2$2charphsNodeph* __dec_obj299;
struct list$1tuple2$2charphsNodephph* __result241__;
    if(    self->len==0) {
        litem_511=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value856=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 230, "list_item$1tuple2$2charphsNodephph"))));
        litem_511->prev=((void*)0);
        litem_511->next=((void*)0);
        __dec_obj293=litem_511->item;
        litem_511->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj293,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_511;
        self->head=litem_511;
    }
    else if(    self->len==1) {
        litem_512=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value857=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 240, "list_item$1tuple2$2charphsNodephph"))));
        litem_512->prev=self->head;
        litem_512->next=((void*)0);
        __dec_obj296=litem_512->item;
        litem_512->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj296,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_512;
        self->head->next=litem_512;
    }
    else {
        litem_513=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value858=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 250, "list_item$1tuple2$2charphsNodephph"))));
        litem_513->prev=self->tail;
        litem_513->next=((void*)0);
        __dec_obj299=litem_513->item;
        litem_513->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj299,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_513;
        self->tail=litem_513;
    }
    self->len++;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj300;
struct sNode* __dec_obj301;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj300=self->v1;
            /*G*/ __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj301=self->v2;
            /* U1 */ if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
char* __dec_obj302;
struct list$1tuple2$2charphsNodephph* __dec_obj303;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj302=self->sname;
            /*G*/ __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj303=self->tuple_elements;
            come_call_finalizer3(__dec_obj303,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__=(void*)0;
struct sTupleNode* __result242__;
void* __right_value864 = (void*)0;
struct sTupleNode* result_514;
void* __right_value865 = (void*)0;
char* __dec_obj304;
void* __right_value872 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj309;
struct sTupleNode* __result247__;
    if(    self==(void*)0) {
        __result242__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    result_514=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "sTupleNode"));
    if(    self!=((void*)0)) {
        result_514->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj304=result_514->sname;
        result_514->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj309=result_514->tuple_elements;
        result_514->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->tuple_elements));
        come_call_finalizer3(__dec_obj309,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_514;
    /*i*/come_call_finalizer3(result_514,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result243__;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_515;
struct list_item$1tuple2$2charphsNodephph* it_516;
void* __right_value871 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result246__;
    if(    self==((void*)0)) {
        __result243__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    result_515=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 146, "list$1tuple2$2charphsNodephph"))));
    it_516=self->head;
    while(it_516!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_515,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_516->item)));
        it_516=it_516->next;
    }
    __result246__ = gComeFunResultObject = __result_obj__ = result_515;
    /*i*/come_call_finalizer3(result_515,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result244__;
void* __right_value868 = (void*)0;
struct tuple2$2charphsNodeph* result_517;
void* __right_value869 = (void*)0;
char* __dec_obj305;
void* __right_value870 = (void*)0;
struct sNode* __dec_obj306;
struct tuple2$2charphsNodeph* __result245__;
    if(    self==(void*)0) {
        __result244__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    result_517=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj305=result_517->v1;
        result_517->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj306=result_517->v2;
        result_517->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        /* U1 */ if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result245__ = gComeFunResultObject = __result_obj__ = result_517;
    /*i*/come_call_finalizer3(result_517,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj307;
struct sNode* __dec_obj308;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj307=self->v1;
            /*G*/ __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj308=self->v2;
            /* U1 */ if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct list$1sNodeph* tuple_elements_518;
struct sNode* node_519;
void* __right_value876 = (void*)0;
struct sNode* node2_520;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value882 = (void*)0;
struct sNode* __result251__;
    tuple_elements_518=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2819, "list$1sNodeph"))));
    node_519=(struct sNode*)come_increment_ref_count(exp);
    list$1sNodeph_push_back(tuple_elements_518,(struct sNode*)come_increment_ref_count(node_519));
    node2_520=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodeph_push_back(tuple_elements_518,(struct sNode*)come_increment_ref_count(node2_520));
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2829, "struct sNode");
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value878=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2829, "sSomeNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_518),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result251__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value882=_inf_value19));
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(tuple_elements_518,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_519) { node_519 = come_decrement_ref_count2(node_519, ((struct sNode*)node_519)->finalize, ((struct sNode*)node_519)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_520) { node2_520 = come_decrement_ref_count2(node2_520, ((struct sNode*)node2_520)->finalize, ((struct sNode*)node2_520)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value878,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value882) { __right_value882 = come_decrement_ref_count2(__right_value882, ((struct sNode*)__right_value882)->finalize, ((struct sNode*)__right_value882)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result251__;
}

struct sNode* parse_some(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct list$1sNodeph* tuple_elements_522;
void* __right_value885 = (void*)0;
struct sNode* node_523;
void* __right_value886 = (void*)0;
struct sNode* __dec_obj314;
void* __right_value887 = (void*)0;
struct sNode* node2_524;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct sNode* _inf_value20;
struct sSomeNode* _inf_obj_value20;
void* __right_value893 = (void*)0;
struct sNode* __result254__;
    tuple_elements_522=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2834, "list$1sNodeph"))));
    expected_next_character(40,info);
    node_523=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj314=node_523;
    node_523=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_523),info));
    /* U1 */ if(__dec_obj314) { __dec_obj314 = come_decrement_ref_count2(__dec_obj314, ((struct sNode*)__dec_obj314)->finalize, ((struct sNode*)__dec_obj314)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    list$1sNodeph_push_back(tuple_elements_522,(struct sNode*)come_increment_ref_count(node_523));
    node2_524=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodeph_push_back(tuple_elements_522,(struct sNode*)come_increment_ref_count(node2_524));
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2847, "struct sNode");
    _inf_obj_value20=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value889=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2847, "sSomeNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_522),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sSomeNode_finalize;
    _inf_value20->clone=(void*)sSomeNode_clone;
    _inf_value20->compile=(void*)sSomeNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sSomeNode_kind;
    __result254__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value893=_inf_value20));
    /*i*/come_call_finalizer3(tuple_elements_522,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_523) { node_523 = come_decrement_ref_count2(node_523, ((struct sNode*)node_523)->finalize, ((struct sNode*)node_523)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_524) { node2_524 = come_decrement_ref_count2(node2_524, ((struct sNode*)node2_524)->finalize, ((struct sNode*)node2_524)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value889,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value893) { __right_value893 = come_decrement_ref_count2(__right_value893, ((struct sNode*)__right_value893)->finalize, ((struct sNode*)__right_value893)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static void sSomeNode_finalize(struct sSomeNode* self){
char* __dec_obj315;
struct list$1sNodeph* __dec_obj316;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj315=self->sname;
            /*G*/ __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj316=self->tuple_elements;
            come_call_finalizer3(__dec_obj316,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__=(void*)0;
struct sSomeNode* __result252__;
void* __right_value890 = (void*)0;
struct sSomeNode* result_525;
void* __right_value891 = (void*)0;
char* __dec_obj317;
void* __right_value892 = (void*)0;
struct list$1sNodeph* __dec_obj318;
struct sSomeNode* __result253__;
    if(    self==(void*)0) {
        __result252__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    result_525=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "sSomeNode"));
    if(    self!=((void*)0)) {
        result_525->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj317=result_525->sname;
        result_525->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj318=result_525->tuple_elements;
        result_525->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->tuple_elements));
        come_call_finalizer3(__dec_obj318,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result253__ = gComeFunResultObject = __result_obj__ = result_525;
    /*i*/come_call_finalizer3(result_525,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

struct sNode* parse_none(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
struct list$1sNodeph* tuple_elements_526;
void* __right_value896 = (void*)0;
struct sNode* node_527;
void* __right_value897 = (void*)0;
struct sNode* __dec_obj319;
void* __right_value898 = (void*)0;
struct sNode* node2_528;
struct sNode* node3_529;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
struct sNode* _inf_value21;
struct sNoneNode* _inf_obj_value21;
void* __right_value904 = (void*)0;
struct sNode* __result257__;
    tuple_elements_526=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2852, "list$1sNodeph"))));
    expected_next_character(40,info);
    node_527=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj319=node_527;
    node_527=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_527),info));
    /* U1 */ if(__dec_obj319) { __dec_obj319 = come_decrement_ref_count2(__dec_obj319, ((struct sNode*)__dec_obj319)->finalize, ((struct sNode*)__dec_obj319)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    node2_528=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNodeph_push_back(tuple_elements_526,(struct sNode*)come_increment_ref_count(node2_528));
    node3_529=(struct sNode*)come_increment_ref_count(node_527);
    list$1sNodeph_push_back(tuple_elements_526,(struct sNode*)come_increment_ref_count(node3_529));
    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2867, "struct sNode");
    _inf_obj_value21=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value900=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2867, "sNoneNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_526),info))));
    _inf_value21->_protocol_obj=_inf_obj_value21;
    _inf_value21->finalize=(void*)sNoneNode_finalize;
    _inf_value21->clone=(void*)sNoneNode_clone;
    _inf_value21->compile=(void*)sNoneNode_compile;
    _inf_value21->sline=(void*)sNodeBase_sline;
    _inf_value21->sname=(void*)sNodeBase_sname;
    _inf_value21->terminated=(void*)sNodeBase_terminated;
    _inf_value21->kind=(void*)sNoneNode_kind;
    __result257__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value904=_inf_value21));
    /*i*/come_call_finalizer3(tuple_elements_526,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_527) { node_527 = come_decrement_ref_count2(node_527, ((struct sNode*)node_527)->finalize, ((struct sNode*)node_527)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_528) { node2_528 = come_decrement_ref_count2(node2_528, ((struct sNode*)node2_528)->finalize, ((struct sNode*)node2_528)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node3_529) { node3_529 = come_decrement_ref_count2(node3_529, ((struct sNode*)node3_529)->finalize, ((struct sNode*)node3_529)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value900,sNoneNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value904) { __right_value904 = come_decrement_ref_count2(__right_value904, ((struct sNode*)__right_value904)->finalize, ((struct sNode*)__right_value904)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static void sNoneNode_finalize(struct sNoneNode* self){
char* __dec_obj320;
struct list$1sNodeph* __dec_obj321;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj320=self->sname;
            /*G*/ __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj321=self->tuple_elements;
            come_call_finalizer3(__dec_obj321,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__=(void*)0;
struct sNoneNode* __result255__;
void* __right_value901 = (void*)0;
struct sNoneNode* result_530;
void* __right_value902 = (void*)0;
char* __dec_obj322;
void* __right_value903 = (void*)0;
struct list$1sNodeph* __dec_obj323;
struct sNoneNode* __result256__;
    if(    self==(void*)0) {
        __result255__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    result_530=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "sNoneNode"));
    if(    self!=((void*)0)) {
        result_530->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj322=result_530->sname;
        result_530->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj323=result_530->tuple_elements;
        result_530->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->tuple_elements));
        come_call_finalizer3(__dec_obj323,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result256__ = gComeFunResultObject = __result_obj__ = result_530;
    /*i*/come_call_finalizer3(result_530,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

