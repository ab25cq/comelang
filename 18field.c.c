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
struct sStoreFieldNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
};

struct sNullCheckNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
};

struct sNullableNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
};

struct sRangeCheckNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mBegin;
    struct sNode* mEnd;
};

struct sLoadFieldNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    char* mName;
};

struct sStoreArrayNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
};

struct sLoadArrayNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* mArrayNum;
    _Bool mBreakGuard;
    struct sNode* mLeft;
    _Bool mQuote;
};

struct sLoadRangeArrayNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* mArrayNum;
    struct sNode* mLeft;
    _Bool mQuote;
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
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
_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);
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
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
char* sStoreFieldNode_kind(struct sStoreFieldNode* self);
_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);
char* sNullCheckNode_kind(struct sNullCheckNode* self);
_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info);
char* sNullableNode_kind(struct sNullableNode* self);
_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info);
char* sRangeCheckNode_kind(struct sRangeCheckNode* self);
_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info);
struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);
char* sLoadFieldNode_kind(struct sLoadFieldNode* self);
_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);
char* sStoreArrayNode_kind(struct sStoreArrayNode* self);
_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);
char* sLoadArrayNode_kind(struct sLoadArrayNode* self);
_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);
struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);
char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);
_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sRangeCheckNode_finalize(struct sRangeCheckNode* self);
static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self);
static void sNullableNode_finalize(struct sNullableNode* self);
static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __right_value153 = (void*)0;
struct sType* generics_type_66;
struct sType* __dec_obj61;
struct sClass* klass_97;
char* class_name_98;
char* fun_name2_99;
struct sFun* operator_fun_100;
void* __right_value154 = (void*)0;
char* none_generics_name_101;
void* __right_value155 = (void*)0;
struct sType* obj_type_102;
void* __right_value156 = (void*)0;
char* __dec_obj62;
void* __right_value157 = (void*)0;
char* fun_name3_103;
struct sGenericsFun* generics_fun_104;
void* __right_value158 = (void*)0;
_Bool _if_conditional1;
_Bool __result89__;
void* __right_value159 = (void*)0;
char* __dec_obj88;
int i_110;
void* __right_value160 = (void*)0;
char* new_fun_name_111;
void* __right_value161 = (void*)0;
char* __dec_obj89;
_Bool result_112;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct CVALUE* come_value_113;
char* left_value2_114;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
char* __dec_obj90;
void* __right_value167 = (void*)0;
char* __dec_obj91;
char* middle_value2_118;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
char* __dec_obj92;
void* __right_value171 = (void*)0;
char* __dec_obj93;
char* right_value2_119;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
char* __dec_obj94;
void* __right_value175 = (void*)0;
char* __dec_obj95;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
char* __dec_obj96;
void* __right_value181 = (void*)0;
struct sType* result_type1_120;
void* __right_value182 = (void*)0;
struct sType* result_type2_121;
void* __right_value183 = (void*)0;
struct sType* __dec_obj97;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
char* __dec_obj98;
void* __right_value186 = (void*)0;
char* __dec_obj99;
_Bool __result97__;
fun_name2_99 = (void*)0;
memset(&i_110, 0, sizeof(int));
left_value2_114 = (void*)0;
middle_value2_118 = (void*)0;
right_value2_119 = (void*)0;
    generics_type_66=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_66->mNoSolvedGenericsType->v1) {
        __dec_obj61=generics_type_66;
        generics_type_66=(struct sType*)come_increment_ref_count(generics_type_66->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    klass_97=type->mClass;
    class_name_98=klass_97->mName;
    operator_fun_100=((void*)0);
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_101=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_102=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj62=fun_name2_99;
        fun_name2_99=(char*)come_increment_ref_count(create_method_name(obj_type_102,(_Bool)0,fun_name,info,(_Bool)1));
        /*G*/ __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_103=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_101,fun_name));
        generics_fun_104=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_103,((void*)0));
        if(        generics_fun_104) {
            if(            (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_99)),generics_fun_104,obj_type_102,info))),            _if_conditional1) {
                __result89__ = (_Bool)0;
                /* U13 */none_generics_name_101 = come_decrement_ref_count2(none_generics_name_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name3_103 = come_decrement_ref_count2(fun_name3_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(generics_type_66,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name2_99 = come_decrement_ref_count2(fun_name2_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result89__;
            }
        }
        operator_fun_100=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_99);
        /* U13 */none_generics_name_101 = come_decrement_ref_count2(none_generics_name_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_103 = come_decrement_ref_count2(fun_name3_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj88=fun_name2_99;
        fun_name2_99=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        /*G*/ __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_110=128-1;        i_110>=1;        i_110--        ){
            new_fun_name_111=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_99,i_110));
            operator_fun_100=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_111);
            if(            operator_fun_100) {
                __dec_obj89=fun_name2_99;
                fun_name2_99=(char*)come_increment_ref_count(__builtin_string(new_fun_name_111));
                /*G*/ __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */new_fun_name_111 = come_decrement_ref_count2(new_fun_name_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */new_fun_name_111 = come_decrement_ref_count2(new_fun_name_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        operator_fun_100==((void*)0)) {
            operator_fun_100=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_99);
        }
    }
    result_112=(_Bool)0;
    if(    operator_fun_100) {
        come_value_113=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "CVALUE"))));
        check_assign_type(((char*)(__right_value165=xsprintf("\%s is assigned to",((char*)(__right_value164=string_to_string(fun_name2_99)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,0), "18field.c", 63, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        /* U11 */__right_value164 = come_decrement_ref_count2(__right_value164, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,0), "18field.c", 64, 1))->mHeap&&left_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,0), "18field.c", 65, 2)),left_value->type,left_value,info,(_Bool)1);
            __dec_obj90=left_value2_114;
            left_value2_114=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            /*G*/ __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj91=left_value2_114;
            left_value2_114=(char*)come_increment_ref_count(string_clone(left_value->c_value));
            /*G*/ __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value169=xsprintf("\%s is assigned to",((char*)(__right_value168=string_to_string(fun_name2_99)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,1), "18field.c", 72, 3)),middle_value->type,middle_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        /* U11 */__right_value168 = come_decrement_ref_count2(__right_value168, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value169 = come_decrement_ref_count2(__right_value169, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,1), "18field.c", 73, 4))->mHeap&&middle_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,1), "18field.c", 74, 5)),middle_value->type,middle_value,info,(_Bool)1);
            __dec_obj92=middle_value2_118;
            middle_value2_118=(char*)come_increment_ref_count(xsprintf("%s",middle_value->c_value));
            /*G*/ __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj93=middle_value2_118;
            middle_value2_118=(char*)come_increment_ref_count(string_clone(middle_value->c_value));
            /*G*/ __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value173=xsprintf("\%s is assigned to",((char*)(__right_value172=string_to_string(fun_name2_99)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,2), "18field.c", 81, 6)),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        /* U11 */__right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,2), "18field.c", 82, 7))->mHeap&&right_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,2), "18field.c", 83, 8)),right_value->type,right_value,info,(_Bool)1);
            __dec_obj94=right_value2_119;
            right_value2_119=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            /*G*/ __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj95=right_value2_119;
            right_value2_119=(char*)come_increment_ref_count(string_clone(right_value->c_value));
            /*G*/ __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj96=come_value_113->c_value;
        come_value_113->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s,\%s)",((char*)(__right_value176=string_to_string(fun_name2_99))),((char*)(__right_value177=string_to_string(left_value2_114))),((char*)(__right_value178=string_to_string(middle_value2_118))),((char*)(__right_value179=string_to_string(right_value2_119)))));
        /*G*/ __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value177 = come_decrement_ref_count2(__right_value177, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value178 = come_decrement_ref_count2(__right_value178, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value179 = come_decrement_ref_count2(__right_value179, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type1_120=(struct sType*)come_increment_ref_count(sType_clone(operator_fun_100->mResultType));
        result_type2_121=(struct sType*)come_increment_ref_count(solve_generics(result_type1_120,generics_type_66,info));
        __dec_obj97=come_value_113->type;
        come_value_113->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_121));
        come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_113->var=((void*)0);
        if(        result_type2_121->mHeap) {
            append_object_to_right_values2(come_value_113,(struct sType*)come_increment_ref_count(result_type2_121),info,(_Bool)0);
        }
        if(        result_type2_121->mGuardValue&&result_type2_121->mPointerNum>0) {
            __dec_obj98=come_value_113->c_value;
            come_value_113->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value184=make_type_name_string(result_type2_121,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_113->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
            /*G*/ __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U11 */__right_value184 = come_decrement_ref_count2(__right_value184, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        __dec_obj99=come_value_113->c_value;
        come_value_113->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_113->c_value,come_value_113->type,info));
        /*G*/ __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value_113->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_113));
        result_112=(_Bool)1;
        /*i*/come_call_finalizer3(come_value_113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */left_value2_114 = come_decrement_ref_count2(left_value2_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */middle_value2_118 = come_decrement_ref_count2(middle_value2_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */right_value2_119 = come_decrement_ref_count2(right_value2_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type1_120,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_121,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result97__ = result_112;
    /*i*/come_call_finalizer3(generics_type_66,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */fun_name2_99 = come_decrement_ref_count2(fun_name2_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result97__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result67__;
void* __right_value117 = (void*)0;
struct sType* result_67;
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
struct tuple1$1sTypeph* __dec_obj56;
void* __right_value149 = (void*)0;
struct sNode* __dec_obj57;
void* __right_value150 = (void*)0;
char* __dec_obj58;
void* __right_value151 = (void*)0;
char* __dec_obj59;
void* __right_value152 = (void*)0;
char* __dec_obj60;
struct sType* __result84__;
    if(    self==(void*)0) {
        __result67__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result67__;
    }
    result_67=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_67->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj38=result_67->mNoSolvedGenericsType;
        result_67->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj38,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj39=result_67->mOriginalLoadVarType;
        result_67->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj39,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj40=result_67->mGenericsName;
        result_67->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj44=result_67->mGenericsTypes;
        result_67->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj44,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj48=result_67->mArrayNum;
        result_67->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj48,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_67->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj49=result_67->mParamTypes;
        result_67->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj49,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj53=result_67->mParamNames;
        result_67->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj53,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj54=result_67->mResultType;
        result_67->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_67->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj55=result_67->mAlignas;
        result_67->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj56=result_67->mChannelType;
        result_67->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj56,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_67->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_67->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_67->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_67->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_67->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_67->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_67->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_67->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_67->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_67->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_67->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_67->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_67->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_67->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_67->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_67->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_67->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_67->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_67->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_67->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_67->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_67->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_67->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj57=result_67->mSizeNum;
        result_67->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_67->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj58=result_67->mOriginalTypeName;
        result_67->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_67->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_67->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_67->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_67->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_67->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_67->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_67->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_67->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj59=result_67->mAsmName;
        result_67->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_67->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_67->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_67->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_67->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_67->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_67->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj60=result_67->mTupleName;
        result_67->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        /*G*/ __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result84__ = gComeFunResultObject = __result_obj__ = result_67;
    /*i*/come_call_finalizer3(result_67,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result68__;
void* __right_value118 = (void*)0;
struct tuple1$1sTypeph* result_68;
void* __right_value119 = (void*)0;
struct sType* __dec_obj15;
struct tuple1$1sTypeph* __result69__;
    if(    self==(void*)0) {
        __result68__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    result_68=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj15=result_68->v1;
        result_68->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result69__ = gComeFunResultObject = __result_obj__ = result_68;
    /*i*/come_call_finalizer3(result_68,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj16;
struct tuple1$1sTypeph* __dec_obj18;
char* __dec_obj20;
struct list$1sTypeph* __dec_obj21;
struct list$1sNodeph* __dec_obj23;
struct list$1sTypeph* __dec_obj25;
struct list$1charph* __dec_obj26;
struct tuple1$1sTypeph* __dec_obj28;
struct sNode* __dec_obj30;
struct tuple1$1sTypeph* __dec_obj31;
struct sNode* __dec_obj33;
char* __dec_obj34;
char* __dec_obj35;
char* __dec_obj36;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj16=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj16,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj18=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj18,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj20=self->mGenericsName;
            /*G*/ __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj21=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj23=self->mArrayNum;
            come_call_finalizer3(__dec_obj23,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj25=self->mParamTypes;
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj26=self->mParamNames;
            come_call_finalizer3(__dec_obj26,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj28=self->mResultType;
            come_call_finalizer3(__dec_obj28,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj30=self->mAlignas;
            /* U1 */ if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj31=self->mChannelType;
            come_call_finalizer3(__dec_obj31,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj33=self->mSizeNum;
            /* U1 */ if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj34=self->mOriginalTypeName;
            /*G*/ __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj35=self->mAsmName;
            /*G*/ __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj36=self->mTupleName;
            /*G*/ __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_69;
struct list_item$1sTypeph* prev_it_70;
    it_69=self->head;
    while(it_69!=((void*)0)) {
        prev_it_70=it_69;
        it_69=it_69->next;
        /*i*/come_call_finalizer3(prev_it_70,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj22;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj22=self->item;
            come_call_finalizer3(__dec_obj22,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_71;
struct list_item$1sTypeph* prev_it_72;
    it_71=self->head;
    while(it_71!=((void*)0)) {
        prev_it_72=it_71;
        it_71=it_71->next;
        /*i*/come_call_finalizer3(prev_it_72,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_73;
struct list_item$1sNodeph* prev_it_74;
    it_73=self->head;
    while(it_73!=((void*)0)) {
        prev_it_74=it_73;
        it_73=it_73->next;
        /*i*/come_call_finalizer3(prev_it_74,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj24;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj24=self->item;
            /* U1 */ if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_75;
struct list_item$1sNodeph* prev_it_76;
    it_75=self->head;
    while(it_75!=((void*)0)) {
        prev_it_76=it_75;
        it_75=it_75->next;
        /*i*/come_call_finalizer3(prev_it_76,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_77;
struct list_item$1charph* prev_it_78;
    it_77=self->head;
    while(it_77!=((void*)0)) {
        prev_it_78=it_77;
        it_77=it_77->next;
        /*i*/come_call_finalizer3(prev_it_78,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj27;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj27=self->item;
            /*G*/ __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_79;
struct list_item$1charph* prev_it_80;
    it_79=self->head;
    while(it_79!=((void*)0)) {
        prev_it_80=it_79;
        it_79=it_79->next;
        /*i*/come_call_finalizer3(prev_it_80,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj32;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj32=self->v1;
            come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
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

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result70__;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1sTypeph* result_81;
struct list_item$1sTypeph* it_82;
void* __right_value128 = (void*)0;
struct list$1sTypeph* __result73__;
    if(    self==((void*)0)) {
        __result70__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    result_81=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 146, "list$1sTypeph"))));
    it_82=self->head;
    while(it_82!=((void*)0)) {
        list$1sTypeph_add(result_81,(struct sType*)come_increment_ref_count(sType_clone(it_82->item)));
        it_82=it_82->next;
    }
    __result73__ = gComeFunResultObject = __result_obj__ = result_81;
    /*i*/come_call_finalizer3(result_81,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value125 = (void*)0;
struct list_item$1sTypeph* litem_83;
struct sType* __dec_obj41;
void* __right_value126 = (void*)0;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj42;
void* __right_value127 = (void*)0;
struct list_item$1sTypeph* litem_85;
struct sType* __dec_obj43;
struct list$1sTypeph* __result72__;
    if(    self->len==0) {
        litem_83=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value125=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 160, "list_item$1sTypeph"))));
        litem_83->prev=((void*)0);
        litem_83->next=((void*)0);
        __dec_obj41=litem_83->item;
        litem_83->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_83;
        self->head=litem_83;
    }
    else if(    self->len==1) {
        litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value126=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 170, "list_item$1sTypeph"))));
        litem_84->prev=self->head;
        litem_84->next=((void*)0);
        __dec_obj42=litem_84->item;
        litem_84->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_84;
        self->head->next=litem_84;
    }
    else {
        litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value127=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 180, "list_item$1sTypeph"))));
        litem_85->prev=self->tail;
        litem_85->next=((void*)0);
        __dec_obj43=litem_85->item;
        litem_85->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_85;
        self->tail=litem_85;
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
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct list$1sNodeph* result_86;
struct list_item$1sNodeph* it_87;
void* __right_value136 = (void*)0;
struct list$1sNodeph* __result79__;
    if(    self==((void*)0)) {
        __result74__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    result_86=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 146, "list$1sNodeph"))));
    it_87=self->head;
    while(it_87!=((void*)0)) {
        list$1sNodeph_add(result_86,(struct sNode*)come_increment_ref_count(sNode_clone(it_87->item)));
        it_87=it_87->next;
    }
    __result79__ = gComeFunResultObject = __result_obj__ = result_86;
    /*i*/come_call_finalizer3(result_86,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value132 = (void*)0;
struct list_item$1sNodeph* litem_88;
struct sNode* __dec_obj45;
void* __right_value133 = (void*)0;
struct list_item$1sNodeph* litem_89;
struct sNode* __dec_obj46;
void* __right_value134 = (void*)0;
struct list_item$1sNodeph* litem_90;
struct sNode* __dec_obj47;
struct list$1sNodeph* __result76__;
    if(    self->len==0) {
        litem_88=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value132=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 160, "list_item$1sNodeph"))));
        litem_88->prev=((void*)0);
        litem_88->next=((void*)0);
        __dec_obj45=litem_88->item;
        litem_88->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_88;
        self->head=litem_88;
    }
    else if(    self->len==1) {
        litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value133=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 170, "list_item$1sNodeph"))));
        litem_89->prev=self->head;
        litem_89->next=((void*)0);
        __dec_obj46=litem_89->item;
        litem_89->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_89;
        self->head->next=litem_89;
    }
    else {
        litem_90=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value134=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 180, "list_item$1sNodeph"))));
        litem_90->prev=self->tail;
        litem_90->next=((void*)0);
        __dec_obj47=litem_90->item;
        litem_90->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_90;
        self->tail=litem_90;
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
void* __right_value135 = (void*)0;
struct sNode* result_91;
struct sNode* __result78__;
    if(    self==(void*)0) {
        __result77__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    result_91=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_91->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_91->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_91->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_91->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_91->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_91->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_91->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_91->kind=self->kind;
    }
    __result78__ = gComeFunResultObject = __result_obj__ = result_91;
    if(result_91) { result_91 = come_decrement_ref_count2(result_91, ((struct sNode*)result_91)->finalize, ((struct sNode*)result_91)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result80__;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct list$1charph* result_92;
struct list_item$1charph* it_93;
void* __right_value144 = (void*)0;
struct list$1charph* __result83__;
    if(    self==((void*)0)) {
        __result80__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result80__;
    }
    result_92=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 146, "list$1charph"))));
    it_93=self->head;
    while(it_93!=((void*)0)) {
        list$1charph_add(result_92,(char*)come_increment_ref_count(string_clone(it_93->item)));
        it_93=it_93->next;
    }
    __result83__ = gComeFunResultObject = __result_obj__ = result_92;
    /*i*/come_call_finalizer3(result_92,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value141 = (void*)0;
struct list_item$1charph* litem_94;
char* __dec_obj50;
void* __right_value142 = (void*)0;
struct list_item$1charph* litem_95;
char* __dec_obj51;
void* __right_value143 = (void*)0;
struct list_item$1charph* litem_96;
char* __dec_obj52;
struct list$1charph* __result82__;
    if(    self->len==0) {
        litem_94=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value141=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 160, "list_item$1charph"))));
        litem_94->prev=((void*)0);
        litem_94->next=((void*)0);
        __dec_obj50=litem_94->item;
        litem_94->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_94;
        self->head=litem_94;
    }
    else if(    self->len==1) {
        litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value142=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 170, "list_item$1charph"))));
        litem_95->prev=self->head;
        litem_95->next=((void*)0);
        __dec_obj51=litem_95->item;
        litem_95->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_95;
        self->head->next=litem_95;
    }
    else {
        litem_96=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 180, "list_item$1charph"))));
        litem_96->prev=self->tail;
        litem_96->next=((void*)0);
        __dec_obj52=litem_96->item;
        litem_96->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_96;
        self->tail=litem_96;
    }
    self->len++;
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_105;
unsigned int it_106;
struct sGenericsFun* __result85__;
struct sGenericsFun* __result86__;
struct sGenericsFun* __result87__;
struct sGenericsFun* __result88__;
    hash_105=string_get_hash_key(((char*)key))%self->size;
    it_106=hash_105;
    while((_Bool)1) {
        if(        self->item_existance[it_106]) {
            if(            string_equals(self->keys[it_106],key)) {
                __result85__ = gComeFunResultObject = __result_obj__ = self->items[it_106];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result85__;
            }
            it_106++;
            if(            it_106>=self->size) {
                it_106=0;
            }
            else if(            it_106==hash_105) {
                __result86__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result86__;
            }
        }
        else {
            __result87__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result87__;
        }
    }
    __result88__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj63;
struct list$1charph* __dec_obj64;
struct list$1charph* __dec_obj65;
char* __dec_obj66;
struct sType* __dec_obj67;
struct list$1sTypeph* __dec_obj68;
struct list$1charph* __dec_obj69;
struct list$1charph* __dec_obj70;
char* __dec_obj71;
char* __dec_obj72;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj63=self->mImplType;
            come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj64=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj64,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj65=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj65,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj66=self->mName;
            /*G*/ __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj67=self->mResultType;
            come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj68=self->mParamTypes;
            come_call_finalizer3(__dec_obj68,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj69=self->mParamNames;
            come_call_finalizer3(__dec_obj69,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj70=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj70,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj71=self->mBlock;
            /*G*/ __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj72=self->mGenericsSName;
            /*G*/ __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_107;
unsigned int hash_108;
unsigned int it_109;
struct sFun* __result90__;
struct sFun* __result91__;
struct sFun* __result92__;
struct sFun* __result93__;
default_value_107 = (void*)0;
    memset(&default_value_107,0,sizeof(struct sFun*));
    hash_108=string_get_hash_key(((char*)key))%self->size;
    it_109=hash_108;
    while((_Bool)1) {
        if(        self->item_existance[it_109]) {
            if(            string_equals(self->keys[it_109],key)) {
                __result90__ = gComeFunResultObject = __result_obj__ = self->items[it_109];
                /*i*/come_call_finalizer3(default_value_107,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result90__;
            }
            it_109++;
            if(            it_109>=self->size) {
                it_109=0;
            }
            else if(            it_109==hash_108) {
                __result91__ = gComeFunResultObject = __result_obj__ = default_value_107;
                /*i*/come_call_finalizer3(default_value_107,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result91__;
            }
        }
        else {
            __result92__ = gComeFunResultObject = __result_obj__ = default_value_107;
            /*i*/come_call_finalizer3(default_value_107,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result92__;
        }
    }
    __result93__ = gComeFunResultObject = __result_obj__ = default_value_107;
    /*i*/come_call_finalizer3(default_value_107,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
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

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_115;
int i_116;
struct sType* __result94__;
struct sType* default_value_117;
struct sType* __result95__;
default_value_117 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_115=self->head;
    i_116=0;
    while(it_115!=((void*)0)) {
        if(        position==i_116) {
            __result94__ = gComeFunResultObject = __result_obj__ = it_115->item;
            gComeFunResultObject = (void*)0;
            return __result94__;
        }
        it_115=it_115->next;
        i_116++;
    }
    memset(&default_value_117,0,sizeof(struct sType*));
    __result95__ = gComeFunResultObject = __result_obj__ = default_value_117;
    /*i*/come_call_finalizer3(default_value_117,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value187 = (void*)0;
struct list_item$1CVALUEph* litem_122;
struct CVALUE* __dec_obj100;
void* __right_value188 = (void*)0;
struct list_item$1CVALUEph* litem_123;
struct CVALUE* __dec_obj104;
void* __right_value189 = (void*)0;
struct list_item$1CVALUEph* litem_124;
struct CVALUE* __dec_obj105;
struct list$1CVALUEph* __result96__;
    if(    self->len==0) {
        litem_122=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value187=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 230, "list_item$1CVALUEph"))));
        litem_122->prev=((void*)0);
        litem_122->next=((void*)0);
        __dec_obj100=litem_122->item;
        litem_122->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_122;
        self->head=litem_122;
    }
    else if(    self->len==1) {
        litem_123=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value188=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 240, "list_item$1CVALUEph"))));
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        __dec_obj104=litem_123->item;
        litem_123->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj104,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        litem_124=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value189=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 250, "list_item$1CVALUEph"))));
        litem_124->prev=self->tail;
        litem_124->next=((void*)0);
        __dec_obj105=litem_124->item;
        litem_124->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj105,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_124;
        self->tail=litem_124;
    }
    self->len++;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj101;
struct sType* __dec_obj102;
char* __dec_obj103;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj101=self->c_value;
            /*G*/ __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj102=self->type;
            come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj103=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct sNode* __dec_obj107;
void* __right_value192 = (void*)0;
struct sNode* __dec_obj108;
void* __right_value193 = (void*)0;
char* __dec_obj109;
struct sStoreFieldNode* __result98__;
    ((struct sNodeBase*)(__right_value190=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value190,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj107=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj108=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj109=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    /*G*/ __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __result_obj__=(void*)0;
void* __right_value194 = (void*)0;
char* __result99__;
    __result99__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value194=__builtin_string("sStoreFieldNode")));
    /* U11 */__right_value194 = come_decrement_ref_count2(__right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_125;
struct sNode* right_126;
void* __right_value195 = (void*)0;
char* name_127;
_Bool Value_128;
_Bool __result100__;
void* __right_value196 = (void*)0;
struct CVALUE* left_value_129;
struct sType* left_type2_130;
struct sType* __dec_obj114;
int i_131;
void* __right_value197 = (void*)0;
char* __dec_obj115;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
char* __dec_obj116;
_Bool Value_132;
_Bool __result101__;
void* __right_value200 = (void*)0;
_Bool new_channel_133;
void* __right_value201 = (void*)0;
struct CVALUE* right_value_134;
struct sType* right_type_135;
struct sType* left_type_136;
void* __right_value202 = (void*)0;
struct sType* left_type2_137;
struct sClass* klass_138;
struct sType* field_type_146;
int index_147;
char* child_field_name_148;
_Bool child_field_is_pointer_149;
_Bool __result106__;
struct list$1tuple2$2charphsTypephph* o2_saved_150;
struct tuple2$2charphsTypeph* field_153;
struct tuple2$2charphsTypeph* multiple_assign_var1 = (void*)0;
char* field_name_156=0;
struct sType* field_type2_157=0;
void* __right_value203 = (void*)0;
struct sType* __dec_obj124;
struct list$1tuple2$2charphsTypephph* o2_saved_158;
struct tuple2$2charphsTypeph* field_159;
struct tuple2$2charphsTypeph* multiple_assign_var2 = (void*)0;
char* field_name_160=0;
struct sType* field_type2_161=0;
struct sClass* klass2_162;
struct list$1tuple2$2charphsTypephph* o2_saved_163;
struct tuple2$2charphsTypeph* field2_164;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* field_name2_165=0;
struct sType* field_type3_166=0;
void* __right_value204 = (void*)0;
char* __dec_obj125;
void* __right_value205 = (void*)0;
struct sType* __dec_obj126;
void* __right_value206 = (void*)0;
struct sType* __dec_obj127;
_Bool __result113__;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct CVALUE* come_value_167;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
_Bool __result114__;
char* c_value_168;
void* __right_value212 = (void*)0;
char* __dec_obj128;
void* __right_value213 = (void*)0;
char* __dec_obj129;
void* __right_value214 = (void*)0;
char* __dec_obj130;
void* __right_value215 = (void*)0;
char* __dec_obj131;
void* __right_value216 = (void*)0;
char* c_value_169;
void* __right_value217 = (void*)0;
char* __dec_obj132;
char* c_value_170;
void* __right_value218 = (void*)0;
char* __dec_obj133;
void* __right_value219 = (void*)0;
char* __dec_obj134;
void* __right_value220 = (void*)0;
char* __dec_obj135;
void* __right_value221 = (void*)0;
char* __dec_obj136;
void* __right_value222 = (void*)0;
char* c_value_171;
void* __right_value223 = (void*)0;
char* __dec_obj137;
_Bool __result115__;
char* c_value_172;
void* __right_value224 = (void*)0;
char* __dec_obj138;
void* __right_value225 = (void*)0;
char* __dec_obj139;
void* __right_value226 = (void*)0;
char* __dec_obj140;
void* __right_value227 = (void*)0;
char* __dec_obj141;
void* __right_value228 = (void*)0;
char* c_value_173;
void* __right_value229 = (void*)0;
char* __dec_obj142;
char* c_value_174;
void* __right_value230 = (void*)0;
char* __dec_obj143;
void* __right_value231 = (void*)0;
char* __dec_obj144;
void* __right_value232 = (void*)0;
char* __dec_obj145;
void* __right_value233 = (void*)0;
char* __dec_obj146;
void* __right_value234 = (void*)0;
char* c_value_175;
void* __right_value235 = (void*)0;
char* __dec_obj147;
_Bool __result116__;
void* __right_value236 = (void*)0;
char* __dec_obj148;
void* __right_value237 = (void*)0;
char* __dec_obj149;
void* __right_value238 = (void*)0;
struct sType* __dec_obj150;
_Bool __result117__;
void* __right_value239 = (void*)0;
char* __dec_obj151;
void* __right_value240 = (void*)0;
char* __dec_obj152;
void* __right_value241 = (void*)0;
char* __dec_obj153;
void* __right_value242 = (void*)0;
char* __dec_obj154;
void* __right_value243 = (void*)0;
char* __dec_obj155;
void* __right_value244 = (void*)0;
char* __dec_obj156;
_Bool __result118__;
void* __right_value245 = (void*)0;
struct sType* __dec_obj157;
_Bool __result119__;
c_value_168 = (void*)0;
c_value_170 = (void*)0;
c_value_172 = (void*)0;
c_value_174 = (void*)0;
    left_125=self->mLeft;
    right_126=self->mRight;
    name_127=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_128=node_compile(left_125,info);
    if(    !Value_128) {
        __result100__ = (_Bool)0;
        /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result100__;
    }
    else {
    }
    left_value_129=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type2_130=(struct sType*)come_increment_ref_count(left_value_129->type);
    if(    left_type2_130->mNoSolvedGenericsType&&left_type2_130->mNoSolvedGenericsType->v1) {
        __dec_obj114=left_type2_130;
        left_type2_130=(struct sType*)come_increment_ref_count(left_type2_130->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(left_type2_130->mClass->mName,"tuple1")||string_operator_equals(left_type2_130->mClass->mName,"tuple2")||string_operator_equals(left_type2_130->mClass->mName,"tuple3")||string_operator_equals(left_type2_130->mClass->mName,"tuple3")||string_operator_equals(left_type2_130->mClass->mName,"tuple4")||string_operator_equals(left_type2_130->mClass->mName,"tuple5")) {
        for(        i_131=0;        i_131<list$1sTypeph_length(left_type2_130->mGenericsTypes);        i_131++        ){
            if(            string_operator_equals(name_127,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type2_130->mGenericsTypes,i_131), "18field.c", 156, 9))->mTupleName)) {
                __dec_obj115=name_127;
                name_127=(char*)come_increment_ref_count(xsprintf("v%d",i_131+1));
                /*G*/ __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(    gComeDebug&&left_value_129->type->mPointerNum>0) {
        __dec_obj116=left_value_129->c_value;
        left_value_129->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value198=make_type_name_string(left_value_129->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_129->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        /*G*/ __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    Value_132=node_compile(right_126,info);
    if(    !Value_132) {
        __result101__ = (_Bool)0;
        /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type2_130,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result101__;
    }
    else {
    }
    new_channel_133=string_operator_equals(((char*)(__right_value200=right_126->kind(right_126->_protocol_obj))),"sNewChannel");
    /* U11 */__right_value200 = come_decrement_ref_count2(__right_value200, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value_134=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_135=right_value_134->type;
    dec_stack_ptr(1,info);
    left_type_136=left_value_129->type;
    /*i*/come_call_finalizer3(left_type2_130,sType_finalize, 0, 0, 0, 0, (void*)0);
    left_type2_137=(struct sType*)come_increment_ref_count(solve_generics(left_type_136,left_type_136,info));
    klass_138=left_type2_137->mClass;
    klass_138=map$2charphsClassphp_operator_load_element(info->classes,klass_138->mName);
    field_type_146=((void*)0);
    index_147=0;
    child_field_name_148=((void*)0);
    child_field_is_pointer_149=(_Bool)0;
    klass_138=map$2charphsClassphp_operator_load_element(info->classes,klass_138->mName);
    if(    klass_138->mFields==((void*)0)) {
        err_msg(info,"%s fields are null",klass_138->mName);
        __result106__ = (_Bool)0;
        /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type2_137,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(field_type_146,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */child_field_name_148 = come_decrement_ref_count2(child_field_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result106__;
    }
    for(    o2_saved_150=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_138->mFields)),field_153=list$1tuple2$2charphsTypephph_begin((o2_saved_150));    !list$1tuple2$2charphsTypephph_end((o2_saved_150));    field_153=list$1tuple2$2charphsTypephph_next((o2_saved_150))    ){
        multiple_assign_var1=field_153;
        field_name_156=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_157=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        string_operator_equals(field_name_156,name_127)) {
            __dec_obj124=field_type_146;
            field_type_146=(struct sType*)come_increment_ref_count(sType_clone(field_type2_157));
            come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */field_name_156 = come_decrement_ref_count2(field_name_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_147++;
        /* U13 */field_name_156 = come_decrement_ref_count2(field_name_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(field_type2_157,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_150,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_147==list$1tuple2$2charphsTypephph_length(klass_138->mFields)) {
        index_147=0;
        for(        o2_saved_158=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_138->mFields)),field_159=list$1tuple2$2charphsTypephph_begin((o2_saved_158));        !list$1tuple2$2charphsTypephph_end((o2_saved_158));        field_159=list$1tuple2$2charphsTypephph_next((o2_saved_158))        ){
            multiple_assign_var2=field_159;
            field_name_160=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            field_type2_161=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            klass2_162=field_type2_161->mClass;
            for(            o2_saved_163=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_162->mFields)),field2_164=list$1tuple2$2charphsTypephph_begin((o2_saved_163));            !list$1tuple2$2charphsTypephph_end((o2_saved_163));            field2_164=list$1tuple2$2charphsTypephph_next((o2_saved_163))            ){
                multiple_assign_var3=field2_164;
                field_name2_165=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                field_type3_166=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                if(                string_operator_equals(field_name2_165,name_127)) {
                    __dec_obj125=child_field_name_148;
                    child_field_name_148=(char*)come_increment_ref_count(__builtin_string(field_name_160));
                    /*G*/ __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    field_type2_161->mPointerNum>0) {
                        child_field_is_pointer_149=(_Bool)1;
                    }
                    __dec_obj126=field_type_146;
                    field_type_146=(struct sType*)come_increment_ref_count(sType_clone(field_type3_166));
                    come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */field_name2_165 = come_decrement_ref_count2(field_name2_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(field_type3_166,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                /* U13 */field_name2_165 = come_decrement_ref_count2(field_name2_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type3_166,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_163,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            child_field_name_148) {
                /* U13 */field_name_160 = come_decrement_ref_count2(field_name_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type2_161,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(            string_operator_equals(field_name_160,name_127)) {
                __dec_obj127=field_type_146;
                field_type_146=(struct sType*)come_increment_ref_count(sType_clone(field_type2_161));
                come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */field_name_160 = come_decrement_ref_count2(field_name_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type2_161,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_147++;
            /* U13 */field_name_160 = come_decrement_ref_count2(field_name_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type2_161,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_158,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_147==list$1tuple2$2charphsTypephph_length(klass_138->mFields)) {
            err_msg(info,"field not found(%s) in %s(1)",name_127,klass_138->mName);
            __result113__ = (_Bool)0;
            /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(right_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type2_137,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_146,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */child_field_name_148 = come_decrement_ref_count2(child_field_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result113__;
        }
    }
    come_value_167=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 244, "CVALUE"))));
    check_assign_type(((char*)(__right_value210=xsprintf("\%s is assigned to",((char*)(__right_value209=string_to_string(name_127)))))),field_type_146,right_type_135,right_value_134,(_Bool)0,(_Bool)1,(_Bool)0,info);
    /* U11 */__right_value209 = come_decrement_ref_count2(__right_value209, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value210 = come_decrement_ref_count2(__right_value210, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_type_135=((struct sType*)(__right_value211=sType_clone(right_value_134->type)));
    /*g*/come_call_finalizer3(__right_value211,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    field_type_146->mHeap&&!right_value_134->type->mHeap) {
        if(        string_operator_equals(right_value_134->type->mClass->mName,"void")&&right_value_134->type->mPointerNum==1) {
        }
        else {
            if(            !gComeGC) {
                err_msg(info,"require right value as heap object(%s)(1)",name_127);
                printf("right type is %s pointer num %d heap %d\n",right_value_134->type->mClass->mName,right_value_134->type->mPointerNum,right_value_134->type->mHeap);
                __result114__ = (_Bool)0;
                /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(left_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(right_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(left_type2_137,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_146,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */child_field_name_148 = come_decrement_ref_count2(child_field_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result114__;
            }
        }
    }
    if(    field_type_146->mHeap&&right_type_135->mHeap&&field_type_146->mPointerNum>0&&right_type_135->mPointerNum>0) {
        if(        left_value_129->type->mPointerNum==1) {
            if(            child_field_name_148) {
                if(                child_field_is_pointer_149) {
                    __dec_obj128=c_value_168;
                    c_value_168=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_129->c_value,child_field_name_148,name_127));
                    /*G*/ __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj129=c_value_168;
                    c_value_168=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_129->c_value,child_field_name_148,name_127));
                    /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_146,c_value_168,info,(_Bool)0,(_Bool)0);
                std_move(field_type_146,right_type_135,right_value_134,info,(_Bool)0);
                if(                child_field_is_pointer_149) {
                    __dec_obj130=come_value_167->c_value;
                    come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_129->c_value,child_field_name_148,name_127,right_value_134->c_value));
                    /*G*/ __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj131=come_value_167->c_value;
                    come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_129->c_value,child_field_name_148,name_127,right_value_134->c_value));
                    /*G*/ __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                /* U13 */c_value_168 = come_decrement_ref_count2(c_value_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_169=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_129->c_value,name_127));
                decrement_ref_count_object(field_type_146,c_value_169,info,(_Bool)0,(_Bool)0);
                std_move(field_type_146,right_type_135,right_value_134,info,(_Bool)0);
                __dec_obj132=come_value_167->c_value;
                come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_129->c_value,name_127,right_value_134->c_value));
                /*G*/ __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */c_value_169 = come_decrement_ref_count2(c_value_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        left_value_129->type->mPointerNum==0) {
            if(            child_field_name_148) {
                if(                child_field_is_pointer_149) {
                    __dec_obj133=c_value_170;
                    c_value_170=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_129->c_value,child_field_name_148,name_127));
                    /*G*/ __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj134=c_value_170;
                    c_value_170=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_129->c_value,child_field_name_148,name_127));
                    /*G*/ __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_146,c_value_170,info,(_Bool)0,(_Bool)0);
                std_move(field_type_146,right_type_135,right_value_134,info,(_Bool)0);
                if(                child_field_is_pointer_149) {
                    __dec_obj135=come_value_167->c_value;
                    come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_129->c_value,child_field_name_148,name_127,right_value_134->c_value));
                    /*G*/ __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj136=come_value_167->c_value;
                    come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_129->c_value,child_field_name_148,name_127,right_value_134->c_value));
                    /*G*/ __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                /* U13 */c_value_170 = come_decrement_ref_count2(c_value_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_171=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_129->c_value,name_127));
                decrement_ref_count_object(field_type_146,c_value_171,info,(_Bool)0,(_Bool)0);
                std_move(field_type_146,right_value_134->type,right_value_134,info,(_Bool)0);
                __dec_obj137=come_value_167->c_value;
                come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_129->c_value,name_127,right_value_134->c_value));
                /*G*/ __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */c_value_171 = come_decrement_ref_count2(c_value_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_127,left_value_129->type->mPointerNum);
            __result115__ = (_Bool)0;
            /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(right_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type2_137,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_146,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */child_field_name_148 = come_decrement_ref_count2(child_field_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result115__;
        }
    }
    else if(    field_type_146->mHeap&&field_type_146->mPointerNum>0&&right_type_135->mPointerNum>0&&string_operator_equals(right_type_135->mClass->mName,"void")) {
        if(        left_value_129->type->mPointerNum==1) {
            if(            child_field_name_148) {
                if(                child_field_is_pointer_149) {
                    __dec_obj138=c_value_172;
                    c_value_172=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_129->c_value,child_field_name_148,name_127));
                    /*G*/ __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj139=c_value_172;
                    c_value_172=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_129->c_value,child_field_name_148,name_127));
                    /*G*/ __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_146,c_value_172,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_149) {
                    __dec_obj140=come_value_167->c_value;
                    come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_129->c_value,child_field_name_148,name_127,right_value_134->c_value));
                    /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj141=come_value_167->c_value;
                    come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_129->c_value,child_field_name_148,name_127,right_value_134->c_value));
                    /*G*/ __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                /* U13 */c_value_172 = come_decrement_ref_count2(c_value_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_173=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_129->c_value,name_127));
                decrement_ref_count_object(field_type_146,c_value_173,info,(_Bool)0,(_Bool)0);
                __dec_obj142=come_value_167->c_value;
                come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_129->c_value,name_127,right_value_134->c_value));
                /*G*/ __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */c_value_173 = come_decrement_ref_count2(c_value_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        left_value_129->type->mPointerNum==0) {
            if(            child_field_name_148) {
                if(                child_field_is_pointer_149) {
                    __dec_obj143=c_value_174;
                    c_value_174=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_129->c_value,child_field_name_148,name_127));
                    /*G*/ __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj144=c_value_174;
                    c_value_174=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_129->c_value,child_field_name_148,name_127));
                    /*G*/ __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_146,c_value_174,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_149) {
                    __dec_obj145=come_value_167->c_value;
                    come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_129->c_value,child_field_name_148,name_127,right_value_134->c_value));
                    /*G*/ __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj146=come_value_167->c_value;
                    come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_129->c_value,child_field_name_148,name_127,right_value_134->c_value));
                    /*G*/ __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                /* U13 */c_value_174 = come_decrement_ref_count2(c_value_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_175=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_129->c_value,name_127));
                decrement_ref_count_object(field_type_146,c_value_175,info,(_Bool)0,(_Bool)0);
                __dec_obj147=come_value_167->c_value;
                come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_129->c_value,name_127,right_value_134->c_value));
                /*G*/ __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */c_value_175 = come_decrement_ref_count2(c_value_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_127,left_value_129->type->mPointerNum);
            __result116__ = (_Bool)0;
            /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(right_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type2_137,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_146,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */child_field_name_148 = come_decrement_ref_count2(child_field_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result116__;
        }
    }
    else if(    field_type_146->mChannel&&new_channel_133) {
        if(        child_field_is_pointer_149) {
            __dec_obj148=come_value_167->c_value;
            come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s->%s), %s);\n",left_value_129->c_value,name_127,right_value_134->c_value));
            /*G*/ __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj149=come_value_167->c_value;
            come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s.%s), %s);\n",left_value_129->c_value,name_127,right_value_134->c_value));
            /*G*/ __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj150=come_value_167->type;
        come_value_167->type=(struct sType*)come_increment_ref_count(sType_clone(right_value_134->type));
        come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_167->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_167));
        add_come_last_code(info,"%s",come_value_167->c_value);
        __result117__ = (_Bool)1;
        /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type2_137,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(field_type_146,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */child_field_name_148 = come_decrement_ref_count2(child_field_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result117__;
    }
    else {
        if(        left_value_129->type->mPointerNum==1) {
            if(            child_field_name_148) {
                if(                child_field_is_pointer_149) {
                    __dec_obj151=come_value_167->c_value;
                    come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_129->c_value,child_field_name_148,name_127,right_value_134->c_value));
                    /*G*/ __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj152=come_value_167->c_value;
                    come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_129->c_value,child_field_name_148,name_127,right_value_134->c_value));
                    /*G*/ __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj153=come_value_167->c_value;
                come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_129->c_value,name_127,right_value_134->c_value));
                /*G*/ __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else if(        left_value_129->type->mPointerNum==0) {
            if(            child_field_name_148) {
                if(                child_field_is_pointer_149) {
                    __dec_obj154=come_value_167->c_value;
                    come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_129->c_value,child_field_name_148,name_127,right_value_134->c_value));
                    /*G*/ __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj155=come_value_167->c_value;
                    come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_129->c_value,child_field_name_148,name_127,right_value_134->c_value));
                    /*G*/ __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj156=come_value_167->c_value;
                come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_129->c_value,name_127,right_value_134->c_value));
                /*G*/ __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_127,left_value_129->type->mPointerNum);
            __result118__ = (_Bool)0;
            /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(right_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type2_137,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_146,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */child_field_name_148 = come_decrement_ref_count2(child_field_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result118__;
        }
    }
    __dec_obj157=come_value_167->type;
    come_value_167->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_146));
    come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_167->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_167));
    add_come_last_code(info,"%s",come_value_167->c_value);
    __result119__ = (_Bool)1;
    /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type2_137,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(field_type_146,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */child_field_name_148 = come_decrement_ref_count2(child_field_name_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result119__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj106;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj106=self->sname;
            /*G*/ __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_139;
unsigned int hash_140;
unsigned int it_141;
struct sClass* __result102__;
struct sClass* __result103__;
struct sClass* __result104__;
struct sClass* __result105__;
default_value_139 = (void*)0;
    memset(&default_value_139,0,sizeof(struct sClass*));
    hash_140=string_get_hash_key(((char*)key))%self->size;
    it_141=hash_140;
    while((_Bool)1) {
        if(        self->item_existance[it_141]) {
            if(            string_equals(self->keys[it_141],key)) {
                __result102__ = gComeFunResultObject = __result_obj__ = self->items[it_141];
                /*i*/come_call_finalizer3(default_value_139,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result102__;
            }
            it_141++;
            if(            it_141>=self->size) {
                it_141=0;
            }
            else if(            it_141==hash_140) {
                __result103__ = gComeFunResultObject = __result_obj__ = default_value_139;
                /*i*/come_call_finalizer3(default_value_139,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result103__;
            }
        }
        else {
            __result104__ = gComeFunResultObject = __result_obj__ = default_value_139;
            /*i*/come_call_finalizer3(default_value_139,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result104__;
        }
    }
    __result105__ = gComeFunResultObject = __result_obj__ = default_value_139;
    /*i*/come_call_finalizer3(default_value_139,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj117;
struct list$1tuple2$2charphsTypephph* __dec_obj118;
char* __dec_obj122;
char* __dec_obj123;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj117=self->mName;
            /*G*/ __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj118=self->mFields;
            come_call_finalizer3(__dec_obj118,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj122=self->mDeclareSName;
            /*G*/ __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj123=self->mParentClassName;
            /*G*/ __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_142;
struct list_item$1tuple2$2charphsTypephph* prev_it_143;
    it_142=self->head;
    while(it_142!=((void*)0)) {
        prev_it_143=it_142;
        it_142=it_142->next;
        /*i*/come_call_finalizer3(prev_it_143,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj119;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj119=self->item;
            come_call_finalizer3(__dec_obj119,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj120;
struct sType* __dec_obj121;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj120=self->v1;
            /*G*/ __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj121=self->v2;
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_144;
struct list_item$1tuple2$2charphsTypephph* prev_it_145;
    it_144=self->head;
    while(it_144!=((void*)0)) {
        prev_it_145=it_144;
        it_144=it_144->next;
        /*i*/come_call_finalizer3(prev_it_145,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_151;
struct tuple2$2charphsTypeph* __result107__;
struct tuple2$2charphsTypeph* __result108__;
struct tuple2$2charphsTypeph* result_152;
struct tuple2$2charphsTypeph* __result109__;
result_151 = (void*)0;
result_152 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_151,0,sizeof(struct tuple2$2charphsTypeph*));
        __result107__ = gComeFunResultObject = __result_obj__ = result_151;
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    self->it=self->head;
    if(    self->it) {
        __result108__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    memset(&result_152,0,sizeof(struct tuple2$2charphsTypeph*));
    __result109__ = gComeFunResultObject = __result_obj__ = result_152;
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_154;
struct tuple2$2charphsTypeph* __result110__;
struct tuple2$2charphsTypeph* __result111__;
struct tuple2$2charphsTypeph* result_155;
struct tuple2$2charphsTypeph* __result112__;
result_154 = (void*)0;
result_155 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_154,0,sizeof(struct tuple2$2charphsTypeph*));
        __result110__ = gComeFunResultObject = __result_obj__ = result_154;
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result111__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result111__;
    }
    memset(&result_155,0,sizeof(struct tuple2$2charphsTypeph*));
    __result112__ = gComeFunResultObject = __result_obj__ = result_155;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct sNode* __dec_obj158;
struct sNullCheckNode* __result120__;
struct sNullCheckNode* __result121__;
    ((struct sNodeBase*)(__right_value246=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value246,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj158=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); };
    self->mOnlyNullCecker=only_null_checker;
    __result120__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __result_obj__=(void*)0;
void* __right_value248 = (void*)0;
char* __result122__;
    __result122__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value248=__builtin_string("sNullCheckNode")));
    /* U11 */__right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
struct sNode* left_176;
_Bool Value_177;
void* __right_value249 = (void*)0;
struct CVALUE* left_value_178;
void* __right_value250 = (void*)0;
char* method_name_179;
struct sType* obj_type_182;
struct sType* obj_type2_183;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
char* __dec_obj161;
struct sFun* fun_184;
_Bool __result127__;
void* __right_value253 = (void*)0;
struct sType* type_185;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct CVALUE* come_value_186;
void* __right_value256 = (void*)0;
char* __dec_obj162;
void* __right_value257 = (void*)0;
struct sType* __dec_obj163;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct CVALUE* come_value_187;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
char* __dec_obj164;
void* __right_value262 = (void*)0;
struct sType* __dec_obj165;
_Bool __result128__;
    left_176=self->mLeft;
    Value_177=node_compile(left_176,info);
    if(    !Value_177) {
        return (_Bool)0;
    }
    else {
    }
    left_value_178=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    !self->mOnlyNullCecker&&left_value_178->type->mNoSolvedGenericsType&&left_value_178->type->mNoSolvedGenericsType->v1&&left_value_178->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_178->type->mNoSolvedGenericsType->v1->mClass->mName,"optional")) {
        method_name_179=(char*)come_increment_ref_count(create_method_name(left_value_178->type,(_Bool)0,"expect",info,(_Bool)1));
        if(        map$2charphsFunph_at(info->funcs,method_name_179,((void*)0))==((void*)0)) {
            obj_type_182=left_value_178->type->mNoSolvedGenericsType->v1;
            if(            list$1sTypeph_length(obj_type_182->mGenericsTypes)>0) {
                obj_type2_183=left_value_178->type;
                __dec_obj161=method_name_179;
                method_name_179=(char*)come_increment_ref_count(make_generics_function(obj_type2_183,(char*)come_increment_ref_count(__builtin_string("expect")),info,(_Bool)1));
                /*G*/ __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_178->type->mClass->mName);
                exit(1);
            }
        }
        fun_184=map$2charphsFunphp_operator_load_element(info->funcs,method_name_179);
        if(        fun_184==((void*)0)) {
            err_msg(info,"function not found(%s)",method_name_179);
            __result127__ = (_Bool)1;
            /* U13 */method_name_179 = come_decrement_ref_count2(method_name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result127__;
        }
        type_185=(struct sType*)come_increment_ref_count(solve_generics(fun_184->mResultType,left_value_178->type,info));
        come_value_186=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 485, "CVALUE"))));
        __dec_obj162=come_value_186->c_value;
        come_value_186->c_value=(char*)come_increment_ref_count(xsprintf("%s(%s)",method_name_179,left_value_178->c_value));
        /*G*/ __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj163=come_value_186->type;
        come_value_186->type=(struct sType*)come_increment_ref_count(sType_clone(type_185));
        come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_186->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_186));
        add_come_last_code(info,"%s",come_value_186->c_value);
        /* U13 */method_name_179 = come_decrement_ref_count2(method_name_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeDebug) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_178));
    }
    else if(    left_value_178->type->mPointerNum>0) {
        come_value_187=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 499, "CVALUE"))));
        __dec_obj164=come_value_187->c_value;
        come_value_187->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value260=make_type_name_string(left_value_178->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_178->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        /*G*/ __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj165=come_value_187->type;
        come_value_187->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_178->type));
        come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_187->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_187));
        add_come_last_code(info,"%s",come_value_187->c_value);
        /*i*/come_call_finalizer3(come_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_178));
    }
    __result128__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result128__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_180;
unsigned int it_181;
struct sFun* __result123__;
struct sFun* __result124__;
struct sFun* __result125__;
struct sFun* __result126__;
    hash_180=string_get_hash_key(((char*)key))%self->size;
    it_181=hash_180;
    while((_Bool)1) {
        if(        self->item_existance[it_181]) {
            if(            string_equals(self->keys[it_181],key)) {
                __result123__ = gComeFunResultObject = __result_obj__ = self->items[it_181];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result123__;
            }
            it_181++;
            if(            it_181>=self->size) {
                it_181=0;
            }
            else if(            it_181==hash_180) {
                __result124__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result124__;
            }
        }
        else {
            __result125__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result125__;
        }
    }
    __result126__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct sNode* __dec_obj166;
struct sNullableNode* __result129__;
    ((struct sNodeBase*)(__right_value263=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value263,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj166=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); };
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __result_obj__=(void*)0;
void* __right_value265 = (void*)0;
char* __result130__;
    __result130__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value265=__builtin_string("sNullableNode")));
    /* U11 */__right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
struct sNode* left_188;
_Bool Value_189;
void* __right_value266 = (void*)0;
struct CVALUE* left_value_190;
void* __right_value271 = (void*)0;
struct CVALUE* come_value_191;
_Bool __result133__;
    left_188=self->mLeft;
    Value_189=node_compile(left_188,info);
    if(    !Value_189) {
        return (_Bool)0;
    }
    else {
    }
    left_value_190=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    left_value_190->type->mPointerNum>0&&left_value_190->type->mNullValue) {
        come_value_191=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(left_value_190));
        come_value_191->type->mNullValue=(_Bool)0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_191));
        add_come_last_code(info,"%s",come_value_191->c_value);
        /*i*/come_call_finalizer3(come_value_191,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_190));
    }
    __result133__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result133__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result131__;
void* __right_value267 = (void*)0;
struct CVALUE* result_192;
void* __right_value268 = (void*)0;
char* __dec_obj169;
void* __right_value269 = (void*)0;
struct sType* __dec_obj170;
void* __right_value270 = (void*)0;
char* __dec_obj171;
struct CVALUE* __result132__;
    if(    self==(void*)0) {
        __result131__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result131__;
    }
    result_192=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj169=result_192->c_value;
        result_192->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        /*G*/ __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj170=result_192->type;
        result_192->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_192->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_192->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj171=result_192->c_value_without_right_value_objects;
        result_192->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        /*G*/ __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result132__ = gComeFunResultObject = __result_obj__ = result_192;
    /*i*/come_call_finalizer3(result_192,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct sNode* _inf_value1;
struct sNullableNode* _inf_obj_value1;
void* __right_value277 = (void*)0;
struct sNode* __result136__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 561, "struct sNode");
    _inf_obj_value1=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value273=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 561, "sNullableNode")),left,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullableNode_finalize;
    _inf_value1->clone=(void*)sNullableNode_clone;
    _inf_value1->compile=(void*)sNullableNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullableNode_kind;
    __result136__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value277=_inf_value1));
    /*g*/come_call_finalizer3(__right_value273,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value277) { __right_value277 = come_decrement_ref_count2(__right_value277, ((struct sNode*)__right_value277)->finalize, ((struct sNode*)__right_value277)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result136__;
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct sNode* __dec_obj176;
void* __right_value280 = (void*)0;
struct sNode* __dec_obj177;
void* __right_value281 = (void*)0;
struct sNode* __dec_obj178;
struct sRangeCheckNode* __result137__;
    ((struct sNodeBase*)(__right_value278=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value278,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj176=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj177=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(sNode_clone(begin));
    /* U1 */ if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj178=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(sNode_clone(end));
    /* U1 */ if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); };
    __result137__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

char* sRangeCheckNode_kind(struct sRangeCheckNode* self){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
char* __result138__;
    __result138__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value282=__builtin_string("sRangeCheckNode")));
    /* U11 */__right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
struct sNode* left_194;
_Bool Value_195;
void* __right_value283 = (void*)0;
struct CVALUE* left_value_196;
struct sNode* begin_197;
_Bool Value_198;
_Bool __result139__;
void* __right_value284 = (void*)0;
struct CVALUE* begin_value_199;
struct sNode* end_200;
_Bool Value_201;
_Bool __result140__;
void* __right_value285 = (void*)0;
struct CVALUE* end_value_202;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct CVALUE* come_value_203;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
char* __dec_obj183;
void* __right_value290 = (void*)0;
struct sType* __dec_obj184;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct CVALUE* come_value_204;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
char* __dec_obj185;
void* __right_value295 = (void*)0;
struct sType* __dec_obj186;
_Bool __result141__;
    left_194=self->mLeft;
    Value_195=node_compile(left_194,info);
    if(    !Value_195) {
        return (_Bool)0;
    }
    else {
    }
    left_value_196=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    begin_197=self->mBegin;
    Value_198=node_compile(begin_197,info);
    if(    !Value_198) {
        __result139__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result139__;
    }
    else {
    }
    begin_value_199=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    end_200=self->mEnd;
    Value_201=node_compile(end_200,info);
    if(    !Value_201) {
        __result140__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(begin_value_199,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result140__;
    }
    else {
    }
    end_value_202=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    left_value_196->type->mPointerNum>0) {
        if(        !gComeDebug) {
            come_value_203=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 611, "CVALUE"))));
            __dec_obj183=come_value_203->c_value;
            come_value_203->c_value=(char*)come_increment_ref_count(xsprintf("(*((%s)%s))",((char*)(__right_value288=make_type_name_string(left_value_196->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_196->c_value));
            /*G*/ __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U11 */__right_value288 = come_decrement_ref_count2(__right_value288, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            left_value_196->type->mPointerNum--;
            __dec_obj184=come_value_203->type;
            come_value_203->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_196->type));
            come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_203->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_203));
            add_come_last_code(info,"%s",come_value_203->c_value);
            /*i*/come_call_finalizer3(come_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_204=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 624, "CVALUE"))));
            __dec_obj185=come_value_204->c_value;
            come_value_204->c_value=(char*)come_increment_ref_count(xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(__right_value293=make_type_name_string(left_value_196->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_196->c_value,begin_value_199->c_value,end_value_202->c_value,info->sname,info->sline));
            /*G*/ __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U11 */__right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            left_value_196->type->mPointerNum--;
            __dec_obj186=come_value_204->type;
            come_value_204->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_196->type));
            come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_204->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_204));
            add_come_last_code(info,"%s",come_value_204->c_value);
            /*i*/come_call_finalizer3(come_value_204,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_196));
    }
    __result141__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(begin_value_199,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(end_value_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result141__;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct sNode* __dec_obj187;
void* __right_value298 = (void*)0;
char* __dec_obj188;
struct sLoadFieldNode* __result142__;
    ((struct sNodeBase*)(__right_value296=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value296,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj187=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj188=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    /*G*/ __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result142__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
char* __result143__;
    __result143__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value299=__builtin_string("sLoadFieldNode")));
    /* U11 */__right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result143__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_205;
void* __right_value300 = (void*)0;
char* name_206;
_Bool Value_207;
_Bool __result144__;
void* __right_value301 = (void*)0;
struct CVALUE* left_value_208;
struct sType* left_type2_209;
struct sType* __dec_obj192;
int i_210;
void* __right_value302 = (void*)0;
char* __dec_obj193;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
char* __dec_obj194;
struct sType* left_type_211;
void* __right_value305 = (void*)0;
struct sType* left_type2_212;
struct sClass* klass_213;
struct sType* field_type_214;
int index_215;
_Bool child_field_is_pointer_216;
char* child_field_name_217;
_Bool __result145__;
struct list$1tuple2$2charphsTypephph* o2_saved_218;
struct tuple2$2charphsTypeph* field_219;
struct tuple2$2charphsTypeph* multiple_assign_var4 = (void*)0;
char* field_name_220=0;
struct sType* field_type2_221=0;
void* __right_value306 = (void*)0;
struct sType* __dec_obj195;
struct list$1tuple2$2charphsTypephph* o2_saved_222;
struct tuple2$2charphsTypeph* field_223;
struct tuple2$2charphsTypeph* multiple_assign_var5 = (void*)0;
char* field_name_224=0;
struct sType* field_type2_225=0;
struct sClass* klass2_226;
struct list$1tuple2$2charphsTypephph* o2_saved_227;
struct tuple2$2charphsTypeph* field2_228;
struct tuple2$2charphsTypeph* multiple_assign_var6 = (void*)0;
char* field_name2_229=0;
struct sType* field_type3_230=0;
void* __right_value307 = (void*)0;
char* __dec_obj196;
void* __right_value308 = (void*)0;
struct sType* __dec_obj197;
void* __right_value309 = (void*)0;
struct sType* __dec_obj198;
_Bool __result146__;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct CVALUE* come_value_231;
void* __right_value312 = (void*)0;
char* __dec_obj199;
void* __right_value313 = (void*)0;
char* __dec_obj200;
void* __right_value314 = (void*)0;
char* __dec_obj201;
void* __right_value315 = (void*)0;
char* __dec_obj202;
void* __right_value316 = (void*)0;
char* __dec_obj203;
void* __right_value317 = (void*)0;
char* __dec_obj204;
void* __right_value318 = (void*)0;
struct sType* __dec_obj205;
_Bool __result147__;
void* __right_value319 = (void*)0;
struct sType* __dec_obj206;
_Bool __result149__;
    left_205=self->mLeft;
    name_206=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_207=node_compile(left_205,info);
    if(    !Value_207) {
        __result144__ = (_Bool)0;
        /* U13 */name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result144__;
    }
    else {
    }
    left_value_208=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type2_209=(struct sType*)come_increment_ref_count(left_value_208->type);
    if(    left_type2_209->mNoSolvedGenericsType&&left_type2_209->mNoSolvedGenericsType->v1) {
        __dec_obj192=left_type2_209;
        left_type2_209=(struct sType*)come_increment_ref_count(left_type2_209->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(left_type2_209->mClass->mName,"tuple1")||string_operator_equals(left_type2_209->mClass->mName,"tuple2")||string_operator_equals(left_type2_209->mClass->mName,"tuple3")||string_operator_equals(left_type2_209->mClass->mName,"tuple3")||string_operator_equals(left_type2_209->mClass->mName,"tuple4")||string_operator_equals(left_type2_209->mClass->mName,"tuple5")) {
        for(        i_210=0;        i_210<list$1sTypeph_length(left_type2_209->mGenericsTypes);        i_210++        ){
            if(            string_operator_equals(name_206,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type2_209->mGenericsTypes,i_210), "18field.c", 680, 10))->mTupleName)) {
                __dec_obj193=name_206;
                name_206=(char*)come_increment_ref_count(xsprintf("v%d",i_210+1));
                /*G*/ __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(    gComeDebug&&left_value_208->type->mPointerNum>0) {
        __dec_obj194=left_value_208->c_value;
        left_value_208->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value303=make_type_name_string(left_value_208->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_208->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        /*G*/ __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_211=left_value_208->type;
    /*i*/come_call_finalizer3(left_type2_209,sType_finalize, 0, 0, 0, 0, (void*)0);
    left_type2_212=(struct sType*)come_increment_ref_count(solve_generics(left_type_211,left_type_211,info));
    klass_213=left_type2_212->mClass;
    klass_213=map$2charphsClassphp_operator_load_element(info->classes,klass_213->mName);
    field_type_214=((void*)0);
    index_215=0;
    child_field_is_pointer_216=(_Bool)0;
    child_field_name_217=((void*)0);
    klass_213=map$2charphsClassphp_operator_load_element(info->classes,klass_213->mName);
    if(    klass_213==((void*)0)||klass_213->mFields==((void*)0)) {
        err_msg(info,"invalid class %s",klass_213->mName);
        __result145__ = (_Bool)0;
        /* U13 */name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_value_208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type2_212,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(field_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */child_field_name_217 = come_decrement_ref_count2(child_field_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result145__;
    }
    for(    o2_saved_218=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_213->mFields)),field_219=list$1tuple2$2charphsTypephph_begin((o2_saved_218));    !list$1tuple2$2charphsTypephph_end((o2_saved_218));    field_219=list$1tuple2$2charphsTypephph_next((o2_saved_218))    ){
        multiple_assign_var4=field_219;
        field_name_220=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_221=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        if(        string_operator_equals(field_name_220,name_206)) {
            __dec_obj195=field_type_214;
            field_type_214=(struct sType*)come_increment_ref_count(sType_clone(field_type2_221));
            come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */field_name_220 = come_decrement_ref_count2(field_name_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type2_221,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_215++;
        /* U13 */field_name_220 = come_decrement_ref_count2(field_name_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(field_type2_221,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_218,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_215==list$1tuple2$2charphsTypephph_length(klass_213->mFields)) {
        index_215=0;
        for(        o2_saved_222=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_213->mFields)),field_223=list$1tuple2$2charphsTypephph_begin((o2_saved_222));        !list$1tuple2$2charphsTypephph_end((o2_saved_222));        field_223=list$1tuple2$2charphsTypephph_next((o2_saved_222))        ){
            multiple_assign_var5=field_223;
            field_name_224=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_225=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            klass2_226=field_type2_225->mClass;
            for(            o2_saved_227=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_226->mFields)),field2_228=list$1tuple2$2charphsTypephph_begin((o2_saved_227));            !list$1tuple2$2charphsTypephph_end((o2_saved_227));            field2_228=list$1tuple2$2charphsTypephph_next((o2_saved_227))            ){
                multiple_assign_var6=field2_228;
                field_name2_229=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_230=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                string_operator_equals(field_name2_229,name_206)) {
                    __dec_obj196=child_field_name_217;
                    child_field_name_217=(char*)come_increment_ref_count(__builtin_string(field_name_224));
                    /*G*/ __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    field_type2_225->mPointerNum>0) {
                        child_field_is_pointer_216=(_Bool)1;
                    }
                    __dec_obj197=field_type_214;
                    field_type_214=(struct sType*)come_increment_ref_count(sType_clone(field_type3_230));
                    come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */field_name2_229 = come_decrement_ref_count2(field_name2_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(field_type3_230,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                /* U13 */field_name2_229 = come_decrement_ref_count2(field_name2_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type3_230,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_227,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            child_field_name_217) {
                /* U13 */field_name_224 = come_decrement_ref_count2(field_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type2_225,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(            string_operator_equals(field_name_224,name_206)) {
                __dec_obj198=field_type_214;
                field_type_214=(struct sType*)come_increment_ref_count(sType_clone(field_type2_225));
                come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */field_name_224 = come_decrement_ref_count2(field_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type2_225,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_215++;
            /* U13 */field_name_224 = come_decrement_ref_count2(field_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type2_225,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_222,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_215==list$1tuple2$2charphsTypephph_length(klass_213->mFields)) {
            err_msg(info,"field not found(%s) in %s(2)",name_206,klass_213->mName);
            __result146__ = (_Bool)0;
            /* U13 */name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_value_208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type2_212,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */child_field_name_217 = come_decrement_ref_count2(child_field_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result146__;
        }
    }
    come_value_231=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 755, "CVALUE"))));
    if(    left_value_208->type->mPointerNum>0) {
        if(        child_field_name_217) {
            if(            child_field_is_pointer_216) {
                __dec_obj199=come_value_231->c_value;
                come_value_231->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_208->c_value,child_field_name_217,name_206));
                /*G*/ __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj200=come_value_231->c_value;
                come_value_231->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_208->c_value,child_field_name_217,name_206));
                /*G*/ __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj201=come_value_231->c_value;
            come_value_231->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_208->c_value,name_206));
            /*G*/ __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        if(        child_field_name_217) {
            if(            child_field_is_pointer_216) {
                __dec_obj202=come_value_231->c_value;
                come_value_231->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_208->c_value,child_field_name_217,name_206));
                /*G*/ __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj203=come_value_231->c_value;
                come_value_231->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_208->c_value,child_field_name_217,name_206));
                /*G*/ __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj204=come_value_231->c_value;
            come_value_231->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_208->c_value,name_206));
            /*G*/ __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    __dec_obj205=come_value_231->type;
    come_value_231->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_214));
    come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_231->var=((void*)0);
    if(    field_type_214==((void*)0)) {
        err_msg(info,"no field(%s)\n",name_206);
        __result147__ = (_Bool)0;
        /* U13 */name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_value_208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type2_212,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(field_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */child_field_name_217 = come_decrement_ref_count2(child_field_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_231,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result147__;
    }
    if(    list$1sNodeph_length(come_value_231->type->mArrayNum)==1) {
        __dec_obj206=come_value_231->type->mOriginalLoadVarType->v1;
        come_value_231->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(sType_clone(come_value_231->type));
        come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1sNodeph_reset(come_value_231->type->mArrayNum);
        come_value_231->type->mPointerNum++;
        come_value_231->type->mOriginalTypeNamePointerNum=come_value_231->type->mPointerNum;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_231));
    __result149__ = (_Bool)1;
    /* U13 */name_206 = come_decrement_ref_count2(name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_value_208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type2_212,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(field_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */child_field_name_217 = come_decrement_ref_count2(child_field_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_231,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result149__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_232;
struct list_item$1sNodeph* prev_it_233;
struct list$1sNodeph* __result148__;
    it_232=self->head;
    while(it_232!=((void*)0)) {
        prev_it_233=it_232;
        it_232=it_232->next;
        /*i*/come_call_finalizer3(prev_it_233,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result148__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result148__;
}

struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sNode* _inf_value2;
struct sLoadFieldNode* _inf_obj_value2;
void* __right_value326 = (void*)0;
struct sNode* __result152__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 807, "struct sNode");
    _inf_obj_value2=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value321=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 807, "sLoadFieldNode")),left,(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadFieldNode_finalize;
    _inf_value2->clone=(void*)sLoadFieldNode_clone;
    _inf_value2->compile=(void*)sLoadFieldNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLoadFieldNode_kind;
    __result152__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value326=_inf_value2));
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value321,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value326) { __right_value326 = come_decrement_ref_count2(__right_value326, ((struct sNode*)__right_value326)->finalize, ((struct sNode*)__right_value326)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result152__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sNode* __dec_obj213;
void* __right_value329 = (void*)0;
struct sNode* __dec_obj214;
void* __right_value330 = (void*)0;
struct list$1sNodeph* __dec_obj215;
struct sStoreArrayNode* __result153__;
    ((struct sNodeBase*)(__right_value327=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value327,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj213=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count2(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj214=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj214) { __dec_obj214 = come_decrement_ref_count2(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj215=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(array_num));
    come_call_finalizer3(__dec_obj215,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mQuote=quote;
    __result153__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result153__;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value331 = (void*)0;
char* __result154__;
    __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value331=__builtin_string("sStoreArrayNode")));
    /* U11 */__right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_235;
struct sNode* right_236;
struct list$1sNodeph* array_num_nodes_237;
_Bool Value_238;
void* __right_value332 = (void*)0;
struct CVALUE* left_value_239;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
char* __dec_obj220;
struct sType* left_type_240;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct list$1CVALUEph* array_num_241;
struct list$1sNodeph* o2_saved_244;
struct sNode* it_247;
_Bool Value_250;
_Bool __result162__;
void* __right_value337 = (void*)0;
struct CVALUE* c_value_251;
_Bool Value_252;
_Bool __result163__;
void* __right_value338 = (void*)0;
struct CVALUE* right_value_253;
struct sType* right_type_254;
struct sClass* klass_255;
void* __right_value339 = (void*)0;
struct sType* type_256;
char* fun_name_257;
_Bool calling_fun_258;
char* check_code_262;
struct sType* var_type_263;
void* __right_value340 = (void*)0;
struct sType* result_type_264;
struct sType* __dec_obj222;
int n_265;
void* __right_value341 = (void*)0;
struct sType* __dec_obj223;
void* __right_value342 = (void*)0;
struct sType* __dec_obj224;
int i_266;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct CVALUE* come_value_279;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct buffer* buf_280;
void* __right_value347 = (void*)0;
struct sType* result_type2_281;
struct list$1CVALUEph* o2_saved_282;
struct CVALUE* it_285;
int i_288;
struct list$1sNodeph* o2_saved_289;
struct sNode* it_290;
_Bool Value_291;
void* __right_value348 = (void*)0;
struct CVALUE* come_value_292;
void* __right_value349 = (void*)0;
char* __dec_obj225;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct CVALUE* come_value_293;
int i_294;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct buffer* buf_295;
struct list$1CVALUEph* o2_saved_296;
struct CVALUE* it_297;
void* __right_value354 = (void*)0;
char* left_value_code_298;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
char* __dec_obj226;
void* __right_value357 = (void*)0;
char* __dec_obj227;
_Bool __result174__;
void* __right_value358 = (void*)0;
char* __dec_obj228;
void* __right_value359 = (void*)0;
char* __dec_obj229;
_Bool __result175__;
void* __right_value360 = (void*)0;
struct sType* result_type_299;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct list$1sNodeph* __dec_obj230;
struct sType* __dec_obj231;
void* __right_value363 = (void*)0;
char* __dec_obj232;
_Bool __result176__;
memset(&calling_fun_258, 0, sizeof(_Bool));
    left_235=self->mLeft;
    right_236=self->mRight;
    array_num_nodes_237=self->mArrayNum;
    Value_238=node_compile(left_235,info);
    if(    !Value_238) {
        return (_Bool)0;
    }
    else {
    }
    left_value_239=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_239->type->mPointerNum>0) {
        __dec_obj220=left_value_239->c_value;
        left_value_239->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value333=make_type_name_string(left_value_239->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_239->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        /*G*/ __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_240=left_value_239->type;
    array_num_241=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 846, "list$1CVALUEph"))));
    for(    o2_saved_244=(array_num_nodes_237),it_247=list$1sNodeph_begin((o2_saved_244));    !list$1sNodeph_end((o2_saved_244));    it_247=list$1sNodeph_next((o2_saved_244))    ){
        Value_250=node_compile(it_247,info);
        if(        !Value_250) {
            __result162__ = (_Bool)0;
            /*i*/come_call_finalizer3(left_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(array_num_241,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result162__;
        }
        else {
        }
        c_value_251=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_241,(struct CVALUE*)come_increment_ref_count(c_value_251));
        /*i*/come_call_finalizer3(c_value_251,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    Value_252=node_compile(right_236,info);
    if(    !Value_252) {
        __result163__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(array_num_241,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result163__;
    }
    else {
    }
    right_value_253=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_type_254=right_value_253->type;
    klass_255=left_value_239->type->mClass;
    type_256=(struct sType*)come_increment_ref_count(sType_clone(left_value_239->type));
    fun_name_257="operator_store_element";
    if(    self->mQuote) {
        calling_fun_258=(_Bool)0;
    }
    else {
        calling_fun_258=operator_overload_fun2(type_256,fun_name_257,left_value_239,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_241,0), "18field.c", 878, 11)),right_value_253,info);
    }
    if(    !calling_fun_258) {
        check_code_262=((void*)0);
        if(        left_value_239->var&&left_value_239->var->mType&&list$1sNodeph_length(left_value_239->var->mType->mArrayNum)>0) {
            var_type_263=left_value_239->var->mType;
            result_type_264=(struct sType*)come_increment_ref_count(sType_clone(left_type_240));
            if(            result_type_264->mOriginalLoadVarType->v1) {
                __dec_obj222=result_type_264;
                result_type_264=(struct sType*)come_increment_ref_count(result_type_264->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            list$1sNodeph_length(result_type_264->mArrayNum)>0) {
                n_265=list$1sNodeph_length(result_type_264->mArrayNum)-list$1CVALUEph_length(array_num_241);
                if(                n_265==0) {
                    __dec_obj223=result_type_264;
                    result_type_264=(struct sType*)come_increment_ref_count(sType_clone(left_type_240));
                    come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    left_type_240->mOriginalLoadVarType->v1) {
                        __dec_obj224=result_type_264;
                        result_type_264=(struct sType*)come_increment_ref_count(sType_clone(left_type_240->mOriginalLoadVarType->v1));
                        come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    list$1sNodeph_reset(result_type_264->mArrayNum);
                }
                else if(                n_265>0) {
                    for(                    i_266=0;                    i_266<n_265;                    i_266++                    ){
                        list$1sNodeph_delete(result_type_264->mArrayNum,-1,-1);
                    }
                }
                else if(                n_265<0) {
                    list$1sNodeph_reset(result_type_264->mArrayNum);
                    result_type_264->mPointerNum+=n_265;
                    if(                    result_type_264->mPointerNum<0) {
                        result_type_264->mPointerNum=0;
                    }
                }
            }
            else {
                if(                result_type_264->mPointerNum>0) {
                    result_type_264->mPointerNum-=list$1CVALUEph_length(array_num_241);
                    if(                    result_type_264->mPointerNum<0) {
                        result_type_264->mPointerNum=0;
                    }
                }
            }
            come_value_279=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 926, "CVALUE"))));
            buf_280=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 928, "buffer"))));
            result_type2_281=(struct sType*)come_increment_ref_count(sType_clone(result_type_264));
            result_type2_281->mPointerNum++;
            buffer_append_format(buf_280,"come_range_check(&%s",left_value_239->c_value);
            for(            o2_saved_282=(struct list$1CVALUEph*)come_increment_ref_count((array_num_241)),it_285=list$1CVALUEph_begin((o2_saved_282));            !list$1CVALUEph_end((o2_saved_282));            it_285=list$1CVALUEph_next((o2_saved_282))            ){
                buffer_append_format(buf_280,"[%s]",it_285->c_value);
            }
            /*i*/come_call_finalizer3(o2_saved_282,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_format(buf_280,",%s,%s+(",left_value_239->c_value,left_value_239->c_value);
            i_288=0;
            for(            o2_saved_289=(struct list$1sNodeph*)come_increment_ref_count((var_type_263->mArrayNum)),it_290=list$1sNodeph_begin((o2_saved_289));            !list$1sNodeph_end((o2_saved_289));            it_290=list$1sNodeph_next((o2_saved_289))            ){
                Value_291=node_compile(it_290,info);
                if(                !Value_291) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                else {
                }
                come_value_292=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                buffer_append_format(buf_280,"%s",come_value_292->c_value);
                if(                i_288!=list$1sNodeph_length(var_type_263->mArrayNum)-1) {
                    buffer_append_str(buf_280,"*");
                }
                i_288++;
                /*i*/come_call_finalizer3(come_value_292,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_289,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_format(buf_280,"), \"%s\", %d)",info->sname,info->sline);
            __dec_obj225=check_code_262;
            check_code_262=(char*)come_increment_ref_count(buffer_to_string(buf_280));
            /*G*/ __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
            /*i*/come_call_finalizer3(result_type_264,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_279,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_280,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type2_281,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_293=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 960, "CVALUE"))));
        if(        list$1sNodeph_length(left_type_240->mArrayNum)>0) {
            for(            i_294=0;            i_294<list$1CVALUEph_length(array_num_241);            i_294++            ){
                list$1sNodeph_delete(left_type_240->mArrayNum,-1,-1);
            }
        }
        else if(        left_type_240->mPointerNum>0) {
            left_type_240->mPointerNum-=list$1CVALUEph_length(array_num_241);
            if(            left_type_240->mPointerNum<0) {
                left_type_240->mPointerNum=0;
            }
        }
        buf_295=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 981, "buffer"))));
        buffer_append_str(buf_295,left_value_239->c_value);
        for(        o2_saved_296=(struct list$1CVALUEph*)come_increment_ref_count((array_num_241)),it_297=list$1CVALUEph_begin((o2_saved_296));        !list$1CVALUEph_end((o2_saved_296));        it_297=list$1CVALUEph_next((o2_saved_296))        ){
            buffer_append_format(buf_295,"[%s]",it_297->c_value);
        }
        /*i*/come_call_finalizer3(o2_saved_296,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_298=(char*)come_increment_ref_count(buffer_to_string(buf_295));
        check_assign_type(((char*)(__right_value355=xsprintf("array is assinged to"))),left_type_240,right_type_254,right_value_253,(_Bool)0,(_Bool)1,(_Bool)0,info);
        /* U11 */__right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        left_type_240->mHeap&&right_type_254->mHeap&&left_type_240->mPointerNum>0&&right_type_254->mPointerNum>0) {
            if(            left_value_239->type->mPointerNum>=1) {
                decrement_ref_count_object(left_type_240,left_value_code_298,info,(_Bool)0,(_Bool)0);
                std_move(left_type_240,right_type_254,right_value_253,info,(_Bool)0);
                __dec_obj226=come_value_293->c_value;
                come_value_293->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_298,right_value_253->c_value));
                /*G*/ __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_239->type->mPointerNum==0) {
                decrement_ref_count_object(left_type_240,left_value_code_298,info,(_Bool)0,(_Bool)0);
                std_move(left_type_240,right_type_254,right_value_253,info,(_Bool)0);
                __dec_obj227=come_value_293->c_value;
                come_value_293->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_298,right_value_253->c_value));
                /*G*/ __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_298,left_value_239->type->mPointerNum);
                __result174__ = (_Bool)0;
                /* U13 */check_code_262 = come_decrement_ref_count2(check_code_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_293,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(buf_295,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */left_value_code_298 = come_decrement_ref_count2(left_value_code_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(left_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(array_num_241,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(right_value_253,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_256,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result174__;
            }
        }
        else {
            if(            left_value_239->type->mPointerNum>=1) {
                __dec_obj228=come_value_293->c_value;
                come_value_293->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_298,right_value_253->c_value));
                /*G*/ __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_239->type->mPointerNum==0) {
                __dec_obj229=come_value_293->c_value;
                come_value_293->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_298,right_value_253->c_value));
                /*G*/ __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_298,left_value_239->type->mPointerNum);
                __result175__ = (_Bool)0;
                /* U13 */check_code_262 = come_decrement_ref_count2(check_code_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_293,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(buf_295,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */left_value_code_298 = come_decrement_ref_count2(left_value_code_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(left_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(array_num_241,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(right_value_253,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_256,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result175__;
            }
        }
        result_type_299=(struct sType*)come_increment_ref_count(sType_clone(left_type_240));
        __dec_obj230=result_type_299->mArrayNum;
        result_type_299->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1022, "list$1sNodeph"))));
        come_call_finalizer3(__dec_obj230,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj231=come_value_293->type;
        come_value_293->type=(struct sType*)come_increment_ref_count(result_type_299);
        come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_293->var=((void*)0);
        if(        check_code_262&&gComeDebug) {
            __dec_obj232=come_value_293->c_value;
            come_value_293->c_value=(char*)come_increment_ref_count(xsprintf("(%s, %s)",check_code_262,come_value_293->c_value));
            /*G*/ __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_293));
        add_come_last_code(info,"%s",come_value_293->c_value);
        /* U13 */check_code_262 = come_decrement_ref_count2(check_code_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_293,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_295,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */left_value_code_298 = come_decrement_ref_count2(left_value_code_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_299,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result176__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(array_num_241,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_253,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_256,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result176__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result155__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result155__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result155__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_242;
struct list_item$1CVALUEph* prev_it_243;
    it_242=self->head;
    while(it_242!=((void*)0)) {
        prev_it_243=it_242;
        it_242=it_242->next;
        /*i*/come_call_finalizer3(prev_it_243,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj221;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj221=self->item;
            come_call_finalizer3(__dec_obj221,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_245;
struct sNode* __result156__;
struct sNode* __result157__;
struct sNode* result_246;
struct sNode* __result158__;
result_245 = (void*)0;
result_246 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_245,0,sizeof(struct sNode*));
        __result156__ = gComeFunResultObject = __result_obj__ = result_245;
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    self->it=self->head;
    if(    self->it) {
        __result157__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    memset(&result_246,0,sizeof(struct sNode*));
    __result158__ = gComeFunResultObject = __result_obj__ = result_246;
    gComeFunResultObject = (void*)0;
    return __result158__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_248;
struct sNode* __result159__;
struct sNode* __result160__;
struct sNode* result_249;
struct sNode* __result161__;
result_248 = (void*)0;
result_249 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_248,0,sizeof(struct sNode*));
        __result159__ = gComeFunResultObject = __result_obj__ = result_248;
        gComeFunResultObject = (void*)0;
        return __result159__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result160__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result160__;
    }
    memset(&result_249,0,sizeof(struct sNode*));
    __result161__ = gComeFunResultObject = __result_obj__ = result_249;
    gComeFunResultObject = (void*)0;
    return __result161__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_259;
int i_260;
struct CVALUE* __result164__;
struct CVALUE* default_value_261;
struct CVALUE* __result165__;
default_value_261 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_259=self->head;
    i_260=0;
    while(it_259!=((void*)0)) {
        if(        position==i_260) {
            __result164__ = gComeFunResultObject = __result_obj__ = it_259->item;
            gComeFunResultObject = (void*)0;
            return __result164__;
        }
        it_259=it_259->next;
        i_260++;
    }
    memset(&default_value_261,0,sizeof(struct CVALUE*));
    __result165__ = gComeFunResultObject = __result_obj__ = default_value_261;
    /*i*/come_call_finalizer3(default_value_261,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result165__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_267;
struct list$1sNodeph* __result166__;
struct list_item$1sNodeph* it_268;
int i_269;
struct list_item$1sNodeph* prev_it_270;
struct list_item$1sNodeph* it_271;
int i_272;
struct list_item$1sNodeph* prev_it_273;
struct list_item$1sNodeph* it_274;
struct list_item$1sNodeph* head_prev_it_275;
struct list_item$1sNodeph* tail_it_276;
int i_277;
struct list_item$1sNodeph* prev_it_278;
struct list$1sNodeph* __result167__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_267=tail;
        tail=head;
        head=tmp_267;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result166__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result166__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_268=self->head;
        i_269=0;
        while(it_268!=((void*)0)) {
            if(            i_269<tail) {
                prev_it_270=it_268;
                it_268=it_268->next;
                i_269++;
                /*i*/come_call_finalizer3(prev_it_270,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_269==tail) {
                self->head=it_268;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_268=it_268->next;
                i_269++;
            }
        }
    }
    else if(    tail==self->len) {
        it_271=self->head;
        i_272=0;
        while(it_271!=((void*)0)) {
            if(            i_272==head) {
                self->tail=it_271->prev;
                self->tail->next=((void*)0);
            }
            if(            i_272>=head) {
                prev_it_273=it_271;
                it_271=it_271->next;
                i_272++;
                /*i*/come_call_finalizer3(prev_it_273,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_271=it_271->next;
                i_272++;
            }
        }
    }
    else {
        it_274=self->head;
        head_prev_it_275=((void*)0);
        tail_it_276=((void*)0);
        i_277=0;
        while(it_274!=((void*)0)) {
            if(            i_277==head) {
                head_prev_it_275=it_274->prev;
            }
            if(            i_277==tail) {
                tail_it_276=it_274;
            }
            if(            i_277>=head&&i_277<tail) {
                prev_it_278=it_274;
                it_274=it_274->next;
                i_277++;
                /*i*/come_call_finalizer3(prev_it_278,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_274=it_274->next;
                i_277++;
            }
        }
        if(        head_prev_it_275!=((void*)0)) {
            head_prev_it_275->next=tail_it_276;
        }
        if(        tail_it_276!=((void*)0)) {
            tail_it_276->prev=head_prev_it_275;
        }
    }
    __result167__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result167__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_283;
struct CVALUE* __result168__;
struct CVALUE* __result169__;
struct CVALUE* result_284;
struct CVALUE* __result170__;
result_283 = (void*)0;
result_284 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_283,0,sizeof(struct CVALUE*));
        __result168__ = gComeFunResultObject = __result_obj__ = result_283;
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    self->it=self->head;
    if(    self->it) {
        __result169__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result169__;
    }
    memset(&result_284,0,sizeof(struct CVALUE*));
    __result170__ = gComeFunResultObject = __result_obj__ = result_284;
    gComeFunResultObject = (void*)0;
    return __result170__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_286;
struct CVALUE* __result171__;
struct CVALUE* __result172__;
struct CVALUE* result_287;
struct CVALUE* __result173__;
result_286 = (void*)0;
result_287 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_286,0,sizeof(struct CVALUE*));
        __result171__ = gComeFunResultObject = __result_obj__ = result_286;
        gComeFunResultObject = (void*)0;
        return __result171__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result172__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result172__;
    }
    memset(&result_287,0,sizeof(struct CVALUE*));
    __result173__ = gComeFunResultObject = __result_obj__ = result_287;
    gComeFunResultObject = (void*)0;
    return __result173__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct list$1sNodeph* __dec_obj233;
void* __right_value366 = (void*)0;
struct sNode* __dec_obj234;
struct sLoadArrayNode* __result177__;
    ((struct sNodeBase*)(__right_value364=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value364,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj233=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(array_num));
    come_call_finalizer3(__dec_obj233,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mBreakGuard=break_guard;
    __dec_obj234=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result177__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result177__;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value367 = (void*)0;
char* __result178__;
    __result178__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value367=__builtin_string("sLoadArrayNode")));
    /* U11 */__right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result178__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_300;
struct list$1sNodeph* array_num_nodes_301;
_Bool Value_302;
void* __right_value368 = (void*)0;
struct CVALUE* left_value_303;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
char* __dec_obj238;
void* __right_value371 = (void*)0;
struct sType* left_type_304;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct list$1CVALUEph* array_num_305;
struct list$1sNodeph* o2_saved_306;
struct sNode* it_307;
_Bool Value_308;
_Bool __result179__;
void* __right_value374 = (void*)0;
struct CVALUE* c_value_309;
void* __right_value375 = (void*)0;
struct sType* type_310;
char* fun_name_311;
_Bool calling_fun_312;
struct sType* var_type_313;
void* __right_value376 = (void*)0;
struct sType* result_type_314;
struct sType* __dec_obj239;
int n_315;
void* __right_value377 = (void*)0;
struct sType* __dec_obj240;
void* __right_value378 = (void*)0;
struct sType* __dec_obj241;
int i_316;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct CVALUE* come_value_317;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct buffer* buf_318;
void* __right_value383 = (void*)0;
struct sType* result_type2_319;
void* __right_value384 = (void*)0;
struct list$1CVALUEph* o2_saved_320;
struct CVALUE* it_321;
int i_322;
struct list$1sNodeph* o2_saved_323;
struct sNode* it_324;
_Bool Value_325;
void* __right_value385 = (void*)0;
struct CVALUE* come_value_326;
void* __right_value386 = (void*)0;
char* left_value_code_327;
void* __right_value387 = (void*)0;
char* __dec_obj242;
void* __right_value388 = (void*)0;
struct sType* __dec_obj243;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct CVALUE* come_value_328;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct buffer* buf_329;
struct list$1CVALUEph* o2_saved_330;
struct CVALUE* it_331;
void* __right_value393 = (void*)0;
char* left_value_code_332;
void* __right_value394 = (void*)0;
char* __dec_obj244;
void* __right_value395 = (void*)0;
struct sType* result_type_333;
struct sType* __dec_obj245;
int n_334;
void* __right_value396 = (void*)0;
struct sType* __dec_obj246;
void* __right_value397 = (void*)0;
struct sType* __dec_obj247;
int i_335;
void* __right_value398 = (void*)0;
struct sType* __dec_obj248;
_Bool __result180__;
memset(&calling_fun_312, 0, sizeof(_Bool));
    left_300=self->mLeft;
    array_num_nodes_301=self->mArrayNum;
    Value_302=node_compile(left_300,info);
    if(    !Value_302) {
        return (_Bool)0;
    }
    else {
    }
    left_value_303=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_303->type->mPointerNum>0&&!self->mBreakGuard) {
        __dec_obj238=left_value_303->c_value;
        left_value_303->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value369=make_type_name_string(left_value_303->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_303->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        /*G*/ __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_304=(struct sType*)come_increment_ref_count(sType_clone(left_value_303->type));
    array_num_305=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1075, "list$1CVALUEph"))));
    for(    o2_saved_306=(array_num_nodes_301),it_307=list$1sNodeph_begin((o2_saved_306));    !list$1sNodeph_end((o2_saved_306));    it_307=list$1sNodeph_next((o2_saved_306))    ){
        Value_308=node_compile(it_307,info);
        if(        !Value_308) {
            __result179__ = (_Bool)0;
            /*i*/come_call_finalizer3(left_value_303,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type_304,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(array_num_305,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result179__;
        }
        else {
        }
        c_value_309=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_305,(struct CVALUE*)come_increment_ref_count(c_value_309));
        /*i*/come_call_finalizer3(c_value_309,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_310=(struct sType*)come_increment_ref_count(sType_clone(left_value_303->type));
    fun_name_311="operator_load_element";
    if(    self->mQuote) {
        calling_fun_312=(_Bool)0;
    }
    else {
        calling_fun_312=operator_overload_fun(type_310,fun_name_311,left_value_303,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_305,0), "18field.c", 1096, 12)),self->mBreakGuard,info);
    }
    if(    !calling_fun_312) {
        if(        gComeDebug&&left_value_303->var&&left_value_303->var->mType&&list$1sNodeph_length(left_value_303->var->mType->mArrayNum)>0) {
            var_type_313=left_value_303->var->mType;
            result_type_314=(struct sType*)come_increment_ref_count(sType_clone(left_type_304));
            if(            result_type_314->mOriginalLoadVarType->v1) {
                __dec_obj239=result_type_314;
                result_type_314=(struct sType*)come_increment_ref_count(result_type_314->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            list$1sNodeph_length(result_type_314->mArrayNum)>0) {
                n_315=list$1sNodeph_length(result_type_314->mArrayNum)-list$1CVALUEph_length(array_num_305);
                if(                n_315==0) {
                    __dec_obj240=result_type_314;
                    result_type_314=(struct sType*)come_increment_ref_count(sType_clone(left_type_304));
                    come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    left_type_304->mOriginalLoadVarType->v1) {
                        __dec_obj241=result_type_314;
                        result_type_314=(struct sType*)come_increment_ref_count(sType_clone(left_type_304->mOriginalLoadVarType->v1));
                        come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    list$1sNodeph_reset(result_type_314->mArrayNum);
                }
                else if(                n_315>0) {
                    for(                    i_316=0;                    i_316<n_315;                    i_316++                    ){
                        list$1sNodeph_delete(result_type_314->mArrayNum,-1,-1);
                    }
                }
                else if(                n_315<0) {
                    list$1sNodeph_reset(result_type_314->mArrayNum);
                    result_type_314->mPointerNum+=n_315;
                    if(                    result_type_314->mPointerNum<0) {
                        result_type_314->mPointerNum=0;
                    }
                }
            }
            else {
                if(                result_type_314->mPointerNum>0) {
                    result_type_314->mPointerNum-=list$1CVALUEph_length(array_num_305);
                    if(                    result_type_314->mPointerNum<0) {
                        result_type_314->mPointerNum=0;
                    }
                }
            }
            come_value_317=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1143, "CVALUE"))));
            buf_318=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1145, "buffer"))));
            result_type2_319=(struct sType*)come_increment_ref_count(sType_clone(result_type_314));
            result_type2_319->mPointerNum++;
            buffer_append_format(buf_318,"*(%s)come_range_check(&%s",((char*)(__right_value384=make_type_name_string(result_type2_319,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_303->c_value);
            /* U11 */__right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            for(            o2_saved_320=(struct list$1CVALUEph*)come_increment_ref_count((array_num_305)),it_321=list$1CVALUEph_begin((o2_saved_320));            !list$1CVALUEph_end((o2_saved_320));            it_321=list$1CVALUEph_next((o2_saved_320))            ){
                buffer_append_format(buf_318,"[%s]",it_321->c_value);
            }
            /*i*/come_call_finalizer3(o2_saved_320,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_format(buf_318,",%s,%s+(",left_value_303->c_value,left_value_303->c_value);
            i_322=0;
            for(            o2_saved_323=(struct list$1sNodeph*)come_increment_ref_count((var_type_313->mArrayNum)),it_324=list$1sNodeph_begin((o2_saved_323));            !list$1sNodeph_end((o2_saved_323));            it_324=list$1sNodeph_next((o2_saved_323))            ){
                Value_325=node_compile(it_324,info);
                if(                !Value_325) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                else {
                }
                come_value_326=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                buffer_append_format(buf_318,"%s",come_value_326->c_value);
                if(                i_322!=list$1sNodeph_length(var_type_313->mArrayNum)-1) {
                    buffer_append_str(buf_318,"*");
                }
                i_322++;
                /*i*/come_call_finalizer3(come_value_326,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_323,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_format(buf_318,"), \"%s\", %d)",info->sname,info->sline);
            left_value_code_327=(char*)come_increment_ref_count(buffer_to_string(buf_318));
            __dec_obj242=come_value_317->c_value;
            come_value_317->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_327));
            /*G*/ __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj243=come_value_317->type;
            come_value_317->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_314));
            come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_317->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_317));
            add_come_last_code(info,"%s",come_value_317->c_value);
            /*i*/come_call_finalizer3(result_type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_317,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_318,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type2_319,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */left_value_code_327 = come_decrement_ref_count2(left_value_code_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_328=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1187, "CVALUE"))));
            buf_329=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1189, "buffer"))));
            buffer_append_str(buf_329,left_value_303->c_value);
            for(            o2_saved_330=(struct list$1CVALUEph*)come_increment_ref_count((array_num_305)),it_331=list$1CVALUEph_begin((o2_saved_330));            !list$1CVALUEph_end((o2_saved_330));            it_331=list$1CVALUEph_next((o2_saved_330))            ){
                buffer_append_format(buf_329,"[%s]",it_331->c_value);
            }
            /*i*/come_call_finalizer3(o2_saved_330,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_332=(char*)come_increment_ref_count(buffer_to_string(buf_329));
            __dec_obj244=come_value_328->c_value;
            come_value_328->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_332));
            /*G*/ __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
            result_type_333=(struct sType*)come_increment_ref_count(sType_clone(left_type_304));
            if(            result_type_333->mOriginalLoadVarType->v1) {
                __dec_obj245=result_type_333;
                result_type_333=(struct sType*)come_increment_ref_count(result_type_333->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            list$1sNodeph_length(result_type_333->mArrayNum)>0) {
                n_334=list$1sNodeph_length(result_type_333->mArrayNum)-list$1CVALUEph_length(array_num_305);
                if(                n_334==0) {
                    __dec_obj246=result_type_333;
                    result_type_333=(struct sType*)come_increment_ref_count(sType_clone(left_type_304));
                    come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    left_type_304->mOriginalLoadVarType->v1) {
                        __dec_obj247=result_type_333;
                        result_type_333=(struct sType*)come_increment_ref_count(sType_clone(left_type_304->mOriginalLoadVarType->v1));
                        come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    list$1sNodeph_reset(result_type_333->mArrayNum);
                }
                else if(                n_334>0) {
                    for(                    i_335=0;                    i_335<n_334;                    i_335++                    ){
                        list$1sNodeph_delete(result_type_333->mArrayNum,-1,-1);
                    }
                }
                else if(                n_334<0) {
                    list$1sNodeph_reset(result_type_333->mArrayNum);
                    result_type_333->mPointerNum+=n_334;
                    if(                    result_type_333->mPointerNum<0) {
                        result_type_333->mPointerNum=0;
                    }
                }
            }
            else {
                if(                result_type_333->mPointerNum>0) {
                    result_type_333->mPointerNum-=list$1CVALUEph_length(array_num_305);
                    if(                    result_type_333->mPointerNum<0) {
                        result_type_333->mPointerNum=0;
                    }
                }
            }
            __dec_obj248=come_value_328->type;
            come_value_328->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_333));
            come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_328->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_328));
            add_come_last_code(info,"%s",come_value_328->c_value);
            /*i*/come_call_finalizer3(come_value_328,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_329,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */left_value_code_332 = come_decrement_ref_count2(left_value_code_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_333,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result180__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_303,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type_304,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(array_num_305,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result180__;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct list$1sNodeph* __dec_obj249;
void* __right_value401 = (void*)0;
struct sNode* __dec_obj250;
struct sLoadRangeArrayNode* __result181__;
    ((struct sNodeBase*)(__right_value399=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value399,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj249=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(array_num));
    come_call_finalizer3(__dec_obj249,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj250=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result181__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result181__;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value402 = (void*)0;
char* __result182__;
    __result182__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value402=__builtin_string("sLoadRangeArrayNode")));
    /* U11 */__right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result182__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
struct sNode* left_336;
struct list$1sNodeph* array_num_nodes_337;
_Bool Value_338;
void* __right_value403 = (void*)0;
struct CVALUE* left_value_339;
void* __right_value404 = (void*)0;
struct sType* left_type_340;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct list$1CVALUEph* array_num_341;
struct list$1sNodeph* o2_saved_342;
struct sNode* it_343;
_Bool Value_344;
_Bool __result183__;
void* __right_value407 = (void*)0;
struct CVALUE* c_value_345;
void* __right_value408 = (void*)0;
struct sType* type_346;
char* fun_name_347;
_Bool calling_fun_348;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct CVALUE* come_value_349;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct buffer* buf_350;
struct list$1CVALUEph* o2_saved_351;
struct CVALUE* it_352;
void* __right_value413 = (void*)0;
char* left_value_code_353;
void* __right_value414 = (void*)0;
char* __dec_obj254;
void* __right_value415 = (void*)0;
struct sType* result_type_354;
struct sType* __dec_obj255;
int n_355;
void* __right_value416 = (void*)0;
struct sType* __dec_obj256;
void* __right_value417 = (void*)0;
struct sType* __dec_obj257;
int i_356;
void* __right_value418 = (void*)0;
struct sType* __dec_obj258;
_Bool __result184__;
memset(&calling_fun_348, 0, sizeof(_Bool));
    left_336=self->mLeft;
    array_num_nodes_337=self->mArrayNum;
    Value_338=node_compile(left_336,info);
    if(    !Value_338) {
        return (_Bool)0;
    }
    else {
    }
    left_value_339=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_340=(struct sType*)come_increment_ref_count(sType_clone(left_value_339->type));
    array_num_341=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1285, "list$1CVALUEph"))));
    for(    o2_saved_342=(array_num_nodes_337),it_343=list$1sNodeph_begin((o2_saved_342));    !list$1sNodeph_end((o2_saved_342));    it_343=list$1sNodeph_next((o2_saved_342))    ){
        Value_344=node_compile(it_343,info);
        if(        !Value_344) {
            __result183__ = (_Bool)0;
            /*i*/come_call_finalizer3(left_value_339,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type_340,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(array_num_341,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result183__;
        }
        else {
        }
        c_value_345=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_341,(struct CVALUE*)come_increment_ref_count(c_value_345));
        /*i*/come_call_finalizer3(c_value_345,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_346=(struct sType*)come_increment_ref_count(sType_clone(left_value_339->type));
    fun_name_347="operator_load_range_element";
    if(    self->mQuote) {
        calling_fun_348=(_Bool)0;
    }
    else {
        calling_fun_348=operator_overload_fun2(type_346,fun_name_347,left_value_339,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_341,0), "18field.c", 1306, 13)),((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_341,1), "18field.c", 1306, 14)),info);
    }
    if(    !calling_fun_348) {
        come_value_349=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1310, "CVALUE"))));
        buf_350=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1312, "buffer"))));
        buffer_append_str(buf_350,left_value_339->c_value);
        for(        o2_saved_351=(struct list$1CVALUEph*)come_increment_ref_count((array_num_341)),it_352=list$1CVALUEph_begin((o2_saved_351));        !list$1CVALUEph_end((o2_saved_351));        it_352=list$1CVALUEph_next((o2_saved_351))        ){
            buffer_append_format(buf_350,"[%s]",it_352->c_value);
        }
        /*i*/come_call_finalizer3(o2_saved_351,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_353=(char*)come_increment_ref_count(buffer_to_string(buf_350));
        __dec_obj254=come_value_349->c_value;
        come_value_349->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_353));
        /*G*/ __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_354=(struct sType*)come_increment_ref_count(sType_clone(left_type_340));
        if(        result_type_354->mOriginalLoadVarType->v1) {
            __dec_obj255=result_type_354;
            result_type_354=(struct sType*)come_increment_ref_count(result_type_354->mOriginalLoadVarType->v1);
            come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        list$1sNodeph_length(result_type_354->mArrayNum)>0) {
            n_355=list$1sNodeph_length(result_type_354->mArrayNum)-list$1CVALUEph_length(array_num_341);
            if(            n_355==0) {
                __dec_obj256=result_type_354;
                result_type_354=(struct sType*)come_increment_ref_count(sType_clone(left_type_340));
                come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(                left_type_340->mOriginalLoadVarType->v1) {
                    __dec_obj257=result_type_354;
                    result_type_354=(struct sType*)come_increment_ref_count(sType_clone(left_type_340->mOriginalLoadVarType->v1));
                    come_call_finalizer3(__dec_obj257,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                list$1sNodeph_reset(result_type_354->mArrayNum);
            }
            else if(            n_355>0) {
                for(                i_356=0;                i_356<n_355;                i_356++                ){
                    list$1sNodeph_delete(result_type_354->mArrayNum,-1,-1);
                }
            }
            else if(            n_355<0) {
                list$1sNodeph_reset(result_type_354->mArrayNum);
                result_type_354->mPointerNum+=n_355;
                if(                result_type_354->mPointerNum<0) {
                    result_type_354->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_354->mPointerNum>0) {
                result_type_354->mPointerNum-=list$1CVALUEph_length(array_num_341);
                if(                result_type_354->mPointerNum<0) {
                    result_type_354->mPointerNum=0;
                }
            }
        }
        __dec_obj258=come_value_349->type;
        come_value_349->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_354));
        come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_349->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_349));
        add_come_last_code(info,"%s",come_value_349->c_value);
        /*i*/come_call_finalizer3(come_value_349,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_350,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */left_value_code_353 = come_decrement_ref_count2(left_value_code_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_354,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result184__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_339,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type_340,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(array_num_341,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result184__;
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result185__;
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result185__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result185__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sNode* _inf_value3;
struct sStoreFieldNode* _inf_obj_value3;
void* __right_value426 = (void*)0;
struct sNode* __result188__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1386, "struct sNode");
    _inf_obj_value3=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value420=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1386, "sStoreFieldNode")),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value3->clone=(void*)sStoreFieldNode_clone;
    _inf_value3->compile=(void*)sStoreFieldNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sStoreFieldNode_kind;
    __result188__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value426=_inf_value3));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value420,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value426) { __right_value426 = come_decrement_ref_count2(__right_value426, ((struct sNode*)__right_value426)->finalize, ((struct sNode*)__right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result188__;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool range_array_358;
char* p_359;
int sline_360;
_Bool no_comma_361;
_Bool no_output_err_362;
_Bool no_output_come_code_363;
void* __right_value427 = (void*)0;
struct sNode* exp_364;
_Bool quote_365;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct list$1sNodeph* array_num_366;
void* __right_value430 = (void*)0;
struct sNode* node2_367;
void* __right_value434 = (void*)0;
struct sNode* node3_371;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct sNode* _inf_value4;
struct sLoadRangeArrayNode* _inf_obj_value4;
void* __right_value441 = (void*)0;
struct sNode* __dec_obj276;
_Bool quote_373;
_Bool range_374;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1sNodeph* array_num_375;
_Bool range_array2_376;
char* p_377;
int sline_378;
_Bool no_comma_379;
_Bool no_output_err_380;
_Bool no_output_come_code_381;
void* __right_value444 = (void*)0;
struct sNode* exp_382;
void* __right_value445 = (void*)0;
struct sNode* node2_383;
_Bool break_guard_384;
void* __right_value446 = (void*)0;
struct sNode* right_node_385;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct sNode* _inf_value5;
struct sStoreArrayNode* _inf_obj_value5;
void* __right_value454 = (void*)0;
struct sNode* __dec_obj285;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sNode* _inf_value6;
struct sLoadArrayNode* _inf_obj_value6;
void* __right_value461 = (void*)0;
struct sNode* __dec_obj292;
_Bool no_comma_388;
void* __right_value462 = (void*)0;
struct sNode* begin_389;
void* __right_value463 = (void*)0;
struct sNode* end_390;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sNode* _inf_value7;
struct sRangeCheckNode* _inf_obj_value7;
void* __right_value471 = (void*)0;
struct sNode* __dec_obj301;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sNode* _inf_value8;
struct sNullCheckNode* _inf_obj_value8;
void* __right_value477 = (void*)0;
struct sNode* __dec_obj306;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sNode* _inf_value9;
struct sNullableNode* _inf_obj_value9;
void* __right_value483 = (void*)0;
struct sNode* __dec_obj311;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sNode* __dec_obj312;
void* __right_value486 = (void*)0;
char* field_name_394;
_Bool parse_method_generics_type_395;
char* p_396;
int sline_397;
void* __right_value487 = (void*)0;
char* word_398;
void* __right_value488 = (void*)0;
struct sNode* right_node_399;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct sNode* _inf_value10;
struct sStoreFieldNode* _inf_obj_value10;
void* __right_value496 = (void*)0;
struct sNode* __dec_obj321;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sNode* __dec_obj322;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sNode* __dec_obj323;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sNode* __dec_obj324;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sNode* __dec_obj325;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sNode* __dec_obj326;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sNode* __dec_obj327;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sNode* __dec_obj328;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sNode* _inf_value11;
struct sNullCheckNode* _inf_obj_value11;
void* __right_value517 = (void*)0;
struct sNode* __dec_obj333;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sNode* __dec_obj334;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sNode* _inf_value12;
struct sNullCheckNode* _inf_obj_value12;
void* __right_value526 = (void*)0;
struct sNode* __dec_obj339;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sNode* _inf_value13;
struct sLoadFieldNode* _inf_obj_value13;
void* __right_value533 = (void*)0;
struct sNode* __dec_obj346;
void* __right_value534 = (void*)0;
struct sNode* node2_404;
struct sNode* __dec_obj347;
struct sNode* __result210__;
    while((_Bool)1) {
        range_array_358=(_Bool)0;
        {
            p_359=info->p;
            sline_360=info->sline;
            if(            *info->p==91) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_361=info->no_comma;
                no_output_err_362=info->no_output_err;
                no_output_come_code_363=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_364=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_361;
                info->no_output_err=no_output_err_362;
                info->no_output_come_code=no_output_come_code_363;
                if(                *info->p==46&&*(info->p+1)==46) {
                    range_array_358=(_Bool)1;
                }
                if(exp_364) { exp_364 = come_decrement_ref_count2(exp_364, ((struct sNode*)exp_364)->finalize, ((struct sNode*)exp_364)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            info->p=p_359;
            info->sline=sline_360;
        }
        if(        range_array_358&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_365=*info->p==92;
            if(            quote_365) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_366=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1430, "list$1sNodeph"))));
            skip_pointer_attribute(info);
            node2_367=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNodeph_push_back(array_num_366,(struct sNode*)come_increment_ref_count(node2_367));
            if(            *info->p==46&&*(info->p+1)==46) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_371=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_push_back(array_num_366,(struct sNode*)come_increment_ref_count(node3_371));
                expected_next_character(93,info);
                if(node3_371) { node3_371 = come_decrement_ref_count2(node3_371, ((struct sNode*)node3_371)->finalize, ((struct sNode*)node3_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1451, "struct sNode");
            _inf_obj_value4=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value436=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1451, "sLoadRangeArrayNode")),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_366),quote_365,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value4->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value4->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj276=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value4);
            /* U1 */ if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value436,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            /*i*/come_call_finalizer3(array_num_366,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(node2_367) { node2_367 = come_decrement_ref_count2(node2_367, ((struct sNode*)node2_367)->finalize, ((struct sNode*)node2_367)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !range_array_358&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_373=*info->p==92;
            if(            quote_373) {
                info->p++;
            }
            range_374=(_Bool)0;
            array_num_375=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1460, "list$1sNodeph"))));
            while(1) {
                range_array2_376=(_Bool)0;
                {
                    p_377=info->p;
                    sline_378=info->sline;
                    if(                    *info->p==91) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        no_comma_379=info->no_comma;
                        no_output_err_380=info->no_output_err;
                        no_output_come_code_381=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_382=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_379;
                        info->no_output_err=no_output_err_380;
                        info->no_output_come_code=no_output_come_code_381;
                        if(                        *info->p==46&&*(info->p+1)==46) {
                            range_array2_376=(_Bool)1;
                        }
                        if(exp_382) { exp_382 = come_decrement_ref_count2(exp_382, ((struct sNode*)exp_382)->finalize, ((struct sNode*)exp_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    info->p=p_377;
                    info->sline=sline_378;
                }
                if(                range_array2_376) {
                    break;
                }
                else if(                *info->p==91) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    node2_383=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_push_back(array_num_375,(struct sNode*)come_increment_ref_count(node2_383));
                    if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        err_msg(info,"require ] character");
                        exit(2);
                    }
                    if(node2_383) { node2_383 = come_decrement_ref_count2(node2_383, ((struct sNode*)node2_383)->finalize, ((struct sNode*)node2_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    break;
                }
            }
            break_guard_384=(_Bool)0;
            if(            *info->p==63&&*(info->p+1)==63) {
                info->p+=2;
                skip_spaces_and_lf(info);
                break_guard_384=(_Bool)1;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_385=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1535, "struct sNode");
                _inf_obj_value5=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(__right_value448=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1535, "sStoreArrayNode")),node,(struct sNode*)come_increment_ref_count(right_node_385),(struct list$1sNodeph*)come_increment_ref_count(array_num_375),quote_373,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value5->clone=(void*)sStoreArrayNode_clone;
                _inf_value5->compile=(void*)sStoreArrayNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sStoreArrayNode_kind;
                __dec_obj285=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value5);
                /* U1 */ if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count2(__dec_obj285, ((struct sNode*)__dec_obj285)->finalize, ((struct sNode*)__dec_obj285)->_protocol_obj, 0,0,0, (void*)0); };
                /*g*/come_call_finalizer3(__right_value448,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_node_385) { right_node_385 = come_decrement_ref_count2(right_node_385, ((struct sNode*)right_node_385)->finalize, ((struct sNode*)right_node_385)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1538, "struct sNode");
                _inf_obj_value6=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(__right_value456=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1538, "sLoadArrayNode")),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_375),quote_373,break_guard_384,info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value6->clone=(void*)sLoadArrayNode_clone;
                _inf_value6->compile=(void*)sLoadArrayNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sLoadArrayNode_kind;
                __dec_obj292=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value6);
                /* U1 */ if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); };
                /*g*/come_call_finalizer3(__right_value456,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            /*i*/come_call_finalizer3(array_num_375,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)==123) {
            info->p+=2;
            skip_spaces_and_lf(info);
            no_comma_388=info->no_comma;
            info->no_comma=(_Bool)1;
            begin_389=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_388;
            expected_next_character(44,info);
            end_390=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(125,info);
            parse_sharp_v5(info);
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1558, "struct sNode");
            _inf_obj_value7=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(__right_value465=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count((struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1558, "sRangeCheckNode")),node,begin_389,end_390,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sRangeCheckNode_finalize;
            _inf_value7->clone=(void*)sRangeCheckNode_clone;
            _inf_value7->compile=(void*)sRangeCheckNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sRangeCheckNode_kind;
            __dec_obj301=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value7);
            /* U1 */ if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value465,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(begin_389) { begin_389 = come_decrement_ref_count2(begin_389, ((struct sNode*)begin_389)->finalize, ((struct sNode*)begin_389)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(end_390) { end_390 = come_decrement_ref_count2(end_390, ((struct sNode*)end_390)->finalize, ((struct sNode*)end_390)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==33&&*(info->p+1)!=61&&*(info->p+1)!=33) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1566, "struct sNode");
            _inf_obj_value8=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(__right_value473=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1566, "sNullCheckNode")),node,(_Bool)0,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sNullCheckNode_finalize;
            _inf_value8->clone=(void*)sNullCheckNode_clone;
            _inf_value8->compile=(void*)sNullCheckNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sNullCheckNode_kind;
            __dec_obj306=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value8);
            /* U1 */ if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value473,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        *info->p==63&&*(info->p+1)==63) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1574, "struct sNode");
            _inf_obj_value9=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value479=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1574, "sNullableNode")),node,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sNullableNode_finalize;
            _inf_value9->clone=(void*)sNullableNode_clone;
            _inf_value9->compile=(void*)sNullableNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sNullableNode_kind;
            __dec_obj311=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value9);
            /* U1 */ if(__dec_obj311) { __dec_obj311 = come_decrement_ref_count2(__dec_obj311, ((struct sNode*)__dec_obj311)->finalize, ((struct sNode*)__dec_obj311)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value479,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        *info->p==33&&*(info->p+1)==33) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            __dec_obj312=node;
            node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
            /* U1 */ if(__dec_obj312) { __dec_obj312 = come_decrement_ref_count2(__dec_obj312, ((struct sNode*)__dec_obj312)->finalize, ((struct sNode*)__dec_obj312)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else if(        (*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62)) {
            if(            *info->p==46) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            field_name_394=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            parse_method_generics_type_395=(_Bool)0;
            {
                p_396=info->p;
                sline_397=info->sline;
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_398=(char*)come_increment_ref_count(parse_word(info));
                        if(                        is_type_name(word_398,info)) {
                            parse_method_generics_type_395=(_Bool)1;
                        }
                        /* U13 */word_398 = come_decrement_ref_count2(word_398, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                info->p=p_396;
                info->sline=sline_397;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_399=(struct sNode*)come_increment_ref_count(expression_v13(info));
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1630, "struct sNode");
                _inf_obj_value10=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value490=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1630, "sStoreFieldNode")),node,(struct sNode*)come_increment_ref_count(right_node_399),(char*)come_increment_ref_count(field_name_394),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sStoreFieldNode_finalize;
                _inf_value10->clone=(void*)sStoreFieldNode_clone;
                _inf_value10->compile=(void*)sStoreFieldNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sStoreFieldNode_kind;
                __dec_obj321=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value10);
                /* U1 */ if(__dec_obj321) { __dec_obj321 = come_decrement_ref_count2(__dec_obj321, ((struct sNode*)__dec_obj321)->finalize, ((struct sNode*)__dec_obj321)->_protocol_obj, 0,0,0, (void*)0); };
                /*g*/come_call_finalizer3(__right_value490,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_node_399) { right_node_399 = come_decrement_ref_count2(right_node_399, ((struct sNode*)right_node_399)->finalize, ((struct sNode*)right_node_399)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            !gComeC&&(*info->p==40||*info->p==123||string_operator_equals(field_name_394,"exception_throw")||string_operator_equals(field_name_394,"exception_value")||parse_method_generics_type_395||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40))) {
                if(                string_operator_equals(field_name_394,"if")) {
                    __dec_obj322=node;
                    node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    /* U1 */ if(__dec_obj322) { __dec_obj322 = come_decrement_ref_count2(__dec_obj322, ((struct sNode*)__dec_obj322)->finalize, ((struct sNode*)__dec_obj322)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_394,"elif")) {
                    __dec_obj323=node;
                    node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    /* U1 */ if(__dec_obj323) { __dec_obj323 = come_decrement_ref_count2(__dec_obj323, ((struct sNode*)__dec_obj323)->finalize, ((struct sNode*)__dec_obj323)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_394,"case")) {
                    __dec_obj324=node;
                    node=(struct sNode*)come_increment_ref_count(parse_match((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    /* U1 */ if(__dec_obj324) { __dec_obj324 = come_decrement_ref_count2(__dec_obj324, ((struct sNode*)__dec_obj324)->finalize, ((struct sNode*)__dec_obj324)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_394,"less")) {
                    __dec_obj325=node;
                    node=(struct sNode*)come_increment_ref_count(parse_less_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    /* U1 */ if(__dec_obj325) { __dec_obj325 = come_decrement_ref_count2(__dec_obj325, ((struct sNode*)__dec_obj325)->finalize, ((struct sNode*)__dec_obj325)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_394,"rescue")) {
                    __dec_obj326=node;
                    node=(struct sNode*)come_increment_ref_count(parse_rescue_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    /* U1 */ if(__dec_obj326) { __dec_obj326 = come_decrement_ref_count2(__dec_obj326, ((struct sNode*)__dec_obj326)->finalize, ((struct sNode*)__dec_obj326)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_394,"exception_throw")) {
                    __dec_obj327=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    /* U1 */ if(__dec_obj327) { __dec_obj327 = come_decrement_ref_count2(__dec_obj327, ((struct sNode*)__dec_obj327)->finalize, ((struct sNode*)__dec_obj327)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_394,"exception_value")) {
                    __dec_obj328=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    /* U1 */ if(__dec_obj328) { __dec_obj328 = come_decrement_ref_count2(__dec_obj328, ((struct sNode*)__dec_obj328)->finalize, ((struct sNode*)__dec_obj328)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else {
                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1656, "struct sNode");
                    _inf_obj_value11=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(__right_value513=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1656, "sNullCheckNode")),((struct sNode*)(__right_value512=sNode_clone(node))),(_Bool)1,info))));
                    _inf_value11->_protocol_obj=_inf_obj_value11;
                    _inf_value11->finalize=(void*)sNullCheckNode_finalize;
                    _inf_value11->clone=(void*)sNullCheckNode_clone;
                    _inf_value11->compile=(void*)sNullCheckNode_compile;
                    _inf_value11->sline=(void*)sNodeBase_sline;
                    _inf_value11->sname=(void*)sNodeBase_sname;
                    _inf_value11->terminated=(void*)sNodeBase_terminated;
                    _inf_value11->kind=(void*)sNullCheckNode_kind;
                    __dec_obj333=node;
                    node=(struct sNode*)come_increment_ref_count(_inf_value11);
                    /* U1 */ if(__dec_obj333) { __dec_obj333 = come_decrement_ref_count2(__dec_obj333, ((struct sNode*)__dec_obj333)->finalize, ((struct sNode*)__dec_obj333)->_protocol_obj, 0,0,0, (void*)0); };
                    if(__right_value512) { __right_value512 = come_decrement_ref_count2(__right_value512, ((struct sNode*)__right_value512)->finalize, ((struct sNode*)__right_value512)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    /*g*/come_call_finalizer3(__right_value513,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                    __dec_obj334=node;
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(node)),(char*)come_increment_ref_count(field_name_394),info));
                    /* U1 */ if(__dec_obj334) { __dec_obj334 = come_decrement_ref_count2(__dec_obj334, ((struct sNode*)__dec_obj334)->finalize, ((struct sNode*)__dec_obj334)->_protocol_obj, 0,0,0, (void*)0); };
                }
            }
            else {
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1661, "struct sNode");
                _inf_obj_value12=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(__right_value522=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1661, "sNullCheckNode")),((struct sNode*)(__right_value521=sNode_clone(node))),(_Bool)1,info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sNullCheckNode_finalize;
                _inf_value12->clone=(void*)sNullCheckNode_clone;
                _inf_value12->compile=(void*)sNullCheckNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sNodeBase_terminated;
                _inf_value12->kind=(void*)sNullCheckNode_kind;
                __dec_obj339=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value12);
                /* U1 */ if(__dec_obj339) { __dec_obj339 = come_decrement_ref_count2(__dec_obj339, ((struct sNode*)__dec_obj339)->finalize, ((struct sNode*)__dec_obj339)->_protocol_obj, 0,0,0, (void*)0); };
                if(__right_value521) { __right_value521 = come_decrement_ref_count2(__right_value521, ((struct sNode*)__right_value521)->finalize, ((struct sNode*)__right_value521)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                /*g*/come_call_finalizer3(__right_value522,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1662, "struct sNode");
                _inf_obj_value13=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value528=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1662, "sLoadFieldNode")),node,(char*)come_increment_ref_count(field_name_394),info))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sLoadFieldNode_finalize;
                _inf_value13->clone=(void*)sLoadFieldNode_clone;
                _inf_value13->compile=(void*)sLoadFieldNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sLoadFieldNode_kind;
                __dec_obj346=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value13);
                /* U1 */ if(__dec_obj346) { __dec_obj346 = come_decrement_ref_count2(__dec_obj346, ((struct sNode*)__dec_obj346)->finalize, ((struct sNode*)__dec_obj346)->_protocol_obj, 0,0,0, (void*)0); };
                /*g*/come_call_finalizer3(__right_value528,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            /* U13 */field_name_394 = come_decrement_ref_count2(field_name_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            node2_404=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info));
            if(            node2_404==((void*)0)) {
                if(node2_404) { node2_404 = come_decrement_ref_count2(node2_404, ((struct sNode*)node2_404)->finalize, ((struct sNode*)node2_404)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            __dec_obj347=node;
            node=(struct sNode*)come_increment_ref_count(node2_404);
            /* U1 */ if(__dec_obj347) { __dec_obj347 = come_decrement_ref_count2(__dec_obj347, ((struct sNode*)__dec_obj347)->finalize, ((struct sNode*)__dec_obj347)->_protocol_obj, 0,0,0, (void*)0); };
            if(node2_404) { node2_404 = come_decrement_ref_count2(node2_404, ((struct sNode*)node2_404)->finalize, ((struct sNode*)node2_404)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    __result210__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value431 = (void*)0;
struct list_item$1sNodeph* litem_368;
struct sNode* __dec_obj267;
void* __right_value432 = (void*)0;
struct list_item$1sNodeph* litem_369;
struct sNode* __dec_obj268;
void* __right_value433 = (void*)0;
struct list_item$1sNodeph* litem_370;
struct sNode* __dec_obj269;
struct list$1sNodeph* __result189__;
    if(    self->len==0) {
        litem_368=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value431=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 230, "list_item$1sNodeph"))));
        litem_368->prev=((void*)0);
        litem_368->next=((void*)0);
        __dec_obj267=litem_368->item;
        litem_368->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count2(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_368;
        self->head=litem_368;
    }
    else if(    self->len==1) {
        litem_369=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value432=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 240, "list_item$1sNodeph"))));
        litem_369->prev=self->head;
        litem_369->next=((void*)0);
        __dec_obj268=litem_369->item;
        litem_369->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_369;
        self->head->next=litem_369;
    }
    else {
        litem_370=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value433=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 250, "list_item$1sNodeph"))));
        litem_370->prev=self->tail;
        litem_370->next=((void*)0);
        __dec_obj269=litem_370->item;
        litem_370->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_370;
        self->tail=litem_370;
    }
    self->len++;
    __result189__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result189__;
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
char* __dec_obj270;
struct list$1sNodeph* __dec_obj271;
struct sNode* __dec_obj272;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj270=self->sname;
            /*G*/ __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj271=self->mArrayNum;
            come_call_finalizer3(__dec_obj271,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj272=self->mLeft;
            /* U1 */ if(__dec_obj272) { __dec_obj272 = come_decrement_ref_count2(__dec_obj272, ((struct sNode*)__dec_obj272)->finalize, ((struct sNode*)__dec_obj272)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__=(void*)0;
struct sLoadRangeArrayNode* __result190__;
void* __right_value437 = (void*)0;
struct sLoadRangeArrayNode* result_372;
void* __right_value438 = (void*)0;
char* __dec_obj273;
void* __right_value439 = (void*)0;
struct list$1sNodeph* __dec_obj274;
void* __right_value440 = (void*)0;
struct sNode* __dec_obj275;
struct sLoadRangeArrayNode* __result191__;
    if(    self==(void*)0) {
        __result190__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result190__;
    }
    result_372=(struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "sLoadRangeArrayNode"));
    if(    self!=((void*)0)) {
        result_372->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj273=result_372->sname;
        result_372->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj274=result_372->mArrayNum;
        result_372->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj274,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj275=result_372->mLeft;
        result_372->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_372->mQuote=self->mQuote;
    }
    __result191__ = gComeFunResultObject = __result_obj__ = result_372;
    /*i*/come_call_finalizer3(result_372,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result191__;
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
char* __dec_obj277;
struct sNode* __dec_obj278;
struct sNode* __dec_obj279;
struct list$1sNodeph* __dec_obj280;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj277=self->sname;
            /*G*/ __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj278=self->mLeft;
            /* U1 */ if(__dec_obj278) { __dec_obj278 = come_decrement_ref_count2(__dec_obj278, ((struct sNode*)__dec_obj278)->finalize, ((struct sNode*)__dec_obj278)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj279=self->mRight;
            /* U1 */ if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count2(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj280=self->mArrayNum;
            come_call_finalizer3(__dec_obj280,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__=(void*)0;
struct sStoreArrayNode* __result192__;
void* __right_value449 = (void*)0;
struct sStoreArrayNode* result_386;
void* __right_value450 = (void*)0;
char* __dec_obj281;
void* __right_value451 = (void*)0;
struct sNode* __dec_obj282;
void* __right_value452 = (void*)0;
struct sNode* __dec_obj283;
void* __right_value453 = (void*)0;
struct list$1sNodeph* __dec_obj284;
struct sStoreArrayNode* __result193__;
    if(    self==(void*)0) {
        __result192__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result192__;
    }
    result_386=(struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "sStoreArrayNode"));
    if(    self!=((void*)0)) {
        result_386->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj281=result_386->sname;
        result_386->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj282=result_386->mLeft;
        result_386->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj283=result_386->mRight;
        result_386->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj284=result_386->mArrayNum;
        result_386->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj284,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_386->mQuote=self->mQuote;
    }
    __result193__ = gComeFunResultObject = __result_obj__ = result_386;
    /*i*/come_call_finalizer3(result_386,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result193__;
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
char* __dec_obj286;
struct list$1sNodeph* __dec_obj287;
struct sNode* __dec_obj288;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj286=self->sname;
            /*G*/ __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj287=self->mArrayNum;
            come_call_finalizer3(__dec_obj287,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj288=self->mLeft;
            /* U1 */ if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count2(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__=(void*)0;
struct sLoadArrayNode* __result194__;
void* __right_value457 = (void*)0;
struct sLoadArrayNode* result_387;
void* __right_value458 = (void*)0;
char* __dec_obj289;
void* __right_value459 = (void*)0;
struct list$1sNodeph* __dec_obj290;
void* __right_value460 = (void*)0;
struct sNode* __dec_obj291;
struct sLoadArrayNode* __result195__;
    if(    self==(void*)0) {
        __result194__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result194__;
    }
    result_387=(struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "sLoadArrayNode"));
    if(    self!=((void*)0)) {
        result_387->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj289=result_387->sname;
        result_387->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj290=result_387->mArrayNum;
        result_387->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj290,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_387->mBreakGuard=self->mBreakGuard;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj291=result_387->mLeft;
        result_387->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_387->mQuote=self->mQuote;
    }
    __result195__ = gComeFunResultObject = __result_obj__ = result_387;
    /*i*/come_call_finalizer3(result_387,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result195__;
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
char* __dec_obj293;
struct sNode* __dec_obj294;
struct sNode* __dec_obj295;
struct sNode* __dec_obj296;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj293=self->sname;
            /*G*/ __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj294=self->mLeft;
            /* U1 */ if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mBegin!=((void*)0)) {
        if(        self->mBegin==gComeFunResultObject) {
            __dec_obj295=self->mBegin;
            /* U1 */ if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mBegin) { self->mBegin = come_decrement_ref_count2(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mEnd!=((void*)0)) {
        if(        self->mEnd==gComeFunResultObject) {
            __dec_obj296=self->mEnd;
            /* U1 */ if(__dec_obj296) { __dec_obj296 = come_decrement_ref_count2(__dec_obj296, ((struct sNode*)__dec_obj296)->finalize, ((struct sNode*)__dec_obj296)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mEnd) { self->mEnd = come_decrement_ref_count2(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
void* __result_obj__=(void*)0;
struct sRangeCheckNode* __result196__;
void* __right_value466 = (void*)0;
struct sRangeCheckNode* result_391;
void* __right_value467 = (void*)0;
char* __dec_obj297;
void* __right_value468 = (void*)0;
struct sNode* __dec_obj298;
void* __right_value469 = (void*)0;
struct sNode* __dec_obj299;
void* __right_value470 = (void*)0;
struct sNode* __dec_obj300;
struct sRangeCheckNode* __result197__;
    if(    self==(void*)0) {
        __result196__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result196__;
    }
    result_391=(struct sRangeCheckNode*)come_increment_ref_count((struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "sRangeCheckNode"));
    if(    self!=((void*)0)) {
        result_391->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj297=result_391->sname;
        result_391->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj298=result_391->mLeft;
        result_391->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mBegin!=((void*)0)) {
        __dec_obj299=result_391->mBegin;
        result_391->mBegin=(struct sNode*)come_increment_ref_count(sNode_clone(self->mBegin));
        /* U1 */ if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mEnd!=((void*)0)) {
        __dec_obj300=result_391->mEnd;
        result_391->mEnd=(struct sNode*)come_increment_ref_count(sNode_clone(self->mEnd));
        /* U1 */ if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count2(__dec_obj300, ((struct sNode*)__dec_obj300)->finalize, ((struct sNode*)__dec_obj300)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result197__ = gComeFunResultObject = __result_obj__ = result_391;
    /*i*/come_call_finalizer3(result_391,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result197__;
}

static void sNullableNode_finalize(struct sNullableNode* self){
char* __dec_obj307;
struct sNode* __dec_obj308;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj307=self->sname;
            /*G*/ __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj308=self->mLeft;
            /* U1 */ if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
void* __result_obj__=(void*)0;
struct sNullableNode* __result200__;
void* __right_value480 = (void*)0;
struct sNullableNode* result_393;
void* __right_value481 = (void*)0;
char* __dec_obj309;
void* __right_value482 = (void*)0;
struct sNode* __dec_obj310;
struct sNullableNode* __result201__;
    if(    self==(void*)0) {
        __result200__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result200__;
    }
    result_393=(struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "sNullableNode"));
    if(    self!=((void*)0)) {
        result_393->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj309=result_393->sname;
        result_393->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj310=result_393->mLeft;
        result_393->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj310) { __dec_obj310 = come_decrement_ref_count2(__dec_obj310, ((struct sNode*)__dec_obj310)->finalize, ((struct sNode*)__dec_obj310)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result201__ = gComeFunResultObject = __result_obj__ = result_393;
    /*i*/come_call_finalizer3(result_393,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result201__;
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
char* __dec_obj313;
struct sNode* __dec_obj314;
struct sNode* __dec_obj315;
char* __dec_obj316;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj313=self->sname;
            /*G*/ __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj314=self->mLeft;
            /* U1 */ if(__dec_obj314) { __dec_obj314 = come_decrement_ref_count2(__dec_obj314, ((struct sNode*)__dec_obj314)->finalize, ((struct sNode*)__dec_obj314)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj315=self->mRight;
            /* U1 */ if(__dec_obj315) { __dec_obj315 = come_decrement_ref_count2(__dec_obj315, ((struct sNode*)__dec_obj315)->finalize, ((struct sNode*)__dec_obj315)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj316=self->mName;
            /*G*/ __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__=(void*)0;
struct sStoreFieldNode* __result202__;
void* __right_value491 = (void*)0;
struct sStoreFieldNode* result_400;
void* __right_value492 = (void*)0;
char* __dec_obj317;
void* __right_value493 = (void*)0;
struct sNode* __dec_obj318;
void* __right_value494 = (void*)0;
struct sNode* __dec_obj319;
void* __right_value495 = (void*)0;
char* __dec_obj320;
struct sStoreFieldNode* __result203__;
    if(    self==(void*)0) {
        __result202__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result202__;
    }
    result_400=(struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "sStoreFieldNode"));
    if(    self!=((void*)0)) {
        result_400->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj317=result_400->sname;
        result_400->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj318=result_400->mLeft;
        result_400->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj318) { __dec_obj318 = come_decrement_ref_count2(__dec_obj318, ((struct sNode*)__dec_obj318)->finalize, ((struct sNode*)__dec_obj318)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj319=result_400->mRight;
        result_400->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj319) { __dec_obj319 = come_decrement_ref_count2(__dec_obj319, ((struct sNode*)__dec_obj319)->finalize, ((struct sNode*)__dec_obj319)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj320=result_400->mName;
        result_400->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result203__ = gComeFunResultObject = __result_obj__ = result_400;
    /*i*/come_call_finalizer3(result_400,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
char* __dec_obj335;
struct sNode* __dec_obj336;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj335=self->sname;
            /*G*/ __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj336=self->mLeft;
            /* U1 */ if(__dec_obj336) { __dec_obj336 = come_decrement_ref_count2(__dec_obj336, ((struct sNode*)__dec_obj336)->finalize, ((struct sNode*)__dec_obj336)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__=(void*)0;
struct sNullCheckNode* __result206__;
void* __right_value523 = (void*)0;
struct sNullCheckNode* result_402;
void* __right_value524 = (void*)0;
char* __dec_obj337;
void* __right_value525 = (void*)0;
struct sNode* __dec_obj338;
struct sNullCheckNode* __result207__;
    if(    self==(void*)0) {
        __result206__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    result_402=(struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "sNullCheckNode"));
    if(    self!=((void*)0)) {
        result_402->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj337=result_402->sname;
        result_402->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj338=result_402->mLeft;
        result_402->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj338) { __dec_obj338 = come_decrement_ref_count2(__dec_obj338, ((struct sNode*)__dec_obj338)->finalize, ((struct sNode*)__dec_obj338)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_402->mOnlyNullCecker=self->mOnlyNullCecker;
    }
    __result207__ = gComeFunResultObject = __result_obj__ = result_402;
    /*i*/come_call_finalizer3(result_402,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
char* __dec_obj340;
struct sNode* __dec_obj341;
char* __dec_obj342;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj340=self->sname;
            /*G*/ __dec_obj340 = come_decrement_ref_count2(__dec_obj340, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj341=self->mLeft;
            /* U1 */ if(__dec_obj341) { __dec_obj341 = come_decrement_ref_count2(__dec_obj341, ((struct sNode*)__dec_obj341)->finalize, ((struct sNode*)__dec_obj341)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj342=self->mName;
            /*G*/ __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__=(void*)0;
struct sLoadFieldNode* __result208__;
void* __right_value529 = (void*)0;
struct sLoadFieldNode* result_403;
void* __right_value530 = (void*)0;
char* __dec_obj343;
void* __right_value531 = (void*)0;
struct sNode* __dec_obj344;
void* __right_value532 = (void*)0;
char* __dec_obj345;
struct sLoadFieldNode* __result209__;
    if(    self==(void*)0) {
        __result208__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    result_403=(struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "sLoadFieldNode"));
    if(    self!=((void*)0)) {
        result_403->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj343=result_403->sname;
        result_403->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj344=result_403->mLeft;
        result_403->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj344) { __dec_obj344 = come_decrement_ref_count2(__dec_obj344, ((struct sNode*)__dec_obj344)->finalize, ((struct sNode*)__dec_obj344)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj345=result_403->mName;
        result_403->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result209__ = gComeFunResultObject = __result_obj__ = result_403;
    /*i*/come_call_finalizer3(result_403,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

