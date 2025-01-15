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
    char* mAttribute;
};

struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    int (*sline_real)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
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
    _Bool mAtomic;
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
    _Bool mUniq;
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
    char* sname_at_head;
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
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool gcc_compiler;
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
struct pollfd
{
    int fd;
    short events;
    short revents;
};

typedef unsigned int nfds_t;

struct sReturnNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
    char* value_source;
};

struct sOutputNode
{
    int sline;
    char* sname;
    int sline_real;
    char* contents;
};

struct sInlineAssembler
{
    int sline;
    char* sname;
    int sline_real;
    char* source;
    struct list$1sNodeph* exps;
};

struct sCurrentNode2
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLineNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sSNameNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFuncNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sWildCard
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerFuncNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerLineNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerSNameNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFunCallNode
{
    int sline;
    char* sname;
    int sline_real;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    _Bool guard_break;
    struct list$1sTypeph* method_generics_types;
    struct buffer* method_block;
    int method_block_sline;
};

struct sComeCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* come_block;
    int come_block_sline;
};

struct sComeJoinNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct list_item$1sBlockph
{
    struct sBlock* item;
    struct list_item$1sBlockph* prev;
    struct list_item$1sBlockph* next;
};

struct list$1sBlockph
{
    struct list_item$1sBlockph* head;
    struct list_item$1sBlockph* tail;
    int len;
    struct list_item$1sBlockph* it;
};

struct sComePollNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* vars;
    struct list$1sBlockph* blocks;
    struct sBlock* else_block;
    int time_out;
};

struct sLambdaCall
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
    struct list$1tuple2$2charphsNodephph* params;
};

struct sVarArgTypeName
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
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
char* charp_sub_plain(char* self, char* str, char* replace);
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
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_);
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
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
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
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
int transpile_v5(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
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
char* parse_struct_attribute(struct sInfo* info);
struct sNode* create_nothing_node(struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
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
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
int poll(struct pollfd* anonymous_var_nameX652, unsigned int anonymous_var_nameX653, int anonymous_var_nameX654);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct sVar* list$1sVarph_begin(struct list$1sVarph* self);
static _Bool list$1sVarph_end(struct list$1sVarph* self);
static struct sVar* list$1sVarph_next(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info);
char* sOutputNode_kind(struct sOutputNode* self);
_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNodeph* exps, struct sInfo* info);
char* sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info);
int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_kind(struct sCurrentNode2* self);
_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);
char* sLineNode_kind(struct sLineNode* self);
_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);
char* sSNameNode_kind(struct sSNameNode* self);
_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);
char* sFuncNode_kind(struct sFuncNode* self);
_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);
struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info);
char* sWildCard_kind(struct sWildCard* self);
_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info);
struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);
char* sCallerFuncNode_kind(struct sCallerFuncNode* self);
_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);
struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);
_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);
char* sCallerLineNode_kind(struct sCallerLineNode* self);
struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);
_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);
char* sCallerSNameNode_kind(struct sCallerSNameNode* self);
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static int list$1charph_length(struct list$1charph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static void sCurrentNode2_finalize(struct sCurrentNode2* self);
static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info);
char* sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info);
char* sComePollNode_kind(struct sComePollNode* self);
_Bool sComePollNode_terminated(struct sComePollNode* self);
_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info);
static void list$1sBlockph_finalize(struct list$1sBlockph* self);
static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self);
static void list$1sBlockphp_finalize(struct list$1sBlockph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
static void sOutputNode_finalize(struct sOutputNode* self);
static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self);
static void sComeCallNode_finalize(struct sComeCallNode* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item);
static void sComePollNode_finalize(struct sComePollNode* self);
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
static void sFuncNode_finalize(struct sFuncNode* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static void sWildCard_finalize(struct sWildCard* self);
static struct sWildCard* sWildCard_clone(struct sWildCard* self);
static void sLineNode_finalize(struct sLineNode* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static void sSNameNode_finalize(struct sSNameNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
struct sNode* expression_v5(struct sInfo* info);
static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
static void sLambdaCall_finalize(struct sLambdaCall* self);
static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self);
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
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3635, "buffer"))));
    buffer_append(result_108,self,sizeof(char)*len);
    __result51__ = gComeFunResultObject = __result_obj__ = result_108;
    come_call_finalizer3(result_108,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3642, "buffer"))));
    for(    i_110=0;    i_110<len;    i_110++    ){
        buffer_append(result_109,self[i_110],strlen(self[i_110]));
    }
    __result52__ = gComeFunResultObject = __result_obj__ = result_109;
    come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_111;
struct buffer* __result53__;
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3651, "buffer"))));
    buffer_append(result_111,(char*)self,sizeof(short)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_111;
    come_call_finalizer3(result_111,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result54__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3658, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(int)*len);
    __result54__ = gComeFunResultObject = __result_obj__ = result_112;
    come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result55__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3665, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(long)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_113;
    come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result56__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3672, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(float)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_114;
    come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result57__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3679, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(double)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_115;
    come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4007, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4012, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 4017, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 4022, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 4027, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
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
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4060, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4062, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
    come_call_finalizer3(buf_121,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
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
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4067, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 4069, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
    come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
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
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4074, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 4076, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
    come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
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
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4081, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 4083, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
    come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
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
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4088, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 4090, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
    come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
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
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4095, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 4097, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
    come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
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
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4102, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 4104, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
    come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 4109, "list$1char")),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 4114, "list$1charp")),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 4119, "list$1short")),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 4124, "list$1int")),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 4129, "list$1long")),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 4134, "list$1float")),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 4139, "list$1double")),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 4144, "vector$1char")),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 4149, "vector$1charp")),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 4154, "vector$1short")),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 4159, "vector$1int")),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 4164, "vector$1long")),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 4169, "vector$1float")),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 4174, "vector$1double")),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
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
    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result153__;
}
static char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result154__;
    __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

// body function
static void buffer_finalize(struct buffer* self){
char* __dec_obj1;
    if(    self!=((void*)0)&&self->buf!=((void*)0)) {
        if(        self->buf==gComeFunResultObject) {
            __dec_obj1=self->buf;
            __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
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
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1char"))));
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
        come_call_finalizer3(prev_it_133,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
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
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1charp"))));
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
        come_call_finalizer3(prev_it_139,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
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
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1short"))));
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
        come_call_finalizer3(prev_it_145,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
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
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1int"))));
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
        come_call_finalizer3(prev_it_151,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
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
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1long"))));
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
        come_call_finalizer3(prev_it_157,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
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
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1float"))));
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
        come_call_finalizer3(prev_it_163,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
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
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1double"))));
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
        come_call_finalizer3(prev_it_169,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
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
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 1936, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
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
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 1936, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
            self->items[i_171] = come_decrement_ref_count2(self->items[i_171], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 1936, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
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
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 1936, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
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
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 1936, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
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
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 1936, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
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
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 1936, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
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
        come_call_finalizer3(prev_it_209,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1charph"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        __dec_obj31=litem_215->item;
        litem_215->item=(char*)come_increment_ref_count(item);
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value250 = (void*)0;
char* __dec_obj34;
struct sReturnNode* __result200__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj33=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj34=self->value_source;
    self->value_source=(char*)come_increment_ref_count(string_clone(value_source));
    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result200__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result201__;
    __result201__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sReturnNode")));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result201__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_250;
void* __right_value288 = (void*)0;
struct sType* result_type_251;
void* __right_value289 = (void*)0;
struct sType* result_type2_280;
struct sType* result_type3_281;
void* __right_value290 = (void*)0;
_Bool _if_conditional1;
void* __right_value291 = (void*)0;
struct sNode* __dec_obj83;
_Bool Value_282;
_Bool __result219__;
void* __right_value292 = (void*)0;
struct CVALUE* come_value_283;
void* __right_value293 = (void*)0;
struct sType* come_value_type_284;
void* __right_value294 = (void*)0;
struct sType* __dec_obj84;
void* __right_value295 = (void*)0;
char* var_name_286;
int num_result_stack_287;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __if_result__0_288 = (void*)0;
struct list$1sVarph* o2_saved_289;
struct sVar* it_292;
struct list$1sVarph* __dec_obj90;
void* __right_value298 = (void*)0;
struct sFun* come_fun_299;
void* __if_result__1_300 = (void*)0;
struct list$1sVarph* o2_saved_301;
struct sVar* it_302;
struct list$1sVarph* __dec_obj94;
void* __right_value299 = (void*)0;
    if(    self->value) {
        come_fun_250=info->come_fun;
        result_type_251=(struct sType*)come_increment_ref_count(sType_clone(come_fun_250->mResultType));
        result_type2_280=(struct sType*)come_increment_ref_count(solve_generics(result_type_251,info->generics_type,info));
        result_type3_281=result_type2_280->mNoSolvedGenericsType->v1;
        if(        result_type2_280->mNoSolvedGenericsType->v1) {
            result_type3_281=result_type2_280->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_281=result_type2_280;
        }
        if(        result_type_251->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value290=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj83=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
            }
        }
        Value_282=node_compile(self->value,info);
        if(        !Value_282) {
            __result219__ = (_Bool)0;
            come_call_finalizer3(result_type_251,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_280,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result219__;
        }
        else {
        }
        come_value_283=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_284=(struct sType*)come_increment_ref_count(solve_generics(come_value_283->type,info->generics_type,info));
        __dec_obj84=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(sType_clone(come_value_283->type));
        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_283->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_250->mBlock,info,come_value_283->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_283->c_value);
        }
        else {
            static int num_result_285=0;
            var_name_286=(char*)come_increment_ref_count(xsprintf("__result%d__",++num_result_285));
            num_result_stack_287=num_result_285;
            if(            !info->come_fun->mNoResultType) {
                if(                !(strlen(result_type2_280->mClass->mName)>strlen("tuple")&&memcmp(result_type2_280->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_280,come_value_type_284,come_value_283,(_Bool)0,(_Bool)1,(_Bool)0,info);
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value296=make_define_var(result_type2_280,var_name_286,(_Bool)0,info))));
                __right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = gComeFunResultObject = __result_obj__ = %s;\n",var_name_286,come_value_283->c_value);
            }
            else {
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value297=make_define_var(result_type2_280,var_name_286,(_Bool)0,info))));
                __right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = %s;\n",var_name_286,come_value_283->c_value);
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_250->mBlock,info,come_value_283->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_289=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_292=list$1sVarph_begin((o2_saved_289));                    !list$1sVarph_end((o2_saved_289));                    it_292=list$1sVarph_next((o2_saved_289))                    ){
                        free_object(it_292->mType,it_292->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    come_call_finalizer3(o2_saved_289,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj90=info->match_it_var;
                    __if_result__0_288=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj90,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(__if_result__0_288,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value298=xsprintf("come_heap_final();\n"))));
                __right_value298 = come_decrement_ref_count2(__right_value298, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            if(            !info->come_fun->mNoResultType) {
                add_come_code(info,"gComeFunResultObject = (void*)0;\n");
            }
            add_come_code(info,"return __result%d__;\n",num_result_stack_287);
            var_name_286 = come_decrement_ref_count2(var_name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_251,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_280,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_283,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_284,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_299=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_299->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_301=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_302=list$1sVarph_begin((o2_saved_301));                !list$1sVarph_end((o2_saved_301));                it_302=list$1sVarph_next((o2_saved_301))                ){
                    free_object(it_302->mType,it_302->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                come_call_finalizer3(o2_saved_301,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj94=info->match_it_var;
                __if_result__1_300=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj94,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(__if_result__1_300,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value299=xsprintf("come_heap_final();\n"))));
            __right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj32;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj32=self->sname;
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result202__;
void* __right_value252 = (void*)0;
struct sType* result_252;
void* __right_value255 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value256 = (void*)0;
struct tuple1$1sTypeph* __dec_obj61;
void* __right_value257 = (void*)0;
char* __dec_obj62;
void* __right_value264 = (void*)0;
struct list$1sTypeph* __dec_obj66;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __dec_obj70;
void* __right_value273 = (void*)0;
struct list$1sTypeph* __dec_obj71;
void* __right_value280 = (void*)0;
struct list$1charph* __dec_obj75;
void* __right_value281 = (void*)0;
struct tuple1$1sTypeph* __dec_obj76;
void* __right_value282 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value283 = (void*)0;
struct tuple1$1sTypeph* __dec_obj78;
void* __right_value284 = (void*)0;
struct sNode* __dec_obj79;
void* __right_value285 = (void*)0;
char* __dec_obj80;
void* __right_value286 = (void*)0;
char* __dec_obj81;
void* __right_value287 = (void*)0;
char* __dec_obj82;
struct sType* __result218__;
    if(    self==(void*)0) {
        __result202__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result202__;
    }
    result_252=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_252->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj60=result_252->mNoSolvedGenericsType;
        result_252->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj61=result_252->mOriginalLoadVarType;
        result_252->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj62=result_252->mGenericsName;
        result_252->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj66=result_252->mGenericsTypes;
        result_252->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj66,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj70=result_252->mArrayNum;
        result_252->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj70,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_252->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj71=result_252->mParamTypes;
        result_252->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj71,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj75=result_252->mParamNames;
        result_252->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj76=result_252->mResultType;
        result_252->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj76,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_252->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj77=result_252->mAlignas;
        result_252->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj78=result_252->mChannelType;
        result_252->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj78,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_252->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_252->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_252->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_252->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_252->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_252->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_252->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_252->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_252->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_252->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_252->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_252->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_252->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_252->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_252->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_252->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_252->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_252->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_252->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_252->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_252->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_252->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_252->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_252->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj79=result_252->mSizeNum;
        result_252->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_252->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj80=result_252->mOriginalTypeName;
        result_252->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_252->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_252->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_252->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_252->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_252->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_252->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_252->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_252->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj81=result_252->mAsmName;
        result_252->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_252->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_252->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_252->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_252->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_252->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_252->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj82=result_252->mTupleName;
        result_252->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result218__ = gComeFunResultObject = __result_obj__ = result_252;
    come_call_finalizer3(result_252,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result203__;
void* __right_value253 = (void*)0;
struct tuple1$1sTypeph* result_253;
void* __right_value254 = (void*)0;
struct sType* __dec_obj38;
struct tuple1$1sTypeph* __result204__;
    if(    self==(void*)0) {
        __result203__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    result_253=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj38=result_253->v1;
        result_253->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result204__ = gComeFunResultObject = __result_obj__ = result_253;
    come_call_finalizer3(result_253,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj39;
struct tuple1$1sTypeph* __dec_obj41;
char* __dec_obj43;
struct list$1sTypeph* __dec_obj44;
struct list$1sNodeph* __dec_obj46;
struct list$1sTypeph* __dec_obj48;
struct list$1charph* __dec_obj49;
struct tuple1$1sTypeph* __dec_obj50;
struct sNode* __dec_obj52;
struct tuple1$1sTypeph* __dec_obj53;
struct sNode* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
char* __dec_obj58;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj39=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj39,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj41=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj41,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj43=self->mGenericsName;
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj44=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj44,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj46=self->mArrayNum;
            come_call_finalizer3(__dec_obj46,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj48=self->mParamTypes;
            come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj49=self->mParamNames;
            come_call_finalizer3(__dec_obj49,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj50=self->mResultType;
            come_call_finalizer3(__dec_obj50,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj52=self->mAlignas;
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj53=self->mChannelType;
            come_call_finalizer3(__dec_obj53,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj55=self->mSizeNum;
            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj56=self->mOriginalTypeName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj57=self->mAsmName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj58=self->mTupleName;
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_254;
struct list_item$1sTypeph* prev_it_255;
    it_254=self->head;
    while(it_254!=((void*)0)) {
        prev_it_255=it_254;
        it_254=it_254->next;
        come_call_finalizer3(prev_it_255,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj45;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj45=self->item;
            come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_256;
struct list_item$1sTypeph* prev_it_257;
    it_256=self->head;
    while(it_256!=((void*)0)) {
        prev_it_257=it_256;
        it_256=it_256->next;
        come_call_finalizer3(prev_it_257,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_258;
struct list_item$1sNodeph* prev_it_259;
    it_258=self->head;
    while(it_258!=((void*)0)) {
        prev_it_259=it_258;
        it_258=it_258->next;
        come_call_finalizer3(prev_it_259,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj47;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj47=self->item;
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_260;
struct list_item$1sNodeph* prev_it_261;
    it_260=self->head;
    while(it_260!=((void*)0)) {
        prev_it_261=it_260;
        it_260=it_260->next;
        come_call_finalizer3(prev_it_261,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_262;
struct list_item$1charph* prev_it_263;
    it_262=self->head;
    while(it_262!=((void*)0)) {
        prev_it_263=it_262;
        it_262=it_262->next;
        come_call_finalizer3(prev_it_263,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj54;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj54=self->v1;
            come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj59;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj59=self->v1;
            come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result205__;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1sTypeph* result_264;
struct list_item$1sTypeph* it_265;
void* __right_value263 = (void*)0;
struct list$1sTypeph* __result208__;
    if(    self==((void*)0)) {
        __result205__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    result_264=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1058, "list$1sTypeph"))));
    it_265=self->head;
    while(it_265!=((void*)0)) {
        list$1sTypeph_add(result_264,(struct sType*)come_increment_ref_count(sType_clone(it_265->item)));
        it_265=it_265->next;
    }
    __result208__ = gComeFunResultObject = __result_obj__ = result_264;
    come_call_finalizer3(result_264,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result206__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result206__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
struct list_item$1sTypeph* litem_266;
struct sType* __dec_obj63;
void* __right_value261 = (void*)0;
struct list_item$1sTypeph* litem_267;
struct sType* __dec_obj64;
void* __right_value262 = (void*)0;
struct list_item$1sTypeph* litem_268;
struct sType* __dec_obj65;
struct list$1sTypeph* __result207__;
    if(    self->len==0) {
        litem_266=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value260=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1072, "list_item$1sTypeph"))));
        litem_266->prev=((void*)0);
        litem_266->next=((void*)0);
        __dec_obj63=litem_266->item;
        litem_266->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_266;
        self->head=litem_266;
    }
    else if(    self->len==1) {
        litem_267=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value261=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1082, "list_item$1sTypeph"))));
        litem_267->prev=self->head;
        litem_267->next=((void*)0);
        __dec_obj64=litem_267->item;
        litem_267->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_267;
        self->head->next=litem_267;
    }
    else {
        litem_268=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value262=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1092, "list_item$1sTypeph"))));
        litem_268->prev=self->tail;
        litem_268->next=((void*)0);
        __dec_obj65=litem_268->item;
        litem_268->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_268;
        self->tail=litem_268;
    }
    self->len++;
    __result207__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result209__;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sNodeph* result_269;
struct list_item$1sNodeph* it_270;
void* __right_value271 = (void*)0;
struct list$1sNodeph* __result214__;
    if(    self==((void*)0)) {
        __result209__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    result_269=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1058, "list$1sNodeph"))));
    it_270=self->head;
    while(it_270!=((void*)0)) {
        list$1sNodeph_add(result_269,(struct sNode*)come_increment_ref_count(sNode_clone(it_270->item)));
        it_270=it_270->next;
    }
    __result214__ = gComeFunResultObject = __result_obj__ = result_269;
    come_call_finalizer3(result_269,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result210__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result210__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
struct list_item$1sNodeph* litem_271;
struct sNode* __dec_obj67;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_272;
struct sNode* __dec_obj68;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_273;
struct sNode* __dec_obj69;
struct list$1sNodeph* __result211__;
    if(    self->len==0) {
        litem_271=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value267=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1072, "list_item$1sNodeph"))));
        litem_271->prev=((void*)0);
        litem_271->next=((void*)0);
        __dec_obj67=litem_271->item;
        litem_271->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_271;
        self->head=litem_271;
    }
    else if(    self->len==1) {
        litem_272=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1082, "list_item$1sNodeph"))));
        litem_272->prev=self->head;
        litem_272->next=((void*)0);
        __dec_obj68=litem_272->item;
        litem_272->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_272;
        self->head->next=litem_272;
    }
    else {
        litem_273=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1092, "list_item$1sNodeph"))));
        litem_273->prev=self->tail;
        litem_273->next=((void*)0);
        __dec_obj69=litem_273->item;
        litem_273->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_273;
        self->tail=litem_273;
    }
    self->len++;
    __result211__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result212__;
void* __right_value270 = (void*)0;
struct sNode* result_274;
struct sNode* __result213__;
    if(    self==(void*)0) {
        __result212__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    result_274=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_274->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_274->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_274->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_274->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_274->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_274->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_274->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_274->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_274->kind=self->kind;
    }
    __result213__ = gComeFunResultObject = __result_obj__ = result_274;
    if(result_274) { result_274 = come_decrement_ref_count2(result_274, ((struct sNode*)result_274)->finalize, ((struct sNode*)result_274)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result215__;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1charph* result_275;
struct list_item$1charph* it_276;
void* __right_value279 = (void*)0;
struct list$1charph* __result217__;
    if(    self==((void*)0)) {
        __result215__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result215__;
    }
    result_275=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1058, "list$1charph"))));
    it_276=self->head;
    while(it_276!=((void*)0)) {
        list$1charph_add(result_275,(char*)come_increment_ref_count(string_clone(it_276->item)));
        it_276=it_276->next;
    }
    __result217__ = gComeFunResultObject = __result_obj__ = result_275;
    come_call_finalizer3(result_275,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_277;
char* __dec_obj72;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_278;
char* __dec_obj73;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_279;
char* __dec_obj74;
struct list$1charph* __result216__;
    if(    self->len==0) {
        litem_277=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1072, "list_item$1charph"))));
        litem_277->prev=((void*)0);
        litem_277->next=((void*)0);
        __dec_obj72=litem_277->item;
        litem_277->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_277;
        self->head=litem_277;
    }
    else if(    self->len==1) {
        litem_278=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1082, "list_item$1charph"))));
        litem_278->prev=self->head;
        litem_278->next=((void*)0);
        __dec_obj73=litem_278->item;
        litem_278->item=(char*)come_increment_ref_count(item);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_278;
        self->head->next=litem_278;
    }
    else {
        litem_279=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1092, "list_item$1charph"))));
        litem_279->prev=self->tail;
        litem_279->next=((void*)0);
        __dec_obj74=litem_279->item;
        litem_279->item=(char*)come_increment_ref_count(item);
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_279;
        self->tail=litem_279;
    }
    self->len++;
    __result216__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_290;
struct sVar* __result220__;
struct sVar* __result221__;
struct sVar* result_291;
struct sVar* __result222__;
result_290 = (void*)0;
result_291 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_290,0,sizeof(struct sVar*));
        __result220__ = gComeFunResultObject = __result_obj__ = result_290;
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    self->it=self->head;
    if(    self->it) {
        __result221__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    memset(&result_291,0,sizeof(struct sVar*));
    __result222__ = gComeFunResultObject = __result_obj__ = result_291;
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_293;
struct sVar* __result223__;
struct sVar* __result224__;
struct sVar* result_294;
struct sVar* __result225__;
result_293 = (void*)0;
result_294 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_293,0,sizeof(struct sVar*));
        __result223__ = gComeFunResultObject = __result_obj__ = result_293;
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result224__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    memset(&result_294,0,sizeof(struct sVar*));
    __result225__ = gComeFunResultObject = __result_obj__ = result_294;
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_295;
struct list_item$1sVarph* prev_it_296;
    it_295=self->head;
    while(it_295!=((void*)0)) {
        prev_it_296=it_295;
        it_295=it_295->next;
        come_call_finalizer3(prev_it_296,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj85;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj85=self->item;
            come_call_finalizer3(__dec_obj85,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj86;
char* __dec_obj87;
struct sType* __dec_obj88;
char* __dec_obj89;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj86=self->mName;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj87=self->mCValueName;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj88=self->mType;
            come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj89=self->mFunName;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_297;
struct list_item$1sVarph* prev_it_298;
    it_297=self->head;
    while(it_297!=((void*)0)) {
        prev_it_298=it_297;
        it_297=it_297->next;
        come_call_finalizer3(prev_it_298,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj91;
struct sType* __dec_obj92;
char* __dec_obj93;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj91=self->c_value;
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj92=self->type;
            come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj93=self->c_value_without_right_value_objects;
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
char* __dec_obj95;
struct sOutputNode* __result226__;
    ((struct sNodeBase*)(__right_value300=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value300,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj95=self->contents;
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    contents = come_decrement_ref_count2(contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
char* __result227__;
    __result227__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value301=__builtin_string("sOutputNode")));
    __right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNodeph* exps, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
char* __dec_obj98;
struct list$1sNodeph* __dec_obj99;
struct sInlineAssembler* __result228__;
    ((struct sNodeBase*)(__right_value302=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value302,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj98=self->source;
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj99=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(exps);
    come_call_finalizer3(__dec_obj99,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    source = come_decrement_ref_count2(source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __result229__;
    __result229__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value303=__builtin_string("sInlineAssembler")));
    __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_303;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct CVALUE* come_value_304;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct buffer* buf_305;
char* p_306;
_Bool dquort_307;
int num_exp_308;
void* __right_value308 = (void*)0;
struct sNode* node_309;
_Bool Value_313;
_Bool __result232__;
void* __right_value309 = (void*)0;
struct CVALUE* come_value_314;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
char* __dec_obj103;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* __dec_obj104;
_Bool __result234__;
    source_303=(char*)come_increment_ref_count(self->source);
    come_value_304=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 192, "CVALUE"))));
    buf_305=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 194, "buffer"))));
    p_306=source_303;
    while(*p_306!=40) {
        buffer_append_char(buf_305,*p_306);
        p_306++;
    }
    if(    *p_306==40) {
        buffer_append_char(buf_305,*p_306);
        p_306++;
        while(*p_306==32||*p_306==9||*p_306==10) {
            buffer_append_char(buf_305,*p_306);
            p_306++;
        }
    }
    dquort_307=(_Bool)0;
    num_exp_308=0;
    while(*p_306) {
        if(        *p_306==34) {
            buffer_append_char(buf_305,*p_306);
            p_306++;
            dquort_307=!dquort_307;
        }
        else if(        dquort_307) {
            buffer_append_char(buf_305,*p_306);
            p_306++;
        }
        else if(        *p_306==40) {
            buffer_append_char(buf_305,*p_306);
            p_306++;
            node_309=(struct sNode*)come_increment_ref_count(list$1sNodephp_operator_load_element(self->exps,num_exp_308++));
            Value_313=node_compile(node_309,info);
            if(            !Value_313) {
                __result232__ = (_Bool)0;
                if(node_309) { node_309 = come_decrement_ref_count2(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
                source_303 = come_decrement_ref_count2(source_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_304,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_305,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result232__;
            }
            else {
            }
            come_value_314=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_305,come_value_314->c_value);
            if(            *p_306==41) {
                buffer_append_char(buf_305,*p_306);
                p_306++;
            }
            if(node_309) { node_309 = come_decrement_ref_count2(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_314,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_305,*p_306);
            p_306++;
        }
    }
    __dec_obj103=come_value_304->c_value;
    come_value_304->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value310=buffer_to_string(buf_305)))));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj104=come_value_304->type;
    come_value_304->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 252, "sType")),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_304->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_304));
    add_come_last_code(info,"%s",come_value_304->c_value);
    __result234__ = (_Bool)1;
    source_303 = come_decrement_ref_count2(source_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_304,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_305,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result234__;
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_310;
int i_311;
struct sNode* __result230__;
struct sNode* default_value_312;
struct sNode* __result231__;
default_value_312 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_310=self->head;
    i_311=0;
    while(it_310!=((void*)0)) {
        if(        position==i_311) {
            __result230__ = gComeFunResultObject = __result_obj__ = it_310->item;
            gComeFunResultObject = (void*)0;
            return __result230__;
        }
        it_310=it_310->next;
        i_311++;
    }
    memset(&default_value_312,0,sizeof(struct sNode*));
    __result231__ = gComeFunResultObject = __result_obj__ = default_value_312;
    if(default_value_312) { default_value_312 = come_decrement_ref_count2(default_value_312, ((struct sNode*)default_value_312)->finalize, ((struct sNode*)default_value_312)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value314 = (void*)0;
struct list_item$1CVALUEph* litem_315;
struct CVALUE* __dec_obj105;
void* __right_value315 = (void*)0;
struct list_item$1CVALUEph* litem_316;
struct CVALUE* __dec_obj106;
void* __right_value316 = (void*)0;
struct list_item$1CVALUEph* litem_317;
struct CVALUE* __dec_obj107;
struct list$1CVALUEph* __result233__;
    if(    self->len==0) {
        litem_315=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value314=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1CVALUEph"))));
        litem_315->prev=((void*)0);
        litem_315->next=((void*)0);
        __dec_obj105=litem_315->item;
        litem_315->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj105,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_315;
        self->head=litem_315;
    }
    else if(    self->len==1) {
        litem_316=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value315=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1CVALUEph"))));
        litem_316->prev=self->head;
        litem_316->next=((void*)0);
        __dec_obj106=litem_316->item;
        litem_316->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj106,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_316;
        self->head->next=litem_316;
    }
    else {
        litem_317=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value316=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1CVALUEph"))));
        litem_317->prev=self->tail;
        litem_317->next=((void*)0);
        __dec_obj107=litem_317->item;
        litem_317->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj107,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_317;
        self->tail=litem_317;
    }
    self->len++;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
struct sCurrentNode2* __result235__;
    ((struct sNodeBase*)(__right_value317=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value317,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value318 = (void*)0;
char* __result236__;
    __result236__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value318=__builtin_string(self->sname)));
    __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
void* __right_value319 = (void*)0;
char* __result237__;
    __result237__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value319=__builtin_string("sCurrentNode")));
    __right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value320 = (void*)0;
char* class_name_318;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sClass* current_stack_319;
struct sVarTable* vtable_320;
struct map$2charphsVarph* o2_saved_321;
char* it_324;
char* key_327;
void* __right_value323 = (void*)0;
struct sVar* value_328;
void* __right_value324 = (void*)0;
struct sType* type2_332;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct tuple2$2charphsTypeph* item_333;
void* __right_value328 = (void*)0;
struct sType* type3_334;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct tuple2$2charphsTypeph* item2_337;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct map$2charphsVarph* o2_saved_389;
char* it_390;
char* key_391;
void* __right_value343 = (void*)0;
struct sVar* value_392;
void* __right_value344 = (void*)0;
struct sType* type2_393;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct tuple2$2charphsTypeph* item_394;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct CVALUE* come_value_395;
void* __right_value349 = (void*)0;
char* __dec_obj132;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct sType* __dec_obj133;
_Bool __result274__;
    info->current_stack_num++;
    class_name_318=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_319=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "./common.h", 448, "sClass")),class_name_318,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_320=info->lv_table;
    while(vtable_320) {
        for(        o2_saved_321=(struct map$2charphsVarph*)come_increment_ref_count((vtable_320->mVars)),it_324=map$2charphsVarph_begin((o2_saved_321));        !map$2charphsVarph_end((o2_saved_321));        it_324=map$2charphsVarph_next((o2_saved_321))        ){
            key_327=it_324;
            value_328=((struct sVar*)come_null_check(((struct sVar*)(__right_value323=map$2charphsVarphp_operator_load_element(vtable_320->mVars,key_327))), "./common.h", 455, 1));
            come_call_finalizer3(__right_value323,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_332=(struct sType*)come_increment_ref_count(sType_clone(value_328->mType));
            type2_332->mPointerNum++;
            item_333=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 461, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_328->mCValueName)),(struct sType*)come_increment_ref_count(type2_332)));
            if(            value_328->mCValueName!=((void*)0)) {
                if(                strcmp(value_328->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_328->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_328->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_328->mType->mClass->mName,"va_list")||string_operator_equals(value_328->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_332->mArrayNum)==1) {
                    type3_334=(struct sType*)come_increment_ref_count(sType_clone(type2_332));
                    list$1sNodeph_reset(type3_334->mArrayNum);
                    type3_334->mPointerNum=1;
                    type3_334->mOriginIsArray=(_Bool)1;
                    item2_337=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 481, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_328->mCValueName)),(struct sType*)come_increment_ref_count(type3_334)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_319->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item2_337)));
                    value_328->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_334,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_337,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_319->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item_333)));
                }
            }
            come_call_finalizer3(type2_332,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_333,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_321,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_320=vtable_320->mParent;
    }
    output_struct(current_stack_319,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_318),(struct sClass*)come_increment_ref_count(current_stack_319));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_318,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_318);
    vtable_320=info->lv_table;
    while(vtable_320) {
        for(        o2_saved_389=(struct map$2charphsVarph*)come_increment_ref_count((vtable_320->mVars)),it_390=map$2charphsVarph_begin((o2_saved_389));        !map$2charphsVarph_end((o2_saved_389));        it_390=map$2charphsVarph_next((o2_saved_389))        ){
            key_391=it_390;
            value_392=((struct sVar*)come_null_check(((struct sVar*)(__right_value343=map$2charphsVarphp_operator_load_element(vtable_320->mVars,key_391))), "./common.h", 506, 2));
            come_call_finalizer3(__right_value343,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_393=(struct sType*)come_increment_ref_count(sType_clone(value_392->mType));
            item_394=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "./common.h", 510, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(value_392->mCValueName),(struct sType*)come_increment_ref_count(type2_393)));
            if(            value_392->mCValueName!=((void*)0)) {
                if(                strcmp(value_392->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_392->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_392->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_392->mType->mClass->mName,"va_list")||string_operator_equals(value_392->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_393->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_392->mCValueName,value_392->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_392->mCValueName,value_392->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_393,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_394,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_389,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_320=vtable_320->mParent;
    }
    come_value_395=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "./common.h", 539, "CVALUE"))));
    __dec_obj132=come_value_395->c_value;
    come_value_395->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj133=come_value_395->type;
    come_value_395->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "./common.h", 542, "sType")),class_name_318,(_Bool)0,info));
    come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_395->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_395->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_395));
    __result274__ = (_Bool)1;
    class_name_318 = come_decrement_ref_count2(class_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_319,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result274__;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_322;
char* __result238__;
char* __result239__;
char* result_323;
char* __result240__;
result_322 = (void*)0;
result_323 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_322,0,sizeof(char*));
        __result238__ = gComeFunResultObject = __result_obj__ = result_322;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result239__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    memset(&result_323,0,sizeof(char*));
    __result240__ = gComeFunResultObject = __result_obj__ = result_323;
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_325;
char* __result241__;
char* __result242__;
char* result_326;
char* __result243__;
result_325 = (void*)0;
result_326 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_325,0,sizeof(char*));
        __result241__ = gComeFunResultObject = __result_obj__ = result_325;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result242__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    memset(&result_326,0,sizeof(char*));
    __result243__ = gComeFunResultObject = __result_obj__ = result_326;
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_329;
unsigned int hash_330;
unsigned int it_331;
struct sVar* __result244__;
struct sVar* __result245__;
struct sVar* __result246__;
struct sVar* __result247__;
default_value_329 = (void*)0;
    memset(&default_value_329,0,sizeof(struct sVar*));
    hash_330=charp_get_hash_key(((char*)key))%self->size;
    it_331=hash_330;
    while((_Bool)1) {
        if(        self->item_existance[it_331]) {
            if(            charp_equals(self->keys[it_331],key)) {
                __result244__ = gComeFunResultObject = __result_obj__ = self->items[it_331];
                come_call_finalizer3(default_value_329,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result244__;
            }
            it_331++;
            if(            it_331>=self->size) {
                it_331=0;
            }
            else if(            it_331==hash_330) {
                __result245__ = gComeFunResultObject = __result_obj__ = default_value_329;
                come_call_finalizer3(default_value_329,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result245__;
            }
        }
        else {
            __result246__ = gComeFunResultObject = __result_obj__ = default_value_329;
            come_call_finalizer3(default_value_329,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result246__;
        }
    }
    __result247__ = gComeFunResultObject = __result_obj__ = default_value_329;
    come_call_finalizer3(default_value_329,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj109;
struct sType* __dec_obj110;
struct tuple2$2charphsTypeph* __result248__;
    __dec_obj109=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj110=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_335;
struct list_item$1sNodeph* prev_it_336;
struct list$1sNodeph* __result249__;
    it_335=self->head;
    while(it_335!=((void*)0)) {
        prev_it_336=it_335;
        it_335=it_335->next;
        come_call_finalizer3(prev_it_336,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value332 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_338;
struct tuple2$2charphsTypeph* __dec_obj113;
void* __right_value333 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_339;
struct tuple2$2charphsTypeph* __dec_obj116;
void* __right_value334 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_340;
struct tuple2$2charphsTypeph* __dec_obj119;
struct list$1tuple2$2charphsTypephph* __result250__;
    if(    self->len==0) {
        litem_338=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value332=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1tuple2$2charphsTypephph"))));
        litem_338->prev=((void*)0);
        litem_338->next=((void*)0);
        __dec_obj113=litem_338->item;
        litem_338->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj113,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_338;
        self->head=litem_338;
    }
    else if(    self->len==1) {
        litem_339=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value333=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1tuple2$2charphsTypephph"))));
        litem_339->prev=self->head;
        litem_339->next=((void*)0);
        __dec_obj116=litem_339->item;
        litem_339->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj116,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_339;
        self->head->next=litem_339;
    }
    else {
        litem_340=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value334=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1tuple2$2charphsTypephph"))));
        litem_340->prev=self->tail;
        litem_340->next=((void*)0);
        __dec_obj119=litem_340->item;
        litem_340->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_340;
        self->tail=litem_340;
    }
    self->len++;
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj120;
struct sType* __dec_obj121;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj120=self->v1;
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj121=self->v2;
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result251__;
void* __right_value335 = (void*)0;
struct tuple2$2charphsTypeph* result_341;
void* __right_value336 = (void*)0;
char* __dec_obj122;
void* __right_value337 = (void*)0;
struct sType* __dec_obj123;
struct tuple2$2charphsTypeph* __result252__;
    if(    self==(void*)0) {
        __result251__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    result_341=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj122=result_341->v1;
        result_341->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj123=result_341->v2;
        result_341->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result252__ = gComeFunResultObject = __result_obj__ = result_341;
    come_call_finalizer3(result_341,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj124;
struct sType* __dec_obj125;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj124=self->v1;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj125=self->v2;
            come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_342;
int i_343;
    for(    i_342=0;    i_342<self->size;    i_342++    ){
        if(        self->item_existance[i_342]) {
            if(            1) {
                come_call_finalizer3(self->items[i_342],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_343=0;    i_343<self->size;    i_343++    ){
        if(        self->item_existance[i_343]) {
            if(            1) {
                self->keys[i_343] = come_decrement_ref_count2(self->keys[i_343], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_365;
unsigned int it_366;
_Bool same_key_exist_383;
char* it2_386;
struct map$2charphsClassph* __result273__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_365=charp_get_hash_key(key)%self->size;
    it_366=hash_365;
    while((_Bool)1) {
        if(        self->item_existance[it_366]) {
            if(            charp_equals(self->keys[it_366],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_366]);
                    self->keys[it_366] = come_decrement_ref_count2(self->keys[it_366], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_366]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_366]);
                    self->keys[it_366]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_366],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_366]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_366]=item;
                }
                break;
            }
            it_366++;
            if(            it_366>=self->size) {
                it_366=0;
            }
            else if(            it_366==hash_365) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_366]=(_Bool)1;
            if(            1) {
                self->keys[it_366]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_366]=key;
            }
            if(            1) {
                self->items[it_366]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_366]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_383=(_Bool)0;
    for(    it2_386=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_386=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_386,key)) {
            same_key_exist_383=(_Bool)1;
        }
    }
    if(    !same_key_exist_383) {
        list$1charp_push_back(self->key_list,key);
    }
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_344;
void* __right_value340 = (void*)0;
char** keys_345;
void* __right_value341 = (void*)0;
struct sClass** items_346;
void* __right_value342 = (void*)0;
_Bool* item_existance_347;
int len_348;
char* it_351;
struct sClass* default_value_354;
struct sClass* it2_355;
unsigned int hash_362;
int n_363;
struct sClass* default_value_364;
default_value_354 = (void*)0;
default_value_364 = (void*)0;
    size_344=self->size*10;
    keys_345=(char**)come_increment_ref_count(((char**)(__right_value340=(char**)come_calloc(1, sizeof(char*)*(1*(size_344)), "/usr/local/include/comelang.h", 2547, "char*%"))));
    items_346=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value341=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_344)), "/usr/local/include/comelang.h", 2548, "sClass*%"))));
    item_existance_347=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value342=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_344)), "/usr/local/include/comelang.h", 2549, "bool"))));
    len_348=0;
    for(    it_351=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_351=map$2charphsClassph_next(self)    ){
        memset(&default_value_354,0,sizeof(struct sClass*));
        it2_355=map$2charphsClassph_at(self,it_351,default_value_354);
        hash_362=charp_get_hash_key(it_351)%size_344;
        n_363=hash_362;
        while((_Bool)1) {
            if(            item_existance_347[n_363]) {
                n_363++;
                if(                n_363>=size_344) {
                    n_363=0;
                }
                else if(                n_363==hash_362) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_347[n_363]=(_Bool)1;
                keys_345[n_363]=it_351;
                items_346[n_363]=map$2charphsClassph_at(self,it_351,default_value_364);
                len_348++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_345;
    self->items=items_346;
    self->item_existance=item_existance_347;
    self->size=size_344;
    self->len=len_348;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_349;
char* __result253__;
char* __result254__;
char* result_350;
char* __result255__;
result_349 = (void*)0;
result_350 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_349,0,sizeof(char*));
        __result253__ = gComeFunResultObject = __result_obj__ = result_349;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result254__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    memset(&result_350,0,sizeof(char*));
    __result255__ = gComeFunResultObject = __result_obj__ = result_350;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_352;
char* __result256__;
char* __result257__;
char* result_353;
char* __result258__;
result_352 = (void*)0;
result_353 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_352,0,sizeof(char*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_352;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_353,0,sizeof(char*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_353;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_356;
unsigned int it_357;
struct sClass* __result259__;
struct sClass* __result260__;
struct sClass* __result261__;
struct sClass* __result262__;
    hash_356=charp_get_hash_key(((char*)key))%self->size;
    it_357=hash_356;
    while((_Bool)1) {
        if(        self->item_existance[it_357]) {
            if(            charp_equals(self->keys[it_357],key)) {
                __result259__ = gComeFunResultObject = __result_obj__ = self->items[it_357];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result259__;
            }
            it_357++;
            if(            it_357>=self->size) {
                it_357=0;
            }
            else if(            it_357==hash_356) {
                __result260__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result260__;
            }
        }
        else {
            __result261__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result261__;
        }
    }
    __result262__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj126;
struct list$1tuple2$2charphsTypephph* __dec_obj127;
char* __dec_obj129;
char* __dec_obj130;
char* __dec_obj131;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj126=self->mName;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj127=self->mFields;
            come_call_finalizer3(__dec_obj127,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj129=self->mDeclareSName;
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj130=self->mParentClassName;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj131=self->mAttribute;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_358;
struct list_item$1tuple2$2charphsTypephph* prev_it_359;
    it_358=self->head;
    while(it_358!=((void*)0)) {
        prev_it_359=it_358;
        it_358=it_358->next;
        come_call_finalizer3(prev_it_359,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj128;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj128=self->item;
            come_call_finalizer3(__dec_obj128,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_360;
struct list_item$1tuple2$2charphsTypephph* prev_it_361;
    it_360=self->head;
    while(it_360!=((void*)0)) {
        prev_it_361=it_360;
        it_360=it_360->next;
        come_call_finalizer3(prev_it_361,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_367;
struct list_item$1charp* it_368;
struct list$1charp* __result266__;
    it2_367=0;
    it_368=self->head;
    while(it_368!=((void*)0)) {
        if(        charp_equals(it_368->item,item)) {
            list$1charp_delete(self,it2_367,it2_367+1);
            break;
        }
        it2_367++;
        it_368=it_368->next;
    }
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_369;
struct list$1charp* __result263__;
struct list_item$1charp* it_372;
int i_373;
struct list_item$1charp* prev_it_374;
struct list_item$1charp* it_375;
int i_376;
struct list_item$1charp* prev_it_377;
struct list_item$1charp* it_378;
struct list_item$1charp* head_prev_it_379;
struct list_item$1charp* tail_it_380;
int i_381;
struct list_item$1charp* prev_it_382;
struct list$1charp* __result265__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_369=tail;
        tail=head;
        head=tmp_369;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result263__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_372=self->head;
        i_373=0;
        while(it_372!=((void*)0)) {
            if(            i_373<tail) {
                prev_it_374=it_372;
                it_372=it_372->next;
                i_373++;
                come_call_finalizer3(prev_it_374,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_373==tail) {
                self->head=it_372;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_372=it_372->next;
                i_373++;
            }
        }
    }
    else if(    tail==self->len) {
        it_375=self->head;
        i_376=0;
        while(it_375!=((void*)0)) {
            if(            i_376==head) {
                self->tail=it_375->prev;
                self->tail->next=((void*)0);
            }
            if(            i_376>=head) {
                prev_it_377=it_375;
                it_375=it_375->next;
                i_376++;
                come_call_finalizer3(prev_it_377,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_375=it_375->next;
                i_376++;
            }
        }
    }
    else {
        it_378=self->head;
        head_prev_it_379=((void*)0);
        tail_it_380=((void*)0);
        i_381=0;
        while(it_378!=((void*)0)) {
            if(            i_381==head) {
                head_prev_it_379=it_378->prev;
            }
            if(            i_381==tail) {
                tail_it_380=it_378;
            }
            if(            i_381>=head&&i_381<tail) {
                prev_it_382=it_378;
                it_378=it_378->next;
                i_381++;
                come_call_finalizer3(prev_it_382,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_378=it_378->next;
                i_381++;
            }
        }
        if(        head_prev_it_379!=((void*)0)) {
            head_prev_it_379->next=tail_it_380;
        }
        if(        tail_it_380!=((void*)0)) {
            tail_it_380->prev=head_prev_it_379;
        }
    }
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_370;
struct list_item$1charp* prev_it_371;
struct list$1charp* __result264__;
    it_370=self->head;
    while(it_370!=((void*)0)) {
        prev_it_371=it_370;
        it_370=it_370->next;
        come_call_finalizer3(prev_it_371,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_384;
char* __result267__;
char* __result268__;
char* result_385;
char* __result269__;
result_384 = (void*)0;
result_385 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_384,0,sizeof(char*));
        __result267__ = gComeFunResultObject = __result_obj__ = result_384;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    self->it=self->head;
    if(    self->it) {
        __result268__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    memset(&result_385,0,sizeof(char*));
    __result269__ = gComeFunResultObject = __result_obj__ = result_385;
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_387;
char* __result270__;
char* __result271__;
char* result_388;
char* __result272__;
result_387 = (void*)0;
result_388 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_387,0,sizeof(char*));
        __result270__ = gComeFunResultObject = __result_obj__ = result_387;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result271__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    memset(&result_388,0,sizeof(char*));
    __result272__ = gComeFunResultObject = __result_obj__ = result_388;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value352 = (void*)0;
struct sLineNode* __result275__;
    ((struct sNodeBase*)(__right_value352=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value352,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result275__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value353 = (void*)0;
char* __result276__;
    __result276__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value353=__builtin_string("sLineNode")));
    __right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct CVALUE* come_value_396;
void* __right_value356 = (void*)0;
char* __dec_obj135;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct sType* __dec_obj136;
_Bool __result277__;
    come_value_396=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 282, "CVALUE"))));
    __dec_obj135=come_value_396->c_value;
    come_value_396->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj136=come_value_396->type;
    come_value_396->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 285, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_396->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_396));
    add_come_last_code(info,"%s",come_value_396->c_value);
    __result277__ = (_Bool)1;
    come_call_finalizer3(come_value_396,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result277__;
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
struct sSNameNode* __result278__;
    ((struct sNodeBase*)(__right_value359=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value359,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value360 = (void*)0;
char* __result279__;
    __result279__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value360=__builtin_string("sSNameNode")));
    __right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct CVALUE* come_value_397;
void* __right_value363 = (void*)0;
char* __dec_obj138;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sType* __dec_obj139;
_Bool __result280__;
    come_value_397=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 310, "CVALUE"))));
    __dec_obj138=come_value_397->c_value;
    come_value_397->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj139=come_value_397->type;
    come_value_397->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 313, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_397->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_397));
    add_come_last_code(info,"%s",come_value_397->c_value);
    __result280__ = (_Bool)1;
    come_call_finalizer3(come_value_397,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result280__;
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value366 = (void*)0;
struct sFuncNode* __result281__;
    ((struct sNodeBase*)(__right_value366=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value366,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value367 = (void*)0;
char* __result282__;
    __result282__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value367=__builtin_string("sFuncNode")));
    __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct CVALUE* come_value_398;
void* __right_value370 = (void*)0;
char* __dec_obj141;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sType* __dec_obj142;
_Bool __result283__;
    come_value_398=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 338, "CVALUE"))));
    __dec_obj141=come_value_398->c_value;
    come_value_398->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj142=come_value_398->type;
    come_value_398->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 341, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_398->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_398));
    add_come_last_code(info,"%s",come_value_398->c_value);
    __result283__ = (_Bool)1;
    come_call_finalizer3(come_value_398,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result283__;
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value373 = (void*)0;
struct sWildCard* __result284__;
    ((struct sNodeBase*)(__right_value373=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value373,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

char* sWildCard_kind(struct sWildCard* self){
void* __result_obj__=(void*)0;
void* __right_value374 = (void*)0;
char* __result285__;
    __result285__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value374=__builtin_string("sWildCard")));
    __right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sNode* value_node_399;
_Bool Value_400;
_Bool __result286__;
_Bool __result287__;
    value_node_399=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value375=xsprintf("Value"))),info));
    __right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    Value_400=node_compile(value_node_399,info);
    if(    !Value_400) {
        __result286__ = (_Bool)0;
        if(value_node_399) { value_node_399 = come_decrement_ref_count2(value_node_399, ((struct sNode*)value_node_399)->finalize, ((struct sNode*)value_node_399)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result286__;
    }
    else {
    }
    __result287__ = (_Bool)1;
    if(value_node_399) { value_node_399 = come_decrement_ref_count2(value_node_399, ((struct sNode*)value_node_399)->finalize, ((struct sNode*)value_node_399)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result287__;
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value377 = (void*)0;
struct sCallerFuncNode* __result288__;
    ((struct sNodeBase*)(__right_value377=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value377,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value378 = (void*)0;
char* __result289__;
    __result289__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value378=__builtin_string("sCallerFuncNode")));
    __right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct CVALUE* come_value_401;
void* __right_value381 = (void*)0;
char* __dec_obj145;
void* __right_value382 = (void*)0;
char* __dec_obj146;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct sType* __dec_obj147;
_Bool __result290__;
    come_value_401=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 390, "CVALUE"))));
    if(    info->caller_fun) {
        __dec_obj145=come_value_401->c_value;
        come_value_401->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj146=come_value_401->c_value;
        come_value_401->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj147=come_value_401->type;
    come_value_401->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 398, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_401->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_401));
    add_come_last_code(info,"%s",come_value_401->c_value);
    __result290__ = (_Bool)1;
    come_call_finalizer3(come_value_401,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result290__;
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value385 = (void*)0;
struct sCallerLineNode* __result291__;
    ((struct sNodeBase*)(__right_value385=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value385,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct CVALUE* come_value_402;
void* __right_value388 = (void*)0;
char* __dec_obj149;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct sType* __dec_obj150;
_Bool __result292__;
    come_value_402=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 419, "CVALUE"))));
    __dec_obj149=come_value_402->c_value;
    come_value_402->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj150=come_value_402->type;
    come_value_402->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 422, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_402->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_402));
    add_come_last_code(info,"%s",come_value_402->c_value);
    __result292__ = (_Bool)1;
    come_call_finalizer3(come_value_402,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result292__;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value391 = (void*)0;
char* __result293__;
    __result293__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value391=__builtin_string("sCallerLineNode")));
    __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value392 = (void*)0;
struct sCallerSNameNode* __result294__;
    ((struct sNodeBase*)(__right_value392=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value392,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct CVALUE* come_value_403;
void* __right_value395 = (void*)0;
char* __dec_obj152;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sType* __dec_obj153;
_Bool __result295__;
    come_value_403=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 447, "CVALUE"))));
    __dec_obj152=come_value_403->c_value;
    come_value_403->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj153=come_value_403->type;
    come_value_403->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 450, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_403->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_403));
    add_come_last_code(info,"%s",come_value_403->c_value);
    __result295__ = (_Bool)1;
    come_call_finalizer3(come_value_403,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result295__;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value398 = (void*)0;
char* __result296__;
    __result296__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value398=__builtin_string("sCallerSNameNode")));
    __right_value398 = come_decrement_ref_count2(__right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value399 = (void*)0;
char* fun_name3_405;
struct list$1sTypeph* method_generics_types_before_406;
struct list$1sTypeph* __dec_obj154;
struct sGenericsFun* generics_fun_407;
void* __right_value400 = (void*)0;
_Bool _if_conditional2;
void* __right_value401 = (void*)0;
char* __result301__;
struct list$1sTypeph* __dec_obj165;
char* __result302__;
    static int num_method_generics_404=0;
    fun_name3_405=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_404++));
    method_generics_types_before_406=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj154=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj154,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_407=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0));
    if(    generics_fun_407) {
        if(        (_if_conditional2=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_405)),generics_fun_407,info))),        _if_conditional2) {
            err_msg(info,"%s not found",fun_name3_405);
            __result301__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value401=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_405 = come_decrement_ref_count2(fun_name3_405, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_406,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            __right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result301__;
        }
    }
    __dec_obj165=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_406);
    come_call_finalizer3(__dec_obj165,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result302__ = gComeFunResultObject = __result_obj__ = fun_name3_405;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name3_405 = come_decrement_ref_count2(fun_name3_405, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_406,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_408;
unsigned int it_409;
struct sGenericsFun* __result297__;
struct sGenericsFun* __result298__;
struct sGenericsFun* __result299__;
struct sGenericsFun* __result300__;
    hash_408=charp_get_hash_key(((char*)key))%self->size;
    it_409=hash_408;
    while((_Bool)1) {
        if(        self->item_existance[it_409]) {
            if(            charp_equals(self->keys[it_409],key)) {
                __result297__ = gComeFunResultObject = __result_obj__ = self->items[it_409];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result297__;
            }
            it_409++;
            if(            it_409>=self->size) {
                it_409=0;
            }
            else if(            it_409==hash_408) {
                __result298__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result298__;
            }
        }
        else {
            __result299__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result299__;
        }
    }
    __result300__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj155;
struct list$1charph* __dec_obj156;
struct list$1charph* __dec_obj157;
char* __dec_obj158;
struct sType* __dec_obj159;
struct list$1sTypeph* __dec_obj160;
struct list$1charph* __dec_obj161;
struct list$1charph* __dec_obj162;
char* __dec_obj163;
char* __dec_obj164;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj155=self->mImplType;
            come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj156=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj156,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj157=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj157,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj158=self->mName;
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj159=self->mResultType;
            come_call_finalizer3(__dec_obj159,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj160=self->mParamTypes;
            come_call_finalizer3(__dec_obj160,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj161=self->mParamNames;
            come_call_finalizer3(__dec_obj161,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj162=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj162,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj163=self->mBlock;
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj164=self->mGenericsSName;
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
char* __dec_obj166;
void* __right_value413 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj183;
struct list$1sTypeph* __dec_obj184;
struct buffer* __dec_obj185;
struct sFunCallNode* __result309__;
    ((struct sNodeBase*)(__right_value402=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value402,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj166=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj183=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj183,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    self->guard_break=guard_break;
    __dec_obj184=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj184,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj185=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj185,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value414 = (void*)0;
char* __result310__;
    __result310__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value414=__builtin_string("sFunCallNode")));
    __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_420;
struct list$1tuple2$2charphsNodephph* params_421;
struct buffer* method_block_422;
int method_block_sline_423;
struct sVar* var__424;
struct sType* lambda_type_425;
_Bool __result311__;
void* __right_value415 = (void*)0;
struct sType* result_type_426;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct list$1CVALUEph* come_params_427;
_Bool __result313__;
int i_430;
struct list$1tuple2$2charphsNodephph* o2_saved_431;
struct tuple2$2charphsNodeph* it_434;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_437=0;
struct sNode* node_438=0;
_Bool Value_439;
_Bool __result320__;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_440;
void* __right_value419 = (void*)0;
_Bool _if_conditional3;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
_Bool _if_conditional4;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct buffer* buf_444;
int j_445;
struct list$1CVALUEph* o2_saved_446;
struct CVALUE* it_449;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct CVALUE* come_value_452;
void* __right_value430 = (void*)0;
char* __dec_obj192;
void* __right_value431 = (void*)0;
struct sType* __dec_obj193;
_Bool __result329__;
struct sGenericsFun* generics_fun_453;
_Bool method_generics_454;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct list$1sTypeph* method_generics_types_455;
void* __right_value434 = (void*)0;
char* generics_fun_name_456;
struct sFun* fun_457;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct list$1CVALUEph* come_params_460;
struct sFun* fun_461;
_Bool no_output_come_code_462;
_Bool __result334__;
void* __right_value437 = (void*)0;
struct CVALUE* method_block_node_463;
void* __right_value438 = (void*)0;
struct sType* method_block_lambda_type_467;
void* __right_value439 = (void*)0;
struct sType* method_block_result_type_468;
void* __right_value440 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_469;
struct sType* generics_fun_method_block_result_type_470;
int method_generics_num_471;
void* __right_value441 = (void*)0;
int n_480;
struct list$1sTypeph* o2_saved_481;
struct sType* it_484;
int method_generics_num_487;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct list$1CVALUEph* come_params_488;
int i_489;
struct sType* result_type_490;
struct list$1tuple2$2charphsNodephph* o2_saved_491;
struct tuple2$2charphsNodeph* it_492;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* label_493=0;
struct sNode* node_494=0;
_Bool Value_495;
_Bool __result347__;
void* __right_value449 = (void*)0;
struct CVALUE* come_value_496;
int method_generics_num_500;
void* __right_value453 = (void*)0;
int n_501;
struct list$1sTypeph* o2_saved_502;
struct sType* it_503;
int method_generics_num_504;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
char* __dec_obj216;
void* __right_value457 = (void*)0;
char* __dec_obj217;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct list$1CVALUEph* come_params_507;
struct list$1tuple2$2charphsNodephph* o2_saved_508;
struct tuple2$2charphsNodeph* it_509;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* label_510=0;
struct sNode* node_511=0;
_Bool Value_512;
_Bool __result350__;
void* __right_value460 = (void*)0;
struct CVALUE* come_value_513;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct buffer* buf_514;
int j_515;
struct list$1CVALUEph* o2_saved_516;
struct CVALUE* it_517;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct CVALUE* come_value_518;
void* __right_value465 = (void*)0;
char* __dec_obj218;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sType* __dec_obj219;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sType* __dec_obj220;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sType* __dec_obj221;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct sType* __dec_obj222;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct sType* __dec_obj223;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sType* __dec_obj224;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sType* __dec_obj225;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sType* __dec_obj226;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sType* __dec_obj227;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sType* __dec_obj228;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sType* __dec_obj229;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sType* __dec_obj230;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sType* __dec_obj231;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sType* __dec_obj232;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sType* __dec_obj233;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sType* __dec_obj234;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sType* __dec_obj235;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sType* __dec_obj236;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sType* __dec_obj237;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sType* __dec_obj238;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sType* __dec_obj239;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sType* __dec_obj240;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sType* __dec_obj241;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj242;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* __dec_obj243;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sType* __dec_obj244;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sType* __dec_obj245;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* __dec_obj246;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sType* __dec_obj247;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* __dec_obj248;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* __dec_obj249;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sType* __dec_obj250;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __dec_obj251;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sType* __dec_obj252;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sType* __dec_obj253;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sType* __dec_obj254;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sType* __dec_obj255;
_Bool __result351__;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct list$1CVALUEph* come_params_519;
int i_520;
struct sType* result_type_521;
struct list$1tuple2$2charphsNodephph* o2_saved_522;
struct tuple2$2charphsNodeph* it_523;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_524=0;
struct sNode* node_525=0;
_Bool Value_526;
_Bool __result352__;
void* __right_value542 = (void*)0;
struct CVALUE* come_value_527;
struct sType* __dec_obj256;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct buffer* buf_528;
int j_529;
struct list$1CVALUEph* o2_saved_530;
struct CVALUE* it_531;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct CVALUE* come_value_532;
void* __right_value547 = (void*)0;
char* __dec_obj257;
struct sType* __dec_obj258;
_Bool __result353__;
void* __right_value548 = (void*)0;
char* __dec_obj259;
void* __right_value549 = (void*)0;
char* __dec_obj260;
char* p_533;
int version_534;
char* p2_535;
int i_537;
void* __right_value550 = (void*)0;
char* new_fun_name_538;
void* __right_value551 = (void*)0;
_Bool _if_conditional5;
void* __right_value552 = (void*)0;
char* __dec_obj261;
void* __right_value553 = (void*)0;
char* new_fun_name_542;
void* __right_value554 = (void*)0;
_Bool _if_conditional6;
void* __right_value555 = (void*)0;
char* __dec_obj262;
_Bool __result358__;
int i_543;
void* __right_value556 = (void*)0;
char* new_fun_name_544;
void* __right_value557 = (void*)0;
_Bool _if_conditional7;
void* __right_value558 = (void*)0;
char* __dec_obj263;
struct sFun* fun_545;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct list$1CVALUEph* come_params_546;
int i_547;
struct sType* result_type_548;
struct list$1tuple2$2charphsNodephph* o2_saved_549;
struct tuple2$2charphsNodeph* it_550;
struct tuple2$2charphsNodeph* multiple_assign_var5 = (void*)0;
char* label_551=0;
struct sNode* node_552=0;
_Bool Value_553;
_Bool __result359__;
void* __right_value561 = (void*)0;
struct CVALUE* come_value_554;
struct sType* __dec_obj264;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct buffer* buf_555;
int j_556;
struct list$1CVALUEph* o2_saved_557;
struct CVALUE* it_558;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct CVALUE* come_value_559;
void* __right_value566 = (void*)0;
char* __dec_obj265;
struct sType* __dec_obj266;
_Bool __result360__;
void* __right_value567 = (void*)0;
struct sType* result_type_560;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct list$1sTypeph* param_types_561;
struct list$1sTypeph* o2_saved_562;
struct sType* it_563;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sType* it2_564;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sType* __dec_obj267;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct list$1CVALUEph* come_params_565;
int i_566;
struct list$1tuple2$2charphsNodephph* o2_saved_567;
struct tuple2$2charphsNodeph* it_568;
struct tuple2$2charphsNodeph* multiple_assign_var6 = (void*)0;
char* label_569=0;
struct sNode* node_570=0;
_Bool Value_571;
_Bool __result361__;
void* __right_value576 = (void*)0;
struct CVALUE* come_value_572;
int n_573;
struct list$1charph* o2_saved_574;
char* it_577;
void* __right_value577 = (void*)0;
_Bool _if_conditional8;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
_Bool _if_conditional9;
void* __right_value584 = (void*)0;
int i_585;
struct list$1tuple2$2charphsNodephph* o2_saved_586;
struct tuple2$2charphsNodeph* it_587;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_588=0;
struct sNode* node_589=0;
_Bool Value_590;
_Bool __result370__;
void* __right_value585 = (void*)0;
struct CVALUE* come_value_591;
void* __right_value586 = (void*)0;
_Bool _if_conditional10;
_Bool Value_592;
_Bool __result371__;
void* __right_value587 = (void*)0;
struct CVALUE* come_value_593;
void* __right_value588 = (void*)0;
_Bool _if_conditional11;
void* __right_value589 = (void*)0;
_Bool _if_conditional12;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
_Bool _if_conditional13;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
_Bool _if_conditional14;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
char* default_param_594;
void* __right_value600 = (void*)0;
char* param_name_598;
void* __right_value601 = (void*)0;
_Bool _if_conditional15;
struct buffer* source_599;
char* p_600;
char* head_601;
int sline_602;
void* __right_value602 = (void*)0;
struct buffer* __dec_obj269;
void* __right_value603 = (void*)0;
struct sNode* node_603;
_Bool Value_604;
_Bool __result374__;
struct buffer* __dec_obj270;
void* __right_value604 = (void*)0;
struct CVALUE* come_value_605;
void* __right_value605 = (void*)0;
_Bool _if_conditional16;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
_Bool _if_conditional17;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
_Bool _if_conditional18;
_Bool __result375__;
_Bool __result376__;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value618 = (void*)0;
struct sNode* current_stack_frame_node_606;
_Bool Value_608;
_Bool __result379__;
void* __right_value619 = (void*)0;
struct CVALUE* come_value_609;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct buffer* method_block2_610;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct sType* method_block_type_611;
void* __right_value624 = (void*)0;
char* class_name_612;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct sClass* current_stack_frame_struct_616;
void* __right_value627 = (void*)0;
_Bool __result384__;
void* __right_value628 = (void*)0;
struct sType* result_type_617;
void* __right_value629 = (void*)0;
struct list$1sTypeph* param_types_618;
struct list$1charph* param_names_619;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct buffer* all_alhabet_sname_620;
char* p_621;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct list$1sTypeph* o2_saved_622;
struct sType* it_623;
struct sType* param_type_624;
void* __right_value634 = (void*)0;
char* param_name_625;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
char* param_name_626;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
char* param_name_627;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct buffer* source3_628;
char* p_629;
char* head_630;
int sline_631;
struct buffer* __dec_obj273;
void* __right_value641 = (void*)0;
struct sNode* node_632;
_Bool Value_633;
_Bool __result385__;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
char* method_block_name_634;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct CVALUE* come_value2_635;
struct sFun* fun2_636;
_Bool __result386__;
struct sType* method_block_type2_637;
void* __right_value646 = (void*)0;
char* __dec_obj274;
void* __right_value647 = (void*)0;
struct sType* __dec_obj275;
struct buffer* __dec_obj276;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct buffer* buf_638;
int j_639;
struct list$1CVALUEph* o2_saved_640;
struct CVALUE* it_641;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct CVALUE* come_value_642;
void* __right_value652 = (void*)0;
char* __dec_obj277;
void* __right_value653 = (void*)0;
struct sType* __dec_obj278;
void* __right_value654 = (void*)0;
char* __dec_obj279;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
char* __dec_obj280;
_Bool __result387__;
memset(&i_537, 0, sizeof(int));
    fun_name_420=(char*)come_increment_ref_count(self->fun_name);
    params_421=self->params;
    method_block_422=self->method_block;
    method_block_sline_423=self->method_block_sline;
    var__424=get_variable_from_table(info->lv_table,fun_name_420);
    if(    var__424==((void*)0)) {
        var__424=get_variable_from_table(info->gv_table,fun_name_420);
    }
    if(    var__424) {
        lambda_type_425=var__424->mType;
        if(        string_operator_not_equals(lambda_type_425->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_420);
            __result311__ = (_Bool)0;
            fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result311__;
        }
        result_type_426=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_425->mResultType->v1));
        result_type_426->mStatic=(_Bool)0;
        come_params_427=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 542, "list$1CVALUEph"))));
        if(        list$1sTypeph_length(lambda_type_425->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_421)&&!lambda_type_425->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_420,list$1sTypeph_length(lambda_type_425->mParamTypes),list$1tuple2$2charphsNodephph_length(params_421));
            __result313__ = (_Bool)0;
            come_call_finalizer3(result_type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_427,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result313__;
        }
        i_430=0;
        for(        o2_saved_431=(params_421),it_434=list$1tuple2$2charphsNodephph_begin((o2_saved_431));        !list$1tuple2$2charphsNodephph_end((o2_saved_431));        it_434=list$1tuple2$2charphsNodephph_next((o2_saved_431))        ){
            multiple_assign_var1=it_434;
            label_437=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_438=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_439=node_compile(node_438,info);
            if(            !Value_439) {
                __result320__ = (_Bool)0;
                label_437 = come_decrement_ref_count2(label_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_438) { node_438 = come_decrement_ref_count2(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(result_type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_427,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result320__;
            }
            else {
            }
            come_value_440=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional3=(lambda_type_425->mVarArgs&&((struct sType*)come_null_check(((struct sType*)(__right_value419=list$1sTypephp_operator_load_element(lambda_type_425->mParamTypes,i_430))), "05call.c", 558, 3))==((void*)0))),            come_call_finalizer3(__right_value419,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
            }
            else {
                check_assign_type(((char*)(__right_value422=xsprintf("\%s calling param #\%s",((char*)(__right_value420=string_to_string(fun_name_420))),((char*)(__right_value421=int_to_string(i_430)))))),((struct sType*)come_null_check(((struct sType*)(__right_value423=list$1sTypephp_operator_load_element(lambda_type_425->mParamTypes,i_430))), "05call.c", 561, 4)),come_value_440->type,come_value_440,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value422 = come_decrement_ref_count2(__right_value422, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value423,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional4=(((struct sType*)come_null_check(((struct sType*)(__right_value424=list$1sTypephp_operator_load_element(lambda_type_425->mParamTypes,i_430))), "05call.c", 562, 5))->mHeap&&come_value_440->type->mHeap)),                come_call_finalizer3(__right_value424,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value425=list$1sTypephp_operator_load_element(lambda_type_425->mParamTypes,i_430))), "05call.c", 563, 6)),come_value_440->type,come_value_440,info,(_Bool)1);
                    come_call_finalizer3(__right_value425,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
            }
            list$1CVALUEph_push_back(come_params_427,(struct CVALUE*)come_increment_ref_count(come_value_440));
            dec_stack_ptr(1,info);
            i_430++;
            label_437 = come_decrement_ref_count2(label_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_438) { node_438 = come_decrement_ref_count2(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_440,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_444=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 574, "buffer"))));
        buffer_append_str(buf_444,var__424->mCValueName);
        buffer_append_str(buf_444,"(");
        j_445=0;
        for(        o2_saved_446=(struct list$1CVALUEph*)come_increment_ref_count((come_params_427)),it_449=list$1CVALUEph_begin((o2_saved_446));        !list$1CVALUEph_end((o2_saved_446));        it_449=list$1CVALUEph_next((o2_saved_446))        ){
            buffer_append_str(buf_444,it_449->c_value);
            if(            j_445!=list$1CVALUEph_length(come_params_427)-1) {
                buffer_append_str(buf_444,",");
            }
            j_445++;
        }
        come_call_finalizer3(o2_saved_446,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_444,")");
        come_value_452=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 591, "CVALUE"))));
        __dec_obj192=come_value_452->c_value;
        come_value_452->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_444));
        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj193=come_value_452->type;
        come_value_452->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_426));
        come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_452->type->mStatic=(_Bool)0;
        come_value_452->var=((void*)0);
        if(        lambda_type_425->mResultType->v1->mHeap) {
            append_object_to_right_values2(come_value_452,(struct sType*)come_increment_ref_count(lambda_type_425->mResultType->v1),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_452->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_452));
        info->calling_fun=((void*)0);
        __result329__ = (_Bool)1;
        come_call_finalizer3(result_type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_427,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_444,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_452,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result329__;
        come_call_finalizer3(result_type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_427,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_444,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_452,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    generics_fun_453=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name_420,((void*)0));
    method_generics_454=(_Bool)0;
    if(    generics_fun_453) {
        method_generics_454=list$1charph_length(generics_fun_453->mMethodGenericsTypeNames)>0;
    }
    if(    list$1sTypeph_length(self->method_generics_types)>0||method_generics_454) {
        if(        list$1sTypeph_length(self->method_generics_types)==0) {
            method_generics_types_455=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 616, "list$1sTypeph"))));
            generics_fun_name_456=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_420),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_455),info));
            fun_457=map$2charphsFunph_at(info->funcs,generics_fun_name_456,((void*)0));
            if(            method_block_422) {
                come_params_460=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 622, "list$1CVALUEph"))));
                fun_461=map$2charphsFunph_at(info->funcs,generics_fun_name_456,((void*)0));
                no_output_come_code_462=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_422,(struct list$1CVALUEph*)come_increment_ref_count(come_params_460),fun_461,fun_name_420,method_block_sline_423,info,(_Bool)1)) {
                    __result334__ = (_Bool)0;
                    come_call_finalizer3(come_params_460,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_455,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_456 = come_decrement_ref_count2(generics_fun_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result334__;
                }
                info->no_output_come_code=no_output_come_code_462;
                method_block_node_463=((struct CVALUE*)(__right_value437=list$1CVALUEphp_operator_load_element(come_params_460,-1)));
                come_call_finalizer3(__right_value437,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                method_block_lambda_type_467=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_463->type));
                method_block_result_type_468=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_469=((struct sType*)(__right_value440=list$1sTypephp_operator_load_element(generics_fun_453->mParamTypes,-1)));
                come_call_finalizer3(__right_value440,sType_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_method_block_result_type_470=generics_fun_method_block_lambda_type_469->mResultType->v1;
                if(                generics_fun_method_block_result_type_470->mClass->mMethodGenerics) {
                    method_generics_num_471=generics_fun_method_block_result_type_470->mClass->mMethodGenericsNum;
                    list$1sTypephp_operator_store_element(method_generics_types_455,method_generics_num_471,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_468)));
                }
                n_480=0;
                for(                o2_saved_481=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_469->mParamTypes)),it_484=list$1sTypeph_begin((o2_saved_481));                !list$1sTypeph_end((o2_saved_481));                it_484=list$1sTypeph_next((o2_saved_481))                ){
                    if(                    it_484->mClass->mMethodGenerics) {
                        method_generics_num_487=it_484->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(method_generics_types_455,method_generics_num_487,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value445=list$1sTypephp_operator_load_element(method_block_lambda_type_467->mParamTypes,n_480))), "05call.c", 648, 7)))));
                        come_call_finalizer3(__right_value445,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    n_480++;
                }
                come_call_finalizer3(o2_saved_481,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_460,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_lambda_type_467,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_result_type_468,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_params_488=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 654, "list$1CVALUEph"))));
            i_489=0;
            result_type_490=((void*)0);
            for(            o2_saved_491=(params_421),it_492=list$1tuple2$2charphsNodephph_begin((o2_saved_491));            !list$1tuple2$2charphsNodephph_end((o2_saved_491));            it_492=list$1tuple2$2charphsNodephph_next((o2_saved_491))            ){
                multiple_assign_var2=it_492;
                label_493=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                node_494=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                Value_495=node_compile(node_494,info);
                if(                !Value_495) {
                    __result347__ = (_Bool)0;
                    label_493 = come_decrement_ref_count2(label_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_494) { node_494 = come_decrement_ref_count2(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_generics_types_455,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_456 = come_decrement_ref_count2(generics_fun_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_488,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result347__;
                }
                else {
                }
                come_value_496=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEph_add(come_params_488,(struct CVALUE*)come_increment_ref_count(come_value_496));
                label_493 = come_decrement_ref_count2(label_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_494) { node_494 = come_decrement_ref_count2(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_496,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            generics_fun_453->mResultType->mClass->mMethodGenerics) {
                method_generics_num_500=generics_fun_453->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1sTypephp_operator_store_element(method_generics_types_455,method_generics_num_500,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                }
            }
            n_501=0;
            for(            o2_saved_502=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_453->mParamTypes)),it_503=list$1sTypeph_begin((o2_saved_502));            !list$1sTypeph_end((o2_saved_502));            it_503=list$1sTypeph_next((o2_saved_502))            ){
                if(                it_503->mClass->mMethodGenerics) {
                    method_generics_num_504=it_503->mClass->mMethodGenericsNum;
                    if(                    n_501<list$1CVALUEph_length(come_params_488)) {
                        list$1sTypephp_operator_store_element(method_generics_types_455,method_generics_num_504,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value454=list$1CVALUEphp_operator_load_element(come_params_488,n_501)))->type)));
                        come_call_finalizer3(__right_value454,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    }
                }
                n_501++;
            }
            come_call_finalizer3(o2_saved_502,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            map$2charphsFunph_remove(info->funcs,generics_fun_name_456);
            __dec_obj216=fun_name_420;
            fun_name_420=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_420),(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_455),info));
            __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(method_generics_types_455,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_456 = come_decrement_ref_count2(generics_fun_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_488,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj217=fun_name_420;
            fun_name_420=(char*)come_increment_ref_count(make_method_generics_function((char*)come_increment_ref_count(fun_name_420),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info));
            __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    string_operator_equals(fun_name_420,"__builtin_memmove")||string_operator_equals(fun_name_420,"__builtin_memset")||string_operator_equals(fun_name_420,"__builtin_ffs")||string_operator_equals(fun_name_420,"__builtin_ffsl")||string_operator_equals(fun_name_420,"__builtin_ffsll")||string_operator_equals(fun_name_420,"__builtin_bswap16")||string_operator_equals(fun_name_420,"__builtin_bswap32")||string_operator_equals(fun_name_420,"__builtin_bswap64")||string_operator_equals(fun_name_420,"__builtin_constant_p")||string_operator_equals(fun_name_420,"__builtin_expect")||string_operator_equals(fun_name_420,"__builtin___memset_chk")||string_operator_equals(fun_name_420,"__builtin_object_size")||string_operator_equals(fun_name_420,"__builtin___memcpy_chk")||string_operator_equals(fun_name_420,"__builtin___strncpy_chk")||string_operator_equals(fun_name_420,"__builtin___strncat_chk")||string_operator_equals(fun_name_420,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_420,"__builtin_strrchr")||string_operator_equals(fun_name_420,"__builtin_clz")||string_operator_equals(fun_name_420,"__dsb")||string_operator_equals(fun_name_420,"__isb")||string_operator_equals(fun_name_420,"__dmb")||memcmp(fun_name_420,"__builtin_arm_",strlen("__builtin_arm_"))==0||string_operator_equals(fun_name_420,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_420,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_420,"__c11_atomic_store")||string_operator_equals(fun_name_420,"__c11_atomic_load")||string_operator_equals(fun_name_420,"__c11_atomic_exchange")||string_operator_equals(fun_name_420,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_420,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_420,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_420,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_420,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_420,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_420,"__c11_atomic_fetch_xor")) {
        come_params_507=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 726, "list$1CVALUEph"))));
        for(        o2_saved_508=(params_421),it_509=list$1tuple2$2charphsNodephph_begin((o2_saved_508));        !list$1tuple2$2charphsNodephph_end((o2_saved_508));        it_509=list$1tuple2$2charphsNodephph_next((o2_saved_508))        ){
            multiple_assign_var3=it_509;
            label_510=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_511=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            Value_512=node_compile(node_511,info);
            if(            !Value_512) {
                __result350__ = (_Bool)0;
                label_510 = come_decrement_ref_count2(label_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_511) { node_511 = come_decrement_ref_count2(node_511, ((struct sNode*)node_511)->finalize, ((struct sNode*)node_511)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_507,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result350__;
            }
            else {
            }
            come_value_513=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_push_back(come_params_507,(struct CVALUE*)come_increment_ref_count(come_value_513));
            label_510 = come_decrement_ref_count2(label_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_511) { node_511 = come_decrement_ref_count2(node_511, ((struct sNode*)node_511)->finalize, ((struct sNode*)node_511)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_513,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_514=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 740, "buffer"))));
        buffer_append_str(buf_514,fun_name_420);
        buffer_append_str(buf_514,"(");
        j_515=0;
        for(        o2_saved_516=(struct list$1CVALUEph*)come_increment_ref_count((come_params_507)),it_517=list$1CVALUEph_begin((o2_saved_516));        !list$1CVALUEph_end((o2_saved_516));        it_517=list$1CVALUEph_next((o2_saved_516))        ){
            buffer_append_str(buf_514,it_517->c_value);
            if(            j_515!=list$1CVALUEph_length(come_params_507)-1) {
                buffer_append_str(buf_514,",");
            }
            j_515++;
        }
        come_call_finalizer3(o2_saved_516,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_514,")");
        come_value_518=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 757, "CVALUE"))));
        __dec_obj218=come_value_518->c_value;
        come_value_518->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_514));
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        string_operator_equals(fun_name_420,"__builtin_memmove")||string_operator_equals(fun_name_420,"__builtin_memset")) {
            __dec_obj219=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 761, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__builtin_ffs")) {
            __dec_obj220=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 764, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__builtin_ffsl")) {
            __dec_obj221=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 767, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__builtin_ffsll")) {
            __dec_obj222=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 770, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__builtin_bswap16")) {
            __dec_obj223=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 773, "sType")),"short",(_Bool)0,info));
            come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__builtin_bswap32")) {
            __dec_obj224=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 776, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__builtin_bswap64")) {
            __dec_obj225=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 779, "sType")),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__builtin_constant_p")) {
            __dec_obj226=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 782, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__builtin_expect")) {
            __dec_obj227=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 785, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__builtin___memset_chk")) {
            __dec_obj228=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 788, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_518->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_420,"__builtin_object_size")) {
            __dec_obj229=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 792, "sType")),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__builtin___memcpy_chk")) {
            __dec_obj230=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 795, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_518->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_420,"__builtin___strncpy_chk")) {
            __dec_obj231=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 799, "sType")),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_518->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_420,"__builtin___strncat_chk")) {
            __dec_obj232=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 803, "sType")),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_518->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_420,"__builtin_strrchr")) {
            __dec_obj233=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 807, "sType")),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_518->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_420,"__builtin___vsnprintf_chk")) {
            __dec_obj234=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 811, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__builtin_clz")) {
            __dec_obj235=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 814, "sType")),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__c11_atomic_thread_fence")) {
            __dec_obj236=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 817, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__c11_atomic_signal_fence")) {
            __dec_obj237=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 820, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__c11_atomic_exchange")) {
            __dec_obj238=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value504=list$1CVALUEphp_operator_load_element(come_params_507,1))), "05call.c", 823, 8))->type));
            come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value504,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__c11_atomic_exchange_strong")) {
            __dec_obj239=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value506=list$1CVALUEphp_operator_load_element(come_params_507,2))), "05call.c", 826, 9))->type));
            come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value506,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__c11_atomic_exchange_weak")) {
            __dec_obj240=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value508=list$1CVALUEphp_operator_load_element(come_params_507,2))), "05call.c", 829, 10))->type));
            come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value508,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__c11_atomic_store")) {
            __dec_obj241=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 832, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__c11_atomic_load")) {
            __dec_obj242=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value512=list$1CVALUEphp_operator_load_element(come_params_507,0))), "05call.c", 835, 11))->type));
            come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value512,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_value_518->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_420,"__c11_atomic_fetch_add")) {
            __dec_obj243=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value514=list$1CVALUEphp_operator_load_element(come_params_507,1))), "05call.c", 839, 12))->type));
            come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value514,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__c11_atomic_fetch_sub")) {
            __dec_obj244=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value516=list$1CVALUEphp_operator_load_element(come_params_507,1))), "05call.c", 842, 13))->type));
            come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value516,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__c11_atomic_fetch_and")) {
            __dec_obj245=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value518=list$1CVALUEphp_operator_load_element(come_params_507,1))), "05call.c", 845, 14))->type));
            come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value518,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__c11_atomic_fetch_or")) {
            __dec_obj246=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value520=list$1CVALUEphp_operator_load_element(come_params_507,1))), "05call.c", 848, 15))->type));
            come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value520,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__c11_atomic_fetch_xor")) {
            __dec_obj247=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)(__right_value522=list$1CVALUEphp_operator_load_element(come_params_507,1))), "05call.c", 851, 16))->type));
            come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value522,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__dsb")) {
            __dec_obj248=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 854, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__isb")) {
            __dec_obj249=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 857, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj249,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__dmb")) {
            __dec_obj250=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 860, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj250,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__builtin_arm_cdp")) {
            __dec_obj251=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 863, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj251,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__builtin_arm_ldc")) {
            __dec_obj252=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 866, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__builtin_arm_stc")) {
            __dec_obj253=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 869, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__builtin_arm_stcl")) {
            __dec_obj254=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 872, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj254,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_420,"__builtin_arm_ldcl")) {
            __dec_obj255=come_value_518->type;
            come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 875, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_518->var=((void*)0);
        add_come_last_code(info,"%s",come_value_518->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_518));
        __result351__ = (_Bool)1;
        come_call_finalizer3(come_params_507,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_514,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result351__;
        come_call_finalizer3(come_params_507,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_514,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_420,"__builtin_va_arg")) {
        come_params_519=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 887, "list$1CVALUEph"))));
        i_520=0;
        result_type_521=((void*)0);
        for(        o2_saved_522=(params_421),it_523=list$1tuple2$2charphsNodephph_begin((o2_saved_522));        !list$1tuple2$2charphsNodephph_end((o2_saved_522));        it_523=list$1tuple2$2charphsNodephph_next((o2_saved_522))        ){
            multiple_assign_var4=it_523;
            label_524=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_525=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_526=node_compile(node_525,info);
            if(            !Value_526) {
                __result352__ = (_Bool)0;
                label_524 = come_decrement_ref_count2(label_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_525) { node_525 = come_decrement_ref_count2(node_525, ((struct sNode*)node_525)->finalize, ((struct sNode*)node_525)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_519,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_521,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result352__;
            }
            else {
            }
            come_value_527=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_add(come_params_519,(struct CVALUE*)come_increment_ref_count(come_value_527));
            __dec_obj256=result_type_521;
            result_type_521=(struct sType*)come_increment_ref_count(come_value_527->type);
            come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_524 = come_decrement_ref_count2(label_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_525) { node_525 = come_decrement_ref_count2(node_525, ((struct sNode*)node_525)->finalize, ((struct sNode*)node_525)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_527,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_528=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 906, "buffer"))));
        buffer_append_str(buf_528,fun_name_420);
        buffer_append_str(buf_528,"(");
        j_529=0;
        for(        o2_saved_530=(struct list$1CVALUEph*)come_increment_ref_count((come_params_519)),it_531=list$1CVALUEph_begin((o2_saved_530));        !list$1CVALUEph_end((o2_saved_530));        it_531=list$1CVALUEph_next((o2_saved_530))        ){
            buffer_append_str(buf_528,it_531->c_value);
            if(            j_529!=list$1CVALUEph_length(come_params_519)-1) {
                buffer_append_str(buf_528,",");
            }
            j_529++;
        }
        come_call_finalizer3(o2_saved_530,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_528,")");
        come_value_532=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 923, "CVALUE"))));
        __dec_obj257=come_value_532->c_value;
        come_value_532->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_528));
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj258=come_value_532->type;
        come_value_532->type=(struct sType*)come_increment_ref_count(result_type_521);
        come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_532->var=((void*)0);
        add_come_last_code(info,"%s",come_value_532->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_532));
        __result353__ = (_Bool)1;
        come_call_finalizer3(come_params_519,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_521,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_528,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result353__;
        come_call_finalizer3(come_params_519,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_521,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_528,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(fun_name_420,"string")) {
        __dec_obj259=fun_name_420;
        fun_name_420=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_420,"wstring")) {
        __dec_obj260=fun_name_420;
        fun_name_420=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_420,"inherit")) {
        p_533=info->come_fun->mName;
        version_534=0;
        while(*p_533) {
            if(            *p_533==95&&*(p_533+1)==118&&xisdigit(*(p_533+2))) {
                p2_535=p_533+2;
                version_534=0;
                while(xisdigit(*p2_535)) {
                    version_534=version_534*10+(*p2_535-48);
                    p2_535++;
                }
                break;
            }
            else {
                p_533++;
            }
        }
        char real_fun_name_536[2048];
        memset(&real_fun_name_536, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_536,info->come_fun->mName,p_533-info->come_fun->mName);
        real_fun_name_536[p_533-info->come_fun->mName]=0;
        for(        i_537=version_534-1;        i_537>=1;        i_537--        ){
            new_fun_name_538=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_536,i_537));
            if(            (_if_conditional5=(((struct sFun*)(__right_value551=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_538))))),            come_call_finalizer3(__right_value551,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional5) {
                __dec_obj261=fun_name_420;
                fun_name_420=(char*)come_increment_ref_count(__builtin_string(new_fun_name_538));
                __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_538 = come_decrement_ref_count2(new_fun_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_538 = come_decrement_ref_count2(new_fun_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_537==0) {
            new_fun_name_542=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_536));
            if(            (_if_conditional6=(((struct sFun*)(__right_value554=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_542))))),            come_call_finalizer3(__right_value554,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __dec_obj262=fun_name_420;
                fun_name_420=(char*)come_increment_ref_count(__builtin_string(new_fun_name_542));
                __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            string_operator_equals(fun_name_420,info->come_fun->mName)) {
                err_msg(info,"invalid inherit");
                __result358__ = (_Bool)0;
                new_fun_name_542 = come_decrement_ref_count2(new_fun_name_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result358__;
            }
            new_fun_name_542 = come_decrement_ref_count2(new_fun_name_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_543=128;        i_543>=1;        i_543--        ){
            new_fun_name_544=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_420,i_543));
            if(            (_if_conditional7=(((struct sFun*)(__right_value557=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_544))))),            come_call_finalizer3(__right_value557,sFun_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __dec_obj263=fun_name_420;
                fun_name_420=(char*)come_increment_ref_count(__builtin_string(new_fun_name_544));
                __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_544 = come_decrement_ref_count2(new_fun_name_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_544 = come_decrement_ref_count2(new_fun_name_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    fun_545=map$2charphsFunph_at(info->funcs,fun_name_420,((void*)0));
    if(    fun_545==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_420);
        come_params_546=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1004, "list$1CVALUEph"))));
        i_547=0;
        result_type_548=((void*)0);
        for(        o2_saved_549=(params_421),it_550=list$1tuple2$2charphsNodephph_begin((o2_saved_549));        !list$1tuple2$2charphsNodephph_end((o2_saved_549));        it_550=list$1tuple2$2charphsNodephph_next((o2_saved_549))        ){
            multiple_assign_var5=it_550;
            label_551=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            node_552=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
            Value_553=node_compile(node_552,info);
            if(            !Value_553) {
                __result359__ = (_Bool)0;
                label_551 = come_decrement_ref_count2(label_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_552) { node_552 = come_decrement_ref_count2(node_552, ((struct sNode*)node_552)->finalize, ((struct sNode*)node_552)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_546,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_548,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result359__;
            }
            else {
            }
            come_value_554=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_add(come_params_546,(struct CVALUE*)come_increment_ref_count(come_value_554));
            __dec_obj264=result_type_548;
            result_type_548=(struct sType*)come_increment_ref_count(come_value_554->type);
            come_call_finalizer3(__dec_obj264,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_551 = come_decrement_ref_count2(label_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_552) { node_552 = come_decrement_ref_count2(node_552, ((struct sNode*)node_552)->finalize, ((struct sNode*)node_552)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_554,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_555=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1023, "buffer"))));
        buffer_append_str(buf_555,fun_name_420);
        buffer_append_str(buf_555,"(");
        j_556=0;
        for(        o2_saved_557=(struct list$1CVALUEph*)come_increment_ref_count((come_params_546)),it_558=list$1CVALUEph_begin((o2_saved_557));        !list$1CVALUEph_end((o2_saved_557));        it_558=list$1CVALUEph_next((o2_saved_557))        ){
            buffer_append_str(buf_555,it_558->c_value);
            if(            j_556!=list$1CVALUEph_length(come_params_546)-1) {
                buffer_append_str(buf_555,",");
            }
            j_556++;
        }
        come_call_finalizer3(o2_saved_557,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_555,")");
        come_value_559=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1040, "CVALUE"))));
        __dec_obj265=come_value_559->c_value;
        come_value_559->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_555));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj266=come_value_559->type;
        come_value_559->type=(struct sType*)come_increment_ref_count(result_type_548);
        come_call_finalizer3(__dec_obj266,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_559->var=((void*)0);
        add_come_last_code(info,"%s",come_value_559->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_559));
        __result360__ = (_Bool)1;
        come_call_finalizer3(come_params_546,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_548,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_555,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_559,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result360__;
        come_call_finalizer3(come_params_546,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_548,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_555,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_559,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    result_type_560=(struct sType*)come_increment_ref_count(sType_clone(fun_545->mResultType));
    result_type_560->mStatic=(_Bool)0;
    param_types_561=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1055, "list$1sTypeph"))));
    for(    o2_saved_562=(struct list$1sTypeph*)come_increment_ref_count((fun_545->mParamTypes)),it_563=list$1sTypeph_begin((o2_saved_562));    !list$1sTypeph_end((o2_saved_562));    it_563=list$1sTypeph_next((o2_saved_562))    ){
        it2_564=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value570=sType_clone(it_563))),info->generics_type,info));
        come_call_finalizer3(__right_value570,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sTypeph_push_back(param_types_561,(struct sType*)come_increment_ref_count(sType_clone(it2_564)));
        come_call_finalizer3(it2_564,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_562,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj267=result_type_560;
    result_type_560=(struct sType*)come_increment_ref_count(solve_generics(result_type_560,info->generics_type,info));
    come_call_finalizer3(__dec_obj267,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_params_565=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1063, "list$1CVALUEph"))));
    for(    i_566=0;    i_566<list$1sTypeph_length(fun_545->mParamTypes)-(((method_block_422)?(2):(0)));    i_566++    ){
        list$1CVALUEph_add(come_params_565,((void*)0));
    }
    for(    o2_saved_567=(params_421),it_568=list$1tuple2$2charphsNodephph_begin((o2_saved_567));    !list$1tuple2$2charphsNodephph_end((o2_saved_567));    it_568=list$1tuple2$2charphsNodephph_next((o2_saved_567))    ){
        multiple_assign_var6=it_568;
        label_569=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_570=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        fun_545->mVarArgs||string_operator_equals(fun_name_420,"__builtin_va_start")) {
        }
        else if(        label_569) {
            Value_571=node_compile(node_570,info);
            if(            !Value_571) {
                __result361__ = (_Bool)0;
                label_569 = come_decrement_ref_count2(label_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_570) { node_570 = come_decrement_ref_count2(node_570, ((struct sNode*)node_570)->finalize, ((struct sNode*)node_570)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_561,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_565,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result361__;
            }
            else {
            }
            come_value_572=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            n_573=0;
            for(            o2_saved_574=(struct list$1charph*)come_increment_ref_count((fun_545->mParamNames)),it_577=list$1charph_begin((o2_saved_574));            !list$1charph_end((o2_saved_574));            it_577=list$1charph_next((o2_saved_574))            ){
                if(                string_operator_equals(label_569,it_577)) {
                    break;
                }
                n_573++;
            }
            come_call_finalizer3(o2_saved_574,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            (_if_conditional8=(((struct sType*)(__right_value577=list$1sTypephp_operator_load_element(param_types_561,n_573))))),            come_call_finalizer3(__right_value577,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional8) {
                check_assign_type(((char*)(__right_value580=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value578=string_to_string(fun_name_420))),((char*)(__right_value579=int_to_string(n_573)))))),((struct sType*)come_null_check(((struct sType*)(__right_value581=list$1sTypephp_operator_load_element(param_types_561,n_573))), "05call.c", 1092, 17)),come_value_572->type,come_value_572,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value581,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional9=(((struct sType*)(__right_value582=list$1sTypephp_operator_load_element(param_types_561,n_573)))&&((struct sType*)come_null_check(((struct sType*)(__right_value583=list$1sTypephp_operator_load_element(param_types_561,n_573))), "05call.c", 1094, 18))->mHeap&&come_value_572->type->mHeap)),            come_call_finalizer3(__right_value582,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value583,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value584=list$1sTypephp_operator_load_element(param_types_561,n_573))), "05call.c", 1095, 19)),come_value_572->type,come_value_572,info,(_Bool)1);
                come_call_finalizer3(__right_value584,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_replace(come_params_565,n_573,(struct CVALUE*)come_increment_ref_count(come_value_572));
            come_call_finalizer3(come_value_572,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_569 = come_decrement_ref_count2(label_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_570) { node_570 = come_decrement_ref_count2(node_570, ((struct sNode*)node_570)->finalize, ((struct sNode*)node_570)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    i_585=0;
    for(    o2_saved_586=(params_421),it_587=list$1tuple2$2charphsNodephph_begin((o2_saved_586));    !list$1tuple2$2charphsNodephph_end((o2_saved_586));    it_587=list$1tuple2$2charphsNodephph_next((o2_saved_586))    ){
        multiple_assign_var7=it_587;
        label_588=(char*)come_increment_ref_count(multiple_assign_var7->v1);
        node_589=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
        if(        fun_545->mVarArgs||string_operator_equals(fun_name_420,"__builtin_va_start")) {
            Value_590=node_compile(node_589,info);
            if(            !Value_590) {
                __result370__ = (_Bool)0;
                label_588 = come_decrement_ref_count2(label_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_589) { node_589 = come_decrement_ref_count2(node_589, ((struct sNode*)node_589)->finalize, ((struct sNode*)node_589)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_561,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_565,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result370__;
            }
            else {
            }
            come_value_591=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional10=(((struct CVALUE*)(__right_value586=list$1CVALUEphp_operator_load_element(come_params_565,i_585)))==((void*)0))),                come_call_finalizer3(__right_value586,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    break;
                }
                else {
                    i_585++;
                }
            }
            list$1CVALUEph_replace(come_params_565,i_585,(struct CVALUE*)come_increment_ref_count(come_value_591));
            i_585++;
            come_call_finalizer3(come_value_591,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        label_588) {
        }
        else {
            Value_592=node_compile(node_589,info);
            if(            !Value_592) {
                __result371__ = (_Bool)0;
                label_588 = come_decrement_ref_count2(label_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_589) { node_589 = come_decrement_ref_count2(node_589, ((struct sNode*)node_589)->finalize, ((struct sNode*)node_589)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_561,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_565,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result371__;
            }
            else {
            }
            come_value_593=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional11=(((struct CVALUE*)(__right_value588=list$1CVALUEphp_operator_load_element(come_params_565,i_585)))==((void*)0))),                come_call_finalizer3(__right_value588,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional11) {
                    break;
                }
                else {
                    i_585++;
                }
            }
            if(            (_if_conditional12=(((struct sType*)(__right_value589=list$1sTypephp_operator_load_element(param_types_561,i_585))))),            come_call_finalizer3(__right_value589,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                check_assign_type(((char*)(__right_value592=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value590=string_to_string(fun_name_420))),((char*)(__right_value591=int_to_string(i_585)))))),((struct sType*)come_null_check(((struct sType*)(__right_value593=list$1sTypephp_operator_load_element(param_types_561,i_585))), "05call.c", 1146, 20)),come_value_593->type,come_value_593,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value593,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional13=(((struct sType*)(__right_value594=list$1sTypephp_operator_load_element(param_types_561,i_585)))&&((struct sType*)come_null_check(((struct sType*)(__right_value595=list$1sTypephp_operator_load_element(param_types_561,i_585))), "05call.c", 1148, 21))->mHeap&&come_value_593->type->mHeap)),            come_call_finalizer3(__right_value594,sType_finalize, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value595,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional13) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value596=list$1sTypephp_operator_load_element(param_types_561,i_585))), "05call.c", 1149, 22)),come_value_593->type,come_value_593,info,(_Bool)1);
                come_call_finalizer3(__right_value596,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_replace(come_params_565,i_585,(struct CVALUE*)come_increment_ref_count(come_value_593));
            i_585++;
            come_call_finalizer3(come_value_593,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_588 = come_decrement_ref_count2(label_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_589) { node_589 = come_decrement_ref_count2(node_589, ((struct sNode*)node_589)->finalize, ((struct sNode*)node_589)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while((_Bool)1) {
        if(        (_if_conditional14=(((struct CVALUE*)(__right_value597=list$1CVALUEphp_operator_load_element(come_params_565,i_585)))==((void*)0))),        come_call_finalizer3(__right_value597,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional14) {
            break;
        }
        else {
            i_585++;
        }
    }
    if(    list$1tuple2$2charphsNodephph_length(params_421)<list$1sTypeph_length(fun_545->mParamTypes)) {
        for(        ;        i_585<list$1sTypeph_length(fun_545->mParamTypes)-(((method_block_422)?(2):(0)));        i_585++        ){
            default_param_594=(char*)come_increment_ref_count(string_clone(((char*)(__right_value598=list$1charphp_operator_load_element(fun_545->mParamDefaultParametors,i_585)))));
            __right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_598=((char*)come_null_check(((char*)(__right_value600=list$1charphp_operator_load_element(fun_545->mParamNames,i_585))), "05call.c", 1170, 23));
            __right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            (_if_conditional15=(default_param_594&&string_operator_not_equals(default_param_594,"")&&((struct CVALUE*)(__right_value601=list$1CVALUEphp_operator_load_element(come_params_565,i_585)))==((void*)0))),            come_call_finalizer3(__right_value601,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional15) {
                source_599=(struct buffer*)come_increment_ref_count(info->source);
                p_600=info->p;
                head_601=info->head;
                sline_602=info->sline;
                __dec_obj269=info->source;
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_594));
                come_call_finalizer3(__dec_obj269,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_603=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_604=node_compile(node_603,info);
                if(                !Value_604) {
                    __result374__ = (_Bool)0;
                    come_call_finalizer3(source_599,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_603) { node_603 = come_decrement_ref_count2(node_603, ((struct sNode*)node_603)->finalize, ((struct sNode*)node_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    default_param_594 = come_decrement_ref_count2(default_param_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_561,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_565,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result374__;
                }
                else {
                }
                __dec_obj270=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source_599);
                come_call_finalizer3(__dec_obj270,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=p_600;
                info->head=head_601;
                info->sline=sline_602;
                come_value_605=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional16=(((struct sType*)come_null_check(((struct sType*)(__right_value605=list$1sTypephp_operator_load_element(param_types_561,i_585))), "05call.c", 1194, 24)))),                come_call_finalizer3(__right_value605,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    check_assign_type(((char*)(__right_value608=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value606=string_to_string(fun_name_420))),((char*)(__right_value607=int_to_string(i_585)))))),((struct sType*)come_null_check(((struct sType*)(__right_value609=list$1sTypephp_operator_load_element(param_types_561,i_585))), "05call.c", 1195, 25)),come_value_605->type,come_value_605,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value606 = come_decrement_ref_count2(__right_value606, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value609,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional17=(((struct sType*)come_null_check(((struct sType*)(__right_value610=list$1sTypephp_operator_load_element(param_types_561,i_585))), "05call.c", 1197, 26))&&((struct sType*)come_null_check(((struct sType*)(__right_value611=list$1sTypephp_operator_load_element(param_types_561,i_585))), "05call.c", 1197, 27))->mHeap&&come_value_605->type->mHeap)),                come_call_finalizer3(__right_value610,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value611,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional17) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value612=list$1sTypephp_operator_load_element(param_types_561,i_585))), "05call.c", 1198, 28)),come_value_605->type,come_value_605,info,(_Bool)1);
                    come_call_finalizer3(__right_value612,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_565,i_585,(struct CVALUE*)come_increment_ref_count(come_value_605));
                dec_stack_ptr(1,info);
                come_call_finalizer3(source_599,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_603) { node_603 = come_decrement_ref_count2(node_603, ((struct sNode*)node_603)->finalize, ((struct sNode*)node_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_605,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                (_if_conditional18=(((struct CVALUE*)(__right_value613=list$1CVALUEphp_operator_load_element(come_params_565,i_585)))==((void*)0))),                come_call_finalizer3(__right_value613,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    err_msg(info,"require parametor(%s)(1) %d",fun_545->mName,i_585);
                    __result375__ = (_Bool)0;
                    default_param_594 = come_decrement_ref_count2(default_param_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_561,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_565,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result375__;
                }
            }
            default_param_594 = come_decrement_ref_count2(default_param_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    list$1sTypeph_length(fun_545->mParamTypes)-(((method_block_422)?(2):(0)))!=list$1CVALUEph_length(come_params_565)&&!fun_545->mVarArgs&&string_operator_not_equals(fun_name_420,"__builtin_va_start")&&string_operator_not_equals(fun_name_420,"__builtin_va_end")) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_420,list$1sTypeph_length(fun_545->mParamTypes),list$1tuple2$2charphsNodephph_length(params_421));
        __result376__ = (_Bool)0;
        fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_561,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_565,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result376__;
    }
    if(    method_block_422) {
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1219, "struct sNode");
        _inf_obj_value1=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value615=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1219, "sCurrentNode2")),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCurrentNode2_finalize;
        _inf_value1->clone=(void*)sCurrentNode2_clone;
        _inf_value1->compile=(void*)sCurrentNode2_compile;
        _inf_value1->sline=(void*)sCurrentNode2_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sCurrentNode2_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_606=(struct sNode*)come_increment_ref_count(_inf_value1);
        come_call_finalizer3(__right_value615,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
        Value_608=node_compile(current_stack_frame_node_606,info);
        if(        !Value_608) {
            __result379__ = (_Bool)0;
            if(current_stack_frame_node_606) { current_stack_frame_node_606 = come_decrement_ref_count2(current_stack_frame_node_606, ((struct sNode*)current_stack_frame_node_606)->finalize, ((struct sNode*)current_stack_frame_node_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_561,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_565,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result379__;
        }
        else {
        }
        come_value_609=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUEph_push_back(come_params_565,(struct CVALUE*)come_increment_ref_count(come_value_609));
        dec_stack_ptr(1,info);
        method_block2_610=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1229, "buffer"))));
        method_block_type_611=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value622=list$1sTypephp_operator_load_element(fun_545->mParamTypes,-1))), "05call.c", 1230, 29))));
        come_call_finalizer3(__right_value622,sType_finalize, 0, 1, 0, 0, (void*)0);
        class_name_612=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)come_null_check(((struct sType*)(__right_value625=list$1sTypephp_operator_load_element(method_block_type_611->mParamTypes,0))), "05call.c", 1234, 30))->mClass=((struct sClass*)(__right_value626=map$2charphsClassphp_operator_load_element(info->classes,class_name_612)));
        come_call_finalizer3(__right_value625,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value626,sClass_finalize, 0, 1, 0, 0, (void*)0);
        current_stack_frame_struct_616=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)(__right_value627=map$2charphsClassphp_operator_load_element(info->classes,class_name_612)));
        come_call_finalizer3(__right_value627,sClass_finalize, 0, 1, 0, 0, (void*)0);
        info->num_method_block++;
        if(        string_operator_not_equals(method_block_type_611->mClass->mName,"lambda")) {
            err_msg(info,"This function does not have method block(%s)",fun_name_420);
            __result384__ = (_Bool)0;
            if(current_stack_frame_node_606) { current_stack_frame_node_606 = come_decrement_ref_count2(current_stack_frame_node_606, ((struct sNode*)current_stack_frame_node_606)->finalize, ((struct sNode*)current_stack_frame_node_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_609,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_610,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_611,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_612 = come_decrement_ref_count2(class_name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_561,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_565,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result384__;
        }
        result_type_617=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_611->mResultType->v1));
        result_type_617->mStatic=(_Bool)0;
        param_types_618=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(method_block_type_611->mParamTypes));
        param_names_619=method_block_type_611->mParamNames;
        all_alhabet_sname_620=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1250, "buffer"))));
        {
            p_621=info->sname;
            while(*p_621) {
                if(                xisalnum(*p_621)) {
                    buffer_append_char(all_alhabet_sname_620,*p_621++);
                }
                else {
                    p_621++;
                }
            }
        }
        buffer_append_format(method_block2_610,"%s fun_block%d_%s(",((char*)(__right_value632=make_type_name_string(result_type_617,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value633=buffer_to_string(all_alhabet_sname_620))));
        __right_value632 = come_decrement_ref_count2(__right_value632, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value633 = come_decrement_ref_count2(__right_value633, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        i_585=0;
        for(        o2_saved_622=(struct list$1sTypeph*)come_increment_ref_count((param_types_618)),it_623=list$1sTypeph_begin((o2_saved_622));        !list$1sTypeph_end((o2_saved_622));        it_623=list$1sTypeph_next((o2_saved_622))        ){
            param_type_624=it_623;
            if(            i_585==0) {
                param_name_625=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_610,"%s",((char*)(__right_value635=make_define_var(param_type_624,param_name_625,(_Bool)0,info))));
                __right_value635 = come_decrement_ref_count2(__right_value635, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_625 = come_decrement_ref_count2(param_name_625, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            i_585==1) {
                param_name_626=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_610,"%s",((char*)(__right_value637=make_define_var_no_solved(param_type_624,param_name_626,(_Bool)0,(_Bool)1,info))));
                __right_value637 = come_decrement_ref_count2(__right_value637, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_626 = come_decrement_ref_count2(param_name_626, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                param_name_627=(char*)come_increment_ref_count(xsprintf("it%d",i_585));
                buffer_append_format(method_block2_610,"%s",((char*)(__right_value639=make_define_var_no_solved(param_type_624,param_name_627,(_Bool)0,(_Bool)1,info))));
                __right_value639 = come_decrement_ref_count2(__right_value639, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_627 = come_decrement_ref_count2(param_name_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            i_585!=list$1sTypeph_length(param_types_618)-1) {
                buffer_append_str(method_block2_610,",");
            }
            i_585++;
        }
        come_call_finalizer3(o2_saved_622,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(method_block2_610,")\n");
        buffer_append_str(method_block2_610,((char*)(__right_value640=buffer_to_string(method_block_422))));
        __right_value640 = come_decrement_ref_count2(__right_value640, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        source3_628=(struct buffer*)come_increment_ref_count(info->source);
        p_629=info->p;
        head_630=info->head;
        sline_631=info->sline;
        __dec_obj273=info->source;
        info->source=(struct buffer*)come_increment_ref_count(method_block2_610);
        come_call_finalizer3(__dec_obj273,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_423;
        node_632=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_633=node_compile(node_632,info);
        if(        !Value_633) {
            __result385__ = (_Bool)0;
            if(current_stack_frame_node_606) { current_stack_frame_node_606 = come_decrement_ref_count2(current_stack_frame_node_606, ((struct sNode*)current_stack_frame_node_606)->finalize, ((struct sNode*)current_stack_frame_node_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_609,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_610,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_611,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_612 = come_decrement_ref_count2(class_name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_617,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_618,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_620,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_628,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_632) { node_632 = come_decrement_ref_count2(node_632, ((struct sNode*)node_632)->finalize, ((struct sNode*)node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_561,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_565,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result385__;
        }
        else {
        }
        method_block_name_634=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value642=buffer_to_string(all_alhabet_sname_620)))));
        __right_value642 = come_decrement_ref_count2(__right_value642, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_635=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1315, "CVALUE"))));
        fun2_636=map$2charphsFunph_at(info->funcs,method_block_name_634,((void*)0));
        if(        fun2_636==((void*)0)) {
            err_msg(info,"method block function not found(%s)",method_block_name_634);
            __result386__ = (_Bool)1;
            if(current_stack_frame_node_606) { current_stack_frame_node_606 = come_decrement_ref_count2(current_stack_frame_node_606, ((struct sNode*)current_stack_frame_node_606)->finalize, ((struct sNode*)current_stack_frame_node_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_609,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_610,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_611,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_612 = come_decrement_ref_count2(class_name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_617,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_618,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_620,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_628,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_632) { node_632 = come_decrement_ref_count2(node_632, ((struct sNode*)node_632)->finalize, ((struct sNode*)node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_634 = come_decrement_ref_count2(method_block_name_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_635,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_561,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_565,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result386__;
        }
        method_block_type2_637=fun2_636->mLambdaType;
        __dec_obj274=come_value2_635->c_value;
        come_value2_635->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_634));
        __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj275=come_value2_635->type;
        come_value2_635->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_637));
        come_call_finalizer3(__dec_obj275,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_635->var=((void*)0);
        list$1CVALUEph_push_back(come_params_565,(struct CVALUE*)come_increment_ref_count(come_value2_635));
        __dec_obj276=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_628);
        come_call_finalizer3(__dec_obj276,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_629;
        info->head=head_630;
        info->sline=sline_631;
        info->current_stack_frame_struct=current_stack_frame_struct_616;
        if(current_stack_frame_node_606) { current_stack_frame_node_606 = come_decrement_ref_count2(current_stack_frame_node_606, ((struct sNode*)current_stack_frame_node_606)->finalize, ((struct sNode*)current_stack_frame_node_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_609,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_610,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_611,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_612 = come_decrement_ref_count2(class_name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_617,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_618,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_620,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_628,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_632) { node_632 = come_decrement_ref_count2(node_632, ((struct sNode*)node_632)->finalize, ((struct sNode*)node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_634 = come_decrement_ref_count2(method_block_name_634, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_635,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_638=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1340, "buffer"))));
    buffer_append_str(buf_638,fun_name_420);
    buffer_append_str(buf_638,"(");
    j_639=0;
    for(    o2_saved_640=(struct list$1CVALUEph*)come_increment_ref_count((come_params_565)),it_641=list$1CVALUEph_begin((o2_saved_640));    !list$1CVALUEph_end((o2_saved_640));    it_641=list$1CVALUEph_next((o2_saved_640))    ){
        buffer_append_str(buf_638,it_641->c_value);
        if(        j_639!=list$1CVALUEph_length(come_params_565)-1) {
            buffer_append_str(buf_638,",");
        }
        j_639++;
    }
    come_call_finalizer3(o2_saved_640,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_638,")");
    come_value_642=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1357, "CVALUE"))));
    __dec_obj277=come_value_642->c_value;
    come_value_642->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_638));
    __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj278=come_value_642->type;
    come_value_642->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_560));
    come_call_finalizer3(__dec_obj278,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_642->type->mStatic=(_Bool)0;
    come_value_642->var=((void*)0);
    if(    fun_545->mResultType->mHeap) {
        append_object_to_right_values2(come_value_642,(struct sType*)come_increment_ref_count(result_type_560),info,(_Bool)0);
    }
    if(    string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free")) {
        if(        string_operator_not_equals(fun_name_420,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_420,"null_check")&&string_operator_not_equals(fun_name_420,"come_push_stackframe")&&string_operator_not_equals(fun_name_420,"come_pop_stackframe")) {
            __dec_obj279=come_value_642->c_value;
            come_value_642->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_642->c_value,come_value_642->type,info));
            __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    !self->guard_break&&result_type_560->mGuardValue&&result_type_560->mPointerNum>0) {
        __dec_obj280=come_value_642->c_value;
        come_value_642->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value655=make_type_name_string(result_type_560,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_642->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value655 = come_decrement_ref_count2(__right_value655, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    add_come_last_code(info,"%s",come_value_642->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_642));
    info->calling_fun=fun_545;
    __result387__ = (_Bool)1;
    fun_name_420 = come_decrement_ref_count2(fun_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_561,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_565,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_638,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_642,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result387__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result303__;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_412;
struct list_item$1tuple2$2charphsNodephph* it_413;
void* __right_value412 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result308__;
    if(    self==((void*)0)) {
        __result303__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    result_412=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1058, "list$1tuple2$2charphsNodephph"))));
    it_413=self->head;
    while(it_413!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_412,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_413->item)));
        it_413=it_413->next;
    }
    __result308__ = gComeFunResultObject = __result_obj__ = result_412;
    come_call_finalizer3(result_412,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result304__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_410;
struct list_item$1tuple2$2charphsNodephph* prev_it_411;
    it_410=self->head;
    while(it_410!=((void*)0)) {
        prev_it_411=it_410;
        it_410=it_410->next;
        come_call_finalizer3(prev_it_411,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj167;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj167=self->item;
            come_call_finalizer3(__dec_obj167,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value406 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_414;
struct tuple2$2charphsNodeph* __dec_obj170;
void* __right_value407 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_415;
struct tuple2$2charphsNodeph* __dec_obj173;
void* __right_value408 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_416;
struct tuple2$2charphsNodeph* __dec_obj176;
struct list$1tuple2$2charphsNodephph* __result305__;
    if(    self->len==0) {
        litem_414=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value406=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1072, "list_item$1tuple2$2charphsNodephph"))));
        litem_414->prev=((void*)0);
        litem_414->next=((void*)0);
        __dec_obj170=litem_414->item;
        litem_414->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj170,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_414;
        self->head=litem_414;
    }
    else if(    self->len==1) {
        litem_415=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value407=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1082, "list_item$1tuple2$2charphsNodephph"))));
        litem_415->prev=self->head;
        litem_415->next=((void*)0);
        __dec_obj173=litem_415->item;
        litem_415->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj173,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_415;
        self->head->next=litem_415;
    }
    else {
        litem_416=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value408=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1092, "list_item$1tuple2$2charphsNodephph"))));
        litem_416->prev=self->tail;
        litem_416->next=((void*)0);
        __dec_obj176=litem_416->item;
        litem_416->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj176,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_416;
        self->tail=litem_416;
    }
    self->len++;
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj177;
struct sNode* __dec_obj178;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj177=self->v1;
            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj178=self->v2;
            if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result306__;
void* __right_value409 = (void*)0;
struct tuple2$2charphsNodeph* result_417;
void* __right_value410 = (void*)0;
char* __dec_obj179;
void* __right_value411 = (void*)0;
struct sNode* __dec_obj180;
struct tuple2$2charphsNodeph* __result307__;
    if(    self==(void*)0) {
        __result306__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    result_417=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj179=result_417->v1;
        result_417->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj180=result_417->v2;
        result_417->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result307__ = gComeFunResultObject = __result_obj__ = result_417;
    come_call_finalizer3(result_417,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj181;
struct sNode* __dec_obj182;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj181=self->v1;
            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj182=self->v2;
            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_418;
struct list_item$1tuple2$2charphsNodephph* prev_it_419;
    it_418=self->head;
    while(it_418!=((void*)0)) {
        prev_it_419=it_418;
        it_418=it_418->next;
        come_call_finalizer3(prev_it_419,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result312__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_428;
struct list_item$1CVALUEph* prev_it_429;
    it_428=self->head;
    while(it_428!=((void*)0)) {
        prev_it_429=it_428;
        it_428=it_428->next;
        come_call_finalizer3(prev_it_429,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj191;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj191=self->item;
            come_call_finalizer3(__dec_obj191,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_432;
struct tuple2$2charphsNodeph* __result314__;
struct tuple2$2charphsNodeph* __result315__;
struct tuple2$2charphsNodeph* result_433;
struct tuple2$2charphsNodeph* __result316__;
result_432 = (void*)0;
result_433 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_432,0,sizeof(struct tuple2$2charphsNodeph*));
        __result314__ = gComeFunResultObject = __result_obj__ = result_432;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    self->it=self->head;
    if(    self->it) {
        __result315__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    memset(&result_433,0,sizeof(struct tuple2$2charphsNodeph*));
    __result316__ = gComeFunResultObject = __result_obj__ = result_433;
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_435;
struct tuple2$2charphsNodeph* __result317__;
struct tuple2$2charphsNodeph* __result318__;
struct tuple2$2charphsNodeph* result_436;
struct tuple2$2charphsNodeph* __result319__;
result_435 = (void*)0;
result_436 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_435,0,sizeof(struct tuple2$2charphsNodeph*));
        __result317__ = gComeFunResultObject = __result_obj__ = result_435;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result318__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    memset(&result_436,0,sizeof(struct tuple2$2charphsNodeph*));
    __result319__ = gComeFunResultObject = __result_obj__ = result_436;
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_441;
int i_442;
struct sType* __result321__;
struct sType* default_value_443;
struct sType* __result322__;
default_value_443 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_441=self->head;
    i_442=0;
    while(it_441!=((void*)0)) {
        if(        position==i_442) {
            __result321__ = gComeFunResultObject = __result_obj__ = it_441->item;
            gComeFunResultObject = (void*)0;
            return __result321__;
        }
        it_441=it_441->next;
        i_442++;
    }
    memset(&default_value_443,0,sizeof(struct sType*));
    __result322__ = gComeFunResultObject = __result_obj__ = default_value_443;
    come_call_finalizer3(default_value_443,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_447;
struct CVALUE* __result323__;
struct CVALUE* __result324__;
struct CVALUE* result_448;
struct CVALUE* __result325__;
result_447 = (void*)0;
result_448 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_447,0,sizeof(struct CVALUE*));
        __result323__ = gComeFunResultObject = __result_obj__ = result_447;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    self->it=self->head;
    if(    self->it) {
        __result324__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    memset(&result_448,0,sizeof(struct CVALUE*));
    __result325__ = gComeFunResultObject = __result_obj__ = result_448;
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_450;
struct CVALUE* __result326__;
struct CVALUE* __result327__;
struct CVALUE* result_451;
struct CVALUE* __result328__;
result_450 = (void*)0;
result_451 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_450,0,sizeof(struct CVALUE*));
        __result326__ = gComeFunResultObject = __result_obj__ = result_450;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result327__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    memset(&result_451,0,sizeof(struct CVALUE*));
    __result328__ = gComeFunResultObject = __result_obj__ = result_451;
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_458;
unsigned int it_459;
struct sFun* __result330__;
struct sFun* __result331__;
struct sFun* __result332__;
struct sFun* __result333__;
    hash_458=charp_get_hash_key(((char*)key))%self->size;
    it_459=hash_458;
    while((_Bool)1) {
        if(        self->item_existance[it_459]) {
            if(            charp_equals(self->keys[it_459],key)) {
                __result330__ = gComeFunResultObject = __result_obj__ = self->items[it_459];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result330__;
            }
            it_459++;
            if(            it_459>=self->size) {
                it_459=0;
            }
            else if(            it_459==hash_458) {
                __result331__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result331__;
            }
        }
        else {
            __result332__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result332__;
        }
    }
    __result333__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj194;
struct sType* __dec_obj195;
struct list$1sTypeph* __dec_obj196;
struct list$1charph* __dec_obj197;
struct list$1charph* __dec_obj198;
struct sType* __dec_obj199;
struct sBlock* __dec_obj200;
struct buffer* __dec_obj203;
struct buffer* __dec_obj204;
struct buffer* __dec_obj205;
struct buffer* __dec_obj206;
char* __dec_obj207;
char* __dec_obj208;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj194=self->mName;
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj195=self->mResultType;
            come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj196=self->mParamTypes;
            come_call_finalizer3(__dec_obj196,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj197=self->mParamNames;
            come_call_finalizer3(__dec_obj197,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj198=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj198,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj199=self->mLambdaType;
            come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj200=self->mBlock;
            come_call_finalizer3(__dec_obj200,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj203=self->mSource;
            come_call_finalizer3(__dec_obj203,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj204=self->mSourceHead;
            come_call_finalizer3(__dec_obj204,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj205=self->mSourceHead2;
            come_call_finalizer3(__dec_obj205,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj206=self->mSourceDefer;
            come_call_finalizer3(__dec_obj206,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj207=self->mComeHeader;
            __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj208=self->mDeclareSName;
            __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj201;
struct sVarTable* __dec_obj202;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj201=self->mNodes;
            come_call_finalizer3(__dec_obj201,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj202=self->mVarTable;
            come_call_finalizer3(__dec_obj202,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_464;
int i_465;
struct CVALUE* __result335__;
struct CVALUE* default_value_466;
struct CVALUE* __result336__;
default_value_466 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_464=self->head;
    i_465=0;
    while(it_464!=((void*)0)) {
        if(        position==i_465) {
            __result335__ = gComeFunResultObject = __result_obj__ = it_464->item;
            gComeFunResultObject = (void*)0;
            return __result335__;
        }
        it_464=it_464->next;
        i_465++;
    }
    memset(&default_value_466,0,sizeof(struct CVALUE*));
    __result336__ = gComeFunResultObject = __result_obj__ = default_value_466;
    come_call_finalizer3(default_value_466,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
struct sType* __result340__;
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    __result340__ = gComeFunResultObject = __result_obj__ = item;
    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_472;
int i_473;
struct sType* default_value_474;
struct list$1sTypeph* __result338__;
struct list_item$1sTypeph* it_478;
int i_479;
struct sType* __dec_obj212;
struct list$1sTypeph* __result339__;
default_value_474 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_472=self->len;
        for(        i_473=0;        i_473<position-len_472;        i_473++        ){
            memset(&default_value_474,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_474));
            come_call_finalizer3(default_value_474,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result338__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    it_478=self->head;
    i_479=0;
    while(it_478!=((void*)0)) {
        if(        position==i_479) {
            __dec_obj212=it_478->item;
            it_478->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_478=it_478->next;
        i_479++;
    }
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value442 = (void*)0;
struct list_item$1sTypeph* litem_475;
struct sType* __dec_obj209;
void* __right_value443 = (void*)0;
struct list_item$1sTypeph* litem_476;
struct sType* __dec_obj210;
void* __right_value444 = (void*)0;
struct list_item$1sTypeph* litem_477;
struct sType* __dec_obj211;
struct list$1sTypeph* __result337__;
    if(    self->len==0) {
        litem_475=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value442=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1sTypeph"))));
        litem_475->prev=((void*)0);
        litem_475->next=((void*)0);
        __dec_obj209=litem_475->item;
        litem_475->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_475;
        self->head=litem_475;
    }
    else if(    self->len==1) {
        litem_476=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value443=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1sTypeph"))));
        litem_476->prev=self->head;
        litem_476->next=((void*)0);
        __dec_obj210=litem_476->item;
        litem_476->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_476;
        self->head->next=litem_476;
    }
    else {
        litem_477=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value444=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1sTypeph"))));
        litem_477->prev=self->tail;
        litem_477->next=((void*)0);
        __dec_obj211=litem_477->item;
        litem_477->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj211,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_477;
        self->tail=litem_477;
    }
    self->len++;
    __result337__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_482;
struct sType* __result341__;
struct sType* __result342__;
struct sType* result_483;
struct sType* __result343__;
result_482 = (void*)0;
result_483 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_482,0,sizeof(struct sType*));
        __result341__ = gComeFunResultObject = __result_obj__ = result_482;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    self->it=self->head;
    if(    self->it) {
        __result342__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    memset(&result_483,0,sizeof(struct sType*));
    __result343__ = gComeFunResultObject = __result_obj__ = result_483;
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_485;
struct sType* __result344__;
struct sType* __result345__;
struct sType* result_486;
struct sType* __result346__;
result_485 = (void*)0;
result_486 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_485,0,sizeof(struct sType*));
        __result344__ = gComeFunResultObject = __result_obj__ = result_485;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result345__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    memset(&result_486,0,sizeof(struct sType*));
    __result346__ = gComeFunResultObject = __result_obj__ = result_486;
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value450 = (void*)0;
struct list_item$1CVALUEph* litem_497;
struct CVALUE* __dec_obj213;
void* __right_value451 = (void*)0;
struct list_item$1CVALUEph* litem_498;
struct CVALUE* __dec_obj214;
void* __right_value452 = (void*)0;
struct list_item$1CVALUEph* litem_499;
struct CVALUE* __dec_obj215;
struct list$1CVALUEph* __result348__;
    if(    self->len==0) {
        litem_497=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value450=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1072, "list_item$1CVALUEph"))));
        litem_497->prev=((void*)0);
        litem_497->next=((void*)0);
        __dec_obj213=litem_497->item;
        litem_497->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_497;
        self->head=litem_497;
    }
    else if(    self->len==1) {
        litem_498=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value451=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1082, "list_item$1CVALUEph"))));
        litem_498->prev=self->head;
        litem_498->next=((void*)0);
        __dec_obj214=litem_498->item;
        litem_498->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_498;
        self->head->next=litem_498;
    }
    else {
        litem_499=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value452=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1092, "list_item$1CVALUEph"))));
        litem_499->prev=self->tail;
        litem_499->next=((void*)0);
        __dec_obj215=litem_499->item;
        litem_499->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj215,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_499;
        self->tail=litem_499;
    }
    self->len++;
    __result348__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_505;
unsigned int it_506;
struct map$2charphsFunph* __result349__;
    hash_505=charp_get_hash_key(((char*)key))%self->size;
    it_506=hash_505;
    while((_Bool)1) {
        if(        self->item_existance[it_506]) {
            if(            charp_equals(self->keys[it_506],key)) {
                list$1charp_remove(self->key_list,self->keys[it_506]);
                self->item_existance[it_506]=(_Bool)0;
                if(                1) {
                    self->keys[it_506] = come_decrement_ref_count2(self->keys[it_506], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_506]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_506],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_506]=((void*)0);
                self->len--;
                break;
            }
            it_506++;
            if(            it_506>=self->size) {
                it_506=0;
            }
            else if(            it_506==hash_505) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result349__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_539;
unsigned int hash_540;
unsigned int it_541;
struct sFun* __result354__;
struct sFun* __result355__;
struct sFun* __result356__;
struct sFun* __result357__;
default_value_539 = (void*)0;
    memset(&default_value_539,0,sizeof(struct sFun*));
    hash_540=charp_get_hash_key(((char*)key))%self->size;
    it_541=hash_540;
    while((_Bool)1) {
        if(        self->item_existance[it_541]) {
            if(            charp_equals(self->keys[it_541],key)) {
                __result354__ = gComeFunResultObject = __result_obj__ = self->items[it_541];
                come_call_finalizer3(default_value_539,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result354__;
            }
            it_541++;
            if(            it_541>=self->size) {
                it_541=0;
            }
            else if(            it_541==hash_540) {
                __result355__ = gComeFunResultObject = __result_obj__ = default_value_539;
                come_call_finalizer3(default_value_539,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result355__;
            }
        }
        else {
            __result356__ = gComeFunResultObject = __result_obj__ = default_value_539;
            come_call_finalizer3(default_value_539,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result356__;
        }
    }
    __result357__ = gComeFunResultObject = __result_obj__ = default_value_539;
    come_call_finalizer3(default_value_539,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_575;
char* __result362__;
char* __result363__;
char* result_576;
char* __result364__;
result_575 = (void*)0;
result_576 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_575,0,sizeof(char*));
        __result362__ = gComeFunResultObject = __result_obj__ = result_575;
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    self->it=self->head;
    if(    self->it) {
        __result363__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    memset(&result_576,0,sizeof(char*));
    __result364__ = gComeFunResultObject = __result_obj__ = result_576;
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_578;
char* __result365__;
char* __result366__;
char* result_579;
char* __result367__;
result_578 = (void*)0;
result_579 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_578,0,sizeof(char*));
        __result365__ = gComeFunResultObject = __result_obj__ = result_578;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result366__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    memset(&result_579,0,sizeof(char*));
    __result367__ = gComeFunResultObject = __result_obj__ = result_579;
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_580;
int i_581;
struct CVALUE* default_value_582;
struct list$1CVALUEph* __result368__;
struct list_item$1CVALUEph* it_583;
int i_584;
struct CVALUE* __dec_obj268;
struct list$1CVALUEph* __result369__;
default_value_582 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_580=self->len;
        for(        i_581=0;        i_581<position-len_580;        i_581++        ){
            memset(&default_value_582,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_582));
            come_call_finalizer3(default_value_582,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result368__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    it_583=self->head;
    i_584=0;
    while(it_583!=((void*)0)) {
        if(        position==i_584) {
            __dec_obj268=it_583->item;
            it_583->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj268,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_583=it_583->next;
        i_584++;
    }
    __result369__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_595;
int i_596;
char* __result372__;
char* default_value_597;
char* __result373__;
default_value_597 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_595=self->head;
    i_596=0;
    while(it_595!=((void*)0)) {
        if(        position==i_596) {
            __result372__ = gComeFunResultObject = __result_obj__ = it_595->item;
            gComeFunResultObject = (void*)0;
            return __result372__;
        }
        it_595=it_595->next;
        i_596++;
    }
    memset(&default_value_597,0,sizeof(char*));
    __result373__ = gComeFunResultObject = __result_obj__ = default_value_597;
    default_value_597 = come_decrement_ref_count2(default_value_597, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_613;
unsigned int hash_614;
unsigned int it_615;
struct sClass* __result380__;
struct sClass* __result381__;
struct sClass* __result382__;
struct sClass* __result383__;
default_value_613 = (void*)0;
    memset(&default_value_613,0,sizeof(struct sClass*));
    hash_614=charp_get_hash_key(((char*)key))%self->size;
    it_615=hash_614;
    while((_Bool)1) {
        if(        self->item_existance[it_615]) {
            if(            charp_equals(self->keys[it_615],key)) {
                __result380__ = gComeFunResultObject = __result_obj__ = self->items[it_615];
                come_call_finalizer3(default_value_613,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result380__;
            }
            it_615++;
            if(            it_615>=self->size) {
                it_615=0;
            }
            else if(            it_615==hash_614) {
                __result381__ = gComeFunResultObject = __result_obj__ = default_value_613;
                come_call_finalizer3(default_value_613,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result381__;
            }
        }
        else {
            __result382__ = gComeFunResultObject = __result_obj__ = default_value_613;
            come_call_finalizer3(default_value_613,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result382__;
        }
    }
    __result383__ = gComeFunResultObject = __result_obj__ = default_value_613;
    come_call_finalizer3(default_value_613,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value657 = (void*)0;
struct buffer* __dec_obj281;
struct sComeCallNode* __result388__;
    ((struct sNodeBase*)(__right_value657=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value657,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj281=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj281,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->come_block_sline=come_block_sline;
    __result388__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value658 = (void*)0;
char* __result389__;
    __result389__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value658=__builtin_string("sComeCallNode")));
    __right_value658 = come_decrement_ref_count2(__right_value658, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_643;
struct buffer* come_block_644;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct list$1CVALUEph* come_params_645;
void* __right_value661 = (void*)0;
char* var_name_647;
void* __right_value662 = (void*)0;
struct sType* type__648;
_Bool __result394__;
void* __right_value663 = (void*)0;
struct sNode* var_node_651;
_Bool Value_652;
_Bool __result395__;
void* __right_value664 = (void*)0;
struct CVALUE* thread_var_value_653;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct CVALUE* come_value_654;
void* __right_value667 = (void*)0;
char* __dec_obj284;
struct sType* __dec_obj285;
void* __right_value668 = (void*)0;
struct sNode* null_node_655;
_Bool Value_656;
_Bool __result396__;
void* __right_value669 = (void*)0;
struct CVALUE* __dec_obj286;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode2* _inf_obj_value2;
void* __right_value674 = (void*)0;
struct sNode* current_stack_frame_node_657;
_Bool Value_659;
_Bool __result399__;
void* __right_value675 = (void*)0;
struct CVALUE* current_stack_frame_value_660;
void* __right_value676 = (void*)0;
char* fun_name_661;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct buffer* come_block2_662;
void* __right_value679 = (void*)0;
char* class_name_663;
void* __right_value680 = (void*)0;
struct sClass* current_stack_frame_struct_664;
void* __right_value681 = (void*)0;
struct buffer* source3_665;
char* p_666;
char* head_667;
int sline_668;
struct buffer* __dec_obj289;
void* __right_value682 = (void*)0;
struct sNode* node_669;
_Bool Value_670;
_Bool __result400__;
struct buffer* __dec_obj290;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct CVALUE* fun_value_671;
void* __right_value685 = (void*)0;
char* __dec_obj291;
struct sType* __dec_obj292;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct buffer* buf_672;
void* __right_value688 = (void*)0;
char* fun_name_673;
int j_674;
struct list$1CVALUEph* o2_saved_675;
struct CVALUE* it_676;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct CVALUE* come_value_677;
void* __right_value691 = (void*)0;
char* __dec_obj293;
void* __right_value692 = (void*)0;
struct sType* type_678;
_Bool __result401__;
struct sType* __dec_obj294;
_Bool __result402__;
    come_block_sline_643=self->come_block_sline;
    come_block_644=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_645=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1412, "list$1CVALUEph"))));
    static int thread_num_646=0;
    thread_num_646++;
    var_name_647=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_646));
    type__648=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))));
    if(    type__648==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result394__ = (_Bool)0;
        come_call_finalizer3(come_block_644,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_645,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_647 = come_decrement_ref_count2(var_name_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__648,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result394__;
    }
    var_node_651=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_647),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__648),(_Bool)1,((void*)0),info));
    Value_652=node_compile(var_node_651,info);
    if(    !Value_652) {
        __result395__ = (_Bool)0;
        come_call_finalizer3(come_block_644,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_645,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_647 = come_decrement_ref_count2(var_name_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__648,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_651) { var_node_651 = come_decrement_ref_count2(var_node_651, ((struct sNode*)var_node_651)->finalize, ((struct sNode*)var_node_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result395__;
    }
    else {
    }
    thread_var_value_653=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_654=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1435, "CVALUE"))));
    __dec_obj284=come_value_654->c_value;
    come_value_654->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_653->c_value));
    __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj285=come_value_654->type;
    come_value_654->type=(struct sType*)come_increment_ref_count(thread_var_value_653->type);
    come_call_finalizer3(__dec_obj285,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_654->var=((void*)0);
    list$1CVALUEph_push_back(come_params_645,(struct CVALUE*)come_increment_ref_count(come_value_654));
    null_node_655=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_656=node_compile(null_node_655,info);
    if(    !Value_656) {
        __result396__ = (_Bool)0;
        come_call_finalizer3(come_block_644,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_645,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_647 = come_decrement_ref_count2(var_name_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__648,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_651) { var_node_651 = come_decrement_ref_count2(var_node_651, ((struct sNode*)var_node_651)->finalize, ((struct sNode*)var_node_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_653,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_654,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_655) { null_node_655 = come_decrement_ref_count2(null_node_655, ((struct sNode*)null_node_655)->finalize, ((struct sNode*)null_node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result396__;
    }
    else {
    }
    __dec_obj286=come_value_654;
    come_value_654=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj286,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    list$1CVALUEph_push_back(come_params_645,(struct CVALUE*)come_increment_ref_count(come_value_654));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1453, "struct sNode");
    _inf_obj_value2=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value671=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1453, "sCurrentNode2")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode2_finalize;
    _inf_value2->clone=(void*)sCurrentNode2_clone;
    _inf_value2->compile=(void*)sCurrentNode2_compile;
    _inf_value2->sline=(void*)sCurrentNode2_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode2_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_657=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value671,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_659=node_compile(current_stack_frame_node_657,info);
    if(    !Value_659) {
        __result399__ = (_Bool)0;
        come_call_finalizer3(come_block_644,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_645,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_647 = come_decrement_ref_count2(var_name_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__648,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_651) { var_node_651 = come_decrement_ref_count2(var_node_651, ((struct sNode*)var_node_651)->finalize, ((struct sNode*)var_node_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_653,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_654,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_655) { null_node_655 = come_decrement_ref_count2(null_node_655, ((struct sNode*)null_node_655)->finalize, ((struct sNode*)null_node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_657) { current_stack_frame_node_657 = come_decrement_ref_count2(current_stack_frame_node_657, ((struct sNode*)current_stack_frame_node_657)->finalize, ((struct sNode*)current_stack_frame_node_657)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result399__;
    }
    else {
    }
    current_stack_frame_value_660=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    fun_name_661=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_646));
    come_block2_662=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1464, "buffer"))));
    class_name_663=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_662,"void* %s(%s* parent)\n",fun_name_661,class_name_663);
    buffer_append_str(come_block2_662,((char*)(__right_value680=buffer_to_string(come_block_644))));
    __right_value680 = come_decrement_ref_count2(__right_value680, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_664=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value681=map$2charphsClassphp_operator_load_element(info->classes,class_name_663)));
    come_call_finalizer3(__right_value681,sClass_finalize, 0, 1, 0, 0, (void*)0);
    source3_665=(struct buffer*)come_increment_ref_count(info->source);
    p_666=info->p;
    head_667=info->head;
    sline_668=info->sline;
    __dec_obj289=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_662);
    come_call_finalizer3(__dec_obj289,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_643;
    node_669=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_670=node_compile(node_669,info);
    if(    !Value_670) {
        __result400__ = (_Bool)0;
        come_call_finalizer3(come_block_644,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_645,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_647 = come_decrement_ref_count2(var_name_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__648,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_651) { var_node_651 = come_decrement_ref_count2(var_node_651, ((struct sNode*)var_node_651)->finalize, ((struct sNode*)var_node_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_653,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_654,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_655) { null_node_655 = come_decrement_ref_count2(null_node_655, ((struct sNode*)null_node_655)->finalize, ((struct sNode*)null_node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_657) { current_stack_frame_node_657 = come_decrement_ref_count2(current_stack_frame_node_657, ((struct sNode*)current_stack_frame_node_657)->finalize, ((struct sNode*)current_stack_frame_node_657)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_660,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_661 = come_decrement_ref_count2(fun_name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_662,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_663 = come_decrement_ref_count2(class_name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_665,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_669) { node_669 = come_decrement_ref_count2(node_669, ((struct sNode*)node_669)->finalize, ((struct sNode*)node_669)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result400__;
    }
    else {
    }
    __dec_obj290=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_665);
    come_call_finalizer3(__dec_obj290,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_666;
    info->head=head_667;
    info->sline=sline_668;
    info->current_stack_frame_struct=current_stack_frame_struct_664;
    fun_value_671=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1498, "CVALUE"))));
    __dec_obj291=fun_value_671->c_value;
    fun_value_671->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_661));
    __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj292=come_value_654->type;
    come_value_654->type=((void*)0);
    come_call_finalizer3(__dec_obj292,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_654->var=((void*)0);
    list$1CVALUEph_add(come_params_645,(struct CVALUE*)come_increment_ref_count(fun_value_671));
    list$1CVALUEph_add(come_params_645,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_660));
    buf_672=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1508, "buffer"))));
    fun_name_661 = come_decrement_ref_count2(fun_name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_673=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_672,"(");
    buffer_append_str(buf_672,fun_name_673);
    buffer_append_str(buf_672,"(");
    j_674=0;
    for(    o2_saved_675=(struct list$1CVALUEph*)come_increment_ref_count((come_params_645)),it_676=list$1CVALUEph_begin((o2_saved_675));    !list$1CVALUEph_end((o2_saved_675));    it_676=list$1CVALUEph_next((o2_saved_675))    ){
        buffer_append_str(buf_672,it_676->c_value);
        if(        j_674!=list$1CVALUEph_length(come_params_645)-1) {
            buffer_append_str(buf_672,",");
        }
        j_674++;
    }
    come_call_finalizer3(o2_saved_675,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_672,")");
    buffer_append_str(buf_672,", ");
    buffer_append_str(buf_672,thread_var_value_653->c_value);
    buffer_append_str(buf_672,")");
    come_call_finalizer3(come_value_654,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_677=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1531, "CVALUE"))));
    __dec_obj293=come_value_677->c_value;
    come_value_677->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_672));
    __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_678=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypeph_at(info->types,"pthread_t",((void*)0))));
    if(    type_678==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result401__ = (_Bool)0;
        come_call_finalizer3(come_block_644,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_645,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_647 = come_decrement_ref_count2(var_name_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__648,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_651) { var_node_651 = come_decrement_ref_count2(var_node_651, ((struct sNode*)var_node_651)->finalize, ((struct sNode*)var_node_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_653,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_655) { null_node_655 = come_decrement_ref_count2(null_node_655, ((struct sNode*)null_node_655)->finalize, ((struct sNode*)null_node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_657) { current_stack_frame_node_657 = come_decrement_ref_count2(current_stack_frame_node_657, ((struct sNode*)current_stack_frame_node_657)->finalize, ((struct sNode*)current_stack_frame_node_657)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_660,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_662,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_663 = come_decrement_ref_count2(class_name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_665,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_669) { node_669 = come_decrement_ref_count2(node_669, ((struct sNode*)node_669)->finalize, ((struct sNode*)node_669)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(fun_value_671,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_672,buffer_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_673 = come_decrement_ref_count2(fun_name_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_677,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_678,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result401__;
    }
    __dec_obj294=come_value_677->type;
    come_value_677->type=(struct sType*)come_increment_ref_count(type_678);
    come_call_finalizer3(__dec_obj294,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_677->var=((void*)0);
    add_come_last_code(info,"%s",come_value_677->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_677));
    __result402__ = (_Bool)1;
    come_call_finalizer3(come_block_644,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_645,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    var_name_647 = come_decrement_ref_count2(var_name_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type__648,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(var_node_651) { var_node_651 = come_decrement_ref_count2(var_node_651, ((struct sNode*)var_node_651)->finalize, ((struct sNode*)var_node_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(thread_var_value_653,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    if(null_node_655) { null_node_655 = come_decrement_ref_count2(null_node_655, ((struct sNode*)null_node_655)->finalize, ((struct sNode*)null_node_655)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(current_stack_frame_node_657) { current_stack_frame_node_657 = come_decrement_ref_count2(current_stack_frame_node_657, ((struct sNode*)current_stack_frame_node_657)->finalize, ((struct sNode*)current_stack_frame_node_657)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(current_stack_frame_value_660,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_block2_662,buffer_finalize, 0, 0, 0, 0, (void*)0);
    class_name_663 = come_decrement_ref_count2(class_name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_665,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_669) { node_669 = come_decrement_ref_count2(node_669, ((struct sNode*)node_669)->finalize, ((struct sNode*)node_669)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(fun_value_671,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_672,buffer_finalize, 0, 0, 0, 0, (void*)0);
    fun_name_673 = come_decrement_ref_count2(fun_name_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_677,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_678,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result402__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_649;
unsigned int it_650;
struct sType* __result390__;
struct sType* __result391__;
struct sType* __result392__;
struct sType* __result393__;
    hash_649=charp_get_hash_key(((char*)key))%self->size;
    it_650=hash_649;
    while((_Bool)1) {
        if(        self->item_existance[it_650]) {
            if(            charp_equals(self->keys[it_650],key)) {
                __result390__ = gComeFunResultObject = __result_obj__ = self->items[it_650];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result390__;
            }
            it_650++;
            if(            it_650>=self->size) {
                it_650=0;
            }
            else if(            it_650==hash_649) {
                __result391__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result391__;
            }
        }
        else {
            __result392__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result392__;
        }
    }
    __result393__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result393__;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
char* __dec_obj287;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj287=self->sname;
            __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
struct sCurrentNode2* __result397__;
void* __right_value672 = (void*)0;
struct sCurrentNode2* result_658;
void* __right_value673 = (void*)0;
char* __dec_obj288;
struct sCurrentNode2* __result398__;
    if(    self==(void*)0) {
        __result397__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result397__;
    }
    result_658=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "sCurrentNode2"));
    if(    self!=((void*)0)) {
        result_658->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj288=result_658->sname;
        result_658->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_658->sline_real=self->sline_real;
    }
    __result398__ = gComeFunResultObject = __result_obj__ = result_658;
    come_call_finalizer3(result_658,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result398__;
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value693 = (void*)0;
struct sNode* __dec_obj295;
struct sComeJoinNode* __result403__;
    ((struct sNodeBase*)(__right_value693=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value693,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj295=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
    __result403__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result403__;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
void* __right_value694 = (void*)0;
char* __result404__;
    __result404__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value694=__builtin_string("sComeJoinNode")));
    __right_value694 = come_decrement_ref_count2(__right_value694, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result404__;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_679;
_Bool Value_680;
_Bool __result405__;
void* __right_value695 = (void*)0;
struct CVALUE* come_value_681;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct buffer* buf_682;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct CVALUE* come_value_683;
void* __right_value700 = (void*)0;
char* __dec_obj298;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sType* __dec_obj299;
_Bool __result406__;
    node_679=(struct sNode*)come_increment_ref_count(self->node);
    Value_680=node_compile(node_679,info);
    if(    !Value_680) {
        __result405__ = (_Bool)0;
        if(node_679) { node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result405__;
    }
    else {
    }
    come_value_681=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    buf_682=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1579, "buffer"))));
    buffer_append_str(buf_682,"pthread_join(");
    buffer_append_str(buf_682,come_value_681->c_value);
    buffer_append_str(buf_682,", 0)");
    come_call_finalizer3(come_value_681,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_683=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1584, "CVALUE"))));
    __dec_obj298=come_value_683->c_value;
    come_value_683->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_682));
    __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj299=come_value_683->type;
    come_value_683->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1586, "sType")),"void",info,info));
    come_call_finalizer3(__dec_obj299,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_683->var=((void*)0);
    add_come_last_code(info,"%s",come_value_683->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_683));
    __result406__ = (_Bool)1;
    if(node_679) { node_679 = come_decrement_ref_count2(node_679, ((struct sNode*)node_679)->finalize, ((struct sNode*)node_679)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(buf_682,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_683,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result406__;
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value703 = (void*)0;
struct list$1sNodeph* __dec_obj300;
struct list$1sBlockph* __dec_obj301;
struct sBlock* __dec_obj303;
struct sComePollNode* __result407__;
    ((struct sNodeBase*)(__right_value703=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value703,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj300=self->vars;
    self->vars=(struct list$1sNodeph*)come_increment_ref_count(vars);
    come_call_finalizer3(__dec_obj300,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj301=self->blocks;
    self->blocks=(struct list$1sBlockph*)come_increment_ref_count(blocks);
    come_call_finalizer3(__dec_obj301,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj303=self->else_block;
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer3(__dec_obj303,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    self->time_out=time_out;
    __result407__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result407__;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __result_obj__=(void*)0;
void* __right_value704 = (void*)0;
char* __result408__;
    __result408__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value704=__builtin_string("sComePollNode")));
    __right_value704 = come_decrement_ref_count2(__right_value704, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result408__;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNodeph* vars_688;
struct list$1sBlockph* blocks_689;
int time_out_690;
int n_692;
struct list$1sNodeph* o2_saved_693;
struct sNode* it_696;
_Bool Value_699;
_Bool __result415__;
void* __right_value705 = (void*)0;
struct CVALUE* come_value_700;
int n_701;
struct list$1sNodeph* o2_saved_702;
struct sNode* it_703;
void* __right_value706 = (void*)0;
_Bool __result418__;
    vars_688=(struct list$1sNodeph*)come_increment_ref_count(self->vars);
    blocks_689=(struct list$1sBlockph*)come_increment_ref_count(self->blocks);
    time_out_690=self->time_out;
    static int var_num_691=0;
    var_num_691++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_691,list$1sNodeph_length(vars_688));
    n_692=0;
    for(    o2_saved_693=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_696=list$1sNodeph_begin((o2_saved_693));    !list$1sNodeph_end((o2_saved_693));    it_696=list$1sNodeph_next((o2_saved_693))    ){
        Value_699=node_compile(it_696,info);
        if(        !Value_699) {
            __result415__ = (_Bool)0;
            come_call_finalizer3(o2_saved_693,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(vars_688,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_689,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result415__;
        }
        else {
        }
        come_value_700=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_691,n_692,come_value_700->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_691,n_692,1);
        n_692++;
        come_call_finalizer3(come_value_700,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_693,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_691,var_num_691,list$1sNodeph_length(vars_688),time_out_690);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_691);
    n_701=0;
    for(    o2_saved_702=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_703=list$1sNodeph_begin((o2_saved_702));    !list$1sNodeph_end((o2_saved_702));    it_703=list$1sNodeph_next((o2_saved_702))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_691,n_701,1);
        transpile_block(((struct sBlock*)come_null_check(((struct sBlock*)(__right_value706=list$1sBlockphp_operator_load_element(blocks_689,n_701))), "05call.c", 1650, 31)),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer3(__right_value706,sBlock_finalize, 0, 1, 0, 0, (void*)0);
        add_come_code(info,"}\n");
        n_701++;
    }
    come_call_finalizer3(o2_saved_702,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_691);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result418__ = (_Bool)1;
    come_call_finalizer3(vars_688,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks_689,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    return __result418__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_684;
struct list_item$1sBlockph* prev_it_685;
    it_684=self->head;
    while(it_684!=((void*)0)) {
        prev_it_685=it_684;
        it_684=it_684->next;
        come_call_finalizer3(prev_it_685,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj302;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj302=self->item;
            come_call_finalizer3(__dec_obj302,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_686;
struct list_item$1sBlockph* prev_it_687;
    it_686=self->head;
    while(it_686!=((void*)0)) {
        prev_it_687=it_686;
        it_686=it_686->next;
        come_call_finalizer3(prev_it_687,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_694;
struct sNode* __result409__;
struct sNode* __result410__;
struct sNode* result_695;
struct sNode* __result411__;
result_694 = (void*)0;
result_695 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_694,0,sizeof(struct sNode*));
        __result409__ = gComeFunResultObject = __result_obj__ = result_694;
        gComeFunResultObject = (void*)0;
        return __result409__;
    }
    self->it=self->head;
    if(    self->it) {
        __result410__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result410__;
    }
    memset(&result_695,0,sizeof(struct sNode*));
    __result411__ = gComeFunResultObject = __result_obj__ = result_695;
    gComeFunResultObject = (void*)0;
    return __result411__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_697;
struct sNode* __result412__;
struct sNode* __result413__;
struct sNode* result_698;
struct sNode* __result414__;
result_697 = (void*)0;
result_698 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_697,0,sizeof(struct sNode*));
        __result412__ = gComeFunResultObject = __result_obj__ = result_697;
        gComeFunResultObject = (void*)0;
        return __result412__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result413__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result413__;
    }
    memset(&result_698,0,sizeof(struct sNode*));
    __result414__ = gComeFunResultObject = __result_obj__ = result_698;
    gComeFunResultObject = (void*)0;
    return __result414__;
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_704;
int i_705;
struct sBlock* __result416__;
struct sBlock* default_value_706;
struct sBlock* __result417__;
default_value_706 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_704=self->head;
    i_705=0;
    while(it_704!=((void*)0)) {
        if(        position==i_705) {
            __result416__ = gComeFunResultObject = __result_obj__ = it_704->item;
            gComeFunResultObject = (void*)0;
            return __result416__;
        }
        it_704=it_704->next;
        i_705++;
    }
    memset(&default_value_706,0,sizeof(struct sBlock*));
    __result417__ = gComeFunResultObject = __result_obj__ = default_value_706;
    come_call_finalizer3(default_value_706,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result417__;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value715 = (void*)0;
struct sNode* node_707;
void* __right_value716 = (void*)0;
struct sNode* __dec_obj318;
struct sNode* __result421__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1670, "struct sNode");
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value708=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1670, "sFunCallNode")),fun_name,params,guard_break,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_707=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value708,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj318=node_707;
    node_707=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_707),info));
    if(__dec_obj318) { __dec_obj318 = come_decrement_ref_count2(__dec_obj318, ((struct sNode*)__dec_obj318)->finalize, ((struct sNode*)__dec_obj318)->_protocol_obj, 0,0,0, (void*)0); };
    __result421__ = gComeFunResultObject = __result_obj__ = node_707;
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_707) { node_707 = come_decrement_ref_count2(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result421__;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value717 = (void*)0;
struct sNode* __dec_obj319;
void* __right_value718 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj320;
struct sLambdaCall* __result422__;
    ((struct sNodeBase*)(__right_value717=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value717,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj319=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj319) { __dec_obj319 = come_decrement_ref_count2(__dec_obj319, ((struct sNode*)__dec_obj319)->finalize, ((struct sNode*)__dec_obj319)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj320=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj320,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result422__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result422__;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
void* __right_value719 = (void*)0;
char* __result423__;
    __result423__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value719=__builtin_string("sLambdaCall")));
    __right_value719 = come_decrement_ref_count2(__right_value719, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result423__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_709;
struct list$1tuple2$2charphsNodephph* params_710;
_Bool Value_711;
_Bool __result424__;
void* __right_value720 = (void*)0;
struct CVALUE* come_value_712;
struct sType* lambda_type_713;
_Bool __result425__;
void* __right_value721 = (void*)0;
struct sType* result_type_714;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct list$1CVALUEph* come_params_715;
_Bool __result426__;
int i_716;
struct list$1tuple2$2charphsNodephph* o2_saved_717;
struct tuple2$2charphsNodeph* it_718;
struct tuple2$2charphsNodeph* multiple_assign_var8 = (void*)0;
char* label_719=0;
struct sNode* node_720=0;
_Bool Value_721;
_Bool __result427__;
void* __right_value724 = (void*)0;
struct CVALUE* come_value_722;
void* __right_value725 = (void*)0;
_Bool _if_conditional19;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
_Bool _if_conditional20;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct buffer* buf_723;
int j_724;
struct list$1CVALUEph* o2_saved_725;
struct CVALUE* it_726;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct CVALUE* come_value2_727;
void* __right_value735 = (void*)0;
char* __dec_obj324;
void* __right_value736 = (void*)0;
struct sType* __dec_obj325;
_Bool __result428__;
    node_709=(struct sNode*)come_increment_ref_count(self->node);
    params_710=self->params;
    Value_711=node_compile(node_709,info);
    if(    !Value_711) {
        __result424__ = (_Bool)0;
        if(node_709) { node_709 = come_decrement_ref_count2(node_709, ((struct sNode*)node_709)->finalize, ((struct sNode*)node_709)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result424__;
    }
    else {
    }
    come_value_712=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_713=come_value_712->type;
    if(    lambda_type_713->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result425__ = (_Bool)0;
        if(node_709) { node_709 = come_decrement_ref_count2(node_709, ((struct sNode*)node_709)->finalize, ((struct sNode*)node_709)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_712,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result425__;
    }
    result_type_714=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_713->mResultType->v1));
    result_type_714->mStatic=(_Bool)0;
    come_params_715=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1714, "list$1CVALUEph"))));
    if(    list$1sTypeph_length(lambda_type_713->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_710)&&!lambda_type_713->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypeph_length(lambda_type_713->mParamTypes),list$1tuple2$2charphsNodephph_length(params_710));
        __result426__ = (_Bool)0;
        if(node_709) { node_709 = come_decrement_ref_count2(node_709, ((struct sNode*)node_709)->finalize, ((struct sNode*)node_709)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_712,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_715,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result426__;
    }
    i_716=0;
    for(    o2_saved_717=(params_710),it_718=list$1tuple2$2charphsNodephph_begin((o2_saved_717));    !list$1tuple2$2charphsNodephph_end((o2_saved_717));    it_718=list$1tuple2$2charphsNodephph_next((o2_saved_717))    ){
        multiple_assign_var8=it_718;
        label_719=(char*)come_increment_ref_count(multiple_assign_var8->v1);
        node_720=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
        Value_721=node_compile(node_720,info);
        if(        !Value_721) {
            __result427__ = (_Bool)0;
            label_719 = come_decrement_ref_count2(label_719, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_720) { node_720 = come_decrement_ref_count2(node_720, ((struct sNode*)node_720)->finalize, ((struct sNode*)node_720)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_709) { node_709 = come_decrement_ref_count2(node_709, ((struct sNode*)node_709)->finalize, ((struct sNode*)node_709)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_712,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_715,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result427__;
        }
        else {
        }
        come_value_722=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional19=(lambda_type_713->mVarArgs&&((struct sType*)(__right_value725=list$1sTypephp_operator_load_element(lambda_type_713->mParamTypes,i_716)))==((void*)0))),        come_call_finalizer3(__right_value725,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional19) {
        }
        else {
            check_assign_type(((char*)(__right_value727=xsprintf("calling param #\%s",((char*)(__right_value726=int_to_string(i_716)))))),((struct sType*)come_null_check(((struct sType*)(__right_value728=list$1sTypephp_operator_load_element(lambda_type_713->mParamTypes,i_716))), "05call.c", 1733, 32)),come_value_722->type,come_value_722,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value726 = come_decrement_ref_count2(__right_value726, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value727 = come_decrement_ref_count2(__right_value727, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value728,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(            (_if_conditional20=(((struct sType*)come_null_check(((struct sType*)(__right_value729=list$1sTypephp_operator_load_element(lambda_type_713->mParamTypes,i_716))), "05call.c", 1734, 33))->mHeap&&come_value_722->type->mHeap)),            come_call_finalizer3(__right_value729,sType_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional20) {
                std_move(((struct sType*)come_null_check(((struct sType*)(__right_value730=list$1sTypephp_operator_load_element(lambda_type_713->mParamTypes,i_716))), "05call.c", 1735, 34)),come_value_722->type,come_value_722,info,(_Bool)1);
                come_call_finalizer3(__right_value730,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        list$1CVALUEph_push_back(come_params_715,(struct CVALUE*)come_increment_ref_count(come_value_722));
        dec_stack_ptr(1,info);
        i_716++;
        label_719 = come_decrement_ref_count2(label_719, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_720) { node_720 = come_decrement_ref_count2(node_720, ((struct sNode*)node_720)->finalize, ((struct sNode*)node_720)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_722,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_723=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1745, "buffer"))));
    buffer_append_str(buf_723,"(");
    buffer_append_str(buf_723,come_value_712->c_value);
    buffer_append_str(buf_723,")");
    buffer_append_str(buf_723,"(");
    j_724=0;
    for(    o2_saved_725=(struct list$1CVALUEph*)come_increment_ref_count((come_params_715)),it_726=list$1CVALUEph_begin((o2_saved_725));    !list$1CVALUEph_end((o2_saved_725));    it_726=list$1CVALUEph_next((o2_saved_725))    ){
        buffer_append_str(buf_723,it_726->c_value);
        if(        j_724!=list$1CVALUEph_length(come_params_715)-1) {
            buffer_append_str(buf_723,",");
        }
        j_724++;
    }
    come_call_finalizer3(o2_saved_725,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_723,")");
    come_value2_727=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1764, "CVALUE"))));
    __dec_obj324=come_value2_727->c_value;
    come_value2_727->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_723));
    __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_713->mResultType->v1->mHeap) {
        append_object_to_right_values2(come_value2_727,(struct sType*)come_increment_ref_count(lambda_type_713->mResultType->v1),info,(_Bool)0);
    }
    __dec_obj325=come_value2_727->type;
    come_value2_727->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_714));
    come_call_finalizer3(__dec_obj325,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_727->type->mStatic=(_Bool)0;
    come_value2_727->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_727->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_727));
    __result428__ = (_Bool)1;
    if(node_709) { node_709 = come_decrement_ref_count2(node_709, ((struct sNode*)node_709)->finalize, ((struct sNode*)node_709)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_712,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_715,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_723,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_727,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result428__;
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value737 = (void*)0;
struct sType* __dec_obj326;
struct sVarArgTypeName* __result429__;
    ((struct sNodeBase*)(__right_value737=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value737,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj326=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj326,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result429__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result429__;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
void* __right_value738 = (void*)0;
char* __result430__;
    __result430__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value738=__builtin_string("sVarArgTypeName")));
    __right_value738 = come_decrement_ref_count2(__right_value738, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result430__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_728;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct CVALUE* come_value_729;
void* __right_value741 = (void*)0;
char* __dec_obj329;
struct sType* __dec_obj330;
_Bool __result431__;
    type_728=(struct sType*)come_increment_ref_count(self->type);
    come_value_729=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1801, "CVALUE"))));
    __dec_obj329=come_value_729->c_value;
    come_value_729->c_value=(char*)come_increment_ref_count(make_type_name_string(type_728,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj330=come_value_729->type;
    come_value_729->type=(struct sType*)come_increment_ref_count(type_728);
    come_call_finalizer3(__dec_obj330,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_729->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_729));
    __result431__ = (_Bool)1;
    come_call_finalizer3(type_728,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_729,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result431__;
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __result_obj__=(void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct list$1sTypeph* method_generics_types_730;
void* __right_value744 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_731=0;
char* name_732=0;
_Bool err_733=0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_734;
_Bool _va_arg_735;
char* p_736;
int sline_737;
_Bool err_flag_738;
void* __right_value748 = (void*)0;
char* label_739;
void* __right_value749 = (void*)0;
char* __dec_obj333;
char* __dec_obj334;
_Bool no_comma_740;
_Bool in_fun_param_741;
void* __right_value750 = (void*)0;
struct sNode* node_742;
void* __right_value751 = (void*)0;
struct sNode* __dec_obj335;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
_Bool guard_break_746;
struct buffer* method_block_747;
int method_block_sline_748;
char* head_749;
void* __right_value757 = (void*)0;
char* tail_750;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct buffer* __dec_obj341;
int len_751;
void* __right_value760 = (void*)0;
char* mem_752;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value769 = (void*)0;
struct sNode* node_753;
void* __right_value770 = (void*)0;
struct sNode* __dec_obj352;
struct sNode* __result436__;
    method_generics_types_730=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 1815, "list$1sTypeph"))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else if(            *info->p==62) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value744=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_731=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_732=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_733=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value744,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_733) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_730,(struct sType*)come_increment_ref_count(sType_clone(type_731)));
                come_call_finalizer3(type_731,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_732 = come_decrement_ref_count2(name_732, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_734=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1853, "list$1tuple2$2charphsNodephph"))));
    _va_arg_735=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_736=info->p;
        sline_737=info->sline;
        err_flag_738=(_Bool)0;
        label_739=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj333=label_739;
            label_739=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_738=(_Bool)1;
        }
        if(        err_flag_738==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj334=label_739;
            label_739=((void*)0);
            __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_736;
            info->sline=sline_737;
        }
        no_comma_740=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_741=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_742=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj335=node_742;
        node_742=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_742),info));
        if(__dec_obj335) { __dec_obj335 = come_decrement_ref_count2(__dec_obj335, ((struct sNode*)__dec_obj335)->finalize, ((struct sNode*)__dec_obj335)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_740;
        info->in_fun_param=in_fun_param_741;
        list$1tuple2$2charphsNodephph_push_back(params_734,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1901, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_739),(struct sNode*)come_increment_ref_count(node_742))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            label_739 = come_decrement_ref_count2(label_739, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_742) { node_742 = come_decrement_ref_count2(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        label_739 = come_decrement_ref_count2(label_739, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_742) { node_742 = come_decrement_ref_count2(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_735;
    guard_break_746=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_746=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_747=((void*)0);
    method_block_sline_748=0;
    if(    *info->p==123) {
        head_749=info->p;
        method_block_sline_748=info->sline;
        ((char*)(__right_value757=skip_block(info)));
        __right_value757 = come_decrement_ref_count2(__right_value757, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_750=info->p;
        __dec_obj341=method_block_747;
        method_block_747=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1938, "buffer"))));
        come_call_finalizer3(__dec_obj341,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_751=tail_750-head_749;
        mem_752=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_751+1)), "05call.c", 1941, "char"));
        memcpy(mem_752,head_749,len_751);
        mem_752[len_751]=0;
        buffer_append_str(method_block_747,mem_752);
        buffer_append_str(method_block_747,"\n");
        mem_752 = come_decrement_ref_count2(mem_752, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1951, "struct sNode");
    _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value762=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1951, "sFunCallNode")),fun_name,params_734,guard_break_746,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_730),(struct buffer*)come_increment_ref_count(method_block_747),method_block_sline_748,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunCallNode_finalize;
    _inf_value4->clone=(void*)sFunCallNode_clone;
    _inf_value4->compile=(void*)sFunCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sFunCallNode_terminated;
    _inf_value4->kind=(void*)sFunCallNode_kind;
    node_753=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value762,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj352=node_753;
    node_753=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_753),info));
    if(__dec_obj352) { __dec_obj352 = come_decrement_ref_count2(__dec_obj352, ((struct sNode*)__dec_obj352)->finalize, ((struct sNode*)__dec_obj352)->_protocol_obj, 0,0,0, (void*)0); };
    __result436__ = gComeFunResultObject = __result_obj__ = node_753;
    come_call_finalizer3(method_generics_types_730,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_734,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_747,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_753) { node_753 = come_decrement_ref_count2(node_753, ((struct sNode*)node_753)->finalize, ((struct sNode*)node_753)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result436__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj331;
char* __dec_obj332;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj331=self->v1;
            come_call_finalizer3(__dec_obj331,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj332=self->v2;
            __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value752 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_743;
struct tuple2$2charphsNodeph* __dec_obj336;
void* __right_value753 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_744;
struct tuple2$2charphsNodeph* __dec_obj337;
void* __right_value754 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_745;
struct tuple2$2charphsNodeph* __dec_obj338;
struct list$1tuple2$2charphsNodephph* __result432__;
    if(    self->len==0) {
        litem_743=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value752=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1tuple2$2charphsNodephph"))));
        litem_743->prev=((void*)0);
        litem_743->next=((void*)0);
        __dec_obj336=litem_743->item;
        litem_743->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj336,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_743;
        self->head=litem_743;
    }
    else if(    self->len==1) {
        litem_744=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value753=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1tuple2$2charphsNodephph"))));
        litem_744->prev=self->head;
        litem_744->next=((void*)0);
        __dec_obj337=litem_744->item;
        litem_744->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj337,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_744;
        self->head->next=litem_744;
    }
    else {
        litem_745=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value754=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1tuple2$2charphsNodephph"))));
        litem_745->prev=self->tail;
        litem_745->next=((void*)0);
        __dec_obj338=litem_745->item;
        litem_745->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj338,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_745;
        self->tail=litem_745;
    }
    self->len++;
    __result432__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result432__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj339;
struct sNode* __dec_obj340;
struct tuple2$2charphsNodeph* __result433__;
    __dec_obj339=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj340=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj340) { __dec_obj340 = come_decrement_ref_count2(__dec_obj340, ((struct sNode*)__dec_obj340)->finalize, ((struct sNode*)__dec_obj340)->_protocol_obj, 0,0,0, (void*)0); };
    __result433__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result433__;
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
char* __dec_obj342;
char* __dec_obj343;
struct list$1tuple2$2charphsNodephph* __dec_obj344;
struct list$1sTypeph* __dec_obj345;
struct buffer* __dec_obj346;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj342=self->sname;
            __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj343=self->fun_name;
            __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj344=self->params;
            come_call_finalizer3(__dec_obj344,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj345=self->method_generics_types;
            come_call_finalizer3(__dec_obj345,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj346=self->method_block;
            come_call_finalizer3(__dec_obj346,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
struct sFunCallNode* __result434__;
void* __right_value763 = (void*)0;
struct sFunCallNode* result_754;
void* __right_value764 = (void*)0;
char* __dec_obj347;
void* __right_value765 = (void*)0;
char* __dec_obj348;
void* __right_value766 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj349;
void* __right_value767 = (void*)0;
struct list$1sTypeph* __dec_obj350;
void* __right_value768 = (void*)0;
struct buffer* __dec_obj351;
struct sFunCallNode* __result435__;
    if(    self==(void*)0) {
        __result434__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result434__;
    }
    result_754=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"));
    if(    self!=((void*)0)) {
        result_754->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj347=result_754->sname;
        result_754->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_754->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj348=result_754->fun_name;
        result_754->fun_name=(char*)come_increment_ref_count(string_clone(self->fun_name));
        __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj349=result_754->params;
        result_754->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj349,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_754->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj350=result_754->method_generics_types;
        result_754->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
        come_call_finalizer3(__dec_obj350,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj351=result_754->method_block;
        result_754->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer3(__dec_obj351,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_754->method_block_sline=self->method_block_sline;
    }
    __result435__ = gComeFunResultObject = __result_obj__ = result_754;
    come_call_finalizer3(result_754,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result435__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result437__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p);
    stackframe();
    exit(3);
    __result437__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result437__;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value777 = (void*)0;
struct sNode* __result440__;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1972, "struct sNode");
    _inf_obj_value5=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value772=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1972, "sReturnNode")),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sReturnNode_finalize;
    _inf_value5->clone=(void*)sReturnNode_clone;
    _inf_value5->compile=(void*)sReturnNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sReturnNode_kind;
    __result440__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value777=_inf_value5));
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value772,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value777) { __right_value777 = come_decrement_ref_count2(__right_value777, ((struct sNode*)__right_value777)->finalize, ((struct sNode*)__right_value777)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result440__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value785 = (void*)0;
struct sNode* __result443__;
char* head_757;
void* __right_value786 = (void*)0;
struct sNode* value_758;
char* tail_759;
void* __right_value787 = (void*)0;
struct sNode* __dec_obj365;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value795 = (void*)0;
struct sNode* __result446__;
int nest_762;
char* head_763;
int head_sline_764;
int sline_real_765;
void* __right_value796 = (void*)0;
char* buf_766;
_Bool is_type_name__767;
_Bool is_special_word_769;
_Bool define_function_pointer_flag_770;
void* __right_value797 = (void*)0;
_Bool lambda_flag_771;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
char* word2_772;
_Bool fun_name_with_type_name_773;
void* __right_value800 = (void*)0;
char* word2_774;
_Bool call_method_generics_fun_call_775;
void* __right_value801 = (void*)0;
char* __dec_obj372;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
_Bool _if_conditional21;
int nest_776;
_Bool inline_asm_777;
void* __right_value804 = (void*)0;
char* __dec_obj373;
void* __right_value805 = (void*)0;
char* __dec_obj374;
void* __right_value806 = (void*)0;
char* __dec_obj375;
void* __right_value807 = (void*)0;
struct sNode* node_778;
struct sNode* __result447__;
_Bool no_comma_779;
void* __right_value808 = (void*)0;
struct sNode* exp_780;
void* __right_value809 = (void*)0;
struct sNode* exp2_781;
void* __right_value810 = (void*)0;
struct sNode* __result448__;
void* __right_value811 = (void*)0;
char* block_text_782;
char* contents_783;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct sNode* _inf_value8;
struct sOutputNode* _inf_obj_value8;
void* __right_value817 = (void*)0;
struct sNode* __result451__;
void* __right_value818 = (void*)0;
struct sNode* node_785;
struct sNode* __result452__;
void* __right_value819 = (void*)0;
struct sNode* node_786;
struct sNode* __result453__;
struct buffer* come_block_787;
int come_block_sline_788;
char* head_789;
void* __right_value820 = (void*)0;
char* tail_790;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct buffer* __dec_obj380;
int len_791;
void* __right_value823 = (void*)0;
char* mem_792;
char* head_793;
_Bool no_output_come_code_794;
void* __right_value824 = (void*)0;
char* tail_795;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct buffer* __dec_obj381;
int len_796;
void* __right_value827 = (void*)0;
char* mem_797;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct sNode* _inf_value9;
struct sComeCallNode* _inf_obj_value9;
void* __right_value833 = (void*)0;
struct sNode* node_798;
struct sNode* __result456__;
struct buffer* come_block_800;
int come_block_sline_801;
void* __right_value834 = (void*)0;
struct sNode* node_802;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct sNode* _inf_value10;
struct sComeJoinNode* _inf_obj_value10;
void* __right_value840 = (void*)0;
struct sNode* __result459__;
int time_out_804;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct list$1sNodeph* vars_805;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct list$1sBlockph* blocks_806;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct sBlock* else_block_807;
void* __right_value847 = (void*)0;
struct sBlock* __dec_obj390;
void* __right_value848 = (void*)0;
struct sNode* var_name_808;
void* __right_value849 = (void*)0;
struct sBlock* block_809;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct sNode* _inf_value11;
struct sComePollNode* _inf_obj_value11;
void* __right_value883 = (void*)0;
struct sNode* __result481__;
void* __right_value884 = (void*)0;
struct sNode* node_844;
struct sNode* __result482__;
void* __right_value885 = (void*)0;
struct sNode* node_845;
struct sNode* __result483__;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct sNode* _inf_value12;
struct sFuncNode* _inf_obj_value12;
void* __right_value890 = (void*)0;
struct sNode* __result486__;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct sNode* _inf_value13;
struct sWildCard* _inf_obj_value13;
void* __right_value895 = (void*)0;
struct sNode* __result489__;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct sNode* _inf_value14;
struct sLineNode* _inf_obj_value14;
void* __right_value900 = (void*)0;
struct sNode* __result492__;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
struct sNode* _inf_value15;
struct sSNameNode* _inf_obj_value15;
void* __right_value905 = (void*)0;
struct sNode* __result495__;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct sNode* _inf_value16;
struct sCallerFuncNode* _inf_obj_value16;
void* __right_value910 = (void*)0;
struct sNode* __result498__;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
struct sNode* _inf_value17;
struct sCallerLineNode* _inf_obj_value17;
void* __right_value915 = (void*)0;
struct sNode* __result501__;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
struct sNode* _inf_value18;
struct sCallerSNameNode* _inf_obj_value18;
void* __right_value920 = (void*)0;
struct sNode* __result504__;
void* __right_value921 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_853=0;
char* name_854=0;
_Bool err_855=0;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
struct sNode* _inf_value19;
struct sVarArgTypeName* _inf_obj_value19;
void* __right_value927 = (void*)0;
struct sNode* __result507__;
void* __right_value928 = (void*)0;
struct sNode* node_857;
struct sNode* __result508__;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct buffer* buf2_858;
void* __right_value931 = (void*)0;
char* word_859;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct list$1sNodeph* exps_860;
void* __right_value934 = (void*)0;
struct sNode* exp_861;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
struct sNode* _inf_value20;
struct sInlineAssembler* _inf_obj_value20;
void* __right_value942 = (void*)0;
struct sNode* __result511__;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
struct buffer* fun_name_863;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
struct sType* type_864;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct sClass* klass_868;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
struct sType* __dec_obj431;
void* __right_value952 = (void*)0;
char* buf2_869;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
struct sNode* node_870;
struct sNode* __result516__;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
struct buffer* fun_name_871;
void* __right_value957 = (void*)0;
char* buf2_872;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
struct sNode* node_873;
struct sNode* __result517__;
void* __right_value960 = (void*)0;
struct sNode* node_874;
struct sNode* __result518__;
void* __right_value961 = (void*)0;
struct sNode* node_875;
struct sNode* __result519__;
void* __right_value962 = (void*)0;
struct sNode* node_876;
struct sNode* __result520__;
void* __right_value963 = (void*)0;
struct sNode* node_877;
struct sNode* __result521__;
struct sNode* __result522__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1985, "struct sNode");
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value780=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1985, "sReturnNode")),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            __result443__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value785=_inf_value6));
            come_call_finalizer3(__right_value780,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value785) { __right_value785 = come_decrement_ref_count2(__right_value785, ((struct sNode*)__right_value785)->finalize, ((struct sNode*)__right_value785)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result443__;
        }
        else {
            head_757=info->p;
            value_758=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_759=info->p;
            __dec_obj365=value_758;
            value_758=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_758),info));
            if(__dec_obj365) { __dec_obj365 = come_decrement_ref_count2(__dec_obj365, ((struct sNode*)__dec_obj365)->finalize, ((struct sNode*)__dec_obj365)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_760[tail_759-head_757+1];
            memset(&buf_760, 0, sizeof(char)            *(tail_759-head_757+1)            );
            memcpy(buf_760,head_757,tail_759-head_757);
            buf_760[tail_759-head_757]=0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1997, "struct sNode");
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value790=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1997, "sReturnNode")),(struct sNode*)come_increment_ref_count(value_758),(char*)come_increment_ref_count(__builtin_string(buf_760)),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result446__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value795=_inf_value7));
            if(value_758) { value_758 = come_decrement_ref_count2(value_758, ((struct sNode*)value_758)->finalize, ((struct sNode*)value_758)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value790,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value795) { __right_value795 = come_decrement_ref_count2(__right_value795, ((struct sNode*)__right_value795)->finalize, ((struct sNode*)__right_value795)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result446__;
            if(value_758) { value_758 = come_decrement_ref_count2(value_758, ((struct sNode*)value_758)->finalize, ((struct sNode*)value_758)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_762=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_762++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_762--;
                if(                nest_762==0) {
                    break;
                }
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
    else if(    *info->p==47&&*(info->p+1)==47) {
        info->p+=2;
        while(1) {
            if(            *info->p==10) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==0) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    (xisalpha(*info->p)||*info->p==95)&&!((*info->p==76||*info->p==108||*info->p==115||*info->p==83||*info->p==114||*info->p==82||*info->p==98||*info->p==66||*info->p==104||*info->p==72)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))) {
        head_763=info->p;
        head_sline_764=info->sline;
        sline_real_765=info->sline_real;
        info->sline_real=info->sline;
        buf_766=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__767=is_type_name(buf_766,info);
        static char* is_special_word_array_768[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_769=charppa_contained(is_special_word_array_768,19,buf_766);
        define_function_pointer_flag_770=(_Bool)0;
        if(        !is_special_word_769&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sTypephcharphbool*)(__right_value797=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value797,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_770=(_Bool)1;
                }
            }
            info->p=head_763;
            info->sline=head_sline_764;
        }
        lambda_flag_771=(_Bool)0;
        if(        !is_special_word_769&&is_type_name__767) {
            info->p=head_763;
            info->sline=head_sline_764;
            ((struct tuple3$3sTypephcharphbool*)(__right_value798=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value798,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            word2_772=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_772,"lambda")) {
                lambda_flag_771=(_Bool)1;
            }
            info->p=head_763;
            info->sline=head_sline_764;
            word2_772 = come_decrement_ref_count2(word2_772, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_name_with_type_name_773=(_Bool)0;
        if(        !is_special_word_769) {
            info->p=head_763;
            info->sline=head_sline_764;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_774=(char*)come_increment_ref_count(parse_word(info));
                word2_774 = come_decrement_ref_count2(word2_774, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_773=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_763;
            info->sline=head_sline_764;
        }
        call_method_generics_fun_call_775=(_Bool)0;
        {
            info->p=head_763;
            info->sline=head_sline_764;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj372=buf_766;
                buf_766=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj372 = come_decrement_ref_count2(__dec_obj372, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            (_if_conditional21=(!is_type_name(buf_766,info)&&((struct sVar*)(__right_value802=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_766)))==((void*)0)&&((struct sVar*)(__right_value803=map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_766)))==((void*)0)&&*info->p==60)),            come_call_finalizer3(__right_value802,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            come_call_finalizer3(__right_value803,sVar_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional21) {
                nest_776=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_776++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_776==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==10||*info->p==59) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(                *info->p==40) {
                    call_method_generics_fun_call_775=(_Bool)1;
                }
            }
            info->p=head_763;
            info->sline=head_sline_764;
        }
        inline_asm_777=(_Bool)0;
        {
            info->p=head_763;
            info->sline=head_sline_764;
            __dec_obj373=buf_766;
            buf_766=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj373 = come_decrement_ref_count2(__dec_obj373, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_766,"asm")||string_operator_equals(buf_766,"__asm")||string_operator_equals(buf_766,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_777=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj374=buf_766;
                        buf_766=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj374 = come_decrement_ref_count2(__dec_obj374, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_777=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_763;
            info->sline=head_sline_764;
        }
        parse_sharp_v5(info);
        __dec_obj375=buf_766;
        buf_766=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj375 = come_decrement_ref_count2(__dec_obj375, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_771) {
            info->p=head_763;
            info->sline=head_sline_764;
            node_778=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_765;
            __result447__ = gComeFunResultObject = __result_obj__ = node_778;
            if(node_778) { node_778 = come_decrement_ref_count2(node_778, ((struct sNode*)node_778)->finalize, ((struct sNode*)node_778)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result447__;
            if(node_778) { node_778 = come_decrement_ref_count2(node_778, ((struct sNode*)node_778)->finalize, ((struct sNode*)node_778)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        (string_operator_equals(buf_766,"_Static_assert")||string_operator_equals(buf_766,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_779=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_780=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_779;
            expected_next_character(44,info);
            exp2_781=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result448__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value810=static_assert_node((struct sNode*)come_increment_ref_count(exp_780),(struct sNode*)come_increment_ref_count(exp2_781),info)));
            if(exp_780) { exp_780 = come_decrement_ref_count2(exp_780, ((struct sNode*)exp_780)->finalize, ((struct sNode*)exp_780)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_781) { exp2_781 = come_decrement_ref_count2(exp2_781, ((struct sNode*)exp2_781)->finalize, ((struct sNode*)exp2_781)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value810) { __right_value810 = come_decrement_ref_count2(__right_value810, ((struct sNode*)__right_value810)->finalize, ((struct sNode*)__right_value810)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result448__;
            if(exp_780) { exp_780 = come_decrement_ref_count2(exp_780, ((struct sNode*)exp_780)->finalize, ((struct sNode*)exp_780)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_781) { exp2_781 = come_decrement_ref_count2(exp2_781, ((struct sNode*)exp2_781)->finalize, ((struct sNode*)exp2_781)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_766,"output")&&*info->p==123) {
            block_text_782=(char*)come_increment_ref_count(skip_block(info));
            contents_783=(char*)come_increment_ref_count(block_text_782);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2235, "struct sNode");
            _inf_obj_value8=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value813=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "05call.c", 2235, "sOutputNode")),(char*)come_increment_ref_count(contents_783),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sOutputNode_finalize;
            _inf_value8->clone=(void*)sOutputNode_clone;
            _inf_value8->compile=(void*)sOutputNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sOutputNode_kind;
            __result451__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value817=_inf_value8));
            block_text_782 = come_decrement_ref_count2(block_text_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_783 = come_decrement_ref_count2(contents_783, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value813,sOutputNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value817) { __right_value817 = come_decrement_ref_count2(__right_value817, ((struct sNode*)__right_value817)->finalize, ((struct sNode*)__right_value817)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result451__;
            block_text_782 = come_decrement_ref_count2(block_text_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_783 = come_decrement_ref_count2(contents_783, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_766,"extern")) {
            node_785=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result452__ = gComeFunResultObject = __result_obj__ = node_785;
            if(node_785) { node_785 = come_decrement_ref_count2(node_785, ((struct sNode*)node_785)->finalize, ((struct sNode*)node_785)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result452__;
            if(node_785) { node_785 = come_decrement_ref_count2(node_785, ((struct sNode*)node_785)->finalize, ((struct sNode*)node_785)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&(string_operator_equals(buf_766,"string")||string_operator_equals(buf_766,"wstring"))&&*info->p==40) {
            node_786=(struct sNode*)come_increment_ref_count(parse_function_call(buf_766,info,(_Bool)0));
            info->sline_real=sline_real_765;
            __result453__ = gComeFunResultObject = __result_obj__ = node_786;
            if(node_786) { node_786 = come_decrement_ref_count2(node_786, ((struct sNode*)node_786)->finalize, ((struct sNode*)node_786)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result453__;
            if(node_786) { node_786 = come_decrement_ref_count2(node_786, ((struct sNode*)node_786)->finalize, ((struct sNode*)node_786)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_766,"come")) {
            come_block_787=((void*)0);
            come_block_sline_788=0;
            if(            *info->p==123) {
                head_789=info->p;
                come_block_sline_788=info->sline;
                ((char*)(__right_value820=skip_block(info)));
                __right_value820 = come_decrement_ref_count2(__right_value820, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                tail_790=info->p;
                __dec_obj380=come_block_787;
                come_block_787=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2260, "buffer"))));
                come_call_finalizer3(__dec_obj380,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_791=tail_790-head_789;
                mem_792=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_791+1)), "05call.c", 2263, "char"));
                memcpy(mem_792,head_789,len_791);
                mem_792[len_791]=0;
                buffer_append_str(come_block_787,mem_792);
                buffer_append_str(come_block_787,"\n");
                mem_792 = come_decrement_ref_count2(mem_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                head_793=info->p;
                come_block_sline_788=info->sline;
                no_output_come_code_794=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value824=expression_v13(info)));
                if(__right_value824) { __right_value824 = come_decrement_ref_count2(__right_value824, ((struct sNode*)__right_value824)->finalize, ((struct sNode*)__right_value824)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_output_come_code=no_output_come_code_794;
                tail_795=info->p;
                __dec_obj381=come_block_787;
                come_block_787=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2281, "buffer"))));
                come_call_finalizer3(__dec_obj381,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_796=tail_795-head_793;
                mem_797=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_796+1)), "05call.c", 2284, "char"));
                memcpy(mem_797,head_793,len_796);
                mem_797[len_796]=0;
                buffer_append_str(come_block_787,"{");
                buffer_append_str(come_block_787,mem_797);
                buffer_append_str(come_block_787,"; }");
                buffer_append_str(come_block_787,"}");
                buffer_append_str(come_block_787,"\n");
                mem_797 = come_decrement_ref_count2(mem_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2295, "struct sNode");
            _inf_obj_value9=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value829=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2295, "sComeCallNode")),(struct buffer*)come_increment_ref_count(come_block_787),come_block_sline_788,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComeCallNode_finalize;
            _inf_value9->clone=(void*)sComeCallNode_clone;
            _inf_value9->compile=(void*)sComeCallNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComeCallNode_terminated;
            _inf_value9->kind=(void*)sComeCallNode_kind;
            node_798=(struct sNode*)come_increment_ref_count(_inf_value9);
            come_call_finalizer3(__right_value829,sComeCallNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_765;
            __result456__ = gComeFunResultObject = __result_obj__ = node_798;
            come_call_finalizer3(come_block_787,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_798) { node_798 = come_decrement_ref_count2(node_798, ((struct sNode*)node_798)->finalize, ((struct sNode*)node_798)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result456__;
            come_call_finalizer3(come_block_787,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_798) { node_798 = come_decrement_ref_count2(node_798, ((struct sNode*)node_798)->finalize, ((struct sNode*)node_798)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_766,"come_join")&&*info->p==40) {
            come_block_800=((void*)0);
            come_block_sline_801=0;
            expected_next_character(40,info);
            node_802=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_765;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2309, "struct sNode");
            _inf_obj_value10=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value836=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2309, "sComeJoinNode")),(struct sNode*)come_increment_ref_count(node_802),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComeJoinNode_finalize;
            _inf_value10->clone=(void*)sComeJoinNode_clone;
            _inf_value10->compile=(void*)sComeJoinNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComeJoinNode_terminated;
            _inf_value10->kind=(void*)sComeJoinNode_kind;
            __result459__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value840=_inf_value10));
            come_call_finalizer3(come_block_800,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_802) { node_802 = come_decrement_ref_count2(node_802, ((struct sNode*)node_802)->finalize, ((struct sNode*)node_802)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value836,sComeJoinNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value840) { __right_value840 = come_decrement_ref_count2(__right_value840, ((struct sNode*)__right_value840)->finalize, ((struct sNode*)__right_value840)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result459__;
            come_call_finalizer3(come_block_800,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_802) { node_802 = come_decrement_ref_count2(node_802, ((struct sNode*)node_802)->finalize, ((struct sNode*)node_802)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_766,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_804=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_804=time_out_804*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_805=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2327, "list$1sNodeph"))));
            blocks_806=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "05call.c", 2328, "list$1sBlockph"))));
            else_block_807=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2329, "sBlock")),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj390=else_block_807;
                    else_block_807=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj390,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_808=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_809=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNodeph_add(vars_805,(struct sNode*)come_increment_ref_count(var_name_808));
                    list$1sBlockph_add(blocks_806,(struct sBlock*)come_increment_ref_count(block_809));
                    if(                    *info->p==125) {
                        if(var_name_808) { var_name_808 = come_decrement_ref_count2(var_name_808, ((struct sNode*)var_name_808)->finalize, ((struct sNode*)var_name_808)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(block_809,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    if(var_name_808) { var_name_808 = come_decrement_ref_count2(var_name_808, ((struct sNode*)var_name_808)->finalize, ((struct sNode*)var_name_808)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(block_809,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_765;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2359, "struct sNode");
            _inf_obj_value11=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value854=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2359, "sComePollNode")),(struct list$1sNodeph*)come_increment_ref_count(vars_805),(struct list$1sBlockph*)come_increment_ref_count(blocks_806),(struct sBlock*)come_increment_ref_count(else_block_807),time_out_804,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComePollNode_finalize;
            _inf_value11->clone=(void*)sComePollNode_clone;
            _inf_value11->compile=(void*)sComePollNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComePollNode_terminated;
            _inf_value11->kind=(void*)sComePollNode_kind;
            __result481__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value883=_inf_value11));
            come_call_finalizer3(vars_805,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_806,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_807,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value854,sComePollNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value883) { __right_value883 = come_decrement_ref_count2(__right_value883, ((struct sNode*)__right_value883)->finalize, ((struct sNode*)__right_value883)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result481__;
            come_call_finalizer3(vars_805,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_806,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_807,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_766,"none")&&*info->p==40) {
            node_844=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_765;
            __result482__ = gComeFunResultObject = __result_obj__ = node_844;
            if(node_844) { node_844 = come_decrement_ref_count2(node_844, ((struct sNode*)node_844)->finalize, ((struct sNode*)node_844)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result482__;
            if(node_844) { node_844 = come_decrement_ref_count2(node_844, ((struct sNode*)node_844)->finalize, ((struct sNode*)node_844)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&string_operator_equals(buf_766,"some")&&*info->p==40) {
            node_845=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_765;
            __result483__ = gComeFunResultObject = __result_obj__ = node_845;
            if(node_845) { node_845 = come_decrement_ref_count2(node_845, ((struct sNode*)node_845)->finalize, ((struct sNode*)node_845)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result483__;
            if(node_845) { node_845 = come_decrement_ref_count2(node_845, ((struct sNode*)node_845)->finalize, ((struct sNode*)node_845)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_766,"__func__")||string_operator_equals(buf_766,"__FUNCTION__")) {
            info->sline_real=sline_real_765;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2376, "struct sNode");
            _inf_obj_value12=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value887=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2376, "sFuncNode")),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFuncNode_finalize;
            _inf_value12->clone=(void*)sFuncNode_clone;
            _inf_value12->compile=(void*)sFuncNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFuncNode_kind;
            __result486__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value890=_inf_value12));
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value887,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value890) { __right_value890 = come_decrement_ref_count2(__right_value890, ((struct sNode*)__right_value890)->finalize, ((struct sNode*)__right_value890)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result486__;
        }
        else if(        !gComeC&&string_operator_equals(buf_766,"wildcard")) {
            info->sline_real=sline_real_765;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2380, "struct sNode");
            _inf_obj_value13=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value892=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2380, "sWildCard")),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sWildCard_finalize;
            _inf_value13->clone=(void*)sWildCard_clone;
            _inf_value13->compile=(void*)sWildCard_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sWildCard_kind;
            __result489__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value895=_inf_value13));
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value892,sWildCard_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value895) { __right_value895 = come_decrement_ref_count2(__right_value895, ((struct sNode*)__right_value895)->finalize, ((struct sNode*)__right_value895)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result489__;
        }
        else if(        string_operator_equals(buf_766,"__line__")||string_operator_equals(buf_766,"__LINE__")) {
            info->sline_real=sline_real_765;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2384, "struct sNode");
            _inf_obj_value14=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value897=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2384, "sLineNode")),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sLineNode_finalize;
            _inf_value14->clone=(void*)sLineNode_clone;
            _inf_value14->compile=(void*)sLineNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sLineNode_kind;
            __result492__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value900=_inf_value14));
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value897,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value900) { __right_value900 = come_decrement_ref_count2(__right_value900, ((struct sNode*)__right_value900)->finalize, ((struct sNode*)__right_value900)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result492__;
        }
        else if(        string_operator_equals(buf_766,"__sname__")) {
            info->sline_real=sline_real_765;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2388, "struct sNode");
            _inf_obj_value15=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value902=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2388, "sSNameNode")),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sSNameNode_finalize;
            _inf_value15->clone=(void*)sSNameNode_clone;
            _inf_value15->compile=(void*)sSNameNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sSNameNode_kind;
            __result495__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value905=_inf_value15));
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value902,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value905) { __right_value905 = come_decrement_ref_count2(__right_value905, ((struct sNode*)__right_value905)->finalize, ((struct sNode*)__right_value905)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result495__;
        }
        else if(        string_operator_equals(buf_766,"__caller_func__")) {
            info->sline_real=sline_real_765;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2392, "struct sNode");
            _inf_obj_value16=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value907=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2392, "sCallerFuncNode")),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value16->clone=(void*)sCallerFuncNode_clone;
            _inf_value16->compile=(void*)sCallerFuncNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerFuncNode_kind;
            __result498__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value910=_inf_value16));
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value907,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value910) { __right_value910 = come_decrement_ref_count2(__right_value910, ((struct sNode*)__right_value910)->finalize, ((struct sNode*)__right_value910)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result498__;
        }
        else if(        string_operator_equals(buf_766,"__caller_line__")) {
            info->sline_real=sline_real_765;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2396, "struct sNode");
            _inf_obj_value17=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value912=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2396, "sCallerLineNode")),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerLineNode_finalize;
            _inf_value17->clone=(void*)sCallerLineNode_clone;
            _inf_value17->compile=(void*)sCallerLineNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerLineNode_kind;
            __result501__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value915=_inf_value17));
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value912,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value915) { __right_value915 = come_decrement_ref_count2(__right_value915, ((struct sNode*)__right_value915)->finalize, ((struct sNode*)__right_value915)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result501__;
        }
        else if(        string_operator_equals(buf_766,"__caller_sname__")) {
            info->sline_real=sline_real_765;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2400, "struct sNode");
            _inf_obj_value18=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value917=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2400, "sCallerSNameNode")),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value18->clone=(void*)sCallerSNameNode_clone;
            _inf_value18->compile=(void*)sCallerSNameNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerSNameNode_kind;
            __result504__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value920=_inf_value18));
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value917,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value920) { __right_value920 = come_decrement_ref_count2(__right_value920, ((struct sNode*)__right_value920)->finalize, ((struct sNode*)__right_value920)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result504__;
        }
        else if(        info->va_arg&&is_type_name(buf_766,info)) {
            info->p=head_763;
            info->sline=head_sline_764;
            multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value921=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_853=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_854=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            err_855=multiple_assign_var10->v3;
            come_call_finalizer3(__right_value921,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_765;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2409, "struct sNode");
            _inf_obj_value19=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value923=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2409, "sVarArgTypeName")),(struct sType*)come_increment_ref_count(type_853),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value19->clone=(void*)sVarArgTypeName_clone;
            _inf_value19->compile=(void*)sVarArgTypeName_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sVarArgTypeName_kind;
            __result507__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value927=_inf_value19));
            come_call_finalizer3(type_853,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_854 = come_decrement_ref_count2(name_854, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value923,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value927) { __right_value927 = come_decrement_ref_count2(__right_value927, ((struct sNode*)__right_value927)->finalize, ((struct sNode*)__right_value927)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result507__;
            come_call_finalizer3(type_853,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_854 = come_decrement_ref_count2(name_854, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_766,"sizeof")||string_operator_equals(buf_766,"_Alignof")||string_operator_equals(buf_766,"_Alignas")||string_operator_equals(buf_766,"__alignof__")) {
            node_857=(struct sNode*)come_increment_ref_count(string_node_v21(buf_766,head_763,head_sline_764,info));
            info->sline_real=sline_real_765;
            __result508__ = gComeFunResultObject = __result_obj__ = node_857;
            if(node_857) { node_857 = come_decrement_ref_count2(node_857, ((struct sNode*)node_857)->finalize, ((struct sNode*)node_857)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result508__;
            if(node_857) { node_857 = come_decrement_ref_count2(node_857, ((struct sNode*)node_857)->finalize, ((struct sNode*)node_857)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        inline_asm_777) {
            buf2_858=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2418, "buffer"))));
            if(            *info->p!=40) {
                word_859=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_858,word_859);
                word_859 = come_decrement_ref_count2(word_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_858,40);
            exps_860=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2429, "list$1sNodeph"))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_858,40);
                    info->p++;
                    exp_861=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_860,(struct sNode*)come_increment_ref_count(exp_861));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_858,41);
                    if(exp_861) { exp_861 = come_decrement_ref_count2(exp_861, ((struct sNode*)exp_861)->finalize, ((struct sNode*)exp_861)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_858,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_858,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_858,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_765;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2466, "struct sNode");
            _inf_obj_value20=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value937=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2466, "sInlineAssembler")),(char*)come_increment_ref_count(buffer_to_string(buf2_858)),(struct list$1sNodeph*)come_increment_ref_count(exps_860),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sInlineAssembler_finalize;
            _inf_value20->clone=(void*)sInlineAssembler_clone;
            _inf_value20->compile=(void*)sInlineAssembler_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sInlineAssembler_kind;
            __result511__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value942=_inf_value20));
            come_call_finalizer3(buf2_858,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_860,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value937,sInlineAssembler_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value942) { __right_value942 = come_decrement_ref_count2(__right_value942, ((struct sNode*)__right_value942)->finalize, ((struct sNode*)__right_value942)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result511__;
            come_call_finalizer3(buf2_858,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_860,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_773) {
            fun_name_863=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2469, "buffer"))));
            buffer_append_str(fun_name_863,buf_766);
            type_864=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value946=map$2charphsTypephp_operator_load_element(info->types,((char*)(__right_value945=buffer_to_string(fun_name_863))))))));
            __right_value945 = come_decrement_ref_count2(__right_value945, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value946,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(            type_864==((void*)0)) {
                klass_868=((struct sClass*)(__right_value949=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value948=buffer_to_string(fun_name_863))))));
                __right_value948 = come_decrement_ref_count2(__right_value948, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value949,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_868) {
                    __dec_obj431=type_864;
                    type_864=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2479, "sType")),buf_766,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj431,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_766);
                    exit(2);
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_864->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_863,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_863,"_");
            buf2_869=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_863,buf2_869);
            node_870=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value953=buffer_to_string(fun_name_863))),info,(_Bool)0));
            __right_value953 = come_decrement_ref_count2(__right_value953, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_765;
            __result516__ = gComeFunResultObject = __result_obj__ = node_870;
            come_call_finalizer3(fun_name_863,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_864,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_869 = come_decrement_ref_count2(buf2_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_870) { node_870 = come_decrement_ref_count2(node_870, ((struct sNode*)node_870)->finalize, ((struct sNode*)node_870)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result516__;
            come_call_finalizer3(fun_name_863,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_864,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_869 = come_decrement_ref_count2(buf2_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_870) { node_870 = come_decrement_ref_count2(node_870, ((struct sNode*)node_870)->finalize, ((struct sNode*)node_870)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_871=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2514, "buffer"))));
            buffer_append_str(fun_name_871,buf_766);
            buffer_append_str(fun_name_871,"_");
            buf2_872=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_871,buf2_872);
            node_873=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value958=buffer_to_string(fun_name_871))),info,(_Bool)0));
            __right_value958 = come_decrement_ref_count2(__right_value958, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_765;
            __result517__ = gComeFunResultObject = __result_obj__ = node_873;
            come_call_finalizer3(fun_name_871,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_872 = come_decrement_ref_count2(buf2_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_873) { node_873 = come_decrement_ref_count2(node_873, ((struct sNode*)node_873)->finalize, ((struct sNode*)node_873)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result517__;
            come_call_finalizer3(fun_name_871,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_872 = come_decrement_ref_count2(buf2_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_873) { node_873 = come_decrement_ref_count2(node_873, ((struct sNode*)node_873)->finalize, ((struct sNode*)node_873)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        call_method_generics_fun_call_775) {
            node_874=(struct sNode*)come_increment_ref_count(parse_function_call(buf_766,info,(_Bool)0));
            info->sline_real=sline_real_765;
            __result518__ = gComeFunResultObject = __result_obj__ = node_874;
            if(node_874) { node_874 = come_decrement_ref_count2(node_874, ((struct sNode*)node_874)->finalize, ((struct sNode*)node_874)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result518__;
            if(node_874) { node_874 = come_decrement_ref_count2(node_874, ((struct sNode*)node_874)->finalize, ((struct sNode*)node_874)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !is_special_word_769&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__767)) {
            node_875=(struct sNode*)come_increment_ref_count(parse_function_call(buf_766,info,(_Bool)0));
            info->sline_real=sline_real_765;
            __result519__ = gComeFunResultObject = __result_obj__ = node_875;
            if(node_875) { node_875 = come_decrement_ref_count2(node_875, ((struct sNode*)node_875)->finalize, ((struct sNode*)node_875)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result519__;
            if(node_875) { node_875 = come_decrement_ref_count2(node_875, ((struct sNode*)node_875)->finalize, ((struct sNode*)node_875)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            node_876=(struct sNode*)come_increment_ref_count(string_node_v21(buf_766,head_763,head_sline_764,info));
            info->sline_real=sline_real_765;
            __result520__ = gComeFunResultObject = __result_obj__ = node_876;
            if(node_876) { node_876 = come_decrement_ref_count2(node_876, ((struct sNode*)node_876)->finalize, ((struct sNode*)node_876)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result520__;
            if(node_876) { node_876 = come_decrement_ref_count2(node_876, ((struct sNode*)node_876)->finalize, ((struct sNode*)node_876)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_766 = come_decrement_ref_count2(buf_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_877=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result521__ = gComeFunResultObject = __result_obj__ = node_877;
        if(node_877) { node_877 = come_decrement_ref_count2(node_877, ((struct sNode*)node_877)->finalize, ((struct sNode*)node_877)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result521__;
        if(node_877) { node_877 = come_decrement_ref_count2(node_877, ((struct sNode*)node_877)->finalize, ((struct sNode*)node_877)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result522__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result522__;
}

static void sReturnNode_finalize(struct sReturnNode* self){
char* __dec_obj366;
struct sNode* __dec_obj367;
char* __dec_obj368;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj366=self->sname;
            __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj367=self->value;
            if(__dec_obj367) { __dec_obj367 = come_decrement_ref_count2(__dec_obj367, ((struct sNode*)__dec_obj367)->finalize, ((struct sNode*)__dec_obj367)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        if(        self->value_source==gComeFunResultObject) {
            __dec_obj368=self->value_source;
            __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__=(void*)0;
struct sReturnNode* __result444__;
void* __right_value791 = (void*)0;
struct sReturnNode* result_761;
void* __right_value792 = (void*)0;
char* __dec_obj369;
void* __right_value793 = (void*)0;
struct sNode* __dec_obj370;
void* __right_value794 = (void*)0;
char* __dec_obj371;
struct sReturnNode* __result445__;
    if(    self==(void*)0) {
        __result444__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result444__;
    }
    result_761=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"));
    if(    self!=((void*)0)) {
        result_761->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj369=result_761->sname;
        result_761->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj369 = come_decrement_ref_count2(__dec_obj369, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_761->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj370=result_761->value;
        result_761->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj370) { __dec_obj370 = come_decrement_ref_count2(__dec_obj370, ((struct sNode*)__dec_obj370)->finalize, ((struct sNode*)__dec_obj370)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj371=result_761->value_source;
        result_761->value_source=(char*)come_increment_ref_count(string_clone(self->value_source));
        __dec_obj371 = come_decrement_ref_count2(__dec_obj371, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result445__ = gComeFunResultObject = __result_obj__ = result_761;
    come_call_finalizer3(result_761,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result445__;
}

static void sOutputNode_finalize(struct sOutputNode* self){
char* __dec_obj376;
char* __dec_obj377;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj376=self->sname;
            __dec_obj376 = come_decrement_ref_count2(__dec_obj376, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        if(        self->contents==gComeFunResultObject) {
            __dec_obj377=self->contents;
            __dec_obj377 = come_decrement_ref_count2(__dec_obj377, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->contents = come_decrement_ref_count2(self->contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
void* __result_obj__=(void*)0;
struct sOutputNode* __result449__;
void* __right_value814 = (void*)0;
struct sOutputNode* result_784;
void* __right_value815 = (void*)0;
char* __dec_obj378;
void* __right_value816 = (void*)0;
char* __dec_obj379;
struct sOutputNode* __result450__;
    if(    self==(void*)0) {
        __result449__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result449__;
    }
    result_784=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "sOutputNode"));
    if(    self!=((void*)0)) {
        result_784->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj378=result_784->sname;
        result_784->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj378 = come_decrement_ref_count2(__dec_obj378, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_784->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj379=result_784->contents;
        result_784->contents=(char*)come_increment_ref_count(string_clone(self->contents));
        __dec_obj379 = come_decrement_ref_count2(__dec_obj379, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result450__ = gComeFunResultObject = __result_obj__ = result_784;
    come_call_finalizer3(result_784,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result450__;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
char* __dec_obj382;
struct buffer* __dec_obj383;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj382=self->sname;
            __dec_obj382 = come_decrement_ref_count2(__dec_obj382, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        if(        self->come_block==gComeFunResultObject) {
            __dec_obj383=self->come_block;
            come_call_finalizer3(__dec_obj383,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
struct sComeCallNode* __result454__;
void* __right_value830 = (void*)0;
struct sComeCallNode* result_799;
void* __right_value831 = (void*)0;
char* __dec_obj384;
void* __right_value832 = (void*)0;
struct buffer* __dec_obj385;
struct sComeCallNode* __result455__;
    if(    self==(void*)0) {
        __result454__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result454__;
    }
    result_799=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "sComeCallNode"));
    if(    self!=((void*)0)) {
        result_799->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj384=result_799->sname;
        result_799->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj384 = come_decrement_ref_count2(__dec_obj384, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_799->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj385=result_799->come_block;
        result_799->come_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->come_block));
        come_call_finalizer3(__dec_obj385,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_799->come_block_sline=self->come_block_sline;
    }
    __result455__ = gComeFunResultObject = __result_obj__ = result_799;
    come_call_finalizer3(result_799,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result455__;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
char* __dec_obj386;
struct sNode* __dec_obj387;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj386=self->sname;
            __dec_obj386 = come_decrement_ref_count2(__dec_obj386, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj387=self->node;
            if(__dec_obj387) { __dec_obj387 = come_decrement_ref_count2(__dec_obj387, ((struct sNode*)__dec_obj387)->finalize, ((struct sNode*)__dec_obj387)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
struct sComeJoinNode* __result457__;
void* __right_value837 = (void*)0;
struct sComeJoinNode* result_803;
void* __right_value838 = (void*)0;
char* __dec_obj388;
void* __right_value839 = (void*)0;
struct sNode* __dec_obj389;
struct sComeJoinNode* __result458__;
    if(    self==(void*)0) {
        __result457__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result457__;
    }
    result_803=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "sComeJoinNode"));
    if(    self!=((void*)0)) {
        result_803->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj388=result_803->sname;
        result_803->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj388 = come_decrement_ref_count2(__dec_obj388, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_803->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj389=result_803->node;
        result_803->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj389) { __dec_obj389 = come_decrement_ref_count2(__dec_obj389, ((struct sNode*)__dec_obj389)->finalize, ((struct sNode*)__dec_obj389)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result458__ = gComeFunResultObject = __result_obj__ = result_803;
    come_call_finalizer3(result_803,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result458__;
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result460__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result460__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result460__;
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value850 = (void*)0;
struct list_item$1sBlockph* litem_810;
struct sBlock* __dec_obj391;
void* __right_value851 = (void*)0;
struct list_item$1sBlockph* litem_811;
struct sBlock* __dec_obj392;
void* __right_value852 = (void*)0;
struct list_item$1sBlockph* litem_812;
struct sBlock* __dec_obj393;
struct list$1sBlockph* __result461__;
    if(    self->len==0) {
        litem_810=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value850=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1072, "list_item$1sBlockph"))));
        litem_810->prev=((void*)0);
        litem_810->next=((void*)0);
        __dec_obj391=litem_810->item;
        litem_810->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj391,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_810;
        self->head=litem_810;
    }
    else if(    self->len==1) {
        litem_811=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value851=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1082, "list_item$1sBlockph"))));
        litem_811->prev=self->head;
        litem_811->next=((void*)0);
        __dec_obj392=litem_811->item;
        litem_811->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj392,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_811;
        self->head->next=litem_811;
    }
    else {
        litem_812=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value852=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "/usr/local/include/comelang.h", 1092, "list_item$1sBlockph"))));
        litem_812->prev=self->tail;
        litem_812->next=((void*)0);
        __dec_obj393=litem_812->item;
        litem_812->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj393,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_812;
        self->tail=litem_812;
    }
    self->len++;
    __result461__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result461__;
}

static void sComePollNode_finalize(struct sComePollNode* self){
char* __dec_obj394;
struct list$1sNodeph* __dec_obj395;
struct list$1sBlockph* __dec_obj396;
struct sBlock* __dec_obj397;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj394=self->sname;
            __dec_obj394 = come_decrement_ref_count2(__dec_obj394, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        if(        self->vars==gComeFunResultObject) {
            __dec_obj395=self->vars;
            come_call_finalizer3(__dec_obj395,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        if(        self->blocks==gComeFunResultObject) {
            __dec_obj396=self->blocks;
            come_call_finalizer3(__dec_obj396,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        if(        self->else_block==gComeFunResultObject) {
            __dec_obj397=self->else_block;
            come_call_finalizer3(__dec_obj397,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
void* __result_obj__=(void*)0;
struct sComePollNode* __result462__;
void* __right_value855 = (void*)0;
struct sComePollNode* result_813;
void* __right_value856 = (void*)0;
char* __dec_obj398;
void* __right_value857 = (void*)0;
struct list$1sNodeph* __dec_obj399;
void* __right_value881 = (void*)0;
struct list$1sBlockph* __dec_obj405;
void* __right_value882 = (void*)0;
struct sBlock* __dec_obj406;
struct sComePollNode* __result480__;
    if(    self==(void*)0) {
        __result462__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result462__;
    }
    result_813=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "sComePollNode"));
    if(    self!=((void*)0)) {
        result_813->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj398=result_813->sname;
        result_813->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj398 = come_decrement_ref_count2(__dec_obj398, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_813->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj399=result_813->vars;
        result_813->vars=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->vars));
        come_call_finalizer3(__dec_obj399,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj405=result_813->blocks;
        result_813->blocks=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_clone(self->blocks));
        come_call_finalizer3(__dec_obj405,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj406=result_813->else_block;
        result_813->else_block=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->else_block));
        come_call_finalizer3(__dec_obj406,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_813->time_out=self->time_out;
    }
    __result480__ = gComeFunResultObject = __result_obj__ = result_813;
    come_call_finalizer3(result_813,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result480__;
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result463__;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct list$1sBlockph* result_814;
struct list_item$1sBlockph* it_815;
void* __right_value880 = (void*)0;
struct list$1sBlockph* __result479__;
    if(    self==((void*)0)) {
        __result463__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result463__;
    }
    result_814=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "/usr/local/include/comelang.h", 1058, "list$1sBlockph"))));
    it_815=self->head;
    while(it_815!=((void*)0)) {
        list$1sBlockph_add(result_814,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_815->item)));
        it_815=it_815->next;
    }
    __result479__ = gComeFunResultObject = __result_obj__ = result_814;
    come_call_finalizer3(result_814,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result479__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result464__;
void* __right_value860 = (void*)0;
struct sBlock* result_816;
void* __right_value864 = (void*)0;
struct list$1sNodeph* __dec_obj400;
void* __right_value879 = (void*)0;
struct sVarTable* __dec_obj404;
struct sBlock* __result478__;
    if(    self==(void*)0) {
        __result464__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result464__;
    }
    result_816=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj400=result_816->mNodes;
        result_816->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_clone(self->mNodes));
        come_call_finalizer3(__dec_obj400,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj404=result_816->mVarTable;
        result_816->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj404,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_816->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result478__ = gComeFunResultObject = __result_obj__ = result_816;
    come_call_finalizer3(result_816,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result478__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result465__;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct list$1sNodeph* result_817;
struct list_item$1sNodeph* it_818;
void* __right_value863 = (void*)0;
struct list$1sNodeph* __result466__;
    if(    self==((void*)0)) {
        __result465__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result465__;
    }
    result_817=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1058, "list$1sNodeph"))));
    it_818=self->head;
    while(it_818!=((void*)0)) {
        list$1sNodeph_add(result_817,(struct sNode*)come_increment_ref_count(sNode_clone(it_818->item)));
        it_818=it_818->next;
    }
    __result466__ = gComeFunResultObject = __result_obj__ = result_817;
    come_call_finalizer3(result_817,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result466__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result467__;
void* __right_value865 = (void*)0;
struct sVarTable* result_819;
void* __right_value878 = (void*)0;
struct map$2charphsVarph* __dec_obj403;
struct sVarTable* __result477__;
    if(    self==(void*)0) {
        __result467__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result467__;
    }
    result_819=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj403=result_819->mVars;
        result_819->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_clone(self->mVars));
        come_call_finalizer3(__dec_obj403,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_819->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_819->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_819->mID=self->mID;
    }
    __result477__ = gComeFunResultObject = __result_obj__ = result_819;
    come_call_finalizer3(result_819,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result477__;
}

static struct map$2charphsVarph* map$2charphsVarph_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result468__;
void* __right_value866 = (void*)0;
void* __right_value872 = (void*)0;
struct map$2charphsVarph* result_821;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
struct list$1charp* __dec_obj402;
char* it_822;
struct sVar* default_value_823;
struct sVar* it2_826;
struct map$2charphsVarph* __result476__;
default_value_823 = (void*)0;
    if(    self==((void*)0)) {
        __result468__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result468__;
    }
    result_821=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 2390, "map$2charphsVarph"))));
    __dec_obj402=result_821->key_list;
    result_821->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2392, "list$1charp"))));
    come_call_finalizer3(__dec_obj402,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_822=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_822=map$2charphsVarph_next(self)    ){
        memset(&default_value_823,0,sizeof(struct sVar*));
        it2_826=map$2charphsVarph_at(self,it_822,default_value_823);
        map$2charphsVarph_put(result_821,it_822,it2_826);
    }
    __result476__ = gComeFunResultObject = __result_obj__ = result_821;
    come_call_finalizer3(result_821,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result476__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
int i_820;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
struct list$1charp* __dec_obj401;
struct map$2charphsVarph* __result470__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value867=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2319, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value868=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 2320, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value869=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2321, "bool"))));
    for(    i_820=0;    i_820<128;    i_820++    ){
        self->item_existance[i_820]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj401=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2331, "list$1charp"))));
    come_call_finalizer3(__dec_obj401,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result470__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result470__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result469__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result469__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result469__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_824;
unsigned int it_825;
struct sVar* __result471__;
struct sVar* __result472__;
struct sVar* __result473__;
struct sVar* __result474__;
    hash_824=charp_get_hash_key(((char*)key))%self->size;
    it_825=hash_824;
    while((_Bool)1) {
        if(        self->item_existance[it_825]) {
            if(            charp_equals(self->keys[it_825],key)) {
                __result471__ = gComeFunResultObject = __result_obj__ = self->items[it_825];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result471__;
            }
            it_825++;
            if(            it_825>=self->size) {
                it_825=0;
            }
            else if(            it_825==hash_824) {
                __result472__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result472__;
            }
        }
        else {
            __result473__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result473__;
        }
    }
    __result474__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result474__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_838;
int it_839;
_Bool same_key_exist_840;
char* it2_841;
struct map$2charphsVarph* __result475__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_838=charp_get_hash_key(key)%self->size;
    it_839=hash_838;
    while((_Bool)1) {
        if(        self->item_existance[it_839]) {
            if(            charp_equals(self->keys[it_839],key)) {
                if(                1) {
                    self->keys[it_839] = come_decrement_ref_count2(self->keys[it_839], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_839]);
                    self->keys[it_839]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_839]);
                    self->keys[it_839]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_839],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_839]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_839]=item;
                }
                break;
            }
            it_839++;
            if(            it_839>=self->size) {
                it_839=0;
            }
            else if(            it_839==hash_838) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_839]=(_Bool)1;
            if(            1) {
                self->keys[it_839]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_839]=key;
            }
            if(            1) {
                self->items[it_839]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_839]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_840=(_Bool)0;
    for(    it2_841=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_841=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_841,key)) {
            same_key_exist_840=(_Bool)1;
        }
    }
    if(    !same_key_exist_840) {
        list$1charp_push_back(self->key_list,key);
    }
    __result475__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result475__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_827;
void* __right_value875 = (void*)0;
char** keys_828;
void* __right_value876 = (void*)0;
struct sVar** items_829;
void* __right_value877 = (void*)0;
_Bool* item_existance_830;
int len_831;
char* it_832;
struct sVar* default_value_833;
struct sVar* it2_834;
unsigned int hash_835;
int n_836;
struct sVar* default_value_837;
default_value_833 = (void*)0;
default_value_837 = (void*)0;
    size_827=self->size*10;
    keys_828=(char**)come_increment_ref_count(((char**)(__right_value875=(char**)come_calloc(1, sizeof(char*)*(1*(size_827)), "/usr/local/include/comelang.h", 2547, "char*%"))));
    items_829=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value876=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_827)), "/usr/local/include/comelang.h", 2548, "sVar*%"))));
    item_existance_830=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value877=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_827)), "/usr/local/include/comelang.h", 2549, "bool"))));
    len_831=0;
    for(    it_832=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_832=map$2charphsVarph_next(self)    ){
        memset(&default_value_833,0,sizeof(struct sVar*));
        it2_834=map$2charphsVarph_at(self,it_832,default_value_833);
        hash_835=charp_get_hash_key(it_832)%size_827;
        n_836=hash_835;
        while((_Bool)1) {
            if(            item_existance_830[n_836]) {
                n_836++;
                if(                n_836>=size_827) {
                    n_836=0;
                }
                else if(                n_836==hash_835) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_830[n_836]=(_Bool)1;
                keys_828[n_836]=it_832;
                items_829[n_836]=map$2charphsVarph_at(self,it_832,default_value_837);
                len_831++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_828;
    self->items=items_829;
    self->item_existance=item_existance_830;
    self->size=size_827;
    self->len=len_831;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_842;
int i_843;
    for(    i_842=0;    i_842<self->size;    i_842++    ){
        if(        self->item_existance[i_842]) {
            if(            1) {
                come_call_finalizer3(self->items[i_842],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_843=0;    i_843<self->size;    i_843++    ){
        if(        self->item_existance[i_843]) {
            if(            1) {
                self->keys[i_843] = come_decrement_ref_count2(self->keys[i_843], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __dec_obj407;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj407=self->sname;
            __dec_obj407 = come_decrement_ref_count2(__dec_obj407, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__=(void*)0;
struct sFuncNode* __result484__;
void* __right_value888 = (void*)0;
struct sFuncNode* result_846;
void* __right_value889 = (void*)0;
char* __dec_obj408;
struct sFuncNode* __result485__;
    if(    self==(void*)0) {
        __result484__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result484__;
    }
    result_846=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"));
    if(    self!=((void*)0)) {
        result_846->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj408=result_846->sname;
        result_846->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj408 = come_decrement_ref_count2(__dec_obj408, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_846->sline_real=self->sline_real;
    }
    __result485__ = gComeFunResultObject = __result_obj__ = result_846;
    come_call_finalizer3(result_846,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result485__;
}

static void sWildCard_finalize(struct sWildCard* self){
char* __dec_obj409;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj409=self->sname;
            __dec_obj409 = come_decrement_ref_count2(__dec_obj409, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
void* __result_obj__=(void*)0;
struct sWildCard* __result487__;
void* __right_value893 = (void*)0;
struct sWildCard* result_847;
void* __right_value894 = (void*)0;
char* __dec_obj410;
struct sWildCard* __result488__;
    if(    self==(void*)0) {
        __result487__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result487__;
    }
    result_847=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "sWildCard"));
    if(    self!=((void*)0)) {
        result_847->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj410=result_847->sname;
        result_847->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj410 = come_decrement_ref_count2(__dec_obj410, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_847->sline_real=self->sline_real;
    }
    __result488__ = gComeFunResultObject = __result_obj__ = result_847;
    come_call_finalizer3(result_847,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result488__;
}

static void sLineNode_finalize(struct sLineNode* self){
char* __dec_obj411;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj411=self->sname;
            __dec_obj411 = come_decrement_ref_count2(__dec_obj411, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__=(void*)0;
struct sLineNode* __result490__;
void* __right_value898 = (void*)0;
struct sLineNode* result_848;
void* __right_value899 = (void*)0;
char* __dec_obj412;
struct sLineNode* __result491__;
    if(    self==(void*)0) {
        __result490__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result490__;
    }
    result_848=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"));
    if(    self!=((void*)0)) {
        result_848->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj412=result_848->sname;
        result_848->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj412 = come_decrement_ref_count2(__dec_obj412, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_848->sline_real=self->sline_real;
    }
    __result491__ = gComeFunResultObject = __result_obj__ = result_848;
    come_call_finalizer3(result_848,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result491__;
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __dec_obj413;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj413=self->sname;
            __dec_obj413 = come_decrement_ref_count2(__dec_obj413, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__=(void*)0;
struct sSNameNode* __result493__;
void* __right_value903 = (void*)0;
struct sSNameNode* result_849;
void* __right_value904 = (void*)0;
char* __dec_obj414;
struct sSNameNode* __result494__;
    if(    self==(void*)0) {
        __result493__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result493__;
    }
    result_849=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"));
    if(    self!=((void*)0)) {
        result_849->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj414=result_849->sname;
        result_849->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj414 = come_decrement_ref_count2(__dec_obj414, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_849->sline_real=self->sline_real;
    }
    __result494__ = gComeFunResultObject = __result_obj__ = result_849;
    come_call_finalizer3(result_849,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result494__;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __dec_obj415;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj415=self->sname;
            __dec_obj415 = come_decrement_ref_count2(__dec_obj415, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
struct sCallerFuncNode* __result496__;
void* __right_value908 = (void*)0;
struct sCallerFuncNode* result_850;
void* __right_value909 = (void*)0;
char* __dec_obj416;
struct sCallerFuncNode* __result497__;
    if(    self==(void*)0) {
        __result496__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result496__;
    }
    result_850=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"));
    if(    self!=((void*)0)) {
        result_850->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj416=result_850->sname;
        result_850->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj416 = come_decrement_ref_count2(__dec_obj416, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_850->sline_real=self->sline_real;
    }
    __result497__ = gComeFunResultObject = __result_obj__ = result_850;
    come_call_finalizer3(result_850,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result497__;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __dec_obj417;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj417=self->sname;
            __dec_obj417 = come_decrement_ref_count2(__dec_obj417, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
struct sCallerLineNode* __result499__;
void* __right_value913 = (void*)0;
struct sCallerLineNode* result_851;
void* __right_value914 = (void*)0;
char* __dec_obj418;
struct sCallerLineNode* __result500__;
    if(    self==(void*)0) {
        __result499__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result499__;
    }
    result_851=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"));
    if(    self!=((void*)0)) {
        result_851->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj418=result_851->sname;
        result_851->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj418 = come_decrement_ref_count2(__dec_obj418, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_851->sline_real=self->sline_real;
    }
    __result500__ = gComeFunResultObject = __result_obj__ = result_851;
    come_call_finalizer3(result_851,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result500__;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __dec_obj419;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj419=self->sname;
            __dec_obj419 = come_decrement_ref_count2(__dec_obj419, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
struct sCallerSNameNode* __result502__;
void* __right_value918 = (void*)0;
struct sCallerSNameNode* result_852;
void* __right_value919 = (void*)0;
char* __dec_obj420;
struct sCallerSNameNode* __result503__;
    if(    self==(void*)0) {
        __result502__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result502__;
    }
    result_852=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"));
    if(    self!=((void*)0)) {
        result_852->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj420=result_852->sname;
        result_852->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj420 = come_decrement_ref_count2(__dec_obj420, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_852->sline_real=self->sline_real;
    }
    __result503__ = gComeFunResultObject = __result_obj__ = result_852;
    come_call_finalizer3(result_852,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result503__;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
char* __dec_obj421;
struct sType* __dec_obj422;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj421=self->sname;
            __dec_obj421 = come_decrement_ref_count2(__dec_obj421, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj422=self->type;
            come_call_finalizer3(__dec_obj422,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
struct sVarArgTypeName* __result505__;
void* __right_value924 = (void*)0;
struct sVarArgTypeName* result_856;
void* __right_value925 = (void*)0;
char* __dec_obj423;
void* __right_value926 = (void*)0;
struct sType* __dec_obj424;
struct sVarArgTypeName* __result506__;
    if(    self==(void*)0) {
        __result505__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result505__;
    }
    result_856=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "sVarArgTypeName"));
    if(    self!=((void*)0)) {
        result_856->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj423=result_856->sname;
        result_856->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj423 = come_decrement_ref_count2(__dec_obj423, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_856->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj424=result_856->type;
        result_856->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj424,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result506__ = gComeFunResultObject = __result_obj__ = result_856;
    come_call_finalizer3(result_856,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result506__;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
char* __dec_obj425;
char* __dec_obj426;
struct list$1sNodeph* __dec_obj427;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj425=self->sname;
            __dec_obj425 = come_decrement_ref_count2(__dec_obj425, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj426=self->source;
            __dec_obj426 = come_decrement_ref_count2(__dec_obj426, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->source = come_decrement_ref_count2(self->source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj427=self->exps;
            come_call_finalizer3(__dec_obj427,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
struct sInlineAssembler* __result509__;
void* __right_value938 = (void*)0;
struct sInlineAssembler* result_862;
void* __right_value939 = (void*)0;
char* __dec_obj428;
void* __right_value940 = (void*)0;
char* __dec_obj429;
void* __right_value941 = (void*)0;
struct list$1sNodeph* __dec_obj430;
struct sInlineAssembler* __result510__;
    if(    self==(void*)0) {
        __result509__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result509__;
    }
    result_862=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "sInlineAssembler"));
    if(    self!=((void*)0)) {
        result_862->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj428=result_862->sname;
        result_862->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj428 = come_decrement_ref_count2(__dec_obj428, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_862->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj429=result_862->source;
        result_862->source=(char*)come_increment_ref_count(string_clone(self->source));
        __dec_obj429 = come_decrement_ref_count2(__dec_obj429, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj430=result_862->exps;
        result_862->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->exps));
        come_call_finalizer3(__dec_obj430,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result510__ = gComeFunResultObject = __result_obj__ = result_862;
    come_call_finalizer3(result_862,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result510__;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_865;
unsigned int hash_866;
unsigned int it_867;
struct sType* __result512__;
struct sType* __result513__;
struct sType* __result514__;
struct sType* __result515__;
default_value_865 = (void*)0;
    memset(&default_value_865,0,sizeof(struct sType*));
    hash_866=charp_get_hash_key(((char*)key))%self->size;
    it_867=hash_866;
    while((_Bool)1) {
        if(        self->item_existance[it_867]) {
            if(            charp_equals(self->keys[it_867],key)) {
                __result512__ = gComeFunResultObject = __result_obj__ = self->items[it_867];
                come_call_finalizer3(default_value_865,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result512__;
            }
            it_867++;
            if(            it_867>=self->size) {
                it_867=0;
            }
            else if(            it_867==hash_866) {
                __result513__ = gComeFunResultObject = __result_obj__ = default_value_865;
                come_call_finalizer3(default_value_865,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result513__;
            }
        }
        else {
            __result514__ = gComeFunResultObject = __result_obj__ = default_value_865;
            come_call_finalizer3(default_value_865,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result514__;
        }
    }
    __result515__ = gComeFunResultObject = __result_obj__ = default_value_865;
    come_call_finalizer3(default_value_865,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result515__;
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value964 = (void*)0;
struct sNode* __result523__;
    __result523__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value964=expression_node_v99(info)));
    if(__right_value964) { __right_value964 = come_decrement_ref_count2(__right_value964, ((struct sNode*)__right_value964)->finalize, ((struct sNode*)__right_value964)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result523__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sNode* __dec_obj432;
struct sNode* __result524__;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
struct sNode* __dec_obj433;
struct sNode* __result525__;
struct sNode* __result526__;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj432=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        if(__dec_obj432) { __dec_obj432 = come_decrement_ref_count2(__dec_obj432, ((struct sNode*)__dec_obj432)->finalize, ((struct sNode*)__dec_obj432)->_protocol_obj, 0,0,0, (void*)0); };
        __result524__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result524__;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj433=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
        if(__dec_obj433) { __dec_obj433 = come_decrement_ref_count2(__dec_obj433, ((struct sNode*)__dec_obj433)->finalize, ((struct sNode*)__dec_obj433)->_protocol_obj, 0,0,0, (void*)0); };
        __result525__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result525__;
    }
    __result526__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result526__;
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value969 = (void*)0;
struct sNode* node_878;
void* __right_value970 = (void*)0;
struct sNode* __dec_obj434;
struct sNode* __result527__;
    node_878=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj434=node_878;
    node_878=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_878),info));
    if(__dec_obj434) { __dec_obj434 = come_decrement_ref_count2(__dec_obj434, ((struct sNode*)__dec_obj434)->finalize, ((struct sNode*)__dec_obj434)->_protocol_obj, 0,0,0, (void*)0); };
    __result527__ = gComeFunResultObject = __result_obj__ = node_878;
    if(node_878) { node_878 = come_decrement_ref_count2(node_878, ((struct sNode*)node_878)->finalize, ((struct sNode*)node_878)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result527__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_879;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct buffer* buf_880;
void* __right_value973 = (void*)0;
char* __dec_obj435;
int i_881;
void* __right_value974 = (void*)0;
char* __dec_obj436;
void* __right_value975 = (void*)0;
char* __dec_obj437;
int i_882;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
char* __result528__;
struct_name_879 = (void*)0;
    buf_880=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2600, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj435=struct_name_879;
        struct_name_879=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj435 = come_decrement_ref_count2(__dec_obj435, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_881=0;            i_881<obj_type->mOriginalTypeNamePointerNum;            i_881++            ){
                buffer_append_str(buf_880,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj436=struct_name_879;
        struct_name_879=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj436 = come_decrement_ref_count2(__dec_obj436, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj437=struct_name_879;
        struct_name_879=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj437 = come_decrement_ref_count2(__dec_obj437, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_882=0;        i_882<obj_type->mPointerNum;        i_882++        ){
            buffer_append_str(buf_880,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_880,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_880,"pa");
    }
    __result528__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value977=xsprintf("%s%s_%s",struct_name_879,((char*)(__right_value976=buffer_to_string(buf_880))),fun_name)));
    struct_name_879 = come_decrement_ref_count2(struct_name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_880,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value976 = come_decrement_ref_count2(__right_value976, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value977 = come_decrement_ref_count2(__right_value977, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result528__;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_883;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct buffer* buf_884;
void* __right_value980 = (void*)0;
char* __dec_obj438;
void* __right_value981 = (void*)0;
char* __dec_obj439;
int i_885;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
char* __result529__;
struct_name_883 = (void*)0;
    buf_884=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2635, "buffer"))));
    if(    obj_type->mClass->mStruct) {
        __dec_obj438=struct_name_883;
        struct_name_883=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj438 = come_decrement_ref_count2(__dec_obj438, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj439=struct_name_883;
        struct_name_883=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj439 = come_decrement_ref_count2(__dec_obj439, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_885=0;        i_885<obj_type->mPointerNum;        i_885++        ){
            buffer_append_str(buf_884,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_884,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_884,"pa");
    }
    __result529__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value983=xsprintf("%s%s_%s",struct_name_883,((char*)(__right_value982=buffer_to_string(buf_884))),fun_name)));
    struct_name_883 = come_decrement_ref_count2(struct_name_883, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_884,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value982 = come_decrement_ref_count2(__right_value982, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value983 = come_decrement_ref_count2(__right_value983, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result529__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_886;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct buffer* buf_887;
void* __right_value986 = (void*)0;
char* __dec_obj440;
int i_888;
void* __right_value987 = (void*)0;
char* __dec_obj441;
void* __right_value988 = (void*)0;
char* __dec_obj442;
int i_889;
void* __right_value989 = (void*)0;
int len_891;
void* __right_value990 = (void*)0;
char* __result530__;
struct_name_886 = (void*)0;
    buf_887=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2661, "buffer"))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj440=struct_name_886;
        struct_name_886=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj440 = come_decrement_ref_count2(__dec_obj440, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_888=0;            i_888<obj_type->mOriginalTypeNamePointerNum;            i_888++            ){
                buffer_append_str(buf_887,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj441=struct_name_886;
        struct_name_886=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj441 = come_decrement_ref_count2(__dec_obj441, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj442=struct_name_886;
        struct_name_886=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj442 = come_decrement_ref_count2(__dec_obj442, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_889=0;        i_889<obj_type->mPointerNum;        i_889++        ){
            buffer_append_str(buf_887,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_887,"a");
    }
    if(    !array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_887,"pa");
    }
    char none_method_name_890[charp_length(fun_name)+1];
    memset(&none_method_name_890, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_891=string_length(struct_name_886)+string_length(((char*)(__right_value989=buffer_to_string(buf_887))));
    __right_value989 = come_decrement_ref_count2(__right_value989, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_890,fun_name+len_891+1,charp_length(fun_name)-len_891-1);
    none_method_name_890[charp_length(fun_name)-len_891-1]=0;
    __result530__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value990=__builtin_string(none_method_name_890)));
    struct_name_886 = come_decrement_ref_count2(struct_name_886, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_887,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value990 = come_decrement_ref_count2(__right_value990, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result530__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value991 = (void*)0;
char* struct_name_892;
void* __right_value992 = (void*)0;
char* __result531__;
    struct_name_892=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result531__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value992=xsprintf("%s_%s",struct_name_892,fun_name)));
    struct_name_892 = come_decrement_ref_count2(struct_name_892, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value992 = come_decrement_ref_count2(__right_value992, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result531__;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result532__;
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result532__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result532__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_893;
char* p_894;
int sline_895;
_Bool err_flag_896;
void* __right_value995 = (void*)0;
char* label_897;
void* __right_value996 = (void*)0;
char* __dec_obj443;
char* __dec_obj444;
_Bool no_comma_898;
_Bool in_fun_param_899;
void* __right_value997 = (void*)0;
struct sNode* node_900;
void* __right_value998 = (void*)0;
struct sNode* __dec_obj445;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
struct sNode* _inf_value21;
struct sLambdaCall* _inf_obj_value21;
void* __right_value1007 = (void*)0;
struct sNode* __result535__;
struct sNode* __result536__;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_893=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 2724, "list$1tuple2$2charphsNodephph"))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_894=info->p;
            sline_895=info->sline;
            err_flag_896=(_Bool)0;
            label_897=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj443=label_897;
                label_897=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj443 = come_decrement_ref_count2(__dec_obj443, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_896=(_Bool)1;
            }
            if(            err_flag_896==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj444=label_897;
                label_897=((void*)0);
                __dec_obj444 = come_decrement_ref_count2(__dec_obj444, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_894;
                info->sline=sline_895;
            }
            no_comma_898=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_899=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_900=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj445=node_900;
            node_900=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_900),info));
            if(__dec_obj445) { __dec_obj445 = come_decrement_ref_count2(__dec_obj445, ((struct sNode*)__dec_obj445)->finalize, ((struct sNode*)__dec_obj445)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_898;
            info->in_fun_param=in_fun_param_899;
            list$1tuple2$2charphsNodephph_push_back(params_893,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 2767, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_897),(struct sNode*)come_increment_ref_count(node_900))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_897 = come_decrement_ref_count2(label_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_900) { node_900 = come_decrement_ref_count2(node_900, ((struct sNode*)node_900)->finalize, ((struct sNode*)node_900)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_897 = come_decrement_ref_count2(label_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_900) { node_900 = come_decrement_ref_count2(node_900, ((struct sNode*)node_900)->finalize, ((struct sNode*)node_900)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2785, "struct sNode");
        _inf_obj_value21=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1002=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2785, "sLambdaCall")),(struct sNode*)come_increment_ref_count(node),params_893,info))));
        _inf_value21->_protocol_obj=_inf_obj_value21;
        _inf_value21->finalize=(void*)sLambdaCall_finalize;
        _inf_value21->clone=(void*)sLambdaCall_clone;
        _inf_value21->compile=(void*)sLambdaCall_compile;
        _inf_value21->sline=(void*)sNodeBase_sline;
        _inf_value21->sline_real=(void*)sNodeBase_sline_real;
        _inf_value21->sname=(void*)sNodeBase_sname;
        _inf_value21->terminated=(void*)sNodeBase_terminated;
        _inf_value21->kind=(void*)sLambdaCall_kind;
        __result535__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1007=_inf_value21));
        come_call_finalizer3(params_893,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value1002,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1007) { __right_value1007 = come_decrement_ref_count2(__right_value1007, ((struct sNode*)__right_value1007)->finalize, ((struct sNode*)__right_value1007)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result535__;
        come_call_finalizer3(params_893,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result536__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result536__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
char* __dec_obj446;
struct sNode* __dec_obj447;
struct list$1tuple2$2charphsNodephph* __dec_obj448;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj446=self->sname;
            __dec_obj446 = come_decrement_ref_count2(__dec_obj446, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj447=self->node;
            if(__dec_obj447) { __dec_obj447 = come_decrement_ref_count2(__dec_obj447, ((struct sNode*)__dec_obj447)->finalize, ((struct sNode*)__dec_obj447)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj448=self->params;
            come_call_finalizer3(__dec_obj448,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
struct sLambdaCall* __result533__;
void* __right_value1003 = (void*)0;
struct sLambdaCall* result_901;
void* __right_value1004 = (void*)0;
char* __dec_obj449;
void* __right_value1005 = (void*)0;
struct sNode* __dec_obj450;
void* __right_value1006 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj451;
struct sLambdaCall* __result534__;
    if(    self==(void*)0) {
        __result533__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result533__;
    }
    result_901=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "sLambdaCall"));
    if(    self!=((void*)0)) {
        result_901->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj449=result_901->sname;
        result_901->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj449 = come_decrement_ref_count2(__dec_obj449, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_901->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj450=result_901->node;
        result_901->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj450) { __dec_obj450 = come_decrement_ref_count2(__dec_obj450, ((struct sNode*)__dec_obj450)->finalize, ((struct sNode*)__dec_obj450)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj451=result_901->params;
        result_901->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj451,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result534__ = gComeFunResultObject = __result_obj__ = result_901;
    come_call_finalizer3(result_901,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result534__;
}

