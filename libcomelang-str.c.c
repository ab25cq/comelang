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
static void buffer_finalize(struct buffer* self);
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
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX742, int anonymous_var_nameX743, const char** anonymous_var_nameX744, int* anonymous_var_nameX745, const unsigned char* anonymous_var_nameX746);
struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX747, int anonymous_var_nameX748, const char** anonymous_var_nameX749, int* anonymous_var_nameX750, const unsigned char* anonymous_var_nameX751);
struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX752, int anonymous_var_nameX753, const char** anonymous_var_nameX754, int* anonymous_var_nameX755, const unsigned char* anonymous_var_nameX756);
struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX757, int anonymous_var_nameX758, int* anonymous_var_nameX759, const char** anonymous_var_nameX760, int* anonymous_var_nameX761, const unsigned char* anonymous_var_nameX762);
struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX763, int anonymous_var_nameX764, int* anonymous_var_nameX765, const char** anonymous_var_nameX766, int* anonymous_var_nameX767, const unsigned char* anonymous_var_nameX768);
struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX769, int anonymous_var_nameX770, int* anonymous_var_nameX771, const char** anonymous_var_nameX772, int* anonymous_var_nameX773, const unsigned char* anonymous_var_nameX774);
int pcre_config(int anonymous_var_nameX775, void* anonymous_var_nameX776);
int pcre16_config(int anonymous_var_nameX777, void* anonymous_var_nameX778);
int pcre32_config(int anonymous_var_nameX779, void* anonymous_var_nameX780);
int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX781, const char* anonymous_var_nameX782, int* anonymous_var_nameX783, int anonymous_var_nameX784, const char* anonymous_var_nameX785, char* anonymous_var_nameX786, int anonymous_var_nameX787);
int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX788, const unsigned short int* anonymous_var_nameX789, int* anonymous_var_nameX790, int anonymous_var_nameX791, const unsigned short int* anonymous_var_nameX792, unsigned short int* anonymous_var_nameX793, int anonymous_var_nameX794);
int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX795, const unsigned int* anonymous_var_nameX796, int* anonymous_var_nameX797, int anonymous_var_nameX798, const unsigned int* anonymous_var_nameX799, unsigned int* anonymous_var_nameX800, int anonymous_var_nameX801);
int pcre_copy_substring(const char* anonymous_var_nameX802, int* anonymous_var_nameX803, int anonymous_var_nameX804, int anonymous_var_nameX805, char* anonymous_var_nameX806, int anonymous_var_nameX807);
int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX808, int* anonymous_var_nameX809, int anonymous_var_nameX810, int anonymous_var_nameX811, unsigned short int* anonymous_var_nameX812, int anonymous_var_nameX813);
int pcre32_copy_substring(const unsigned int* anonymous_var_nameX814, int* anonymous_var_nameX815, int anonymous_var_nameX816, int anonymous_var_nameX817, unsigned int* anonymous_var_nameX818, int anonymous_var_nameX819);
int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX820, const struct pcre_extra* anonymous_var_nameX821, const char* anonymous_var_nameX822, int anonymous_var_nameX823, int anonymous_var_nameX824, int anonymous_var_nameX825, int* anonymous_var_nameX826, int anonymous_var_nameX827, int* anonymous_var_nameX828, int anonymous_var_nameX829);
int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX830, const struct pcre16_extra* anonymous_var_nameX831, const unsigned short int* anonymous_var_nameX832, int anonymous_var_nameX833, int anonymous_var_nameX834, int anonymous_var_nameX835, int* anonymous_var_nameX836, int anonymous_var_nameX837, int* anonymous_var_nameX838, int anonymous_var_nameX839);
int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX840, const struct pcre32_extra* anonymous_var_nameX841, const unsigned int* anonymous_var_nameX842, int anonymous_var_nameX843, int anonymous_var_nameX844, int anonymous_var_nameX845, int* anonymous_var_nameX846, int anonymous_var_nameX847, int* anonymous_var_nameX848, int anonymous_var_nameX849);
int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX850, const struct pcre_extra* anonymous_var_nameX851, const char* anonymous_var_nameX852, int anonymous_var_nameX853, int anonymous_var_nameX854, int anonymous_var_nameX855, int* anonymous_var_nameX856, int anonymous_var_nameX857);
int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX858, const struct pcre16_extra* anonymous_var_nameX859, const unsigned short int* anonymous_var_nameX860, int anonymous_var_nameX861, int anonymous_var_nameX862, int anonymous_var_nameX863, int* anonymous_var_nameX864, int anonymous_var_nameX865);
int pcre32_exec(const struct real_pcre32* anonymous_var_nameX866, const struct pcre32_extra* anonymous_var_nameX867, const unsigned int* anonymous_var_nameX868, int anonymous_var_nameX869, int anonymous_var_nameX870, int anonymous_var_nameX871, int* anonymous_var_nameX872, int anonymous_var_nameX873);
int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX874, const struct pcre_extra* anonymous_var_nameX875, const char* anonymous_var_nameX876, int anonymous_var_nameX877, int anonymous_var_nameX878, int anonymous_var_nameX879, int* anonymous_var_nameX880, int anonymous_var_nameX881, struct real_pcre_jit_stack* anonymous_var_nameX882);
int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX883, const struct pcre16_extra* anonymous_var_nameX884, const unsigned short int* anonymous_var_nameX885, int anonymous_var_nameX886, int anonymous_var_nameX887, int anonymous_var_nameX888, int* anonymous_var_nameX889, int anonymous_var_nameX890, struct real_pcre16_jit_stack* anonymous_var_nameX891);
int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX892, const struct pcre32_extra* anonymous_var_nameX893, const unsigned int* anonymous_var_nameX894, int anonymous_var_nameX895, int anonymous_var_nameX896, int anonymous_var_nameX897, int* anonymous_var_nameX898, int anonymous_var_nameX899, struct real_pcre32_jit_stack* anonymous_var_nameX900);
void pcre_free_substring(const char* anonymous_var_nameX901);
void pcre16_free_substring(const unsigned short int* anonymous_var_nameX902);
void pcre32_free_substring(const unsigned int* anonymous_var_nameX903);
void pcre_free_substring_list(const char** anonymous_var_nameX904);
void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX905);
void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX906);
int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX907, const struct pcre_extra* anonymous_var_nameX908, int anonymous_var_nameX909, void* anonymous_var_nameX910);
int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX911, const struct pcre16_extra* anonymous_var_nameX912, int anonymous_var_nameX913, void* anonymous_var_nameX914);
int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX915, const struct pcre32_extra* anonymous_var_nameX916, int anonymous_var_nameX917, void* anonymous_var_nameX918);
int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX919, const char* anonymous_var_nameX920, int* anonymous_var_nameX921, int anonymous_var_nameX922, const char* anonymous_var_nameX923, const char** anonymous_var_nameX924);
int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX925, const unsigned short int* anonymous_var_nameX926, int* anonymous_var_nameX927, int anonymous_var_nameX928, const unsigned short int* anonymous_var_nameX929, const unsigned short int** anonymous_var_nameX930);
int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX931, const unsigned int* anonymous_var_nameX932, int* anonymous_var_nameX933, int anonymous_var_nameX934, const unsigned int* anonymous_var_nameX935, const unsigned int** anonymous_var_nameX936);
int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX937, const char* anonymous_var_nameX938);
int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX939, const unsigned short int* anonymous_var_nameX940);
int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX941, const unsigned int* anonymous_var_nameX942);
int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX943, const char* anonymous_var_nameX944, char** anonymous_var_nameX945, char** anonymous_var_nameX946);
int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX947, const unsigned short int* anonymous_var_nameX948, unsigned short int** anonymous_var_nameX949, unsigned short int** anonymous_var_nameX950);
int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX951, const unsigned int* anonymous_var_nameX952, unsigned int** anonymous_var_nameX953, unsigned int** anonymous_var_nameX954);
int pcre_get_substring(const char* anonymous_var_nameX955, int* anonymous_var_nameX956, int anonymous_var_nameX957, int anonymous_var_nameX958, const char** anonymous_var_nameX959);
int pcre16_get_substring(const unsigned short int* anonymous_var_nameX960, int* anonymous_var_nameX961, int anonymous_var_nameX962, int anonymous_var_nameX963, const unsigned short int** anonymous_var_nameX964);
int pcre32_get_substring(const unsigned int* anonymous_var_nameX965, int* anonymous_var_nameX966, int anonymous_var_nameX967, int anonymous_var_nameX968, const unsigned int** anonymous_var_nameX969);
int pcre_get_substring_list(const char* anonymous_var_nameX970, int* anonymous_var_nameX971, int anonymous_var_nameX972, const char*** anonymous_var_nameX973);
int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX974, int* anonymous_var_nameX975, int anonymous_var_nameX976, const unsigned short int*** anonymous_var_nameX977);
int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX978, int* anonymous_var_nameX979, int anonymous_var_nameX980, const unsigned int*** anonymous_var_nameX981);
const unsigned char* pcre_maketables();
const unsigned char* pcre16_maketables();
const unsigned char* pcre32_maketables();
int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX982, int anonymous_var_nameX983);
int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX984, int anonymous_var_nameX985);
int pcre32_refcount(struct real_pcre32* anonymous_var_nameX986, int anonymous_var_nameX987);
struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX988, int anonymous_var_nameX989, const char** anonymous_var_nameX990);
struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX991, int anonymous_var_nameX992, const char** anonymous_var_nameX993);
struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX994, int anonymous_var_nameX995, const char** anonymous_var_nameX996);
void pcre_free_study(struct pcre_extra* anonymous_var_nameX997);
void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX998);
void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX999);
const char* pcre_version();
const char* pcre16_version();
const char* pcre32_version();
int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX1000, struct pcre_extra* anonymous_var_nameX1001, const unsigned char* anonymous_var_nameX1002);
int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX1003, struct pcre16_extra* anonymous_var_nameX1004, const unsigned char* anonymous_var_nameX1005);
int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX1006, struct pcre32_extra* anonymous_var_nameX1007, const unsigned char* anonymous_var_nameX1008);
int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX1009, const unsigned short int* anonymous_var_nameX1010, int anonymous_var_nameX1011, int* anonymous_var_nameX1012, int anonymous_var_nameX1013);
int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX1014, const unsigned int* anonymous_var_nameX1015, int anonymous_var_nameX1016, int* anonymous_var_nameX1017, int anonymous_var_nameX1018);
struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX1019, int anonymous_var_nameX1020);
struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX1021, int anonymous_var_nameX1022);
struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX1023, int anonymous_var_nameX1024);
void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX1025);
void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX1026);
void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX1027);
void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX1028, struct real_pcre_jit_stack* (*anonymous_var_nameX1029)(void*), void* anonymous_var_nameX1030);
void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX1031, struct real_pcre16_jit_stack* (*anonymous_var_nameX1032)(void*), void* anonymous_var_nameX1033);
void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX1034, struct real_pcre32_jit_stack* (*anonymous_var_nameX1035)(void*), void* anonymous_var_nameX1036);
void pcre_jit_free_unused_memory();
void pcre16_jit_free_unused_memory();
void pcre32_jit_free_unused_memory();
char* asctime(const struct tm* anonymous_var_nameX1037);
unsigned long  int clock();
char* ctime(const long* anonymous_var_nameX1038);
double difftime(long anonymous_var_nameX1039, long anonymous_var_nameX1040);
struct tm* getdate(const char* anonymous_var_nameX1041);
struct tm* gmtime(const long* anonymous_var_nameX1042);
struct tm* localtime(const long* anonymous_var_nameX1043);
long mktime(struct tm* anonymous_var_nameX1044);
unsigned long  int strftime(char* anonymous_var_nameX1045, unsigned long  int anonymous_var_nameX1046, const char* anonymous_var_nameX1047, const struct tm* anonymous_var_nameX1048);
char* strptime(const char* anonymous_var_nameX1049, const char* anonymous_var_nameX1050, struct tm* anonymous_var_nameX1051);
long time(long* anonymous_var_nameX1052);
void tzset();
char* asctime_r(const struct tm* anonymous_var_nameX1053, char* anonymous_var_nameX1054);
char* ctime_r(const long* anonymous_var_nameX1055, char* anonymous_var_nameX1056);
struct tm* gmtime_r(const long* anonymous_var_nameX1057, struct tm* anonymous_var_nameX1058);
struct tm* localtime_r(const long* anonymous_var_nameX1059, struct tm* anonymous_var_nameX1060);
long posix2time(long anonymous_var_nameX1061);
void tzsetwall();
long time2posix(long anonymous_var_nameX1062);
long timelocal(struct tm* anonymous_var_nameX1063);
long timegm(struct tm* anonymous_var_nameX1064);
int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp);
int clock_getres(enum anonymous_typeY8 __clock_id, struct timespec* __res);
int clock_gettime(enum anonymous_typeY8 __clock_id, struct timespec* __tp);
unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY8 __clock_id);
int clock_settime(enum anonymous_typeY8 __clock_id, const struct timespec* __tp);
int timespec_get(struct timespec* ts, int base);
int isalnum(int anonymous_var_nameX1079);
int isalpha(int anonymous_var_nameX1080);
int isblank(int anonymous_var_nameX1081);
int iscntrl(int anonymous_var_nameX1082);
int isdigit(int anonymous_var_nameX1083);
int isgraph(int anonymous_var_nameX1084);
int islower(int anonymous_var_nameX1085);
int isprint(int anonymous_var_nameX1086);
int ispunct(int anonymous_var_nameX1087);
int isspace(int anonymous_var_nameX1088);
int isupper(int anonymous_var_nameX1089);
int isxdigit(int anonymous_var_nameX1090);
int tolower(int anonymous_var_nameX1091);
int toupper(int anonymous_var_nameX1092);
int isascii(int anonymous_var_nameX1093);
int toascii(int anonymous_var_nameX1094);
int _tolower(int anonymous_var_nameX1095);
int _toupper(int anonymous_var_nameX1096);
int digittoint(int anonymous_var_nameX1097);
int ishexnumber(int anonymous_var_nameX1098);
int isideogram(int anonymous_var_nameX1099);
int isnumber(int anonymous_var_nameX1100);
int isphonogram(int anonymous_var_nameX1101);
int isrune(int anonymous_var_nameX1102);
int isspecial(int anonymous_var_nameX1103);
int iswalnum(int anonymous_var_nameX1104);
int iswalpha(int anonymous_var_nameX1105);
int iswcntrl(int anonymous_var_nameX1106);
int iswctype(int anonymous_var_nameX1107, unsigned int anonymous_var_nameX1108);
int iswdigit(int anonymous_var_nameX1109);
int iswgraph(int anonymous_var_nameX1110);
int iswlower(int anonymous_var_nameX1111);
int iswprint(int anonymous_var_nameX1112);
int iswpunct(int anonymous_var_nameX1113);
int iswspace(int anonymous_var_nameX1114);
int iswupper(int anonymous_var_nameX1115);
int iswxdigit(int anonymous_var_nameX1116);
int towlower(int anonymous_var_nameX1117);
int towupper(int anonymous_var_nameX1118);
unsigned int wctype(const char* anonymous_var_nameX1119);
int btowc(int anonymous_var_nameX1120);
int fgetwc(struct __sFILE* anonymous_var_nameX1121);
int* fgetws(int* anonymous_var_nameX1122, int anonymous_var_nameX1123, struct __sFILE* anonymous_var_nameX1124);
int fputwc(int anonymous_var_nameX1125, struct __sFILE* anonymous_var_nameX1126);
int fputws(const int* anonymous_var_nameX1127, struct __sFILE* anonymous_var_nameX1128);
int fwide(struct __sFILE* anonymous_var_nameX1129, int anonymous_var_nameX1130);
int fwprintf(struct __sFILE* anonymous_var_nameX1131, const int* anonymous_var_nameX1132, ...);
int fwscanf(struct __sFILE* anonymous_var_nameX1133, const int* anonymous_var_nameX1134, ...);
int getwc(struct __sFILE* anonymous_var_nameX1135);
int getwchar();
unsigned long  int mbrlen(const char* anonymous_var_nameX1136, unsigned long  int anonymous_var_nameX1137, union anonymous_typeZ1* anonymous_var_nameX1138);
unsigned long  int mbrtowc(int* anonymous_var_nameX1139, const char* anonymous_var_nameX1140, unsigned long  int anonymous_var_nameX1141, union anonymous_typeZ1* anonymous_var_nameX1142);
int mbsinit(const union anonymous_typeZ1* anonymous_var_nameX1143);
unsigned long  int mbsrtowcs(int* anonymous_var_nameX1144, const char** anonymous_var_nameX1145, unsigned long  int anonymous_var_nameX1146, union anonymous_typeZ1* anonymous_var_nameX1147);
int putwc(int anonymous_var_nameX1148, struct __sFILE* anonymous_var_nameX1149);
int putwchar(int anonymous_var_nameX1150);
int swprintf(int* anonymous_var_nameX1151, unsigned long  int anonymous_var_nameX1152, const int* anonymous_var_nameX1153, ...);
int swscanf(const int* anonymous_var_nameX1154, const int* anonymous_var_nameX1155, ...);
int ungetwc(int anonymous_var_nameX1156, struct __sFILE* anonymous_var_nameX1157);
int vfwprintf(struct __sFILE* anonymous_var_nameX1158, const int* anonymous_var_nameX1159, __darwin_va_list anonymous_var_nameX1160);
int vswprintf(int* anonymous_var_nameX1161, unsigned long  int anonymous_var_nameX1162, const int* anonymous_var_nameX1163, __darwin_va_list anonymous_var_nameX1164);
int vwprintf(const int* anonymous_var_nameX1165, __darwin_va_list anonymous_var_nameX1166);
unsigned long  int wcrtomb(char* anonymous_var_nameX1167, int anonymous_var_nameX1168, union anonymous_typeZ1* anonymous_var_nameX1169);
int* wcscat(int* anonymous_var_nameX1170, const int* anonymous_var_nameX1171);
int* wcschr(const int* anonymous_var_nameX1172, int anonymous_var_nameX1173);
int wcscmp(const int* anonymous_var_nameX1174, const int* anonymous_var_nameX1175);
int wcscoll(const int* anonymous_var_nameX1176, const int* anonymous_var_nameX1177);
int* wcscpy(int* anonymous_var_nameX1178, const int* anonymous_var_nameX1179);
unsigned long  int wcscspn(const int* anonymous_var_nameX1180, const int* anonymous_var_nameX1181);
unsigned long  int wcsftime(int* anonymous_var_nameX1182, unsigned long  int anonymous_var_nameX1183, const int* anonymous_var_nameX1184, const struct tm* anonymous_var_nameX1185);
unsigned long  int wcslen(const int* anonymous_var_nameX1186);
int* wcsncat(int* anonymous_var_nameX1187, const int* anonymous_var_nameX1188, unsigned long  int anonymous_var_nameX1189);
int wcsncmp(const int* anonymous_var_nameX1190, const int* anonymous_var_nameX1191, unsigned long  int anonymous_var_nameX1192);
int* wcsncpy(int* anonymous_var_nameX1193, const int* anonymous_var_nameX1194, unsigned long  int anonymous_var_nameX1195);
int* wcspbrk(const int* anonymous_var_nameX1196, const int* anonymous_var_nameX1197);
int* wcsrchr(const int* anonymous_var_nameX1198, int anonymous_var_nameX1199);
unsigned long  int wcsrtombs(char* anonymous_var_nameX1200, const int** anonymous_var_nameX1201, unsigned long  int anonymous_var_nameX1202, union anonymous_typeZ1* anonymous_var_nameX1203);
unsigned long  int wcsspn(const int* anonymous_var_nameX1204, const int* anonymous_var_nameX1205);
int* wcsstr(const int* anonymous_var_nameX1206, const int* anonymous_var_nameX1207);
unsigned long  int wcsxfrm(int* anonymous_var_nameX1208, const int* anonymous_var_nameX1209, unsigned long  int anonymous_var_nameX1210);
int wctob(int anonymous_var_nameX1211);
double wcstod(const int* anonymous_var_nameX1212, int** anonymous_var_nameX1213);
int* wcstok(int* anonymous_var_nameX1214, const int* anonymous_var_nameX1215, int** anonymous_var_nameX1216);
long wcstol(const int* anonymous_var_nameX1217, int** anonymous_var_nameX1218, int anonymous_var_nameX1219);
unsigned long  int wcstoul(const int* anonymous_var_nameX1220, int** anonymous_var_nameX1221, int anonymous_var_nameX1222);
int* wmemchr(const int* anonymous_var_nameX1223, int anonymous_var_nameX1224, unsigned long  int anonymous_var_nameX1225);
int wmemcmp(const int* anonymous_var_nameX1226, const int* anonymous_var_nameX1227, unsigned long  int anonymous_var_nameX1228);
int* wmemcpy(int* anonymous_var_nameX1229, const int* anonymous_var_nameX1230, unsigned long  int anonymous_var_nameX1231);
int* wmemmove(int* anonymous_var_nameX1232, const int* anonymous_var_nameX1233, unsigned long  int anonymous_var_nameX1234);
int* wmemset(int* anonymous_var_nameX1235, int anonymous_var_nameX1236, unsigned long  int anonymous_var_nameX1237);
int wprintf(const int* anonymous_var_nameX1238, ...);
int wscanf(const int* anonymous_var_nameX1239, ...);
int wcswidth(const int* anonymous_var_nameX1240, unsigned long  int anonymous_var_nameX1241);
int wcwidth(int anonymous_var_nameX1242);
int vfwscanf(struct __sFILE* anonymous_var_nameX1243, const int* anonymous_var_nameX1244, __darwin_va_list anonymous_var_nameX1245);
int vswscanf(const int* anonymous_var_nameX1246, const int* anonymous_var_nameX1247, __darwin_va_list anonymous_var_nameX1248);
int vwscanf(const int* anonymous_var_nameX1249, __darwin_va_list anonymous_var_nameX1250);
float wcstof(const int* anonymous_var_nameX1251, int** anonymous_var_nameX1252);
long  double wcstold(const int* anonymous_var_nameX1253, int** anonymous_var_nameX1254);
long long wcstoll(const int* anonymous_var_nameX1255, int** anonymous_var_nameX1256, int anonymous_var_nameX1257);
unsigned long  long wcstoull(const int* anonymous_var_nameX1258, int** anonymous_var_nameX1259, int anonymous_var_nameX1260);
unsigned long  int mbsnrtowcs(int* anonymous_var_nameX1261, const char** anonymous_var_nameX1262, unsigned long  int anonymous_var_nameX1263, unsigned long  int anonymous_var_nameX1264, union anonymous_typeZ1* anonymous_var_nameX1265);
int* wcpcpy(int* anonymous_var_nameX1266, const int* anonymous_var_nameX1267);
int* wcpncpy(int* anonymous_var_nameX1268, const int* anonymous_var_nameX1269, unsigned long  int anonymous_var_nameX1270);
int* wcsdup(const int* anonymous_var_nameX1271);
int wcscasecmp(const int* anonymous_var_nameX1272, const int* anonymous_var_nameX1273);
int wcsncasecmp(const int* anonymous_var_nameX1274, const int* anonymous_var_nameX1275, unsigned long  int n);
unsigned long  int wcsnlen(const int* anonymous_var_nameX1276, unsigned long  int anonymous_var_nameX1277);
unsigned long  int wcsnrtombs(char* anonymous_var_nameX1278, const int** anonymous_var_nameX1279, unsigned long  int anonymous_var_nameX1280, unsigned long  int anonymous_var_nameX1281, union anonymous_typeZ1* anonymous_var_nameX1282);
struct __sFILE* open_wmemstream(int** __bufp, unsigned long  int* __sizep);
int* fgetwln(struct __sFILE* anonymous_var_nameX1283, unsigned long  int* anonymous_var_nameX1284);
unsigned long  int wcslcat(int* anonymous_var_nameX1285, const int* anonymous_var_nameX1286, unsigned long  int anonymous_var_nameX1287);
unsigned long  int wcslcpy(int* anonymous_var_nameX1288, const int* anonymous_var_nameX1289, unsigned long  int anonymous_var_nameX1290);
char* basename(char* anonymous_var_nameX1291);
char* dirname(char* anonymous_var_nameX1292);
char* basename_r(const char* anonymous_var_nameX1293, char* anonymous_var_nameX1294);
char* dirname_r(const char* anonymous_var_nameX1295, char* anonymous_var_nameX1296);
struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy);
static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2);
static void tuple2$2come_regexphcharphp_finalize(struct tuple2$2come_regexphcharph* self);
static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2);
static void tuple2$2come_regexphvoidpp_finalize(struct tuple2$2come_regexphvoidp* self);
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
static _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result52__;
    __result52__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
struct buffer* __result53__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3633, "buffer"))));
    buffer_append(result_109,self,sizeof(char)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_109;
    /*i*/come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_110;
int i_111;
struct buffer* __result54__;
    result_110=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3640, "buffer"))));
    for(    i_111=0;    i_111<len;    i_111++    ){
        buffer_append(result_110,self[i_111],strlen(self[i_111]));
    }
    __result54__ = gComeFunResultObject = __result_obj__ = result_110;
    /*i*/come_call_finalizer3(result_110,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result55__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3649, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(short)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_112;
    /*i*/come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result56__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3656, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(int)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_113;
    /*i*/come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result57__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3663, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(long)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_114;
    /*i*/come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result58__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3670, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(float)*len);
    __result58__ = gComeFunResultObject = __result_obj__ = result_115;
    /*i*/come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}
static struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* result_116;
struct buffer* __result59__;
    result_116=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3677, "buffer"))));
    buffer_append(result_116,(char*)self,sizeof(double)*len);
    __result59__ = gComeFunResultObject = __result_obj__ = result_116;
    /*i*/come_call_finalizer3(result_116,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value48 = (void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct smart_pointer$1char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value50=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4005, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value50,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
struct smart_pointer$1char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value53=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4010, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value53,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value54 = (void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1short* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value56=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4015, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct smart_pointer$1int* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value59=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4020, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value59,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct smart_pointer$1long* __result69__;
    __result69__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value62=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4025, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value62,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct buffer* buf_122;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct smart_pointer$1char* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4058, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value66=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4060, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_122))));
    /*i*/come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value66,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct buffer* buf_123;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct smart_pointer$1charp* __result72__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4065, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(char*)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value70=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4067, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_123))));
    /*i*/come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value70,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct buffer* buf_124;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct smart_pointer$1short* __result73__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4072, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(short)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value74=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4074, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_124))));
    /*i*/come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value74,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct buffer* buf_125;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct smart_pointer$1int* __result74__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4079, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(int)*len);
    __result74__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value78=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4081, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_125))));
    /*i*/come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value78,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct buffer* buf_126;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct smart_pointer$1long* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4086, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(long)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value82=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4088, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_126))));
    /*i*/come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value82,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct buffer* buf_127;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct smart_pointer$1float* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4093, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(float)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value86=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4095, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_127))));
    /*i*/come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value86,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct buffer* buf_128;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
struct smart_pointer$1double* __result79__;
    buf_128=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4100, "buffer"))));
    buffer_append(buf_128,(char*)self,sizeof(double)*len);
    __result79__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value90=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4102, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_128))));
    /*i*/come_call_finalizer3(buf_128,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value90,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result79__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value91 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1char* __result82__;
    __result82__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value95=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4107, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value95,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result82__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1charp* __result85__;
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value100=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4112, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value105 = (void*)0;
struct list$1short* __result88__;
    __result88__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value105=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4117, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value105,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value106 = (void*)0;
void* __right_value110 = (void*)0;
struct list$1int* __result91__;
    __result91__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value110=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4122, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value110,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result91__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
void* __right_value115 = (void*)0;
struct list$1long* __result94__;
    __result94__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value115=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4127, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value115,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result94__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value120 = (void*)0;
struct list$1float* __result97__;
    __result97__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value120=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4132, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value120,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1double* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value125=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4137, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value125,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
void* __right_value128 = (void*)0;
struct vector$1char* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value128=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4142, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value128,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
void* __right_value131 = (void*)0;
struct vector$1charp* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value131=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4147, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value131,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value132 = (void*)0;
void* __right_value134 = (void*)0;
struct vector$1short* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value134=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4152, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value134,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
void* __right_value137 = (void*)0;
struct vector$1int* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value137=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4157, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value137,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value138 = (void*)0;
void* __right_value140 = (void*)0;
struct vector$1long* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value140=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4162, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value140,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
void* __right_value143 = (void*)0;
struct vector$1float* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value143=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4167, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value143,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
void* __right_value146 = (void*)0;
struct vector$1double* __result114__;
    __result114__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value146=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4172, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value146,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result114__;
}
static unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_186;
int i_187;
    result_186=(_Bool)0;
    for(    i_187=0;    i_187<len;    i_187++    ){
        if(        strncmp(self[i_187],str,strlen(self[i_187]))==0) {
            result_186=(_Bool)1;
            break;
        }
    }
    return result_186;
}
static unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value220 = (void*)0;
char* __result168__;
    __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value220=xsprintf(msg,self)));
    /* U11 */__right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result168__;
}
static char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value221 = (void*)0;
char* __result169__;
    __result169__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value221=xsprintf(msg,self)));
    /* U11 */__right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result169__;
}
static char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value222 = (void*)0;
char* __result170__;
    __result170__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value222=xsprintf(msg,self)));
    /* U11 */__right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result170__;
}
static char* string_printable(char* str){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
char* __result172__;
    __result172__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value224=string_printable(str)));
    /* U11 */__right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result172__;
}
static int* wstring_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
int* __result223__;
    __result223__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value280=wchar_tp_substring(str,head,tail)));
    /* U11 */__right_value280 = come_decrement_ref_count2(__right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result223__;
}
static int string_index_count(char* str, char* search_str, int count, int default_value){
    return charp_index_count(str,search_str,count,default_value);
}
static int string_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_index_regex_count(self,reg,count,default_value);
}
static int string_rindex(char* str, char* search_str, int default_value){
    return charp_rindex(str,search_str,default_value);
}
static int string_rindex_regex(char* self, struct come_regex* reg, int default_value){
    return charp_rindex_regex(self,reg,default_value);
}
static int string_rindex_count(char* str, char* search_str, int count, int default_value){
    return charp_rindex_count(str,search_str,default_value,-1);
}
static struct list$1charph* string_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value281 = (void*)0;
struct list$1charph* __result224__;
    __result224__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value281=charp_scan_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value281,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result224__;
}
static struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct list$1charph* __result225__;
    __result225__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value282=charp_scan_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value282,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result225__;
}
static struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value283 = (void*)0;
struct list$1charph* __result226__;
    __result226__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value283=charp_split_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value283,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result226__;
}
static struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value284 = (void*)0;
struct list$1charph* __result227__;
    __result227__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value284=charp_split_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value284,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result227__;
}
static struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct list$1charph* __result228__;
    __result228__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value285=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    /*g*/come_call_finalizer3(__right_value285,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result228__;
}
static char* string_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value286 = (void*)0;
char* __result229__;
    __result229__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value286=charp_strip(self)));
    /* U11 */__right_value286 = come_decrement_ref_count2(__right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result229__;
}
static int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value287 = (void*)0;
int* __result230__;
    __result230__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value287=charp_to_wstring(str)));
    /* U11 */__right_value287 = come_decrement_ref_count2(__right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result230__;
}
static char* wstring_to_string(int* wstr){
void* __result_obj__=(void*)0;
void* __right_value288 = (void*)0;
char* __result231__;
    __result231__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value288=wchar_tp_to_string(wstr)));
    /* U11 */__right_value288 = come_decrement_ref_count2(__right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result231__;
}
static int* int_to_wstring(int self){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
int* __result232__;
    __result232__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value290=string_to_wstring(((char*)(__right_value289=xsprintf("%d",self))))));
    /* U11 */__right_value289 = come_decrement_ref_count2(__right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result232__;
}
static int wstring_length(int* str){
    return wchar_tp_length(str);
}
static int* wstring_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value291 = (void*)0;
int* __result233__;
    __result233__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value291=wchar_tp_delete(str,head,tail)));
    /* U11 */__right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result233__;
}
static int wstring_index(int* str, int* search_str, int default_value){
    return wchar_tp_index(str,search_str,default_value);
}
static int wstring_rindex(int* str, int* search_str, int default_value){
    return wchar_tp_rindex(str,search_str,default_value);
}
static int* wstring_reverse(int* str){
void* __result_obj__=(void*)0;
void* __right_value292 = (void*)0;
int* __result234__;
    __result234__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value292=wchar_tp_reverse(str)));
    /* U11 */__right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result234__;
}
static int* wstring_multiply(int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value293 = (void*)0;
int* __result235__;
    __result235__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value293=wchar_tp_multiply(str,n)));
    /* U11 */__right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result235__;
}
static int* wstring_printable(int* str){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
int* __result236__;
    __result236__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value294=wchar_tp_printable(str)));
    /* U11 */__right_value294 = come_decrement_ref_count2(__right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result236__;
}
static unsigned int wstring_get_hash_key(int* value){
    return wchar_tp_get_hash_key(value);
}
static _Bool string_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
    return charp_match_group_strings(self,reg,count,group_strings);
}
static int string_index(char* str, char* search_str, int default_value){
    return charp_index(str,search_str,default_value);
}
static int string_index_regex(char* self, struct come_regex* reg, int default_value){
    return charp_index_regex(self,reg,default_value);
}
static char* string_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
void* __right_value295 = (void*)0;
char* __result237__;
    __result237__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value295=charp_replace(self,index,c)));
    /* U11 */__right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result237__;
}
static char* string_multiply(char* str, int n){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
char* __result238__;
    __result238__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value296=charp_multiply(str,n)));
    /* U11 */__right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result238__;
}
static char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
void* __right_value297 = (void*)0;
char* __result239__;
    __result239__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value297=charp_sub(self,reg,replace)));
    /* U11 */__right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result239__;
}
static char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
char* __result240__;
    __result240__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value298=charp_sub_count(self,reg,replace,count)));
    /* U11 */__right_value298 = come_decrement_ref_count2(__right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result240__;
}
static struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
struct list$1charph* __result241__;
    __result241__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value299=charp_split_str(self,str)));
    /*g*/come_call_finalizer3(__right_value299,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result241__;
}
static struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
struct list$1charph* __result242__;
    __result242__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value300=charp_scan(self,reg)));
    /*g*/come_call_finalizer3(__right_value300,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result242__;
}
static struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
struct list$1charph* __result243__;
    __result243__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value301=charp_split(self,reg)));
    /*g*/come_call_finalizer3(__right_value301,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result243__;
}
static _Bool string_match(char* self, struct come_regex* reg){
    return charp_match(self,reg);
}
static struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
struct list$1charph* __result244__;
    __result244__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value302=charp_split_maxsplit(self,reg,maxsplit)));
    /*g*/come_call_finalizer3(__right_value302,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result244__;
}
static int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_rindex_regex_count(self,reg,count,default_value);
}
static _Bool string_match_count(char* self, struct come_regex* reg, int count){
    return charp_match_count(self,reg,count);
}
static char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __result245__;
    __result245__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value303=charp_sub_block(self,reg,parent,block)));
    /* U11 */__right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result245__;
}
static char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
char* __result246__;
    __result246__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value304=charp_sub_block_count(self,reg,count,parent,block)));
    /* U11 */__right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result246__;
}
static char* charp_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value306 = (void*)0;
char* __result248__;
    __result248__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value306=string_chomp(str)));
    /* U11 */__right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

// body function
static void buffer_finalize(struct buffer* self){
char* __dec_obj1;
    if(    self!=((void*)0)&&self->buf!=((void*)0)) {
        if(        self->buf==gComeFunResultObject) {
            __dec_obj1=self->buf;
            /*G*/ __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj14;
struct smart_pointer$1char* __result61__;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result61__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result61__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj15;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj15=self->memory;
            come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj16;
struct smart_pointer$1short* __result64__;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result64__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj17;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj17=self->memory;
            come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj18;
struct smart_pointer$1int* __result66__;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj19;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj19=self->memory;
            come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj20;
struct smart_pointer$1long* __result68__;
    __dec_obj20=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result68__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj21;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj21=self->memory;
            come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj22;
struct smart_pointer$1charp* __result71__;
    __dec_obj22=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result71__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj23;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj23=self->memory;
            come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj24;
struct smart_pointer$1float* __result76__;
    __dec_obj24=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj25;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj25=self->memory;
            come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj26;
struct smart_pointer$1double* __result78__;
    __dec_obj26=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj27;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj27=self->memory;
            come_call_finalizer3(__dec_obj27,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
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
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_130;
void* __right_value93 = (void*)0;
struct list_item$1char* litem_131;
void* __right_value94 = (void*)0;
struct list_item$1char* litem_132;
struct list$1char* __result80__;
    if(    self->len==0) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1127, "list_item$1char"))));
        litem_130->prev=((void*)0);
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head=litem_130;
    }
    else if(    self->len==1) {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1137, "list_item$1char"))));
        litem_131->prev=self->head;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail=litem_131;
        self->head->next=litem_131;
    }
    else {
        litem_132=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1147, "list_item$1char"))));
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

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_133;
struct list_item$1char* prev_it_134;
    it_133=self->head;
    while(it_133!=((void*)0)) {
        prev_it_134=it_133;
        it_133=it_133->next;
        /*i*/come_call_finalizer3(prev_it_134,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_135;
struct list$1charp* __result84__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_135=0;    i_135<num_value;    i_135++    ){
        list$1charp_push_back(self,values[i_135]);
    }
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_136;
void* __right_value98 = (void*)0;
struct list_item$1charp* litem_137;
void* __right_value99 = (void*)0;
struct list_item$1charp* litem_138;
struct list$1charp* __result83__;
    if(    self->len==0) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1127, "list_item$1charp"))));
        litem_136->prev=((void*)0);
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head=litem_136;
    }
    else if(    self->len==1) {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1137, "list_item$1charp"))));
        litem_137->prev=self->head;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail=litem_137;
        self->head->next=litem_137;
    }
    else {
        litem_138=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1147, "list_item$1charp"))));
        litem_138->prev=self->tail;
        litem_138->next=((void*)0);
        litem_138->item=item;
        self->tail->next=litem_138;
        self->tail=litem_138;
    }
    self->len++;
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_139;
struct list_item$1charp* prev_it_140;
    it_139=self->head;
    while(it_139!=((void*)0)) {
        prev_it_140=it_139;
        it_139=it_139->next;
        /*i*/come_call_finalizer3(prev_it_140,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_141;
struct list$1short* __result87__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_141=0;    i_141<num_value;    i_141++    ){
        list$1short_push_back(self,values[i_141]);
    }
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_142;
void* __right_value103 = (void*)0;
struct list_item$1short* litem_143;
void* __right_value104 = (void*)0;
struct list_item$1short* litem_144;
struct list$1short* __result86__;
    if(    self->len==0) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1127, "list_item$1short"))));
        litem_142->prev=((void*)0);
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head=litem_142;
    }
    else if(    self->len==1) {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1137, "list_item$1short"))));
        litem_143->prev=self->head;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail=litem_143;
        self->head->next=litem_143;
    }
    else {
        litem_144=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1147, "list_item$1short"))));
        litem_144->prev=self->tail;
        litem_144->next=((void*)0);
        litem_144->item=item;
        self->tail->next=litem_144;
        self->tail=litem_144;
    }
    self->len++;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_145;
struct list_item$1short* prev_it_146;
    it_145=self->head;
    while(it_145!=((void*)0)) {
        prev_it_146=it_145;
        it_145=it_145->next;
        /*i*/come_call_finalizer3(prev_it_146,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_147;
struct list$1int* __result90__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_147=0;    i_147<num_value;    i_147++    ){
        list$1int_push_back(self,values[i_147]);
    }
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_148;
void* __right_value108 = (void*)0;
struct list_item$1int* litem_149;
void* __right_value109 = (void*)0;
struct list_item$1int* litem_150;
struct list$1int* __result89__;
    if(    self->len==0) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1127, "list_item$1int"))));
        litem_148->prev=((void*)0);
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head=litem_148;
    }
    else if(    self->len==1) {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1137, "list_item$1int"))));
        litem_149->prev=self->head;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail=litem_149;
        self->head->next=litem_149;
    }
    else {
        litem_150=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1147, "list_item$1int"))));
        litem_150->prev=self->tail;
        litem_150->next=((void*)0);
        litem_150->item=item;
        self->tail->next=litem_150;
        self->tail=litem_150;
    }
    self->len++;
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_151;
struct list_item$1int* prev_it_152;
    it_151=self->head;
    while(it_151!=((void*)0)) {
        prev_it_152=it_151;
        it_151=it_151->next;
        /*i*/come_call_finalizer3(prev_it_152,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_153;
struct list$1long* __result93__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_153=0;    i_153<num_value;    i_153++    ){
        list$1long_push_back(self,values[i_153]);
    }
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_154;
void* __right_value113 = (void*)0;
struct list_item$1long* litem_155;
void* __right_value114 = (void*)0;
struct list_item$1long* litem_156;
struct list$1long* __result92__;
    if(    self->len==0) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1127, "list_item$1long"))));
        litem_154->prev=((void*)0);
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head=litem_154;
    }
    else if(    self->len==1) {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1137, "list_item$1long"))));
        litem_155->prev=self->head;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail=litem_155;
        self->head->next=litem_155;
    }
    else {
        litem_156=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1147, "list_item$1long"))));
        litem_156->prev=self->tail;
        litem_156->next=((void*)0);
        litem_156->item=item;
        self->tail->next=litem_156;
        self->tail=litem_156;
    }
    self->len++;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_157;
struct list_item$1long* prev_it_158;
    it_157=self->head;
    while(it_157!=((void*)0)) {
        prev_it_158=it_157;
        it_157=it_157->next;
        /*i*/come_call_finalizer3(prev_it_158,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_159;
struct list$1float* __result96__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_159=0;    i_159<num_value;    i_159++    ){
        list$1float_push_back(self,values[i_159]);
    }
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_160;
void* __right_value118 = (void*)0;
struct list_item$1float* litem_161;
void* __right_value119 = (void*)0;
struct list_item$1float* litem_162;
struct list$1float* __result95__;
    if(    self->len==0) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1127, "list_item$1float"))));
        litem_160->prev=((void*)0);
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head=litem_160;
    }
    else if(    self->len==1) {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1137, "list_item$1float"))));
        litem_161->prev=self->head;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail=litem_161;
        self->head->next=litem_161;
    }
    else {
        litem_162=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1147, "list_item$1float"))));
        litem_162->prev=self->tail;
        litem_162->next=((void*)0);
        litem_162->item=item;
        self->tail->next=litem_162;
        self->tail=litem_162;
    }
    self->len++;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_163;
struct list_item$1float* prev_it_164;
    it_163=self->head;
    while(it_163!=((void*)0)) {
        prev_it_164=it_163;
        it_163=it_163->next;
        /*i*/come_call_finalizer3(prev_it_164,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_165;
struct list$1double* __result99__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_165=0;    i_165<num_value;    i_165++    ){
        list$1double_push_back(self,values[i_165]);
    }
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_166;
void* __right_value123 = (void*)0;
struct list_item$1double* litem_167;
void* __right_value124 = (void*)0;
struct list_item$1double* litem_168;
struct list$1double* __result98__;
    if(    self->len==0) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1127, "list_item$1double"))));
        litem_166->prev=((void*)0);
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head=litem_166;
    }
    else if(    self->len==1) {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1137, "list_item$1double"))));
        litem_167->prev=self->head;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail=litem_167;
        self->head->next=litem_167;
    }
    else {
        litem_168=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1147, "list_item$1double"))));
        litem_168->prev=self->tail;
        litem_168->next=((void*)0);
        litem_168->item=item;
        self->tail->next=litem_168;
        self->tail=litem_168;
    }
    self->len++;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_169;
struct list_item$1double* prev_it_170;
    it_169=self->head;
    while(it_169!=((void*)0)) {
        prev_it_170=it_169;
        it_169=it_169->next;
        /*i*/come_call_finalizer3(prev_it_170,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct vector$1char* __result101__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1921, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
struct vector$1charp* __result103__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1921, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_172;
    if(    0) {
        for(        i_172=0;        i_172<self->len;        i_172++        ){
            /* U13 */self->items[i_172] = come_decrement_ref_count2(self->items[i_172], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
struct vector$1short* __result105__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1921, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_173;
    if(    0) {
        for(        i_173=0;        i_173<self->len;        i_173++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct vector$1int* __result107__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1921, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_174;
    if(    0) {
        for(        i_174=0;        i_174<self->len;        i_174++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct vector$1long* __result109__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1921, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_175;
    if(    0) {
        for(        i_175=0;        i_175<self->len;        i_175++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct vector$1float* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1921, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_176;
    if(    0) {
        for(        i_176=0;        i_176<self->len;        i_176++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
struct vector$1double* __result113__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1921, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_177;
    if(    0) {
        for(        i_177=0;        i_177<self->len;        i_177++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result162__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result162__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_218;
struct list_item$1charph* prev_it_219;
    it_218=self->head;
    while(it_218!=((void*)0)) {
        prev_it_219=it_218;
        it_218=it_218->next;
        /*i*/come_call_finalizer3(prev_it_219,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            /*G*/ __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value207 = (void*)0;
struct list_item$1charph* litem_223;
char* __dec_obj29;
void* __right_value208 = (void*)0;
struct list_item$1charph* litem_224;
char* __dec_obj30;
void* __right_value209 = (void*)0;
struct list_item$1charph* litem_225;
char* __dec_obj31;
struct list$1charph* __result164__;
    if(    self->len==0) {
        litem_223=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value207=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1127, "list_item$1charph"))));
        litem_223->prev=((void*)0);
        litem_223->next=((void*)0);
        __dec_obj29=litem_223->item;
        litem_223->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_223;
        self->head=litem_223;
    }
    else if(    self->len==1) {
        litem_224=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value208=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1137, "list_item$1charph"))));
        litem_224->prev=self->head;
        litem_224->next=((void*)0);
        __dec_obj30=litem_224->item;
        litem_224->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_224;
        self->head->next=litem_224;
    }
    else {
        litem_225=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value209=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1147, "list_item$1charph"))));
        litem_225->prev=self->tail;
        litem_225->next=((void*)0);
        __dec_obj31=litem_225->item;
        litem_225->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_225;
        self->tail=litem_225;
    }
    self->len++;
    __result164__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_271;
int erro_ofs_272;
int options_273;
void* __right_value307 = (void*)0;
char* __dec_obj32;
struct come_regex* __null_value1;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct tuple2$2come_regexphcharph* __result250__;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct tuple2$2come_regexphcharph* __result252__;
err_271 = (void*)0;
memset(&erro_ofs_272, 0, sizeof(int));
memset(&__null_value1, 0, sizeof(struct come_regex*));
    options_273=2048|(((ignore_case)?(1):(0)))|(((multiline)?(2):(0)))|(((extended)?(8):(0)))|(((dotall)?(4):(0)))|(((dollar_endonly)?(32):(0)))|(((ungreedy)?(512):(0)));
    __dec_obj32=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    /*G*/ __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->ignore_case=ignore_case;
    self->multiline=multiline;
    self->global=global;
    self->extended=extended;
    self->dotall=dotall;
    self->anchored=anchored;
    self->dollar_endonly=dollar_endonly;
    self->options=options_273;
    self->re=pcre_compile(str,options_273,&err_271,&erro_ofs_272,((void*)0));
    if(    self->re==((void*)0)) {
        __result250__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value311=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 46, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value1),(char*)come_increment_ref_count(xsprintf("regex error \%s",((char*)(__right_value308=charp_to_string(str))))))));
        /*i*/come_call_finalizer3(self,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U11 */__right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value311,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    __result252__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value313=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 53, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(self),((void*)0))));
    /*i*/come_call_finalizer3(self,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value313,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2){
void* __result_obj__=(void*)0;
struct come_regex* __dec_obj33;
char* __dec_obj34;
struct tuple2$2come_regexphcharph* __result249__;
    __dec_obj33=self->v1;
    self->v1=(struct come_regex*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj33,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj34=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2come_regexphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void tuple2$2come_regexphcharphp_finalize(struct tuple2$2come_regexphcharph* self){
struct come_regex* __dec_obj35;
char* __dec_obj36;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj35=self->v1;
            come_call_finalizer3(__dec_obj35,come_regex_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj36=self->v2;
            /*G*/ __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2come_regexphvoidp* tuple2$2come_regexphvoidp_initialize(struct tuple2$2come_regexphvoidp* self, struct come_regex* v1, void* v2){
void* __result_obj__=(void*)0;
struct come_regex* __dec_obj37;
struct tuple2$2come_regexphvoidp* __result251__;
    __dec_obj37=self->v1;
    self->v1=(struct come_regex*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj37,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    self->v2=v2;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2come_regexphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static void tuple2$2come_regexphvoidpp_finalize(struct tuple2$2come_regexphvoidp* self){
struct come_regex* __dec_obj38;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj38=self->v1;
            come_call_finalizer3(__dec_obj38,come_regex_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void come_regex_finalize(struct come_regex* reg){
    if(    reg&&reg->str) {
        /* U13 */reg->str = come_decrement_ref_count2(reg->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    reg&&reg->re) {
        free(reg->re);
    }
}

struct tuple2$2come_regexphcharph* charp_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var1 = (void*)0;
struct come_regex* come_exception_var_b1_274=0;
char* Err_275=0;
_Bool _if_conditional1;
struct come_regex* __null_value2;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct tuple2$2come_regexphcharph* __result253__;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct tuple2$2come_regexphcharph* __result254__;
memset(&__null_value2, 0, sizeof(struct come_regex*));
    multiple_assign_var1=((struct tuple2$2come_regexphcharph*)(__right_value315=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 68, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_exception_var_b1_274=(struct come_regex*)come_increment_ref_count(multiple_assign_var1->v1);
    Err_275=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    if(    (_if_conditional1=(Err_275)),    /*f*/come_call_finalizer3(__right_value315,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional1) {
        __result253__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value317=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 68, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value2),(char*)come_increment_ref_count(Err_275))));
        /*i*/come_call_finalizer3(come_exception_var_b1_274,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */Err_275 = come_decrement_ref_count2(Err_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value317,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    __result254__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value319=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 68, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(come_exception_var_b1_274),((void*)0))));
    /*i*/come_call_finalizer3(come_exception_var_b1_274,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */Err_275 = come_decrement_ref_count2(Err_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value319,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var2 = (void*)0;
struct come_regex* come_exception_var_b2_276=0;
char* Err_277=0;
_Bool _if_conditional2;
struct come_regex* __null_value3;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct tuple2$2come_regexphcharph* __result255__;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct tuple2$2come_regexphcharph* __result256__;
memset(&__null_value3, 0, sizeof(struct come_regex*));
    multiple_assign_var2=((struct tuple2$2come_regexphcharph*)(__right_value321=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 73, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_exception_var_b2_276=(struct come_regex*)come_increment_ref_count(multiple_assign_var2->v1);
    Err_277=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    if(    (_if_conditional2=(Err_277)),    /*f*/come_call_finalizer3(__right_value321,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional2) {
        __result255__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value323=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 73, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value3),(char*)come_increment_ref_count(Err_277))));
        /*i*/come_call_finalizer3(come_exception_var_b2_276,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */Err_277 = come_decrement_ref_count2(Err_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value323,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    __result256__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value325=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 73, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(come_exception_var_b2_276),((void*)0))));
    /*i*/come_call_finalizer3(come_exception_var_b2_276,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */Err_277 = come_decrement_ref_count2(Err_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value325,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result257__;
void* __right_value326 = (void*)0;
struct come_regex* result_278;
void* __right_value327 = (void*)0;
char* __dec_obj39;
const char* err_279;
int erro_ofs_280;
struct come_regex* __result258__;
err_279 = (void*)0;
memset(&erro_ofs_280, 0, sizeof(int));
    if(    reg==((void*)0)) {
        __result257__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    result_278=(struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 83, "come_regex"));
    __dec_obj39=result_278->str;
    result_278->str=(char*)come_increment_ref_count(string_clone(reg->str));
    /*G*/ __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_278->ignore_case=reg->ignore_case;
    result_278->multiline=reg->multiline;
    result_278->global=reg->global;
    result_278->extended=reg->extended;
    result_278->dotall=reg->dotall;
    result_278->anchored=reg->anchored;
    result_278->dollar_endonly=reg->dollar_endonly;
    result_278->ungreedy=reg->ungreedy;
    result_278->options=reg->options;
    result_278->re=pcre_compile(result_278->str,result_278->options,&err_279,&erro_ofs_280,((void*)0));
    if(    result_278->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_278->str);
        stackframe();
        exit(1);
    }
    __result258__ = gComeFunResultObject = __result_obj__ = result_278;
    /*i*/come_call_finalizer3(result_278,come_regex_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

char* come_regex_to_string(struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value328 = (void*)0;
char* __result259__;
void* __right_value329 = (void*)0;
char* __result260__;
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result259__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value328=__builtin_string("")));
        /* U11 */__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    __result260__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value329=__builtin_string(reg->str)));
    /* U11 */__right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value330 = (void*)0;
char* result_281;
int i_282;
char* __result261__;
    result_281=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_282=0;    i_282<strlen(str);    i_282++    ){
        if(        str[i_282]>=65&&str[i_282]<=90) {
            result_281[i_282]=str[i_282]-65+97;
        }
    }
    __result261__ = gComeFunResultObject = __result_obj__ = result_281;
    /* U13 */result_281 = come_decrement_ref_count2(result_281, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value331 = (void*)0;
char* result_283;
int i_284;
char* __result262__;
    result_283=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_284=0;    i_284<strlen(str);    i_284++    ){
        if(        str[i_284]>=97&&str[i_284]<=122) {
            result_283[i_284]=str[i_284]-97+65;
        }
    }
    __result262__ = gComeFunResultObject = __result_obj__ = result_283;
    /* U13 */result_283 = come_decrement_ref_count2(result_283, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

int* wchar_tp_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value332 = (void*)0;
int* __result263__;
int len_285;
void* __right_value333 = (void*)0;
int* __result264__;
void* __right_value334 = (void*)0;
int* __result265__;
void* __right_value335 = (void*)0;
int* __result266__;
void* __right_value336 = (void*)0;
int* result_286;
int* __result267__;
    if(    str==((void*)0)) {
        __result263__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value332=__builtin_wstring("")));
        /* U11 */__right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    len_285=wcslen(str);
    if(    head<0) {
        head+=len_285;
    }
    if(    tail<0) {
        tail+=len_285+1;
    }
    if(    head>tail) {
        __result264__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value333=__builtin_wstring("")));
        /* U11 */__right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_285) {
        tail=len_285;
    }
    if(    head==tail) {
        __result265__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value334=__builtin_wstring("")));
        /* U11 */__right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    if(    tail-head+1<1) {
        __result266__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value335=__builtin_wstring("")));
        /* U11 */__right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    result_286=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(tail-head+1)), "libcomelang-str.c", 185, "int"));
    memcpy(result_286,str+head,sizeof(int)*(tail-head));
    result_286[tail-head]=0;
    __result267__ = gComeFunResultObject = __result_obj__ = result_286;
    /* U13 */result_286 = come_decrement_ref_count2(result_286, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
int* __result268__;
int len_287;
void* __right_value337 = (void*)0;
int* wstr_288;
int ret_289;
int* __result269__;
    if(    str==((void*)0)) {
        __result268__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    len_287=strlen(str);
    wstr_288=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_287+1)), "libcomelang-str.c", 200, "int"));
    ret_289=mbstowcs(wstr_288,str,len_287+1);
    wstr_288[ret_289]=0;
    if(    ret_289<0) {
        wstr_288[0]=0;
    }
    __result269__ = gComeFunResultObject = __result_obj__ = wstr_288;
    /* U13 */wstr_288 = come_decrement_ref_count2(wstr_288, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_290;
int len_291;
int i_292;
int len2_293;
int j_294;
memset(&j_294, 0, sizeof(int));
    n_290=0;
    len_291=strlen(str);
    for(    i_292=0;    i_292<len_291;    i_292++    ){
        len2_293=strlen(search_str);
        for(        j_294=0;        j_294<len2_293;        j_294++        ){
            if(            str[i_292+j_294]!=search_str[j_294]) {
                break;
            }
        }
        if(        j_294==len2_293) {
            n_290++;
            if(            n_290==count) {
                return i_292;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_295;
int result_299;
int offset_300;
const char* err_301;
int erro_ofs_302;
int options_303;
char* str_304;
struct real_pcre8_or_16* re_305;
int n_306;
int options_307;
int len_308;
int regex_result_309;
int i_310;
int i_311;
err_301 = (void*)0;
memset(&erro_ofs_302, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_295=16;
    int start_296[ovec_max_295];
    memset(&start_296, 0, sizeof(int)    *(ovec_max_295)    );
    int end_297[ovec_max_295];
    memset(&end_297, 0, sizeof(int)    *(ovec_max_295)    );
    int ovec_value_298[ovec_max_295*3];
    memset(&ovec_value_298, 0, sizeof(int)    *(ovec_max_295*3)    );
    result_299=default_value;
    offset_300=0;
    options_303=reg->options;
    str_304=reg->str;
    re_305=reg->re;
    n_306=0;
    while((_Bool)1) {
        options_307=2097152;
        len_308=strlen(self);
        regex_result_309=pcre_exec(re_305,(struct pcre_extra*)0,self,len_308,offset_300,options_307,ovec_value_298,ovec_max_295*3);
        for(        i_310=0;        i_310<ovec_max_295;        i_310++        ){
            start_296[i_310]=ovec_value_298[i_310*2];
        }
        for(        i_311=0;        i_311<ovec_max_295;        i_311++        ){
            end_297[i_311]=ovec_value_298[i_311*2+1];
        }
        if(        regex_result_309>0) {
            n_306++;
            if(            offset_300==end_297[0]) {
                offset_300++;
            }
            else {
                offset_300=end_297[0];
            }
            if(            n_306==count) {
                result_299=start_296[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_299;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_312;
char* p_313;
    len_312=strlen(search_str);
    p_313=str+strlen(str)-len_312;
    while(p_313>=str) {
        if(        strncmp(p_313,search_str,len_312)==0) {
            return p_313-str;
        }
        p_313--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_314;
int erro_ofs_315;
int options_316;
char* str_317;
struct real_pcre8_or_16* re_318;
void* __right_value338 = (void*)0;
char* self2_319;
int ovec_max_320;
int result_324;
int offset_325;
int options_326;
int len_327;
int regex_result_328;
int i_329;
int i_330;
int __result270__;
err_314 = (void*)0;
memset(&erro_ofs_315, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_316=reg->options;
    str_317=reg->str;
    re_318=reg->re;
    self2_319=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_320=16;
    int start_321[ovec_max_320];
    memset(&start_321, 0, sizeof(int)    *(ovec_max_320)    );
    int end_322[ovec_max_320];
    memset(&end_322, 0, sizeof(int)    *(ovec_max_320)    );
    int ovec_value_323[ovec_max_320*3];
    memset(&ovec_value_323, 0, sizeof(int)    *(ovec_max_320*3)    );
    result_324=default_value;
    offset_325=0;
    while((_Bool)1) {
        options_326=2097152;
        len_327=strlen(self2_319);
        regex_result_328=pcre_exec(re_318,(struct pcre_extra*)0,self2_319,len_327,offset_325,options_326,ovec_value_323,ovec_max_320*3);
        for(        i_329=0;        i_329<ovec_max_320;        i_329++        ){
            start_321[i_329]=ovec_value_323[i_329*2];
        }
        for(        i_330=0;        i_330<ovec_max_320;        i_330++        ){
            end_322[i_330]=ovec_value_323[i_330*2+1];
        }
        if(        regex_result_328==1||regex_result_328>0) {
            result_324=strlen(self)-1-start_321[0];
            break;
        }
        {
            break;
        }
    }
    __result270__ = result_324;
    /* U13 */self2_319 = come_decrement_ref_count2(self2_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result270__;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_331;
char* p_332;
int n_333;
    len_331=strlen(search_str);
    p_332=str+strlen(str)-len_331;
    n_333=0;
    while(p_332>=str) {
        if(        strncmp(p_332,search_str,len_331)==0) {
            n_333++;
            if(            n_333==count) {
                return p_332-str;
            }
        }
        p_332--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct list$1charph* __result271__;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct list$1charph* result_334;
int offset_335;
int ovec_max_336;
const char* err_340;
int erro_ofs_341;
int options_342;
char* str_343;
struct real_pcre8_or_16* re_344;
int options_345;
int len_346;
int regex_result_347;
int i_348;
int i_349;
void* __right_value343 = (void*)0;
char* str_350;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct list$1charph* group_strings_351;
void* __right_value346 = (void*)0;
char* str2_352;
void* __right_value347 = (void*)0;
char* str_353;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct list$1charph* group_strings_354;
int i_355;
void* __right_value350 = (void*)0;
char* match_string_356;
void* __right_value351 = (void*)0;
char* str2_357;
struct list$1charph* __result272__;
err_340 = (void*)0;
memset(&erro_ofs_341, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result271__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value340=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 395, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value340,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    result_334=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 398, "list$1charph"))));
    offset_335=0;
    ovec_max_336=16;
    int start_337[ovec_max_336];
    memset(&start_337, 0, sizeof(int)    *(ovec_max_336)    );
    int end_338[ovec_max_336];
    memset(&end_338, 0, sizeof(int)    *(ovec_max_336)    );
    int ovec_value_339[ovec_max_336*3];
    memset(&ovec_value_339, 0, sizeof(int)    *(ovec_max_336*3)    );
    options_342=reg->options;
    str_343=reg->str;
    re_344=reg->re;
    while((_Bool)1) {
        options_345=2097152;
        len_346=strlen(self);
        regex_result_347=pcre_exec(re_344,(struct pcre_extra*)0,self,len_346,offset_335,options_345,ovec_value_339,ovec_max_336*3);
        for(        i_348=0;        i_348<ovec_max_336;        i_348++        ){
            start_337[i_348]=ovec_value_339[i_348*2];
        }
        for(        i_349=0;        i_349<ovec_max_336;        i_349++        ){
            end_338[i_349]=ovec_value_339[i_349*2+1];
        }
        if(        regex_result_347==1) {
            str_350=(char*)come_increment_ref_count(charp_substring(self,start_337[0],end_338[0]));
            group_strings_351=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 432, "list$1charph"))));
            str2_352=(char*)come_increment_ref_count(block(parent,str_350,group_strings_351));
            list$1charph_push_back(result_334,(char*)come_increment_ref_count(str2_352));
            if(            offset_335==end_338[0]) {
                offset_335++;
            }
            else {
                offset_335=end_338[0];
            }
            /* U13 */str_350 = come_decrement_ref_count2(str_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_351,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_352 = come_decrement_ref_count2(str2_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_347>1) {
            str_353=(char*)come_increment_ref_count(charp_substring(self,start_337[0],end_338[0]));
            group_strings_354=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 449, "list$1charph"))));
            for(            i_355=1;            i_355<regex_result_347;            i_355++            ){
                match_string_356=(char*)come_increment_ref_count(charp_substring(self,start_337[i_355],end_338[i_355]));
                list$1charph_push_back(group_strings_354,(char*)come_increment_ref_count(match_string_356));
                /* U13 */match_string_356 = come_decrement_ref_count2(match_string_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_357=(char*)come_increment_ref_count(block(parent,str_353,group_strings_354));
            list$1charph_push_back(result_334,(char*)come_increment_ref_count(str2_357));
            if(            offset_335==end_338[0]) {
                offset_335++;
            }
            else {
                offset_335=end_338[0];
            }
            /* U13 */str_353 = come_decrement_ref_count2(str_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_354,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_357 = come_decrement_ref_count2(str2_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result272__ = gComeFunResultObject = __result_obj__ = result_334;
    /*i*/come_call_finalizer3(result_334,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct list$1charph* __result273__;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct list$1charph* result_358;
int offset_359;
int ovec_max_360;
const char* err_364;
int erro_ofs_365;
int options_366;
char* str_367;
struct real_pcre8_or_16* re_368;
int n_369;
int options_370;
int len_371;
int regex_result_372;
int i_373;
int i_374;
void* __right_value356 = (void*)0;
char* str_375;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct list$1charph* group_strings_376;
void* __right_value359 = (void*)0;
char* str2_377;
void* __right_value360 = (void*)0;
char* str_378;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct list$1charph* group_strings_379;
int i_380;
void* __right_value363 = (void*)0;
char* match_string_381;
void* __right_value364 = (void*)0;
char* str2_382;
struct list$1charph* __result274__;
err_364 = (void*)0;
memset(&erro_ofs_365, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result273__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value353=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 480, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value353,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    result_358=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 483, "list$1charph"))));
    offset_359=0;
    ovec_max_360=16;
    int start_361[ovec_max_360];
    memset(&start_361, 0, sizeof(int)    *(ovec_max_360)    );
    int end_362[ovec_max_360];
    memset(&end_362, 0, sizeof(int)    *(ovec_max_360)    );
    int ovec_value_363[ovec_max_360*3];
    memset(&ovec_value_363, 0, sizeof(int)    *(ovec_max_360*3)    );
    options_366=reg->options;
    str_367=reg->str;
    re_368=reg->re;
    n_369=0;
    while((_Bool)1) {
        options_370=2097152;
        len_371=strlen(self);
        regex_result_372=pcre_exec(re_368,(struct pcre_extra*)0,self,len_371,offset_359,options_370,ovec_value_363,ovec_max_360*3);
        for(        i_373=0;        i_373<ovec_max_360;        i_373++        ){
            start_361[i_373]=ovec_value_363[i_373*2];
        }
        for(        i_374=0;        i_374<ovec_max_360;        i_374++        ){
            end_362[i_374]=ovec_value_363[i_374*2+1];
        }
        if(        regex_result_372==1) {
            str_375=(char*)come_increment_ref_count(charp_substring(self,start_361[0],end_362[0]));
            group_strings_376=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 519, "list$1charph"))));
            str2_377=(char*)come_increment_ref_count(block(parent,str_375,group_strings_376));
            list$1charph_push_back(result_358,(char*)come_increment_ref_count(str2_377));
            if(            offset_359==end_362[0]) {
                offset_359++;
            }
            else {
                offset_359=end_362[0];
            }
            n_369++;
            if(            n_369==count) {
                /* U13 */str_375 = come_decrement_ref_count2(str_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_376,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */str2_377 = come_decrement_ref_count2(str2_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */str_375 = come_decrement_ref_count2(str_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_376,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_377 = come_decrement_ref_count2(str2_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_372>1) {
            str_378=(char*)come_increment_ref_count(charp_substring(self,start_361[0],end_362[0]));
            group_strings_379=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 541, "list$1charph"))));
            for(            i_380=1;            i_380<regex_result_372;            i_380++            ){
                match_string_381=(char*)come_increment_ref_count(charp_substring(self,start_361[i_380],end_362[i_380]));
                list$1charph_push_back(group_strings_379,(char*)come_increment_ref_count(match_string_381));
                /* U13 */match_string_381 = come_decrement_ref_count2(match_string_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_382=(char*)come_increment_ref_count(block(parent,str_378,group_strings_379));
            list$1charph_push_back(result_358,(char*)come_increment_ref_count(str2_382));
            if(            offset_359==end_362[0]) {
                offset_359++;
            }
            else {
                offset_359=end_362[0];
            }
            n_369++;
            if(            n_369==count) {
                /* U13 */str_378 = come_decrement_ref_count2(str_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_379,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */str2_382 = come_decrement_ref_count2(str2_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */str_378 = come_decrement_ref_count2(str_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_379,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_382 = come_decrement_ref_count2(str2_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result274__ = gComeFunResultObject = __result_obj__ = result_358;
    /*i*/come_call_finalizer3(result_358,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct list$1charph* __result275__;
const char* err_383;
int erro_ofs_384;
int options_385;
char* str_386;
struct real_pcre8_or_16* re_387;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct list$1charph* result_388;
int offset_389;
int ovec_max_390;
int options_394;
int len_395;
int regex_result_396;
int i_397;
int i_398;
void* __right_value369 = (void*)0;
char* str_399;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct list$1charph* match_strings_400;
void* __right_value372 = (void*)0;
char* str2_401;
void* __right_value373 = (void*)0;
char* str_402;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct list$1charph* match_strings_403;
int i_404;
void* __right_value376 = (void*)0;
char* match_str_405;
void* __right_value377 = (void*)0;
char* str2_406;
void* __right_value378 = (void*)0;
char* str_407;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1charph* match_strings_408;
void* __right_value381 = (void*)0;
char* str2_409;
struct list$1charph* __result276__;
err_383 = (void*)0;
memset(&erro_ofs_384, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result275__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value366=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 576, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value366,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    options_385=reg->options;
    str_386=reg->str;
    re_387=reg->re;
    result_388=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 586, "list$1charph"))));
    offset_389=0;
    ovec_max_390=16;
    int start_391[ovec_max_390];
    memset(&start_391, 0, sizeof(int)    *(ovec_max_390)    );
    int end_392[ovec_max_390];
    memset(&end_392, 0, sizeof(int)    *(ovec_max_390)    );
    int ovec_value_393[ovec_max_390*3];
    memset(&ovec_value_393, 0, sizeof(int)    *(ovec_max_390*3)    );
    while((_Bool)1) {
        options_394=2097152;
        len_395=strlen(self);
        regex_result_396=pcre_exec(re_387,(struct pcre_extra*)0,self,len_395,offset_389,options_394,ovec_value_393,ovec_max_390*3);
        for(        i_397=0;        i_397<ovec_max_390;        i_397++        ){
            start_391[i_397]=ovec_value_393[i_397*2];
        }
        for(        i_398=0;        i_398<ovec_max_390;        i_398++        ){
            end_392[i_398]=ovec_value_393[i_398*2+1];
        }
        if(        regex_result_396==1) {
            str_399=(char*)come_increment_ref_count(charp_substring(self,offset_389,start_391[0]));
            match_strings_400=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 613, "list$1charph"))));
            str2_401=(char*)come_increment_ref_count(block(parent,str_399,match_strings_400));
            list$1charph_push_back(result_388,(char*)come_increment_ref_count(str2_401));
            if(            offset_389==end_392[0]) {
                offset_389++;
            }
            else {
                offset_389=end_392[0];
            }
            /* U13 */str_399 = come_decrement_ref_count2(str_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_400,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_401 = come_decrement_ref_count2(str2_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_396>1) {
            str_402=(char*)come_increment_ref_count(charp_substring(self,offset_389,start_391[0]));
            if(            offset_389==end_392[0]) {
                offset_389++;
            }
            else {
                offset_389=end_392[0];
            }
            match_strings_403=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 636, "list$1charph"))));
            for(            i_404=1;            i_404<regex_result_396;            i_404++            ){
                match_str_405=(char*)come_increment_ref_count(charp_substring(self,start_391[i_404],end_392[i_404]));
                list$1charph_push_back(match_strings_403,(char*)come_increment_ref_count(match_str_405));
                /* U13 */match_str_405 = come_decrement_ref_count2(match_str_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_406=(char*)come_increment_ref_count(block(parent,str_402,match_strings_403));
            list$1charph_push_back(result_388,(char*)come_increment_ref_count(str2_406));
            /* U13 */str_402 = come_decrement_ref_count2(str_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_403,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_406 = come_decrement_ref_count2(str2_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    if(    offset_389<charp_length(self)) {
        str_407=(char*)come_increment_ref_count(charp_substring(self,offset_389,-1));
        match_strings_408=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 655, "list$1charph"))));
        str2_409=(char*)come_increment_ref_count(block(parent,str_407,match_strings_408));
        list$1charph_push_back(result_388,(char*)come_increment_ref_count(str2_409));
        /* U13 */str_407 = come_decrement_ref_count2(str_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(match_strings_408,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */str2_409 = come_decrement_ref_count2(str2_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result276__ = gComeFunResultObject = __result_obj__ = result_388;
    /*i*/come_call_finalizer3(result_388,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct list$1charph* __result277__;
const char* err_410;
int erro_ofs_411;
int options_412;
char* str_413;
struct real_pcre8_or_16* re_414;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct list$1charph* result_415;
int offset_416;
int ovec_max_417;
int n_421;
int options_422;
int len_423;
int regex_result_424;
int i_425;
int i_426;
void* __right_value386 = (void*)0;
char* str_427;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct list$1charph* match_strings_428;
void* __right_value389 = (void*)0;
char* str2_429;
void* __right_value390 = (void*)0;
char* str_430;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct list$1charph* match_strings_431;
int i_432;
void* __right_value393 = (void*)0;
char* match_str_433;
void* __right_value394 = (void*)0;
char* str2_434;
struct list$1charph* __result278__;
err_410 = (void*)0;
memset(&erro_ofs_411, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result277__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value383=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 666, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value383,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    options_412=reg->options;
    str_413=reg->str;
    re_414=reg->re;
    result_415=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 676, "list$1charph"))));
    offset_416=0;
    ovec_max_417=16;
    int start_418[ovec_max_417];
    memset(&start_418, 0, sizeof(int)    *(ovec_max_417)    );
    int end_419[ovec_max_417];
    memset(&end_419, 0, sizeof(int)    *(ovec_max_417)    );
    int ovec_value_420[ovec_max_417*3];
    memset(&ovec_value_420, 0, sizeof(int)    *(ovec_max_417*3)    );
    n_421=0;
    while((_Bool)1) {
        options_422=2097152;
        len_423=strlen(self);
        regex_result_424=pcre_exec(re_414,(struct pcre_extra*)0,self,len_423,offset_416,options_422,ovec_value_420,ovec_max_417*3);
        for(        i_425=0;        i_425<ovec_max_417;        i_425++        ){
            start_418[i_425]=ovec_value_420[i_425*2];
        }
        for(        i_426=0;        i_426<ovec_max_417;        i_426++        ){
            end_419[i_426]=ovec_value_420[i_426*2+1];
        }
        if(        regex_result_424==1) {
            str_427=(char*)come_increment_ref_count(charp_substring(self,offset_416,start_418[0]));
            match_strings_428=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 705, "list$1charph"))));
            str2_429=(char*)come_increment_ref_count(block(parent,str_427,match_strings_428));
            list$1charph_push_back(result_415,(char*)come_increment_ref_count(str2_429));
            if(            offset_416==end_419[0]) {
                offset_416++;
            }
            else {
                offset_416=end_419[0];
            }
            /* U13 */str_427 = come_decrement_ref_count2(str_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_428,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_429 = come_decrement_ref_count2(str2_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_424>1) {
            str_430=(char*)come_increment_ref_count(charp_substring(self,offset_416,start_418[0]));
            if(            offset_416==end_419[0]) {
                offset_416++;
            }
            else {
                offset_416=end_419[0];
            }
            match_strings_431=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 728, "list$1charph"))));
            for(            i_432=1;            i_432<regex_result_424;            i_432++            ){
                match_str_433=(char*)come_increment_ref_count(charp_substring(self,start_418[i_432],end_419[i_432]));
                list$1charph_push_back(match_strings_431,(char*)come_increment_ref_count(match_str_433));
                /* U13 */match_str_433 = come_decrement_ref_count2(match_str_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_434=(char*)come_increment_ref_count(block(parent,str_430,match_strings_431));
            list$1charph_push_back(result_415,(char*)come_increment_ref_count(str2_434));
            /* U13 */str_430 = come_decrement_ref_count2(str_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_431,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_434 = come_decrement_ref_count2(str2_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
        n_421++;
        if(        n_421==count) {
            break;
        }
    }
    __result278__ = gComeFunResultObject = __result_obj__ = result_415;
    /*i*/come_call_finalizer3(result_415,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
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
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct list$1charph* __result279__;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct list$1charph* result_435;
int offset_436;
int ovec_max_437;
const char* err_441;
int erro_ofs_442;
int options_443;
char* str_444;
struct real_pcre8_or_16* re_445;
int options_446;
int len_447;
int regex_result_448;
int i_449;
int i_450;
void* __right_value399 = (void*)0;
char* str_451;
void* __right_value400 = (void*)0;
char* str_452;
int i_453;
void* __right_value401 = (void*)0;
char* match_string_454;
struct list$1charph* __result280__;
err_441 = (void*)0;
memset(&erro_ofs_442, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result279__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value396=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 796, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value396,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    result_435=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 799, "list$1charph"))));
    offset_436=0;
    ovec_max_437=16;
    int start_438[ovec_max_437];
    memset(&start_438, 0, sizeof(int)    *(ovec_max_437)    );
    int end_439[ovec_max_437];
    memset(&end_439, 0, sizeof(int)    *(ovec_max_437)    );
    int ovec_value_440[ovec_max_437*3];
    memset(&ovec_value_440, 0, sizeof(int)    *(ovec_max_437*3)    );
    options_443=reg->options;
    str_444=reg->str;
    re_445=reg->re;
    while((_Bool)1) {
        options_446=2097152;
        len_447=strlen(self);
        regex_result_448=pcre_exec(re_445,(struct pcre_extra*)0,self,len_447,offset_436,options_446,ovec_value_440,ovec_max_437*3);
        for(        i_449=0;        i_449<ovec_max_437;        i_449++        ){
            start_438[i_449]=ovec_value_440[i_449*2];
        }
        for(        i_450=0;        i_450<ovec_max_437;        i_450++        ){
            end_439[i_450]=ovec_value_440[i_450*2+1];
        }
        if(        regex_result_448==1) {
            str_451=(char*)come_increment_ref_count(charp_substring(self,start_438[0],end_439[0]));
            list$1charph_push_back(result_435,(char*)come_increment_ref_count(str_451));
            if(            offset_436==end_439[0]) {
                offset_436++;
            }
            else {
                offset_436=end_439[0];
            }
            /* U13 */str_451 = come_decrement_ref_count2(str_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_448>1) {
            str_452=(char*)come_increment_ref_count(charp_substring(self,start_438[0],end_439[0]));
            list$1charph_push_back(result_435,(char*)come_increment_ref_count(str_452));
            if(            offset_436==end_439[0]) {
                offset_436++;
            }
            else {
                offset_436=end_439[0];
            }
            *num_group_string_in_regex=regex_result_448-1;
            for(            i_453=1;            i_453<regex_result_448;            i_453++            ){
                match_string_454=(char*)come_increment_ref_count(charp_substring(self,start_438[i_453],end_439[i_453]));
                list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_454));
                /* U13 */match_string_454 = come_decrement_ref_count2(match_string_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_452 = come_decrement_ref_count2(str_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result280__ = gComeFunResultObject = __result_obj__ = result_435;
    /*i*/come_call_finalizer3(result_435,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value402 = (void*)0;
char* result_455;
int len_456;
char* __result281__;
    result_455=(char*)come_increment_ref_count(__builtin_string(self));
    len_456=strlen(self);
    if(    self[len_456-1]==10) {
        result_455[len_456-1]=0;
    }
    else if(    self[len_456-1]==13) {
        result_455[len_456-1]=0;
    }
    else if(    len_456>2&&self[len_456-2]==13&&self[len_456-1]==10) {
        result_455[len_456-2]=0;
    }
    __result281__ = gComeFunResultObject = __result_obj__ = result_455;
    /* U13 */result_455 = come_decrement_ref_count2(result_455, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

char* wchar_tp_to_string(int* wstr){
void* __result_obj__=(void*)0;
int len_457;
void* __right_value403 = (void*)0;
char* result_458;
char* __result282__;
    len_457=6*(wcslen(wstr)+1);
    result_458=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_457)), "libcomelang-str.c", 894, "char"));
    if(    wcstombs(result_458,wstr,len_457)<0) {
        strncpy(result_458,"",len_457);
    }
    __result282__ = gComeFunResultObject = __result_obj__ = result_458;
    /* U13 */result_458 = come_decrement_ref_count2(result_458, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
int* __result283__;
    __result283__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value404=__builtin_wstring(str)));
    /* U11 */__right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

int wchar_tp_length(int* str){
    return wcslen(str);
}

int* wchar_tp_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_459;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
int* __result284__;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
int* __result285__;
void* __right_value409 = (void*)0;
int* sub_str_460;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
int* __result286__;
    len_459=wcslen(str);
    if(    len_459==0) {
        __result284__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value406=string_to_wstring(((char*)(__right_value405=wchar_tp_to_string(str))))));
        /* U11 */__right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    if(    head<0) {
        head+=len_459;
    }
    if(    tail<0) {
        tail+=len_459+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result285__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value408=string_to_wstring(((char*)(__right_value407=wchar_tp_to_string(str))))));
        /* U11 */__right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    if(    tail>=len_459) {
        tail=len_459;
    }
    sub_str_460=(int*)come_increment_ref_count(wchar_tp_substring(str,tail,-1));
    memcpy(str+head,sub_str_460,sizeof(int)*(wstring_length(sub_str_460)+1));
    __result286__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value411=string_to_wstring(((char*)(__right_value410=wchar_tp_to_string(str))))));
    /* U13 */sub_str_460 = come_decrement_ref_count2(sub_str_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

int wchar_tp_index(int* str, int* search_str, int default_value){
int* head_461;
    head_461=wcsstr(str,search_str);
    if(    head_461==((void*)0)) {
        return default_value;
    }
    return head_461-str;
}

int wchar_tp_rindex(int* str, int* search_str, int default_value){
int len_462;
int* p_463;
int len2_464;
_Bool result_465;
int i_466;
memset(&i_466, 0, sizeof(int));
    len_462=wcslen(search_str);
    p_463=str+wcslen(str)-len_462;
    while(p_463>=str) {
        len2_464=wcslen(p_463);
        result_465=(_Bool)1;
        for(        i_466=0;        i_466<len_462&&i_466<len2_464;        i_466++        ){
            if(            p_463[i_466]!=search_str[i_466]) {
                result_465=(_Bool)0;
            }
        }
        if(        result_465) {
            return (p_463-str);
        }
        p_463--;
    }
    return default_value;
}

int* wchar_tp_reverse(int* str){
void* __result_obj__=(void*)0;
int len_467;
void* __right_value412 = (void*)0;
int* result_468;
int i_469;
int* __result287__;
    len_467=wcslen(str);
    result_468=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_467+1)), "libcomelang-str.c", 994, "int"));
    for(    i_469=0;    i_469<len_467;    i_469++    ){
        result_468[i_469]=str[len_467-i_469-1];
    }
    result_468[len_467]=0;
    __result287__ = gComeFunResultObject = __result_obj__ = result_468;
    /* U13 */result_468 = come_decrement_ref_count2(result_468, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

int* wchar_tp_multiply(int* str, int n){
void* __result_obj__=(void*)0;
int len_470;
void* __right_value413 = (void*)0;
int* result_471;
int i_472;
int* __result288__;
    len_470=wcslen(str)*n+1;
    result_471=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_470)), "libcomelang-str.c", 1009, "int"));
    result_471[0]=0;
    for(    i_472=0;    i_472<n;    i_472++    ){
        wcscat(result_471,str);
    }
    __result288__ = gComeFunResultObject = __result_obj__ = result_471;
    /* U13 */result_471 = come_decrement_ref_count2(result_471, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

int* wchar_tp_printable(int* str){
void* __result_obj__=(void*)0;
int len_473;
void* __right_value414 = (void*)0;
int* result_474;
int n_475;
int i_476;
int c_477;
int* __result289__;
    len_473=wchar_tp_length(str);
    result_474=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_473*2+1)), "libcomelang-str.c", 1023, "int"));
    n_475=0;
    for(    i_476=0;    i_476<len_473;    i_476++    ){
        c_477=str[i_476];
        if(        (c_477>=0&&c_477<32)||c_477==127) {
            result_474[n_475++]=94;
            result_474[n_475++]=c_477+65-1;
        }
        else {
            result_474[n_475++]=c_477;
        }
    }
    result_474[n_475]=0;
    __result289__ = gComeFunResultObject = __result_obj__ = result_474;
    /* U13 */result_474 = come_decrement_ref_count2(result_474, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_478;
int ovec_max_479;
const char* err_483;
int erro_ofs_484;
int options_485;
char* str_486;
struct real_pcre8_or_16* re_487;
int n_488;
int options_489;
int len_490;
int regex_result_491;
int i_492;
int i_493;
int i_496;
void* __right_value415 = (void*)0;
char* match_string_497;
err_483 = (void*)0;
memset(&erro_ofs_484, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_478=0;
    ovec_max_479=16;
    int start_480[ovec_max_479];
    memset(&start_480, 0, sizeof(int)    *(ovec_max_479)    );
    int end_481[ovec_max_479];
    memset(&end_481, 0, sizeof(int)    *(ovec_max_479)    );
    int ovec_value_482[ovec_max_479*3];
    memset(&ovec_value_482, 0, sizeof(int)    *(ovec_max_479*3)    );
    options_485=reg->options;
    str_486=reg->str;
    re_487=reg->re;
    n_488=0;
    while((_Bool)1) {
        options_489=2097152;
        len_490=strlen(self);
        regex_result_491=pcre_exec(re_487,(struct pcre_extra*)0,self,len_490,offset_478,options_489,ovec_value_482,ovec_max_479*3);
        for(        i_492=0;        i_492<ovec_max_479;        i_492++        ){
            start_480[i_492]=ovec_value_482[i_492*2];
        }
        for(        i_493=0;        i_493<ovec_max_479;        i_493++        ){
            end_481[i_493]=ovec_value_482[i_493*2+1];
        }
        if(        regex_result_491==1||(group_strings==((void*)0)&&regex_result_491>0)) {
            n_488++;
            if(            n_488==count) {
                return (_Bool)1;
            }
            if(            offset_478==end_481[0]) {
                offset_478++;
            }
            else {
                offset_478=end_481[0];
            }
        }
        else if(        regex_result_491>1) {
            n_488++;
            list$1charph_reset(group_strings);
            for(            i_496=1;            i_496<regex_result_491;            i_496++            ){
                match_string_497=(char*)come_increment_ref_count(charp_substring(self,start_480[i_496],end_481[i_496]));
                list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_497));
                /* U13 */match_string_497 = come_decrement_ref_count2(match_string_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_488==count) {
                return (_Bool)1;
            }
            if(            offset_478==end_481[0]) {
                offset_478++;
            }
            else {
                offset_478=end_481[0];
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
struct list_item$1charph* it_494;
struct list_item$1charph* prev_it_495;
struct list$1charph* __result290__;
    it_494=self->head;
    while(it_494!=((void*)0)) {
        prev_it_495=it_494;
        it_494=it_494->next;
        /*i*/come_call_finalizer3(prev_it_495,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value416 = (void*)0;
int* __result291__;
    __result291__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value416=wchar_tp_multiply(str,n)));
    /* U11 */__right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

int* wstring_operator_mult(int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value417 = (void*)0;
int* __result292__;
    __result292__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value417=wchar_tp_multiply(str,n)));
    /* U11 */__right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value418 = (void*)0;
int* result_498;
int* __result293__;
    result_498=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str.c", 1194, "int"));
    wcscpy(result_498,left);
    wcscat(result_498,right);
    __result293__ = gComeFunResultObject = __result_obj__ = result_498;
    /* U13 */result_498 = come_decrement_ref_count2(result_498, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

int* wstring_operator_add(int* left, int* right){
void* __result_obj__=(void*)0;
void* __right_value419 = (void*)0;
int* result_499;
int* __result294__;
    result_499=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str.c", 1204, "int"));
    wcscpy(result_499,left);
    wcscat(result_499,right);
    __result294__ = gComeFunResultObject = __result_obj__ = result_499;
    /* U13 */result_499 = come_decrement_ref_count2(result_499, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_500;
    head_500=strstr(str,search_str);
    if(    head_500==((void*)0)) {
        return default_value;
    }
    return head_500-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_501;
int result_505;
int offset_506;
const char* err_507;
int erro_ofs_508;
int options_509;
char* str_510;
struct real_pcre8_or_16* re_511;
int options_512;
int len_513;
int regex_result_514;
int i_515;
int i_516;
err_507 = (void*)0;
memset(&erro_ofs_508, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_501=16;
    int start_502[ovec_max_501];
    memset(&start_502, 0, sizeof(int)    *(ovec_max_501)    );
    int end_503[ovec_max_501];
    memset(&end_503, 0, sizeof(int)    *(ovec_max_501)    );
    int ovec_value_504[ovec_max_501*3];
    memset(&ovec_value_504, 0, sizeof(int)    *(ovec_max_501*3)    );
    result_505=default_value;
    offset_506=0;
    options_509=reg->options;
    str_510=reg->str;
    re_511=reg->re;
    while((_Bool)1) {
        options_512=2097152;
        len_513=strlen(self);
        regex_result_514=pcre_exec(re_511,(struct pcre_extra*)0,self,len_513,offset_506,options_512,ovec_value_504,ovec_max_501*3);
        for(        i_515=0;        i_515<ovec_max_501;        i_515++        ){
            start_502[i_515]=ovec_value_504[i_515*2];
        }
        for(        i_516=0;        i_516<ovec_max_501;        i_516++        ){
            end_503[i_516]=ovec_value_504[i_516*2+1];
        }
        if(        regex_result_514==1||regex_result_514>0) {
            result_505=start_502[0];
            break;
        }
        {
            break;
        }
    }
    return result_505;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_517;
void* __right_value420 = (void*)0;
char* __result295__;
void* __right_value421 = (void*)0;
char* __result296__;
    len_517=strlen(self);
    if(    strcmp(self,"")==0) {
        __result295__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value420=__builtin_string(self)));
        /* U11 */__right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    if(    index<0) {
        index+=len_517;
    }
    if(    index>=len_517) {
        index=len_517-1;
    }
    if(    index<0) {
        index=0;
    }
    self[index]=c;
    __result296__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value421=__builtin_string(self)));
    /* U11 */__right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_518;
void* __right_value422 = (void*)0;
char* result_519;
int i_520;
char* __result297__;
    len_518=strlen(str)*n+1;
    result_519=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_518)), "libcomelang-str.c", 1305, "char"));
    result_519[0]=0;
    for(    i_520=0;    i_520<n;    i_520++    ){
        strcat(result_519,str);
    }
    __result297__ = gComeFunResultObject = __result_obj__ = result_519;
    /* U13 */result_519 = come_decrement_ref_count2(result_519, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
void* __right_value423 = (void*)0;
char* __result298__;
int offset_521;
int ovec_max_522;
const char* err_526;
int erro_ofs_527;
int options_528;
char* str_529;
struct real_pcre8_or_16* re_530;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct buffer* result_531;
int options_532;
int len_533;
int regex_result_534;
int i_535;
int i_536;
void* __right_value426 = (void*)0;
char* str_537;
void* __right_value427 = (void*)0;
char* str_538;
void* __right_value428 = (void*)0;
char* str_539;
void* __right_value429 = (void*)0;
char* __result299__;
err_526 = (void*)0;
memset(&erro_ofs_527, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result298__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value423=__builtin_string(self)));
        /* U11 */__right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    offset_521=0;
    ovec_max_522=16;
    int start_523[ovec_max_522];
    memset(&start_523, 0, sizeof(int)    *(ovec_max_522)    );
    int end_524[ovec_max_522];
    memset(&end_524, 0, sizeof(int)    *(ovec_max_522)    );
    int ovec_value_525[ovec_max_522*3];
    memset(&ovec_value_525, 0, sizeof(int)    *(ovec_max_522*3)    );
    options_528=reg->options;
    str_529=reg->str;
    re_530=reg->re;
    result_531=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1336, "buffer"))));
    while((_Bool)1) {
        options_532=2097152;
        len_533=strlen(self);
        regex_result_534=pcre_exec(re_530,(struct pcre_extra*)0,self,len_533,offset_521,options_532,ovec_value_525,ovec_max_522*3);
        for(        i_535=0;        i_535<ovec_max_522;        i_535++        ){
            start_523[i_535]=ovec_value_525[i_535*2];
        }
        for(        i_536=0;        i_536<ovec_max_522;        i_536++        ){
            end_524[i_536]=ovec_value_525[i_536*2+1];
        }
        if(        regex_result_534==1) {
            str_537=(char*)come_increment_ref_count(charp_substring(self,offset_521,start_523[0]));
            buffer_append_str(result_531,str_537);
            buffer_append_str(result_531,replace);
            if(            offset_521==end_524[0]) {
                offset_521++;
            }
            else {
                offset_521=end_524[0];
            }
            if(            !reg->global) {
                str_538=(char*)come_increment_ref_count(charp_substring(self,offset_521,-1));
                buffer_append_str(result_531,str_538);
                /* U13 */str_538 = come_decrement_ref_count2(str_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_537 = come_decrement_ref_count2(str_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_538 = come_decrement_ref_count2(str_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_537 = come_decrement_ref_count2(str_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_539=(char*)come_increment_ref_count(charp_substring(self,offset_521,-1));
            buffer_append_str(result_531,str_539);
            /* U13 */str_539 = come_decrement_ref_count2(str_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_539 = come_decrement_ref_count2(str_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result299__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value429=buffer_to_string(result_531)));
    /*i*/come_call_finalizer3(result_531,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
void* __right_value430 = (void*)0;
char* __result300__;
int offset_540;
int ovec_max_541;
const char* err_545;
int erro_ofs_546;
int options_547;
char* str_548;
struct real_pcre8_or_16* re_549;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct buffer* result_550;
int n_551;
int options_552;
int len_553;
int regex_result_554;
int i_555;
int i_556;
void* __right_value433 = (void*)0;
char* str_557;
void* __right_value434 = (void*)0;
char* str_558;
void* __right_value435 = (void*)0;
char* str_559;
void* __right_value436 = (void*)0;
char* str_560;
void* __right_value437 = (void*)0;
char* __result301__;
err_545 = (void*)0;
memset(&erro_ofs_546, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result300__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value430=__builtin_string(self)));
        /* U11 */__right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    offset_540=0;
    ovec_max_541=16;
    int start_542[ovec_max_541];
    memset(&start_542, 0, sizeof(int)    *(ovec_max_541)    );
    int end_543[ovec_max_541];
    memset(&end_543, 0, sizeof(int)    *(ovec_max_541)    );
    int ovec_value_544[ovec_max_541*3];
    memset(&ovec_value_544, 0, sizeof(int)    *(ovec_max_541*3)    );
    options_547=reg->options;
    str_548=reg->str;
    re_549=reg->re;
    result_550=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1402, "buffer"))));
    n_551=0;
    while((_Bool)1) {
        options_552=2097152;
        len_553=strlen(self);
        regex_result_554=pcre_exec(re_549,(struct pcre_extra*)0,self,len_553,offset_540,options_552,ovec_value_544,ovec_max_541*3);
        for(        i_555=0;        i_555<ovec_max_541;        i_555++        ){
            start_542[i_555]=ovec_value_544[i_555*2];
        }
        for(        i_556=0;        i_556<ovec_max_541;        i_556++        ){
            end_543[i_556]=ovec_value_544[i_556*2+1];
        }
        if(        regex_result_554==1) {
            n_551++;
            str_557=(char*)come_increment_ref_count(charp_substring(self,offset_540,start_542[0]));
            buffer_append_str(result_550,str_557);
            buffer_append_str(result_550,replace);
            if(            offset_540==end_543[0]) {
                offset_540++;
            }
            else {
                offset_540=end_543[0];
            }
            if(            !reg->global) {
                str_558=(char*)come_increment_ref_count(charp_substring(self,offset_540,-1));
                buffer_append_str(result_550,str_558);
                /* U13 */str_558 = come_decrement_ref_count2(str_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_557 = come_decrement_ref_count2(str_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_558 = come_decrement_ref_count2(str_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_551==count) {
                str_559=(char*)come_increment_ref_count(charp_substring(self,offset_540,-1));
                buffer_append_str(result_550,str_559);
                /* U13 */str_559 = come_decrement_ref_count2(str_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_557 = come_decrement_ref_count2(str_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_559 = come_decrement_ref_count2(str_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_557 = come_decrement_ref_count2(str_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_560=(char*)come_increment_ref_count(charp_substring(self,offset_540,-1));
            buffer_append_str(result_550,str_560);
            /* U13 */str_560 = come_decrement_ref_count2(str_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_560 = come_decrement_ref_count2(str_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result301__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value437=buffer_to_string(result_550)));
    /*i*/come_call_finalizer3(result_550,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct list$1charph* result_561;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct buffer* buf_562;
int i_563;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1charph* __result302__;
    result_561=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1461, "list$1charph"))));
    buf_562=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1463, "buffer"))));
    for(    i_563=0;    i_563<charp_length(self);    i_563++    ){
        if(        strstr(self+i_563,str)==self+i_563) {
            list$1charph_push_back(result_561,(char*)come_increment_ref_count(__builtin_string(buf_562->buf)));
            buffer_reset(buf_562);
            i_563+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_562,self[i_563]);
        }
    }
    if(    buffer_length(buf_562)!=0) {
        list$1charph_push_back(result_561,(char*)come_increment_ref_count(__builtin_string(buf_562->buf)));
    }
    __result302__ = gComeFunResultObject = __result_obj__ = result_561;
    /*i*/come_call_finalizer3(result_561,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_562,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct list$1charph* __result303__;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct list$1charph* result_564;
int offset_565;
int ovec_max_566;
const char* err_570;
int erro_ofs_571;
int options_572;
char* str_573;
struct real_pcre8_or_16* re_574;
int options_575;
int len_576;
int regex_result_577;
int i_578;
int i_579;
void* __right_value448 = (void*)0;
char* str_580;
void* __right_value449 = (void*)0;
char* str_581;
int i_582;
void* __right_value450 = (void*)0;
char* match_string_583;
struct list$1charph* __result304__;
err_570 = (void*)0;
memset(&erro_ofs_571, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result303__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value445=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1485, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value445,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    result_564=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1487, "list$1charph"))));
    offset_565=0;
    ovec_max_566=16;
    int start_567[ovec_max_566];
    memset(&start_567, 0, sizeof(int)    *(ovec_max_566)    );
    int end_568[ovec_max_566];
    memset(&end_568, 0, sizeof(int)    *(ovec_max_566)    );
    int ovec_value_569[ovec_max_566*3];
    memset(&ovec_value_569, 0, sizeof(int)    *(ovec_max_566*3)    );
    options_572=reg->options;
    str_573=reg->str;
    re_574=reg->re;
    while((_Bool)1) {
        options_575=2097152;
        len_576=strlen(self);
        regex_result_577=pcre_exec(re_574,(struct pcre_extra*)0,self,len_576,offset_565,options_575,ovec_value_569,ovec_max_566*3);
        for(        i_578=0;        i_578<ovec_max_566;        i_578++        ){
            start_567[i_578]=ovec_value_569[i_578*2];
        }
        for(        i_579=0;        i_579<ovec_max_566;        i_579++        ){
            end_568[i_579]=ovec_value_569[i_579*2+1];
        }
        if(        regex_result_577==1) {
            str_580=(char*)come_increment_ref_count(charp_substring(self,start_567[0],end_568[0]));
            list$1charph_push_back(result_564,(char*)come_increment_ref_count(str_580));
            if(            offset_565==end_568[0]) {
                offset_565++;
            }
            else {
                offset_565=end_568[0];
            }
            /* U13 */str_580 = come_decrement_ref_count2(str_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_577>1) {
            str_581=(char*)come_increment_ref_count(charp_substring(self,start_567[0],end_568[0]));
            list$1charph_push_back(result_564,(char*)come_increment_ref_count(str_581));
            if(            offset_565==end_568[0]) {
                offset_565++;
            }
            else {
                offset_565=end_568[0];
            }
            for(            i_582=1;            i_582<regex_result_577;            i_582++            ){
                match_string_583=(char*)come_increment_ref_count(charp_substring(self,start_567[i_582],end_568[i_582]));
                list$1charph_push_back(result_564,(char*)come_increment_ref_count(match_string_583));
                /* U13 */match_string_583 = come_decrement_ref_count2(match_string_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_581 = come_decrement_ref_count2(str_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result304__ = gComeFunResultObject = __result_obj__ = result_564;
    /*i*/come_call_finalizer3(result_564,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1charph* __result305__;
const char* err_584;
int erro_ofs_585;
int options_586;
char* str_587;
struct real_pcre8_or_16* re_588;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct list$1charph* result_589;
int offset_590;
int ovec_max_591;
int options_595;
int len_596;
int regex_result_597;
int i_598;
int i_599;
void* __right_value455 = (void*)0;
char* str_600;
void* __right_value456 = (void*)0;
char* str_601;
int i_602;
void* __right_value457 = (void*)0;
char* match_str_603;
void* __right_value458 = (void*)0;
char* str_604;
struct list$1charph* __result306__;
err_584 = (void*)0;
memset(&erro_ofs_585, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result305__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value452=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1561, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value452,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    options_586=reg->options;
    str_587=reg->str;
    re_588=reg->re;
    result_589=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1571, "list$1charph"))));
    offset_590=0;
    ovec_max_591=16;
    int start_592[ovec_max_591];
    memset(&start_592, 0, sizeof(int)    *(ovec_max_591)    );
    int end_593[ovec_max_591];
    memset(&end_593, 0, sizeof(int)    *(ovec_max_591)    );
    int ovec_value_594[ovec_max_591*3];
    memset(&ovec_value_594, 0, sizeof(int)    *(ovec_max_591*3)    );
    while((_Bool)1) {
        options_595=2097152;
        len_596=strlen(self);
        regex_result_597=pcre_exec(re_588,(struct pcre_extra*)0,self,len_596,offset_590,options_595,ovec_value_594,ovec_max_591*3);
        for(        i_598=0;        i_598<ovec_max_591;        i_598++        ){
            start_592[i_598]=ovec_value_594[i_598*2];
        }
        for(        i_599=0;        i_599<ovec_max_591;        i_599++        ){
            end_593[i_599]=ovec_value_594[i_599*2+1];
        }
        if(        regex_result_597==1) {
            str_600=(char*)come_increment_ref_count(charp_substring(self,offset_590,start_592[0]));
            list$1charph_push_back(result_589,(char*)come_increment_ref_count(str_600));
            if(            offset_590==end_593[0]) {
                offset_590++;
            }
            else {
                offset_590=end_593[0];
            }
            /* U13 */str_600 = come_decrement_ref_count2(str_600, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_597>1) {
            str_601=(char*)come_increment_ref_count(charp_substring(self,offset_590,start_592[0]));
            list$1charph_push_back(result_589,(char*)come_increment_ref_count(str_601));
            if(            offset_590==end_593[0]) {
                offset_590++;
            }
            else {
                offset_590=end_593[0];
            }
            for(            i_602=1;            i_602<regex_result_597;            i_602++            ){
                match_str_603=(char*)come_increment_ref_count(charp_substring(self,start_592[i_602],end_593[i_602]));
                list$1charph_push_back(result_589,(char*)come_increment_ref_count(match_str_603));
                /* U13 */match_str_603 = come_decrement_ref_count2(match_str_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_601 = come_decrement_ref_count2(str_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    if(    offset_590<charp_length(self)) {
        str_604=(char*)come_increment_ref_count(charp_substring(self,offset_590,-1));
        list$1charph_push_back(result_589,(char*)come_increment_ref_count(str_604));
        /* U13 */str_604 = come_decrement_ref_count2(str_604, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result306__ = gComeFunResultObject = __result_obj__ = result_589;
    /*i*/come_call_finalizer3(result_589,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_605;
int ovec_max_606;
const char* err_610;
int erro_ofs_611;
int options_612;
char* str_613;
struct real_pcre8_or_16* re_614;
int options_615;
int len_616;
int regex_result_617;
int i_618;
int i_619;
err_610 = (void*)0;
memset(&erro_ofs_611, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_605=0;
    ovec_max_606=16;
    int start_607[ovec_max_606];
    memset(&start_607, 0, sizeof(int)    *(ovec_max_606)    );
    int end_608[ovec_max_606];
    memset(&end_608, 0, sizeof(int)    *(ovec_max_606)    );
    int ovec_value_609[ovec_max_606*3];
    memset(&ovec_value_609, 0, sizeof(int)    *(ovec_max_606*3)    );
    options_612=reg->options;
    str_613=reg->str;
    re_614=reg->re;
    while((_Bool)1) {
        options_615=2097152;
        len_616=strlen(self);
        regex_result_617=pcre_exec(re_614,(struct pcre_extra*)0,self,len_616,offset_605,options_615,ovec_value_609,ovec_max_606*3);
        for(        i_618=0;        i_618<ovec_max_606;        i_618++        ){
            start_607[i_618]=ovec_value_609[i_618*2];
        }
        for(        i_619=0;        i_619<ovec_max_606;        i_619++        ){
            end_608[i_619]=ovec_value_609[i_619*2+1];
        }
        if(        regex_result_617>0) {
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
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct list$1charph* __result307__;
const char* err_620;
int erro_ofs_621;
int options_622;
char* str_623;
struct real_pcre8_or_16* re_624;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct list$1charph* result_625;
int offset_626;
int ovec_max_627;
int n_631;
int options_632;
int len_633;
int regex_result_634;
int i_635;
int i_636;
void* __right_value463 = (void*)0;
char* str_637;
void* __right_value464 = (void*)0;
char* str_638;
int i_639;
void* __right_value465 = (void*)0;
char* match_str_640;
void* __right_value466 = (void*)0;
char* str_641;
struct list$1charph* __result308__;
err_620 = (void*)0;
memset(&erro_ofs_621, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result307__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value460=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1689, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value460,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    options_622=reg->options;
    str_623=reg->str;
    re_624=reg->re;
    result_625=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1699, "list$1charph"))));
    offset_626=0;
    ovec_max_627=16;
    int start_628[ovec_max_627];
    memset(&start_628, 0, sizeof(int)    *(ovec_max_627)    );
    int end_629[ovec_max_627];
    memset(&end_629, 0, sizeof(int)    *(ovec_max_627)    );
    int ovec_value_630[ovec_max_627*3];
    memset(&ovec_value_630, 0, sizeof(int)    *(ovec_max_627*3)    );
    n_631=0;
    while((_Bool)1) {
        options_632=2097152;
        len_633=strlen(self);
        regex_result_634=pcre_exec(re_624,(struct pcre_extra*)0,self,len_633,offset_626,options_632,ovec_value_630,ovec_max_627*3);
        for(        i_635=0;        i_635<ovec_max_627;        i_635++        ){
            start_628[i_635]=ovec_value_630[i_635*2];
        }
        for(        i_636=0;        i_636<ovec_max_627;        i_636++        ){
            end_629[i_636]=ovec_value_630[i_636*2+1];
        }
        if(        regex_result_634==1) {
            str_637=(char*)come_increment_ref_count(charp_substring(self,offset_626,start_628[0]));
            list$1charph_push_back(result_625,(char*)come_increment_ref_count(str_637));
            if(            offset_626==end_629[0]) {
                offset_626++;
            }
            else {
                offset_626=end_629[0];
            }
            /* U13 */str_637 = come_decrement_ref_count2(str_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_634>1) {
            str_638=(char*)come_increment_ref_count(charp_substring(self,offset_626,start_628[0]));
            list$1charph_push_back(result_625,(char*)come_increment_ref_count(str_638));
            if(            offset_626==end_629[0]) {
                offset_626++;
            }
            else {
                offset_626=end_629[0];
            }
            for(            i_639=1;            i_639<regex_result_634;            i_639++            ){
                match_str_640=(char*)come_increment_ref_count(charp_substring(self,start_628[i_639],end_629[i_639]));
                list$1charph_push_back(result_625,(char*)come_increment_ref_count(match_str_640));
                /* U13 */match_str_640 = come_decrement_ref_count2(match_str_640, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_638 = come_decrement_ref_count2(str_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
        n_631++;
        if(        maxsplit==n_631) {
            break;
        }
    }
    if(    offset_626<charp_length(self)) {
        str_641=(char*)come_increment_ref_count(charp_substring(self,offset_626,-1));
        list$1charph_push_back(result_625,(char*)come_increment_ref_count(str_641));
        /* U13 */str_641 = come_decrement_ref_count2(str_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result308__ = gComeFunResultObject = __result_obj__ = result_625;
    /*i*/come_call_finalizer3(result_625,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_642;
int erro_ofs_643;
int options_644;
char* str_645;
struct real_pcre8_or_16* re_646;
void* __right_value467 = (void*)0;
char* self2_647;
int ovec_max_648;
int result_652;
int offset_653;
int n_654;
int options_655;
int len_656;
int regex_result_657;
int i_658;
int i_659;
int __result309__;
err_642 = (void*)0;
memset(&erro_ofs_643, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_644=reg->options;
    str_645=reg->str;
    re_646=reg->re;
    self2_647=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_648=16;
    int start_649[ovec_max_648];
    memset(&start_649, 0, sizeof(int)    *(ovec_max_648)    );
    int end_650[ovec_max_648];
    memset(&end_650, 0, sizeof(int)    *(ovec_max_648)    );
    int ovec_value_651[ovec_max_648*3];
    memset(&ovec_value_651, 0, sizeof(int)    *(ovec_max_648*3)    );
    result_652=default_value;
    offset_653=0;
    n_654=0;
    while((_Bool)1) {
        options_655=2097152;
        len_656=strlen(self2_647);
        regex_result_657=pcre_exec(re_646,(struct pcre_extra*)0,self2_647,len_656,offset_653,options_655,ovec_value_651,ovec_max_648*3);
        for(        i_658=0;        i_658<ovec_max_648;        i_658++        ){
            start_649[i_658]=ovec_value_651[i_658*2];
        }
        for(        i_659=0;        i_659<ovec_max_648;        i_659++        ){
            end_650[i_659]=ovec_value_651[i_659*2+1];
        }
        if(        regex_result_657>0) {
            n_654++;
            if(            offset_653==end_650[0]) {
                offset_653++;
            }
            else {
                offset_653=end_650[0];
            }
            if(            n_654==count) {
                result_652=strlen(self)-end_650[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result309__ = result_652;
    /* U13 */self2_647 = come_decrement_ref_count2(self2_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result309__;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_660;
int ovec_max_661;
const char* err_665;
int erro_ofs_666;
int options_667;
char* str_668;
struct real_pcre8_or_16* re_669;
int n_670;
int options_671;
int len_672;
int regex_result_673;
int i_674;
int i_675;
err_665 = (void*)0;
memset(&erro_ofs_666, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_660=0;
    ovec_max_661=16;
    int start_662[ovec_max_661];
    memset(&start_662, 0, sizeof(int)    *(ovec_max_661)    );
    int end_663[ovec_max_661];
    memset(&end_663, 0, sizeof(int)    *(ovec_max_661)    );
    int ovec_value_664[ovec_max_661*3];
    memset(&ovec_value_664, 0, sizeof(int)    *(ovec_max_661*3)    );
    options_667=reg->options;
    str_668=reg->str;
    re_669=reg->re;
    n_670=0;
    while((_Bool)1) {
        options_671=2097152;
        len_672=strlen(self);
        regex_result_673=pcre_exec(re_669,(struct pcre_extra*)0,self,len_672,offset_660,options_671,ovec_value_664,ovec_max_661*3);
        for(        i_674=0;        i_674<ovec_max_661;        i_674++        ){
            start_662[i_674]=ovec_value_664[i_674*2];
        }
        for(        i_675=0;        i_675<ovec_max_661;        i_675++        ){
            end_663[i_675]=ovec_value_664[i_675*2+1];
        }
        if(        regex_result_673>0) {
            n_670++;
            if(            count==n_670) {
                return (_Bool)1;
            }
            if(            offset_660==end_663[0]) {
                offset_660++;
            }
            else {
                offset_660=end_663[0];
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
void* __right_value468 = (void*)0;
char* __result310__;
int offset_676;
int ovec_max_677;
const char* err_681;
int erro_ofs_682;
int options_683;
char* str_684;
struct real_pcre8_or_16* re_685;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct buffer* result_686;
int options_687;
int len_688;
int regex_result_689;
int i_690;
int i_691;
void* __right_value471 = (void*)0;
char* str_692;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct list$1charph* group_strings_693;
void* __right_value474 = (void*)0;
char* match_string_694;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
char* block_result_695;
void* __right_value477 = (void*)0;
char* str_696;
void* __right_value478 = (void*)0;
char* str_697;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct list$1charph* group_strings_698;
int i_699;
void* __right_value481 = (void*)0;
char* match_string_700;
void* __right_value482 = (void*)0;
char* match_string_701;
void* __right_value483 = (void*)0;
char* block_result_702;
void* __right_value484 = (void*)0;
char* str_703;
void* __right_value485 = (void*)0;
char* str_704;
void* __right_value486 = (void*)0;
char* __result311__;
err_681 = (void*)0;
memset(&erro_ofs_682, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result310__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value468=__builtin_string("")));
        /* U11 */__right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    offset_676=0;
    ovec_max_677=16;
    int start_678[ovec_max_677];
    memset(&start_678, 0, sizeof(int)    *(ovec_max_677)    );
    int end_679[ovec_max_677];
    memset(&end_679, 0, sizeof(int)    *(ovec_max_677)    );
    int ovec_value_680[ovec_max_677*3];
    memset(&ovec_value_680, 0, sizeof(int)    *(ovec_max_677*3)    );
    options_683=reg->options;
    str_684=reg->str;
    re_685=reg->re;
    result_686=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1920, "buffer"))));
    while((_Bool)1) {
        options_687=2097152;
        len_688=strlen(self);
        regex_result_689=pcre_exec(re_685,(struct pcre_extra*)0,self,len_688,offset_676,options_687,ovec_value_680,ovec_max_677*3);
        for(        i_690=0;        i_690<ovec_max_677;        i_690++        ){
            start_678[i_690]=ovec_value_680[i_690*2];
        }
        for(        i_691=0;        i_691<ovec_max_677;        i_691++        ){
            end_679[i_691]=ovec_value_680[i_691*2+1];
        }
        if(        regex_result_689==1) {
            str_692=(char*)come_increment_ref_count(charp_substring(self,offset_676,start_678[0]));
            buffer_append_str(result_686,str_692);
            group_strings_693=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1940, "list$1charph"))));
            match_string_694=(char*)come_increment_ref_count(charp_substring(self,start_678[0],end_679[0]));
            list$1charph_push_back(group_strings_693,(char*)come_increment_ref_count(charp_substring(self,start_678[0],end_679[0])));
            block_result_695=(char*)come_increment_ref_count(block(parent,match_string_694,group_strings_693));
            buffer_append_str(result_686,block_result_695);
            if(            offset_676==end_679[0]) {
                offset_676++;
            }
            else {
                offset_676=end_679[0];
            }
            if(            !reg->global) {
                str_696=(char*)come_increment_ref_count(charp_substring(self,offset_676,-1));
                buffer_append_str(result_686,str_696);
                /* U13 */str_696 = come_decrement_ref_count2(str_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_692 = come_decrement_ref_count2(str_692, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_693,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_694 = come_decrement_ref_count2(match_string_694, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_695 = come_decrement_ref_count2(block_result_695, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_696 = come_decrement_ref_count2(str_696, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_692 = come_decrement_ref_count2(str_692, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_693,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_694 = come_decrement_ref_count2(match_string_694, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_695 = come_decrement_ref_count2(block_result_695, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_689>1) {
            str_697=(char*)come_increment_ref_count(charp_substring(self,offset_676,start_678[0]));
            buffer_append_str(result_686,str_697);
            if(            offset_676==end_679[0]) {
                offset_676++;
            }
            else {
                offset_676=end_679[0];
            }
            group_strings_698=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1975, "list$1charph"))));
            for(            i_699=1;            i_699<regex_result_689;            i_699++            ){
                match_string_700=(char*)come_increment_ref_count(charp_substring(self,start_678[i_699],end_679[i_699]));
                list$1charph_push_back(group_strings_698,(char*)come_increment_ref_count(match_string_700));
                /* U13 */match_string_700 = come_decrement_ref_count2(match_string_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            match_string_701=(char*)come_increment_ref_count(charp_substring(self,start_678[0],end_679[0]));
            block_result_702=(char*)come_increment_ref_count(block(parent,match_string_701,group_strings_698));
            buffer_append_str(result_686,block_result_702);
            if(            !reg->global) {
                str_703=(char*)come_increment_ref_count(charp_substring(self,offset_676,-1));
                buffer_append_str(result_686,str_703);
                /* U13 */str_703 = come_decrement_ref_count2(str_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_697 = come_decrement_ref_count2(str_697, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_698,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_701 = come_decrement_ref_count2(match_string_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_702 = come_decrement_ref_count2(block_result_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_703 = come_decrement_ref_count2(str_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_697 = come_decrement_ref_count2(str_697, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_698,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_701 = come_decrement_ref_count2(match_string_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_702 = come_decrement_ref_count2(block_result_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_704=(char*)come_increment_ref_count(charp_substring(self,offset_676,-1));
            buffer_append_str(result_686,str_704);
            /* U13 */str_704 = come_decrement_ref_count2(str_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_704 = come_decrement_ref_count2(str_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result311__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value486=buffer_to_string(result_686)));
    /*i*/come_call_finalizer3(result_686,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value487 = (void*)0;
char* __result312__;
int offset_705;
int ovec_max_706;
const char* err_710;
int erro_ofs_711;
int options_712;
char* str_713;
struct real_pcre8_or_16* re_714;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct buffer* result_715;
int n_716;
int options_717;
int len_718;
int regex_result_719;
int i_720;
int i_721;
void* __right_value490 = (void*)0;
char* str_722;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct list$1charph* group_strings_723;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
char* match_string_724;
void* __right_value495 = (void*)0;
char* block_result_725;
void* __right_value496 = (void*)0;
char* str_726;
void* __right_value497 = (void*)0;
char* str_727;
void* __right_value498 = (void*)0;
char* str_728;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct list$1charph* group_strings_729;
int i_730;
void* __right_value501 = (void*)0;
char* match_string_731;
void* __right_value502 = (void*)0;
char* match_string_732;
void* __right_value503 = (void*)0;
char* block_result_733;
void* __right_value504 = (void*)0;
char* str_734;
void* __right_value505 = (void*)0;
char* str_735;
void* __right_value506 = (void*)0;
char* str_736;
void* __right_value507 = (void*)0;
char* __result313__;
err_710 = (void*)0;
memset(&erro_ofs_711, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result312__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value487=__builtin_string("")));
        /* U11 */__right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    offset_705=0;
    ovec_max_706=16;
    int start_707[ovec_max_706];
    memset(&start_707, 0, sizeof(int)    *(ovec_max_706)    );
    int end_708[ovec_max_706];
    memset(&end_708, 0, sizeof(int)    *(ovec_max_706)    );
    int ovec_value_709[ovec_max_706*3];
    memset(&ovec_value_709, 0, sizeof(int)    *(ovec_max_706*3)    );
    options_712=reg->options;
    str_713=reg->str;
    re_714=reg->re;
    result_715=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 2024, "buffer"))));
    n_716=0;
    while((_Bool)1) {
        options_717=2097152;
        len_718=strlen(self);
        regex_result_719=pcre_exec(re_714,(struct pcre_extra*)0,self,len_718,offset_705,options_717,ovec_value_709,ovec_max_706*3);
        for(        i_720=0;        i_720<ovec_max_706;        i_720++        ){
            start_707[i_720]=ovec_value_709[i_720*2];
        }
        for(        i_721=0;        i_721<ovec_max_706;        i_721++        ){
            end_708[i_721]=ovec_value_709[i_721*2+1];
        }
        if(        regex_result_719==1) {
            n_716++;
            str_722=(char*)come_increment_ref_count(charp_substring(self,offset_705,start_707[0]));
            buffer_append_str(result_715,str_722);
            group_strings_723=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 2047, "list$1charph"))));
            list$1charph_push_back(group_strings_723,(char*)come_increment_ref_count(charp_substring(self,start_707[0],end_708[0])));
            match_string_724=(char*)come_increment_ref_count(charp_substring(self,start_707[0],end_708[0]));
            block_result_725=(char*)come_increment_ref_count(block(parent,match_string_724,group_strings_723));
            buffer_append_str(result_715,block_result_725);
            if(            offset_705==end_708[0]) {
                offset_705++;
            }
            else {
                offset_705=end_708[0];
            }
            if(            !reg->global) {
                str_726=(char*)come_increment_ref_count(charp_substring(self,offset_705,-1));
                buffer_append_str(result_715,str_726);
                /* U13 */str_726 = come_decrement_ref_count2(str_726, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_722 = come_decrement_ref_count2(str_722, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_723,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_724 = come_decrement_ref_count2(match_string_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_725 = come_decrement_ref_count2(block_result_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_726 = come_decrement_ref_count2(str_726, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_716==count) {
                str_727=(char*)come_increment_ref_count(charp_substring(self,offset_705,-1));
                buffer_append_str(result_715,str_727);
                /* U13 */str_727 = come_decrement_ref_count2(str_727, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_722 = come_decrement_ref_count2(str_722, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_723,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_724 = come_decrement_ref_count2(match_string_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_725 = come_decrement_ref_count2(block_result_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_727 = come_decrement_ref_count2(str_727, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_722 = come_decrement_ref_count2(str_722, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_723,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_724 = come_decrement_ref_count2(match_string_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_725 = come_decrement_ref_count2(block_result_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_719>1) {
            n_716++;
            str_728=(char*)come_increment_ref_count(charp_substring(self,offset_705,start_707[0]));
            buffer_append_str(result_715,str_728);
            if(            offset_705==end_708[0]) {
                offset_705++;
            }
            else {
                offset_705=end_708[0];
            }
            group_strings_729=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 2090, "list$1charph"))));
            for(            i_730=1;            i_730<regex_result_719;            i_730++            ){
                match_string_731=(char*)come_increment_ref_count(charp_substring(self,start_707[i_730],end_708[i_730]));
                list$1charph_push_back(group_strings_729,(char*)come_increment_ref_count(match_string_731));
                /* U13 */match_string_731 = come_decrement_ref_count2(match_string_731, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            match_string_732=(char*)come_increment_ref_count(charp_substring(self,start_707[0],end_708[0]));
            block_result_733=(char*)come_increment_ref_count(block(parent,match_string_732,group_strings_729));
            buffer_append_str(result_715,block_result_733);
            if(            !reg->global) {
                str_734=(char*)come_increment_ref_count(charp_substring(self,offset_705,-1));
                buffer_append_str(result_715,str_734);
                /* U13 */str_734 = come_decrement_ref_count2(str_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_728 = come_decrement_ref_count2(str_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_729,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_732 = come_decrement_ref_count2(match_string_732, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_733 = come_decrement_ref_count2(block_result_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_734 = come_decrement_ref_count2(str_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_716==count) {
                str_735=(char*)come_increment_ref_count(charp_substring(self,offset_705,-1));
                buffer_append_str(result_715,str_735);
                /* U13 */str_735 = come_decrement_ref_count2(str_735, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_728 = come_decrement_ref_count2(str_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_729,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_732 = come_decrement_ref_count2(match_string_732, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_733 = come_decrement_ref_count2(block_result_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_735 = come_decrement_ref_count2(str_735, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_728 = come_decrement_ref_count2(str_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_729,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_732 = come_decrement_ref_count2(match_string_732, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_733 = come_decrement_ref_count2(block_result_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_736=(char*)come_increment_ref_count(charp_substring(self,offset_705,-1));
            buffer_append_str(result_715,str_736);
            /* U13 */str_736 = come_decrement_ref_count2(str_736, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_736 = come_decrement_ref_count2(str_736, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result313__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value507=buffer_to_string(result_715)));
    /*i*/come_call_finalizer3(result_715,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value507 = come_decrement_ref_count2(__right_value507, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

unsigned int wchar_tp_get_hash_key(int* value){
int result_737;
int* p_738;
    result_737=0;
    p_738=value;
    while(*p_738) {
        result_737+=(*p_738);
        p_738++;
    }
    return result_737;
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
void* __right_value508 = (void*)0;
char* __result314__;
    __result314__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value508=xsprintf("%ls",wc)));
    /* U11 */__right_value508 = come_decrement_ref_count2(__right_value508, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value509 = (void*)0;
char* result_739;
void* __right_value510 = (void*)0;
char* __result315__;
char* __result316__;
    result_739=(char*)come_increment_ref_count(__builtin_string(str));
    if(    result_739[string_length(result_739)-1]==10) {
        __result315__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value510=string_substring(result_739,0,-2)));
        /* U13 */result_739 = come_decrement_ref_count2(result_739, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value510 = come_decrement_ref_count2(__right_value510, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    __result316__ = gComeFunResultObject = __result_obj__ = result_739;
    /* U13 */result_739 = come_decrement_ref_count2(result_739, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
void* __right_value511 = (void*)0;
char* __result317__;
char* result_740;
void* __right_value512 = (void*)0;
char* result2_741;
char* __result318__;
    if(    path==((void*)0)) {
        __result317__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value511=__builtin_string("")));
        /* U11 */__right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    result_740=realpath(path,((void*)0));
    result2_741=(char*)come_increment_ref_count(__builtin_string(result_740));
    free(result_740);
    __result318__ = gComeFunResultObject = __result_obj__ = result2_741;
    /* U13 */result2_741 = come_decrement_ref_count2(result2_741, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
void* __right_value513 = (void*)0;
char* __result319__;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
char* __result320__;
    if(    path==((void*)0)) {
        __result319__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value513=__builtin_string("")));
        /* U11 */__right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    __result320__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value515=__builtin_string(dirname(((char*)(__right_value514=__builtin_string(path)))))));
    /* U11 */__right_value514 = come_decrement_ref_count2(__right_value514, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

unsigned long  int xwcslen(int* wstr){
int* p_742;
unsigned long  int len_743;
    p_742=wstr;
    len_743=0;
    while(*p_742) {
        p_742++;
        len_743++;
    }
    return len_743;
}

