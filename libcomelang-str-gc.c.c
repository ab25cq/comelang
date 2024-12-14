/// previous struct definition ///
struct __sFILEX;

struct real_pcre8_or_16;

struct real_pcre32;

struct real_pcre_jit_stack;

struct real_pcre16_jit_stack;

struct real_pcre32_jit_stack;

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

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

extern void* wildcard;
struct buffer
{
    char* buf;
    int len;
    int size;
};

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

extern struct sMemHeader* gAllocMem;

extern void* gComeResultObject;

extern void* gComeFunResultObject;

extern _Bool gComeMallocLib;

extern _Bool gComeDebugLib;

extern _Bool gComeGCLib;

extern int gNumAlloc;

extern int gNumFree;

struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    struct sMemHeaderTiny* mFreeMem[2048*2];
};

extern struct sHeapPage gHeapPages;

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

typedef struct real_pcre8_or_16 pcre;

typedef struct real_pcre8_or_16 pcre16;

typedef struct real_pcre32 pcre32;

typedef struct real_pcre_jit_stack pcre_jit_stack;

typedef struct real_pcre16_jit_stack pcre16_jit_stack;

typedef struct real_pcre32_jit_stack pcre32_jit_stack;

struct pcre_extra
{
    unsigned long  int flags;
    void* study_data;
    unsigned long  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long  int match_limit_recursion;
    unsigned char** mark;
    void* executable_jit;
};

typedef struct pcre_extra pcre_extra;

struct pcre16_extra
{
    unsigned long  int flags;
    void* study_data;
    unsigned long  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long  int match_limit_recursion;
    unsigned short int** mark;
    void* executable_jit;
};

typedef struct pcre16_extra pcre16_extra;

struct pcre32_extra
{
    unsigned long  int flags;
    void* study_data;
    unsigned long  int match_limit;
    void* callout_data;
    const unsigned char* tables;
    unsigned long  int match_limit_recursion;
    unsigned int** mark;
    void* executable_jit;
};

typedef struct pcre32_extra pcre32_extra;

struct pcre_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const char* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned char* mark;
};

typedef struct pcre_callout_block pcre_callout_block;

struct pcre16_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned short int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned short int* mark;
};

typedef struct pcre16_callout_block pcre16_callout_block;

struct pcre32_callout_block
{
    int version;
    int callout_number;
    int* offset_vector;
    const unsigned int* subject;
    int subject_length;
    int start_match;
    int current_position;
    int capture_top;
    int capture_last;
    void* callout_data;
    int pattern_position;
    int next_item_length;
    const unsigned int* mark;
};

typedef struct pcre32_callout_block pcre32_callout_block;

extern void* (*pcre_malloc)(unsigned long  int);
extern void (*pcre_free)(void*);
extern void* (*pcre_stack_malloc)(unsigned long  int);
extern void (*pcre_stack_free)(void*);
extern int (*pcre_callout)(struct pcre_callout_block*);
extern int (*pcre_stack_guard)();
extern void* (*pcre16_malloc)(unsigned long  int);
extern void (*pcre16_free)(void*);
extern void* (*pcre16_stack_malloc)(unsigned long  int);
extern void (*pcre16_stack_free)(void*);
extern int (*pcre16_callout)(struct pcre16_callout_block*);
extern int (*pcre16_stack_guard)();
extern void* (*pcre32_malloc)(unsigned long  int);
extern void (*pcre32_free)(void*);
extern void* (*pcre32_stack_malloc)(unsigned long  int);
extern void (*pcre32_stack_free)(void*);
extern int (*pcre32_callout)(struct pcre32_callout_block*);
extern int (*pcre32_stack_guard)();
typedef struct real_pcre_jit_stack* (*pcre_jit_callback)(void*);

typedef struct real_pcre16_jit_stack* (*pcre16_jit_callback)(void*);

typedef struct real_pcre32_jit_stack* (*pcre32_jit_callback)(void*);

typedef union anonymous_typeZ1 mbstate_t;

typedef unsigned long  int clock_t;

typedef long time_t;

struct timespec
{
    long tv_sec;
    long tv_nsec;
};

struct tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long tm_gmtoff;
    char* tm_zone;
};

extern char* tzname[];
extern int getdate_err;
extern long timezone;
extern int daylight;
enum anonymous_typeY8 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

typedef enum anonymous_typeY8 clockid_t;

typedef int wint_t;

typedef unsigned int wctype_t;

struct anonymous_typeX9
{
    int __min;
    int __max;
    int __map;
    unsigned int* __types;
};

typedef struct anonymous_typeX9 _RuneEntry;

struct anonymous_typeX10
{
    int __nranges;
    struct anonymous_typeX9* __ranges;
};

typedef struct anonymous_typeX10 _RuneRange;

struct anonymous_typeX11
{
    char __name[14];
    unsigned int __mask;
};

typedef struct anonymous_typeX11 _RuneCharClass;

struct anonymous_typeX12
{
    char __magic[8];
    char __encoding[32];
    int (*__sgetrune)(const char*,unsigned long  int,char**);
    int (*__sputrune)(int,char*,unsigned long  int,char**);
    int __invalid_rune;
    unsigned int __runetype[(1<<8)];
    int __maplower[(1<<8)];
    int __mapupper[(1<<8)];
    struct anonymous_typeX10 __runetype_ext;
    struct anonymous_typeX10 __maplower_ext;
    struct anonymous_typeX10 __mapupper_ext;
    void* __variable;
    int __variable_len;
    int __ncharclasses;
    struct anonymous_typeX11* __charclasses;
};

typedef struct anonymous_typeX12 _RuneLocale;

extern struct anonymous_typeX12 _DefaultRuneLocale;
extern struct anonymous_typeX12* _CurrentRuneLocale;
typedef int* wstring;

struct come_regex
{
    char* str;
    struct real_pcre8_or_16* regex;
    _Bool ignore_case;
    _Bool multiline;
    _Bool global;
    _Bool extended;
    _Bool dotall;
    _Bool anchored;
    _Bool dollar_endonly;
    _Bool ungreedy;
    int options;
    struct real_pcre8_or_16* re;
};

struct tuple2$2come_regexphcharph
{
    struct come_regex* v1;
    char* v2;
};

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
enum anonymous_typeY13 { GC_EVENT_START
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

typedef enum anonymous_typeY13 GC_EventType;

typedef void (*GC_on_collection_event_proc)(enum anonymous_typeY13);

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

enum anonymous_typeY14 { GC_TOGGLE_REF_DROP
,GC_TOGGLE_REF_STRONG
,GC_TOGGLE_REF_WEAK
};

typedef enum anonymous_typeY14 GC_ToggleRefStatus;

typedef enum anonymous_typeY14 (*GC_toggleref_func)(void*);

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

struct tuple2$2come_regexphvoidp
{
    struct come_regex* v1;
    void* v2;
};

// source head

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
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
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
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
void buffer_finalize(struct buffer* self);
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
char* buffer_printable(struct buffer* self);
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
char* charp_printable(char* str);
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
struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX699, int anonymous_var_nameX700, const char** anonymous_var_nameX701, int* anonymous_var_nameX702, const unsigned char* anonymous_var_nameX703);
struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX704, int anonymous_var_nameX705, const char** anonymous_var_nameX706, int* anonymous_var_nameX707, const unsigned char* anonymous_var_nameX708);
struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX709, int anonymous_var_nameX710, const char** anonymous_var_nameX711, int* anonymous_var_nameX712, const unsigned char* anonymous_var_nameX713);
struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX714, int anonymous_var_nameX715, int* anonymous_var_nameX716, const char** anonymous_var_nameX717, int* anonymous_var_nameX718, const unsigned char* anonymous_var_nameX719);
struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX720, int anonymous_var_nameX721, int* anonymous_var_nameX722, const char** anonymous_var_nameX723, int* anonymous_var_nameX724, const unsigned char* anonymous_var_nameX725);
struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX726, int anonymous_var_nameX727, int* anonymous_var_nameX728, const char** anonymous_var_nameX729, int* anonymous_var_nameX730, const unsigned char* anonymous_var_nameX731);
int pcre_config(int anonymous_var_nameX732, void* anonymous_var_nameX733);
int pcre16_config(int anonymous_var_nameX734, void* anonymous_var_nameX735);
int pcre32_config(int anonymous_var_nameX736, void* anonymous_var_nameX737);
int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX738, const char* anonymous_var_nameX739, int* anonymous_var_nameX740, int anonymous_var_nameX741, const char* anonymous_var_nameX742, char* anonymous_var_nameX743, int anonymous_var_nameX744);
int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX745, const unsigned short int* anonymous_var_nameX746, int* anonymous_var_nameX747, int anonymous_var_nameX748, const unsigned short int* anonymous_var_nameX749, unsigned short int* anonymous_var_nameX750, int anonymous_var_nameX751);
int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX752, const unsigned int* anonymous_var_nameX753, int* anonymous_var_nameX754, int anonymous_var_nameX755, const unsigned int* anonymous_var_nameX756, unsigned int* anonymous_var_nameX757, int anonymous_var_nameX758);
int pcre_copy_substring(const char* anonymous_var_nameX759, int* anonymous_var_nameX760, int anonymous_var_nameX761, int anonymous_var_nameX762, char* anonymous_var_nameX763, int anonymous_var_nameX764);
int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX765, int* anonymous_var_nameX766, int anonymous_var_nameX767, int anonymous_var_nameX768, unsigned short int* anonymous_var_nameX769, int anonymous_var_nameX770);
int pcre32_copy_substring(const unsigned int* anonymous_var_nameX771, int* anonymous_var_nameX772, int anonymous_var_nameX773, int anonymous_var_nameX774, unsigned int* anonymous_var_nameX775, int anonymous_var_nameX776);
int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX777, const struct pcre_extra* anonymous_var_nameX778, const char* anonymous_var_nameX779, int anonymous_var_nameX780, int anonymous_var_nameX781, int anonymous_var_nameX782, int* anonymous_var_nameX783, int anonymous_var_nameX784, int* anonymous_var_nameX785, int anonymous_var_nameX786);
int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX787, const struct pcre16_extra* anonymous_var_nameX788, const unsigned short int* anonymous_var_nameX789, int anonymous_var_nameX790, int anonymous_var_nameX791, int anonymous_var_nameX792, int* anonymous_var_nameX793, int anonymous_var_nameX794, int* anonymous_var_nameX795, int anonymous_var_nameX796);
int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX797, const struct pcre32_extra* anonymous_var_nameX798, const unsigned int* anonymous_var_nameX799, int anonymous_var_nameX800, int anonymous_var_nameX801, int anonymous_var_nameX802, int* anonymous_var_nameX803, int anonymous_var_nameX804, int* anonymous_var_nameX805, int anonymous_var_nameX806);
int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX807, const struct pcre_extra* anonymous_var_nameX808, const char* anonymous_var_nameX809, int anonymous_var_nameX810, int anonymous_var_nameX811, int anonymous_var_nameX812, int* anonymous_var_nameX813, int anonymous_var_nameX814);
int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX815, const struct pcre16_extra* anonymous_var_nameX816, const unsigned short int* anonymous_var_nameX817, int anonymous_var_nameX818, int anonymous_var_nameX819, int anonymous_var_nameX820, int* anonymous_var_nameX821, int anonymous_var_nameX822);
int pcre32_exec(const struct real_pcre32* anonymous_var_nameX823, const struct pcre32_extra* anonymous_var_nameX824, const unsigned int* anonymous_var_nameX825, int anonymous_var_nameX826, int anonymous_var_nameX827, int anonymous_var_nameX828, int* anonymous_var_nameX829, int anonymous_var_nameX830);
int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX831, const struct pcre_extra* anonymous_var_nameX832, const char* anonymous_var_nameX833, int anonymous_var_nameX834, int anonymous_var_nameX835, int anonymous_var_nameX836, int* anonymous_var_nameX837, int anonymous_var_nameX838, struct real_pcre_jit_stack* anonymous_var_nameX839);
int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX840, const struct pcre16_extra* anonymous_var_nameX841, const unsigned short int* anonymous_var_nameX842, int anonymous_var_nameX843, int anonymous_var_nameX844, int anonymous_var_nameX845, int* anonymous_var_nameX846, int anonymous_var_nameX847, struct real_pcre16_jit_stack* anonymous_var_nameX848);
int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX849, const struct pcre32_extra* anonymous_var_nameX850, const unsigned int* anonymous_var_nameX851, int anonymous_var_nameX852, int anonymous_var_nameX853, int anonymous_var_nameX854, int* anonymous_var_nameX855, int anonymous_var_nameX856, struct real_pcre32_jit_stack* anonymous_var_nameX857);
void pcre_free_substring(const char* anonymous_var_nameX858);
void pcre16_free_substring(const unsigned short int* anonymous_var_nameX859);
void pcre32_free_substring(const unsigned int* anonymous_var_nameX860);
void pcre_free_substring_list(const char** anonymous_var_nameX861);
void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX862);
void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX863);
int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX864, const struct pcre_extra* anonymous_var_nameX865, int anonymous_var_nameX866, void* anonymous_var_nameX867);
int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX868, const struct pcre16_extra* anonymous_var_nameX869, int anonymous_var_nameX870, void* anonymous_var_nameX871);
int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX872, const struct pcre32_extra* anonymous_var_nameX873, int anonymous_var_nameX874, void* anonymous_var_nameX875);
int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX876, const char* anonymous_var_nameX877, int* anonymous_var_nameX878, int anonymous_var_nameX879, const char* anonymous_var_nameX880, const char** anonymous_var_nameX881);
int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX882, const unsigned short int* anonymous_var_nameX883, int* anonymous_var_nameX884, int anonymous_var_nameX885, const unsigned short int* anonymous_var_nameX886, const unsigned short int** anonymous_var_nameX887);
int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX888, const unsigned int* anonymous_var_nameX889, int* anonymous_var_nameX890, int anonymous_var_nameX891, const unsigned int* anonymous_var_nameX892, const unsigned int** anonymous_var_nameX893);
int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX894, const char* anonymous_var_nameX895);
int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX896, const unsigned short int* anonymous_var_nameX897);
int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX898, const unsigned int* anonymous_var_nameX899);
int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX900, const char* anonymous_var_nameX901, char** anonymous_var_nameX902, char** anonymous_var_nameX903);
int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX904, const unsigned short int* anonymous_var_nameX905, unsigned short int** anonymous_var_nameX906, unsigned short int** anonymous_var_nameX907);
int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX908, const unsigned int* anonymous_var_nameX909, unsigned int** anonymous_var_nameX910, unsigned int** anonymous_var_nameX911);
int pcre_get_substring(const char* anonymous_var_nameX912, int* anonymous_var_nameX913, int anonymous_var_nameX914, int anonymous_var_nameX915, const char** anonymous_var_nameX916);
int pcre16_get_substring(const unsigned short int* anonymous_var_nameX917, int* anonymous_var_nameX918, int anonymous_var_nameX919, int anonymous_var_nameX920, const unsigned short int** anonymous_var_nameX921);
int pcre32_get_substring(const unsigned int* anonymous_var_nameX922, int* anonymous_var_nameX923, int anonymous_var_nameX924, int anonymous_var_nameX925, const unsigned int** anonymous_var_nameX926);
int pcre_get_substring_list(const char* anonymous_var_nameX927, int* anonymous_var_nameX928, int anonymous_var_nameX929, const char*** anonymous_var_nameX930);
int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX931, int* anonymous_var_nameX932, int anonymous_var_nameX933, const unsigned short int*** anonymous_var_nameX934);
int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX935, int* anonymous_var_nameX936, int anonymous_var_nameX937, const unsigned int*** anonymous_var_nameX938);
const unsigned char* pcre_maketables();
const unsigned char* pcre16_maketables();
const unsigned char* pcre32_maketables();
int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX939, int anonymous_var_nameX940);
int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX941, int anonymous_var_nameX942);
int pcre32_refcount(struct real_pcre32* anonymous_var_nameX943, int anonymous_var_nameX944);
struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX945, int anonymous_var_nameX946, const char** anonymous_var_nameX947);
struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX948, int anonymous_var_nameX949, const char** anonymous_var_nameX950);
struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX951, int anonymous_var_nameX952, const char** anonymous_var_nameX953);
void pcre_free_study(struct pcre_extra* anonymous_var_nameX954);
void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX955);
void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX956);
const char* pcre_version();
const char* pcre16_version();
const char* pcre32_version();
int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX957, struct pcre_extra* anonymous_var_nameX958, const unsigned char* anonymous_var_nameX959);
int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX960, struct pcre16_extra* anonymous_var_nameX961, const unsigned char* anonymous_var_nameX962);
int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX963, struct pcre32_extra* anonymous_var_nameX964, const unsigned char* anonymous_var_nameX965);
int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX966, const unsigned short int* anonymous_var_nameX967, int anonymous_var_nameX968, int* anonymous_var_nameX969, int anonymous_var_nameX970);
int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX971, const unsigned int* anonymous_var_nameX972, int anonymous_var_nameX973, int* anonymous_var_nameX974, int anonymous_var_nameX975);
struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX976, int anonymous_var_nameX977);
struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX978, int anonymous_var_nameX979);
struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX980, int anonymous_var_nameX981);
void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX982);
void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX983);
void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX984);
void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX985, struct real_pcre_jit_stack* (*anonymous_var_nameX986)(void*), void* anonymous_var_nameX987);
void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX988, struct real_pcre16_jit_stack* (*anonymous_var_nameX989)(void*), void* anonymous_var_nameX990);
void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX991, struct real_pcre32_jit_stack* (*anonymous_var_nameX992)(void*), void* anonymous_var_nameX993);
void pcre_jit_free_unused_memory();
void pcre16_jit_free_unused_memory();
void pcre32_jit_free_unused_memory();
char* asctime(const struct tm* anonymous_var_nameX994);
unsigned long  int clock();
char* ctime(const long* anonymous_var_nameX995);
double difftime(long anonymous_var_nameX996, long anonymous_var_nameX997);
struct tm* getdate(const char* anonymous_var_nameX998);
struct tm* gmtime(const long* anonymous_var_nameX999);
struct tm* localtime(const long* anonymous_var_nameX1000);
long mktime(struct tm* anonymous_var_nameX1001);
unsigned long  int strftime(char* anonymous_var_nameX1002, unsigned long  int anonymous_var_nameX1003, const char* anonymous_var_nameX1004, const struct tm* anonymous_var_nameX1005);
char* strptime(const char* anonymous_var_nameX1006, const char* anonymous_var_nameX1007, struct tm* anonymous_var_nameX1008);
long time(long* anonymous_var_nameX1009);
void tzset();
char* asctime_r(const struct tm* anonymous_var_nameX1010, char* anonymous_var_nameX1011);
char* ctime_r(const long* anonymous_var_nameX1012, char* anonymous_var_nameX1013);
struct tm* gmtime_r(const long* anonymous_var_nameX1014, struct tm* anonymous_var_nameX1015);
struct tm* localtime_r(const long* anonymous_var_nameX1016, struct tm* anonymous_var_nameX1017);
long posix2time(long anonymous_var_nameX1018);
void tzsetwall();
long time2posix(long anonymous_var_nameX1019);
long timelocal(struct tm* anonymous_var_nameX1020);
long timegm(struct tm* anonymous_var_nameX1021);
int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp);
int clock_getres(enum anonymous_typeY8 __clock_id, struct timespec* __res);
int clock_gettime(enum anonymous_typeY8 __clock_id, struct timespec* __tp);
unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY8 __clock_id);
int clock_settime(enum anonymous_typeY8 __clock_id, const struct timespec* __tp);
int timespec_get(struct timespec* ts, int base);
int isalnum(int anonymous_var_nameX1036);
int isalpha(int anonymous_var_nameX1037);
int isblank(int anonymous_var_nameX1038);
int iscntrl(int anonymous_var_nameX1039);
int isdigit(int anonymous_var_nameX1040);
int isgraph(int anonymous_var_nameX1041);
int islower(int anonymous_var_nameX1042);
int isprint(int anonymous_var_nameX1043);
int ispunct(int anonymous_var_nameX1044);
int isspace(int anonymous_var_nameX1045);
int isupper(int anonymous_var_nameX1046);
int isxdigit(int anonymous_var_nameX1047);
int tolower(int anonymous_var_nameX1048);
int toupper(int anonymous_var_nameX1049);
int isascii(int anonymous_var_nameX1050);
int toascii(int anonymous_var_nameX1051);
int _tolower(int anonymous_var_nameX1052);
int _toupper(int anonymous_var_nameX1053);
int digittoint(int anonymous_var_nameX1054);
int ishexnumber(int anonymous_var_nameX1055);
int isideogram(int anonymous_var_nameX1056);
int isnumber(int anonymous_var_nameX1057);
int isphonogram(int anonymous_var_nameX1058);
int isrune(int anonymous_var_nameX1059);
int isspecial(int anonymous_var_nameX1060);
int iswalnum(int anonymous_var_nameX1061);
int iswalpha(int anonymous_var_nameX1062);
int iswcntrl(int anonymous_var_nameX1063);
int iswctype(int anonymous_var_nameX1064, unsigned int anonymous_var_nameX1065);
int iswdigit(int anonymous_var_nameX1066);
int iswgraph(int anonymous_var_nameX1067);
int iswlower(int anonymous_var_nameX1068);
int iswprint(int anonymous_var_nameX1069);
int iswpunct(int anonymous_var_nameX1070);
int iswspace(int anonymous_var_nameX1071);
int iswupper(int anonymous_var_nameX1072);
int iswxdigit(int anonymous_var_nameX1073);
int towlower(int anonymous_var_nameX1074);
int towupper(int anonymous_var_nameX1075);
unsigned int wctype(const char* anonymous_var_nameX1076);
int btowc(int anonymous_var_nameX1077);
int fgetwc(struct __sFILE* anonymous_var_nameX1078);
int* fgetws(int* anonymous_var_nameX1079, int anonymous_var_nameX1080, struct __sFILE* anonymous_var_nameX1081);
int fputwc(int anonymous_var_nameX1082, struct __sFILE* anonymous_var_nameX1083);
int fputws(const int* anonymous_var_nameX1084, struct __sFILE* anonymous_var_nameX1085);
int fwide(struct __sFILE* anonymous_var_nameX1086, int anonymous_var_nameX1087);
int fwprintf(struct __sFILE* anonymous_var_nameX1088, const int* anonymous_var_nameX1089, ...);
int fwscanf(struct __sFILE* anonymous_var_nameX1090, const int* anonymous_var_nameX1091, ...);
int getwc(struct __sFILE* anonymous_var_nameX1092);
int getwchar();
unsigned long  int mbrlen(const char* anonymous_var_nameX1093, unsigned long  int anonymous_var_nameX1094, union anonymous_typeZ1* anonymous_var_nameX1095);
unsigned long  int mbrtowc(int* anonymous_var_nameX1096, const char* anonymous_var_nameX1097, unsigned long  int anonymous_var_nameX1098, union anonymous_typeZ1* anonymous_var_nameX1099);
int mbsinit(const union anonymous_typeZ1* anonymous_var_nameX1100);
unsigned long  int mbsrtowcs(int* anonymous_var_nameX1101, const char** anonymous_var_nameX1102, unsigned long  int anonymous_var_nameX1103, union anonymous_typeZ1* anonymous_var_nameX1104);
int putwc(int anonymous_var_nameX1105, struct __sFILE* anonymous_var_nameX1106);
int putwchar(int anonymous_var_nameX1107);
int swprintf(int* anonymous_var_nameX1108, unsigned long  int anonymous_var_nameX1109, const int* anonymous_var_nameX1110, ...);
int swscanf(const int* anonymous_var_nameX1111, const int* anonymous_var_nameX1112, ...);
int ungetwc(int anonymous_var_nameX1113, struct __sFILE* anonymous_var_nameX1114);
int vfwprintf(struct __sFILE* anonymous_var_nameX1115, const int* anonymous_var_nameX1116, __darwin_va_list anonymous_var_nameX1117);
int vswprintf(int* anonymous_var_nameX1118, unsigned long  int anonymous_var_nameX1119, const int* anonymous_var_nameX1120, __darwin_va_list anonymous_var_nameX1121);
int vwprintf(const int* anonymous_var_nameX1122, __darwin_va_list anonymous_var_nameX1123);
unsigned long  int wcrtomb(char* anonymous_var_nameX1124, int anonymous_var_nameX1125, union anonymous_typeZ1* anonymous_var_nameX1126);
int* wcscat(int* anonymous_var_nameX1127, const int* anonymous_var_nameX1128);
int* wcschr(const int* anonymous_var_nameX1129, int anonymous_var_nameX1130);
int wcscmp(const int* anonymous_var_nameX1131, const int* anonymous_var_nameX1132);
int wcscoll(const int* anonymous_var_nameX1133, const int* anonymous_var_nameX1134);
int* wcscpy(int* anonymous_var_nameX1135, const int* anonymous_var_nameX1136);
unsigned long  int wcscspn(const int* anonymous_var_nameX1137, const int* anonymous_var_nameX1138);
unsigned long  int wcsftime(int* anonymous_var_nameX1139, unsigned long  int anonymous_var_nameX1140, const int* anonymous_var_nameX1141, const struct tm* anonymous_var_nameX1142);
unsigned long  int wcslen(const int* anonymous_var_nameX1143);
int* wcsncat(int* anonymous_var_nameX1144, const int* anonymous_var_nameX1145, unsigned long  int anonymous_var_nameX1146);
int wcsncmp(const int* anonymous_var_nameX1147, const int* anonymous_var_nameX1148, unsigned long  int anonymous_var_nameX1149);
int* wcsncpy(int* anonymous_var_nameX1150, const int* anonymous_var_nameX1151, unsigned long  int anonymous_var_nameX1152);
int* wcspbrk(const int* anonymous_var_nameX1153, const int* anonymous_var_nameX1154);
int* wcsrchr(const int* anonymous_var_nameX1155, int anonymous_var_nameX1156);
unsigned long  int wcsrtombs(char* anonymous_var_nameX1157, const int** anonymous_var_nameX1158, unsigned long  int anonymous_var_nameX1159, union anonymous_typeZ1* anonymous_var_nameX1160);
unsigned long  int wcsspn(const int* anonymous_var_nameX1161, const int* anonymous_var_nameX1162);
int* wcsstr(const int* anonymous_var_nameX1163, const int* anonymous_var_nameX1164);
unsigned long  int wcsxfrm(int* anonymous_var_nameX1165, const int* anonymous_var_nameX1166, unsigned long  int anonymous_var_nameX1167);
int wctob(int anonymous_var_nameX1168);
double wcstod(const int* anonymous_var_nameX1169, int** anonymous_var_nameX1170);
int* wcstok(int* anonymous_var_nameX1171, const int* anonymous_var_nameX1172, int** anonymous_var_nameX1173);
long wcstol(const int* anonymous_var_nameX1174, int** anonymous_var_nameX1175, int anonymous_var_nameX1176);
unsigned long  int wcstoul(const int* anonymous_var_nameX1177, int** anonymous_var_nameX1178, int anonymous_var_nameX1179);
int* wmemchr(const int* anonymous_var_nameX1180, int anonymous_var_nameX1181, unsigned long  int anonymous_var_nameX1182);
int wmemcmp(const int* anonymous_var_nameX1183, const int* anonymous_var_nameX1184, unsigned long  int anonymous_var_nameX1185);
int* wmemcpy(int* anonymous_var_nameX1186, const int* anonymous_var_nameX1187, unsigned long  int anonymous_var_nameX1188);
int* wmemmove(int* anonymous_var_nameX1189, const int* anonymous_var_nameX1190, unsigned long  int anonymous_var_nameX1191);
int* wmemset(int* anonymous_var_nameX1192, int anonymous_var_nameX1193, unsigned long  int anonymous_var_nameX1194);
int wprintf(const int* anonymous_var_nameX1195, ...);
int wscanf(const int* anonymous_var_nameX1196, ...);
int wcswidth(const int* anonymous_var_nameX1197, unsigned long  int anonymous_var_nameX1198);
int wcwidth(int anonymous_var_nameX1199);
int vfwscanf(struct __sFILE* anonymous_var_nameX1200, const int* anonymous_var_nameX1201, __darwin_va_list anonymous_var_nameX1202);
int vswscanf(const int* anonymous_var_nameX1203, const int* anonymous_var_nameX1204, __darwin_va_list anonymous_var_nameX1205);
int vwscanf(const int* anonymous_var_nameX1206, __darwin_va_list anonymous_var_nameX1207);
float wcstof(const int* anonymous_var_nameX1208, int** anonymous_var_nameX1209);
long  double wcstold(const int* anonymous_var_nameX1210, int** anonymous_var_nameX1211);
long long wcstoll(const int* anonymous_var_nameX1212, int** anonymous_var_nameX1213, int anonymous_var_nameX1214);
unsigned long  long wcstoull(const int* anonymous_var_nameX1215, int** anonymous_var_nameX1216, int anonymous_var_nameX1217);
unsigned long  int mbsnrtowcs(int* anonymous_var_nameX1218, const char** anonymous_var_nameX1219, unsigned long  int anonymous_var_nameX1220, unsigned long  int anonymous_var_nameX1221, union anonymous_typeZ1* anonymous_var_nameX1222);
int* wcpcpy(int* anonymous_var_nameX1223, const int* anonymous_var_nameX1224);
int* wcpncpy(int* anonymous_var_nameX1225, const int* anonymous_var_nameX1226, unsigned long  int anonymous_var_nameX1227);
int* wcsdup(const int* anonymous_var_nameX1228);
int wcscasecmp(const int* anonymous_var_nameX1229, const int* anonymous_var_nameX1230);
int wcsncasecmp(const int* anonymous_var_nameX1231, const int* anonymous_var_nameX1232, unsigned long  int n);
unsigned long  int wcsnlen(const int* anonymous_var_nameX1233, unsigned long  int anonymous_var_nameX1234);
unsigned long  int wcsnrtombs(char* anonymous_var_nameX1235, const int** anonymous_var_nameX1236, unsigned long  int anonymous_var_nameX1237, unsigned long  int anonymous_var_nameX1238, union anonymous_typeZ1* anonymous_var_nameX1239);
struct __sFILE* open_wmemstream(int** __bufp, unsigned long  int* __sizep);
int* fgetwln(struct __sFILE* anonymous_var_nameX1240, unsigned long  int* anonymous_var_nameX1241);
unsigned long  int wcslcat(int* anonymous_var_nameX1242, const int* anonymous_var_nameX1243, unsigned long  int anonymous_var_nameX1244);
unsigned long  int wcslcpy(int* anonymous_var_nameX1245, const int* anonymous_var_nameX1246, unsigned long  int anonymous_var_nameX1247);
char* basename(char* anonymous_var_nameX1248);
char* dirname(char* anonymous_var_nameX1249);
char* basename_r(const char* anonymous_var_nameX1250, char* anonymous_var_nameX1251);
char* dirname_r(const char* anonymous_var_nameX1252, char* anonymous_var_nameX1253);
unsigned int GC_get_version();
unsigned long  int GC_get_gc_no();
void GC_set_oom_fn(void* (*anonymous_var_nameX1255)(unsigned long  int));
void* (*GC_get_oom_fn())(unsigned long  int);
void GC_set_on_heap_resize(void (*anonymous_var_nameX1257)(unsigned long  int));
void (*GC_get_on_heap_resize())(unsigned long  int);
void GC_set_on_collection_event(void (*anonymous_var_nameX1259)(enum anonymous_typeY13));
void (*GC_get_on_collection_event())(enum anonymous_typeY13);
void GC_set_find_leak(int anonymous_var_nameX1260);
int GC_get_find_leak();
void GC_set_all_interior_pointers(int anonymous_var_nameX1261);
int GC_get_all_interior_pointers();
void GC_set_finalize_on_demand(int anonymous_var_nameX1262);
int GC_get_finalize_on_demand();
void GC_set_java_finalization(int anonymous_var_nameX1263);
int GC_get_java_finalization();
void GC_set_finalizer_notifier(void (*anonymous_var_nameX1264)());
void (*GC_get_finalizer_notifier())();
void GC_set_dont_expand(int anonymous_var_nameX1265);
int GC_get_dont_expand();
void GC_set_full_freq(int anonymous_var_nameX1266);
int GC_get_full_freq();
void GC_set_non_gc_bytes(unsigned long  int anonymous_var_nameX1267);
unsigned long  int GC_get_non_gc_bytes();
void GC_set_no_dls(int anonymous_var_nameX1268);
int GC_get_no_dls();
void GC_set_free_space_divisor(unsigned long  int anonymous_var_nameX1269);
unsigned long  int GC_get_free_space_divisor();
void GC_set_max_retries(unsigned long  int anonymous_var_nameX1270);
unsigned long  int GC_get_max_retries();
void GC_set_dont_precollect(int anonymous_var_nameX1271);
int GC_get_dont_precollect();
void GC_set_time_limit(unsigned long  int anonymous_var_nameX1272);
unsigned long  int GC_get_time_limit();
void GC_set_time_limit_tv(struct GC_timeval_s anonymous_var_nameX1273);
struct GC_timeval_s GC_get_time_limit_tv();
void GC_set_allocd_bytes_per_finalizer(unsigned long  int anonymous_var_nameX1274);
unsigned long  int GC_get_allocd_bytes_per_finalizer();
void GC_start_performance_measurement();
unsigned long  int GC_get_full_gc_total_time();
void GC_set_pages_executable(int anonymous_var_nameX1275);
int GC_get_pages_executable();
void GC_set_min_bytes_allocd(unsigned long  int anonymous_var_nameX1276);
unsigned long  int GC_get_min_bytes_allocd();
void GC_set_rate(int anonymous_var_nameX1277);
int GC_get_rate();
void GC_set_max_prior_attempts(int anonymous_var_nameX1278);
int GC_get_max_prior_attempts();
void GC_set_disable_automatic_collection(int anonymous_var_nameX1279);
int GC_get_disable_automatic_collection();
void GC_set_handle_fork(int anonymous_var_nameX1280);
void GC_atfork_prepare();
void GC_atfork_parent();
void GC_atfork_child();
void GC_init();
int GC_is_init_called();
void GC_deinit();
void* GC_malloc(unsigned long  int anonymous_var_nameX1281);
void* GC_malloc_atomic(unsigned long  int anonymous_var_nameX1282);
char* GC_strdup(const char* anonymous_var_nameX1283);
char* GC_strndup(const char* anonymous_var_nameX1284, unsigned long  int anonymous_var_nameX1285);
void* GC_malloc_uncollectable(unsigned long  int anonymous_var_nameX1286);
void* GC_malloc_stubborn(unsigned long  int anonymous_var_nameX1287);
void* GC_memalign(unsigned long  int anonymous_var_nameX1288, unsigned long  int anonymous_var_nameX1289);
int GC_posix_memalign(void** anonymous_var_nameX1290, unsigned long  int anonymous_var_nameX1291, unsigned long  int anonymous_var_nameX1292);
void GC_free(void* anonymous_var_nameX1293);
void GC_change_stubborn(const void* anonymous_var_nameX1294);
void GC_end_stubborn_change(const void* anonymous_var_nameX1295);
void* GC_base(void* anonymous_var_nameX1296);
int GC_is_heap_ptr(const void* anonymous_var_nameX1297);
unsigned long  int GC_size(const void* anonymous_var_nameX1298);
void* GC_realloc(void* anonymous_var_nameX1299, unsigned long  int anonymous_var_nameX1300);
int GC_expand_hp(unsigned long  int anonymous_var_nameX1301);
void GC_set_max_heap_size(unsigned long  int anonymous_var_nameX1302);
void GC_exclude_static_roots(void* anonymous_var_nameX1303, void* anonymous_var_nameX1304);
void GC_clear_exclusion_table();
void GC_clear_roots();
void GC_add_roots(void* anonymous_var_nameX1305, void* anonymous_var_nameX1306);
void GC_remove_roots(void* anonymous_var_nameX1307, void* anonymous_var_nameX1308);
void GC_register_displacement(unsigned long  int anonymous_var_nameX1309);
void GC_debug_register_displacement(unsigned long  int anonymous_var_nameX1310);
void GC_gcollect();
void GC_gcollect_and_unmap();
int GC_try_to_collect(int (*anonymous_var_nameX1311)());
void GC_set_stop_func(int (*anonymous_var_nameX1312)());
int (*GC_get_stop_func())();
unsigned long  int GC_get_heap_size();
unsigned long  int GC_get_free_bytes();
unsigned long  int GC_get_unmapped_bytes();
unsigned long  int GC_get_bytes_since_gc();
unsigned long  int GC_get_expl_freed_bytes_since_gc();
unsigned long  int GC_get_total_bytes();
unsigned long  int GC_get_obtained_from_os_bytes();
void GC_get_heap_usage_safe(unsigned long  int* anonymous_var_nameX1313, unsigned long  int* anonymous_var_nameX1314, unsigned long  int* anonymous_var_nameX1315, unsigned long  int* anonymous_var_nameX1316, unsigned long  int* anonymous_var_nameX1317);
unsigned long  int GC_get_prof_stats(struct GC_prof_stats_s* anonymous_var_nameX1318, unsigned long  int anonymous_var_nameX1319);
unsigned long  int GC_get_size_map_at(int i);
unsigned long  int GC_get_memory_use();
void GC_disable();
int GC_is_disabled();
void GC_enable();
void GC_set_manual_vdb_allowed(int anonymous_var_nameX1320);
int GC_get_manual_vdb_allowed();
void GC_enable_incremental();
int GC_is_incremental_mode();
int GC_incremental_protection_needs();
void GC_start_incremental_collection();
int GC_collect_a_little();
void* GC_malloc_ignore_off_page(unsigned long  int anonymous_var_nameX1321);
void* GC_malloc_atomic_ignore_off_page(unsigned long  int anonymous_var_nameX1322);
void* GC_malloc_atomic_uncollectable(unsigned long  int anonymous_var_nameX1323);
void* GC_debug_malloc_atomic_uncollectable(unsigned long  int anonymous_var_nameX1324, const char* s, int i);
void* GC_debug_malloc(unsigned long  int anonymous_var_nameX1325, const char* s, int i);
void* GC_debug_malloc_atomic(unsigned long  int anonymous_var_nameX1326, const char* s, int i);
char* GC_debug_strdup(const char* anonymous_var_nameX1327, const char* s, int i);
char* GC_debug_strndup(const char* anonymous_var_nameX1328, unsigned long  int anonymous_var_nameX1329, const char* s, int i);
void* GC_debug_malloc_uncollectable(unsigned long  int anonymous_var_nameX1330, const char* s, int i);
void* GC_debug_malloc_stubborn(unsigned long  int anonymous_var_nameX1331, const char* s, int i);
void* GC_debug_malloc_ignore_off_page(unsigned long  int anonymous_var_nameX1332, const char* s, int i);
void* GC_debug_malloc_atomic_ignore_off_page(unsigned long  int anonymous_var_nameX1333, const char* s, int i);
void GC_debug_free(void* anonymous_var_nameX1334);
void* GC_debug_realloc(void* anonymous_var_nameX1335, unsigned long  int anonymous_var_nameX1336, const char* s, int i);
void GC_debug_change_stubborn(const void* anonymous_var_nameX1337);
void GC_debug_end_stubborn_change(const void* anonymous_var_nameX1338);
void* GC_debug_malloc_replacement(unsigned long  int anonymous_var_nameX1339);
void* GC_debug_realloc_replacement(void* anonymous_var_nameX1340, unsigned long  int anonymous_var_nameX1341);
void GC_register_finalizer(void* anonymous_var_nameX1344, void (*anonymous_var_nameX1345)(void*,void*), void* anonymous_var_nameX1346, void (*anonymous_var_nameX1347)(void*,void*), void** anonymous_var_nameX1348);
void GC_debug_register_finalizer(void* anonymous_var_nameX1349, void (*anonymous_var_nameX1350)(void*,void*), void* anonymous_var_nameX1351, void (*anonymous_var_nameX1352)(void*,void*), void** anonymous_var_nameX1353);
void GC_register_finalizer_ignore_self(void* anonymous_var_nameX1354, void (*anonymous_var_nameX1355)(void*,void*), void* anonymous_var_nameX1356, void (*anonymous_var_nameX1357)(void*,void*), void** anonymous_var_nameX1358);
void GC_debug_register_finalizer_ignore_self(void* anonymous_var_nameX1359, void (*anonymous_var_nameX1360)(void*,void*), void* anonymous_var_nameX1361, void (*anonymous_var_nameX1362)(void*,void*), void** anonymous_var_nameX1363);
void GC_register_finalizer_no_order(void* anonymous_var_nameX1364, void (*anonymous_var_nameX1365)(void*,void*), void* anonymous_var_nameX1366, void (*anonymous_var_nameX1367)(void*,void*), void** anonymous_var_nameX1368);
void GC_debug_register_finalizer_no_order(void* anonymous_var_nameX1369, void (*anonymous_var_nameX1370)(void*,void*), void* anonymous_var_nameX1371, void (*anonymous_var_nameX1372)(void*,void*), void** anonymous_var_nameX1373);
void GC_register_finalizer_unreachable(void* anonymous_var_nameX1374, void (*anonymous_var_nameX1375)(void*,void*), void* anonymous_var_nameX1376, void (*anonymous_var_nameX1377)(void*,void*), void** anonymous_var_nameX1378);
void GC_debug_register_finalizer_unreachable(void* anonymous_var_nameX1379, void (*anonymous_var_nameX1380)(void*,void*), void* anonymous_var_nameX1381, void (*anonymous_var_nameX1382)(void*,void*), void** anonymous_var_nameX1383);
int GC_register_disappearing_link(void** anonymous_var_nameX1384);
int GC_general_register_disappearing_link(void** anonymous_var_nameX1385, const void* anonymous_var_nameX1386);
int GC_move_disappearing_link(void** anonymous_var_nameX1387, void** anonymous_var_nameX1388);
int GC_unregister_disappearing_link(void** anonymous_var_nameX1389);
int GC_register_long_link(void** anonymous_var_nameX1390, const void* anonymous_var_nameX1391);
int GC_move_long_link(void** anonymous_var_nameX1392, void** anonymous_var_nameX1393);
int GC_unregister_long_link(void** anonymous_var_nameX1394);
void GC_set_toggleref_func(enum anonymous_typeY14 (*anonymous_var_nameX1396)(void*));
enum anonymous_typeY14 (*GC_get_toggleref_func())(void*);
int GC_toggleref_add(void* anonymous_var_nameX1397, int anonymous_var_nameX1398);
void GC_set_await_finalize_proc(void (*anonymous_var_nameX1400)(void*));
void (*GC_get_await_finalize_proc())(void*);
int GC_should_invoke_finalizers();
int GC_invoke_finalizers();
void GC_noop1(unsigned long  int anonymous_var_nameX1401);
void GC_set_warn_proc(void (*anonymous_var_nameX1404)(char*,unsigned long  int));
void (*GC_get_warn_proc())(char*,unsigned long  int);
void GC_ignore_warn_proc(char* anonymous_var_nameX1405, unsigned long  int anonymous_var_nameX1406);
void GC_set_log_fd(int anonymous_var_nameX1407);
void GC_set_abort_func(void (*anonymous_var_nameX1409)(const char*));
void (*GC_get_abort_func())(const char*);
void GC_abort_on_oom();
void* GC_call_with_alloc_lock(void* (*anonymous_var_nameX1411)(void*), void* anonymous_var_nameX1412);
void* GC_call_with_stack_base(void* (*anonymous_var_nameX1415)(struct GC_stack_base*,void*), void* anonymous_var_nameX1416);
void GC_start_mark_threads();
void* GC_do_blocking(void* (*anonymous_var_nameX1417)(void*), void* anonymous_var_nameX1418);
void* GC_call_with_gc_active(void* (*anonymous_var_nameX1419)(void*), void* anonymous_var_nameX1420);
int GC_get_stack_base(struct GC_stack_base* anonymous_var_nameX1421);
void* GC_get_my_stackbottom(struct GC_stack_base* anonymous_var_nameX1422);
void GC_set_stackbottom(void* anonymous_var_nameX1423, const struct GC_stack_base* anonymous_var_nameX1424);
void* GC_same_obj(void* anonymous_var_nameX1425, void* anonymous_var_nameX1426);
void* GC_pre_incr(void** anonymous_var_nameX1427, long  int anonymous_var_nameX1428);
void* GC_post_incr(void** anonymous_var_nameX1429, long  int anonymous_var_nameX1430);
void* GC_is_visible(void* anonymous_var_nameX1431);
void* GC_is_valid_displacement(void* anonymous_var_nameX1432);
void GC_dump();
void GC_dump_named(const char* anonymous_var_nameX1433);
void GC_dump_regions();
void GC_dump_finalization();
void GC_ptr_store_and_dirty(void* anonymous_var_nameX1434, const void* anonymous_var_nameX1435);
void GC_debug_ptr_store_and_dirty(void* anonymous_var_nameX1436, const void* anonymous_var_nameX1437);
void* GC_malloc_many(unsigned long  int anonymous_var_nameX1458);
void GC_register_has_static_roots_callback(int (*anonymous_var_nameX1462)(const char*,void*,unsigned long  int));
void GC_set_force_unmap_on_gcollect(int anonymous_var_nameX1463);
int GC_get_force_unmap_on_gcollect();
void GC_win32_free_heap();
void come_regex_finalizer(void* obj, void* client_data);
struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2);
static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2);
void come_regex_finalize(struct come_regex* reg);
struct tuple2$2come_regexphcharph* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
struct come_regex* come_regex_clone(struct come_regex* reg);
char* come_regex_to_string(struct come_regex* reg);
char* string_lower_case(char* str);
char* string_upper_case(char* str);
int* wchar_tp_substring(int* str, int head, int tail);
int* __builtin_wstring(char* str);
int charp_index_count(char* str, char* search_str, int count, int default_value);
int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value);
int charp_rindex(char* str, char* search_str, int default_value);
int charp_rindex_regex(char* self, struct come_regex* reg, int default_value);
int charp_rindex_count(char* str, char* search_str, int count, int default_value);
struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
_Bool come_regex_equals(struct come_regex* left, struct come_regex* right);
struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex);
char* charp_strip(char* self);
char* wchar_tp_to_string(int* wstr);
int* charp_to_wstring(char* str);
int wchar_tp_length(int* str);
int* wchar_tp_delete(int* str, int head, int tail);
int wchar_tp_index(int* str, int* search_str, int default_value);
int wchar_tp_rindex(int* str, int* search_str, int default_value);
int* wchar_tp_reverse(int* str);
int* wchar_tp_multiply(int* str, int n);
int* wchar_tp_printable(int* str);
_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
int wchar_tp_compare(int* left, int* right);
int wstring_compare(int* left, int* right);
unsigned int come_regex_get_hash_key(struct come_regex* reg);
_Bool wchar_tp_equals(int left, int right);
int* wchar_tp_operator_mult(int* str, int n);
int* wstring_operator_mult(int* str, int n);
_Bool wchar_tp_operator_equals(int* left, int* right);
_Bool wstring_operator_equals(int* left, int* right);
_Bool wchar_tp_operator_not_equals(int* left, int* right);
_Bool wstring_operator_not_equals(int* left, int* right);
_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right);
_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right);
int* wchar_tp_operator_add(int* left, int* right);
int* wstring_operator_add(int* left, int* right);
int charp_index(char* str, char* search_str, int default_value);
int charp_index_regex(char* self, struct come_regex* reg, int default_value);
char* charp_replace(char* self, int index, char c);
char* charp_multiply(char* str, int n);
char* charp_sub(char* self, struct come_regex* reg, char* replace);
char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count);
struct list$1charph* charp_split_str(char* self, char* str);
struct list$1charph* charp_scan(char* self, struct come_regex* reg);
struct list$1charph* charp_split(char* self, struct come_regex* reg);
_Bool charp_match(char* self, struct come_regex* reg);
struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit);
int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value);
_Bool charp_match_count(char* self, struct come_regex* reg, int count);
char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*));
char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*));
unsigned int wchar_tp_get_hash_key(int* value);
_Bool wstring_equals(int* left, int* right);
_Bool wchar_t_operator_equals(int left, int right);
_Bool wchar_t_operator_not_equals(int left, int right);
unsigned int wchar_t_get_hash_key(int value);
_Bool wchar_t_equals(int left, int right);
char* wchar_t_to_string(int wc);
char* string_chomp(char* str);
char* xrealpath(char* path);
char* xdirname(char* path);
unsigned long  int xwcslen(int* wstr);
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
unsigned char* __result52__;
    __result52__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_109;
struct buffer* __result53__;
    result_109=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3593, "buffer"));
    buffer_append(result_109,self,sizeof(char)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_109;
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_110;
int i_111;
struct buffer* __result54__;
    result_110=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3600, "buffer"));
    for(    i_111=0;    i_111<len;    i_111++    ){
        buffer_append(result_110,self[i_111],strlen(self[i_111]));
    }
    __result54__ = gComeFunResultObject = __result_obj__ = result_110;
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_112;
struct buffer* __result55__;
    result_112=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3609, "buffer"));
    buffer_append(result_112,(char*)self,sizeof(short)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_112;
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_113;
struct buffer* __result56__;
    result_113=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3616, "buffer"));
    buffer_append(result_113,(char*)self,sizeof(int)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_113;
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_114;
struct buffer* __result57__;
    result_114=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3623, "buffer"));
    buffer_append(result_114,(char*)self,sizeof(long)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_114;
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_115;
struct buffer* __result58__;
    result_115=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3630, "buffer"));
    buffer_append(result_115,(char*)self,sizeof(float)*len);
    __result58__ = gComeFunResultObject = __result_obj__ = result_115;
    gComeFunResultObject = (void*)0;
    return __result58__;
}
static static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* result_116;
struct buffer* __result59__;
    result_116=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3637, "buffer"));
    buffer_append(result_116,(char*)self,sizeof(double)*len);
    __result59__ = gComeFunResultObject = __result_obj__ = result_116;
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 3965, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 3970, "smart_pointer$1char"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 3975, "smart_pointer$1short"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 3980, "smart_pointer$1int"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result69__;
    __result69__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 3985, "smart_pointer$1long"),buffer_clone(self));
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_122;
struct smart_pointer$1char* __result70__;
    buf_122=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4018, "buffer"));
    buffer_append(buf_122,(char*)self,sizeof(char)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4020, "smart_pointer$1char"),buf_122);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_123;
struct smart_pointer$1charp* __result72__;
    buf_123=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4025, "buffer"));
    buffer_append(buf_123,(char*)self,sizeof(char*)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4027, "smart_pointer$1charp"),buf_123);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_124;
struct smart_pointer$1short* __result73__;
    buf_124=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4032, "buffer"));
    buffer_append(buf_124,(char*)self,sizeof(short)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4034, "smart_pointer$1short"),buf_124);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_125;
struct smart_pointer$1int* __result74__;
    buf_125=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4039, "buffer"));
    buffer_append(buf_125,(char*)self,sizeof(int)*len);
    __result74__ = gComeFunResultObject = __result_obj__ = smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4041, "smart_pointer$1int"),buf_125);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_126;
struct smart_pointer$1long* __result75__;
    buf_126=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4046, "buffer"));
    buffer_append(buf_126,(char*)self,sizeof(long)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4048, "smart_pointer$1long"),buf_126);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_127;
struct smart_pointer$1float* __result77__;
    buf_127=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4053, "buffer"));
    buffer_append(buf_127,(char*)self,sizeof(float)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4055, "smart_pointer$1float"),buf_127);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct buffer* buf_128;
struct smart_pointer$1double* __result79__;
    buf_128=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4060, "buffer"));
    buffer_append(buf_128,(char*)self,sizeof(double)*len);
    __result79__ = gComeFunResultObject = __result_obj__ = smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4062, "smart_pointer$1double"),buf_128);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = list$1char_initialize_with_values((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4067, "list$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1charp* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = list$1charp_initialize_with_values((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4072, "list$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1short* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = list$1short_initialize_with_values((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4077, "list$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1int* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = list$1int_initialize_with_values((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4082, "list$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result91__;
}
static static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1long* __result94__;
    __result94__ = gComeFunResultObject = __result_obj__ = list$1long_initialize_with_values((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4087, "list$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result94__;
}
static static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1float* __result97__;
    __result97__ = gComeFunResultObject = __result_obj__ = list$1float_initialize_with_values((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4092, "list$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result97__;
}
static static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct list$1double* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = list$1double_initialize_with_values((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4097, "list$1double"),len,self);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1char* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = vector$1char_initialize_with_values((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4102, "vector$1char"),len,self);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1charp* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = vector$1charp_initialize_with_values((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4107, "vector$1charp"),len,self);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1short* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = vector$1short_initialize_with_values((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4112, "vector$1short"),len,self);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1int* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = vector$1int_initialize_with_values((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4117, "vector$1int"),len,self);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1long* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = vector$1long_initialize_with_values((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4122, "vector$1long"),len,self);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1float* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = vector$1float_initialize_with_values((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4127, "vector$1float"),len,self);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
struct vector$1double* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = vector$1double_initialize_with_values((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4132, "vector$1double"),len,self);
    gComeFunResultObject = (void*)0;
    return __result114__;
}
static static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_165;
int i_166;
    result_165=(_Bool)0;
    for(    i_166=0;    i_166<len;    i_166++    ){
        if(        strncmp(self[i_166],str,strlen(self[i_166]))==0) {
            result_165=(_Bool)1;
            break;
        }
    }
    return result_165;
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
char* __result168__;
    __result168__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result168__;
}
static static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result169__;
    __result169__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result169__;
}
static static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
char* __result170__;
    __result170__ = gComeFunResultObject = __result_obj__ = xsprintf(msg,self);
    gComeFunResultObject = (void*)0;
    return __result170__;
}
static static inline char* string_printable(char* str){
void* __result_obj__=(void*)0;
char* __result172__;
    __result172__ = gComeFunResultObject = __result_obj__ = string_printable(str);
    gComeFunResultObject = (void*)0;
    return __result172__;
}
static static inline int* wstring_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int* __result223__;
    __result223__ = gComeFunResultObject = __result_obj__ = wchar_tp_substring(str,head,tail);
    gComeFunResultObject = (void*)0;
    return __result223__;
}
static static inline int string_index_count(char* str, char* search_str, int count, int default_value){
    return charp_index_count(str,search_str,count,default_value);
}
static static inline int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_index_regex_count(self,reg,count,default_value);
}
static static inline int string_rindex(char* str, char* search_str, int default_value){
    return charp_rindex(str,search_str,default_value);
}
static static inline int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
    return charp_rindex_regex(self,reg,default_value);
}
static static inline int string_rindex_count(char* str, char* search_str, int count, int default_value){
    return charp_rindex_count(str,search_str,default_value,-1);
}
static static inline struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result224__;
    __result224__ = gComeFunResultObject = __result_obj__ = charp_scan_block(self,reg,parent,block);
    gComeFunResultObject = (void*)0;
    return __result224__;
}
static static inline struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result225__;
    __result225__ = gComeFunResultObject = __result_obj__ = charp_scan_block_count(self,reg,count,parent,block);
    gComeFunResultObject = (void*)0;
    return __result225__;
}
static static inline struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result226__;
    __result226__ = gComeFunResultObject = __result_obj__ = charp_split_block(self,reg,parent,block);
    gComeFunResultObject = (void*)0;
    return __result226__;
}
static static inline struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result227__;
    __result227__ = gComeFunResultObject = __result_obj__ = charp_split_block_count(self,reg,count,parent,block);
    gComeFunResultObject = (void*)0;
    return __result227__;
}
static static inline struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
struct list$1charph* __result228__;
    __result228__ = gComeFunResultObject = __result_obj__ = charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex);
    gComeFunResultObject = (void*)0;
    return __result228__;
}
static static inline char* string_strip(char* self){
void* __result_obj__=(void*)0;
char* __result229__;
    __result229__ = gComeFunResultObject = __result_obj__ = charp_strip(self);
    gComeFunResultObject = (void*)0;
    return __result229__;
}
static static inline int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
int* __result230__;
    __result230__ = gComeFunResultObject = __result_obj__ = charp_to_wstring(str);
    gComeFunResultObject = (void*)0;
    return __result230__;
}
static static inline char* wstring_to_string(int* wstr){
void* __result_obj__=(void*)0;
char* __result231__;
    __result231__ = gComeFunResultObject = __result_obj__ = wchar_tp_to_string(wstr);
    gComeFunResultObject = (void*)0;
    return __result231__;
}
static static inline int* int_to_wstring(int self){
void* __result_obj__=(void*)0;
int* __result232__;
    __result232__ = gComeFunResultObject = __result_obj__ = string_to_wstring(xsprintf("%d",self));
    gComeFunResultObject = (void*)0;
    return __result232__;
}
static static inline int wstring_length(int* str){
    return wchar_tp_length(str);
}
static static inline int* wstring_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int* __result233__;
    __result233__ = gComeFunResultObject = __result_obj__ = wchar_tp_delete(str,head,tail);
    gComeFunResultObject = (void*)0;
    return __result233__;
}
static static inline int wstring_index(int* str, int* search_str, int default_value){
    return wchar_tp_index(str,search_str,default_value);
}
static static inline int wstring_rindex(int* str, int* search_str, int default_value){
    return wchar_tp_rindex(str,search_str,default_value);
}
static static inline int* wstring_reverse(int* str){
void* __result_obj__=(void*)0;
int* __result234__;
    __result234__ = gComeFunResultObject = __result_obj__ = wchar_tp_reverse(str);
    gComeFunResultObject = (void*)0;
    return __result234__;
}
static static inline int* wstring_multiply(int* str, int n){
void* __result_obj__=(void*)0;
int* __result235__;
    __result235__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result235__;
}
static static inline int* wstring_printable(int* str){
void* __result_obj__=(void*)0;
int* __result236__;
    __result236__ = gComeFunResultObject = __result_obj__ = wchar_tp_printable(str);
    gComeFunResultObject = (void*)0;
    return __result236__;
}
static static inline unsigned int wstring_get_hash_key(int* value){
    return wchar_tp_get_hash_key(value);
}
static static inline _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
    return charp_match_group_strings(self,reg,count,group_strings);
}
static static inline int string_index(char* str, char* search_str, int default_value){
    return charp_index(str,search_str,default_value);
}
static static inline int string_index_regex(char* self, struct come_regex* reg, int default_value){
    return charp_index_regex(self,reg,default_value);
}
static static inline char* string_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
char* __result237__;
    __result237__ = gComeFunResultObject = __result_obj__ = charp_replace(self,index,c);
    gComeFunResultObject = (void*)0;
    return __result237__;
}
static static inline char* string_multiply(char* str, int n){
void* __result_obj__=(void*)0;
char* __result238__;
    __result238__ = gComeFunResultObject = __result_obj__ = charp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result238__;
}
static static inline char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
char* __result239__;
    __result239__ = gComeFunResultObject = __result_obj__ = charp_sub(self,reg,replace);
    gComeFunResultObject = (void*)0;
    return __result239__;
}
static static inline char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
char* __result240__;
    __result240__ = gComeFunResultObject = __result_obj__ = charp_sub_count(self,reg,replace,count);
    gComeFunResultObject = (void*)0;
    return __result240__;
}
static static inline struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
struct list$1charph* __result241__;
    __result241__ = gComeFunResultObject = __result_obj__ = charp_split_str(self,str);
    gComeFunResultObject = (void*)0;
    return __result241__;
}
static static inline struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result242__;
    __result242__ = gComeFunResultObject = __result_obj__ = charp_scan(self,reg);
    gComeFunResultObject = (void*)0;
    return __result242__;
}
static static inline struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result243__;
    __result243__ = gComeFunResultObject = __result_obj__ = charp_split(self,reg);
    gComeFunResultObject = (void*)0;
    return __result243__;
}
static static inline _Bool string_match(char* self, struct come_regex* reg){
    return charp_match(self,reg);
}
static static inline struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
struct list$1charph* __result244__;
    __result244__ = gComeFunResultObject = __result_obj__ = charp_split_maxsplit(self,reg,maxsplit);
    gComeFunResultObject = (void*)0;
    return __result244__;
}
static static inline int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_rindex_regex_count(self,reg,count,default_value);
}
static static inline _Bool string_match_count(char* self, struct come_regex* reg, int count){
    return charp_match_count(self,reg,count);
}
static static inline char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
char* __result245__;
    __result245__ = gComeFunResultObject = __result_obj__ = charp_sub_block(self,reg,parent,block);
    gComeFunResultObject = (void*)0;
    return __result245__;
}
static static inline char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
char* __result246__;
    __result246__ = gComeFunResultObject = __result_obj__ = charp_sub_block_count(self,reg,count,parent,block);
    gComeFunResultObject = (void*)0;
    return __result246__;
}
static static inline char* charp_chomp(char* str){
void* __result_obj__=(void*)0;
char* __result248__;
    __result248__ = gComeFunResultObject = __result_obj__ = string_chomp(str);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

// body function
static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1char* __result61__;
    self->memory=value;
    self->p=(char*)value->buf;
    __result61__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result61__;
}

static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1short* __result64__;
    self->memory=value;
    self->p=(short*)value->buf;
    __result64__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result64__;
}

static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1int* __result66__;
    self->memory=value;
    self->p=(int*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result66__;
}

static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1long* __result68__;
    self->memory=value;
    self->p=(long*)value->buf;
    __result68__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1charp* __result71__;
    self->memory=value;
    self->p=(char**)value->buf;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1float* __result76__;
    self->memory=value;
    self->p=(float*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct smart_pointer$1double* __result78__;
    self->memory=value;
    self->p=(double*)value->buf;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_129;
struct list$1char* __result81__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_129=0;    i_129<num_value;    i_129++    ){
        list$1char_push_back(self,values[i_129]);
    }
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
struct list_item$1char* litem_130;
struct list_item$1char* litem_131;
struct list_item$1char* litem_132;
struct list$1char* __result80__;
    if(    self->len==0) {
        litem_130=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1087, "list_item$1char");
        litem_130->prev=((void*)0);
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head=litem_130;
    }
    else if(    self->len==1) {
        litem_131=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1097, "list_item$1char");
        litem_131->prev=self->head;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail=litem_131;
        self->head->next=litem_131;
    }
    else {
        litem_132=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1107, "list_item$1char");
        litem_132->prev=self->tail;
        litem_132->next=((void*)0);
        litem_132->item=item;
        self->tail->next=litem_132;
        self->tail=litem_132;
    }
    self->len++;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_133;
struct list$1charp* __result84__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_133=0;    i_133<num_value;    i_133++    ){
        list$1charp_push_back(self,values[i_133]);
    }
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
struct list_item$1charp* litem_134;
struct list_item$1charp* litem_135;
struct list_item$1charp* litem_136;
struct list$1charp* __result83__;
    if(    self->len==0) {
        litem_134=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1087, "list_item$1charp");
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head=litem_134;
    }
    else if(    self->len==1) {
        litem_135=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1097, "list_item$1charp");
        litem_135->prev=self->head;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head->next=litem_135;
    }
    else {
        litem_136=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1107, "list_item$1charp");
        litem_136->prev=self->tail;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail->next=litem_136;
        self->tail=litem_136;
    }
    self->len++;
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_137;
struct list$1short* __result87__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_137=0;    i_137<num_value;    i_137++    ){
        list$1short_push_back(self,values[i_137]);
    }
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
struct list_item$1short* litem_138;
struct list_item$1short* litem_139;
struct list_item$1short* litem_140;
struct list$1short* __result86__;
    if(    self->len==0) {
        litem_138=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1087, "list_item$1short");
        litem_138->prev=((void*)0);
        litem_138->next=((void*)0);
        litem_138->item=item;
        self->tail=litem_138;
        self->head=litem_138;
    }
    else if(    self->len==1) {
        litem_139=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1097, "list_item$1short");
        litem_139->prev=self->head;
        litem_139->next=((void*)0);
        litem_139->item=item;
        self->tail=litem_139;
        self->head->next=litem_139;
    }
    else {
        litem_140=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1107, "list_item$1short");
        litem_140->prev=self->tail;
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail->next=litem_140;
        self->tail=litem_140;
    }
    self->len++;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_141;
struct list$1int* __result90__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_141=0;    i_141<num_value;    i_141++    ){
        list$1int_push_back(self,values[i_141]);
    }
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
struct list_item$1int* litem_142;
struct list_item$1int* litem_143;
struct list_item$1int* litem_144;
struct list$1int* __result89__;
    if(    self->len==0) {
        litem_142=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1087, "list_item$1int");
        litem_142->prev=((void*)0);
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head=litem_142;
    }
    else if(    self->len==1) {
        litem_143=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1097, "list_item$1int");
        litem_143->prev=self->head;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail=litem_143;
        self->head->next=litem_143;
    }
    else {
        litem_144=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1107, "list_item$1int");
        litem_144->prev=self->tail;
        litem_144->next=((void*)0);
        litem_144->item=item;
        self->tail->next=litem_144;
        self->tail=litem_144;
    }
    self->len++;
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_145;
struct list$1long* __result93__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_145=0;    i_145<num_value;    i_145++    ){
        list$1long_push_back(self,values[i_145]);
    }
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
struct list_item$1long* litem_146;
struct list_item$1long* litem_147;
struct list_item$1long* litem_148;
struct list$1long* __result92__;
    if(    self->len==0) {
        litem_146=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1087, "list_item$1long");
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1097, "list_item$1long");
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1107, "list_item$1long");
        litem_148->prev=self->tail;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail->next=litem_148;
        self->tail=litem_148;
    }
    self->len++;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_149;
struct list$1float* __result96__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_149=0;    i_149<num_value;    i_149++    ){
        list$1float_push_back(self,values[i_149]);
    }
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
struct list_item$1float* litem_150;
struct list_item$1float* litem_151;
struct list_item$1float* litem_152;
struct list$1float* __result95__;
    if(    self->len==0) {
        litem_150=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1087, "list_item$1float");
        litem_150->prev=((void*)0);
        litem_150->next=((void*)0);
        litem_150->item=item;
        self->tail=litem_150;
        self->head=litem_150;
    }
    else if(    self->len==1) {
        litem_151=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1097, "list_item$1float");
        litem_151->prev=self->head;
        litem_151->next=((void*)0);
        litem_151->item=item;
        self->tail=litem_151;
        self->head->next=litem_151;
    }
    else {
        litem_152=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1107, "list_item$1float");
        litem_152->prev=self->tail;
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail->next=litem_152;
        self->tail=litem_152;
    }
    self->len++;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_153;
struct list$1double* __result99__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_153=0;    i_153<num_value;    i_153++    ){
        list$1double_push_back(self,values[i_153]);
    }
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
struct list_item$1double* litem_154;
struct list_item$1double* litem_155;
struct list_item$1double* litem_156;
struct list$1double* __result98__;
    if(    self->len==0) {
        litem_154=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1087, "list_item$1double");
        litem_154->prev=((void*)0);
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head=litem_154;
    }
    else if(    self->len==1) {
        litem_155=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1097, "list_item$1double");
        litem_155->prev=self->head;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail=litem_155;
        self->head->next=litem_155;
    }
    else {
        litem_156=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1107, "list_item$1double");
        litem_156->prev=self->tail;
        litem_156->next=((void*)0);
        litem_156->item=item;
        self->tail->next=litem_156;
        self->tail=litem_156;
    }
    self->len++;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
struct vector$1char* __result101__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1881, "char");
    memcpy(self->items,values,sizeof(char)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
struct vector$1charp* __result103__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1881, "char*");
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
struct vector$1short* __result105__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1881, "short");
    memcpy(self->items,values,sizeof(short)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
struct vector$1int* __result107__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1881, "int");
    memcpy(self->items,values,sizeof(int)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
struct vector$1long* __result109__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1881, "long");
    memcpy(self->items,values,sizeof(long)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
struct vector$1float* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1881, "float");
    memcpy(self->items,values,sizeof(float)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
struct vector$1double* __result113__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1881, "double");
    memcpy(self->items,values,sizeof(double)*self->len);
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result113__;
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
struct list_item$1charph* litem_200;
struct list_item$1charph* litem_201;
struct list_item$1charph* litem_202;
struct list$1charph* __result164__;
    if(    self->len==0) {
        litem_200=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1087, "list_item$1charph");
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1) {
        litem_201=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1097, "list_item$1charph");
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1107, "list_item$1charph");
        litem_202->prev=self->tail;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail->next=litem_202;
        self->tail=litem_202;
    }
    self->len++;
    __result164__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result164__;
}

void come_regex_finalizer(void* obj, void* client_data){
struct come_regex* reg_248;
    reg_248=obj;
    if(    reg_248&&reg_248->re) {
        free(reg_248->re);
    }
}

struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_249;
int erro_ofs_250;
int options_251;
struct come_regex* __null_value1;
struct tuple2$2come_regexphcharph* __result250__;
struct tuple2$2come_regexphcharph* __result252__;
err_249 = (void*)0;
memset(&erro_ofs_250, 0, sizeof(int));
memset(&__null_value1, 0, sizeof(struct come_regex*));
    options_251=2048|(((ignore_case)?(1):(0)))|(((multiline)?(2):(0)))|(((extended)?(8):(0)))|(((dotall)?(4):(0)))|(((dollar_endonly)?(32):(0)))|(((ungreedy)?(512):(0)));
    self->str=__builtin_string(str);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_251;
    self->re=pcre_compile(str,options_251,&err_249,&erro_ofs_250,((void*)0));
    if(    self->re==((void*)0)) {
        __result250__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str-gc.c", 46, "struct tuple2$2come_regexphcharph"),__null_value1,xsprintf("regex error \%s",charp_to_string(str)));
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    GC_register_finalizer(self,come_regex_finalizer,((void*)0),((void*)0),((void*)0));
    __result252__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str-gc.c", 53, "struct tuple2$2come_regexphvoidp"),self,((void*)0));
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphcharph* __result249__;
    self->v1=v1;
    self->v2=v2;
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphvoidp* __result251__;
    self->v1=v1;
    self->v2=v2;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result251__;
}

void come_regex_finalize(struct come_regex* reg){
    if(    reg&&reg->str) {
    }
    if(    reg&&reg->re) {
        free(reg->re);
    }
}

struct tuple2$2come_regexphcharph* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var1 = (void*)0;
struct come_regex* come_exception_var_b1_252=0;
char* Err_253=0;
struct come_regex* __null_value2;
struct tuple2$2come_regexphcharph* __result253__;
struct tuple2$2come_regexphcharph* __result254__;
memset(&__null_value2, 0, sizeof(struct come_regex*));
    multiple_assign_var1=come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 68, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    come_exception_var_b1_252=multiple_assign_var1->v1;
    Err_253=multiple_assign_var1->v2;
    if(    Err_253) {
        __result253__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str-gc.c", 68, "struct tuple2$2come_regexphcharph"),__null_value2,Err_253);
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    __result254__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str-gc.c", 68, "struct tuple2$2come_regexphvoidp"),come_exception_var_b1_252,((void*)0));
    gComeFunResultObject = (void*)0;
    return __result254__;
}

struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var2 = (void*)0;
struct come_regex* come_exception_var_b2_254=0;
char* Err_255=0;
struct come_regex* __null_value3;
struct tuple2$2come_regexphcharph* __result255__;
struct tuple2$2come_regexphcharph* __result256__;
memset(&__null_value3, 0, sizeof(struct come_regex*));
    multiple_assign_var2=come_regex_initialize((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 73, "come_regex"),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy);
    come_exception_var_b2_254=multiple_assign_var2->v1;
    Err_255=multiple_assign_var2->v2;
    if(    Err_255) {
        __result255__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str-gc.c", 73, "struct tuple2$2come_regexphcharph"),__null_value3,Err_255);
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    __result256__ = gComeFunResultObject = __result_obj__ = tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str-gc.c", 73, "struct tuple2$2come_regexphvoidp"),come_exception_var_b2_254,((void*)0));
    gComeFunResultObject = (void*)0;
    return __result256__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result257__;
struct come_regex* result_256;
const char* err_257;
int erro_ofs_258;
struct come_regex* __result258__;
err_257 = (void*)0;
memset(&erro_ofs_258, 0, sizeof(int));
    if(    reg==((void*)0)) {
        __result257__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    result_256=(struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str-gc.c", 83, "come_regex");
    result_256->str=string_clone(reg->str);
    result_256->ignore_case=reg->ignore_case;
    result_256->multiline=reg->multiline;
    result_256->global=reg->global;
    result_256->extended=reg->extended;
    result_256->dotall=reg->dotall;
    result_256->anchored=reg->anchored;
    result_256->dollar_endonly=reg->dollar_endonly;
    result_256->ungreedy=reg->ungreedy;
    result_256->options=reg->options;
    result_256->re=pcre_compile(result_256->str,result_256->options,&err_257,&erro_ofs_258,((void*)0));
    if(    result_256->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_256->str);
        stackframe();
        exit(1);
    }
    GC_register_finalizer(result_256,come_regex_finalizer,((void*)0),((void*)0),((void*)0));
    __result258__ = gComeFunResultObject = __result_obj__ = result_256;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

char* come_regex_to_string(struct come_regex* reg){
void* __result_obj__=(void*)0;
char* __result259__;
char* __result260__;
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result259__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    __result260__ = gComeFunResultObject = __result_obj__ = __builtin_string(reg->str);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
char* result_259;
int i_260;
char* __result261__;
    result_259=__builtin_string(str);
    for(    i_260=0;    i_260<strlen(str);    i_260++    ){
        if(        str[i_260]>=65&&str[i_260]<=90) {
            result_259[i_260]=str[i_260]-65+97;
        }
    }
    __result261__ = gComeFunResultObject = __result_obj__ = result_259;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
char* result_261;
int i_262;
char* __result262__;
    result_261=__builtin_string(str);
    for(    i_262=0;    i_262<strlen(str);    i_262++    ){
        if(        str[i_262]>=97&&str[i_262]<=122) {
            result_261[i_262]=str[i_262]-97+65;
        }
    }
    __result262__ = gComeFunResultObject = __result_obj__ = result_261;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

int* wchar_tp_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int* __result263__;
int len_263;
int* __result264__;
int* __result265__;
int* __result266__;
int* result_264;
int* __result267__;
    if(    str==((void*)0)) {
        __result263__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    len_263=wcslen(str);
    if(    head<0) {
        head+=len_263;
    }
    if(    tail<0) {
        tail+=len_263+1;
    }
    if(    head>tail) {
        __result264__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_263) {
        tail=len_263;
    }
    if(    head==tail) {
        __result265__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    if(    tail-head+1<1) {
        __result266__ = gComeFunResultObject = __result_obj__ = __builtin_wstring("");
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    result_264=(int*)come_calloc(1, sizeof(int)*(1*(tail-head+1)), "libcomelang-str-gc.c", 185, "int");
    memcpy(result_264,str+head,sizeof(int)*(tail-head));
    result_264[tail-head]=0;
    __result267__ = gComeFunResultObject = __result_obj__ = result_264;
    gComeFunResultObject = (void*)0;
    return __result267__;
}

int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
int* __result268__;
int len_265;
int* wstr_266;
int ret_267;
int* __result269__;
    if(    str==((void*)0)) {
        __result268__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    len_265=strlen(str);
    wstr_266=(int*)come_calloc(1, sizeof(int)*(1*(len_265+1)), "libcomelang-str-gc.c", 200, "int");
    ret_267=mbstowcs(wstr_266,str,len_265+1);
    wstr_266[ret_267]=0;
    if(    ret_267<0) {
        wstr_266[0]=0;
    }
    __result269__ = gComeFunResultObject = __result_obj__ = wstr_266;
    gComeFunResultObject = (void*)0;
    return __result269__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_268;
int len_269;
int i_270;
int len2_271;
int j_272;
memset(&j_272, 0, sizeof(int));
    n_268=0;
    len_269=strlen(str);
    for(    i_270=0;    i_270<len_269;    i_270++    ){
        len2_271=strlen(search_str);
        for(        j_272=0;        j_272<len2_271;        j_272++        ){
            if(            str[i_270+j_272]!=search_str[j_272]) {
                break;
            }
        }
        if(        j_272==len2_271) {
            n_268++;
            if(            n_268==count) {
                return i_270;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_273;
int result_277;
int offset_278;
const char* err_279;
int erro_ofs_280;
int options_281;
char* str_282;
struct real_pcre8_or_16* re_283;
int n_284;
int options_285;
int len_286;
int regex_result_287;
int i_288;
int i_289;
err_279 = (void*)0;
memset(&erro_ofs_280, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_273=16;
    int start_274[ovec_max_273];
    memset(&start_274, 0, sizeof(int)    *(ovec_max_273)    );
    int end_275[ovec_max_273];
    memset(&end_275, 0, sizeof(int)    *(ovec_max_273)    );
    int ovec_value_276[ovec_max_273*3];
    memset(&ovec_value_276, 0, sizeof(int)    *(ovec_max_273*3)    );
    result_277=default_value;
    offset_278=0;
    options_281=reg->options;
    str_282=reg->str;
    re_283=reg->re;
    n_284=0;
    while((_Bool)1) {
        options_285=2097152;
        len_286=strlen(self);
        regex_result_287=pcre_exec(re_283,(struct pcre_extra*)0,self,len_286,offset_278,options_285,ovec_value_276,ovec_max_273*3);
        for(        i_288=0;        i_288<ovec_max_273;        i_288++        ){
            start_274[i_288]=ovec_value_276[i_288*2];
        }
        for(        i_289=0;        i_289<ovec_max_273;        i_289++        ){
            end_275[i_289]=ovec_value_276[i_289*2+1];
        }
        if(        regex_result_287>0) {
            n_284++;
            if(            offset_278==end_275[0]) {
                offset_278++;
            }
            else {
                offset_278=end_275[0];
            }
            if(            n_284==count) {
                result_277=start_274[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_277;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_290;
char* p_291;
    len_290=strlen(search_str);
    p_291=str+strlen(str)-len_290;
    while(p_291>=str) {
        if(        strncmp(p_291,search_str,len_290)==0) {
            return p_291-str;
        }
        p_291--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_292;
int erro_ofs_293;
int options_294;
char* str_295;
struct real_pcre8_or_16* re_296;
char* self2_297;
int ovec_max_298;
int result_302;
int offset_303;
int options_304;
int len_305;
int regex_result_306;
int i_307;
int i_308;
err_292 = (void*)0;
memset(&erro_ofs_293, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_294=reg->options;
    str_295=reg->str;
    re_296=reg->re;
    self2_297=charp_reverse(self);
    ovec_max_298=16;
    int start_299[ovec_max_298];
    memset(&start_299, 0, sizeof(int)    *(ovec_max_298)    );
    int end_300[ovec_max_298];
    memset(&end_300, 0, sizeof(int)    *(ovec_max_298)    );
    int ovec_value_301[ovec_max_298*3];
    memset(&ovec_value_301, 0, sizeof(int)    *(ovec_max_298*3)    );
    result_302=default_value;
    offset_303=0;
    while((_Bool)1) {
        options_304=2097152;
        len_305=strlen(self2_297);
        regex_result_306=pcre_exec(re_296,(struct pcre_extra*)0,self2_297,len_305,offset_303,options_304,ovec_value_301,ovec_max_298*3);
        for(        i_307=0;        i_307<ovec_max_298;        i_307++        ){
            start_299[i_307]=ovec_value_301[i_307*2];
        }
        for(        i_308=0;        i_308<ovec_max_298;        i_308++        ){
            end_300[i_308]=ovec_value_301[i_308*2+1];
        }
        if(        regex_result_306==1||regex_result_306>0) {
            result_302=strlen(self)-1-start_299[0];
            break;
        }
        {
            break;
        }
    }
    return result_302;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_309;
char* p_310;
int n_311;
    len_309=strlen(search_str);
    p_310=str+strlen(str)-len_309;
    n_311=0;
    while(p_310>=str) {
        if(        strncmp(p_310,search_str,len_309)==0) {
            n_311++;
            if(            n_311==count) {
                return p_310-str;
            }
        }
        p_310--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result270__;
struct list$1charph* result_312;
int offset_313;
int ovec_max_314;
const char* err_318;
int erro_ofs_319;
int options_320;
char* str_321;
struct real_pcre8_or_16* re_322;
int options_323;
int len_324;
int regex_result_325;
int i_326;
int i_327;
char* str_328;
struct list$1charph* group_strings_329;
char* str2_330;
char* str_331;
struct list$1charph* group_strings_332;
int i_333;
char* match_string_334;
char* str2_335;
struct list$1charph* __result271__;
err_318 = (void*)0;
memset(&erro_ofs_319, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result270__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 395, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    result_312=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 398, "list$1charph"));
    offset_313=0;
    ovec_max_314=16;
    int start_315[ovec_max_314];
    memset(&start_315, 0, sizeof(int)    *(ovec_max_314)    );
    int end_316[ovec_max_314];
    memset(&end_316, 0, sizeof(int)    *(ovec_max_314)    );
    int ovec_value_317[ovec_max_314*3];
    memset(&ovec_value_317, 0, sizeof(int)    *(ovec_max_314*3)    );
    options_320=reg->options;
    str_321=reg->str;
    re_322=reg->re;
    while((_Bool)1) {
        options_323=2097152;
        len_324=strlen(self);
        regex_result_325=pcre_exec(re_322,(struct pcre_extra*)0,self,len_324,offset_313,options_323,ovec_value_317,ovec_max_314*3);
        for(        i_326=0;        i_326<ovec_max_314;        i_326++        ){
            start_315[i_326]=ovec_value_317[i_326*2];
        }
        for(        i_327=0;        i_327<ovec_max_314;        i_327++        ){
            end_316[i_327]=ovec_value_317[i_327*2+1];
        }
        if(        regex_result_325==1) {
            str_328=charp_substring(self,start_315[0],end_316[0]);
            group_strings_329=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 432, "list$1charph"));
            str2_330=block(parent,str_328,group_strings_329);
            list$1charph_push_back(result_312,str2_330);
            if(            offset_313==end_316[0]) {
                offset_313++;
            }
            else {
                offset_313=end_316[0];
            }
        }
        else if(        regex_result_325>1) {
            str_331=charp_substring(self,start_315[0],end_316[0]);
            group_strings_332=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 449, "list$1charph"));
            for(            i_333=1;            i_333<regex_result_325;            i_333++            ){
                match_string_334=charp_substring(self,start_315[i_333],end_316[i_333]);
                list$1charph_push_back(group_strings_332,match_string_334);
            }
            str2_335=block(parent,str_331,group_strings_332);
            list$1charph_push_back(result_312,str2_335);
            if(            offset_313==end_316[0]) {
                offset_313++;
            }
            else {
                offset_313=end_316[0];
            }
        }
        else {
            break;
        }
    }
    __result271__ = gComeFunResultObject = __result_obj__ = result_312;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result272__;
struct list$1charph* result_336;
int offset_337;
int ovec_max_338;
const char* err_342;
int erro_ofs_343;
int options_344;
char* str_345;
struct real_pcre8_or_16* re_346;
int n_347;
int options_348;
int len_349;
int regex_result_350;
int i_351;
int i_352;
char* str_353;
struct list$1charph* group_strings_354;
char* str2_355;
char* str_356;
struct list$1charph* group_strings_357;
int i_358;
char* match_string_359;
char* str2_360;
struct list$1charph* __result273__;
err_342 = (void*)0;
memset(&erro_ofs_343, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result272__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 480, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    result_336=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 483, "list$1charph"));
    offset_337=0;
    ovec_max_338=16;
    int start_339[ovec_max_338];
    memset(&start_339, 0, sizeof(int)    *(ovec_max_338)    );
    int end_340[ovec_max_338];
    memset(&end_340, 0, sizeof(int)    *(ovec_max_338)    );
    int ovec_value_341[ovec_max_338*3];
    memset(&ovec_value_341, 0, sizeof(int)    *(ovec_max_338*3)    );
    options_344=reg->options;
    str_345=reg->str;
    re_346=reg->re;
    n_347=0;
    while((_Bool)1) {
        options_348=2097152;
        len_349=strlen(self);
        regex_result_350=pcre_exec(re_346,(struct pcre_extra*)0,self,len_349,offset_337,options_348,ovec_value_341,ovec_max_338*3);
        for(        i_351=0;        i_351<ovec_max_338;        i_351++        ){
            start_339[i_351]=ovec_value_341[i_351*2];
        }
        for(        i_352=0;        i_352<ovec_max_338;        i_352++        ){
            end_340[i_352]=ovec_value_341[i_352*2+1];
        }
        if(        regex_result_350==1) {
            str_353=charp_substring(self,start_339[0],end_340[0]);
            group_strings_354=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 519, "list$1charph"));
            str2_355=block(parent,str_353,group_strings_354);
            list$1charph_push_back(result_336,str2_355);
            if(            offset_337==end_340[0]) {
                offset_337++;
            }
            else {
                offset_337=end_340[0];
            }
            n_347++;
            if(            n_347==count) {
                break;
            }
        }
        else if(        regex_result_350>1) {
            str_356=charp_substring(self,start_339[0],end_340[0]);
            group_strings_357=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 541, "list$1charph"));
            for(            i_358=1;            i_358<regex_result_350;            i_358++            ){
                match_string_359=charp_substring(self,start_339[i_358],end_340[i_358]);
                list$1charph_push_back(group_strings_357,match_string_359);
            }
            str2_360=block(parent,str_356,group_strings_357);
            list$1charph_push_back(result_336,str2_360);
            if(            offset_337==end_340[0]) {
                offset_337++;
            }
            else {
                offset_337=end_340[0];
            }
            n_347++;
            if(            n_347==count) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result273__ = gComeFunResultObject = __result_obj__ = result_336;
    gComeFunResultObject = (void*)0;
    return __result273__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result274__;
const char* err_361;
int erro_ofs_362;
int options_363;
char* str_364;
struct real_pcre8_or_16* re_365;
struct list$1charph* result_366;
int offset_367;
int ovec_max_368;
int options_372;
int len_373;
int regex_result_374;
int i_375;
int i_376;
char* str_377;
struct list$1charph* match_strings_378;
char* str2_379;
char* str_380;
struct list$1charph* match_strings_381;
int i_382;
char* match_str_383;
char* str2_384;
char* str_385;
struct list$1charph* match_strings_386;
char* str2_387;
struct list$1charph* __result275__;
err_361 = (void*)0;
memset(&erro_ofs_362, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result274__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 576, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    options_363=reg->options;
    str_364=reg->str;
    re_365=reg->re;
    result_366=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 586, "list$1charph"));
    offset_367=0;
    ovec_max_368=16;
    int start_369[ovec_max_368];
    memset(&start_369, 0, sizeof(int)    *(ovec_max_368)    );
    int end_370[ovec_max_368];
    memset(&end_370, 0, sizeof(int)    *(ovec_max_368)    );
    int ovec_value_371[ovec_max_368*3];
    memset(&ovec_value_371, 0, sizeof(int)    *(ovec_max_368*3)    );
    while((_Bool)1) {
        options_372=2097152;
        len_373=strlen(self);
        regex_result_374=pcre_exec(re_365,(struct pcre_extra*)0,self,len_373,offset_367,options_372,ovec_value_371,ovec_max_368*3);
        for(        i_375=0;        i_375<ovec_max_368;        i_375++        ){
            start_369[i_375]=ovec_value_371[i_375*2];
        }
        for(        i_376=0;        i_376<ovec_max_368;        i_376++        ){
            end_370[i_376]=ovec_value_371[i_376*2+1];
        }
        if(        regex_result_374==1) {
            str_377=charp_substring(self,offset_367,start_369[0]);
            match_strings_378=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 613, "list$1charph"));
            str2_379=block(parent,str_377,match_strings_378);
            list$1charph_push_back(result_366,str2_379);
            if(            offset_367==end_370[0]) {
                offset_367++;
            }
            else {
                offset_367=end_370[0];
            }
        }
        else if(        regex_result_374>1) {
            str_380=charp_substring(self,offset_367,start_369[0]);
            if(            offset_367==end_370[0]) {
                offset_367++;
            }
            else {
                offset_367=end_370[0];
            }
            match_strings_381=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 636, "list$1charph"));
            for(            i_382=1;            i_382<regex_result_374;            i_382++            ){
                match_str_383=charp_substring(self,start_369[i_382],end_370[i_382]);
                list$1charph_push_back(match_strings_381,match_str_383);
            }
            str2_384=block(parent,str_380,match_strings_381);
            list$1charph_push_back(result_366,str2_384);
        }
        else {
            break;
        }
    }
    if(    offset_367<charp_length(self)) {
        str_385=charp_substring(self,offset_367,-1);
        match_strings_386=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 655, "list$1charph"));
        str2_387=block(parent,str_385,match_strings_386);
        list$1charph_push_back(result_366,str2_387);
    }
    __result275__ = gComeFunResultObject = __result_obj__ = result_366;
    gComeFunResultObject = (void*)0;
    return __result275__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
struct list$1charph* __result276__;
const char* err_388;
int erro_ofs_389;
int options_390;
char* str_391;
struct real_pcre8_or_16* re_392;
struct list$1charph* result_393;
int offset_394;
int ovec_max_395;
int n_399;
int options_400;
int len_401;
int regex_result_402;
int i_403;
int i_404;
char* str_405;
struct list$1charph* match_strings_406;
char* str2_407;
char* str_408;
struct list$1charph* match_strings_409;
int i_410;
char* match_str_411;
char* str2_412;
struct list$1charph* __result277__;
err_388 = (void*)0;
memset(&erro_ofs_389, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result276__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 666, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    options_390=reg->options;
    str_391=reg->str;
    re_392=reg->re;
    result_393=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 676, "list$1charph"));
    offset_394=0;
    ovec_max_395=16;
    int start_396[ovec_max_395];
    memset(&start_396, 0, sizeof(int)    *(ovec_max_395)    );
    int end_397[ovec_max_395];
    memset(&end_397, 0, sizeof(int)    *(ovec_max_395)    );
    int ovec_value_398[ovec_max_395*3];
    memset(&ovec_value_398, 0, sizeof(int)    *(ovec_max_395*3)    );
    n_399=0;
    while((_Bool)1) {
        options_400=2097152;
        len_401=strlen(self);
        regex_result_402=pcre_exec(re_392,(struct pcre_extra*)0,self,len_401,offset_394,options_400,ovec_value_398,ovec_max_395*3);
        for(        i_403=0;        i_403<ovec_max_395;        i_403++        ){
            start_396[i_403]=ovec_value_398[i_403*2];
        }
        for(        i_404=0;        i_404<ovec_max_395;        i_404++        ){
            end_397[i_404]=ovec_value_398[i_404*2+1];
        }
        if(        regex_result_402==1) {
            str_405=charp_substring(self,offset_394,start_396[0]);
            match_strings_406=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 705, "list$1charph"));
            str2_407=block(parent,str_405,match_strings_406);
            list$1charph_push_back(result_393,str2_407);
            if(            offset_394==end_397[0]) {
                offset_394++;
            }
            else {
                offset_394=end_397[0];
            }
        }
        else if(        regex_result_402>1) {
            str_408=charp_substring(self,offset_394,start_396[0]);
            if(            offset_394==end_397[0]) {
                offset_394++;
            }
            else {
                offset_394=end_397[0];
            }
            match_strings_409=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 728, "list$1charph"));
            for(            i_410=1;            i_410<regex_result_402;            i_410++            ){
                match_str_411=charp_substring(self,start_396[i_410],end_397[i_410]);
                list$1charph_push_back(match_strings_409,match_str_411);
            }
            str2_412=block(parent,str_408,match_strings_409);
            list$1charph_push_back(result_393,str2_412);
        }
        else {
            break;
        }
        n_399++;
        if(        n_399==count) {
            break;
        }
    }
    __result277__ = gComeFunResultObject = __result_obj__ = result_393;
    gComeFunResultObject = (void*)0;
    return __result277__;
}

_Bool come_regex_equals(struct come_regex* left, struct come_regex* right){
    if(    left==((void*)0)||left->re==((void*)0)) {
        return (_Bool)0;
    }
    if(    right==((void*)0)||right->re==((void*)0)) {
        return (_Bool)0;
    }
    if(    left->ignore_case!=right->ignore_case) {
        return (_Bool)0;
    }
    if(    left->multiline!=right->multiline) {
        return (_Bool)0;
    }
    if(    left->global!=right->global) {
        return (_Bool)0;
    }
    if(    left->extended!=right->extended) {
        return (_Bool)0;
    }
    if(    left->dotall!=right->dotall) {
        return (_Bool)0;
    }
    if(    left->anchored!=right->anchored) {
        return (_Bool)0;
    }
    if(    left->dollar_endonly!=right->dollar_endonly) {
        return (_Bool)0;
    }
    if(    left->ungreedy!=right->ungreedy) {
        return (_Bool)0;
    }
    if(    left->options!=right->options) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct list$1charph* charp_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
struct list$1charph* __result278__;
struct list$1charph* result_413;
int offset_414;
int ovec_max_415;
const char* err_419;
int erro_ofs_420;
int options_421;
char* str_422;
struct real_pcre8_or_16* re_423;
int options_424;
int len_425;
int regex_result_426;
int i_427;
int i_428;
char* str_429;
char* str_430;
int i_431;
char* match_string_432;
struct list$1charph* __result279__;
err_419 = (void*)0;
memset(&erro_ofs_420, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result278__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 796, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    result_413=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 799, "list$1charph"));
    offset_414=0;
    ovec_max_415=16;
    int start_416[ovec_max_415];
    memset(&start_416, 0, sizeof(int)    *(ovec_max_415)    );
    int end_417[ovec_max_415];
    memset(&end_417, 0, sizeof(int)    *(ovec_max_415)    );
    int ovec_value_418[ovec_max_415*3];
    memset(&ovec_value_418, 0, sizeof(int)    *(ovec_max_415*3)    );
    options_421=reg->options;
    str_422=reg->str;
    re_423=reg->re;
    while((_Bool)1) {
        options_424=2097152;
        len_425=strlen(self);
        regex_result_426=pcre_exec(re_423,(struct pcre_extra*)0,self,len_425,offset_414,options_424,ovec_value_418,ovec_max_415*3);
        for(        i_427=0;        i_427<ovec_max_415;        i_427++        ){
            start_416[i_427]=ovec_value_418[i_427*2];
        }
        for(        i_428=0;        i_428<ovec_max_415;        i_428++        ){
            end_417[i_428]=ovec_value_418[i_428*2+1];
        }
        if(        regex_result_426==1) {
            str_429=charp_substring(self,start_416[0],end_417[0]);
            list$1charph_push_back(result_413,str_429);
            if(            offset_414==end_417[0]) {
                offset_414++;
            }
            else {
                offset_414=end_417[0];
            }
        }
        else if(        regex_result_426>1) {
            str_430=charp_substring(self,start_416[0],end_417[0]);
            list$1charph_push_back(result_413,str_430);
            if(            offset_414==end_417[0]) {
                offset_414++;
            }
            else {
                offset_414=end_417[0];
            }
            *num_group_string_in_regex=regex_result_426-1;
            for(            i_431=1;            i_431<regex_result_426;            i_431++            ){
                match_string_432=charp_substring(self,start_416[i_431],end_417[i_431]);
                list$1charph_push_back(group_strings,match_string_432);
            }
        }
        else {
            break;
        }
    }
    __result279__ = gComeFunResultObject = __result_obj__ = result_413;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
char* result_433;
int len_434;
char* __result280__;
    result_433=__builtin_string(self);
    len_434=strlen(self);
    if(    self[len_434-1]==10) {
        result_433[len_434-1]=0;
    }
    else if(    self[len_434-1]==13) {
        result_433[len_434-1]=0;
    }
    else if(    len_434>2&&self[len_434-2]==13&&self[len_434-1]==10) {
        result_433[len_434-2]=0;
    }
    __result280__ = gComeFunResultObject = __result_obj__ = result_433;
    gComeFunResultObject = (void*)0;
    return __result280__;
}

char* wchar_tp_to_string(int* wstr){
void* __result_obj__=(void*)0;
int len_440;
char* result_441;
char* __result282__;
    len_440=6*(wcslen(wstr)+1);
    result_441=(char*)come_calloc(1, sizeof(char)*(1*(len_440)), "libcomelang-str-gc.c", 919, "char");
    if(    wcstombs(result_441,wstr,len_440)<0) {
        strncpy(result_441,"",len_440);
    }
    __result282__ = gComeFunResultObject = __result_obj__ = result_441;
    gComeFunResultObject = (void*)0;
    return __result282__;
}

int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
int* __result283__;
    __result283__ = gComeFunResultObject = __result_obj__ = __builtin_wstring(str);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

int wchar_tp_length(int* str){
    return wcslen(str);
}

int* wchar_tp_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_442;
int* __result284__;
int* __result285__;
int* sub_str_443;
int* __result286__;
    len_442=wcslen(str);
    if(    len_442==0) {
        __result284__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    if(    head<0) {
        head+=len_442;
    }
    if(    tail<0) {
        tail+=len_442+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result285__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    if(    tail>=len_442) {
        tail=len_442;
    }
    sub_str_443=wchar_tp_substring(str,tail,-1);
    memcpy(str+head,sub_str_443,sizeof(int)*(wstring_length(sub_str_443)+1));
    __result286__ = gComeFunResultObject = __result_obj__ = string_to_wstring(wchar_tp_to_string(str));
    gComeFunResultObject = (void*)0;
    return __result286__;
}

int wchar_tp_index(int* str, int* search_str, int default_value){
int* head_444;
    head_444=wcsstr(str,search_str);
    if(    head_444==((void*)0)) {
        return default_value;
    }
    return head_444-str;
}

int wchar_tp_rindex(int* str, int* search_str, int default_value){
int len_445;
int* p_446;
int len2_447;
_Bool result_448;
int i_449;
memset(&i_449, 0, sizeof(int));
    len_445=wcslen(search_str);
    p_446=str+wcslen(str)-len_445;
    while(p_446>=str) {
        len2_447=wcslen(p_446);
        result_448=(_Bool)1;
        for(        i_449=0;        i_449<len_445&&i_449<len2_447;        i_449++        ){
            if(            p_446[i_449]!=search_str[i_449]) {
                result_448=(_Bool)0;
            }
        }
        if(        result_448) {
            return (p_446-str);
        }
        p_446--;
    }
    return default_value;
}

int* wchar_tp_reverse(int* str){
void* __result_obj__=(void*)0;
int len_450;
int* result_451;
int i_452;
int* __result287__;
    len_450=wcslen(str);
    result_451=(int*)come_calloc(1, sizeof(int)*(1*(len_450+1)), "libcomelang-str-gc.c", 1019, "int");
    for(    i_452=0;    i_452<len_450;    i_452++    ){
        result_451[i_452]=str[len_450-i_452-1];
    }
    result_451[len_450]=0;
    __result287__ = gComeFunResultObject = __result_obj__ = result_451;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

int* wchar_tp_multiply(int* str, int n){
void* __result_obj__=(void*)0;
int len_453;
int* result_454;
int i_455;
int* __result288__;
    len_453=wcslen(str)*n+1;
    result_454=(int*)come_calloc(1, sizeof(int)*(1*(len_453)), "libcomelang-str-gc.c", 1034, "int");
    result_454[0]=0;
    for(    i_455=0;    i_455<n;    i_455++    ){
        wcscat(result_454,str);
    }
    __result288__ = gComeFunResultObject = __result_obj__ = result_454;
    gComeFunResultObject = (void*)0;
    return __result288__;
}

int* wchar_tp_printable(int* str){
void* __result_obj__=(void*)0;
int len_456;
int* result_457;
int n_458;
int i_459;
int c_460;
int* __result289__;
    len_456=wchar_tp_length(str);
    result_457=(int*)come_calloc(1, sizeof(int)*(1*(len_456*2+1)), "libcomelang-str-gc.c", 1048, "int");
    n_458=0;
    for(    i_459=0;    i_459<len_456;    i_459++    ){
        c_460=str[i_459];
        if(        (c_460>=0&&c_460<32)||c_460==127) {
            result_457[n_458++]=94;
            result_457[n_458++]=c_460+65-1;
        }
        else {
            result_457[n_458++]=c_460;
        }
    }
    result_457[n_458]=0;
    __result289__ = gComeFunResultObject = __result_obj__ = result_457;
    gComeFunResultObject = (void*)0;
    return __result289__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_461;
int ovec_max_462;
const char* err_466;
int erro_ofs_467;
int options_468;
char* str_469;
struct real_pcre8_or_16* re_470;
int n_471;
int options_472;
int len_473;
int regex_result_474;
int i_475;
int i_476;
int i_479;
char* match_string_480;
err_466 = (void*)0;
memset(&erro_ofs_467, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_461=0;
    ovec_max_462=16;
    int start_463[ovec_max_462];
    memset(&start_463, 0, sizeof(int)    *(ovec_max_462)    );
    int end_464[ovec_max_462];
    memset(&end_464, 0, sizeof(int)    *(ovec_max_462)    );
    int ovec_value_465[ovec_max_462*3];
    memset(&ovec_value_465, 0, sizeof(int)    *(ovec_max_462*3)    );
    options_468=reg->options;
    str_469=reg->str;
    re_470=reg->re;
    n_471=0;
    while((_Bool)1) {
        options_472=2097152;
        len_473=strlen(self);
        regex_result_474=pcre_exec(re_470,(struct pcre_extra*)0,self,len_473,offset_461,options_472,ovec_value_465,ovec_max_462*3);
        for(        i_475=0;        i_475<ovec_max_462;        i_475++        ){
            start_463[i_475]=ovec_value_465[i_475*2];
        }
        for(        i_476=0;        i_476<ovec_max_462;        i_476++        ){
            end_464[i_476]=ovec_value_465[i_476*2+1];
        }
        if(        regex_result_474==1||(group_strings==((void*)0)&&regex_result_474>0)) {
            n_471++;
            if(            n_471==count) {
                return (_Bool)1;
            }
            if(            offset_461==end_464[0]) {
                offset_461++;
            }
            else {
                offset_461=end_464[0];
            }
        }
        else if(        regex_result_474>1) {
            n_471++;
            list$1charph_reset(group_strings);
            for(            i_479=1;            i_479<regex_result_474;            i_479++            ){
                match_string_480=charp_substring(self,start_463[i_479],end_464[i_479]);
                list$1charph_push_back(group_strings,match_string_480);
            }
            if(            n_471==count) {
                return (_Bool)1;
            }
            if(            offset_461==end_464[0]) {
                offset_461++;
            }
            else {
                offset_461=end_464[0];
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_477;
struct list_item$1charph* prev_it_478;
struct list$1charph* __result290__;
    it_477=self->head;
    while(it_477!=((void*)0)) {
        prev_it_478=it_477;
        it_477=it_477->next;
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

int wchar_tp_compare(int* left, int* right){
    return wcscmp(left,right);
}

int wstring_compare(int* left, int* right){
    return wcscmp(left,right);
}

unsigned int come_regex_get_hash_key(struct come_regex* reg){
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return 0;
    }
    return string_get_hash_key(reg->str);
}

_Bool wchar_tp_equals(int left, int right){
    return left==right;
}

int* wchar_tp_operator_mult(int* str, int n){
void* __result_obj__=(void*)0;
int* __result291__;
    __result291__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

int* wstring_operator_mult(int* str, int n){
void* __result_obj__=(void*)0;
int* __result292__;
    __result292__ = gComeFunResultObject = __result_obj__ = wchar_tp_multiply(str,n);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

_Bool wchar_tp_operator_equals(int* left, int* right){
    return wcscmp(left,right)==0;
}

_Bool wstring_operator_equals(int* left, int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_tp_operator_not_equals(int* left, int* right){
    return wcscmp(left,right)!=0;
}

_Bool wstring_operator_not_equals(int* left, int* right){
    return wcscmp(left,right)!=0;
}

_Bool come_regex_operator_equals(struct come_regex* left, struct come_regex* right){
    return come_regex_equals(left,right);
}

_Bool come_regex_operator_not_equals(struct come_regex* left, struct come_regex* right){
    return !come_regex_equals(left,right);
}

int* wchar_tp_operator_add(int* left, int* right){
void* __result_obj__=(void*)0;
int* result_481;
int* __result293__;
    result_481=(int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str-gc.c", 1219, "int");
    wcscpy(result_481,left);
    wcscat(result_481,right);
    __result293__ = gComeFunResultObject = __result_obj__ = result_481;
    gComeFunResultObject = (void*)0;
    return __result293__;
}

int* wstring_operator_add(int* left, int* right){
void* __result_obj__=(void*)0;
int* result_482;
int* __result294__;
    result_482=(int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str-gc.c", 1229, "int");
    wcscpy(result_482,left);
    wcscat(result_482,right);
    __result294__ = gComeFunResultObject = __result_obj__ = result_482;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_483;
    head_483=strstr(str,search_str);
    if(    head_483==((void*)0)) {
        return default_value;
    }
    return head_483-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_484;
int result_488;
int offset_489;
const char* err_490;
int erro_ofs_491;
int options_492;
char* str_493;
struct real_pcre8_or_16* re_494;
int options_495;
int len_496;
int regex_result_497;
int i_498;
int i_499;
err_490 = (void*)0;
memset(&erro_ofs_491, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_484=16;
    int start_485[ovec_max_484];
    memset(&start_485, 0, sizeof(int)    *(ovec_max_484)    );
    int end_486[ovec_max_484];
    memset(&end_486, 0, sizeof(int)    *(ovec_max_484)    );
    int ovec_value_487[ovec_max_484*3];
    memset(&ovec_value_487, 0, sizeof(int)    *(ovec_max_484*3)    );
    result_488=default_value;
    offset_489=0;
    options_492=reg->options;
    str_493=reg->str;
    re_494=reg->re;
    while((_Bool)1) {
        options_495=2097152;
        len_496=strlen(self);
        regex_result_497=pcre_exec(re_494,(struct pcre_extra*)0,self,len_496,offset_489,options_495,ovec_value_487,ovec_max_484*3);
        for(        i_498=0;        i_498<ovec_max_484;        i_498++        ){
            start_485[i_498]=ovec_value_487[i_498*2];
        }
        for(        i_499=0;        i_499<ovec_max_484;        i_499++        ){
            end_486[i_499]=ovec_value_487[i_499*2+1];
        }
        if(        regex_result_497==1||regex_result_497>0) {
            result_488=start_485[0];
            break;
        }
        {
            break;
        }
    }
    return result_488;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_500;
char* __result295__;
char* __result296__;
    len_500=strlen(self);
    if(    strcmp(self,"")==0) {
        __result295__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    if(    index<0) {
        index+=len_500;
    }
    if(    index>=len_500) {
        index=len_500-1;
    }
    if(    index<0) {
        index=0;
    }
    self[index]=c;
    __result296__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_501;
char* result_502;
int i_503;
char* __result297__;
    len_501=strlen(str)*n+1;
    result_502=(char*)come_calloc(1, sizeof(char)*(1*(len_501)), "libcomelang-str-gc.c", 1330, "char");
    result_502[0]=0;
    for(    i_503=0;    i_503<n;    i_503++    ){
        strcat(result_502,str);
    }
    __result297__ = gComeFunResultObject = __result_obj__ = result_502;
    gComeFunResultObject = (void*)0;
    return __result297__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
char* __result298__;
int offset_504;
int ovec_max_505;
const char* err_509;
int erro_ofs_510;
int options_511;
char* str_512;
struct real_pcre8_or_16* re_513;
struct buffer* result_514;
int options_515;
int len_516;
int regex_result_517;
int i_518;
int i_519;
char* str_520;
char* str_521;
char* str_522;
char* __result299__;
err_509 = (void*)0;
memset(&erro_ofs_510, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result298__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    offset_504=0;
    ovec_max_505=16;
    int start_506[ovec_max_505];
    memset(&start_506, 0, sizeof(int)    *(ovec_max_505)    );
    int end_507[ovec_max_505];
    memset(&end_507, 0, sizeof(int)    *(ovec_max_505)    );
    int ovec_value_508[ovec_max_505*3];
    memset(&ovec_value_508, 0, sizeof(int)    *(ovec_max_505*3)    );
    options_511=reg->options;
    str_512=reg->str;
    re_513=reg->re;
    result_514=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1361, "buffer"));
    while((_Bool)1) {
        options_515=2097152;
        len_516=strlen(self);
        regex_result_517=pcre_exec(re_513,(struct pcre_extra*)0,self,len_516,offset_504,options_515,ovec_value_508,ovec_max_505*3);
        for(        i_518=0;        i_518<ovec_max_505;        i_518++        ){
            start_506[i_518]=ovec_value_508[i_518*2];
        }
        for(        i_519=0;        i_519<ovec_max_505;        i_519++        ){
            end_507[i_519]=ovec_value_508[i_519*2+1];
        }
        if(        regex_result_517==1) {
            str_520=charp_substring(self,offset_504,start_506[0]);
            buffer_append_str(result_514,str_520);
            buffer_append_str(result_514,replace);
            if(            offset_504==end_507[0]) {
                offset_504++;
            }
            else {
                offset_504=end_507[0];
            }
            if(            !reg->global) {
                str_521=charp_substring(self,offset_504,-1);
                buffer_append_str(result_514,str_521);
                break;
            }
        }
        else {
            str_522=charp_substring(self,offset_504,-1);
            buffer_append_str(result_514,str_522);
            break;
        }
    }
    __result299__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_514);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
char* __result300__;
int offset_523;
int ovec_max_524;
const char* err_528;
int erro_ofs_529;
int options_530;
char* str_531;
struct real_pcre8_or_16* re_532;
struct buffer* result_533;
int n_534;
int options_535;
int len_536;
int regex_result_537;
int i_538;
int i_539;
char* str_540;
char* str_541;
char* str_542;
char* str_543;
char* __result301__;
err_528 = (void*)0;
memset(&erro_ofs_529, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result300__ = gComeFunResultObject = __result_obj__ = __builtin_string(self);
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    offset_523=0;
    ovec_max_524=16;
    int start_525[ovec_max_524];
    memset(&start_525, 0, sizeof(int)    *(ovec_max_524)    );
    int end_526[ovec_max_524];
    memset(&end_526, 0, sizeof(int)    *(ovec_max_524)    );
    int ovec_value_527[ovec_max_524*3];
    memset(&ovec_value_527, 0, sizeof(int)    *(ovec_max_524*3)    );
    options_530=reg->options;
    str_531=reg->str;
    re_532=reg->re;
    result_533=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1427, "buffer"));
    n_534=0;
    while((_Bool)1) {
        options_535=2097152;
        len_536=strlen(self);
        regex_result_537=pcre_exec(re_532,(struct pcre_extra*)0,self,len_536,offset_523,options_535,ovec_value_527,ovec_max_524*3);
        for(        i_538=0;        i_538<ovec_max_524;        i_538++        ){
            start_525[i_538]=ovec_value_527[i_538*2];
        }
        for(        i_539=0;        i_539<ovec_max_524;        i_539++        ){
            end_526[i_539]=ovec_value_527[i_539*2+1];
        }
        if(        regex_result_537==1) {
            n_534++;
            str_540=charp_substring(self,offset_523,start_525[0]);
            buffer_append_str(result_533,str_540);
            buffer_append_str(result_533,replace);
            if(            offset_523==end_526[0]) {
                offset_523++;
            }
            else {
                offset_523=end_526[0];
            }
            if(            !reg->global) {
                str_541=charp_substring(self,offset_523,-1);
                buffer_append_str(result_533,str_541);
                break;
            }
            if(            n_534==count) {
                str_542=charp_substring(self,offset_523,-1);
                buffer_append_str(result_533,str_542);
                break;
            }
        }
        else {
            str_543=charp_substring(self,offset_523,-1);
            buffer_append_str(result_533,str_543);
            break;
        }
    }
    __result301__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_533);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
struct list$1charph* result_544;
struct buffer* buf_545;
int i_546;
struct list$1charph* __result302__;
    result_544=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1486, "list$1charph"));
    buf_545=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1488, "buffer"));
    for(    i_546=0;    i_546<charp_length(self);    i_546++    ){
        if(        strstr(self+i_546,str)==self+i_546) {
            list$1charph_push_back(result_544,__builtin_string(buf_545->buf));
            buffer_reset(buf_545);
            i_546+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_545,self[i_546]);
        }
    }
    if(    buffer_length(buf_545)!=0) {
        list$1charph_push_back(result_544,__builtin_string(buf_545->buf));
    }
    __result302__ = gComeFunResultObject = __result_obj__ = result_544;
    gComeFunResultObject = (void*)0;
    return __result302__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result303__;
struct list$1charph* result_547;
int offset_548;
int ovec_max_549;
const char* err_553;
int erro_ofs_554;
int options_555;
char* str_556;
struct real_pcre8_or_16* re_557;
int options_558;
int len_559;
int regex_result_560;
int i_561;
int i_562;
char* str_563;
char* str_564;
int i_565;
char* match_string_566;
struct list$1charph* __result304__;
err_553 = (void*)0;
memset(&erro_ofs_554, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result303__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1510, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    result_547=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1512, "list$1charph"));
    offset_548=0;
    ovec_max_549=16;
    int start_550[ovec_max_549];
    memset(&start_550, 0, sizeof(int)    *(ovec_max_549)    );
    int end_551[ovec_max_549];
    memset(&end_551, 0, sizeof(int)    *(ovec_max_549)    );
    int ovec_value_552[ovec_max_549*3];
    memset(&ovec_value_552, 0, sizeof(int)    *(ovec_max_549*3)    );
    options_555=reg->options;
    str_556=reg->str;
    re_557=reg->re;
    while((_Bool)1) {
        options_558=2097152;
        len_559=strlen(self);
        regex_result_560=pcre_exec(re_557,(struct pcre_extra*)0,self,len_559,offset_548,options_558,ovec_value_552,ovec_max_549*3);
        for(        i_561=0;        i_561<ovec_max_549;        i_561++        ){
            start_550[i_561]=ovec_value_552[i_561*2];
        }
        for(        i_562=0;        i_562<ovec_max_549;        i_562++        ){
            end_551[i_562]=ovec_value_552[i_562*2+1];
        }
        if(        regex_result_560==1) {
            str_563=charp_substring(self,start_550[0],end_551[0]);
            list$1charph_push_back(result_547,str_563);
            if(            offset_548==end_551[0]) {
                offset_548++;
            }
            else {
                offset_548=end_551[0];
            }
        }
        else if(        regex_result_560>1) {
            str_564=charp_substring(self,start_550[0],end_551[0]);
            list$1charph_push_back(result_547,str_564);
            if(            offset_548==end_551[0]) {
                offset_548++;
            }
            else {
                offset_548=end_551[0];
            }
            for(            i_565=1;            i_565<regex_result_560;            i_565++            ){
                match_string_566=charp_substring(self,start_550[i_565],end_551[i_565]);
                list$1charph_push_back(result_547,match_string_566);
            }
        }
        else {
            break;
        }
    }
    __result304__ = gComeFunResultObject = __result_obj__ = result_547;
    gComeFunResultObject = (void*)0;
    return __result304__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
struct list$1charph* __result305__;
const char* err_567;
int erro_ofs_568;
int options_569;
char* str_570;
struct real_pcre8_or_16* re_571;
struct list$1charph* result_572;
int offset_573;
int ovec_max_574;
int options_578;
int len_579;
int regex_result_580;
int i_581;
int i_582;
char* str_583;
char* str_584;
int i_585;
char* match_str_586;
char* str_587;
struct list$1charph* __result306__;
err_567 = (void*)0;
memset(&erro_ofs_568, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result305__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1586, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    options_569=reg->options;
    str_570=reg->str;
    re_571=reg->re;
    result_572=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1596, "list$1charph"));
    offset_573=0;
    ovec_max_574=16;
    int start_575[ovec_max_574];
    memset(&start_575, 0, sizeof(int)    *(ovec_max_574)    );
    int end_576[ovec_max_574];
    memset(&end_576, 0, sizeof(int)    *(ovec_max_574)    );
    int ovec_value_577[ovec_max_574*3];
    memset(&ovec_value_577, 0, sizeof(int)    *(ovec_max_574*3)    );
    while((_Bool)1) {
        options_578=2097152;
        len_579=strlen(self);
        regex_result_580=pcre_exec(re_571,(struct pcre_extra*)0,self,len_579,offset_573,options_578,ovec_value_577,ovec_max_574*3);
        for(        i_581=0;        i_581<ovec_max_574;        i_581++        ){
            start_575[i_581]=ovec_value_577[i_581*2];
        }
        for(        i_582=0;        i_582<ovec_max_574;        i_582++        ){
            end_576[i_582]=ovec_value_577[i_582*2+1];
        }
        if(        regex_result_580==1) {
            str_583=charp_substring(self,offset_573,start_575[0]);
            list$1charph_push_back(result_572,str_583);
            if(            offset_573==end_576[0]) {
                offset_573++;
            }
            else {
                offset_573=end_576[0];
            }
        }
        else if(        regex_result_580>1) {
            str_584=charp_substring(self,offset_573,start_575[0]);
            list$1charph_push_back(result_572,str_584);
            if(            offset_573==end_576[0]) {
                offset_573++;
            }
            else {
                offset_573=end_576[0];
            }
            for(            i_585=1;            i_585<regex_result_580;            i_585++            ){
                match_str_586=charp_substring(self,start_575[i_585],end_576[i_585]);
                list$1charph_push_back(result_572,match_str_586);
            }
        }
        else {
            break;
        }
    }
    if(    offset_573<charp_length(self)) {
        str_587=charp_substring(self,offset_573,-1);
        list$1charph_push_back(result_572,str_587);
    }
    __result306__ = gComeFunResultObject = __result_obj__ = result_572;
    gComeFunResultObject = (void*)0;
    return __result306__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_588;
int ovec_max_589;
const char* err_593;
int erro_ofs_594;
int options_595;
char* str_596;
struct real_pcre8_or_16* re_597;
int options_598;
int len_599;
int regex_result_600;
int i_601;
int i_602;
err_593 = (void*)0;
memset(&erro_ofs_594, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_588=0;
    ovec_max_589=16;
    int start_590[ovec_max_589];
    memset(&start_590, 0, sizeof(int)    *(ovec_max_589)    );
    int end_591[ovec_max_589];
    memset(&end_591, 0, sizeof(int)    *(ovec_max_589)    );
    int ovec_value_592[ovec_max_589*3];
    memset(&ovec_value_592, 0, sizeof(int)    *(ovec_max_589*3)    );
    options_595=reg->options;
    str_596=reg->str;
    re_597=reg->re;
    while((_Bool)1) {
        options_598=2097152;
        len_599=strlen(self);
        regex_result_600=pcre_exec(re_597,(struct pcre_extra*)0,self,len_599,offset_588,options_598,ovec_value_592,ovec_max_589*3);
        for(        i_601=0;        i_601<ovec_max_589;        i_601++        ){
            start_590[i_601]=ovec_value_592[i_601*2];
        }
        for(        i_602=0;        i_602<ovec_max_589;        i_602++        ){
            end_591[i_602]=ovec_value_592[i_602*2+1];
        }
        if(        regex_result_600>0) {
            return (_Bool)1;
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

struct list$1charph* charp_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
struct list$1charph* __result307__;
const char* err_603;
int erro_ofs_604;
int options_605;
char* str_606;
struct real_pcre8_or_16* re_607;
struct list$1charph* result_608;
int offset_609;
int ovec_max_610;
int n_614;
int options_615;
int len_616;
int regex_result_617;
int i_618;
int i_619;
char* str_620;
char* str_621;
int i_622;
char* match_str_623;
char* str_624;
struct list$1charph* __result308__;
err_603 = (void*)0;
memset(&erro_ofs_604, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result307__ = gComeFunResultObject = __result_obj__ = list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1714, "list$1charph"));
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    options_605=reg->options;
    str_606=reg->str;
    re_607=reg->re;
    result_608=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1724, "list$1charph"));
    offset_609=0;
    ovec_max_610=16;
    int start_611[ovec_max_610];
    memset(&start_611, 0, sizeof(int)    *(ovec_max_610)    );
    int end_612[ovec_max_610];
    memset(&end_612, 0, sizeof(int)    *(ovec_max_610)    );
    int ovec_value_613[ovec_max_610*3];
    memset(&ovec_value_613, 0, sizeof(int)    *(ovec_max_610*3)    );
    n_614=0;
    while((_Bool)1) {
        options_615=2097152;
        len_616=strlen(self);
        regex_result_617=pcre_exec(re_607,(struct pcre_extra*)0,self,len_616,offset_609,options_615,ovec_value_613,ovec_max_610*3);
        for(        i_618=0;        i_618<ovec_max_610;        i_618++        ){
            start_611[i_618]=ovec_value_613[i_618*2];
        }
        for(        i_619=0;        i_619<ovec_max_610;        i_619++        ){
            end_612[i_619]=ovec_value_613[i_619*2+1];
        }
        if(        regex_result_617==1) {
            str_620=charp_substring(self,offset_609,start_611[0]);
            list$1charph_push_back(result_608,str_620);
            if(            offset_609==end_612[0]) {
                offset_609++;
            }
            else {
                offset_609=end_612[0];
            }
        }
        else if(        regex_result_617>1) {
            str_621=charp_substring(self,offset_609,start_611[0]);
            list$1charph_push_back(result_608,str_621);
            if(            offset_609==end_612[0]) {
                offset_609++;
            }
            else {
                offset_609=end_612[0];
            }
            for(            i_622=1;            i_622<regex_result_617;            i_622++            ){
                match_str_623=charp_substring(self,start_611[i_622],end_612[i_622]);
                list$1charph_push_back(result_608,match_str_623);
            }
        }
        else {
            break;
        }
        n_614++;
        if(        maxsplit==n_614) {
            break;
        }
    }
    if(    offset_609<charp_length(self)) {
        str_624=charp_substring(self,offset_609,-1);
        list$1charph_push_back(result_608,str_624);
    }
    __result308__ = gComeFunResultObject = __result_obj__ = result_608;
    gComeFunResultObject = (void*)0;
    return __result308__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_625;
int erro_ofs_626;
int options_627;
char* str_628;
struct real_pcre8_or_16* re_629;
char* self2_630;
int ovec_max_631;
int result_635;
int offset_636;
int n_637;
int options_638;
int len_639;
int regex_result_640;
int i_641;
int i_642;
err_625 = (void*)0;
memset(&erro_ofs_626, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_627=reg->options;
    str_628=reg->str;
    re_629=reg->re;
    self2_630=charp_reverse(self);
    ovec_max_631=16;
    int start_632[ovec_max_631];
    memset(&start_632, 0, sizeof(int)    *(ovec_max_631)    );
    int end_633[ovec_max_631];
    memset(&end_633, 0, sizeof(int)    *(ovec_max_631)    );
    int ovec_value_634[ovec_max_631*3];
    memset(&ovec_value_634, 0, sizeof(int)    *(ovec_max_631*3)    );
    result_635=default_value;
    offset_636=0;
    n_637=0;
    while((_Bool)1) {
        options_638=2097152;
        len_639=strlen(self2_630);
        regex_result_640=pcre_exec(re_629,(struct pcre_extra*)0,self2_630,len_639,offset_636,options_638,ovec_value_634,ovec_max_631*3);
        for(        i_641=0;        i_641<ovec_max_631;        i_641++        ){
            start_632[i_641]=ovec_value_634[i_641*2];
        }
        for(        i_642=0;        i_642<ovec_max_631;        i_642++        ){
            end_633[i_642]=ovec_value_634[i_642*2+1];
        }
        if(        regex_result_640>0) {
            n_637++;
            if(            offset_636==end_633[0]) {
                offset_636++;
            }
            else {
                offset_636=end_633[0];
            }
            if(            n_637==count) {
                result_635=strlen(self)-end_633[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_635;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_643;
int ovec_max_644;
const char* err_648;
int erro_ofs_649;
int options_650;
char* str_651;
struct real_pcre8_or_16* re_652;
int n_653;
int options_654;
int len_655;
int regex_result_656;
int i_657;
int i_658;
err_648 = (void*)0;
memset(&erro_ofs_649, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_643=0;
    ovec_max_644=16;
    int start_645[ovec_max_644];
    memset(&start_645, 0, sizeof(int)    *(ovec_max_644)    );
    int end_646[ovec_max_644];
    memset(&end_646, 0, sizeof(int)    *(ovec_max_644)    );
    int ovec_value_647[ovec_max_644*3];
    memset(&ovec_value_647, 0, sizeof(int)    *(ovec_max_644*3)    );
    options_650=reg->options;
    str_651=reg->str;
    re_652=reg->re;
    n_653=0;
    while((_Bool)1) {
        options_654=2097152;
        len_655=strlen(self);
        regex_result_656=pcre_exec(re_652,(struct pcre_extra*)0,self,len_655,offset_643,options_654,ovec_value_647,ovec_max_644*3);
        for(        i_657=0;        i_657<ovec_max_644;        i_657++        ){
            start_645[i_657]=ovec_value_647[i_657*2];
        }
        for(        i_658=0;        i_658<ovec_max_644;        i_658++        ){
            end_646[i_658]=ovec_value_647[i_658*2+1];
        }
        if(        regex_result_656>0) {
            n_653++;
            if(            count==n_653) {
                return (_Bool)1;
            }
            if(            offset_643==end_646[0]) {
                offset_643++;
            }
            else {
                offset_643=end_646[0];
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

char* charp_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
char* __result309__;
int offset_659;
int ovec_max_660;
const char* err_664;
int erro_ofs_665;
int options_666;
char* str_667;
struct real_pcre8_or_16* re_668;
struct buffer* result_669;
int options_670;
int len_671;
int regex_result_672;
int i_673;
int i_674;
char* str_675;
struct list$1charph* group_strings_676;
char* match_string_677;
char* block_result_678;
char* str_679;
char* str_680;
struct list$1charph* group_strings_681;
int i_682;
char* match_string_683;
char* match_string_684;
char* block_result_685;
char* str_686;
char* str_687;
char* __result310__;
err_664 = (void*)0;
memset(&erro_ofs_665, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result309__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    offset_659=0;
    ovec_max_660=16;
    int start_661[ovec_max_660];
    memset(&start_661, 0, sizeof(int)    *(ovec_max_660)    );
    int end_662[ovec_max_660];
    memset(&end_662, 0, sizeof(int)    *(ovec_max_660)    );
    int ovec_value_663[ovec_max_660*3];
    memset(&ovec_value_663, 0, sizeof(int)    *(ovec_max_660*3)    );
    options_666=reg->options;
    str_667=reg->str;
    re_668=reg->re;
    result_669=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 1945, "buffer"));
    while((_Bool)1) {
        options_670=2097152;
        len_671=strlen(self);
        regex_result_672=pcre_exec(re_668,(struct pcre_extra*)0,self,len_671,offset_659,options_670,ovec_value_663,ovec_max_660*3);
        for(        i_673=0;        i_673<ovec_max_660;        i_673++        ){
            start_661[i_673]=ovec_value_663[i_673*2];
        }
        for(        i_674=0;        i_674<ovec_max_660;        i_674++        ){
            end_662[i_674]=ovec_value_663[i_674*2+1];
        }
        if(        regex_result_672==1) {
            str_675=charp_substring(self,offset_659,start_661[0]);
            buffer_append_str(result_669,str_675);
            group_strings_676=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 1965, "list$1charph"));
            match_string_677=charp_substring(self,start_661[0],end_662[0]);
            list$1charph_push_back(group_strings_676,charp_substring(self,start_661[0],end_662[0]));
            block_result_678=block(parent,match_string_677,group_strings_676);
            buffer_append_str(result_669,block_result_678);
            if(            offset_659==end_662[0]) {
                offset_659++;
            }
            else {
                offset_659=end_662[0];
            }
            if(            !reg->global) {
                str_679=charp_substring(self,offset_659,-1);
                buffer_append_str(result_669,str_679);
                break;
            }
        }
        else if(        regex_result_672>1) {
            str_680=charp_substring(self,offset_659,start_661[0]);
            buffer_append_str(result_669,str_680);
            if(            offset_659==end_662[0]) {
                offset_659++;
            }
            else {
                offset_659=end_662[0];
            }
            group_strings_681=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 2000, "list$1charph"));
            for(            i_682=1;            i_682<regex_result_672;            i_682++            ){
                match_string_683=charp_substring(self,start_661[i_682],end_662[i_682]);
                list$1charph_push_back(group_strings_681,match_string_683);
            }
            match_string_684=charp_substring(self,start_661[0],end_662[0]);
            block_result_685=block(parent,match_string_684,group_strings_681);
            buffer_append_str(result_669,block_result_685);
            if(            !reg->global) {
                str_686=charp_substring(self,offset_659,-1);
                buffer_append_str(result_669,str_686);
                break;
            }
        }
        else {
            str_687=charp_substring(self,offset_659,-1);
            buffer_append_str(result_669,str_687);
            break;
        }
    }
    __result310__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_669);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
char* __result311__;
int offset_688;
int ovec_max_689;
const char* err_693;
int erro_ofs_694;
int options_695;
char* str_696;
struct real_pcre8_or_16* re_697;
struct buffer* result_698;
int n_699;
int options_700;
int len_701;
int regex_result_702;
int i_703;
int i_704;
char* str_705;
struct list$1charph* group_strings_706;
char* match_string_707;
char* block_result_708;
char* str_709;
char* str_710;
char* str_711;
struct list$1charph* group_strings_712;
int i_713;
char* match_string_714;
char* match_string_715;
char* block_result_716;
char* str_717;
char* str_718;
char* str_719;
char* __result312__;
err_693 = (void*)0;
memset(&erro_ofs_694, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result311__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    offset_688=0;
    ovec_max_689=16;
    int start_690[ovec_max_689];
    memset(&start_690, 0, sizeof(int)    *(ovec_max_689)    );
    int end_691[ovec_max_689];
    memset(&end_691, 0, sizeof(int)    *(ovec_max_689)    );
    int ovec_value_692[ovec_max_689*3];
    memset(&ovec_value_692, 0, sizeof(int)    *(ovec_max_689*3)    );
    options_695=reg->options;
    str_696=reg->str;
    re_697=reg->re;
    result_698=buffer_initialize((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str-gc.c", 2049, "buffer"));
    n_699=0;
    while((_Bool)1) {
        options_700=2097152;
        len_701=strlen(self);
        regex_result_702=pcre_exec(re_697,(struct pcre_extra*)0,self,len_701,offset_688,options_700,ovec_value_692,ovec_max_689*3);
        for(        i_703=0;        i_703<ovec_max_689;        i_703++        ){
            start_690[i_703]=ovec_value_692[i_703*2];
        }
        for(        i_704=0;        i_704<ovec_max_689;        i_704++        ){
            end_691[i_704]=ovec_value_692[i_704*2+1];
        }
        if(        regex_result_702==1) {
            n_699++;
            str_705=charp_substring(self,offset_688,start_690[0]);
            buffer_append_str(result_698,str_705);
            group_strings_706=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 2072, "list$1charph"));
            list$1charph_push_back(group_strings_706,charp_substring(self,start_690[0],end_691[0]));
            match_string_707=charp_substring(self,start_690[0],end_691[0]);
            block_result_708=block(parent,match_string_707,group_strings_706);
            buffer_append_str(result_698,block_result_708);
            if(            offset_688==end_691[0]) {
                offset_688++;
            }
            else {
                offset_688=end_691[0];
            }
            if(            !reg->global) {
                str_709=charp_substring(self,offset_688,-1);
                buffer_append_str(result_698,str_709);
                break;
            }
            if(            n_699==count) {
                str_710=charp_substring(self,offset_688,-1);
                buffer_append_str(result_698,str_710);
                break;
            }
        }
        else if(        regex_result_702>1) {
            n_699++;
            str_711=charp_substring(self,offset_688,start_690[0]);
            buffer_append_str(result_698,str_711);
            if(            offset_688==end_691[0]) {
                offset_688++;
            }
            else {
                offset_688=end_691[0];
            }
            group_strings_712=list$1charph_initialize((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str-gc.c", 2115, "list$1charph"));
            for(            i_713=1;            i_713<regex_result_702;            i_713++            ){
                match_string_714=charp_substring(self,start_690[i_713],end_691[i_713]);
                list$1charph_push_back(group_strings_712,match_string_714);
            }
            match_string_715=charp_substring(self,start_690[0],end_691[0]);
            block_result_716=block(parent,match_string_715,group_strings_712);
            buffer_append_str(result_698,block_result_716);
            if(            !reg->global) {
                str_717=charp_substring(self,offset_688,-1);
                buffer_append_str(result_698,str_717);
                break;
            }
            if(            n_699==count) {
                str_718=charp_substring(self,offset_688,-1);
                buffer_append_str(result_698,str_718);
                break;
            }
        }
        else {
            str_719=charp_substring(self,offset_688,-1);
            buffer_append_str(result_698,str_719);
            break;
        }
    }
    __result312__ = gComeFunResultObject = __result_obj__ = buffer_to_string(result_698);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

unsigned int wchar_tp_get_hash_key(int* value){
int result_720;
int* p_721;
    result_720=0;
    p_721=value;
    while(*p_721) {
        result_720+=(*p_721);
        p_721++;
    }
    return result_720;
}

_Bool wstring_equals(int* left, int* right){
    return wcscmp(left,right)==0;
}

_Bool wchar_t_operator_equals(int left, int right){
    return left==right;
}

_Bool wchar_t_operator_not_equals(int left, int right){
    return left!=right;
}

unsigned int wchar_t_get_hash_key(int value){
    return value;
}

_Bool wchar_t_equals(int left, int right){
    return left==right;
}

char* wchar_t_to_string(int wc){
void* __result_obj__=(void*)0;
char* __result313__;
    __result313__ = gComeFunResultObject = __result_obj__ = xsprintf("%ls",wc);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
char* result_722;
char* __result314__;
char* __result315__;
    result_722=__builtin_string(str);
    if(    result_722[string_length(result_722)-1]==10) {
        __result314__ = gComeFunResultObject = __result_obj__ = string_substring(result_722,0,-2);
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    __result315__ = gComeFunResultObject = __result_obj__ = result_722;
    gComeFunResultObject = (void*)0;
    return __result315__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
char* __result316__;
char* result_723;
char* result2_724;
char* __result317__;
    if(    path==((void*)0)) {
        __result316__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    result_723=realpath(path,((void*)0));
    result2_724=__builtin_string(result_723);
    free(result_723);
    __result317__ = gComeFunResultObject = __result_obj__ = result2_724;
    gComeFunResultObject = (void*)0;
    return __result317__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
char* __result318__;
char* __result319__;
    if(    path==((void*)0)) {
        __result318__ = gComeFunResultObject = __result_obj__ = __builtin_string("");
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    __result319__ = gComeFunResultObject = __result_obj__ = __builtin_string(dirname(__builtin_string(path)));
    gComeFunResultObject = (void*)0;
    return __result319__;
}

unsigned long  int xwcslen(int* wstr){
int* p_725;
unsigned long  int len_726;
    p_725=wstr;
    len_726=0;
    while(*p_725) {
        p_725++;
        len_726++;
    }
    return len_726;
}

