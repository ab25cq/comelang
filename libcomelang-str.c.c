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

extern void* gComeFunResultObject;

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
char* charp_reverse(char* str);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_substring(char* str, int head, int tail);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
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
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1charph* FILE_readlines(struct __sFILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct __sFILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
int assert_v2(int exp);
struct real_pcre8_or_16* pcre_compile(const char* anonymous_var_nameX730, int anonymous_var_nameX731, const char** anonymous_var_nameX732, int* anonymous_var_nameX733, const unsigned char* anonymous_var_nameX734);
struct real_pcre8_or_16* pcre16_compile(const unsigned short int* anonymous_var_nameX735, int anonymous_var_nameX736, const char** anonymous_var_nameX737, int* anonymous_var_nameX738, const unsigned char* anonymous_var_nameX739);
struct real_pcre32* pcre32_compile(const unsigned int* anonymous_var_nameX740, int anonymous_var_nameX741, const char** anonymous_var_nameX742, int* anonymous_var_nameX743, const unsigned char* anonymous_var_nameX744);
struct real_pcre8_or_16* pcre_compile2(const char* anonymous_var_nameX745, int anonymous_var_nameX746, int* anonymous_var_nameX747, const char** anonymous_var_nameX748, int* anonymous_var_nameX749, const unsigned char* anonymous_var_nameX750);
struct real_pcre8_or_16* pcre16_compile2(const unsigned short int* anonymous_var_nameX751, int anonymous_var_nameX752, int* anonymous_var_nameX753, const char** anonymous_var_nameX754, int* anonymous_var_nameX755, const unsigned char* anonymous_var_nameX756);
struct real_pcre32* pcre32_compile2(const unsigned int* anonymous_var_nameX757, int anonymous_var_nameX758, int* anonymous_var_nameX759, const char** anonymous_var_nameX760, int* anonymous_var_nameX761, const unsigned char* anonymous_var_nameX762);
int pcre_config(int anonymous_var_nameX763, void* anonymous_var_nameX764);
int pcre16_config(int anonymous_var_nameX765, void* anonymous_var_nameX766);
int pcre32_config(int anonymous_var_nameX767, void* anonymous_var_nameX768);
int pcre_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX769, const char* anonymous_var_nameX770, int* anonymous_var_nameX771, int anonymous_var_nameX772, const char* anonymous_var_nameX773, char* anonymous_var_nameX774, int anonymous_var_nameX775);
int pcre16_copy_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX776, const unsigned short int* anonymous_var_nameX777, int* anonymous_var_nameX778, int anonymous_var_nameX779, const unsigned short int* anonymous_var_nameX780, unsigned short int* anonymous_var_nameX781, int anonymous_var_nameX782);
int pcre32_copy_named_substring(const struct real_pcre32* anonymous_var_nameX783, const unsigned int* anonymous_var_nameX784, int* anonymous_var_nameX785, int anonymous_var_nameX786, const unsigned int* anonymous_var_nameX787, unsigned int* anonymous_var_nameX788, int anonymous_var_nameX789);
int pcre_copy_substring(const char* anonymous_var_nameX790, int* anonymous_var_nameX791, int anonymous_var_nameX792, int anonymous_var_nameX793, char* anonymous_var_nameX794, int anonymous_var_nameX795);
int pcre16_copy_substring(const unsigned short int* anonymous_var_nameX796, int* anonymous_var_nameX797, int anonymous_var_nameX798, int anonymous_var_nameX799, unsigned short int* anonymous_var_nameX800, int anonymous_var_nameX801);
int pcre32_copy_substring(const unsigned int* anonymous_var_nameX802, int* anonymous_var_nameX803, int anonymous_var_nameX804, int anonymous_var_nameX805, unsigned int* anonymous_var_nameX806, int anonymous_var_nameX807);
int pcre_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX808, const struct pcre_extra* anonymous_var_nameX809, const char* anonymous_var_nameX810, int anonymous_var_nameX811, int anonymous_var_nameX812, int anonymous_var_nameX813, int* anonymous_var_nameX814, int anonymous_var_nameX815, int* anonymous_var_nameX816, int anonymous_var_nameX817);
int pcre16_dfa_exec(const struct real_pcre8_or_16* anonymous_var_nameX818, const struct pcre16_extra* anonymous_var_nameX819, const unsigned short int* anonymous_var_nameX820, int anonymous_var_nameX821, int anonymous_var_nameX822, int anonymous_var_nameX823, int* anonymous_var_nameX824, int anonymous_var_nameX825, int* anonymous_var_nameX826, int anonymous_var_nameX827);
int pcre32_dfa_exec(const struct real_pcre32* anonymous_var_nameX828, const struct pcre32_extra* anonymous_var_nameX829, const unsigned int* anonymous_var_nameX830, int anonymous_var_nameX831, int anonymous_var_nameX832, int anonymous_var_nameX833, int* anonymous_var_nameX834, int anonymous_var_nameX835, int* anonymous_var_nameX836, int anonymous_var_nameX837);
int pcre_exec(const struct real_pcre8_or_16* anonymous_var_nameX838, const struct pcre_extra* anonymous_var_nameX839, const char* anonymous_var_nameX840, int anonymous_var_nameX841, int anonymous_var_nameX842, int anonymous_var_nameX843, int* anonymous_var_nameX844, int anonymous_var_nameX845);
int pcre16_exec(const struct real_pcre8_or_16* anonymous_var_nameX846, const struct pcre16_extra* anonymous_var_nameX847, const unsigned short int* anonymous_var_nameX848, int anonymous_var_nameX849, int anonymous_var_nameX850, int anonymous_var_nameX851, int* anonymous_var_nameX852, int anonymous_var_nameX853);
int pcre32_exec(const struct real_pcre32* anonymous_var_nameX854, const struct pcre32_extra* anonymous_var_nameX855, const unsigned int* anonymous_var_nameX856, int anonymous_var_nameX857, int anonymous_var_nameX858, int anonymous_var_nameX859, int* anonymous_var_nameX860, int anonymous_var_nameX861);
int pcre_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX862, const struct pcre_extra* anonymous_var_nameX863, const char* anonymous_var_nameX864, int anonymous_var_nameX865, int anonymous_var_nameX866, int anonymous_var_nameX867, int* anonymous_var_nameX868, int anonymous_var_nameX869, struct real_pcre_jit_stack* anonymous_var_nameX870);
int pcre16_jit_exec(const struct real_pcre8_or_16* anonymous_var_nameX871, const struct pcre16_extra* anonymous_var_nameX872, const unsigned short int* anonymous_var_nameX873, int anonymous_var_nameX874, int anonymous_var_nameX875, int anonymous_var_nameX876, int* anonymous_var_nameX877, int anonymous_var_nameX878, struct real_pcre16_jit_stack* anonymous_var_nameX879);
int pcre32_jit_exec(const struct real_pcre32* anonymous_var_nameX880, const struct pcre32_extra* anonymous_var_nameX881, const unsigned int* anonymous_var_nameX882, int anonymous_var_nameX883, int anonymous_var_nameX884, int anonymous_var_nameX885, int* anonymous_var_nameX886, int anonymous_var_nameX887, struct real_pcre32_jit_stack* anonymous_var_nameX888);
void pcre_free_substring(const char* anonymous_var_nameX889);
void pcre16_free_substring(const unsigned short int* anonymous_var_nameX890);
void pcre32_free_substring(const unsigned int* anonymous_var_nameX891);
void pcre_free_substring_list(const char** anonymous_var_nameX892);
void pcre16_free_substring_list(const unsigned short int** anonymous_var_nameX893);
void pcre32_free_substring_list(const unsigned int** anonymous_var_nameX894);
int pcre_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX895, const struct pcre_extra* anonymous_var_nameX896, int anonymous_var_nameX897, void* anonymous_var_nameX898);
int pcre16_fullinfo(const struct real_pcre8_or_16* anonymous_var_nameX899, const struct pcre16_extra* anonymous_var_nameX900, int anonymous_var_nameX901, void* anonymous_var_nameX902);
int pcre32_fullinfo(const struct real_pcre32* anonymous_var_nameX903, const struct pcre32_extra* anonymous_var_nameX904, int anonymous_var_nameX905, void* anonymous_var_nameX906);
int pcre_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX907, const char* anonymous_var_nameX908, int* anonymous_var_nameX909, int anonymous_var_nameX910, const char* anonymous_var_nameX911, const char** anonymous_var_nameX912);
int pcre16_get_named_substring(const struct real_pcre8_or_16* anonymous_var_nameX913, const unsigned short int* anonymous_var_nameX914, int* anonymous_var_nameX915, int anonymous_var_nameX916, const unsigned short int* anonymous_var_nameX917, const unsigned short int** anonymous_var_nameX918);
int pcre32_get_named_substring(const struct real_pcre32* anonymous_var_nameX919, const unsigned int* anonymous_var_nameX920, int* anonymous_var_nameX921, int anonymous_var_nameX922, const unsigned int* anonymous_var_nameX923, const unsigned int** anonymous_var_nameX924);
int pcre_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX925, const char* anonymous_var_nameX926);
int pcre16_get_stringnumber(const struct real_pcre8_or_16* anonymous_var_nameX927, const unsigned short int* anonymous_var_nameX928);
int pcre32_get_stringnumber(const struct real_pcre32* anonymous_var_nameX929, const unsigned int* anonymous_var_nameX930);
int pcre_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX931, const char* anonymous_var_nameX932, char** anonymous_var_nameX933, char** anonymous_var_nameX934);
int pcre16_get_stringtable_entries(const struct real_pcre8_or_16* anonymous_var_nameX935, const unsigned short int* anonymous_var_nameX936, unsigned short int** anonymous_var_nameX937, unsigned short int** anonymous_var_nameX938);
int pcre32_get_stringtable_entries(const struct real_pcre32* anonymous_var_nameX939, const unsigned int* anonymous_var_nameX940, unsigned int** anonymous_var_nameX941, unsigned int** anonymous_var_nameX942);
int pcre_get_substring(const char* anonymous_var_nameX943, int* anonymous_var_nameX944, int anonymous_var_nameX945, int anonymous_var_nameX946, const char** anonymous_var_nameX947);
int pcre16_get_substring(const unsigned short int* anonymous_var_nameX948, int* anonymous_var_nameX949, int anonymous_var_nameX950, int anonymous_var_nameX951, const unsigned short int** anonymous_var_nameX952);
int pcre32_get_substring(const unsigned int* anonymous_var_nameX953, int* anonymous_var_nameX954, int anonymous_var_nameX955, int anonymous_var_nameX956, const unsigned int** anonymous_var_nameX957);
int pcre_get_substring_list(const char* anonymous_var_nameX958, int* anonymous_var_nameX959, int anonymous_var_nameX960, const char*** anonymous_var_nameX961);
int pcre16_get_substring_list(const unsigned short int* anonymous_var_nameX962, int* anonymous_var_nameX963, int anonymous_var_nameX964, const unsigned short int*** anonymous_var_nameX965);
int pcre32_get_substring_list(const unsigned int* anonymous_var_nameX966, int* anonymous_var_nameX967, int anonymous_var_nameX968, const unsigned int*** anonymous_var_nameX969);
const unsigned char* pcre_maketables();
const unsigned char* pcre16_maketables();
const unsigned char* pcre32_maketables();
int pcre_refcount(struct real_pcre8_or_16* anonymous_var_nameX970, int anonymous_var_nameX971);
int pcre16_refcount(struct real_pcre8_or_16* anonymous_var_nameX972, int anonymous_var_nameX973);
int pcre32_refcount(struct real_pcre32* anonymous_var_nameX974, int anonymous_var_nameX975);
struct pcre_extra* pcre_study(const struct real_pcre8_or_16* anonymous_var_nameX976, int anonymous_var_nameX977, const char** anonymous_var_nameX978);
struct pcre16_extra* pcre16_study(const struct real_pcre8_or_16* anonymous_var_nameX979, int anonymous_var_nameX980, const char** anonymous_var_nameX981);
struct pcre32_extra* pcre32_study(const struct real_pcre32* anonymous_var_nameX982, int anonymous_var_nameX983, const char** anonymous_var_nameX984);
void pcre_free_study(struct pcre_extra* anonymous_var_nameX985);
void pcre16_free_study(struct pcre16_extra* anonymous_var_nameX986);
void pcre32_free_study(struct pcre32_extra* anonymous_var_nameX987);
const char* pcre_version();
const char* pcre16_version();
const char* pcre32_version();
int pcre_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX988, struct pcre_extra* anonymous_var_nameX989, const unsigned char* anonymous_var_nameX990);
int pcre16_pattern_to_host_byte_order(struct real_pcre8_or_16* anonymous_var_nameX991, struct pcre16_extra* anonymous_var_nameX992, const unsigned char* anonymous_var_nameX993);
int pcre32_pattern_to_host_byte_order(struct real_pcre32* anonymous_var_nameX994, struct pcre32_extra* anonymous_var_nameX995, const unsigned char* anonymous_var_nameX996);
int pcre16_utf16_to_host_byte_order(unsigned short int* anonymous_var_nameX997, const unsigned short int* anonymous_var_nameX998, int anonymous_var_nameX999, int* anonymous_var_nameX1000, int anonymous_var_nameX1001);
int pcre32_utf32_to_host_byte_order(unsigned int* anonymous_var_nameX1002, const unsigned int* anonymous_var_nameX1003, int anonymous_var_nameX1004, int* anonymous_var_nameX1005, int anonymous_var_nameX1006);
struct real_pcre_jit_stack* pcre_jit_stack_alloc(int anonymous_var_nameX1007, int anonymous_var_nameX1008);
struct real_pcre16_jit_stack* pcre16_jit_stack_alloc(int anonymous_var_nameX1009, int anonymous_var_nameX1010);
struct real_pcre32_jit_stack* pcre32_jit_stack_alloc(int anonymous_var_nameX1011, int anonymous_var_nameX1012);
void pcre_jit_stack_free(struct real_pcre_jit_stack* anonymous_var_nameX1013);
void pcre16_jit_stack_free(struct real_pcre16_jit_stack* anonymous_var_nameX1014);
void pcre32_jit_stack_free(struct real_pcre32_jit_stack* anonymous_var_nameX1015);
void pcre_assign_jit_stack(struct pcre_extra* anonymous_var_nameX1016, struct real_pcre_jit_stack* (*anonymous_var_nameX1017)(void*), void* anonymous_var_nameX1018);
void pcre16_assign_jit_stack(struct pcre16_extra* anonymous_var_nameX1019, struct real_pcre16_jit_stack* (*anonymous_var_nameX1020)(void*), void* anonymous_var_nameX1021);
void pcre32_assign_jit_stack(struct pcre32_extra* anonymous_var_nameX1022, struct real_pcre32_jit_stack* (*anonymous_var_nameX1023)(void*), void* anonymous_var_nameX1024);
void pcre_jit_free_unused_memory();
void pcre16_jit_free_unused_memory();
void pcre32_jit_free_unused_memory();
char* asctime(const struct tm* anonymous_var_nameX1025);
unsigned long  int clock();
char* ctime(const long* anonymous_var_nameX1026);
double difftime(long anonymous_var_nameX1027, long anonymous_var_nameX1028);
struct tm* getdate(const char* anonymous_var_nameX1029);
struct tm* gmtime(const long* anonymous_var_nameX1030);
struct tm* localtime(const long* anonymous_var_nameX1031);
long mktime(struct tm* anonymous_var_nameX1032);
unsigned long  int strftime(char* anonymous_var_nameX1033, unsigned long  int anonymous_var_nameX1034, const char* anonymous_var_nameX1035, const struct tm* anonymous_var_nameX1036);
char* strptime(const char* anonymous_var_nameX1037, const char* anonymous_var_nameX1038, struct tm* anonymous_var_nameX1039);
long time(long* anonymous_var_nameX1040);
void tzset();
char* asctime_r(const struct tm* anonymous_var_nameX1041, char* anonymous_var_nameX1042);
char* ctime_r(const long* anonymous_var_nameX1043, char* anonymous_var_nameX1044);
struct tm* gmtime_r(const long* anonymous_var_nameX1045, struct tm* anonymous_var_nameX1046);
struct tm* localtime_r(const long* anonymous_var_nameX1047, struct tm* anonymous_var_nameX1048);
long posix2time(long anonymous_var_nameX1049);
void tzsetwall();
long time2posix(long anonymous_var_nameX1050);
long timelocal(struct tm* anonymous_var_nameX1051);
long timegm(struct tm* anonymous_var_nameX1052);
int nanosleep(const struct timespec* __rqtp, struct timespec* __rmtp);
int clock_getres(enum anonymous_typeY8 __clock_id, struct timespec* __res);
int clock_gettime(enum anonymous_typeY8 __clock_id, struct timespec* __tp);
unsigned long  long clock_gettime_nsec_np(enum anonymous_typeY8 __clock_id);
int clock_settime(enum anonymous_typeY8 __clock_id, const struct timespec* __tp);
int timespec_get(struct timespec* ts, int base);
int isalnum(int anonymous_var_nameX1067);
int isalpha(int anonymous_var_nameX1068);
int isblank(int anonymous_var_nameX1069);
int iscntrl(int anonymous_var_nameX1070);
int isdigit(int anonymous_var_nameX1071);
int isgraph(int anonymous_var_nameX1072);
int islower(int anonymous_var_nameX1073);
int isprint(int anonymous_var_nameX1074);
int ispunct(int anonymous_var_nameX1075);
int isspace(int anonymous_var_nameX1076);
int isupper(int anonymous_var_nameX1077);
int isxdigit(int anonymous_var_nameX1078);
int tolower(int anonymous_var_nameX1079);
int toupper(int anonymous_var_nameX1080);
int isascii(int anonymous_var_nameX1081);
int toascii(int anonymous_var_nameX1082);
int _tolower(int anonymous_var_nameX1083);
int _toupper(int anonymous_var_nameX1084);
int digittoint(int anonymous_var_nameX1085);
int ishexnumber(int anonymous_var_nameX1086);
int isideogram(int anonymous_var_nameX1087);
int isnumber(int anonymous_var_nameX1088);
int isphonogram(int anonymous_var_nameX1089);
int isrune(int anonymous_var_nameX1090);
int isspecial(int anonymous_var_nameX1091);
int iswalnum(int anonymous_var_nameX1092);
int iswalpha(int anonymous_var_nameX1093);
int iswcntrl(int anonymous_var_nameX1094);
int iswctype(int anonymous_var_nameX1095, unsigned int anonymous_var_nameX1096);
int iswdigit(int anonymous_var_nameX1097);
int iswgraph(int anonymous_var_nameX1098);
int iswlower(int anonymous_var_nameX1099);
int iswprint(int anonymous_var_nameX1100);
int iswpunct(int anonymous_var_nameX1101);
int iswspace(int anonymous_var_nameX1102);
int iswupper(int anonymous_var_nameX1103);
int iswxdigit(int anonymous_var_nameX1104);
int towlower(int anonymous_var_nameX1105);
int towupper(int anonymous_var_nameX1106);
unsigned int wctype(const char* anonymous_var_nameX1107);
int btowc(int anonymous_var_nameX1108);
int fgetwc(struct __sFILE* anonymous_var_nameX1109);
int* fgetws(int* anonymous_var_nameX1110, int anonymous_var_nameX1111, struct __sFILE* anonymous_var_nameX1112);
int fputwc(int anonymous_var_nameX1113, struct __sFILE* anonymous_var_nameX1114);
int fputws(const int* anonymous_var_nameX1115, struct __sFILE* anonymous_var_nameX1116);
int fwide(struct __sFILE* anonymous_var_nameX1117, int anonymous_var_nameX1118);
int fwprintf(struct __sFILE* anonymous_var_nameX1119, const int* anonymous_var_nameX1120, ...);
int fwscanf(struct __sFILE* anonymous_var_nameX1121, const int* anonymous_var_nameX1122, ...);
int getwc(struct __sFILE* anonymous_var_nameX1123);
int getwchar();
unsigned long  int mbrlen(const char* anonymous_var_nameX1124, unsigned long  int anonymous_var_nameX1125, union anonymous_typeZ1* anonymous_var_nameX1126);
unsigned long  int mbrtowc(int* anonymous_var_nameX1127, const char* anonymous_var_nameX1128, unsigned long  int anonymous_var_nameX1129, union anonymous_typeZ1* anonymous_var_nameX1130);
int mbsinit(const union anonymous_typeZ1* anonymous_var_nameX1131);
unsigned long  int mbsrtowcs(int* anonymous_var_nameX1132, const char** anonymous_var_nameX1133, unsigned long  int anonymous_var_nameX1134, union anonymous_typeZ1* anonymous_var_nameX1135);
int putwc(int anonymous_var_nameX1136, struct __sFILE* anonymous_var_nameX1137);
int putwchar(int anonymous_var_nameX1138);
int swprintf(int* anonymous_var_nameX1139, unsigned long  int anonymous_var_nameX1140, const int* anonymous_var_nameX1141, ...);
int swscanf(const int* anonymous_var_nameX1142, const int* anonymous_var_nameX1143, ...);
int ungetwc(int anonymous_var_nameX1144, struct __sFILE* anonymous_var_nameX1145);
int vfwprintf(struct __sFILE* anonymous_var_nameX1146, const int* anonymous_var_nameX1147, __darwin_va_list anonymous_var_nameX1148);
int vswprintf(int* anonymous_var_nameX1149, unsigned long  int anonymous_var_nameX1150, const int* anonymous_var_nameX1151, __darwin_va_list anonymous_var_nameX1152);
int vwprintf(const int* anonymous_var_nameX1153, __darwin_va_list anonymous_var_nameX1154);
unsigned long  int wcrtomb(char* anonymous_var_nameX1155, int anonymous_var_nameX1156, union anonymous_typeZ1* anonymous_var_nameX1157);
int* wcscat(int* anonymous_var_nameX1158, const int* anonymous_var_nameX1159);
int* wcschr(const int* anonymous_var_nameX1160, int anonymous_var_nameX1161);
int wcscmp(const int* anonymous_var_nameX1162, const int* anonymous_var_nameX1163);
int wcscoll(const int* anonymous_var_nameX1164, const int* anonymous_var_nameX1165);
int* wcscpy(int* anonymous_var_nameX1166, const int* anonymous_var_nameX1167);
unsigned long  int wcscspn(const int* anonymous_var_nameX1168, const int* anonymous_var_nameX1169);
unsigned long  int wcsftime(int* anonymous_var_nameX1170, unsigned long  int anonymous_var_nameX1171, const int* anonymous_var_nameX1172, const struct tm* anonymous_var_nameX1173);
unsigned long  int wcslen(const int* anonymous_var_nameX1174);
int* wcsncat(int* anonymous_var_nameX1175, const int* anonymous_var_nameX1176, unsigned long  int anonymous_var_nameX1177);
int wcsncmp(const int* anonymous_var_nameX1178, const int* anonymous_var_nameX1179, unsigned long  int anonymous_var_nameX1180);
int* wcsncpy(int* anonymous_var_nameX1181, const int* anonymous_var_nameX1182, unsigned long  int anonymous_var_nameX1183);
int* wcspbrk(const int* anonymous_var_nameX1184, const int* anonymous_var_nameX1185);
int* wcsrchr(const int* anonymous_var_nameX1186, int anonymous_var_nameX1187);
unsigned long  int wcsrtombs(char* anonymous_var_nameX1188, const int** anonymous_var_nameX1189, unsigned long  int anonymous_var_nameX1190, union anonymous_typeZ1* anonymous_var_nameX1191);
unsigned long  int wcsspn(const int* anonymous_var_nameX1192, const int* anonymous_var_nameX1193);
int* wcsstr(const int* anonymous_var_nameX1194, const int* anonymous_var_nameX1195);
unsigned long  int wcsxfrm(int* anonymous_var_nameX1196, const int* anonymous_var_nameX1197, unsigned long  int anonymous_var_nameX1198);
int wctob(int anonymous_var_nameX1199);
double wcstod(const int* anonymous_var_nameX1200, int** anonymous_var_nameX1201);
int* wcstok(int* anonymous_var_nameX1202, const int* anonymous_var_nameX1203, int** anonymous_var_nameX1204);
long wcstol(const int* anonymous_var_nameX1205, int** anonymous_var_nameX1206, int anonymous_var_nameX1207);
unsigned long  int wcstoul(const int* anonymous_var_nameX1208, int** anonymous_var_nameX1209, int anonymous_var_nameX1210);
int* wmemchr(const int* anonymous_var_nameX1211, int anonymous_var_nameX1212, unsigned long  int anonymous_var_nameX1213);
int wmemcmp(const int* anonymous_var_nameX1214, const int* anonymous_var_nameX1215, unsigned long  int anonymous_var_nameX1216);
int* wmemcpy(int* anonymous_var_nameX1217, const int* anonymous_var_nameX1218, unsigned long  int anonymous_var_nameX1219);
int* wmemmove(int* anonymous_var_nameX1220, const int* anonymous_var_nameX1221, unsigned long  int anonymous_var_nameX1222);
int* wmemset(int* anonymous_var_nameX1223, int anonymous_var_nameX1224, unsigned long  int anonymous_var_nameX1225);
int wprintf(const int* anonymous_var_nameX1226, ...);
int wscanf(const int* anonymous_var_nameX1227, ...);
int wcswidth(const int* anonymous_var_nameX1228, unsigned long  int anonymous_var_nameX1229);
int wcwidth(int anonymous_var_nameX1230);
int vfwscanf(struct __sFILE* anonymous_var_nameX1231, const int* anonymous_var_nameX1232, __darwin_va_list anonymous_var_nameX1233);
int vswscanf(const int* anonymous_var_nameX1234, const int* anonymous_var_nameX1235, __darwin_va_list anonymous_var_nameX1236);
int vwscanf(const int* anonymous_var_nameX1237, __darwin_va_list anonymous_var_nameX1238);
float wcstof(const int* anonymous_var_nameX1239, int** anonymous_var_nameX1240);
long  double wcstold(const int* anonymous_var_nameX1241, int** anonymous_var_nameX1242);
long long wcstoll(const int* anonymous_var_nameX1243, int** anonymous_var_nameX1244, int anonymous_var_nameX1245);
unsigned long  long wcstoull(const int* anonymous_var_nameX1246, int** anonymous_var_nameX1247, int anonymous_var_nameX1248);
unsigned long  int mbsnrtowcs(int* anonymous_var_nameX1249, const char** anonymous_var_nameX1250, unsigned long  int anonymous_var_nameX1251, unsigned long  int anonymous_var_nameX1252, union anonymous_typeZ1* anonymous_var_nameX1253);
int* wcpcpy(int* anonymous_var_nameX1254, const int* anonymous_var_nameX1255);
int* wcpncpy(int* anonymous_var_nameX1256, const int* anonymous_var_nameX1257, unsigned long  int anonymous_var_nameX1258);
int* wcsdup(const int* anonymous_var_nameX1259);
int wcscasecmp(const int* anonymous_var_nameX1260, const int* anonymous_var_nameX1261);
int wcsncasecmp(const int* anonymous_var_nameX1262, const int* anonymous_var_nameX1263, unsigned long  int n);
unsigned long  int wcsnlen(const int* anonymous_var_nameX1264, unsigned long  int anonymous_var_nameX1265);
unsigned long  int wcsnrtombs(char* anonymous_var_nameX1266, const int** anonymous_var_nameX1267, unsigned long  int anonymous_var_nameX1268, unsigned long  int anonymous_var_nameX1269, union anonymous_typeZ1* anonymous_var_nameX1270);
struct __sFILE* open_wmemstream(int** __bufp, unsigned long  int* __sizep);
int* fgetwln(struct __sFILE* anonymous_var_nameX1271, unsigned long  int* anonymous_var_nameX1272);
unsigned long  int wcslcat(int* anonymous_var_nameX1273, const int* anonymous_var_nameX1274, unsigned long  int anonymous_var_nameX1275);
unsigned long  int wcslcpy(int* anonymous_var_nameX1276, const int* anonymous_var_nameX1277, unsigned long  int anonymous_var_nameX1278);
char* basename(char* anonymous_var_nameX1279);
char* dirname(char* anonymous_var_nameX1280);
char* basename_r(const char* anonymous_var_nameX1281, char* anonymous_var_nameX1282);
char* dirname_r(const char* anonymous_var_nameX1283, char* anonymous_var_nameX1284);
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
unsigned char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_108;
struct buffer* __result51__;
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3599, "buffer"))));
    buffer_append(result_108,self,sizeof(char)*len);
    __result51__ = gComeFunResultObject = __result_obj__ = result_108;
    /*i*/come_call_finalizer3(result_108,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
int i_110;
struct buffer* __result52__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3606, "buffer"))));
    for(    i_110=0;    i_110<len;    i_110++    ){
        buffer_append(result_109,self[i_110],strlen(self[i_110]));
    }
    __result52__ = gComeFunResultObject = __result_obj__ = result_109;
    /*i*/come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_111;
struct buffer* __result53__;
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3615, "buffer"))));
    buffer_append(result_111,(char*)self,sizeof(short)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_111;
    /*i*/come_call_finalizer3(result_111,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result54__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3622, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(int)*len);
    __result54__ = gComeFunResultObject = __result_obj__ = result_112;
    /*i*/come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result55__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3629, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(long)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_113;
    /*i*/come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result56__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3636, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(float)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_114;
    /*i*/come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result57__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3643, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(double)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_115;
    /*i*/come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 3971, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 3976, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 3981, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 3986, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 3991, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_121;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result68__;
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4024, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4026, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
    /*i*/come_call_finalizer3(buf_121,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_122;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4031, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4033, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
    /*i*/come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_123;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result71__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4038, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4040, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
    /*i*/come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_124;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result72__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4045, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4047, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
    /*i*/come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_125;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result73__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4052, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4054, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
    /*i*/come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_126;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4059, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4061, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
    /*i*/come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_127;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4066, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4068, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
    /*i*/come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4073, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4078, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4083, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4088, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4093, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4098, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4103, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4108, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4113, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4118, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4123, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4128, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4133, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4138, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_185;
int i_186;
    result_185=(_Bool)0;
    for(    i_186=0;    i_186<len;    i_186++    ){
        if(        strncmp(self[i_186],str,strlen(self[i_186]))==0) {
            result_185=(_Bool)1;
            break;
        }
    }
    return result_185;
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
static char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value197 = (void*)0;
char* __result153__;
    __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    /* U11 */__right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result153__;
}
static char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result154__;
    __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    /* U11 */__right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
}
static int* wstring_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
int* __result198__;
    __result198__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value245=wchar_tp_substring(str,head,tail)));
    /* U11 */__right_value245 = come_decrement_ref_count2(__right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result198__;
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
void* __right_value246 = (void*)0;
struct list$1charph* __result199__;
    __result199__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value246=charp_scan_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value246,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result199__;
}
static struct list$1charph* string_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value247 = (void*)0;
struct list$1charph* __result200__;
    __result200__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value247=charp_scan_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value247,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result200__;
}
static struct list$1charph* string_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value248 = (void*)0;
struct list$1charph* __result201__;
    __result201__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value248=charp_split_block(self,reg,parent,block)));
    /*g*/come_call_finalizer3(__right_value248,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result201__;
}
static struct list$1charph* string_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct list$1charph* __result202__;
    __result202__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value249=charp_split_block_count(self,reg,count,parent,block)));
    /*g*/come_call_finalizer3(__right_value249,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result202__;
}
static struct list$1charph* string_scan_group_strings(char* self, struct come_regex* reg, struct list$1charph* group_strings, int* num_group_string_in_regex){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
struct list$1charph* __result203__;
    __result203__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value250=charp_scan_group_strings(self,reg,group_strings,num_group_string_in_regex)));
    /*g*/come_call_finalizer3(__right_value250,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result203__;
}
static char* string_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result204__;
    __result204__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=charp_strip(self)));
    /* U11 */__right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result204__;
}
static int* string_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
int* __result205__;
    __result205__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value252=charp_to_wstring(str)));
    /* U11 */__right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result205__;
}
static char* wstring_to_string(int* wstr){
void* __result_obj__=(void*)0;
void* __right_value253 = (void*)0;
char* __result206__;
    __result206__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value253=wchar_tp_to_string(wstr)));
    /* U11 */__right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result206__;
}
static int* int_to_wstring(int self){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
int* __result207__;
    __result207__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value255=string_to_wstring(((char*)(__right_value254=xsprintf("%d",self))))));
    /* U11 */__right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result207__;
}
static int wstring_length(int* str){
    return wchar_tp_length(str);
}
static int* wstring_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value256 = (void*)0;
int* __result208__;
    __result208__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value256=wchar_tp_delete(str,head,tail)));
    /* U11 */__right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result208__;
}
static int wstring_index(int* str, int* search_str, int default_value){
    return wchar_tp_index(str,search_str,default_value);
}
static int wstring_rindex(int* str, int* search_str, int default_value){
    return wchar_tp_rindex(str,search_str,default_value);
}
static int* wstring_reverse(int* str){
void* __result_obj__=(void*)0;
void* __right_value257 = (void*)0;
int* __result209__;
    __result209__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value257=wchar_tp_reverse(str)));
    /* U11 */__right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result209__;
}
static int* wstring_multiply(int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value258 = (void*)0;
int* __result210__;
    __result210__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value258=wchar_tp_multiply(str,n)));
    /* U11 */__right_value258 = come_decrement_ref_count2(__right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result210__;
}
static int* wstring_printable(int* str){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
int* __result211__;
    __result211__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value259=wchar_tp_printable(str)));
    /* U11 */__right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result211__;
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
void* __right_value260 = (void*)0;
char* __result212__;
    __result212__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value260=charp_replace(self,index,c)));
    /* U11 */__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result212__;
}
static char* string_multiply(char* str, int n){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
char* __result213__;
    __result213__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value261=charp_multiply(str,n)));
    /* U11 */__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result213__;
}
static char* string_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
void* __right_value262 = (void*)0;
char* __result214__;
    __result214__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value262=charp_sub(self,reg,replace)));
    /* U11 */__right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result214__;
}
static char* string_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
char* __result215__;
    __result215__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value263=charp_sub_count(self,reg,replace,count)));
    /* U11 */__right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result215__;
}
static struct list$1charph* string_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
struct list$1charph* __result216__;
    __result216__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value264=charp_split_str(self,str)));
    /*g*/come_call_finalizer3(__right_value264,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result216__;
}
static struct list$1charph* string_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value265 = (void*)0;
struct list$1charph* __result217__;
    __result217__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value265=charp_scan(self,reg)));
    /*g*/come_call_finalizer3(__right_value265,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result217__;
}
static struct list$1charph* string_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value266 = (void*)0;
struct list$1charph* __result218__;
    __result218__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value266=charp_split(self,reg)));
    /*g*/come_call_finalizer3(__right_value266,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result218__;
}
static _Bool string_match(char* self, struct come_regex* reg){
    return charp_match(self,reg);
}
static struct list$1charph* string_split_maxsplit(char* self, struct come_regex* reg, int maxsplit){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
struct list$1charph* __result219__;
    __result219__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value267=charp_split_maxsplit(self,reg,maxsplit)));
    /*g*/come_call_finalizer3(__right_value267,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result219__;
}
static int string_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
    return charp_rindex_regex_count(self,reg,count,default_value);
}
static _Bool string_match_count(char* self, struct come_regex* reg, int count){
    return charp_match_count(self,reg,count);
}
static char* string_sub_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
char* __result220__;
    __result220__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value268=charp_sub_block(self,reg,parent,block)));
    /* U11 */__right_value268 = come_decrement_ref_count2(__right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result220__;
}
static char* string_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
char* __result221__;
    __result221__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value269=charp_sub_block_count(self,reg,count,parent,block)));
    /* U11 */__right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result221__;
}
static char* charp_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value271 = (void*)0;
char* __result223__;
    __result223__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value271=string_chomp(str)));
    /* U11 */__right_value271 = come_decrement_ref_count2(__right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result223__;
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
struct smart_pointer$1char* __result59__;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result59__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
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
struct smart_pointer$1short* __result62__;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result62__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result62__;
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
struct smart_pointer$1int* __result64__;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result64__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
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
struct smart_pointer$1long* __result66__;
    __dec_obj20=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
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
struct smart_pointer$1charp* __result69__;
    __dec_obj22=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
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
struct smart_pointer$1float* __result74__;
    __dec_obj24=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
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
struct smart_pointer$1double* __result76__;
    __dec_obj26=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
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
int i_128;
struct list$1char* __result79__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_128=0;    i_128<num_value;    i_128++    ){
        list$1char_push_back(self,values[i_128]);
    }
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_129;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_130;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_131;
struct list$1char* __result78__;
    if(    self->len==0) {
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1106, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1116, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1126, "list_item$1char"))));
        litem_131->prev=self->tail;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail->next=litem_131;
        self->tail=litem_131;
    }
    self->len++;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_132;
struct list_item$1char* prev_it_133;
    it_132=self->head;
    while(it_132!=((void*)0)) {
        prev_it_133=it_132;
        it_132=it_132->next;
        /*i*/come_call_finalizer3(prev_it_133,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_134;
struct list$1charp* __result82__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_134=0;    i_134<num_value;    i_134++    ){
        list$1charp_push_back(self,values[i_134]);
    }
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_135;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_136;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_137;
struct list$1charp* __result81__;
    if(    self->len==0) {
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1106, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1116, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1126, "list_item$1charp"))));
        litem_137->prev=self->tail;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail->next=litem_137;
        self->tail=litem_137;
    }
    self->len++;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_138;
struct list_item$1charp* prev_it_139;
    it_138=self->head;
    while(it_138!=((void*)0)) {
        prev_it_139=it_138;
        it_138=it_138->next;
        /*i*/come_call_finalizer3(prev_it_139,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_140;
struct list$1short* __result85__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_140=0;    i_140<num_value;    i_140++    ){
        list$1short_push_back(self,values[i_140]);
    }
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_141;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_142;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_143;
struct list$1short* __result84__;
    if(    self->len==0) {
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1106, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1116, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1126, "list_item$1short"))));
        litem_143->prev=self->tail;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail->next=litem_143;
        self->tail=litem_143;
    }
    self->len++;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_144;
struct list_item$1short* prev_it_145;
    it_144=self->head;
    while(it_144!=((void*)0)) {
        prev_it_145=it_144;
        it_144=it_144->next;
        /*i*/come_call_finalizer3(prev_it_145,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_146;
struct list$1int* __result88__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_146=0;    i_146<num_value;    i_146++    ){
        list$1int_push_back(self,values[i_146]);
    }
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_147;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_148;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_149;
struct list$1int* __result87__;
    if(    self->len==0) {
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1106, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1116, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1126, "list_item$1int"))));
        litem_149->prev=self->tail;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail->next=litem_149;
        self->tail=litem_149;
    }
    self->len++;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_150;
struct list_item$1int* prev_it_151;
    it_150=self->head;
    while(it_150!=((void*)0)) {
        prev_it_151=it_150;
        it_150=it_150->next;
        /*i*/come_call_finalizer3(prev_it_151,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_152;
struct list$1long* __result91__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_152=0;    i_152<num_value;    i_152++    ){
        list$1long_push_back(self,values[i_152]);
    }
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_153;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_154;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_155;
struct list$1long* __result90__;
    if(    self->len==0) {
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1106, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1116, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1126, "list_item$1long"))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_156;
struct list_item$1long* prev_it_157;
    it_156=self->head;
    while(it_156!=((void*)0)) {
        prev_it_157=it_156;
        it_156=it_156->next;
        /*i*/come_call_finalizer3(prev_it_157,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_158;
struct list$1float* __result94__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_158=0;    i_158<num_value;    i_158++    ){
        list$1float_push_back(self,values[i_158]);
    }
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_159;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_160;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_161;
struct list$1float* __result93__;
    if(    self->len==0) {
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1106, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1116, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1126, "list_item$1float"))));
        litem_161->prev=self->tail;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail->next=litem_161;
        self->tail=litem_161;
    }
    self->len++;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_162;
struct list_item$1float* prev_it_163;
    it_162=self->head;
    while(it_162!=((void*)0)) {
        prev_it_163=it_162;
        it_162=it_162->next;
        /*i*/come_call_finalizer3(prev_it_163,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_164;
struct list$1double* __result97__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_164=0;    i_164<num_value;    i_164++    ){
        list$1double_push_back(self,values[i_164]);
    }
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_165;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_166;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_167;
struct list$1double* __result96__;
    if(    self->len==0) {
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1106, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1116, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1126, "list_item$1double"))));
        litem_167->prev=self->tail;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail->next=litem_167;
        self->tail=litem_167;
    }
    self->len++;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_168;
struct list_item$1double* prev_it_169;
    it_168=self->head;
    while(it_168!=((void*)0)) {
        prev_it_169=it_168;
        it_168=it_168->next;
        /*i*/come_call_finalizer3(prev_it_169,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result99__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1900, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_170;
    if(    0) {
        for(        i_170=0;        i_170<self->len;        i_170++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result101__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1900, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
            /* U13 */self->items[i_171] = come_decrement_ref_count2(self->items[i_171], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result103__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1900, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_172;
    if(    0) {
        for(        i_172=0;        i_172<self->len;        i_172++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result105__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1900, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_173;
    if(    0) {
        for(        i_173=0;        i_173<self->len;        i_173++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result107__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1900, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_174;
    if(    0) {
        for(        i_174=0;        i_174<self->len;        i_174++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result109__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1900, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_175;
    if(    0) {
        for(        i_175=0;        i_175<self->len;        i_175++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1900, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_176;
    if(    0) {
        for(        i_176=0;        i_176<self->len;        i_176++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result149__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_208;
struct list_item$1charph* prev_it_209;
    it_208=self->head;
    while(it_208!=((void*)0)) {
        prev_it_209=it_208;
        it_208=it_208->next;
        /*i*/come_call_finalizer3(prev_it_209,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value192 = (void*)0;
struct list_item$1charph* litem_213;
char* __dec_obj29;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_214;
char* __dec_obj30;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_215;
char* __dec_obj31;
struct list$1charph* __result151__;
    if(    self->len==0) {
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1106, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1116, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1126, "list_item$1charph"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        __dec_obj31=litem_215->item;
        litem_215->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

struct tuple2$2come_regexphcharph* come_regex_initialize(struct come_regex* self, char* str, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
const char* err_247;
int erro_ofs_248;
int options_249;
void* __right_value272 = (void*)0;
char* __dec_obj32;
struct come_regex* __null_value1;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct tuple2$2come_regexphcharph* __result225__;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct tuple2$2come_regexphcharph* __result227__;
err_247 = (void*)0;
memset(&erro_ofs_248, 0, sizeof(int));
memset(&__null_value1, 0, sizeof(struct come_regex*));
    options_249=2048|(((ignore_case)?(1):(0)))|(((multiline)?(2):(0)))|(((extended)?(8):(0)))|(((dotall)?(4):(0)))|(((dollar_endonly)?(32):(0)))|(((ungreedy)?(512):(0)));
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
    self->options=options_249;
    self->re=pcre_compile(str,options_249,&err_247,&erro_ofs_248,((void*)0));
    if(    self->re==((void*)0)) {
        __result225__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value276=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 46, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value1),(char*)come_increment_ref_count(xsprintf("regex error \%s",((char*)(__right_value273=charp_to_string(str))))))));
        /*i*/come_call_finalizer3(self,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U11 */__right_value273 = come_decrement_ref_count2(__right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value276,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    __result227__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value278=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 53, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(self),((void*)0))));
    /*i*/come_call_finalizer3(self,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value278,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct tuple2$2come_regexphcharph* tuple2$2come_regexphcharph_initialize(struct tuple2$2come_regexphcharph* self, struct come_regex* v1, char* v2){
void* __result_obj__=(void*)0;
struct come_regex* __dec_obj33;
char* __dec_obj34;
struct tuple2$2come_regexphcharph* __result224__;
    __dec_obj33=self->v1;
    self->v1=(struct come_regex*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj33,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj34=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2come_regexphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
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
struct tuple2$2come_regexphvoidp* __result226__;
    __dec_obj37=self->v1;
    self->v1=(struct come_regex*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj37,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    self->v2=v2;
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2come_regexphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
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
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var1 = (void*)0;
struct come_regex* come_exception_var_b1_250=0;
char* Err_251=0;
_Bool _if_conditional1;
struct come_regex* __null_value2;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct tuple2$2come_regexphcharph* __result228__;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct tuple2$2come_regexphcharph* __result229__;
memset(&__null_value2, 0, sizeof(struct come_regex*));
    multiple_assign_var1=((struct tuple2$2come_regexphcharph*)(__right_value280=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 68, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_exception_var_b1_250=(struct come_regex*)come_increment_ref_count(multiple_assign_var1->v1);
    Err_251=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    if(    (_if_conditional1=(Err_251)),    /*f*/come_call_finalizer3(__right_value280,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional1) {
        __result228__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value282=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 68, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value2),(char*)come_increment_ref_count(Err_251))));
        /*i*/come_call_finalizer3(come_exception_var_b1_250,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */Err_251 = come_decrement_ref_count2(Err_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value282,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    __result229__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value284=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 68, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(come_exception_var_b1_250),((void*)0))));
    /*i*/come_call_finalizer3(come_exception_var_b1_250,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */Err_251 = come_decrement_ref_count2(Err_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value284,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

struct tuple2$2come_regexphcharph* string_to_regex(char* self, _Bool ignore_case, _Bool multiline, _Bool global, _Bool extended, _Bool dotall, _Bool anchored, _Bool dollar_endonly, _Bool ungreedy){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct tuple2$2come_regexphcharph* multiple_assign_var2 = (void*)0;
struct come_regex* come_exception_var_b2_252=0;
char* Err_253=0;
_Bool _if_conditional2;
struct come_regex* __null_value3;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct tuple2$2come_regexphcharph* __result230__;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct tuple2$2come_regexphcharph* __result231__;
memset(&__null_value3, 0, sizeof(struct come_regex*));
    multiple_assign_var2=((struct tuple2$2come_regexphcharph*)(__right_value286=come_regex_initialize((struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 73, "come_regex")),self,ignore_case,multiline,global,extended,dotall,anchored,dollar_endonly,ungreedy)));
    come_exception_var_b2_252=(struct come_regex*)come_increment_ref_count(multiple_assign_var2->v1);
    Err_253=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    if(    (_if_conditional2=(Err_253)),    /*f*/come_call_finalizer3(__right_value286,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__),
    _if_conditional2) {
        __result230__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphcharph*)(__right_value288=tuple2$2come_regexphcharph_initialize((struct tuple2$2come_regexphcharph*)come_increment_ref_count((struct tuple2$2come_regexphcharph*)come_calloc(1, sizeof(struct tuple2$2come_regexphcharph)*(1), "libcomelang-str.c", 73, "struct tuple2$2come_regexphcharph")),(struct come_regex*)come_increment_ref_count(__null_value3),(char*)come_increment_ref_count(Err_253))));
        /*i*/come_call_finalizer3(come_exception_var_b2_252,come_regex_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */Err_253 = come_decrement_ref_count2(Err_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value288,tuple2$2come_regexphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2come_regexphvoidp*)(__right_value290=tuple2$2come_regexphvoidp_initialize((struct tuple2$2come_regexphvoidp*)come_increment_ref_count((struct tuple2$2come_regexphvoidp*)come_calloc(1, sizeof(struct tuple2$2come_regexphvoidp)*(1), "libcomelang-str.c", 73, "struct tuple2$2come_regexphvoidp")),(struct come_regex*)come_increment_ref_count(come_exception_var_b2_252),((void*)0))));
    /*i*/come_call_finalizer3(come_exception_var_b2_252,come_regex_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */Err_253 = come_decrement_ref_count2(Err_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value290,tuple2$2come_regexphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

struct come_regex* come_regex_clone(struct come_regex* reg){
void* __result_obj__=(void*)0;
struct come_regex* __result232__;
void* __right_value291 = (void*)0;
struct come_regex* result_254;
void* __right_value292 = (void*)0;
char* __dec_obj39;
const char* err_255;
int erro_ofs_256;
struct come_regex* __result233__;
err_255 = (void*)0;
memset(&erro_ofs_256, 0, sizeof(int));
    if(    reg==((void*)0)) {
        __result232__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_254=(struct come_regex*)come_increment_ref_count((struct come_regex*)come_calloc(1, sizeof(struct come_regex)*(1), "libcomelang-str.c", 83, "come_regex"));
    __dec_obj39=result_254->str;
    result_254->str=(char*)come_increment_ref_count(string_clone(reg->str));
    /*G*/ __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_254->ignore_case=reg->ignore_case;
    result_254->multiline=reg->multiline;
    result_254->global=reg->global;
    result_254->extended=reg->extended;
    result_254->dotall=reg->dotall;
    result_254->anchored=reg->anchored;
    result_254->dollar_endonly=reg->dollar_endonly;
    result_254->ungreedy=reg->ungreedy;
    result_254->options=reg->options;
    result_254->re=pcre_compile(result_254->str,result_254->options,&err_255,&erro_ofs_256,((void*)0));
    if(    result_254->re==((void*)0)) {
        printf("regex compile error(%s)\n",result_254->str);
        stackframe();
        exit(1);
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_254;
    /*i*/come_call_finalizer3(result_254,come_regex_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

char* come_regex_to_string(struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value293 = (void*)0;
char* __result234__;
void* __right_value294 = (void*)0;
char* __result235__;
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result234__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value293=__builtin_string("")));
        /* U11 */__right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value294=__builtin_string(reg->str)));
    /* U11 */__right_value294 = come_decrement_ref_count2(__right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

char* string_lower_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value295 = (void*)0;
char* result_257;
int i_258;
char* __result236__;
    result_257=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_258=0;    i_258<strlen(str);    i_258++    ){
        if(        str[i_258]>=65&&str[i_258]<=90) {
            result_257[i_258]=str[i_258]-65+97;
        }
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_257;
    /* U13 */result_257 = come_decrement_ref_count2(result_257, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

char* string_upper_case(char* str){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
char* result_259;
int i_260;
char* __result237__;
    result_259=(char*)come_increment_ref_count(__builtin_string(str));
    for(    i_260=0;    i_260<strlen(str);    i_260++    ){
        if(        str[i_260]>=97&&str[i_260]<=122) {
            result_259[i_260]=str[i_260]-97+65;
        }
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_259;
    /* U13 */result_259 = come_decrement_ref_count2(result_259, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

int* wchar_tp_substring(int* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value297 = (void*)0;
int* __result238__;
int len_261;
void* __right_value298 = (void*)0;
int* __result239__;
void* __right_value299 = (void*)0;
int* __result240__;
void* __right_value300 = (void*)0;
int* __result241__;
void* __right_value301 = (void*)0;
int* result_262;
int* __result242__;
    if(    str==((void*)0)) {
        __result238__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value297=__builtin_wstring("")));
        /* U11 */__right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    len_261=wcslen(str);
    if(    head<0) {
        head+=len_261;
    }
    if(    tail<0) {
        tail+=len_261+1;
    }
    if(    head>tail) {
        __result239__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value298=__builtin_wstring("")));
        /* U11 */__right_value298 = come_decrement_ref_count2(__right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_261) {
        tail=len_261;
    }
    if(    head==tail) {
        __result240__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value299=__builtin_wstring("")));
        /* U11 */__right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    if(    tail-head+1<1) {
        __result241__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value300=__builtin_wstring("")));
        /* U11 */__right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    result_262=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(tail-head+1)), "libcomelang-str.c", 185, "int"));
    memcpy(result_262,str+head,sizeof(int)*(tail-head));
    result_262[tail-head]=0;
    __result242__ = gComeFunResultObject = __result_obj__ = result_262;
    /* U13 */result_262 = come_decrement_ref_count2(result_262, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

int* __builtin_wstring(char* str){
void* __result_obj__=(void*)0;
int* __result243__;
int len_263;
void* __right_value302 = (void*)0;
int* wstr_264;
int ret_265;
int* __result244__;
    if(    str==((void*)0)) {
        __result243__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    len_263=strlen(str);
    wstr_264=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_263+1)), "libcomelang-str.c", 200, "int"));
    ret_265=mbstowcs(wstr_264,str,len_263+1);
    wstr_264[ret_265]=0;
    if(    ret_265<0) {
        wstr_264[0]=0;
    }
    __result244__ = gComeFunResultObject = __result_obj__ = wstr_264;
    /* U13 */wstr_264 = come_decrement_ref_count2(wstr_264, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

int charp_index_count(char* str, char* search_str, int count, int default_value){
int n_266;
int len_267;
int i_268;
int len2_269;
int j_270;
memset(&j_270, 0, sizeof(int));
    n_266=0;
    len_267=strlen(str);
    for(    i_268=0;    i_268<len_267;    i_268++    ){
        len2_269=strlen(search_str);
        for(        j_270=0;        j_270<len2_269;        j_270++        ){
            if(            str[i_268+j_270]!=search_str[j_270]) {
                break;
            }
        }
        if(        j_270==len2_269) {
            n_266++;
            if(            n_266==count) {
                return i_268;
            }
        }
    }
    return default_value;
}

int charp_index_regex_count(char* self, struct come_regex* reg, int count, int default_value){
int ovec_max_271;
int result_275;
int offset_276;
const char* err_277;
int erro_ofs_278;
int options_279;
char* str_280;
struct real_pcre8_or_16* re_281;
int n_282;
int options_283;
int len_284;
int regex_result_285;
int i_286;
int i_287;
err_277 = (void*)0;
memset(&erro_ofs_278, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_271=16;
    int start_272[ovec_max_271];
    memset(&start_272, 0, sizeof(int)    *(ovec_max_271)    );
    int end_273[ovec_max_271];
    memset(&end_273, 0, sizeof(int)    *(ovec_max_271)    );
    int ovec_value_274[ovec_max_271*3];
    memset(&ovec_value_274, 0, sizeof(int)    *(ovec_max_271*3)    );
    result_275=default_value;
    offset_276=0;
    options_279=reg->options;
    str_280=reg->str;
    re_281=reg->re;
    n_282=0;
    while((_Bool)1) {
        options_283=2097152;
        len_284=strlen(self);
        regex_result_285=pcre_exec(re_281,(struct pcre_extra*)0,self,len_284,offset_276,options_283,ovec_value_274,ovec_max_271*3);
        for(        i_286=0;        i_286<ovec_max_271;        i_286++        ){
            start_272[i_286]=ovec_value_274[i_286*2];
        }
        for(        i_287=0;        i_287<ovec_max_271;        i_287++        ){
            end_273[i_287]=ovec_value_274[i_287*2+1];
        }
        if(        regex_result_285>0) {
            n_282++;
            if(            offset_276==end_273[0]) {
                offset_276++;
            }
            else {
                offset_276=end_273[0];
            }
            if(            n_282==count) {
                result_275=start_272[0];
                break;
            }
        }
        else {
            break;
        }
    }
    return result_275;
}

int charp_rindex(char* str, char* search_str, int default_value){
int len_288;
char* p_289;
    len_288=strlen(search_str);
    p_289=str+strlen(str)-len_288;
    while(p_289>=str) {
        if(        strncmp(p_289,search_str,len_288)==0) {
            return p_289-str;
        }
        p_289--;
    }
    return default_value;
}

int charp_rindex_regex(char* self, struct come_regex* reg, int default_value){
const char* err_290;
int erro_ofs_291;
int options_292;
char* str_293;
struct real_pcre8_or_16* re_294;
void* __right_value303 = (void*)0;
char* self2_295;
int ovec_max_296;
int result_300;
int offset_301;
int options_302;
int len_303;
int regex_result_304;
int i_305;
int i_306;
int __result245__;
err_290 = (void*)0;
memset(&erro_ofs_291, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_292=reg->options;
    str_293=reg->str;
    re_294=reg->re;
    self2_295=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_296=16;
    int start_297[ovec_max_296];
    memset(&start_297, 0, sizeof(int)    *(ovec_max_296)    );
    int end_298[ovec_max_296];
    memset(&end_298, 0, sizeof(int)    *(ovec_max_296)    );
    int ovec_value_299[ovec_max_296*3];
    memset(&ovec_value_299, 0, sizeof(int)    *(ovec_max_296*3)    );
    result_300=default_value;
    offset_301=0;
    while((_Bool)1) {
        options_302=2097152;
        len_303=strlen(self2_295);
        regex_result_304=pcre_exec(re_294,(struct pcre_extra*)0,self2_295,len_303,offset_301,options_302,ovec_value_299,ovec_max_296*3);
        for(        i_305=0;        i_305<ovec_max_296;        i_305++        ){
            start_297[i_305]=ovec_value_299[i_305*2];
        }
        for(        i_306=0;        i_306<ovec_max_296;        i_306++        ){
            end_298[i_306]=ovec_value_299[i_306*2+1];
        }
        if(        regex_result_304==1||regex_result_304>0) {
            result_300=strlen(self)-1-start_297[0];
            break;
        }
        {
            break;
        }
    }
    __result245__ = result_300;
    /* U13 */self2_295 = come_decrement_ref_count2(self2_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result245__;
}

int charp_rindex_count(char* str, char* search_str, int count, int default_value){
int len_307;
char* p_308;
int n_309;
    len_307=strlen(search_str);
    p_308=str+strlen(str)-len_307;
    n_309=0;
    while(p_308>=str) {
        if(        strncmp(p_308,search_str,len_307)==0) {
            n_309++;
            if(            n_309==count) {
                return p_308-str;
            }
        }
        p_308--;
    }
    return default_value;
}

struct list$1charph* charp_scan_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct list$1charph* __result246__;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct list$1charph* result_310;
int offset_311;
int ovec_max_312;
const char* err_316;
int erro_ofs_317;
int options_318;
char* str_319;
struct real_pcre8_or_16* re_320;
int options_321;
int len_322;
int regex_result_323;
int i_324;
int i_325;
void* __right_value308 = (void*)0;
char* str_326;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct list$1charph* group_strings_327;
void* __right_value311 = (void*)0;
char* str2_328;
void* __right_value312 = (void*)0;
char* str_329;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct list$1charph* group_strings_330;
int i_331;
void* __right_value315 = (void*)0;
char* match_string_332;
void* __right_value316 = (void*)0;
char* str2_333;
struct list$1charph* __result247__;
err_316 = (void*)0;
memset(&erro_ofs_317, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result246__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value305=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 395, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value305,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    result_310=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 398, "list$1charph"))));
    offset_311=0;
    ovec_max_312=16;
    int start_313[ovec_max_312];
    memset(&start_313, 0, sizeof(int)    *(ovec_max_312)    );
    int end_314[ovec_max_312];
    memset(&end_314, 0, sizeof(int)    *(ovec_max_312)    );
    int ovec_value_315[ovec_max_312*3];
    memset(&ovec_value_315, 0, sizeof(int)    *(ovec_max_312*3)    );
    options_318=reg->options;
    str_319=reg->str;
    re_320=reg->re;
    while((_Bool)1) {
        options_321=2097152;
        len_322=strlen(self);
        regex_result_323=pcre_exec(re_320,(struct pcre_extra*)0,self,len_322,offset_311,options_321,ovec_value_315,ovec_max_312*3);
        for(        i_324=0;        i_324<ovec_max_312;        i_324++        ){
            start_313[i_324]=ovec_value_315[i_324*2];
        }
        for(        i_325=0;        i_325<ovec_max_312;        i_325++        ){
            end_314[i_325]=ovec_value_315[i_325*2+1];
        }
        if(        regex_result_323==1) {
            str_326=(char*)come_increment_ref_count(charp_substring(self,start_313[0],end_314[0]));
            group_strings_327=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 432, "list$1charph"))));
            str2_328=(char*)come_increment_ref_count(block(parent,str_326,group_strings_327));
            list$1charph_push_back(result_310,(char*)come_increment_ref_count(str2_328));
            if(            offset_311==end_314[0]) {
                offset_311++;
            }
            else {
                offset_311=end_314[0];
            }
            /* U13 */str_326 = come_decrement_ref_count2(str_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_327,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_328 = come_decrement_ref_count2(str2_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_323>1) {
            str_329=(char*)come_increment_ref_count(charp_substring(self,start_313[0],end_314[0]));
            group_strings_330=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 449, "list$1charph"))));
            for(            i_331=1;            i_331<regex_result_323;            i_331++            ){
                match_string_332=(char*)come_increment_ref_count(charp_substring(self,start_313[i_331],end_314[i_331]));
                list$1charph_push_back(group_strings_330,(char*)come_increment_ref_count(match_string_332));
                /* U13 */match_string_332 = come_decrement_ref_count2(match_string_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_333=(char*)come_increment_ref_count(block(parent,str_329,group_strings_330));
            list$1charph_push_back(result_310,(char*)come_increment_ref_count(str2_333));
            if(            offset_311==end_314[0]) {
                offset_311++;
            }
            else {
                offset_311=end_314[0];
            }
            /* U13 */str_329 = come_decrement_ref_count2(str_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_330,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_333 = come_decrement_ref_count2(str2_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_310;
    /*i*/come_call_finalizer3(result_310,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

struct list$1charph* charp_scan_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1charph* __result248__;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct list$1charph* result_334;
int offset_335;
int ovec_max_336;
const char* err_340;
int erro_ofs_341;
int options_342;
char* str_343;
struct real_pcre8_or_16* re_344;
int n_345;
int options_346;
int len_347;
int regex_result_348;
int i_349;
int i_350;
void* __right_value321 = (void*)0;
char* str_351;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct list$1charph* group_strings_352;
void* __right_value324 = (void*)0;
char* str2_353;
void* __right_value325 = (void*)0;
char* str_354;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct list$1charph* group_strings_355;
int i_356;
void* __right_value328 = (void*)0;
char* match_string_357;
void* __right_value329 = (void*)0;
char* str2_358;
struct list$1charph* __result249__;
err_340 = (void*)0;
memset(&erro_ofs_341, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result248__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value318=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 480, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value318,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    result_334=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 483, "list$1charph"))));
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
    n_345=0;
    while((_Bool)1) {
        options_346=2097152;
        len_347=strlen(self);
        regex_result_348=pcre_exec(re_344,(struct pcre_extra*)0,self,len_347,offset_335,options_346,ovec_value_339,ovec_max_336*3);
        for(        i_349=0;        i_349<ovec_max_336;        i_349++        ){
            start_337[i_349]=ovec_value_339[i_349*2];
        }
        for(        i_350=0;        i_350<ovec_max_336;        i_350++        ){
            end_338[i_350]=ovec_value_339[i_350*2+1];
        }
        if(        regex_result_348==1) {
            str_351=(char*)come_increment_ref_count(charp_substring(self,start_337[0],end_338[0]));
            group_strings_352=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 519, "list$1charph"))));
            str2_353=(char*)come_increment_ref_count(block(parent,str_351,group_strings_352));
            list$1charph_push_back(result_334,(char*)come_increment_ref_count(str2_353));
            if(            offset_335==end_338[0]) {
                offset_335++;
            }
            else {
                offset_335=end_338[0];
            }
            n_345++;
            if(            n_345==count) {
                /* U13 */str_351 = come_decrement_ref_count2(str_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_352,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */str2_353 = come_decrement_ref_count2(str2_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */str_351 = come_decrement_ref_count2(str_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_352,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_353 = come_decrement_ref_count2(str2_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_348>1) {
            str_354=(char*)come_increment_ref_count(charp_substring(self,start_337[0],end_338[0]));
            group_strings_355=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 541, "list$1charph"))));
            for(            i_356=1;            i_356<regex_result_348;            i_356++            ){
                match_string_357=(char*)come_increment_ref_count(charp_substring(self,start_337[i_356],end_338[i_356]));
                list$1charph_push_back(group_strings_355,(char*)come_increment_ref_count(match_string_357));
                /* U13 */match_string_357 = come_decrement_ref_count2(match_string_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_358=(char*)come_increment_ref_count(block(parent,str_354,group_strings_355));
            list$1charph_push_back(result_334,(char*)come_increment_ref_count(str2_358));
            if(            offset_335==end_338[0]) {
                offset_335++;
            }
            else {
                offset_335=end_338[0];
            }
            n_345++;
            if(            n_345==count) {
                /* U13 */str_354 = come_decrement_ref_count2(str_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_355,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */str2_358 = come_decrement_ref_count2(str2_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */str_354 = come_decrement_ref_count2(str_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_355,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_358 = come_decrement_ref_count2(str2_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result249__ = gComeFunResultObject = __result_obj__ = result_334;
    /*i*/come_call_finalizer3(result_334,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

struct list$1charph* charp_split_block(char* self, struct come_regex* reg, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct list$1charph* __result250__;
const char* err_359;
int erro_ofs_360;
int options_361;
char* str_362;
struct real_pcre8_or_16* re_363;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct list$1charph* result_364;
int offset_365;
int ovec_max_366;
int options_370;
int len_371;
int regex_result_372;
int i_373;
int i_374;
void* __right_value334 = (void*)0;
char* str_375;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct list$1charph* match_strings_376;
void* __right_value337 = (void*)0;
char* str2_377;
void* __right_value338 = (void*)0;
char* str_378;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct list$1charph* match_strings_379;
int i_380;
void* __right_value341 = (void*)0;
char* match_str_381;
void* __right_value342 = (void*)0;
char* str2_382;
void* __right_value343 = (void*)0;
char* str_383;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct list$1charph* match_strings_384;
void* __right_value346 = (void*)0;
char* str2_385;
struct list$1charph* __result251__;
err_359 = (void*)0;
memset(&erro_ofs_360, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result250__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value331=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 576, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value331,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    options_361=reg->options;
    str_362=reg->str;
    re_363=reg->re;
    result_364=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 586, "list$1charph"))));
    offset_365=0;
    ovec_max_366=16;
    int start_367[ovec_max_366];
    memset(&start_367, 0, sizeof(int)    *(ovec_max_366)    );
    int end_368[ovec_max_366];
    memset(&end_368, 0, sizeof(int)    *(ovec_max_366)    );
    int ovec_value_369[ovec_max_366*3];
    memset(&ovec_value_369, 0, sizeof(int)    *(ovec_max_366*3)    );
    while((_Bool)1) {
        options_370=2097152;
        len_371=strlen(self);
        regex_result_372=pcre_exec(re_363,(struct pcre_extra*)0,self,len_371,offset_365,options_370,ovec_value_369,ovec_max_366*3);
        for(        i_373=0;        i_373<ovec_max_366;        i_373++        ){
            start_367[i_373]=ovec_value_369[i_373*2];
        }
        for(        i_374=0;        i_374<ovec_max_366;        i_374++        ){
            end_368[i_374]=ovec_value_369[i_374*2+1];
        }
        if(        regex_result_372==1) {
            str_375=(char*)come_increment_ref_count(charp_substring(self,offset_365,start_367[0]));
            match_strings_376=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 613, "list$1charph"))));
            str2_377=(char*)come_increment_ref_count(block(parent,str_375,match_strings_376));
            list$1charph_push_back(result_364,(char*)come_increment_ref_count(str2_377));
            if(            offset_365==end_368[0]) {
                offset_365++;
            }
            else {
                offset_365=end_368[0];
            }
            /* U13 */str_375 = come_decrement_ref_count2(str_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_376,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_377 = come_decrement_ref_count2(str2_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_372>1) {
            str_378=(char*)come_increment_ref_count(charp_substring(self,offset_365,start_367[0]));
            if(            offset_365==end_368[0]) {
                offset_365++;
            }
            else {
                offset_365=end_368[0];
            }
            match_strings_379=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 636, "list$1charph"))));
            for(            i_380=1;            i_380<regex_result_372;            i_380++            ){
                match_str_381=(char*)come_increment_ref_count(charp_substring(self,start_367[i_380],end_368[i_380]));
                list$1charph_push_back(match_strings_379,(char*)come_increment_ref_count(match_str_381));
                /* U13 */match_str_381 = come_decrement_ref_count2(match_str_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_382=(char*)come_increment_ref_count(block(parent,str_378,match_strings_379));
            list$1charph_push_back(result_364,(char*)come_increment_ref_count(str2_382));
            /* U13 */str_378 = come_decrement_ref_count2(str_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_379,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_382 = come_decrement_ref_count2(str2_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    if(    offset_365<charp_length(self)) {
        str_383=(char*)come_increment_ref_count(charp_substring(self,offset_365,-1));
        match_strings_384=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 655, "list$1charph"))));
        str2_385=(char*)come_increment_ref_count(block(parent,str_383,match_strings_384));
        list$1charph_push_back(result_364,(char*)come_increment_ref_count(str2_385));
        /* U13 */str_383 = come_decrement_ref_count2(str_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(match_strings_384,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */str2_385 = come_decrement_ref_count2(str2_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result251__ = gComeFunResultObject = __result_obj__ = result_364;
    /*i*/come_call_finalizer3(result_364,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

struct list$1charph* charp_split_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct list$1charph* __result252__;
const char* err_386;
int erro_ofs_387;
int options_388;
char* str_389;
struct real_pcre8_or_16* re_390;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct list$1charph* result_391;
int offset_392;
int ovec_max_393;
int n_397;
int options_398;
int len_399;
int regex_result_400;
int i_401;
int i_402;
void* __right_value351 = (void*)0;
char* str_403;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct list$1charph* match_strings_404;
void* __right_value354 = (void*)0;
char* str2_405;
void* __right_value355 = (void*)0;
char* str_406;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct list$1charph* match_strings_407;
int i_408;
void* __right_value358 = (void*)0;
char* match_str_409;
void* __right_value359 = (void*)0;
char* str2_410;
struct list$1charph* __result253__;
err_386 = (void*)0;
memset(&erro_ofs_387, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result252__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value348=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 666, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value348,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    options_388=reg->options;
    str_389=reg->str;
    re_390=reg->re;
    result_391=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 676, "list$1charph"))));
    offset_392=0;
    ovec_max_393=16;
    int start_394[ovec_max_393];
    memset(&start_394, 0, sizeof(int)    *(ovec_max_393)    );
    int end_395[ovec_max_393];
    memset(&end_395, 0, sizeof(int)    *(ovec_max_393)    );
    int ovec_value_396[ovec_max_393*3];
    memset(&ovec_value_396, 0, sizeof(int)    *(ovec_max_393*3)    );
    n_397=0;
    while((_Bool)1) {
        options_398=2097152;
        len_399=strlen(self);
        regex_result_400=pcre_exec(re_390,(struct pcre_extra*)0,self,len_399,offset_392,options_398,ovec_value_396,ovec_max_393*3);
        for(        i_401=0;        i_401<ovec_max_393;        i_401++        ){
            start_394[i_401]=ovec_value_396[i_401*2];
        }
        for(        i_402=0;        i_402<ovec_max_393;        i_402++        ){
            end_395[i_402]=ovec_value_396[i_402*2+1];
        }
        if(        regex_result_400==1) {
            str_403=(char*)come_increment_ref_count(charp_substring(self,offset_392,start_394[0]));
            match_strings_404=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 705, "list$1charph"))));
            str2_405=(char*)come_increment_ref_count(block(parent,str_403,match_strings_404));
            list$1charph_push_back(result_391,(char*)come_increment_ref_count(str2_405));
            if(            offset_392==end_395[0]) {
                offset_392++;
            }
            else {
                offset_392=end_395[0];
            }
            /* U13 */str_403 = come_decrement_ref_count2(str_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_404,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_405 = come_decrement_ref_count2(str2_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_400>1) {
            str_406=(char*)come_increment_ref_count(charp_substring(self,offset_392,start_394[0]));
            if(            offset_392==end_395[0]) {
                offset_392++;
            }
            else {
                offset_392=end_395[0];
            }
            match_strings_407=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 728, "list$1charph"))));
            for(            i_408=1;            i_408<regex_result_400;            i_408++            ){
                match_str_409=(char*)come_increment_ref_count(charp_substring(self,start_394[i_408],end_395[i_408]));
                list$1charph_push_back(match_strings_407,(char*)come_increment_ref_count(match_str_409));
                /* U13 */match_str_409 = come_decrement_ref_count2(match_str_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            str2_410=(char*)come_increment_ref_count(block(parent,str_406,match_strings_407));
            list$1charph_push_back(result_391,(char*)come_increment_ref_count(str2_410));
            /* U13 */str_406 = come_decrement_ref_count2(str_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(match_strings_407,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */str2_410 = come_decrement_ref_count2(str2_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
        n_397++;
        if(        n_397==count) {
            break;
        }
    }
    __result253__ = gComeFunResultObject = __result_obj__ = result_391;
    /*i*/come_call_finalizer3(result_391,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
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
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct list$1charph* __result254__;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct list$1charph* result_411;
int offset_412;
int ovec_max_413;
const char* err_417;
int erro_ofs_418;
int options_419;
char* str_420;
struct real_pcre8_or_16* re_421;
int options_422;
int len_423;
int regex_result_424;
int i_425;
int i_426;
void* __right_value364 = (void*)0;
char* str_427;
void* __right_value365 = (void*)0;
char* str_428;
int i_429;
void* __right_value366 = (void*)0;
char* match_string_430;
struct list$1charph* __result255__;
err_417 = (void*)0;
memset(&erro_ofs_418, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result254__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value361=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 796, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value361,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    result_411=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 799, "list$1charph"))));
    offset_412=0;
    ovec_max_413=16;
    int start_414[ovec_max_413];
    memset(&start_414, 0, sizeof(int)    *(ovec_max_413)    );
    int end_415[ovec_max_413];
    memset(&end_415, 0, sizeof(int)    *(ovec_max_413)    );
    int ovec_value_416[ovec_max_413*3];
    memset(&ovec_value_416, 0, sizeof(int)    *(ovec_max_413*3)    );
    options_419=reg->options;
    str_420=reg->str;
    re_421=reg->re;
    while((_Bool)1) {
        options_422=2097152;
        len_423=strlen(self);
        regex_result_424=pcre_exec(re_421,(struct pcre_extra*)0,self,len_423,offset_412,options_422,ovec_value_416,ovec_max_413*3);
        for(        i_425=0;        i_425<ovec_max_413;        i_425++        ){
            start_414[i_425]=ovec_value_416[i_425*2];
        }
        for(        i_426=0;        i_426<ovec_max_413;        i_426++        ){
            end_415[i_426]=ovec_value_416[i_426*2+1];
        }
        if(        regex_result_424==1) {
            str_427=(char*)come_increment_ref_count(charp_substring(self,start_414[0],end_415[0]));
            list$1charph_push_back(result_411,(char*)come_increment_ref_count(str_427));
            if(            offset_412==end_415[0]) {
                offset_412++;
            }
            else {
                offset_412=end_415[0];
            }
            /* U13 */str_427 = come_decrement_ref_count2(str_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_424>1) {
            str_428=(char*)come_increment_ref_count(charp_substring(self,start_414[0],end_415[0]));
            list$1charph_push_back(result_411,(char*)come_increment_ref_count(str_428));
            if(            offset_412==end_415[0]) {
                offset_412++;
            }
            else {
                offset_412=end_415[0];
            }
            *num_group_string_in_regex=regex_result_424-1;
            for(            i_429=1;            i_429<regex_result_424;            i_429++            ){
                match_string_430=(char*)come_increment_ref_count(charp_substring(self,start_414[i_429],end_415[i_429]));
                list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_430));
                /* U13 */match_string_430 = come_decrement_ref_count2(match_string_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_428 = come_decrement_ref_count2(str_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result255__ = gComeFunResultObject = __result_obj__ = result_411;
    /*i*/come_call_finalizer3(result_411,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

char* charp_strip(char* self){
void* __result_obj__=(void*)0;
void* __right_value367 = (void*)0;
char* result_431;
int len_432;
char* __result256__;
    result_431=(char*)come_increment_ref_count(__builtin_string(self));
    len_432=strlen(self);
    if(    self[len_432-1]==10) {
        result_431[len_432-1]=0;
    }
    else if(    self[len_432-1]==13) {
        result_431[len_432-1]=0;
    }
    else if(    len_432>2&&self[len_432-2]==13&&self[len_432-1]==10) {
        result_431[len_432-2]=0;
    }
    __result256__ = gComeFunResultObject = __result_obj__ = result_431;
    /* U13 */result_431 = come_decrement_ref_count2(result_431, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

char* wchar_tp_to_string(int* wstr){
void* __result_obj__=(void*)0;
int len_433;
void* __right_value368 = (void*)0;
char* result_434;
char* __result257__;
    len_433=6*(wcslen(wstr)+1);
    result_434=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_433)), "libcomelang-str.c", 894, "char"));
    if(    wcstombs(result_434,wstr,len_433)<0) {
        strncpy(result_434,"",len_433);
    }
    __result257__ = gComeFunResultObject = __result_obj__ = result_434;
    /* U13 */result_434 = come_decrement_ref_count2(result_434, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

int* charp_to_wstring(char* str){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
int* __result258__;
    __result258__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value369=__builtin_wstring(str)));
    /* U11 */__right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

int wchar_tp_length(int* str){
    return wcslen(str);
}

int* wchar_tp_delete(int* str, int head, int tail){
void* __result_obj__=(void*)0;
int len_435;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
int* __result259__;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
int* __result260__;
void* __right_value374 = (void*)0;
int* sub_str_436;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
int* __result261__;
    len_435=wcslen(str);
    if(    len_435==0) {
        __result259__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value371=string_to_wstring(((char*)(__right_value370=wchar_tp_to_string(str))))));
        /* U11 */__right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    if(    head<0) {
        head+=len_435;
    }
    if(    tail<0) {
        tail+=len_435+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result260__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value373=string_to_wstring(((char*)(__right_value372=wchar_tp_to_string(str))))));
        /* U11 */__right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        /* U11 */__right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    if(    tail>=len_435) {
        tail=len_435;
    }
    sub_str_436=(int*)come_increment_ref_count(wchar_tp_substring(str,tail,-1));
    memcpy(str+head,sub_str_436,sizeof(int)*(wstring_length(sub_str_436)+1));
    __result261__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value376=string_to_wstring(((char*)(__right_value375=wchar_tp_to_string(str))))));
    /* U13 */sub_str_436 = come_decrement_ref_count2(sub_str_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U11 */__right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

int wchar_tp_index(int* str, int* search_str, int default_value){
int* head_437;
    head_437=wcsstr(str,search_str);
    if(    head_437==((void*)0)) {
        return default_value;
    }
    return head_437-str;
}

int wchar_tp_rindex(int* str, int* search_str, int default_value){
int len_438;
int* p_439;
int len2_440;
_Bool result_441;
int i_442;
memset(&i_442, 0, sizeof(int));
    len_438=wcslen(search_str);
    p_439=str+wcslen(str)-len_438;
    while(p_439>=str) {
        len2_440=wcslen(p_439);
        result_441=(_Bool)1;
        for(        i_442=0;        i_442<len_438&&i_442<len2_440;        i_442++        ){
            if(            p_439[i_442]!=search_str[i_442]) {
                result_441=(_Bool)0;
            }
        }
        if(        result_441) {
            return (p_439-str);
        }
        p_439--;
    }
    return default_value;
}

int* wchar_tp_reverse(int* str){
void* __result_obj__=(void*)0;
int len_443;
void* __right_value377 = (void*)0;
int* result_444;
int i_445;
int* __result262__;
    len_443=wcslen(str);
    result_444=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_443+1)), "libcomelang-str.c", 994, "int"));
    for(    i_445=0;    i_445<len_443;    i_445++    ){
        result_444[i_445]=str[len_443-i_445-1];
    }
    result_444[len_443]=0;
    __result262__ = gComeFunResultObject = __result_obj__ = result_444;
    /* U13 */result_444 = come_decrement_ref_count2(result_444, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

int* wchar_tp_multiply(int* str, int n){
void* __result_obj__=(void*)0;
int len_446;
void* __right_value378 = (void*)0;
int* result_447;
int i_448;
int* __result263__;
    len_446=wcslen(str)*n+1;
    result_447=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_446)), "libcomelang-str.c", 1009, "int"));
    result_447[0]=0;
    for(    i_448=0;    i_448<n;    i_448++    ){
        wcscat(result_447,str);
    }
    __result263__ = gComeFunResultObject = __result_obj__ = result_447;
    /* U13 */result_447 = come_decrement_ref_count2(result_447, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

int* wchar_tp_printable(int* str){
void* __result_obj__=(void*)0;
int len_449;
void* __right_value379 = (void*)0;
int* result_450;
int n_451;
int i_452;
int c_453;
int* __result264__;
    len_449=wchar_tp_length(str);
    result_450=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(len_449*2+1)), "libcomelang-str.c", 1023, "int"));
    n_451=0;
    for(    i_452=0;    i_452<len_449;    i_452++    ){
        c_453=str[i_452];
        if(        (c_453>=0&&c_453<32)||c_453==127) {
            result_450[n_451++]=94;
            result_450[n_451++]=c_453+65-1;
        }
        else {
            result_450[n_451++]=c_453;
        }
    }
    result_450[n_451]=0;
    __result264__ = gComeFunResultObject = __result_obj__ = result_450;
    /* U13 */result_450 = come_decrement_ref_count2(result_450, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

_Bool charp_match_group_strings(char* self, struct come_regex* reg, int count, struct list$1charph* group_strings){
int offset_454;
int ovec_max_455;
const char* err_459;
int erro_ofs_460;
int options_461;
char* str_462;
struct real_pcre8_or_16* re_463;
int n_464;
int options_465;
int len_466;
int regex_result_467;
int i_468;
int i_469;
int i_472;
void* __right_value380 = (void*)0;
char* match_string_473;
err_459 = (void*)0;
memset(&erro_ofs_460, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_454=0;
    ovec_max_455=16;
    int start_456[ovec_max_455];
    memset(&start_456, 0, sizeof(int)    *(ovec_max_455)    );
    int end_457[ovec_max_455];
    memset(&end_457, 0, sizeof(int)    *(ovec_max_455)    );
    int ovec_value_458[ovec_max_455*3];
    memset(&ovec_value_458, 0, sizeof(int)    *(ovec_max_455*3)    );
    options_461=reg->options;
    str_462=reg->str;
    re_463=reg->re;
    n_464=0;
    while((_Bool)1) {
        options_465=2097152;
        len_466=strlen(self);
        regex_result_467=pcre_exec(re_463,(struct pcre_extra*)0,self,len_466,offset_454,options_465,ovec_value_458,ovec_max_455*3);
        for(        i_468=0;        i_468<ovec_max_455;        i_468++        ){
            start_456[i_468]=ovec_value_458[i_468*2];
        }
        for(        i_469=0;        i_469<ovec_max_455;        i_469++        ){
            end_457[i_469]=ovec_value_458[i_469*2+1];
        }
        if(        regex_result_467==1||(group_strings==((void*)0)&&regex_result_467>0)) {
            n_464++;
            if(            n_464==count) {
                return (_Bool)1;
            }
            if(            offset_454==end_457[0]) {
                offset_454++;
            }
            else {
                offset_454=end_457[0];
            }
        }
        else if(        regex_result_467>1) {
            n_464++;
            list$1charph_reset(group_strings);
            for(            i_472=1;            i_472<regex_result_467;            i_472++            ){
                match_string_473=(char*)come_increment_ref_count(charp_substring(self,start_456[i_472],end_457[i_472]));
                list$1charph_push_back(group_strings,(char*)come_increment_ref_count(match_string_473));
                /* U13 */match_string_473 = come_decrement_ref_count2(match_string_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_464==count) {
                return (_Bool)1;
            }
            if(            offset_454==end_457[0]) {
                offset_454++;
            }
            else {
                offset_454=end_457[0];
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
struct list_item$1charph* it_470;
struct list_item$1charph* prev_it_471;
struct list$1charph* __result265__;
    it_470=self->head;
    while(it_470!=((void*)0)) {
        prev_it_471=it_470;
        it_470=it_470->next;
        /*i*/come_call_finalizer3(prev_it_471,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result265__;
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
    return charp_get_hash_key(reg->str);
}

_Bool wchar_tp_equals(int left, int right){
    return left==right;
}

int* wchar_tp_operator_mult(int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value381 = (void*)0;
int* __result266__;
    __result266__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value381=wchar_tp_multiply(str,n)));
    /* U11 */__right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

int* wstring_operator_mult(int* str, int n){
void* __result_obj__=(void*)0;
void* __right_value382 = (void*)0;
int* __result267__;
    __result267__ = gComeFunResultObject = __result_obj__ = ((int*)(__right_value382=wchar_tp_multiply(str,n)));
    /* U11 */__right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result267__;
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
void* __right_value383 = (void*)0;
int* result_474;
int* __result268__;
    result_474=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str.c", 1194, "int"));
    wcscpy(result_474,left);
    wcscat(result_474,right);
    __result268__ = gComeFunResultObject = __result_obj__ = result_474;
    /* U13 */result_474 = come_decrement_ref_count2(result_474, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

int* wstring_operator_add(int* left, int* right){
void* __result_obj__=(void*)0;
void* __right_value384 = (void*)0;
int* result_475;
int* __result269__;
    result_475=(int*)come_increment_ref_count((int*)come_calloc(1, sizeof(int)*(1*(wcslen(left)+wcslen(right)+1)), "libcomelang-str.c", 1204, "int"));
    wcscpy(result_475,left);
    wcscat(result_475,right);
    __result269__ = gComeFunResultObject = __result_obj__ = result_475;
    /* U13 */result_475 = come_decrement_ref_count2(result_475, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

int charp_index(char* str, char* search_str, int default_value){
char* head_476;
    head_476=strstr(str,search_str);
    if(    head_476==((void*)0)) {
        return default_value;
    }
    return head_476-str;
}

int charp_index_regex(char* self, struct come_regex* reg, int default_value){
int ovec_max_477;
int result_481;
int offset_482;
const char* err_483;
int erro_ofs_484;
int options_485;
char* str_486;
struct real_pcre8_or_16* re_487;
int options_488;
int len_489;
int regex_result_490;
int i_491;
int i_492;
err_483 = (void*)0;
memset(&erro_ofs_484, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    ovec_max_477=16;
    int start_478[ovec_max_477];
    memset(&start_478, 0, sizeof(int)    *(ovec_max_477)    );
    int end_479[ovec_max_477];
    memset(&end_479, 0, sizeof(int)    *(ovec_max_477)    );
    int ovec_value_480[ovec_max_477*3];
    memset(&ovec_value_480, 0, sizeof(int)    *(ovec_max_477*3)    );
    result_481=default_value;
    offset_482=0;
    options_485=reg->options;
    str_486=reg->str;
    re_487=reg->re;
    while((_Bool)1) {
        options_488=2097152;
        len_489=strlen(self);
        regex_result_490=pcre_exec(re_487,(struct pcre_extra*)0,self,len_489,offset_482,options_488,ovec_value_480,ovec_max_477*3);
        for(        i_491=0;        i_491<ovec_max_477;        i_491++        ){
            start_478[i_491]=ovec_value_480[i_491*2];
        }
        for(        i_492=0;        i_492<ovec_max_477;        i_492++        ){
            end_479[i_492]=ovec_value_480[i_492*2+1];
        }
        if(        regex_result_490==1||regex_result_490>0) {
            result_481=start_478[0];
            break;
        }
        {
            break;
        }
    }
    return result_481;
}

char* charp_replace(char* self, int index, char c){
void* __result_obj__=(void*)0;
int len_493;
void* __right_value385 = (void*)0;
char* __result270__;
void* __right_value386 = (void*)0;
char* __result271__;
    len_493=strlen(self);
    if(    strcmp(self,"")==0) {
        __result270__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value385=__builtin_string(self)));
        /* U11 */__right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    if(    index<0) {
        index+=len_493;
    }
    if(    index>=len_493) {
        index=len_493-1;
    }
    if(    index<0) {
        index=0;
    }
    self[index]=c;
    __result271__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value386=__builtin_string(self)));
    /* U11 */__right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

char* charp_multiply(char* str, int n){
void* __result_obj__=(void*)0;
int len_494;
void* __right_value387 = (void*)0;
char* result_495;
int i_496;
char* __result272__;
    len_494=strlen(str)*n+1;
    result_495=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_494)), "libcomelang-str.c", 1305, "char"));
    result_495[0]=0;
    for(    i_496=0;    i_496<n;    i_496++    ){
        strcat(result_495,str);
    }
    __result272__ = gComeFunResultObject = __result_obj__ = result_495;
    /* U13 */result_495 = come_decrement_ref_count2(result_495, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

char* charp_sub(char* self, struct come_regex* reg, char* replace){
void* __result_obj__=(void*)0;
void* __right_value388 = (void*)0;
char* __result273__;
int offset_497;
int ovec_max_498;
const char* err_502;
int erro_ofs_503;
int options_504;
char* str_505;
struct real_pcre8_or_16* re_506;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct buffer* result_507;
int options_508;
int len_509;
int regex_result_510;
int i_511;
int i_512;
void* __right_value391 = (void*)0;
char* str_513;
void* __right_value392 = (void*)0;
char* str_514;
void* __right_value393 = (void*)0;
char* str_515;
void* __right_value394 = (void*)0;
char* __result274__;
err_502 = (void*)0;
memset(&erro_ofs_503, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result273__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value388=__builtin_string(self)));
        /* U11 */__right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    offset_497=0;
    ovec_max_498=16;
    int start_499[ovec_max_498];
    memset(&start_499, 0, sizeof(int)    *(ovec_max_498)    );
    int end_500[ovec_max_498];
    memset(&end_500, 0, sizeof(int)    *(ovec_max_498)    );
    int ovec_value_501[ovec_max_498*3];
    memset(&ovec_value_501, 0, sizeof(int)    *(ovec_max_498*3)    );
    options_504=reg->options;
    str_505=reg->str;
    re_506=reg->re;
    result_507=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1336, "buffer"))));
    while((_Bool)1) {
        options_508=2097152;
        len_509=strlen(self);
        regex_result_510=pcre_exec(re_506,(struct pcre_extra*)0,self,len_509,offset_497,options_508,ovec_value_501,ovec_max_498*3);
        for(        i_511=0;        i_511<ovec_max_498;        i_511++        ){
            start_499[i_511]=ovec_value_501[i_511*2];
        }
        for(        i_512=0;        i_512<ovec_max_498;        i_512++        ){
            end_500[i_512]=ovec_value_501[i_512*2+1];
        }
        if(        regex_result_510==1) {
            str_513=(char*)come_increment_ref_count(charp_substring(self,offset_497,start_499[0]));
            buffer_append_str(result_507,str_513);
            buffer_append_str(result_507,replace);
            if(            offset_497==end_500[0]) {
                offset_497++;
            }
            else {
                offset_497=end_500[0];
            }
            if(            !reg->global) {
                str_514=(char*)come_increment_ref_count(charp_substring(self,offset_497,-1));
                buffer_append_str(result_507,str_514);
                /* U13 */str_514 = come_decrement_ref_count2(str_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_513 = come_decrement_ref_count2(str_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_514 = come_decrement_ref_count2(str_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_513 = come_decrement_ref_count2(str_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_515=(char*)come_increment_ref_count(charp_substring(self,offset_497,-1));
            buffer_append_str(result_507,str_515);
            /* U13 */str_515 = come_decrement_ref_count2(str_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_515 = come_decrement_ref_count2(str_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result274__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value394=buffer_to_string(result_507)));
    /*i*/come_call_finalizer3(result_507,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

char* charp_sub_count(char* self, struct come_regex* reg, char* replace, int count){
void* __result_obj__=(void*)0;
void* __right_value395 = (void*)0;
char* __result275__;
int offset_516;
int ovec_max_517;
const char* err_521;
int erro_ofs_522;
int options_523;
char* str_524;
struct real_pcre8_or_16* re_525;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct buffer* result_526;
int n_527;
int options_528;
int len_529;
int regex_result_530;
int i_531;
int i_532;
void* __right_value398 = (void*)0;
char* str_533;
void* __right_value399 = (void*)0;
char* str_534;
void* __right_value400 = (void*)0;
char* str_535;
void* __right_value401 = (void*)0;
char* str_536;
void* __right_value402 = (void*)0;
char* __result276__;
err_521 = (void*)0;
memset(&erro_ofs_522, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result275__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value395=__builtin_string(self)));
        /* U11 */__right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    offset_516=0;
    ovec_max_517=16;
    int start_518[ovec_max_517];
    memset(&start_518, 0, sizeof(int)    *(ovec_max_517)    );
    int end_519[ovec_max_517];
    memset(&end_519, 0, sizeof(int)    *(ovec_max_517)    );
    int ovec_value_520[ovec_max_517*3];
    memset(&ovec_value_520, 0, sizeof(int)    *(ovec_max_517*3)    );
    options_523=reg->options;
    str_524=reg->str;
    re_525=reg->re;
    result_526=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1402, "buffer"))));
    n_527=0;
    while((_Bool)1) {
        options_528=2097152;
        len_529=strlen(self);
        regex_result_530=pcre_exec(re_525,(struct pcre_extra*)0,self,len_529,offset_516,options_528,ovec_value_520,ovec_max_517*3);
        for(        i_531=0;        i_531<ovec_max_517;        i_531++        ){
            start_518[i_531]=ovec_value_520[i_531*2];
        }
        for(        i_532=0;        i_532<ovec_max_517;        i_532++        ){
            end_519[i_532]=ovec_value_520[i_532*2+1];
        }
        if(        regex_result_530==1) {
            n_527++;
            str_533=(char*)come_increment_ref_count(charp_substring(self,offset_516,start_518[0]));
            buffer_append_str(result_526,str_533);
            buffer_append_str(result_526,replace);
            if(            offset_516==end_519[0]) {
                offset_516++;
            }
            else {
                offset_516=end_519[0];
            }
            if(            !reg->global) {
                str_534=(char*)come_increment_ref_count(charp_substring(self,offset_516,-1));
                buffer_append_str(result_526,str_534);
                /* U13 */str_534 = come_decrement_ref_count2(str_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_533 = come_decrement_ref_count2(str_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_534 = come_decrement_ref_count2(str_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_527==count) {
                str_535=(char*)come_increment_ref_count(charp_substring(self,offset_516,-1));
                buffer_append_str(result_526,str_535);
                /* U13 */str_535 = come_decrement_ref_count2(str_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_533 = come_decrement_ref_count2(str_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_535 = come_decrement_ref_count2(str_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_533 = come_decrement_ref_count2(str_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_536=(char*)come_increment_ref_count(charp_substring(self,offset_516,-1));
            buffer_append_str(result_526,str_536);
            /* U13 */str_536 = come_decrement_ref_count2(str_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_536 = come_decrement_ref_count2(str_536, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result276__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value402=buffer_to_string(result_526)));
    /*i*/come_call_finalizer3(result_526,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

struct list$1charph* charp_split_str(char* self, char* str){
void* __result_obj__=(void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct list$1charph* result_537;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct buffer* buf_538;
int i_539;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct list$1charph* __result277__;
    result_537=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1461, "list$1charph"))));
    buf_538=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1463, "buffer"))));
    for(    i_539=0;    i_539<charp_length(self);    i_539++    ){
        if(        strstr(self+i_539,str)==self+i_539) {
            list$1charph_push_back(result_537,(char*)come_increment_ref_count(__builtin_string(buf_538->buf)));
            buffer_reset(buf_538);
            i_539+=strlen(str)-1;
        }
        else {
            buffer_append_char(buf_538,self[i_539]);
        }
    }
    if(    buffer_length(buf_538)!=0) {
        list$1charph_push_back(result_537,(char*)come_increment_ref_count(__builtin_string(buf_538->buf)));
    }
    __result277__ = gComeFunResultObject = __result_obj__ = result_537;
    /*i*/come_call_finalizer3(result_537,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_538,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

struct list$1charph* charp_scan(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct list$1charph* __result278__;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct list$1charph* result_540;
int offset_541;
int ovec_max_542;
const char* err_546;
int erro_ofs_547;
int options_548;
char* str_549;
struct real_pcre8_or_16* re_550;
int options_551;
int len_552;
int regex_result_553;
int i_554;
int i_555;
void* __right_value413 = (void*)0;
char* str_556;
void* __right_value414 = (void*)0;
char* str_557;
int i_558;
void* __right_value415 = (void*)0;
char* match_string_559;
struct list$1charph* __result279__;
err_546 = (void*)0;
memset(&erro_ofs_547, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result278__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value410=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1485, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value410,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    result_540=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1487, "list$1charph"))));
    offset_541=0;
    ovec_max_542=16;
    int start_543[ovec_max_542];
    memset(&start_543, 0, sizeof(int)    *(ovec_max_542)    );
    int end_544[ovec_max_542];
    memset(&end_544, 0, sizeof(int)    *(ovec_max_542)    );
    int ovec_value_545[ovec_max_542*3];
    memset(&ovec_value_545, 0, sizeof(int)    *(ovec_max_542*3)    );
    options_548=reg->options;
    str_549=reg->str;
    re_550=reg->re;
    while((_Bool)1) {
        options_551=2097152;
        len_552=strlen(self);
        regex_result_553=pcre_exec(re_550,(struct pcre_extra*)0,self,len_552,offset_541,options_551,ovec_value_545,ovec_max_542*3);
        for(        i_554=0;        i_554<ovec_max_542;        i_554++        ){
            start_543[i_554]=ovec_value_545[i_554*2];
        }
        for(        i_555=0;        i_555<ovec_max_542;        i_555++        ){
            end_544[i_555]=ovec_value_545[i_555*2+1];
        }
        if(        regex_result_553==1) {
            str_556=(char*)come_increment_ref_count(charp_substring(self,start_543[0],end_544[0]));
            list$1charph_push_back(result_540,(char*)come_increment_ref_count(str_556));
            if(            offset_541==end_544[0]) {
                offset_541++;
            }
            else {
                offset_541=end_544[0];
            }
            /* U13 */str_556 = come_decrement_ref_count2(str_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_553>1) {
            str_557=(char*)come_increment_ref_count(charp_substring(self,start_543[0],end_544[0]));
            list$1charph_push_back(result_540,(char*)come_increment_ref_count(str_557));
            if(            offset_541==end_544[0]) {
                offset_541++;
            }
            else {
                offset_541=end_544[0];
            }
            for(            i_558=1;            i_558<regex_result_553;            i_558++            ){
                match_string_559=(char*)come_increment_ref_count(charp_substring(self,start_543[i_558],end_544[i_558]));
                list$1charph_push_back(result_540,(char*)come_increment_ref_count(match_string_559));
                /* U13 */match_string_559 = come_decrement_ref_count2(match_string_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_557 = come_decrement_ref_count2(str_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    __result279__ = gComeFunResultObject = __result_obj__ = result_540;
    /*i*/come_call_finalizer3(result_540,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

struct list$1charph* charp_split(char* self, struct come_regex* reg){
void* __result_obj__=(void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct list$1charph* __result280__;
const char* err_560;
int erro_ofs_561;
int options_562;
char* str_563;
struct real_pcre8_or_16* re_564;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct list$1charph* result_565;
int offset_566;
int ovec_max_567;
int options_571;
int len_572;
int regex_result_573;
int i_574;
int i_575;
void* __right_value420 = (void*)0;
char* str_576;
void* __right_value421 = (void*)0;
char* str_577;
int i_578;
void* __right_value422 = (void*)0;
char* match_str_579;
void* __right_value423 = (void*)0;
char* str_580;
struct list$1charph* __result281__;
err_560 = (void*)0;
memset(&erro_ofs_561, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result280__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value417=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1561, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value417,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    options_562=reg->options;
    str_563=reg->str;
    re_564=reg->re;
    result_565=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1571, "list$1charph"))));
    offset_566=0;
    ovec_max_567=16;
    int start_568[ovec_max_567];
    memset(&start_568, 0, sizeof(int)    *(ovec_max_567)    );
    int end_569[ovec_max_567];
    memset(&end_569, 0, sizeof(int)    *(ovec_max_567)    );
    int ovec_value_570[ovec_max_567*3];
    memset(&ovec_value_570, 0, sizeof(int)    *(ovec_max_567*3)    );
    while((_Bool)1) {
        options_571=2097152;
        len_572=strlen(self);
        regex_result_573=pcre_exec(re_564,(struct pcre_extra*)0,self,len_572,offset_566,options_571,ovec_value_570,ovec_max_567*3);
        for(        i_574=0;        i_574<ovec_max_567;        i_574++        ){
            start_568[i_574]=ovec_value_570[i_574*2];
        }
        for(        i_575=0;        i_575<ovec_max_567;        i_575++        ){
            end_569[i_575]=ovec_value_570[i_575*2+1];
        }
        if(        regex_result_573==1) {
            str_576=(char*)come_increment_ref_count(charp_substring(self,offset_566,start_568[0]));
            list$1charph_push_back(result_565,(char*)come_increment_ref_count(str_576));
            if(            offset_566==end_569[0]) {
                offset_566++;
            }
            else {
                offset_566=end_569[0];
            }
            /* U13 */str_576 = come_decrement_ref_count2(str_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_573>1) {
            str_577=(char*)come_increment_ref_count(charp_substring(self,offset_566,start_568[0]));
            list$1charph_push_back(result_565,(char*)come_increment_ref_count(str_577));
            if(            offset_566==end_569[0]) {
                offset_566++;
            }
            else {
                offset_566=end_569[0];
            }
            for(            i_578=1;            i_578<regex_result_573;            i_578++            ){
                match_str_579=(char*)come_increment_ref_count(charp_substring(self,start_568[i_578],end_569[i_578]));
                list$1charph_push_back(result_565,(char*)come_increment_ref_count(match_str_579));
                /* U13 */match_str_579 = come_decrement_ref_count2(match_str_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_577 = come_decrement_ref_count2(str_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    if(    offset_566<charp_length(self)) {
        str_580=(char*)come_increment_ref_count(charp_substring(self,offset_566,-1));
        list$1charph_push_back(result_565,(char*)come_increment_ref_count(str_580));
        /* U13 */str_580 = come_decrement_ref_count2(str_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result281__ = gComeFunResultObject = __result_obj__ = result_565;
    /*i*/come_call_finalizer3(result_565,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

_Bool charp_match(char* self, struct come_regex* reg){
int offset_581;
int ovec_max_582;
const char* err_586;
int erro_ofs_587;
int options_588;
char* str_589;
struct real_pcre8_or_16* re_590;
int options_591;
int len_592;
int regex_result_593;
int i_594;
int i_595;
err_586 = (void*)0;
memset(&erro_ofs_587, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_581=0;
    ovec_max_582=16;
    int start_583[ovec_max_582];
    memset(&start_583, 0, sizeof(int)    *(ovec_max_582)    );
    int end_584[ovec_max_582];
    memset(&end_584, 0, sizeof(int)    *(ovec_max_582)    );
    int ovec_value_585[ovec_max_582*3];
    memset(&ovec_value_585, 0, sizeof(int)    *(ovec_max_582*3)    );
    options_588=reg->options;
    str_589=reg->str;
    re_590=reg->re;
    while((_Bool)1) {
        options_591=2097152;
        len_592=strlen(self);
        regex_result_593=pcre_exec(re_590,(struct pcre_extra*)0,self,len_592,offset_581,options_591,ovec_value_585,ovec_max_582*3);
        for(        i_594=0;        i_594<ovec_max_582;        i_594++        ){
            start_583[i_594]=ovec_value_585[i_594*2];
        }
        for(        i_595=0;        i_595<ovec_max_582;        i_595++        ){
            end_584[i_595]=ovec_value_585[i_595*2+1];
        }
        if(        regex_result_593>0) {
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
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1charph* __result282__;
const char* err_596;
int erro_ofs_597;
int options_598;
char* str_599;
struct real_pcre8_or_16* re_600;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct list$1charph* result_601;
int offset_602;
int ovec_max_603;
int n_607;
int options_608;
int len_609;
int regex_result_610;
int i_611;
int i_612;
void* __right_value428 = (void*)0;
char* str_613;
void* __right_value429 = (void*)0;
char* str_614;
int i_615;
void* __right_value430 = (void*)0;
char* match_str_616;
void* __right_value431 = (void*)0;
char* str_617;
struct list$1charph* __result283__;
err_596 = (void*)0;
memset(&erro_ofs_597, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result282__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value425=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1689, "list$1charph")))));
        /*g*/come_call_finalizer3(__right_value425,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    options_598=reg->options;
    str_599=reg->str;
    re_600=reg->re;
    result_601=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1699, "list$1charph"))));
    offset_602=0;
    ovec_max_603=16;
    int start_604[ovec_max_603];
    memset(&start_604, 0, sizeof(int)    *(ovec_max_603)    );
    int end_605[ovec_max_603];
    memset(&end_605, 0, sizeof(int)    *(ovec_max_603)    );
    int ovec_value_606[ovec_max_603*3];
    memset(&ovec_value_606, 0, sizeof(int)    *(ovec_max_603*3)    );
    n_607=0;
    while((_Bool)1) {
        options_608=2097152;
        len_609=strlen(self);
        regex_result_610=pcre_exec(re_600,(struct pcre_extra*)0,self,len_609,offset_602,options_608,ovec_value_606,ovec_max_603*3);
        for(        i_611=0;        i_611<ovec_max_603;        i_611++        ){
            start_604[i_611]=ovec_value_606[i_611*2];
        }
        for(        i_612=0;        i_612<ovec_max_603;        i_612++        ){
            end_605[i_612]=ovec_value_606[i_612*2+1];
        }
        if(        regex_result_610==1) {
            str_613=(char*)come_increment_ref_count(charp_substring(self,offset_602,start_604[0]));
            list$1charph_push_back(result_601,(char*)come_increment_ref_count(str_613));
            if(            offset_602==end_605[0]) {
                offset_602++;
            }
            else {
                offset_602=end_605[0];
            }
            /* U13 */str_613 = come_decrement_ref_count2(str_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_610>1) {
            str_614=(char*)come_increment_ref_count(charp_substring(self,offset_602,start_604[0]));
            list$1charph_push_back(result_601,(char*)come_increment_ref_count(str_614));
            if(            offset_602==end_605[0]) {
                offset_602++;
            }
            else {
                offset_602=end_605[0];
            }
            for(            i_615=1;            i_615<regex_result_610;            i_615++            ){
                match_str_616=(char*)come_increment_ref_count(charp_substring(self,start_604[i_615],end_605[i_615]));
                list$1charph_push_back(result_601,(char*)come_increment_ref_count(match_str_616));
                /* U13 */match_str_616 = come_decrement_ref_count2(match_str_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_614 = come_decrement_ref_count2(str_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
        n_607++;
        if(        maxsplit==n_607) {
            break;
        }
    }
    if(    offset_602<charp_length(self)) {
        str_617=(char*)come_increment_ref_count(charp_substring(self,offset_602,-1));
        list$1charph_push_back(result_601,(char*)come_increment_ref_count(str_617));
        /* U13 */str_617 = come_decrement_ref_count2(str_617, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result283__ = gComeFunResultObject = __result_obj__ = result_601;
    /*i*/come_call_finalizer3(result_601,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

int charp_rindex_regex_count(char* self, struct come_regex* reg, int count, int default_value){
const char* err_618;
int erro_ofs_619;
int options_620;
char* str_621;
struct real_pcre8_or_16* re_622;
void* __right_value432 = (void*)0;
char* self2_623;
int ovec_max_624;
int result_628;
int offset_629;
int n_630;
int options_631;
int len_632;
int regex_result_633;
int i_634;
int i_635;
int __result284__;
err_618 = (void*)0;
memset(&erro_ofs_619, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return default_value;
    }
    options_620=reg->options;
    str_621=reg->str;
    re_622=reg->re;
    self2_623=(char*)come_increment_ref_count(charp_reverse(self));
    ovec_max_624=16;
    int start_625[ovec_max_624];
    memset(&start_625, 0, sizeof(int)    *(ovec_max_624)    );
    int end_626[ovec_max_624];
    memset(&end_626, 0, sizeof(int)    *(ovec_max_624)    );
    int ovec_value_627[ovec_max_624*3];
    memset(&ovec_value_627, 0, sizeof(int)    *(ovec_max_624*3)    );
    result_628=default_value;
    offset_629=0;
    n_630=0;
    while((_Bool)1) {
        options_631=2097152;
        len_632=strlen(self2_623);
        regex_result_633=pcre_exec(re_622,(struct pcre_extra*)0,self2_623,len_632,offset_629,options_631,ovec_value_627,ovec_max_624*3);
        for(        i_634=0;        i_634<ovec_max_624;        i_634++        ){
            start_625[i_634]=ovec_value_627[i_634*2];
        }
        for(        i_635=0;        i_635<ovec_max_624;        i_635++        ){
            end_626[i_635]=ovec_value_627[i_635*2+1];
        }
        if(        regex_result_633>0) {
            n_630++;
            if(            offset_629==end_626[0]) {
                offset_629++;
            }
            else {
                offset_629=end_626[0];
            }
            if(            n_630==count) {
                result_628=strlen(self)-end_626[0];
                break;
            }
        }
        else {
            break;
        }
    }
    __result284__ = result_628;
    /* U13 */self2_623 = come_decrement_ref_count2(self2_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result284__;
}

_Bool charp_match_count(char* self, struct come_regex* reg, int count){
int offset_636;
int ovec_max_637;
const char* err_641;
int erro_ofs_642;
int options_643;
char* str_644;
struct real_pcre8_or_16* re_645;
int n_646;
int options_647;
int len_648;
int regex_result_649;
int i_650;
int i_651;
err_641 = (void*)0;
memset(&erro_ofs_642, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        return (_Bool)0;
    }
    offset_636=0;
    ovec_max_637=16;
    int start_638[ovec_max_637];
    memset(&start_638, 0, sizeof(int)    *(ovec_max_637)    );
    int end_639[ovec_max_637];
    memset(&end_639, 0, sizeof(int)    *(ovec_max_637)    );
    int ovec_value_640[ovec_max_637*3];
    memset(&ovec_value_640, 0, sizeof(int)    *(ovec_max_637*3)    );
    options_643=reg->options;
    str_644=reg->str;
    re_645=reg->re;
    n_646=0;
    while((_Bool)1) {
        options_647=2097152;
        len_648=strlen(self);
        regex_result_649=pcre_exec(re_645,(struct pcre_extra*)0,self,len_648,offset_636,options_647,ovec_value_640,ovec_max_637*3);
        for(        i_650=0;        i_650<ovec_max_637;        i_650++        ){
            start_638[i_650]=ovec_value_640[i_650*2];
        }
        for(        i_651=0;        i_651<ovec_max_637;        i_651++        ){
            end_639[i_651]=ovec_value_640[i_651*2+1];
        }
        if(        regex_result_649>0) {
            n_646++;
            if(            count==n_646) {
                return (_Bool)1;
            }
            if(            offset_636==end_639[0]) {
                offset_636++;
            }
            else {
                offset_636=end_639[0];
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
void* __right_value433 = (void*)0;
char* __result285__;
int offset_652;
int ovec_max_653;
const char* err_657;
int erro_ofs_658;
int options_659;
char* str_660;
struct real_pcre8_or_16* re_661;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct buffer* result_662;
int options_663;
int len_664;
int regex_result_665;
int i_666;
int i_667;
void* __right_value436 = (void*)0;
char* str_668;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1charph* group_strings_669;
void* __right_value439 = (void*)0;
char* match_string_670;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
char* block_result_671;
void* __right_value442 = (void*)0;
char* str_672;
void* __right_value443 = (void*)0;
char* str_673;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct list$1charph* group_strings_674;
int i_675;
void* __right_value446 = (void*)0;
char* match_string_676;
void* __right_value447 = (void*)0;
char* match_string_677;
void* __right_value448 = (void*)0;
char* block_result_678;
void* __right_value449 = (void*)0;
char* str_679;
void* __right_value450 = (void*)0;
char* str_680;
void* __right_value451 = (void*)0;
char* __result286__;
err_657 = (void*)0;
memset(&erro_ofs_658, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result285__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value433=__builtin_string("")));
        /* U11 */__right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    offset_652=0;
    ovec_max_653=16;
    int start_654[ovec_max_653];
    memset(&start_654, 0, sizeof(int)    *(ovec_max_653)    );
    int end_655[ovec_max_653];
    memset(&end_655, 0, sizeof(int)    *(ovec_max_653)    );
    int ovec_value_656[ovec_max_653*3];
    memset(&ovec_value_656, 0, sizeof(int)    *(ovec_max_653*3)    );
    options_659=reg->options;
    str_660=reg->str;
    re_661=reg->re;
    result_662=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 1920, "buffer"))));
    while((_Bool)1) {
        options_663=2097152;
        len_664=strlen(self);
        regex_result_665=pcre_exec(re_661,(struct pcre_extra*)0,self,len_664,offset_652,options_663,ovec_value_656,ovec_max_653*3);
        for(        i_666=0;        i_666<ovec_max_653;        i_666++        ){
            start_654[i_666]=ovec_value_656[i_666*2];
        }
        for(        i_667=0;        i_667<ovec_max_653;        i_667++        ){
            end_655[i_667]=ovec_value_656[i_667*2+1];
        }
        if(        regex_result_665==1) {
            str_668=(char*)come_increment_ref_count(charp_substring(self,offset_652,start_654[0]));
            buffer_append_str(result_662,str_668);
            group_strings_669=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1940, "list$1charph"))));
            match_string_670=(char*)come_increment_ref_count(charp_substring(self,start_654[0],end_655[0]));
            list$1charph_push_back(group_strings_669,(char*)come_increment_ref_count(charp_substring(self,start_654[0],end_655[0])));
            block_result_671=(char*)come_increment_ref_count(block(parent,match_string_670,group_strings_669));
            buffer_append_str(result_662,block_result_671);
            if(            offset_652==end_655[0]) {
                offset_652++;
            }
            else {
                offset_652=end_655[0];
            }
            if(            !reg->global) {
                str_672=(char*)come_increment_ref_count(charp_substring(self,offset_652,-1));
                buffer_append_str(result_662,str_672);
                /* U13 */str_672 = come_decrement_ref_count2(str_672, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_668 = come_decrement_ref_count2(str_668, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_669,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_670 = come_decrement_ref_count2(match_string_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_671 = come_decrement_ref_count2(block_result_671, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_672 = come_decrement_ref_count2(str_672, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_668 = come_decrement_ref_count2(str_668, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_669,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_670 = come_decrement_ref_count2(match_string_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_671 = come_decrement_ref_count2(block_result_671, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_665>1) {
            str_673=(char*)come_increment_ref_count(charp_substring(self,offset_652,start_654[0]));
            buffer_append_str(result_662,str_673);
            if(            offset_652==end_655[0]) {
                offset_652++;
            }
            else {
                offset_652=end_655[0];
            }
            group_strings_674=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 1975, "list$1charph"))));
            for(            i_675=1;            i_675<regex_result_665;            i_675++            ){
                match_string_676=(char*)come_increment_ref_count(charp_substring(self,start_654[i_675],end_655[i_675]));
                list$1charph_push_back(group_strings_674,(char*)come_increment_ref_count(match_string_676));
                /* U13 */match_string_676 = come_decrement_ref_count2(match_string_676, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            match_string_677=(char*)come_increment_ref_count(charp_substring(self,start_654[0],end_655[0]));
            block_result_678=(char*)come_increment_ref_count(block(parent,match_string_677,group_strings_674));
            buffer_append_str(result_662,block_result_678);
            if(            !reg->global) {
                str_679=(char*)come_increment_ref_count(charp_substring(self,offset_652,-1));
                buffer_append_str(result_662,str_679);
                /* U13 */str_679 = come_decrement_ref_count2(str_679, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_673 = come_decrement_ref_count2(str_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_674,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_677 = come_decrement_ref_count2(match_string_677, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_678 = come_decrement_ref_count2(block_result_678, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_679 = come_decrement_ref_count2(str_679, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_673 = come_decrement_ref_count2(str_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_674,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_677 = come_decrement_ref_count2(match_string_677, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_678 = come_decrement_ref_count2(block_result_678, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_680=(char*)come_increment_ref_count(charp_substring(self,offset_652,-1));
            buffer_append_str(result_662,str_680);
            /* U13 */str_680 = come_decrement_ref_count2(str_680, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_680 = come_decrement_ref_count2(str_680, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result286__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value451=buffer_to_string(result_662)));
    /*i*/come_call_finalizer3(result_662,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

char* charp_sub_block_count(char* self, struct come_regex* reg, int count, void* parent, char* (*block)(void*,char*,struct list$1charph*)){
void* __result_obj__=(void*)0;
void* __right_value452 = (void*)0;
char* __result287__;
int offset_681;
int ovec_max_682;
const char* err_686;
int erro_ofs_687;
int options_688;
char* str_689;
struct real_pcre8_or_16* re_690;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct buffer* result_691;
int n_692;
int options_693;
int len_694;
int regex_result_695;
int i_696;
int i_697;
void* __right_value455 = (void*)0;
char* str_698;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct list$1charph* group_strings_699;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
char* match_string_700;
void* __right_value460 = (void*)0;
char* block_result_701;
void* __right_value461 = (void*)0;
char* str_702;
void* __right_value462 = (void*)0;
char* str_703;
void* __right_value463 = (void*)0;
char* str_704;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct list$1charph* group_strings_705;
int i_706;
void* __right_value466 = (void*)0;
char* match_string_707;
void* __right_value467 = (void*)0;
char* match_string_708;
void* __right_value468 = (void*)0;
char* block_result_709;
void* __right_value469 = (void*)0;
char* str_710;
void* __right_value470 = (void*)0;
char* str_711;
void* __right_value471 = (void*)0;
char* str_712;
void* __right_value472 = (void*)0;
char* __result288__;
err_686 = (void*)0;
memset(&erro_ofs_687, 0, sizeof(int));
    if(    reg==((void*)0)||reg->re==((void*)0)) {
        __result287__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value452=__builtin_string("")));
        /* U11 */__right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    offset_681=0;
    ovec_max_682=16;
    int start_683[ovec_max_682];
    memset(&start_683, 0, sizeof(int)    *(ovec_max_682)    );
    int end_684[ovec_max_682];
    memset(&end_684, 0, sizeof(int)    *(ovec_max_682)    );
    int ovec_value_685[ovec_max_682*3];
    memset(&ovec_value_685, 0, sizeof(int)    *(ovec_max_682*3)    );
    options_688=reg->options;
    str_689=reg->str;
    re_690=reg->re;
    result_691=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libcomelang-str.c", 2024, "buffer"))));
    n_692=0;
    while((_Bool)1) {
        options_693=2097152;
        len_694=strlen(self);
        regex_result_695=pcre_exec(re_690,(struct pcre_extra*)0,self,len_694,offset_681,options_693,ovec_value_685,ovec_max_682*3);
        for(        i_696=0;        i_696<ovec_max_682;        i_696++        ){
            start_683[i_696]=ovec_value_685[i_696*2];
        }
        for(        i_697=0;        i_697<ovec_max_682;        i_697++        ){
            end_684[i_697]=ovec_value_685[i_697*2+1];
        }
        if(        regex_result_695==1) {
            n_692++;
            str_698=(char*)come_increment_ref_count(charp_substring(self,offset_681,start_683[0]));
            buffer_append_str(result_691,str_698);
            group_strings_699=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 2047, "list$1charph"))));
            list$1charph_push_back(group_strings_699,(char*)come_increment_ref_count(charp_substring(self,start_683[0],end_684[0])));
            match_string_700=(char*)come_increment_ref_count(charp_substring(self,start_683[0],end_684[0]));
            block_result_701=(char*)come_increment_ref_count(block(parent,match_string_700,group_strings_699));
            buffer_append_str(result_691,block_result_701);
            if(            offset_681==end_684[0]) {
                offset_681++;
            }
            else {
                offset_681=end_684[0];
            }
            if(            !reg->global) {
                str_702=(char*)come_increment_ref_count(charp_substring(self,offset_681,-1));
                buffer_append_str(result_691,str_702);
                /* U13 */str_702 = come_decrement_ref_count2(str_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_698 = come_decrement_ref_count2(str_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_699,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_700 = come_decrement_ref_count2(match_string_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_701 = come_decrement_ref_count2(block_result_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_702 = come_decrement_ref_count2(str_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_692==count) {
                str_703=(char*)come_increment_ref_count(charp_substring(self,offset_681,-1));
                buffer_append_str(result_691,str_703);
                /* U13 */str_703 = come_decrement_ref_count2(str_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_698 = come_decrement_ref_count2(str_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_699,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_700 = come_decrement_ref_count2(match_string_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_701 = come_decrement_ref_count2(block_result_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_703 = come_decrement_ref_count2(str_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_698 = come_decrement_ref_count2(str_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_699,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_700 = come_decrement_ref_count2(match_string_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_701 = come_decrement_ref_count2(block_result_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        regex_result_695>1) {
            n_692++;
            str_704=(char*)come_increment_ref_count(charp_substring(self,offset_681,start_683[0]));
            buffer_append_str(result_691,str_704);
            if(            offset_681==end_684[0]) {
                offset_681++;
            }
            else {
                offset_681=end_684[0];
            }
            group_strings_705=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libcomelang-str.c", 2090, "list$1charph"))));
            for(            i_706=1;            i_706<regex_result_695;            i_706++            ){
                match_string_707=(char*)come_increment_ref_count(charp_substring(self,start_683[i_706],end_684[i_706]));
                list$1charph_push_back(group_strings_705,(char*)come_increment_ref_count(match_string_707));
                /* U13 */match_string_707 = come_decrement_ref_count2(match_string_707, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            match_string_708=(char*)come_increment_ref_count(charp_substring(self,start_683[0],end_684[0]));
            block_result_709=(char*)come_increment_ref_count(block(parent,match_string_708,group_strings_705));
            buffer_append_str(result_691,block_result_709);
            if(            !reg->global) {
                str_710=(char*)come_increment_ref_count(charp_substring(self,offset_681,-1));
                buffer_append_str(result_691,str_710);
                /* U13 */str_710 = come_decrement_ref_count2(str_710, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_704 = come_decrement_ref_count2(str_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_705,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_708 = come_decrement_ref_count2(match_string_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_709 = come_decrement_ref_count2(block_result_709, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_710 = come_decrement_ref_count2(str_710, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            n_692==count) {
                str_711=(char*)come_increment_ref_count(charp_substring(self,offset_681,-1));
                buffer_append_str(result_691,str_711);
                /* U13 */str_711 = come_decrement_ref_count2(str_711, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */str_704 = come_decrement_ref_count2(str_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(group_strings_705,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */match_string_708 = come_decrement_ref_count2(match_string_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */block_result_709 = come_decrement_ref_count2(block_result_709, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
                /* U13 */str_711 = come_decrement_ref_count2(str_711, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /* U13 */str_704 = come_decrement_ref_count2(str_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(group_strings_705,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */match_string_708 = come_decrement_ref_count2(match_string_708, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */block_result_709 = come_decrement_ref_count2(block_result_709, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            str_712=(char*)come_increment_ref_count(charp_substring(self,offset_681,-1));
            buffer_append_str(result_691,str_712);
            /* U13 */str_712 = come_decrement_ref_count2(str_712, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
            /* U13 */str_712 = come_decrement_ref_count2(str_712, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result288__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value472=buffer_to_string(result_691)));
    /*i*/come_call_finalizer3(result_691,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

unsigned int wchar_tp_get_hash_key(int* value){
int result_713;
int* p_714;
    result_713=0;
    p_714=value;
    while(*p_714) {
        result_713+=(*p_714);
        p_714++;
    }
    return result_713;
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
void* __right_value473 = (void*)0;
char* __result289__;
    __result289__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value473=xsprintf("%ls",wc)));
    /* U11 */__right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

char* string_chomp(char* str){
void* __result_obj__=(void*)0;
void* __right_value474 = (void*)0;
char* result_715;
void* __right_value475 = (void*)0;
char* __result290__;
char* __result291__;
    result_715=(char*)come_increment_ref_count(__builtin_string(str));
    if(    result_715[string_length(result_715)-1]==10) {
        __result290__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value475=charp_substring(result_715,0,-2)));
        /* U13 */result_715 = come_decrement_ref_count2(result_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U11 */__right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    __result291__ = gComeFunResultObject = __result_obj__ = result_715;
    /* U13 */result_715 = come_decrement_ref_count2(result_715, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

char* xrealpath(char* path){
void* __result_obj__=(void*)0;
void* __right_value476 = (void*)0;
char* __result292__;
char* result_716;
void* __right_value477 = (void*)0;
char* result2_717;
char* __result293__;
    if(    path==((void*)0)) {
        __result292__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value476=__builtin_string("")));
        /* U11 */__right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    result_716=realpath(path,((void*)0));
    result2_717=(char*)come_increment_ref_count(__builtin_string(result_716));
    free(result_716);
    __result293__ = gComeFunResultObject = __result_obj__ = result2_717;
    /* U13 */result2_717 = come_decrement_ref_count2(result2_717, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

char* xdirname(char* path){
void* __result_obj__=(void*)0;
void* __right_value478 = (void*)0;
char* __result294__;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
char* __result295__;
    if(    path==((void*)0)) {
        __result294__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value478=__builtin_string("")));
        /* U11 */__right_value478 = come_decrement_ref_count2(__right_value478, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result294__;
    }
    __result295__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value480=__builtin_string(dirname(((char*)(__right_value479=__builtin_string(path)))))));
    /* U11 */__right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

unsigned long  int xwcslen(int* wstr){
int* p_718;
unsigned long  int len_719;
    p_718=wstr;
    len_719=0;
    while(*p_718) {
        p_718++;
        len_719++;
    }
    return len_719;
}

