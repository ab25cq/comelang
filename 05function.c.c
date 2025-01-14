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
struct sSemicolonNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLambdaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
};

struct sFunNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
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
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
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
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
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
char* parse_function_attribute(struct sInfo* info);
char* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile_v5(struct sInfo* info);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
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

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sSemicolonNode* __result200__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result200__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
char* __result201__;
    __result201__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=__builtin_string("sSemicolonNode")));
    __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result201__;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
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

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
struct sLambdaNode* __result202__;
    ((struct sNodeBase*)(__right_value251=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value251,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result202__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result202__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
char* __result203__;
    __result203__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value252=__builtin_string("sLambdaNode")));
    __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result203__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_250;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct sType* result_type_251;
void* __right_value255 = (void*)0;
int block_level_252;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct CVALUE* come_value_253;
void* __right_value258 = (void*)0;
char* __dec_obj35;
void* __right_value295 = (void*)0;
struct sType* __dec_obj81;
_Bool __result222__;
    come_fun_250=info->come_fun;
    info->come_fun=self->mFun;
    result_type_251=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "sType")),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value255=make_define_var(result_type_251,"__result_obj__",(_Bool)0,info))));
        __right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_252=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_252;
    come_value_253=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "CVALUE"))));
    __dec_obj35=come_value_253->c_value;
    come_value_253->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj81=come_value_253->type;
    come_value_253->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_253->var=((void*)0);
    add_come_last_code(info,"%s",come_value_253->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_253));
    info->come_fun=come_fun_250;
    __result222__ = (_Bool)1;
    come_call_finalizer3(result_type_251,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_253,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result222__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result204__;
void* __right_value259 = (void*)0;
struct sType* result_254;
void* __right_value262 = (void*)0;
struct tuple1$1sTypeph* __dec_obj58;
void* __right_value263 = (void*)0;
struct tuple1$1sTypeph* __dec_obj59;
void* __right_value264 = (void*)0;
char* __dec_obj60;
void* __right_value271 = (void*)0;
struct list$1sTypeph* __dec_obj64;
void* __right_value279 = (void*)0;
struct list$1sNodeph* __dec_obj68;
void* __right_value280 = (void*)0;
struct list$1sTypeph* __dec_obj69;
void* __right_value287 = (void*)0;
struct list$1charph* __dec_obj73;
void* __right_value288 = (void*)0;
struct tuple1$1sTypeph* __dec_obj74;
void* __right_value289 = (void*)0;
struct sNode* __dec_obj75;
void* __right_value290 = (void*)0;
struct tuple1$1sTypeph* __dec_obj76;
void* __right_value291 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value292 = (void*)0;
char* __dec_obj78;
void* __right_value293 = (void*)0;
char* __dec_obj79;
void* __right_value294 = (void*)0;
char* __dec_obj80;
struct sType* __result220__;
    if(    self==(void*)0) {
        __result204__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result204__;
    }
    result_254=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_254->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj58=result_254->mNoSolvedGenericsType;
        result_254->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj59=result_254->mOriginalLoadVarType;
        result_254->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj60=result_254->mGenericsName;
        result_254->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj64=result_254->mGenericsTypes;
        result_254->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj64,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj68=result_254->mArrayNum;
        result_254->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj68,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_254->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj69=result_254->mParamTypes;
        result_254->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj69,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj73=result_254->mParamNames;
        result_254->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj73,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj74=result_254->mResultType;
        result_254->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj74,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_254->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj75=result_254->mAlignas;
        result_254->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj76=result_254->mChannelType;
        result_254->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj76,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_254->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_254->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_254->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_254->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_254->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_254->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_254->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_254->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_254->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_254->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_254->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_254->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_254->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_254->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_254->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_254->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_254->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_254->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_254->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_254->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_254->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_254->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_254->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_254->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj77=result_254->mSizeNum;
        result_254->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_254->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj78=result_254->mOriginalTypeName;
        result_254->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_254->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_254->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_254->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_254->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_254->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_254->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_254->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_254->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj79=result_254->mAsmName;
        result_254->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_254->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_254->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_254->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_254->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_254->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_254->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj80=result_254->mTupleName;
        result_254->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_254;
    come_call_finalizer3(result_254,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result205__;
void* __right_value260 = (void*)0;
struct tuple1$1sTypeph* result_255;
void* __right_value261 = (void*)0;
struct sType* __dec_obj36;
struct tuple1$1sTypeph* __result206__;
    if(    self==(void*)0) {
        __result205__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    result_255=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj36=result_255->v1;
        result_255->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result206__ = gComeFunResultObject = __result_obj__ = result_255;
    come_call_finalizer3(result_255,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj37;
struct tuple1$1sTypeph* __dec_obj39;
char* __dec_obj41;
struct list$1sTypeph* __dec_obj42;
struct list$1sNodeph* __dec_obj44;
struct list$1sTypeph* __dec_obj46;
struct list$1charph* __dec_obj47;
struct tuple1$1sTypeph* __dec_obj48;
struct sNode* __dec_obj50;
struct tuple1$1sTypeph* __dec_obj51;
struct sNode* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj37=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj37,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj39=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj39,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj41=self->mGenericsName;
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj42=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj42,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj44=self->mArrayNum;
            come_call_finalizer3(__dec_obj44,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj46=self->mParamTypes;
            come_call_finalizer3(__dec_obj46,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj47=self->mParamNames;
            come_call_finalizer3(__dec_obj47,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj48=self->mResultType;
            come_call_finalizer3(__dec_obj48,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj50=self->mAlignas;
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj51=self->mChannelType;
            come_call_finalizer3(__dec_obj51,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj53=self->mSizeNum;
            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj54=self->mOriginalTypeName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj55=self->mAsmName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj56=self->mTupleName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_256;
struct list_item$1sTypeph* prev_it_257;
    it_256=self->head;
    while(it_256!=((void*)0)) {
        prev_it_257=it_256;
        it_256=it_256->next;
        come_call_finalizer3(prev_it_257,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj43;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj43=self->item;
            come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_258;
struct list_item$1sTypeph* prev_it_259;
    it_258=self->head;
    while(it_258!=((void*)0)) {
        prev_it_259=it_258;
        it_258=it_258->next;
        come_call_finalizer3(prev_it_259,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_260;
struct list_item$1sNodeph* prev_it_261;
    it_260=self->head;
    while(it_260!=((void*)0)) {
        prev_it_261=it_260;
        it_260=it_260->next;
        come_call_finalizer3(prev_it_261,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj45;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj45=self->item;
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_262;
struct list_item$1sNodeph* prev_it_263;
    it_262=self->head;
    while(it_262!=((void*)0)) {
        prev_it_263=it_262;
        it_262=it_262->next;
        come_call_finalizer3(prev_it_263,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_264;
struct list_item$1charph* prev_it_265;
    it_264=self->head;
    while(it_264!=((void*)0)) {
        prev_it_265=it_264;
        it_264=it_264->next;
        come_call_finalizer3(prev_it_265,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj52;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj52=self->v1;
            come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj57;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj57=self->v1;
            come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result207__;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sTypeph* result_266;
struct list_item$1sTypeph* it_267;
void* __right_value270 = (void*)0;
struct list$1sTypeph* __result210__;
    if(    self==((void*)0)) {
        __result207__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    result_266=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1058, "list$1sTypeph"))));
    it_267=self->head;
    while(it_267!=((void*)0)) {
        list$1sTypeph_add(result_266,(struct sType*)come_increment_ref_count(sType_clone(it_267->item)));
        it_267=it_267->next;
    }
    __result210__ = gComeFunResultObject = __result_obj__ = result_266;
    come_call_finalizer3(result_266,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result208__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result208__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
struct list_item$1sTypeph* litem_268;
struct sType* __dec_obj61;
void* __right_value268 = (void*)0;
struct list_item$1sTypeph* litem_269;
struct sType* __dec_obj62;
void* __right_value269 = (void*)0;
struct list_item$1sTypeph* litem_270;
struct sType* __dec_obj63;
struct list$1sTypeph* __result209__;
    if(    self->len==0) {
        litem_268=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value267=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1072, "list_item$1sTypeph"))));
        litem_268->prev=((void*)0);
        litem_268->next=((void*)0);
        __dec_obj61=litem_268->item;
        litem_268->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_268;
        self->head=litem_268;
    }
    else if(    self->len==1) {
        litem_269=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value268=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1082, "list_item$1sTypeph"))));
        litem_269->prev=self->head;
        litem_269->next=((void*)0);
        __dec_obj62=litem_269->item;
        litem_269->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_269;
        self->head->next=litem_269;
    }
    else {
        litem_270=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value269=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1092, "list_item$1sTypeph"))));
        litem_270->prev=self->tail;
        litem_270->next=((void*)0);
        __dec_obj63=litem_270->item;
        litem_270->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_270;
        self->tail=litem_270;
    }
    self->len++;
    __result209__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result211__;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct list$1sNodeph* result_271;
struct list_item$1sNodeph* it_272;
void* __right_value278 = (void*)0;
struct list$1sNodeph* __result216__;
    if(    self==((void*)0)) {
        __result211__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    result_271=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1058, "list$1sNodeph"))));
    it_272=self->head;
    while(it_272!=((void*)0)) {
        list$1sNodeph_add(result_271,(struct sNode*)come_increment_ref_count(sNode_clone(it_272->item)));
        it_272=it_272->next;
    }
    __result216__ = gComeFunResultObject = __result_obj__ = result_271;
    come_call_finalizer3(result_271,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result212__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result212__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value274 = (void*)0;
struct list_item$1sNodeph* litem_273;
struct sNode* __dec_obj65;
void* __right_value275 = (void*)0;
struct list_item$1sNodeph* litem_274;
struct sNode* __dec_obj66;
void* __right_value276 = (void*)0;
struct list_item$1sNodeph* litem_275;
struct sNode* __dec_obj67;
struct list$1sNodeph* __result213__;
    if(    self->len==0) {
        litem_273=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value274=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1072, "list_item$1sNodeph"))));
        litem_273->prev=((void*)0);
        litem_273->next=((void*)0);
        __dec_obj65=litem_273->item;
        litem_273->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_273;
        self->head=litem_273;
    }
    else if(    self->len==1) {
        litem_274=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value275=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1082, "list_item$1sNodeph"))));
        litem_274->prev=self->head;
        litem_274->next=((void*)0);
        __dec_obj66=litem_274->item;
        litem_274->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_274;
        self->head->next=litem_274;
    }
    else {
        litem_275=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value276=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1092, "list_item$1sNodeph"))));
        litem_275->prev=self->tail;
        litem_275->next=((void*)0);
        __dec_obj67=litem_275->item;
        litem_275->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_275;
        self->tail=litem_275;
    }
    self->len++;
    __result213__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result214__;
void* __right_value277 = (void*)0;
struct sNode* result_276;
struct sNode* __result215__;
    if(    self==(void*)0) {
        __result214__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    result_276=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_276->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_276->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_276->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_276->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_276->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_276->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_276->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_276->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_276->kind=self->kind;
    }
    __result215__ = gComeFunResultObject = __result_obj__ = result_276;
    if(result_276) { result_276 = come_decrement_ref_count2(result_276, ((struct sNode*)result_276)->finalize, ((struct sNode*)result_276)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result217__;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1charph* result_277;
struct list_item$1charph* it_278;
void* __right_value286 = (void*)0;
struct list$1charph* __result219__;
    if(    self==((void*)0)) {
        __result217__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    result_277=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1058, "list$1charph"))));
    it_278=self->head;
    while(it_278!=((void*)0)) {
        list$1charph_add(result_277,(char*)come_increment_ref_count(string_clone(it_278->item)));
        it_278=it_278->next;
    }
    __result219__ = gComeFunResultObject = __result_obj__ = result_277;
    come_call_finalizer3(result_277,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value283 = (void*)0;
struct list_item$1charph* litem_279;
char* __dec_obj70;
void* __right_value284 = (void*)0;
struct list_item$1charph* litem_280;
char* __dec_obj71;
void* __right_value285 = (void*)0;
struct list_item$1charph* litem_281;
char* __dec_obj72;
struct list$1charph* __result218__;
    if(    self->len==0) {
        litem_279=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value283=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1072, "list_item$1charph"))));
        litem_279->prev=((void*)0);
        litem_279->next=((void*)0);
        __dec_obj70=litem_279->item;
        litem_279->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_279;
        self->head=litem_279;
    }
    else if(    self->len==1) {
        litem_280=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value284=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1082, "list_item$1charph"))));
        litem_280->prev=self->head;
        litem_280->next=((void*)0);
        __dec_obj71=litem_280->item;
        litem_280->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_280;
        self->head->next=litem_280;
    }
    else {
        litem_281=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value285=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1092, "list_item$1charph"))));
        litem_281->prev=self->tail;
        litem_281->next=((void*)0);
        __dec_obj72=litem_281->item;
        litem_281->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_281;
        self->tail=litem_281;
    }
    self->len++;
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
struct list_item$1CVALUEph* litem_282;
struct CVALUE* __dec_obj82;
void* __right_value297 = (void*)0;
struct list_item$1CVALUEph* litem_283;
struct CVALUE* __dec_obj86;
void* __right_value298 = (void*)0;
struct list_item$1CVALUEph* litem_284;
struct CVALUE* __dec_obj87;
struct list$1CVALUEph* __result221__;
    if(    self->len==0) {
        litem_282=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value296=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1CVALUEph"))));
        litem_282->prev=((void*)0);
        litem_282->next=((void*)0);
        __dec_obj82=litem_282->item;
        litem_282->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_282;
        self->head=litem_282;
    }
    else if(    self->len==1) {
        litem_283=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value297=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1CVALUEph"))));
        litem_283->prev=self->head;
        litem_283->next=((void*)0);
        __dec_obj86=litem_283->item;
        litem_283->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_283;
        self->head->next=litem_283;
    }
    else {
        litem_284=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value298=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1CVALUEph"))));
        litem_284->prev=self->tail;
        litem_284->next=((void*)0);
        __dec_obj87=litem_284->item;
        litem_284->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_284;
        self->tail=litem_284;
    }
    self->len++;
    __result221__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj83;
struct sType* __dec_obj84;
char* __dec_obj85;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj83=self->c_value;
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj84=self->type;
            come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj85=self->c_value_without_right_value_objects;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
struct sFun* __dec_obj88;
struct sFunNode* __result223__;
    ((struct sNodeBase*)(__right_value299=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value299,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj88=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj88,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
char* __result224__;
    __result224__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value300=__builtin_string("sFunNode")));
    __right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_285;
char* come_fun_name_286;
void* __right_value301 = (void*)0;
char* __dec_obj106;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sType* result_type_287;
void* __right_value304 = (void*)0;
int block_level_288;
void* __right_value305 = (void*)0;
char* __dec_obj107;
_Bool __result225__;
    come_fun_285=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_286=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj106=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_287=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value304=make_define_var(result_type_287,"__result_obj__",(_Bool)0,info))));
            __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_288=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_288;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value305=xsprintf("come_heap_final();\n"))));
            __right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_287,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_285;
    __dec_obj107=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_286);
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result225__ = (_Bool)1;
    come_fun_name_286 = come_decrement_ref_count2(come_fun_name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result225__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj89;
struct sType* __dec_obj90;
struct list$1sTypeph* __dec_obj91;
struct list$1charph* __dec_obj92;
struct list$1charph* __dec_obj93;
struct sType* __dec_obj94;
struct sBlock* __dec_obj95;
struct buffer* __dec_obj98;
struct buffer* __dec_obj99;
struct buffer* __dec_obj100;
struct buffer* __dec_obj101;
char* __dec_obj102;
char* __dec_obj103;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj89=self->mName;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj90=self->mResultType;
            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj91=self->mParamTypes;
            come_call_finalizer3(__dec_obj91,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj92=self->mParamNames;
            come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj93=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj94=self->mLambdaType;
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj95=self->mBlock;
            come_call_finalizer3(__dec_obj95,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj98=self->mSource;
            come_call_finalizer3(__dec_obj98,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj99=self->mSourceHead;
            come_call_finalizer3(__dec_obj99,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj100=self->mSourceHead2;
            come_call_finalizer3(__dec_obj100,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj101=self->mSourceDefer;
            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj102=self->mComeHeader;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj103=self->mDeclareSName;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj96;
struct sVarTable* __dec_obj97;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj96=self->mNodes;
            come_call_finalizer3(__dec_obj96,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj97=self->mVarTable;
            come_call_finalizer3(__dec_obj97,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct list$1sNodeph* __dec_obj108;
struct sBlock* __result226__;
    __dec_obj108=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "list$1sNodeph"))));
    come_call_finalizer3(__dec_obj108,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value308 = (void*)0;
struct sType* __dec_obj109;
void* __right_value309 = (void*)0;
struct list$1charph* __dec_obj110;
void* __right_value310 = (void*)0;
struct list$1charph* __dec_obj111;
char* __dec_obj112;
struct sType* __dec_obj113;
struct list$1sTypeph* __dec_obj114;
struct list$1charph* __dec_obj115;
struct list$1charph* __dec_obj116;
char* __dec_obj117;
void* __right_value311 = (void*)0;
char* __dec_obj118;
struct sGenericsFun* __result227__;
    __dec_obj109=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(sType_clone(impl_type));
    come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj110=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_type_names));
    come_call_finalizer3(__dec_obj110,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj111=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(method_generics_type_names));
    come_call_finalizer3(__dec_obj111,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj112=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj113=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj114=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj114,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj115=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj115,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj116=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj116,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj117=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj118=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result227__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj119;
struct list$1charph* __dec_obj120;
struct list$1charph* __dec_obj121;
char* __dec_obj122;
struct sType* __dec_obj123;
struct list$1sTypeph* __dec_obj124;
struct list$1charph* __dec_obj125;
struct list$1charph* __dec_obj126;
char* __dec_obj127;
char* __dec_obj128;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj119=self->mImplType;
            come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj120=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj120,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj121=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj121,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj122=self->mName;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj123=self->mResultType;
            come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj124=self->mParamTypes;
            come_call_finalizer3(__dec_obj124,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj125=self->mParamNames;
            come_call_finalizer3(__dec_obj125,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj126=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj126,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj127=self->mBlock;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj128=self->mGenericsSName;
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sBlock* result_289;
int sline_top_290;
int block_level_291;
char* p_saved_292;
int sline_saved_293;
char* sname_saved_294;
void* __right_value314 = (void*)0;
char* __dec_obj129;
char* __dec_obj130;
struct map$2charphcharph* __dec_obj131;
char* p_297;
int sline_298;
char* sname_299;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
char* module_name_300;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1charph* params_301;
void* __right_value319 = (void*)0;
char* word_302;
void* __right_value320 = (void*)0;
char* __dec_obj132;
void* __right_value321 = (void*)0;
char* __dec_obj133;
void* __right_value322 = (void*)0;
_Bool _if_conditional1;
struct sBlock* __result232__;
void* __right_value323 = (void*)0;
struct sClassModule* module_306;
void* __right_value324 = (void*)0;
void* __right_value330 = (void*)0;
struct map$2charphcharph* __dec_obj139;
int i_310;
struct list$1charph* o2_saved_311;
char* it_314;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
char* __dec_obj140;
void* __right_value339 = (void*)0;
struct sNode* node_361;
void* __right_value340 = (void*)0;
char* __dec_obj141;
_Bool omit_semicolon_365;
void* __right_value344 = (void*)0;
char* __dec_obj145;
char* head_380;
void* __right_value345 = (void*)0;
struct sNode* value_381;
char* tail_382;
void* __right_value346 = (void*)0;
struct sNode* __dec_obj146;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sNode* node_384;
void* __right_value349 = (void*)0;
char* __dec_obj147;
struct sNode* node_385;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value354 = (void*)0;
struct sNode* __dec_obj150;
void* __right_value355 = (void*)0;
struct sNode* __dec_obj151;
_Bool omit_semicolon_387;
char* p_388;
char* head_389;
void* __right_value356 = (void*)0;
char* source_390;
void* __right_value357 = (void*)0;
struct sNode* node_391;
struct sBlock* __result271__;
node_385 = (void*)0;
    result_289=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 159, "sBlock")),info));
    sline_top_290=info->sline_top;
    info->sline_top=info->sline;
    block_level_291=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_292=((void*)0);
        sline_saved_293=0;
        sname_saved_294=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_292) {
                if(                *info->p==0) {
                    info->p=p_saved_292;
                    info->sline=sline_saved_293;
                    __dec_obj129=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_294));
                    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_292=((void*)0);
                    sline_saved_293=0;
                    __dec_obj130=sname_saved_294;
                    sname_saved_294=((void*)0);
                    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj131=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj131,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p_297=info->p;
            sline_298=info->sline;
            sname_299=info->sname;
            if(            *info->p==123) {
                info->sline_top=sline_298;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value315=parse_word(info)));
                __right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_300=(char*)come_increment_ref_count(parse_word(info));
                params_301=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 215, "list$1charph"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_302=(char*)come_increment_ref_count(parse_word(info));
                        list$1charph_add(params_301,(char*)come_increment_ref_count(word_302));
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
                            word_302 = come_decrement_ref_count2(word_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_302 = come_decrement_ref_count2(word_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_292=info->p;
                sline_saved_293=info->sline;
                __dec_obj132=sname_saved_294;
                sname_saved_294=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj133=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_300));
                __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value322=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_300)))==((void*)0))),                come_call_finalizer3(__right_value322,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional1) {
                    err_msg(info,"module not found");
                    __result232__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_300 = come_decrement_ref_count2(module_name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_301,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    sname_saved_294 = come_decrement_ref_count2(sname_saved_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_289,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result232__;
                }
                module_306=((struct sClassModule*)come_null_check(((struct sClassModule*)(__right_value323=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_300))), "05function.c", 262, 0));
                come_call_finalizer3(__right_value323,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charph_length(module_306->mParams)!=list$1charph_length(params_301)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj139=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "05function.c", 269, "map$2charphcharph"))));
                come_call_finalizer3(__dec_obj139,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_310=0;
                for(                o2_saved_311=(struct list$1charph*)come_increment_ref_count((module_306->mParams)),it_314=list$1charph_begin((o2_saved_311));                !list$1charph_end((o2_saved_311));                it_314=list$1charph_next((o2_saved_311))                ){
                    ((char*)(__right_value337=map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_314)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(((char*)(__right_value332=list$1charphp_operator_load_element(params_301,i_310))), "05function.c", 273, 1)))))));
                    __right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_310++;
                }
                come_call_finalizer3(o2_saved_311,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_306->mText;
                info->sline=module_306->mSLine;
                __dec_obj140=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_306->mSName));
                __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_300 = come_decrement_ref_count2(module_name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_301,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_361=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj141=info->sname;
            info->sname=(char*)come_increment_ref_count(node_361->sname(node_361->_protocol_obj));
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_361->sline(node_361->_protocol_obj);
            if(            node_361==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_289->mNodes,(struct sNode*)come_increment_ref_count(node_361));
            parse_sharp_v5(info);
            if(            node_361->terminated(node_361->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_365=(_Bool)1;
            if(            node_361->terminated(node_361->_protocol_obj)) {
                omit_semicolon_365=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_365=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_289->mOmitSemicolon=omit_semicolon_365;
                if(                omit_semicolon_365&&in_function) {
                    list$1sNodeph_delete(result_289->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_297;
                    info->sline=sline_298;
                    __dec_obj145=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_299));
                    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_380=info->p;
                    value_381=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_382=info->p;
                    __dec_obj146=value_381;
                    value_381=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_381),info));
                    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_383[tail_382-head_380+1];
                    memset(&buf_383, 0, sizeof(char)                    *(tail_382-head_380+1)                    );
                    memcpy(buf_383,head_380,tail_382-head_380);
                    buf_383[tail_382-head_380]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_384=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_381),(char*)come_increment_ref_count(__builtin_string(buf_383)),info));
                    list$1sNodeph_push_back(result_289->mNodes,(struct sNode*)come_increment_ref_count(node_384));
                    if(value_381) { value_381 = come_decrement_ref_count2(value_381, ((struct sNode*)value_381)->finalize, ((struct sNode*)value_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_384) { node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_361) { node_361 = come_decrement_ref_count2(node_361, ((struct sNode*)node_361)->finalize, ((struct sNode*)node_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_381) { value_381 = come_decrement_ref_count2(value_381, ((struct sNode*)value_381)->finalize, ((struct sNode*)value_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_384) { node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node_361) { node_361 = come_decrement_ref_count2(node_361, ((struct sNode*)node_361)->finalize, ((struct sNode*)node_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            if(node_361) { node_361 = come_decrement_ref_count2(node_361, ((struct sNode*)node_361)->finalize, ((struct sNode*)node_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(        p_saved_292) {
            if(            info->p==0) {
                info->p=p_saved_292;
                info->sline=sline_saved_293;
                __dec_obj147=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_294));
                __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_292=((void*)0);
                sline_saved_293=0;
            }
        }
        sname_saved_294 = come_decrement_ref_count2(sname_saved_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 373, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value351=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 373, "sSemicolonNode")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj150=node_385;
            node_385=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value351,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodeph_push_back(result_289->mNodes,(struct sNode*)come_increment_ref_count(node_385));
        }
        else {
            __dec_obj151=node_385;
            node_385=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_385==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_385->terminated(node_385->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_387=(_Bool)1;
            if(            node_385->terminated(node_385->_protocol_obj)) {
                omit_semicolon_387=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_387=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_289->mOmitSemicolon=omit_semicolon_387;
            list$1sNodeph_push_back(result_289->mNodes,(struct sNode*)come_increment_ref_count(node_385));
        }
        if(node_385) { node_385 = come_decrement_ref_count2(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_388=info->p;
        head_389=info->head;
        source_390=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_390;
        info->head=source_390;
        node_391=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_391==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_289->mNodes,(struct sNode*)come_increment_ref_count(node_391));
        info->p=p_388;
        info->head=head_389;
        source_390 = come_decrement_ref_count2(source_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_391) { node_391 = come_decrement_ref_count2(node_391, ((struct sNode*)node_391)->finalize, ((struct sNode*)node_391)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_291;
    __result271__ = gComeFunResultObject = __result_obj__ = result_289;
    come_call_finalizer3(result_289,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_295;
int i_296;
    for(    i_295=0;    i_295<self->size;    i_295++    ){
        if(        self->item_existance[i_295]) {
            if(            1) {
                self->items[i_295] = come_decrement_ref_count2(self->items[i_295], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_296=0;    i_296<self->size;    i_296++    ){
        if(        self->item_existance[i_296]) {
            if(            1) {
                self->keys[i_296] = come_decrement_ref_count2(self->keys[i_296], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_303;
unsigned int hash_304;
unsigned int it_305;
struct sClassModule* __result228__;
struct sClassModule* __result229__;
struct sClassModule* __result230__;
struct sClassModule* __result231__;
default_value_303 = (void*)0;
    memset(&default_value_303,0,sizeof(struct sClassModule*));
    hash_304=charp_get_hash_key(((char*)key))%self->size;
    it_305=hash_304;
    while((_Bool)1) {
        if(        self->item_existance[it_305]) {
            if(            charp_equals(self->keys[it_305],key)) {
                __result228__ = gComeFunResultObject = __result_obj__ = self->items[it_305];
                come_call_finalizer3(default_value_303,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result228__;
            }
            it_305++;
            if(            it_305>=self->size) {
                it_305=0;
            }
            else if(            it_305==hash_304) {
                __result229__ = gComeFunResultObject = __result_obj__ = default_value_303;
                come_call_finalizer3(default_value_303,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result229__;
            }
        }
        else {
            __result230__ = gComeFunResultObject = __result_obj__ = default_value_303;
            come_call_finalizer3(default_value_303,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result230__;
        }
    }
    __result231__ = gComeFunResultObject = __result_obj__ = default_value_303;
    come_call_finalizer3(default_value_303,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj134;
char* __dec_obj135;
struct list$1charph* __dec_obj136;
char* __dec_obj137;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj134=self->mName;
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj135=self->mText;
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj136=self->mParams;
            come_call_finalizer3(__dec_obj136,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj137=self->mSName;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
int i_307;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct list$1charp* __dec_obj138;
struct map$2charphcharph* __result234__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value325=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2319, "char*%"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value326=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2320, "char*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value327=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2321, "bool"))));
    for(    i_307=0;    i_307<128;    i_307++    ){
        self->item_existance[i_307]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj138=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2331, "list$1charp"))));
    come_call_finalizer3(__dec_obj138,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result233__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_308;
int i_309;
    for(    i_308=0;    i_308<self->size;    i_308++    ){
        if(        self->item_existance[i_308]) {
            if(            1) {
                self->items[i_308] = come_decrement_ref_count2(self->items[i_308], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_309=0;    i_309<self->size;    i_309++    ){
        if(        self->item_existance[i_309]) {
            if(            1) {
                self->keys[i_309] = come_decrement_ref_count2(self->keys[i_309], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_312;
char* __result235__;
char* __result236__;
char* result_313;
char* __result237__;
result_312 = (void*)0;
result_313 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_312,0,sizeof(char*));
        __result235__ = gComeFunResultObject = __result_obj__ = result_312;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    self->it=self->head;
    if(    self->it) {
        __result236__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    memset(&result_313,0,sizeof(char*));
    __result237__ = gComeFunResultObject = __result_obj__ = result_313;
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_315;
char* __result238__;
char* __result239__;
char* result_316;
char* __result240__;
result_315 = (void*)0;
result_316 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_315,0,sizeof(char*));
        __result238__ = gComeFunResultObject = __result_obj__ = result_315;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result239__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    memset(&result_316,0,sizeof(char*));
    __result240__ = gComeFunResultObject = __result_obj__ = result_316;
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_317;
int i_318;
char* __result241__;
char* default_value_319;
char* __result242__;
default_value_319 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_317=self->head;
    i_318=0;
    while(it_317!=((void*)0)) {
        if(        position==i_318) {
            __result241__ = gComeFunResultObject = __result_obj__ = it_317->item;
            gComeFunResultObject = (void*)0;
            return __result241__;
        }
        it_317=it_317->next;
        i_318++;
    }
    memset(&default_value_319,0,sizeof(char*));
    __result242__ = gComeFunResultObject = __result_obj__ = default_value_319;
    default_value_319 = come_decrement_ref_count2(default_value_319, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
char* __result264__;
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    __result264__ = gComeFunResultObject = __result_obj__ = item;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_337;
unsigned int it_338;
_Bool same_key_exist_355;
char* it2_358;
struct map$2charphcharph* __result263__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_337=charp_get_hash_key(key)%self->size;
    it_338=hash_337;
    while((_Bool)1) {
        if(        self->item_existance[it_338]) {
            if(            charp_equals(self->keys[it_338],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_338]);
                    self->keys[it_338] = come_decrement_ref_count2(self->keys[it_338], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_338]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_338]);
                    self->keys[it_338]=key;
                }
                if(                1) {
                    self->items[it_338] = come_decrement_ref_count2(self->items[it_338], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_338]=(char*)come_increment_ref_count(item);
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
                self->items[it_338]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_338]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_355=(_Bool)0;
    for(    it2_358=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_358=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_358,key)) {
            same_key_exist_355=(_Bool)1;
        }
    }
    if(    !same_key_exist_355) {
        list$1charp_push_back(self->key_list,key);
    }
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_320;
void* __right_value334 = (void*)0;
char** keys_321;
void* __right_value335 = (void*)0;
char** items_322;
void* __right_value336 = (void*)0;
_Bool* item_existance_323;
int len_324;
char* it_327;
char* default_value_330;
char* it2_331;
unsigned int hash_334;
int n_335;
char* default_value_336;
default_value_330 = (void*)0;
default_value_336 = (void*)0;
    size_320=self->size*10;
    keys_321=(char**)come_increment_ref_count(((char**)(__right_value334=(char**)come_calloc(1, sizeof(char*)*(1*(size_320)), "/usr/local/include/comelang.h", 2547, "char*%"))));
    items_322=(char**)come_increment_ref_count(((char**)(__right_value335=(char**)come_calloc(1, sizeof(char*)*(1*(size_320)), "/usr/local/include/comelang.h", 2548, "char*%"))));
    item_existance_323=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value336=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_320)), "/usr/local/include/comelang.h", 2549, "bool"))));
    len_324=0;
    for(    it_327=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_327=map$2charphcharph_next(self)    ){
        memset(&default_value_330,0,sizeof(char*));
        it2_331=map$2charphcharph_at(self,it_327,default_value_330);
        hash_334=charp_get_hash_key(it_327)%size_320;
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
                items_322[n_335]=map$2charphcharph_at(self,it_327,default_value_336);
                len_324++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_321;
    self->items=items_322;
    self->item_existance=item_existance_323;
    self->size=size_320;
    self->len=len_324;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_325;
char* __result243__;
char* __result244__;
char* result_326;
char* __result245__;
result_325 = (void*)0;
result_326 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_325,0,sizeof(char*));
        __result243__ = gComeFunResultObject = __result_obj__ = result_325;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result244__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    memset(&result_326,0,sizeof(char*));
    __result245__ = gComeFunResultObject = __result_obj__ = result_326;
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_328;
char* __result246__;
char* __result247__;
char* result_329;
char* __result248__;
result_328 = (void*)0;
result_329 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_328,0,sizeof(char*));
        __result246__ = gComeFunResultObject = __result_obj__ = result_328;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result247__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    memset(&result_329,0,sizeof(char*));
    __result248__ = gComeFunResultObject = __result_obj__ = result_329;
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_332;
unsigned int it_333;
char* __result249__;
char* __result250__;
char* __result251__;
char* __result252__;
    hash_332=charp_get_hash_key(((char*)key))%self->size;
    it_333=hash_332;
    while((_Bool)1) {
        if(        self->item_existance[it_333]) {
            if(            charp_equals(self->keys[it_333],key)) {
                __result249__ = gComeFunResultObject = __result_obj__ = self->items[it_333];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result249__;
            }
            it_333++;
            if(            it_333>=self->size) {
                it_333=0;
            }
            else if(            it_333==hash_332) {
                __result250__ = gComeFunResultObject = __result_obj__ = default_value;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result250__;
            }
        }
        else {
            __result251__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result251__;
        }
    }
    __result252__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_339;
struct list_item$1charp* it_340;
struct list$1charp* __result256__;
    it2_339=0;
    it_340=self->head;
    while(it_340!=((void*)0)) {
        if(        charp_equals(it_340->item,item)) {
            list$1charp_delete(self,it2_339,it2_339+1);
            break;
        }
        it2_339++;
        it_340=it_340->next;
    }
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_341;
struct list$1charp* __result253__;
struct list_item$1charp* it_344;
int i_345;
struct list_item$1charp* prev_it_346;
struct list_item$1charp* it_347;
int i_348;
struct list_item$1charp* prev_it_349;
struct list_item$1charp* it_350;
struct list_item$1charp* head_prev_it_351;
struct list_item$1charp* tail_it_352;
int i_353;
struct list_item$1charp* prev_it_354;
struct list$1charp* __result255__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_341=tail;
        tail=head;
        head=tmp_341;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result253__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_344=self->head;
        i_345=0;
        while(it_344!=((void*)0)) {
            if(            i_345<tail) {
                prev_it_346=it_344;
                it_344=it_344->next;
                i_345++;
                come_call_finalizer3(prev_it_346,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_345==tail) {
                self->head=it_344;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_344=it_344->next;
                i_345++;
            }
        }
    }
    else if(    tail==self->len) {
        it_347=self->head;
        i_348=0;
        while(it_347!=((void*)0)) {
            if(            i_348==head) {
                self->tail=it_347->prev;
                self->tail->next=((void*)0);
            }
            if(            i_348>=head) {
                prev_it_349=it_347;
                it_347=it_347->next;
                i_348++;
                come_call_finalizer3(prev_it_349,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_347=it_347->next;
                i_348++;
            }
        }
    }
    else {
        it_350=self->head;
        head_prev_it_351=((void*)0);
        tail_it_352=((void*)0);
        i_353=0;
        while(it_350!=((void*)0)) {
            if(            i_353==head) {
                head_prev_it_351=it_350->prev;
            }
            if(            i_353==tail) {
                tail_it_352=it_350;
            }
            if(            i_353>=head&&i_353<tail) {
                prev_it_354=it_350;
                it_350=it_350->next;
                i_353++;
                come_call_finalizer3(prev_it_354,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_350=it_350->next;
                i_353++;
            }
        }
        if(        head_prev_it_351!=((void*)0)) {
            head_prev_it_351->next=tail_it_352;
        }
        if(        tail_it_352!=((void*)0)) {
            tail_it_352->prev=head_prev_it_351;
        }
    }
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_342;
struct list_item$1charp* prev_it_343;
struct list$1charp* __result254__;
    it_342=self->head;
    while(it_342!=((void*)0)) {
        prev_it_343=it_342;
        it_342=it_342->next;
        come_call_finalizer3(prev_it_343,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_356;
char* __result257__;
char* __result258__;
char* result_357;
char* __result259__;
result_356 = (void*)0;
result_357 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_356,0,sizeof(char*));
        __result257__ = gComeFunResultObject = __result_obj__ = result_356;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    self->it=self->head;
    if(    self->it) {
        __result258__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    memset(&result_357,0,sizeof(char*));
    __result259__ = gComeFunResultObject = __result_obj__ = result_357;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_359;
char* __result260__;
char* __result261__;
char* result_360;
char* __result262__;
result_359 = (void*)0;
result_360 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_359,0,sizeof(char*));
        __result260__ = gComeFunResultObject = __result_obj__ = result_359;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result261__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    memset(&result_360,0,sizeof(char*));
    __result262__ = gComeFunResultObject = __result_obj__ = result_360;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value341 = (void*)0;
struct list_item$1sNodeph* litem_362;
struct sNode* __dec_obj142;
void* __right_value342 = (void*)0;
struct list_item$1sNodeph* litem_363;
struct sNode* __dec_obj143;
void* __right_value343 = (void*)0;
struct list_item$1sNodeph* litem_364;
struct sNode* __dec_obj144;
struct list$1sNodeph* __result265__;
    if(    self->len==0) {
        litem_362=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value341=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1sNodeph"))));
        litem_362->prev=((void*)0);
        litem_362->next=((void*)0);
        __dec_obj142=litem_362->item;
        litem_362->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_362;
        self->head=litem_362;
    }
    else if(    self->len==1) {
        litem_363=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value342=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1sNodeph"))));
        litem_363->prev=self->head;
        litem_363->next=((void*)0);
        __dec_obj143=litem_363->item;
        litem_363->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_363;
        self->head->next=litem_363;
    }
    else {
        litem_364=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value343=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1sNodeph"))));
        litem_364->prev=self->tail;
        litem_364->next=((void*)0);
        __dec_obj144=litem_364->item;
        litem_364->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_364;
        self->tail=litem_364;
    }
    self->len++;
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_366;
struct list$1sNodeph* __result266__;
struct list_item$1sNodeph* it_369;
int i_370;
struct list_item$1sNodeph* prev_it_371;
struct list_item$1sNodeph* it_372;
int i_373;
struct list_item$1sNodeph* prev_it_374;
struct list_item$1sNodeph* it_375;
struct list_item$1sNodeph* head_prev_it_376;
struct list_item$1sNodeph* tail_it_377;
int i_378;
struct list_item$1sNodeph* prev_it_379;
struct list$1sNodeph* __result268__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_366=tail;
        tail=head;
        head=tmp_366;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result266__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_369=self->head;
        i_370=0;
        while(it_369!=((void*)0)) {
            if(            i_370<tail) {
                prev_it_371=it_369;
                it_369=it_369->next;
                i_370++;
                come_call_finalizer3(prev_it_371,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_370==tail) {
                self->head=it_369;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_369=it_369->next;
                i_370++;
            }
        }
    }
    else if(    tail==self->len) {
        it_372=self->head;
        i_373=0;
        while(it_372!=((void*)0)) {
            if(            i_373==head) {
                self->tail=it_372->prev;
                self->tail->next=((void*)0);
            }
            if(            i_373>=head) {
                prev_it_374=it_372;
                it_372=it_372->next;
                i_373++;
                come_call_finalizer3(prev_it_374,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_372=it_372->next;
                i_373++;
            }
        }
    }
    else {
        it_375=self->head;
        head_prev_it_376=((void*)0);
        tail_it_377=((void*)0);
        i_378=0;
        while(it_375!=((void*)0)) {
            if(            i_378==head) {
                head_prev_it_376=it_375->prev;
            }
            if(            i_378==tail) {
                tail_it_377=it_375;
            }
            if(            i_378>=head&&i_378<tail) {
                prev_it_379=it_375;
                it_375=it_375->next;
                i_378++;
                come_call_finalizer3(prev_it_379,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_375=it_375->next;
                i_378++;
            }
        }
        if(        head_prev_it_376!=((void*)0)) {
            head_prev_it_376->next=tail_it_377;
        }
        if(        tail_it_377!=((void*)0)) {
            tail_it_377->prev=head_prev_it_376;
        }
    }
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_367;
struct list_item$1sNodeph* prev_it_368;
struct list$1sNodeph* __result267__;
    it_367=self->head;
    while(it_367!=((void*)0)) {
        prev_it_368=it_367;
        it_367=it_367->next;
        come_call_finalizer3(prev_it_368,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
char* __dec_obj148;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj148=self->sname;
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result269__;
void* __right_value352 = (void*)0;
struct sSemicolonNode* result_386;
void* __right_value353 = (void*)0;
char* __dec_obj149;
struct sSemicolonNode* __result270__;
    if(    self==(void*)0) {
        __result269__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    result_386=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"));
    if(    self!=((void*)0)) {
        result_386->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj149=result_386->sname;
        result_386->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_386->sline_real=self->sline_real;
    }
    __result270__ = gComeFunResultObject = __result_obj__ = result_386;
    come_call_finalizer3(result_386,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_392;
struct sVarTable* old_table_393;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sVarTable* __dec_obj152;
struct sVarTable* current_loop_vtable_394;
struct list$1sTypeph* param_types__395;
struct list$1charph* param_names__396;
int i_397;
struct list$1charph* o2_saved_398;
char* name_399;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct sType* type_400;
void* __right_value362 = (void*)0;
int block_level_404;
int i_405;
struct list$1sNodeph* o2_saved_406;
struct sNode* node_409;
struct list$1sRightValueObjectph* right_value_objects_412;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj157;
char* __dec_obj158;
char* __dec_obj159;
int stack_num_before_417;
int sline_418;
void* __right_value365 = (void*)0;
char* sname_419;
void* __right_value366 = (void*)0;
char* __dec_obj160;
_Bool Value_420;
void* __right_value367 = (void*)0;
struct CVALUE* come_value_421;
void* __right_value372 = (void*)0;
struct CVALUE* come_value2_422;
void* __right_value373 = (void*)0;
char* __dec_obj164;
void* __right_value374 = (void*)0;
struct CVALUE* come_value2_424;
struct sVar* var__425;
void* __right_value375 = (void*)0;
struct CVALUE* come_value3_426;
void* __right_value376 = (void*)0;
_Bool _if_conditional2;
void* __right_value377 = (void*)0;
struct sType* __dec_obj165;
void* __right_value378 = (void*)0;
char* c_value_443;
void* __right_value379 = (void*)0;
char* __dec_obj166;
void* __right_value380 = (void*)0;
char* __dec_obj167;
void* __right_value381 = (void*)0;
char* __dec_obj168;
_Bool Value_444;
void* __right_value382 = (void*)0;
char* __dec_obj169;
struct list$1sRightValueObjectph* __dec_obj170;
void* __if_result__0_447 = (void*)0;
struct list$1sVarph* o2_saved_448;
struct sVar* it_451;
struct list$1sVarph* __dec_obj176;
memset(&i_397, 0, sizeof(int));
memset(&i_405, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_392=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_393=info->lv_table;
    if(    !no_var_table) {
        __dec_obj152=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 447, "sVarTable")),(_Bool)0,old_table_393));
        come_call_finalizer3(__dec_obj152,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_394=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__395=info->param_types;
    param_names__396=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_398=(param_names),name_399=list$1charph_begin((o2_saved_398));        !list$1charph_end((o2_saved_398));        name_399=list$1charph_next((o2_saved_398))        ){
            type_400=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value360=list$1sTypephp_operator_load_element(param_types,i_397))), "05function.c", 465, 2))));
            come_call_finalizer3(__right_value360,sType_finalize, 0, 1, 0, 0, (void*)0);
            type_400->mFunctionParam=(_Bool)1;
            type_400->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_399,(struct sType*)come_increment_ref_count(sType_clone(type_400)),info);
            i_397++;
            come_call_finalizer3(type_400,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_404=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_406=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_409=list$1sNodeph_begin((o2_saved_406));        !list$1sNodeph_end((o2_saved_406));        node_409=list$1sNodeph_next((o2_saved_406))        ){
            right_value_objects_412=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj157=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 484, "list$1sRightValueObjectph"))));
            come_call_finalizer3(__dec_obj157,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj158=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj159=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_417=list$1CVALUEph_length(info->stack);
            sline_418=info->sline;
            sname_419=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_409->sline(node_409->_protocol_obj);
            __dec_obj160=info->sname;
            info->sname=(char*)come_increment_ref_count(node_409->sname(node_409->_protocol_obj));
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_405==list$1sNodeph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_420=node_compile(node_409,info);
                if(                !Value_420) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEph_length(info->stack)==stack_num_before_417+1) {
                    come_value_421=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_421->type->mClass->mName,"void")&&come_value_421->type->mPointerNum==0) {
                        come_value2_422=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_421));
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_422));
                        __dec_obj164=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_422->c_value));
                        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_422,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_424=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_421));
                        var__425=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__425) {
                            come_value3_426=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 520, "CVALUE"));
                            if(                            var__425->mType->mClass=="void"&&var__425->mType->mPointerNum==1) {
                                if(                                (_if_conditional2=(!check_assign_type("invalid if result value",var__425->mType,((struct sType*)(__right_value376=sType_clone(come_value_421->type))),come_value3_426,info,(_Bool)1,(_Bool)1,info))),                                come_call_finalizer3(__right_value376,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj165=var__425->mType;
                            var__425->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_421->type));
                            come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_421->type->mHeap) {
                                c_value_443=(char*)come_increment_ref_count(increment_ref_count_object(come_value_421->type,come_value_421->c_value,info));
                                __dec_obj166=come_value2_424->c_value;
                                come_value2_424->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__425->mCValueName,c_value_443));
                                __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                                c_value_443 = come_decrement_ref_count2(c_value_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj167=come_value2_424->c_value;
                                come_value2_424->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__425->mCValueName,come_value_421->c_value));
                                __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_426,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_424));
                        __dec_obj168=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_424->c_value));
                        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_424,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_421,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_444=node_compile(node_409,info);
                if(                !Value_444) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_418;
            __dec_obj169=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_419));
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_417);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectph_reset(info->right_value_objects);
            }
            __dec_obj170=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_412);
            come_call_finalizer3(__dec_obj170,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_405++;
            come_call_finalizer3(right_value_objects_412,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_419 = come_decrement_ref_count2(sname_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_406,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_404==0) {
            for(            o2_saved_448=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_451=list$1sVarph_begin((o2_saved_448));            !list$1sVarph_end((o2_saved_448));            it_451=list$1sVarph_next((o2_saved_448))            ){
                free_object(it_451->mType,it_451->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer3(o2_saved_448,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj176=info->match_it_var;
            __if_result__0_447=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj176,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(__if_result__0_447,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_393;
    info->block_level=block_level_404;
    info->param_types=param_types__395;
    info->param_names=param_names__396;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_394;
    info->inhibits_output_code=inhibits_output_code_392;
    return 0;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_401;
int i_402;
struct sType* __result272__;
struct sType* default_value_403;
struct sType* __result273__;
default_value_403 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_401=self->head;
    i_402=0;
    while(it_401!=((void*)0)) {
        if(        position==i_402) {
            __result272__ = gComeFunResultObject = __result_obj__ = it_401->item;
            gComeFunResultObject = (void*)0;
            return __result272__;
        }
        it_401=it_401->next;
        i_402++;
    }
    memset(&default_value_403,0,sizeof(struct sType*));
    __result273__ = gComeFunResultObject = __result_obj__ = default_value_403;
    come_call_finalizer3(default_value_403,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_407;
struct sNode* __result274__;
struct sNode* __result275__;
struct sNode* result_408;
struct sNode* __result276__;
result_407 = (void*)0;
result_408 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_407,0,sizeof(struct sNode*));
        __result274__ = gComeFunResultObject = __result_obj__ = result_407;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    self->it=self->head;
    if(    self->it) {
        __result275__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    memset(&result_408,0,sizeof(struct sNode*));
    __result276__ = gComeFunResultObject = __result_obj__ = result_408;
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_410;
struct sNode* __result277__;
struct sNode* __result278__;
struct sNode* result_411;
struct sNode* __result279__;
result_410 = (void*)0;
result_411 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_410,0,sizeof(struct sNode*));
        __result277__ = gComeFunResultObject = __result_obj__ = result_410;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result278__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    memset(&result_411,0,sizeof(struct sNode*));
    __result279__ = gComeFunResultObject = __result_obj__ = result_411;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result280__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_413;
struct list_item$1sRightValueObjectph* prev_it_414;
    it_413=self->head;
    while(it_413!=((void*)0)) {
        prev_it_414=it_413;
        it_413=it_413->next;
        come_call_finalizer3(prev_it_414,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj153;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj153=self->item;
            come_call_finalizer3(__dec_obj153,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj154=self->mType;
            come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj155=self->mVarName;
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj156=self->mFunName;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_415;
struct list_item$1sRightValueObjectph* prev_it_416;
    it_415=self->head;
    while(it_415!=((void*)0)) {
        prev_it_416=it_415;
        it_415=it_415->next;
        come_call_finalizer3(prev_it_416,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct CVALUE* __result281__;
void* __right_value368 = (void*)0;
struct CVALUE* result_423;
void* __right_value369 = (void*)0;
char* __dec_obj161;
void* __right_value370 = (void*)0;
struct sType* __dec_obj162;
void* __right_value371 = (void*)0;
char* __dec_obj163;
struct CVALUE* __result282__;
    if(    self==(void*)0) {
        __result281__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    result_423=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj161=result_423->c_value;
        result_423->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj162=result_423->type;
        result_423->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_423->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_423->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj163=result_423->c_value_without_right_value_objects;
        result_423->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result282__ = gComeFunResultObject = __result_obj__ = result_423;
    come_call_finalizer3(result_423,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
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
    if(    !charp_equals(left->mName,right->mName)) {
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
    if(    !charp_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsTypephph_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_427;
struct list_item$1tuple2$2charphsTypephph* it2_428;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_427=left->head;
    it2_428=right->head;
    while(it_427!=((void*)0)) {
        if(        !tuple2$2charphsTypeph_equals(it_427->item,it2_428->item)) {
            return (_Bool)0;
        }
        it_427=it_427->next;
        it2_428=it2_428->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right){
    if(    !charp_equals(self->v1,right->v1)) {
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
struct list_item$1sTypeph* it_429;
struct list_item$1sTypeph* it2_430;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_429=left->head;
    it2_430=right->head;
    while(it_429!=((void*)0)) {
        if(        !sType_equals(it_429->item,it2_430->item)) {
            return (_Bool)0;
        }
        it_429=it_429->next;
        it2_430=it2_430->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_431;
struct list_item$1sNodeph* it2_432;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_431=left->head;
    it2_432=right->head;
    while(it_431!=((void*)0)) {
        if(        !sNode_equals(it_431->item,it2_432->item)) {
            return (_Bool)0;
        }
        it_431=it_431->next;
        it2_432=it2_432->next;
    }
    return (_Bool)1;
}

static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_433;
struct list_item$1charph* it2_434;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_433=left->head;
    it2_434=right->head;
    while(it_433!=((void*)0)) {
        if(        !charp_equals(it_433->item,it2_434->item)) {
            return (_Bool)0;
        }
        it_433=it_433->next;
        it2_434=it2_434->next;
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
struct list_item$1tuple2$2charphsTypephph* it_435;
struct list_item$1tuple2$2charphsTypephph* it2_436;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_435=left->head;
    it2_436=right->head;
    while(it_435!=((void*)0)) {
        if(        !(tuple2$2charphsTypeph_operator_equals(it_435->item,it2_436->item))) {
            return (_Bool)0;
        }
        it_435=it_435->next;
        it2_436=it2_436->next;
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
    if(    !charp_equals(left->mGenericsName,right->mGenericsName)) {
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
    if(    !bool_equals(left->mAtomic,right->mAtomic)) {
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
    if(    !charp_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
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
    if(    !charp_equals(left->mAsmName,right->mAsmName)) {
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
    if(    !charp_equals(left->mTupleName,right->mTupleName)) {
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
    if(    bool_operator_not_equals(left->mAtomic,right->mAtomic)) {
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
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&charp_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2charphsTypephph_equals(left->mFields,right->mFields)&&bool_equals(left->mOutputed,right->mOutputed)&&bool_equals(left->mOutputed2,right->mOutputed2)&&charp_equals(left->mDeclareSName,right->mDeclareSName)&&bool_equals(left->mNobodyStruct,right->mNobodyStruct)&&charp_equals(left->mParentClassName,right->mParentClassName));
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
struct list_item$1sTypeph* it_437;
struct list_item$1sTypeph* it2_438;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_437=left->head;
    it2_438=right->head;
    while(it_437!=((void*)0)) {
        if(        !(sType_operator_equals(it_437->item,it2_438->item))) {
            return (_Bool)0;
        }
        it_437=it_437->next;
        it2_438=it2_438->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    return !list$1sNodeph_operator_equals(left,right);
}

static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_439;
struct list_item$1sNodeph* it2_440;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_439=left->head;
    it2_440=right->head;
    while(it_439!=((void*)0)) {
        if(        !(sNode_operator_equals(it_439->item,it2_440->item))) {
            return (_Bool)0;
        }
        it_439=it_439->next;
        it2_440=it2_440->next;
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
struct list_item$1charph* it_441;
struct list_item$1charph* it2_442;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_441=left->head;
    it2_442=right->head;
    while(it_441!=((void*)0)) {
        if(        !(string_operator_equals(it_441->item,it2_442->item))) {
            return (_Bool)0;
        }
        it_441=it_441->next;
        it2_442=it2_442->next;
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
struct list_item$1sRightValueObjectph* it_445;
struct list_item$1sRightValueObjectph* prev_it_446;
struct list$1sRightValueObjectph* __result283__;
    it_445=self->head;
    while(it_445!=((void*)0)) {
        prev_it_446=it_445;
        it_445=it_445->next;
        come_call_finalizer3(prev_it_446,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_449;
struct sVar* __result284__;
struct sVar* __result285__;
struct sVar* result_450;
struct sVar* __result286__;
result_449 = (void*)0;
result_450 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_449,0,sizeof(struct sVar*));
        __result284__ = gComeFunResultObject = __result_obj__ = result_449;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    self->it=self->head;
    if(    self->it) {
        __result285__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    memset(&result_450,0,sizeof(struct sVar*));
    __result286__ = gComeFunResultObject = __result_obj__ = result_450;
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_452;
struct sVar* __result287__;
struct sVar* __result288__;
struct sVar* result_453;
struct sVar* __result289__;
result_452 = (void*)0;
result_453 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_452,0,sizeof(struct sVar*));
        __result287__ = gComeFunResultObject = __result_obj__ = result_452;
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result288__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    memset(&result_453,0,sizeof(struct sVar*));
    __result289__ = gComeFunResultObject = __result_obj__ = result_453;
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_454;
struct list_item$1sVarph* prev_it_455;
    it_454=self->head;
    while(it_454!=((void*)0)) {
        prev_it_455=it_454;
        it_454=it_454->next;
        come_call_finalizer3(prev_it_455,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj171;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj171=self->item;
            come_call_finalizer3(__dec_obj171,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj172;
char* __dec_obj173;
struct sType* __dec_obj174;
char* __dec_obj175;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj172=self->mName;
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj173=self->mCValueName;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj174=self->mType;
            come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj175=self->mFunName;
            __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_456;
struct list_item$1sVarph* prev_it_457;
    it_456=self->head;
    while(it_456!=((void*)0)) {
        prev_it_457=it_456;
        it_456=it_456->next;
        come_call_finalizer3(prev_it_457,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
            err_msg(info,"expected next charaster is %c, but %c, caller %s %d\n",c,*info->p,info->caller_sname,info->caller_line);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
void* __result_obj__=(void*)0;
char* head_458;
_Bool dquort_459;
_Bool squort_460;
int sline_461;
int nest_462;
char* tail_463;
void* __right_value383 = (void*)0;
char* buf_464;
void* __right_value384 = (void*)0;
char* __result290__;
    head_458=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_459=(_Bool)0;
        squort_460=(_Bool)0;
        sline_461=0;
        nest_462=0;
        while(1) {
            if(            dquort_459) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_461);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_459=!dquort_459;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_461);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_461);
                        exit(2);
                    }
                }
            }
            else if(            squort_460) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_461);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_460=!squort_460;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_461);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_461);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_461=info->sline;
                info->p++;
                squort_460=!squort_460;
            }
            else if(            *info->p==34) {
                sline_461=info->sline;
                info->p++;
                dquort_459=!dquort_459;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==42) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==47) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_462++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_462==0) {
                    break;
                }
                nest_462--;
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
    tail_463=info->p;
    buf_464=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_463-head_458+1)), "05function.c", 757, "char"));
    memcpy(buf_464,head_458,tail_463-head_458);
    buf_464[tail_463-head_458]=0;
    skip_spaces_and_lf(info);
    __result290__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value384=__builtin_string(buf_464)));
    buf_464 = come_decrement_ref_count2(buf_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_465;
char* p3_466;
int i_467;
    terminated_465=(_Bool)0;
    p3_466=p;
    for(    i_467=0;    i_467<strlen(p2);    i_467++    ){
        if(        *p3_466==0) {
            terminated_465=(_Bool)1;
            break;
        }
        p3_466++;
    }
    return !terminated_465&&memcmp(p,p2,strlen(p2))==0;
}

char* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct buffer* asm_fun_name_468;
int brace_num_469;
int brace_num_470;
int len_471;
_Bool in_dquort_472;
int brace_num_473;
int nest_474;
int nest_475;
int nest_476;
int nest_477;
int nest_478;
int brace_num_479;
void* __right_value387 = (void*)0;
char* __result291__;
    asm_fun_name_468=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 782, "buffer"))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_469=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_469++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_469--;
                        if(                        brace_num_469==0) {
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
        else if(        strmemcmp(info->p,"__declspec")) {
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_470=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_470++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_470--;
                        if(                        brace_num_470==0) {
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
        else if(        strmemcmp(info->p,"_Noreturn")) {
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_471=0;
            if(            *info->p==40) {
                in_dquort_472=(_Bool)0;
                brace_num_473=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_472=!in_dquort_472;
                    }
                    else if(                    in_dquort_472) {
                        buffer_append_char(asm_fun_name_468,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_473++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_473--;
                        if(                        brace_num_473==0) {
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
        else if(        strmemcmp(info->p,"__attribute_pure__")) {
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
                nest_474=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_474++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_474--;
                        if(                        nest_474==0) {
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
                nest_475=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_475++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_475--;
                        if(                        nest_475==0) {
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
                nest_476=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_476++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_476--;
                        if(                        nest_476==0) {
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
                nest_477=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_477++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_477--;
                        if(                        nest_477==0) {
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
                nest_478=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_478++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_478--;
                        if(                        nest_478==0) {
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
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_479=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_479++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_479--;
                        if(                        brace_num_479==0) {
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
        else {
            break;
        }
    }
    __result291__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value387=buffer_to_string(asm_fun_name_468)));
    come_call_finalizer3(asm_fun_name_468,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct buffer* asm_fun_name_480;
int nest_481;
int nest_482;
int nest_483;
int nest_484;
int nest_485;
int brace_num_486;
int len_487;
_Bool in_dquort_488;
int brace_num_489;
int brace_num_490;
void* __right_value390 = (void*)0;
char* __result292__;
    asm_fun_name_480=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1139, "buffer"))));
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
                nest_481=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_481++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_481--;
                        if(                        nest_481==0) {
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
                nest_482=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_482++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_482--;
                        if(                        nest_482==0) {
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
                nest_483=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_483++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_483--;
                        if(                        nest_483==0) {
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
                nest_484=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_484++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_484--;
                        if(                        nest_484==0) {
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
                nest_485=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_485++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_485--;
                        if(                        nest_485==0) {
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
                brace_num_486=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_486++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_486--;
                        if(                        brace_num_486==0) {
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
            len_487=0;
            if(            *info->p==40) {
                in_dquort_488=(_Bool)0;
                brace_num_489=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_488=!in_dquort_488;
                    }
                    else if(                    in_dquort_488) {
                        buffer_append_char(asm_fun_name_480,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_489++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_489--;
                        if(                        brace_num_489==0) {
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
                brace_num_490=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_490++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_490--;
                        if(                        brace_num_490==0) {
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
        else {
            break;
        }
    }
    __result292__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value390=buffer_to_string(asm_fun_name_480)));
    come_call_finalizer3(asm_fun_name_480,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value391 = (void*)0;
char* __dec_obj177;
char* head_491;
int head_sline_492;
void* __right_value392 = (void*)0;
char* buf_493;
void* __right_value393 = (void*)0;
struct sNode* node_494;
_Bool Value_495;
    while(*info->p) {
        __dec_obj177=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(string_clone(info->sname));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_491=info->p;
        head_sline_492=info->sline;
        buf_493=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_493 = come_decrement_ref_count2(buf_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_494=(struct sNode*)come_increment_ref_count(top_level_v99(buf_493,head_491,head_sline_492,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_494!=((void*)0)) {
            Value_495=node_compile(node_494,info);
            if(            !Value_495) {
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
            buf_493 = come_decrement_ref_count2(buf_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_494) { node_494 = come_decrement_ref_count2(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_493 = come_decrement_ref_count2(buf_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_494) { node_494 = come_decrement_ref_count2(node_494, ((struct sNode*)node_494)->finalize, ((struct sNode*)node_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value394 = (void*)0;
char* name_496;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sType* result_type_497;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct sType* __list_values1___498[5];
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1sTypeph* param_types_503;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
char* __list_values2___504[5];
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct list$1charph* param_names_506;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct list$1charph* param_default_parametors_507;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sFun* main_fun_508;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
char* name_530;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct sType* result_type_531;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct sType* __list_values3___532[1];
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1sTypeph* param_types_533;
void* __right_value439 = (void*)0;
char* __list_values4___534[1];
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct list$1charph* param_names_535;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1charph* param_default_parametors_536;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sFun* main_fun_537;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
char* name_538;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sType* result_type_539;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sType* __list_values5___540[7];
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct list$1sTypeph* param_types_541;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
char* __list_values6___542[7];
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct list$1charph* param_names_543;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct list$1charph* param_default_parametors_544;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sFun* main_fun_545;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
char* name_546;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sType* result_type_547;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sType* __list_values7___548[5];
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct list$1sTypeph* param_types_549;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
char* __list_values8___550[5];
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct list$1charph* param_names_551;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct list$1charph* param_default_parametors_552;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sFun* main_fun_553;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
char* name_554;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* result_type_555;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sType* __list_values9___556[1];
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct list$1sTypeph* param_types_557;
void* __right_value520 = (void*)0;
char* __list_values10___558[1];
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct list$1charph* param_names_559;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct list$1charph* param_default_parametors_560;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sFun* main_fun_561;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
char* name_562;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sType* result_type_563;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sType* __list_values11___564[4];
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct list$1sTypeph* param_types_565;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
char* __list_values12___566[4];
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct list$1charph* param_names_567;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct list$1charph* param_default_parametors_568;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sFun* main_fun_569;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
char* name_570;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sType* result_type_571;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sType* __list_values13___572[3];
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct list$1sTypeph* param_types_573;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
char* __list_values14___574[3];
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1charph* param_names_575;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct list$1charph* param_default_parametors_576;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct sFun* main_fun_577;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
char* name_578;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct sType* result_type_579;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sType* __list_values15___580[1];
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct list$1sTypeph* param_types_581;
void* __right_value589 = (void*)0;
char* __list_values16___582[1];
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct list$1charph* param_names_583;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1charph* param_default_parametors_584;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sFun* main_fun_585;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
char* name_586;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sType* result_type_587;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct sType* __list_values17___588[3];
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct list$1sTypeph* param_types_589;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
char* __list_values18___590[3];
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct list$1charph* param_names_591;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct list$1charph* param_default_parametors_592;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sFun* main_fun_593;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
char* name_594;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sType* result_type_595;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct list$1sTypeph* param_types_596;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct list$1charph* param_names_597;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct list$1charph* param_default_parametors_598;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct sFun* main_fun_599;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
char* name_600;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct sType* result_type_601;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct sType* __list_values19___602[4];
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct list$1sTypeph* param_types_603;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
char* __list_values20___604[4];
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct list$1charph* param_names_605;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct list$1charph* param_default_parametors_606;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sFun* main_fun_607;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
char* name_608;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sType* result_type_609;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct list$1sTypeph* param_types_610;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct list$1charph* param_names_611;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1charph* param_default_parametors_612;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sFun* fun_613;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
char* name_614;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct sType* result_type_615;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct list$1sTypeph* param_types_616;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct list$1charph* param_names_617;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct list$1charph* param_default_parametors_618;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sFun* fun_619;
void* __right_value689 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_496=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_497=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1487, "sType")),"void*",(_Bool)0,info));
        param_types_503=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___498[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value398=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1488, "sType")),"int",(_Bool)0,info)))),
__list_values1___498[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value400=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1488, "sType")),"int",(_Bool)0,info)))),
__list_values1___498[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value402=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1488, "sType")),"char*",(_Bool)0,info)))),
__list_values1___498[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value404=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1488, "sType")),"int",(_Bool)0,info)))),
__list_values1___498[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value406=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1488, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1488, "struct list$1sTypeph")),5,__list_values1___498)));
        come_call_finalizer3(__right_value398,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value400,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value402,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value404,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value406,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_506=(struct list$1charph*)come_increment_ref_count((__list_values2___504[0]=(char*)come_increment_ref_count(((char*)(__right_value412=__builtin_string("count")))),
__list_values2___504[1]=(char*)come_increment_ref_count(((char*)(__right_value413=__builtin_string("size")))),
__list_values2___504[2]=(char*)come_increment_ref_count(((char*)(__right_value414=__builtin_string("sname")))),
__list_values2___504[3]=(char*)come_increment_ref_count(((char*)(__right_value415=__builtin_string("sline")))),
__list_values2___504[4]=(char*)come_increment_ref_count(((char*)(__right_value416=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1489, "struct list$1charph")),5,__list_values2___504)));
        __right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_507=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1490, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_507,((void*)0));
        list$1charph_push_back(param_default_parametors_507,((void*)0));
        list$1charph_push_back(param_default_parametors_507,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_507,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_507,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_508=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1496, "sFun")),(char*)come_increment_ref_count(name_496),(struct sType*)come_increment_ref_count(result_type_497),(struct list$1sTypeph*)come_increment_ref_count(param_types_503),(struct list$1charph*)come_increment_ref_count(param_names_506),(struct list$1charph*)come_increment_ref_count(param_default_parametors_507),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_496)),(struct sFun*)come_increment_ref_count(main_fun_508));
        name_496 = come_decrement_ref_count2(name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_497,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_506,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_507,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_508,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_530=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_531=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1507, "sType")),"void*",(_Bool)0,info));
        param_types_533=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___532[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value436=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1508, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1508, "struct list$1sTypeph")),1,__list_values3___532)));
        come_call_finalizer3(__right_value436,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_535=(struct list$1charph*)come_increment_ref_count((__list_values4___534[0]=(char*)come_increment_ref_count(((char*)(__right_value439=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1509, "struct list$1charph")),1,__list_values4___534)));
        __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_536=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1510, "list$1charph"))));
        main_fun_537=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1511, "sFun")),(char*)come_increment_ref_count(name_530),(struct sType*)come_increment_ref_count(result_type_531),(struct list$1sTypeph*)come_increment_ref_count(param_types_533),(struct list$1charph*)come_increment_ref_count(param_names_535),(struct list$1charph*)come_increment_ref_count(param_default_parametors_536),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_530)),(struct sFun*)come_increment_ref_count(main_fun_537));
        name_530 = come_decrement_ref_count2(name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_533,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_535,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_536,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_537,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_538=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_539=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1522, "sType")),"void",(_Bool)0,info));
        param_types_541=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___540[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value453=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "sType")),"void*",(_Bool)0,info)))),
__list_values5___540[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value455=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "sType")),"void*",(_Bool)0,info)))),
__list_values5___540[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value457=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "sType")),"void*",(_Bool)0,info)))),
__list_values5___540[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value459=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "sType")),"void*",(_Bool)0,info)))),
__list_values5___540[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value461=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "sType")),"int",(_Bool)0,info)))),
__list_values5___540[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value463=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "sType")),"int",(_Bool)0,info)))),
__list_values5___540[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value465=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1523, "struct list$1sTypeph")),7,__list_values5___540)));
        come_call_finalizer3(__right_value453,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value455,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value457,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value459,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value461,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value463,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value465,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_543=(struct list$1charph*)come_increment_ref_count((__list_values6___542[0]=(char*)come_increment_ref_count(((char*)(__right_value468=__builtin_string("fun")))),
__list_values6___542[1]=(char*)come_increment_ref_count(((char*)(__right_value469=__builtin_string("mem")))),
__list_values6___542[2]=(char*)come_increment_ref_count(((char*)(__right_value470=__builtin_string("protocol_fun")))),
__list_values6___542[3]=(char*)come_increment_ref_count(((char*)(__right_value471=__builtin_string("protocol_obj")))),
__list_values6___542[4]=(char*)come_increment_ref_count(((char*)(__right_value472=__builtin_string("call_finalizer_only")))),
__list_values6___542[5]=(char*)come_increment_ref_count(((char*)(__right_value473=__builtin_string("no_decrement")))),
__list_values6___542[6]=(char*)come_increment_ref_count(((char*)(__right_value474=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1524, "struct list$1charph")),7,__list_values6___542)));
        __right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value470 = come_decrement_ref_count2(__right_value470, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_544=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1525, "list$1charph"))));
        main_fun_545=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1526, "sFun")),(char*)come_increment_ref_count(name_538),(struct sType*)come_increment_ref_count(result_type_539),(struct list$1sTypeph*)come_increment_ref_count(param_types_541),(struct list$1charph*)come_increment_ref_count(param_names_543),(struct list$1charph*)come_increment_ref_count(param_default_parametors_544),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_538)),(struct sFun*)come_increment_ref_count(main_fun_545));
        name_538 = come_decrement_ref_count2(name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_539,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_541,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_543,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_544,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_545,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_546=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_547=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1537, "sType")),"void*",(_Bool)0,info));
        param_types_549=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___548[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value488=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1538, "sType")),"void*",(_Bool)0,info)))),
__list_values7___548[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value490=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1538, "sType")),"void*",(_Bool)0,info)))),
__list_values7___548[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value492=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1538, "sType")),"void*",(_Bool)0,info)))),
__list_values7___548[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value494=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1538, "sType")),"bool",(_Bool)0,info)))),
__list_values7___548[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value496=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1538, "sType")),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1538, "struct list$1sTypeph")),5,__list_values7___548)));
        come_call_finalizer3(__right_value488,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value490,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value492,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value494,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value496,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_551=(struct list$1charph*)come_increment_ref_count((__list_values8___550[0]=(char*)come_increment_ref_count(((char*)(__right_value499=__builtin_string("mem")))),
__list_values8___550[1]=(char*)come_increment_ref_count(((char*)(__right_value500=__builtin_string("protocol_fun")))),
__list_values8___550[2]=(char*)come_increment_ref_count(((char*)(__right_value501=__builtin_string("protocol_obj")))),
__list_values8___550[3]=(char*)come_increment_ref_count(((char*)(__right_value502=__builtin_string("no_decrement")))),
__list_values8___550[4]=(char*)come_increment_ref_count(((char*)(__right_value503=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1539, "struct list$1charph")),5,__list_values8___550)));
        __right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value503 = come_decrement_ref_count2(__right_value503, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_552=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1540, "list$1charph"))));
        main_fun_553=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1541, "sFun")),(char*)come_increment_ref_count(name_546),(struct sType*)come_increment_ref_count(result_type_547),(struct list$1sTypeph*)come_increment_ref_count(param_types_549),(struct list$1charph*)come_increment_ref_count(param_names_551),(struct list$1charph*)come_increment_ref_count(param_default_parametors_552),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_546)),(struct sFun*)come_increment_ref_count(main_fun_553));
        name_546 = come_decrement_ref_count2(name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_549,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_551,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_552,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_553,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_554=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_555=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1552, "sType")),"void",(_Bool)0,info));
        param_types_557=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___556[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value517=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1553, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1553, "struct list$1sTypeph")),1,__list_values9___556)));
        come_call_finalizer3(__right_value517,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_559=(struct list$1charph*)come_increment_ref_count((__list_values10___558[0]=(char*)come_increment_ref_count(((char*)(__right_value520=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1554, "struct list$1charph")),1,__list_values10___558)));
        __right_value520 = come_decrement_ref_count2(__right_value520, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_560=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1555, "list$1charph"))));
        main_fun_561=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1556, "sFun")),(char*)come_increment_ref_count(name_554),(struct sType*)come_increment_ref_count(result_type_555),(struct list$1sTypeph*)come_increment_ref_count(param_types_557),(struct list$1charph*)come_increment_ref_count(param_names_559),(struct list$1charph*)come_increment_ref_count(param_default_parametors_560),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_554)),(struct sFun*)come_increment_ref_count(main_fun_561));
        name_554 = come_decrement_ref_count2(name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_555,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_557,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_559,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_560,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_561,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_562=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_563=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "sType")),"void*",(_Bool)0,info));
        param_types_565=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___564[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value534=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1568, "sType")),"void*",(_Bool)0,info)))),
__list_values11___564[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value536=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1568, "sType")),"char*",(_Bool)0,info)))),
__list_values11___564[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value538=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1568, "sType")),"int",(_Bool)0,info)))),
__list_values11___564[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value540=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1568, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1568, "struct list$1sTypeph")),4,__list_values11___564)));
        come_call_finalizer3(__right_value534,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value536,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value538,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value540,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_567=(struct list$1charph*)come_increment_ref_count((__list_values12___566[0]=(char*)come_increment_ref_count(((char*)(__right_value543=__builtin_string("block")))),
__list_values12___566[1]=(char*)come_increment_ref_count(((char*)(__right_value544=__builtin_string("sname")))),
__list_values12___566[2]=(char*)come_increment_ref_count(((char*)(__right_value545=__builtin_string("sline")))),
__list_values12___566[3]=(char*)come_increment_ref_count(((char*)(__right_value546=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1569, "struct list$1charph")),4,__list_values12___566)));
        __right_value543 = come_decrement_ref_count2(__right_value543, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value544 = come_decrement_ref_count2(__right_value544, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value545 = come_decrement_ref_count2(__right_value545, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_568=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1570, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_568,((void*)0));
        list$1charph_push_back(param_default_parametors_568,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_568,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_568,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_569=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1575, "sFun")),(char*)come_increment_ref_count(name_562),(struct sType*)come_increment_ref_count(result_type_563),(struct list$1sTypeph*)come_increment_ref_count(param_types_565),(struct list$1charph*)come_increment_ref_count(param_names_567),(struct list$1charph*)come_increment_ref_count(param_default_parametors_568),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_562)),(struct sFun*)come_increment_ref_count(main_fun_569));
        name_562 = come_decrement_ref_count2(name_562, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_563,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_565,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_567,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_568,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_569,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_570=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_571=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "sType")),"void*",(_Bool)0,info));
        param_types_573=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___572[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value563=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1587, "sType")),"void*",(_Bool)0,info)))),
__list_values13___572[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value565=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1587, "sType")),"int",(_Bool)0,info)))),
__list_values13___572[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value567=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1587, "sType")),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1587, "struct list$1sTypeph")),3,__list_values13___572)));
        come_call_finalizer3(__right_value563,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value565,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value567,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_575=(struct list$1charph*)come_increment_ref_count((__list_values14___574[0]=(char*)come_increment_ref_count(((char*)(__right_value570=__builtin_string("b")))),
__list_values14___574[1]=(char*)come_increment_ref_count(((char*)(__right_value571=__builtin_string("c")))),
__list_values14___574[2]=(char*)come_increment_ref_count(((char*)(__right_value572=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1588, "struct list$1charph")),3,__list_values14___574)));
        __right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value572 = come_decrement_ref_count2(__right_value572, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_576=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1589, "list$1charph"))));
        main_fun_577=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1590, "sFun")),(char*)come_increment_ref_count(name_570),(struct sType*)come_increment_ref_count(result_type_571),(struct list$1sTypeph*)come_increment_ref_count(param_types_573),(struct list$1charph*)come_increment_ref_count(param_names_575),(struct list$1charph*)come_increment_ref_count(param_default_parametors_576),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_570)),(struct sFun*)come_increment_ref_count(main_fun_577));
        name_570 = come_decrement_ref_count2(name_570, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_573,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_575,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_576,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_577,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_578=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_579=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1601, "sType")),"char*",(_Bool)0,info));
        param_types_581=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___580[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value586=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1602, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1602, "struct list$1sTypeph")),1,__list_values15___580)));
        come_call_finalizer3(__right_value586,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_583=(struct list$1charph*)come_increment_ref_count((__list_values16___582[0]=(char*)come_increment_ref_count(((char*)(__right_value589=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1603, "struct list$1charph")),1,__list_values16___582)));
        __right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_584=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1604, "list$1charph"))));
        main_fun_585=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1605, "sFun")),(char*)come_increment_ref_count(name_578),(struct sType*)come_increment_ref_count(result_type_579),(struct list$1sTypeph*)come_increment_ref_count(param_types_581),(struct list$1charph*)come_increment_ref_count(param_names_583),(struct list$1charph*)come_increment_ref_count(param_default_parametors_584),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_578)),(struct sFun*)come_increment_ref_count(main_fun_585));
        name_578 = come_decrement_ref_count2(name_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_581,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_583,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_584,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_585,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_586=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_587=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "sType")),"void",(_Bool)0,info));
        param_types_589=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___588[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value603=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1664, "sType")),"int",(_Bool)0,info)))),
__list_values17___588[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value605=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1664, "sType")),"int",(_Bool)0,info)))),
__list_values17___588[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value607=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1664, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1664, "struct list$1sTypeph")),3,__list_values17___588)));
        come_call_finalizer3(__right_value603,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value605,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value607,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_591=(struct list$1charph*)come_increment_ref_count((__list_values18___590[0]=(char*)come_increment_ref_count(((char*)(__right_value610=xsprintf("come_malloc")))),
__list_values18___590[1]=(char*)come_increment_ref_count(((char*)(__right_value611=xsprintf("come_debug")))),
__list_values18___590[2]=(char*)come_increment_ref_count(((char*)(__right_value612=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1665, "struct list$1charph")),3,__list_values18___590)));
        __right_value610 = come_decrement_ref_count2(__right_value610, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value611 = come_decrement_ref_count2(__right_value611, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_592=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1666, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_592,((void*)0));
        main_fun_593=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1668, "sFun")),(char*)come_increment_ref_count(name_586),(struct sType*)come_increment_ref_count(result_type_587),(struct list$1sTypeph*)come_increment_ref_count(param_types_589),(struct list$1charph*)come_increment_ref_count(param_names_591),(struct list$1charph*)come_increment_ref_count(param_default_parametors_592),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_586)),(struct sFun*)come_increment_ref_count(main_fun_593));
        name_586 = come_decrement_ref_count2(name_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_587,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_589,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_591,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_592,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_593,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_594=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_595=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1679, "sType")),"void",(_Bool)0,info));
        param_types_596=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1680, "list$1sTypeph"))));
        param_names_597=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1681, "list$1charph"))));
        param_default_parametors_598=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1682, "list$1charph"))));
        main_fun_599=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1683, "sFun")),(char*)come_increment_ref_count(name_594),(struct sType*)come_increment_ref_count(result_type_595),(struct list$1sTypeph*)come_increment_ref_count(param_types_596),(struct list$1charph*)come_increment_ref_count(param_names_597),(struct list$1charph*)come_increment_ref_count(param_default_parametors_598),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_594)),(struct sFun*)come_increment_ref_count(main_fun_599));
        name_594 = come_decrement_ref_count2(name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_595,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_596,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_597,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_598,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_599,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_600=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_601=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1694, "sType")),"void*",(_Bool)0,info));
        param_types_603=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___602[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value640=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1695, "sType")),"void*",(_Bool)0,info)))),
__list_values19___602[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value642=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1695, "sType")),"char*",(_Bool)0,info)))),
__list_values19___602[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value644=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1695, "sType")),"int",(_Bool)0,info)))),
__list_values19___602[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value646=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1695, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1695, "struct list$1sTypeph")),4,__list_values19___602)));
        come_call_finalizer3(__right_value640,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value642,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value644,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value646,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_605=(struct list$1charph*)come_increment_ref_count((__list_values20___604[0]=(char*)come_increment_ref_count(((char*)(__right_value649=__builtin_string("mem")))),
__list_values20___604[1]=(char*)come_increment_ref_count(((char*)(__right_value650=__builtin_string("sname")))),
__list_values20___604[2]=(char*)come_increment_ref_count(((char*)(__right_value651=__builtin_string("sline")))),
__list_values20___604[3]=(char*)come_increment_ref_count(((char*)(__right_value652=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1696, "struct list$1charph")),4,__list_values20___604)));
        __right_value649 = come_decrement_ref_count2(__right_value649, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value650 = come_decrement_ref_count2(__right_value650, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value651 = come_decrement_ref_count2(__right_value651, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value652 = come_decrement_ref_count2(__right_value652, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_606=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1697, "list$1charph"))));
        main_fun_607=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1698, "sFun")),(char*)come_increment_ref_count(name_600),(struct sType*)come_increment_ref_count(result_type_601),(struct list$1sTypeph*)come_increment_ref_count(param_types_603),(struct list$1charph*)come_increment_ref_count(param_names_605),(struct list$1charph*)come_increment_ref_count(param_default_parametors_606),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_600)),(struct sFun*)come_increment_ref_count(main_fun_607));
        name_600 = come_decrement_ref_count2(name_600, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_603,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_605,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_606,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_607,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_608=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_609=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1709, "sType")),"void",(_Bool)0,info));
        param_types_610=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1710, "list$1sTypeph"))));
        param_names_611=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1711, "list$1charph"))));
        param_default_parametors_612=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1712, "list$1charph"))));
        fun_613=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1713, "sFun")),(char*)come_increment_ref_count(name_608),(struct sType*)come_increment_ref_count(result_type_609),(struct list$1sTypeph*)come_increment_ref_count(param_types_610),(struct list$1charph*)come_increment_ref_count(param_names_611),(struct list$1charph*)come_increment_ref_count(param_default_parametors_612),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_608)),(struct sFun*)come_increment_ref_count(fun_613));
        name_608 = come_decrement_ref_count2(name_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_609,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_610,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_611,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_612,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_613,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_614=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_615=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1741, "sType")),"void",(_Bool)0,info));
        param_types_616=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1742, "list$1sTypeph"))));
        param_names_617=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1743, "list$1charph"))));
        param_default_parametors_618=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1744, "list$1charph"))));
        fun_619=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1745, "sFun")),(char*)come_increment_ref_count(name_614),(struct sType*)come_increment_ref_count(result_type_615),(struct list$1sTypeph*)come_increment_ref_count(param_types_616),(struct list$1charph*)come_increment_ref_count(param_names_617),(struct list$1charph*)come_increment_ref_count(param_default_parametors_618),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_614)),(struct sFun*)come_increment_ref_count(fun_619));
        name_614 = come_decrement_ref_count2(name_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_616,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_617,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_618,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_619,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_499;
struct list$1sTypeph* __result294__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_499=0;    i_499<num_value;    i_499++    ){
        list$1sTypeph_push_back(self,values[i_499]);
    }
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value407 = (void*)0;
struct list_item$1sTypeph* litem_500;
struct sType* __dec_obj178;
void* __right_value408 = (void*)0;
struct list_item$1sTypeph* litem_501;
struct sType* __dec_obj179;
void* __right_value409 = (void*)0;
struct list_item$1sTypeph* litem_502;
struct sType* __dec_obj180;
struct list$1sTypeph* __result293__;
    if(    self->len==0) {
        litem_500=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value407=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1sTypeph"))));
        litem_500->prev=((void*)0);
        litem_500->next=((void*)0);
        __dec_obj178=litem_500->item;
        litem_500->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_500;
        self->head=litem_500;
    }
    else if(    self->len==1) {
        litem_501=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value408=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1sTypeph"))));
        litem_501->prev=self->head;
        litem_501->next=((void*)0);
        __dec_obj179=litem_501->item;
        litem_501->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_501;
        self->head->next=litem_501;
    }
    else {
        litem_502=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value409=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1sTypeph"))));
        litem_502->prev=self->tail;
        litem_502->next=((void*)0);
        __dec_obj180=litem_502->item;
        litem_502->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_502;
        self->tail=litem_502;
    }
    self->len++;
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_505;
struct list$1charph* __result295__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_505=0;    i_505<num_value;    i_505++    ){
        list$1charph_push_back(self,values[i_505]);
    }
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_526;
unsigned int it_527;
_Bool same_key_exist_528;
char* it2_529;
struct map$2charphsFunph* __result306__;
    if(    self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_526=charp_get_hash_key(key)%self->size;
    it_527=hash_526;
    while((_Bool)1) {
        if(        self->item_existance[it_527]) {
            if(            charp_equals(self->keys[it_527],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_527]);
                    self->keys[it_527] = come_decrement_ref_count2(self->keys[it_527], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_527]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_527]);
                    self->keys[it_527]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_527],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_527]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_527]=item;
                }
                break;
            }
            it_527++;
            if(            it_527>=self->size) {
                it_527=0;
            }
            else if(            it_527==hash_526) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_527]=(_Bool)1;
            if(            1) {
                self->keys[it_527]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_527]=key;
            }
            if(            1) {
                self->items[it_527]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_527]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_528=(_Bool)0;
    for(    it2_529=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_529=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_529,key)) {
            same_key_exist_528=(_Bool)1;
        }
    }
    if(    !same_key_exist_528) {
        list$1charp_push_back(self->key_list,key);
    }
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_509;
void* __right_value428 = (void*)0;
char** keys_510;
void* __right_value429 = (void*)0;
struct sFun** items_511;
void* __right_value430 = (void*)0;
_Bool* item_existance_512;
int len_513;
char* it_516;
struct sFun* default_value_519;
struct sFun* it2_520;
unsigned int hash_523;
int n_524;
struct sFun* default_value_525;
default_value_519 = (void*)0;
default_value_525 = (void*)0;
    size_509=self->size*10;
    keys_510=(char**)come_increment_ref_count(((char**)(__right_value428=(char**)come_calloc(1, sizeof(char*)*(1*(size_509)), "/usr/local/include/comelang.h", 2547, "char*%"))));
    items_511=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value429=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_509)), "/usr/local/include/comelang.h", 2548, "sFun*%"))));
    item_existance_512=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value430=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_509)), "/usr/local/include/comelang.h", 2549, "bool"))));
    len_513=0;
    for(    it_516=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_516=map$2charphsFunph_next(self)    ){
        memset(&default_value_519,0,sizeof(struct sFun*));
        it2_520=map$2charphsFunph_at(self,it_516,default_value_519);
        hash_523=charp_get_hash_key(it_516)%size_509;
        n_524=hash_523;
        while((_Bool)1) {
            if(            item_existance_512[n_524]) {
                n_524++;
                if(                n_524>=size_509) {
                    n_524=0;
                }
                else if(                n_524==hash_523) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_512[n_524]=(_Bool)1;
                keys_510[n_524]=it_516;
                items_511[n_524]=map$2charphsFunph_at(self,it_516,default_value_525);
                len_513++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_510;
    self->items=items_511;
    self->item_existance=item_existance_512;
    self->size=size_509;
    self->len=len_513;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_514;
char* __result296__;
char* __result297__;
char* result_515;
char* __result298__;
result_514 = (void*)0;
result_515 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_514,0,sizeof(char*));
        __result296__ = gComeFunResultObject = __result_obj__ = result_514;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result297__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    memset(&result_515,0,sizeof(char*));
    __result298__ = gComeFunResultObject = __result_obj__ = result_515;
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_517;
char* __result299__;
char* __result300__;
char* result_518;
char* __result301__;
result_517 = (void*)0;
result_518 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_517,0,sizeof(char*));
        __result299__ = gComeFunResultObject = __result_obj__ = result_517;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result300__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    memset(&result_518,0,sizeof(char*));
    __result301__ = gComeFunResultObject = __result_obj__ = result_518;
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_521;
unsigned int it_522;
struct sFun* __result302__;
struct sFun* __result303__;
struct sFun* __result304__;
struct sFun* __result305__;
    hash_521=charp_get_hash_key(((char*)key))%self->size;
    it_522=hash_521;
    while((_Bool)1) {
        if(        self->item_existance[it_522]) {
            if(            charp_equals(self->keys[it_522],key)) {
                __result302__ = gComeFunResultObject = __result_obj__ = self->items[it_522];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result302__;
            }
            it_522++;
            if(            it_522>=self->size) {
                it_522=0;
            }
            else if(            it_522==hash_521) {
                __result303__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result303__;
            }
        }
        else {
            __result304__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result304__;
        }
    }
    __result305__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_620;
_Bool is_type_name_flag_621;
int sline_622;
_Bool define_struct_nobody_623;
char* p_624;
int sline_625;
void* __right_value690 = (void*)0;
char* word_626;
_Bool define_function_pointer_result_function_627;
_Bool define_variable_between_brace_628;
char* p_629;
void* __right_value691 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_630=0;
char* fun_name_631=0;
_Bool err_632=0;
void* __right_value692 = (void*)0;
char* word_633;
_Bool define_function_flag_634;
char* p_635;
void* __right_value693 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_636=0;
char* fun_name_637=0;
_Bool err_638=0;
char* word_639;
void* __right_value694 = (void*)0;
char* __dec_obj183;
void* __right_value695 = (void*)0;
char* __dec_obj184;
char* __dec_obj185;
void* __right_value696 = (void*)0;
char* __dec_obj186;
_Bool define_variable_640;
char* p_641;
void* __right_value697 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_642=0;
char* fun_name_643=0;
_Bool err_644=0;
void* __right_value698 = (void*)0;
char* word_645;
void* __right_value699 = (void*)0;
char* word_646;
char* p_647;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
char* word_648;
void* __right_value702 = (void*)0;
char* __dec_obj187;
void* __right_value703 = (void*)0;
char* word_649;
void* __right_value704 = (void*)0;
char* word_652;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct sNode* node_653;
struct sNode* __result308__;
void* __right_value707 = (void*)0;
struct sNode* __result309__;
char* header_head_654;
void* __right_value708 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_655=0;
char* fun_name_656=0;
_Bool err_657=0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct list$1sTypeph* param_types_658;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct list$1charph* param_names_659;
void* __right_value713 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_660=0;
char* param_name_661=0;
_Bool err_662=0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct list$1sTypeph* param_types2_664;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct list$1charph* param_names2_665;
void* __right_value720 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_666=0;
char* param_name_667=0;
_Bool err_668=0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
char* header_tail_670;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct sType* result_type2_671;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct tuple1$1sTypeph* __dec_obj189;
void* __right_value727 = (void*)0;
struct list$1sTypeph* __dec_obj190;
void* __right_value728 = (void*)0;
struct list$1charph* __dec_obj191;
_Bool var_args_672;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct buffer* header_buf_673;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct list$1charph* param_default_parametors_674;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct sFun* fun_675;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct sFun* fun2_679;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value777 = (void*)0;
struct sNode* __result337__;
void* __right_value778 = (void*)0;
struct sNode* node_714;
struct sNode* __result338__;
void* __right_value779 = (void*)0;
struct sNode* node_715;
char* source_tail_716;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
struct buffer* header_717;
struct sNode* __result339__;
void* __right_value782 = (void*)0;
char* buf2_718;
void* __right_value783 = (void*)0;
struct sNode* __result340__;
    info->in_top_level=(_Bool)1;
    source_head_620=info->p;
    is_type_name_flag_621=is_type_name(buf,info);
    sline_622=info->sline;
    define_struct_nobody_623=(_Bool)0;
    {
        p_624=info->p;
        sline_625=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_626=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_623=(_Bool)1;
                }
                word_626 = come_decrement_ref_count2(word_626, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_625;
    }
    define_function_pointer_result_function_627=(_Bool)0;
    define_variable_between_brace_628=(_Bool)0;
    if(    is_type_name_flag_621) {
        p_629=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value691=backtrace_parse_type((_Bool)0,info)));
            result_type_630=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_631=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_632=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value691,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_627=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_633=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_633,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_628=(_Bool)1;
                            }
                        }
                        word_633 = come_decrement_ref_count2(word_633, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_630,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_631 = come_decrement_ref_count2(fun_name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_622;
    }
    define_function_flag_634=(_Bool)0;
    if(    is_type_name_flag_621&&!define_function_pointer_result_function_627&&charp_operator_not_equals(buf,"__typeof__")) {
        p_635=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value693=backtrace_parse_type((_Bool)0,info)));
            result_type_636=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_637=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_638=multiple_assign_var2->v3;
            come_call_finalizer3(__right_value693,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_636,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_637 = come_decrement_ref_count2(fun_name_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_639=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj183=word_639;
                word_639=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_639,"extern")) {
                    __dec_obj184=word_639;
                    word_639=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj185=word_639;
                word_639=((void*)0);
                __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_639) {
                if(                is_type_name(word_639,info)) {
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
                        __dec_obj186=word_639;
                        word_639=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_639)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_621) {
                        define_function_flag_634=(_Bool)1;
                    }
                }
            }
            word_639 = come_decrement_ref_count2(word_639, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_635;
        info->sline=sline_622;
    }
    define_variable_640=(_Bool)1;
    if(    is_type_name_flag_621&&!define_function_pointer_result_function_627) {
        p_641=info->p;
        info->p=head;
        if(        !is_type_name_flag_621) {
            define_variable_640=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value697=backtrace_parse_type((_Bool)0,info)));
            result_type_642=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_643=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_644=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value697,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_645=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_640=(_Bool)1;
                            }
                        }
                        word_645 = come_decrement_ref_count2(word_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_646=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_646,info)&&*info->p!=40) {
                            define_variable_640=(_Bool)1;
                        }
                    }
                    word_646 = come_decrement_ref_count2(word_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(result_type_642,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_643 = come_decrement_ref_count2(fun_name_643, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_640=(_Bool)0;
        }
        else if(        define_variable_640) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_640=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_640=(_Bool)0;
            }
        }
        info->p=p_641;
        info->sline=sline_622;
    }
    else {
        define_variable_640=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_627) {
        p_647=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value700=parse_word(info)));
                __right_value700 = come_decrement_ref_count2(__right_value700, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_648=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj187=word_648;
                        word_648=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_648,"extends")) {
                            define_variable_640=(_Bool)0;
                        }
                    }
                    word_648 = come_decrement_ref_count2(word_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_640=(_Bool)0;
        }
        else if(        define_variable_640) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_640=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_640=(_Bool)0;
            }
        }
        info->p=p_647;
        info->sline=sline_622;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_649=(char*)come_increment_ref_count(parse_word(info));
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
                    word_652=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(word_652)));
                    word_652 = come_decrement_ref_count2(word_652, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_653=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result308__ = gComeFunResultObject = __result_obj__ = node_653;
            if(node_653) { node_653 = come_decrement_ref_count2(node_653, ((struct sNode*)node_653)->finalize, ((struct sNode*)node_653)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_649 = come_decrement_ref_count2(word_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result308__;
            if(node_653) { node_653 = come_decrement_ref_count2(node_653, ((struct sNode*)node_653)->finalize, ((struct sNode*)node_653)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_649 = come_decrement_ref_count2(word_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_623) {
    }
    else if(    define_variable_between_brace_628) {
        info->p=head;
        info->sline=sline_622;
        __result309__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value707=parse_global_variable(info)));
        if(__right_value707) { __right_value707 = come_decrement_ref_count2(__right_value707, ((struct sNode*)__right_value707)->finalize, ((struct sNode*)__right_value707)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    else if(    define_function_pointer_result_function_627) {
        header_head_654=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value708=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_655=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_656=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_657=multiple_assign_var4->v3;
        come_call_finalizer3(__right_value708,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_658=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2070, "list$1sTypeph"))));
            param_names_659=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2071, "list$1charph"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value713=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_660=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_661=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_662=multiple_assign_var5->v3;
                    come_call_finalizer3(__right_value713,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_662) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypeph_push_back(param_types_658,(struct sType*)come_increment_ref_count(param_type_660));
                    static int num_function_pointer_result_var_name_a_663=0;
                    list$1charph_push_back(param_names_659,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_663)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value715=parse_word(info)));
                        __right_value715 = come_decrement_ref_count2(__right_value715, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_660,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_661 = come_decrement_ref_count2(param_name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer3(param_type_660,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_661 = come_decrement_ref_count2(param_name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_664=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2117, "list$1sTypeph"))));
                param_names2_665=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2118, "list$1charph"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value720=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_666=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_667=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_668=multiple_assign_var6->v3;
                        come_call_finalizer3(__right_value720,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_668) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypeph_push_back(param_types2_664,(struct sType*)come_increment_ref_count(param_type_666));
                        static int num_function_pointer_result_var_name_b_669=0;
                        list$1charph_push_back(param_names2_665,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_669)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value722=parse_word(info)));
                            __right_value722 = come_decrement_ref_count2(__right_value722, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_666,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_667 = come_decrement_ref_count2(param_name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer3(param_type_666,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_667 = come_decrement_ref_count2(param_name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_670=info->p;
                result_type2_671=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2160, "sType")),"lambda",(_Bool)0,info));
                __dec_obj189=result_type2_671->mResultType;
                result_type2_671->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 2162, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_655)));
                come_call_finalizer3(__dec_obj189,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj190=result_type2_671->mParamTypes;
                result_type2_671->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_664));
                come_call_finalizer3(__dec_obj190,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj191=result_type2_671->mParamNames;
                result_type2_671->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_665));
                come_call_finalizer3(__dec_obj191,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_671->mVarArgs=(_Bool)0;
                result_type2_671->mStatic=(_Bool)0;
                var_args_672=(_Bool)0;
                header_buf_673=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2170, "buffer"))));
                buffer_append(header_buf_673,header_head_654,header_tail_670-header_head_654);
                buffer_append_char(header_buf_673,0);
                param_default_parametors_674=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2174, "list$1charph"))));
                fun_675=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2176, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_656)),(struct sType*)come_increment_ref_count(result_type2_671),(struct list$1sTypeph*)come_increment_ref_count(param_types_658),(struct list$1charph*)come_increment_ref_count(param_names_659),(struct list$1charph*)come_increment_ref_count(param_default_parametors_674),(_Bool)1,var_args_672,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_673)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0));
                fun2_679=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value738=__builtin_string(fun_name_656)))));
                __right_value738 = come_decrement_ref_count2(__right_value738, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_679==((void*)0)||fun2_679->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_656)),(struct sFun*)come_increment_ref_count(fun_675));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2188, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value742=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2188, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_675),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result337__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value777=_inf_value2));
                come_call_finalizer3(param_types2_664,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_665,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_671,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_673,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_674,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_675,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_679,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_658,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_659,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_655,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_656 = come_decrement_ref_count2(fun_name_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value742,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value777) { __right_value777 = come_decrement_ref_count2(__right_value777, ((struct sNode*)__right_value777)->finalize, ((struct sNode*)__right_value777)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result337__;
                come_call_finalizer3(param_types2_664,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_665,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_671,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_673,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_674,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_675,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_679,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer3(param_types_658,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_659,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_655,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_656 = come_decrement_ref_count2(fun_name_656, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    define_function_flag_634) {
        info->p=head;
        info->sline=sline_622;
        node_714=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result338__ = gComeFunResultObject = __result_obj__ = node_714;
        if(node_714) { node_714 = come_decrement_ref_count2(node_714, ((struct sNode*)node_714)->finalize, ((struct sNode*)node_714)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result338__;
        if(node_714) { node_714 = come_decrement_ref_count2(node_714, ((struct sNode*)node_714)->finalize, ((struct sNode*)node_714)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_640) {
        info->p=head;
        info->sline=sline_622;
        node_715=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_716=info->p;
        header_717=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2212, "buffer"))));
        buffer_append(header_717,source_head_620,source_tail_716-source_head_620);
        __result339__ = gComeFunResultObject = __result_obj__ = node_715;
        if(node_715) { node_715 = come_decrement_ref_count2(node_715, ((struct sNode*)node_715)->finalize, ((struct sNode*)node_715)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(header_717,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result339__;
        if(node_715) { node_715 = come_decrement_ref_count2(node_715, ((struct sNode*)node_715)->finalize, ((struct sNode*)node_715)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(header_717,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_622;
    buf2_718=(char*)come_increment_ref_count(parse_word(info));
    __result340__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value783=top_level_v98(buf2_718,head,head_sline,info)));
    buf2_718 = come_decrement_ref_count2(buf2_718, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value783) { __right_value783 = come_decrement_ref_count2(__right_value783, ((struct sNode*)__right_value783)->finalize, ((struct sNode*)__right_value783)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj181;
char* __dec_obj182;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj181=self->v1;
            come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj182=self->v2;
            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_650;
struct list_item$1charph* prev_it_651;
struct list$1charph* __result307__;
    it_650=self->head;
    while(it_650!=((void*)0)) {
        prev_it_651=it_650;
        it_650=it_650->next;
        come_call_finalizer3(prev_it_651,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj188;
struct tuple1$1sTypeph* __result310__;
    __dec_obj188=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result310__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_676;
unsigned int hash_677;
unsigned int it_678;
struct sFun* __result311__;
struct sFun* __result312__;
struct sFun* __result313__;
struct sFun* __result314__;
default_value_676 = (void*)0;
    memset(&default_value_676,0,sizeof(struct sFun*));
    hash_677=charp_get_hash_key(((char*)key))%self->size;
    it_678=hash_677;
    while((_Bool)1) {
        if(        self->item_existance[it_678]) {
            if(            charp_equals(self->keys[it_678],key)) {
                __result311__ = gComeFunResultObject = __result_obj__ = self->items[it_678];
                come_call_finalizer3(default_value_676,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result311__;
            }
            it_678++;
            if(            it_678>=self->size) {
                it_678=0;
            }
            else if(            it_678==hash_677) {
                __result312__ = gComeFunResultObject = __result_obj__ = default_value_676;
                come_call_finalizer3(default_value_676,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result312__;
            }
        }
        else {
            __result313__ = gComeFunResultObject = __result_obj__ = default_value_676;
            come_call_finalizer3(default_value_676,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result313__;
        }
    }
    __result314__ = gComeFunResultObject = __result_obj__ = default_value_676;
    come_call_finalizer3(default_value_676,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result316__;
void* __right_value745 = (void*)0;
struct sFun* result_681;
void* __right_value746 = (void*)0;
char* __dec_obj195;
void* __right_value747 = (void*)0;
struct sType* __dec_obj196;
void* __right_value748 = (void*)0;
struct list$1sTypeph* __dec_obj197;
void* __right_value749 = (void*)0;
struct list$1charph* __dec_obj198;
void* __right_value750 = (void*)0;
struct list$1charph* __dec_obj199;
void* __right_value751 = (void*)0;
struct sType* __dec_obj200;
void* __right_value769 = (void*)0;
struct sBlock* __dec_obj206;
void* __right_value770 = (void*)0;
struct buffer* __dec_obj207;
void* __right_value771 = (void*)0;
struct buffer* __dec_obj208;
void* __right_value772 = (void*)0;
struct buffer* __dec_obj209;
void* __right_value773 = (void*)0;
struct buffer* __dec_obj210;
void* __right_value774 = (void*)0;
char* __dec_obj211;
void* __right_value775 = (void*)0;
char* __dec_obj212;
struct sFun* __result335__;
    if(    self==(void*)0) {
        __result316__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    result_681=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj195=result_681->mName;
        result_681->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj196=result_681->mResultType;
        result_681->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj197=result_681->mParamTypes;
        result_681->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj197,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj198=result_681->mParamNames;
        result_681->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj198,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj199=result_681->mParamDefaultParametors;
        result_681->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj199,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj200=result_681->mLambdaType;
        result_681->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer3(__dec_obj200,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj206=result_681->mBlock;
        result_681->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer3(__dec_obj206,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_681->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_681->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj207=result_681->mSource;
        result_681->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer3(__dec_obj207,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj208=result_681->mSourceHead;
        result_681->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer3(__dec_obj208,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj209=result_681->mSourceHead2;
        result_681->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer3(__dec_obj209,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj210=result_681->mSourceDefer;
        result_681->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer3(__dec_obj210,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_681->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_681->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_681->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj211=result_681->mComeHeader;
        result_681->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_681->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj212=result_681->mDeclareSName;
        result_681->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_681->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_681->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_681->no_output_come_code2=self->no_output_come_code2;
    }
    __result335__ = gComeFunResultObject = __result_obj__ = result_681;
    come_call_finalizer3(result_681,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result317__;
void* __right_value752 = (void*)0;
struct sBlock* result_682;
void* __right_value753 = (void*)0;
struct list$1sNodeph* __dec_obj201;
void* __right_value768 = (void*)0;
struct sVarTable* __dec_obj205;
struct sBlock* __result334__;
    if(    self==(void*)0) {
        __result317__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    result_682=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj201=result_682->mNodes;
        result_682->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj201,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj205=result_682->mVarTable;
        result_682->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj205,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_682->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result334__ = gComeFunResultObject = __result_obj__ = result_682;
    come_call_finalizer3(result_682,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result318__;
void* __right_value754 = (void*)0;
struct sVarTable* result_683;
void* __right_value767 = (void*)0;
struct map$2charphsVarph* __dec_obj204;
struct sVarTable* __result333__;
    if(    self==(void*)0) {
        __result318__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    result_683=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj204=result_683->mVars;
        result_683->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj204,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_683->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_683->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_683->mID=self->mID;
    }
    __result333__ = gComeFunResultObject = __result_obj__ = result_683;
    come_call_finalizer3(result_683,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result319__;
void* __right_value755 = (void*)0;
void* __right_value761 = (void*)0;
struct map$2charphsVarph* result_687;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct list$1charp* __dec_obj203;
char* it_690;
struct sVar* default_value_693;
struct sVar* it2_696;
struct map$2charphsVarph* __result332__;
default_value_693 = (void*)0;
    if(    self==((void*)0)) {
        __result319__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    result_687=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "/usr/local/include/comelang.h", 2390, "map$2charphsVarph"))));
    __dec_obj203=result_687->key_list;
    result_687->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2392, "list$1charp"))));
    come_call_finalizer3(__dec_obj203,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_690=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_690=map$2charphsVarph_next(self)    ){
        memset(&default_value_693,0,sizeof(struct sVar*));
        it2_696=map$2charphsVarph_at(self,it_690,default_value_693);
        map$2charphsVarph_put(result_687,it_690,it2_696);
    }
    __result332__ = gComeFunResultObject = __result_obj__ = result_687;
    come_call_finalizer3(result_687,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
int i_684;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct list$1charp* __dec_obj202;
struct map$2charphsVarph* __result320__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value756=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2319, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value757=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "/usr/local/include/comelang.h", 2320, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value758=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2321, "bool"))));
    for(    i_684=0;    i_684<128;    i_684++    ){
        self->item_existance[i_684]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj202=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2331, "list$1charp"))));
    come_call_finalizer3(__dec_obj202,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_685;
int i_686;
    for(    i_685=0;    i_685<self->size;    i_685++    ){
        if(        self->item_existance[i_685]) {
            if(            1) {
                come_call_finalizer3(self->items[i_685],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_686=0;    i_686<self->size;    i_686++    ){
        if(        self->item_existance[i_686]) {
            if(            1) {
                self->keys[i_686] = come_decrement_ref_count2(self->keys[i_686], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_688;
char* __result321__;
char* __result322__;
char* result_689;
char* __result323__;
result_688 = (void*)0;
result_689 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_688,0,sizeof(char*));
        __result321__ = gComeFunResultObject = __result_obj__ = result_688;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result322__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    memset(&result_689,0,sizeof(char*));
    __result323__ = gComeFunResultObject = __result_obj__ = result_689;
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_691;
char* __result324__;
char* __result325__;
char* result_692;
char* __result326__;
result_691 = (void*)0;
result_692 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_691,0,sizeof(char*));
        __result324__ = gComeFunResultObject = __result_obj__ = result_691;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result325__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    memset(&result_692,0,sizeof(char*));
    __result326__ = gComeFunResultObject = __result_obj__ = result_692;
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_694;
unsigned int it_695;
struct sVar* __result327__;
struct sVar* __result328__;
struct sVar* __result329__;
struct sVar* __result330__;
    hash_694=charp_get_hash_key(((char*)key))%self->size;
    it_695=hash_694;
    while((_Bool)1) {
        if(        self->item_existance[it_695]) {
            if(            charp_equals(self->keys[it_695],key)) {
                __result327__ = gComeFunResultObject = __result_obj__ = self->items[it_695];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result327__;
            }
            it_695++;
            if(            it_695>=self->size) {
                it_695=0;
            }
            else if(            it_695==hash_694) {
                __result328__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result328__;
            }
        }
        else {
            __result329__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result329__;
        }
    }
    __result330__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_708;
int it_709;
_Bool same_key_exist_710;
char* it2_711;
struct map$2charphsVarph* __result331__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_708=charp_get_hash_key(key)%self->size;
    it_709=hash_708;
    while((_Bool)1) {
        if(        self->item_existance[it_709]) {
            if(            charp_equals(self->keys[it_709],key)) {
                if(                1) {
                    self->keys[it_709] = come_decrement_ref_count2(self->keys[it_709], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_709]);
                    self->keys[it_709]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_709]);
                    self->keys[it_709]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_709],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_709]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_709]=item;
                }
                break;
            }
            it_709++;
            if(            it_709>=self->size) {
                it_709=0;
            }
            else if(            it_709==hash_708) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_709]=(_Bool)1;
            if(            1) {
                self->keys[it_709]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_709]=key;
            }
            if(            1) {
                self->items[it_709]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_709]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_710=(_Bool)0;
    for(    it2_711=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_711=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_711,key)) {
            same_key_exist_710=(_Bool)1;
        }
    }
    if(    !same_key_exist_710) {
        list$1charp_push_back(self->key_list,key);
    }
    __result331__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_697;
void* __right_value764 = (void*)0;
char** keys_698;
void* __right_value765 = (void*)0;
struct sVar** items_699;
void* __right_value766 = (void*)0;
_Bool* item_existance_700;
int len_701;
char* it_702;
struct sVar* default_value_703;
struct sVar* it2_704;
unsigned int hash_705;
int n_706;
struct sVar* default_value_707;
default_value_703 = (void*)0;
default_value_707 = (void*)0;
    size_697=self->size*10;
    keys_698=(char**)come_increment_ref_count(((char**)(__right_value764=(char**)come_calloc(1, sizeof(char*)*(1*(size_697)), "/usr/local/include/comelang.h", 2547, "char*%"))));
    items_699=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value765=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_697)), "/usr/local/include/comelang.h", 2548, "sVar*%"))));
    item_existance_700=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value766=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_697)), "/usr/local/include/comelang.h", 2549, "bool"))));
    len_701=0;
    for(    it_702=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_702=map$2charphsVarph_next(self)    ){
        memset(&default_value_703,0,sizeof(struct sVar*));
        it2_704=map$2charphsVarph_at(self,it_702,default_value_703);
        hash_705=charp_get_hash_key(it_702)%size_697;
        n_706=hash_705;
        while((_Bool)1) {
            if(            item_existance_700[n_706]) {
                n_706++;
                if(                n_706>=size_697) {
                    n_706=0;
                }
                else if(                n_706==hash_705) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_700[n_706]=(_Bool)1;
                keys_698[n_706]=it_702;
                items_699[n_706]=map$2charphsVarph_at(self,it_702,default_value_707);
                len_701++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_698;
    self->items=items_699;
    self->item_existance=item_existance_700;
    self->size=size_697;
    self->len=len_701;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_712;
int i_713;
    for(    i_712=0;    i_712<self->size;    i_712++    ){
        if(        self->item_existance[i_712]) {
            if(            1) {
                come_call_finalizer3(self->items[i_712],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_713=0;    i_713<self->size;    i_713++    ){
        if(        self->item_existance[i_713]) {
            if(            1) {
                self->keys[i_713] = come_decrement_ref_count2(self->keys[i_713], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_719;
int caller_line_720;
char* caller_sname_721;
_Bool comma_instead_of_semicolon_722;
char* last_code_723;
char* __dec_obj214;
char* last_code2_724;
char* __dec_obj215;
void* __right_value784 = (void*)0;
char* sname_top_725;
int sline_top_726;
void* __right_value785 = (void*)0;
struct sFun* funX_727;
_Bool __result341__;
void* __right_value786 = (void*)0;
struct sType* result_type_728;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct list$1sTypeph* param_types_729;
struct list$1sTypeph* o2_saved_730;
struct sType* it_733;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sType* param_type_736;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct list$1charph* param_names_737;
void* __right_value793 = (void*)0;
struct list$1charph* param_default_parametors_738;
char* p_739;
int sline_740;
char* sname_741;
char* head_742;
struct buffer* source_743;
void* __right_value794 = (void*)0;
struct buffer* __dec_obj216;
struct sType* generics_type_saved_744;
void* __right_value795 = (void*)0;
struct sType* __dec_obj217;
struct list$1charph* method_generics_type_names_745;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct list$1charph* __dec_obj218;
struct list$1charph* o2_saved_746;
char* it_747;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct list$1charph* __dec_obj219;
char* __dec_obj220;
void* __right_value800 = (void*)0;
struct sBlock* block_748;
struct buffer* __dec_obj221;
char* __dec_obj222;
_Bool var_args_749;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct sFun* fun_750;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value812 = (void*)0;
struct sNode* node_751;
_Bool in_generics_fun_753;
_Bool Value_754;
void* __if_result__1_755 = (void*)0;
_Bool __result350__;
struct sType* __dec_obj227;
struct list$1charph* __dec_obj228;
void* __right_value813 = (void*)0;
char* __dec_obj229;
char* __dec_obj230;
char* __dec_obj231;
_Bool __result351__;
    caller_fun_719=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_720=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_721=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_722=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_723=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj214=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_724=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj215=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_725=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_726=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_727=((struct sFun*)(__right_value785=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer3(__right_value785,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_727) {
        __result341__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_723 = come_decrement_ref_count2(last_code_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_724 = come_decrement_ref_count2(last_code2_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_725 = come_decrement_ref_count2(sname_top_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result341__;
    }
    result_type_728=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_729=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2258, "list$1sTypeph"))));
    for(    o2_saved_730=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_733=list$1sTypeph_begin((o2_saved_730));    !list$1sTypeph_end((o2_saved_730));    it_733=list$1sTypeph_next((o2_saved_730))    ){
        param_type_736=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value789=sType_clone(it_733))),generics_type,info));
        come_call_finalizer3(__right_value789,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_736->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_729,(struct sType*)come_increment_ref_count(sType_clone(param_type_736)));
        come_call_finalizer3(param_type_736,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_730,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_737=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_738=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_739=info->p;
    sline_740=info->sline;
    sname_741=(char*)come_increment_ref_count(info->sname);
    head_742=info->head;
    source_743=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj216=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj216,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_744=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj217=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_745=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj218=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2285, "list$1charph"))));
    come_call_finalizer3(__dec_obj218,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_746=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_747=list$1charph_begin((o2_saved_746));    !list$1charph_end((o2_saved_746));    it_747=list$1charph_next((o2_saved_746))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_747)));
    }
    come_call_finalizer3(o2_saved_746,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj219=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj219,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj220=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_748=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_742;
    __dec_obj221=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_743);
    come_call_finalizer3(__dec_obj221,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_739;
    info->sline=sline_740;
    __dec_obj222=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_741);
    __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_728->mInline=(_Bool)0;
    result_type_728->mStatic=(_Bool)0;
    result_type_728->mUniq=(_Bool)0;
    var_args_749=generics_fun->mVarArgs;
    fun_750=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2309, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_728),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_729)),(struct list$1charph*)come_increment_ref_count(param_names_737),(struct list$1charph*)come_increment_ref_count(param_default_parametors_738),(_Bool)0,var_args_749,(struct sBlock*)come_increment_ref_count(block_748),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_750));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2316, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value808=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2316, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_750),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_751=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value808,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_753=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_754=node_compile(node_751,info);
    if(    !Value_754) {
        __result350__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_723 = come_decrement_ref_count2(last_code_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_724 = come_decrement_ref_count2(last_code2_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_725 = come_decrement_ref_count2(sname_top_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_728,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_729,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_737,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_738,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_741 = come_decrement_ref_count2(sname_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_744,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_745,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_748,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_750,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_751) { node_751 = come_decrement_ref_count2(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result350__;
    }
    else {
        __if_result__1_755=(void*)(Value_754);
;
    }
    info->in_generics_fun=in_generics_fun_753;
    __dec_obj227=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_744);
    come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj228=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_745);
    come_call_finalizer3(__dec_obj228,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj229=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_725));
    __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_726;
    __dec_obj230=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_723);
    __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj231=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_724);
    __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_719;
    info->caller_line=caller_line_720;
    info->caller_sname=caller_sname_721;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_722;
    __result351__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_723 = come_decrement_ref_count2(last_code_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_724 = come_decrement_ref_count2(last_code2_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_725 = come_decrement_ref_count2(sname_top_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_728,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_729,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_737,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_738,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_741 = come_decrement_ref_count2(sname_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_744,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_745,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_748,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_750,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_751) { node_751 = come_decrement_ref_count2(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result351__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_731;
struct sType* __result342__;
struct sType* __result343__;
struct sType* result_732;
struct sType* __result344__;
result_731 = (void*)0;
result_732 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_731,0,sizeof(struct sType*));
        __result342__ = gComeFunResultObject = __result_obj__ = result_731;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    self->it=self->head;
    if(    self->it) {
        __result343__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    memset(&result_732,0,sizeof(struct sType*));
    __result344__ = gComeFunResultObject = __result_obj__ = result_732;
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_734;
struct sType* __result345__;
struct sType* __result346__;
struct sType* result_735;
struct sType* __result347__;
result_734 = (void*)0;
result_735 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_734,0,sizeof(struct sType*));
        __result345__ = gComeFunResultObject = __result_obj__ = result_734;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result346__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    memset(&result_735,0,sizeof(struct sType*));
    __result347__ = gComeFunResultObject = __result_obj__ = result_735;
    gComeFunResultObject = (void*)0;
    return __result347__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_756;
int caller_line_757;
char* caller_sname_758;
_Bool comma_instead_of_semicolon_759;
char* last_code_760;
char* __dec_obj232;
char* last_code2_761;
char* __dec_obj233;
void* __right_value814 = (void*)0;
char* sname_top_762;
int sline_top_763;
void* __right_value815 = (void*)0;
struct sFun* funX_764;
_Bool __result352__;
void* __right_value816 = (void*)0;
struct sType* result_type_765;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct list$1sTypeph* param_types_766;
struct list$1sTypeph* o2_saved_767;
struct sType* it_768;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct sType* param_type_769;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct list$1charph* param_names_770;
void* __right_value823 = (void*)0;
struct list$1charph* param_default_parametors_771;
char* p_772;
int sline_773;
char* sname_774;
char* head_775;
struct buffer* source_776;
void* __right_value824 = (void*)0;
struct buffer* __dec_obj234;
struct list$1charph* method_generics_type_names_777;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct list$1charph* __dec_obj235;
struct list$1charph* o2_saved_778;
char* it_779;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct list$1charph* __dec_obj236;
char* __dec_obj237;
void* __right_value829 = (void*)0;
struct sBlock* block_780;
struct buffer* __dec_obj238;
char* __dec_obj239;
_Bool var_args_781;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sFun* fun_782;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value841 = (void*)0;
struct sNode* node_783;
_Bool Value_785;
void* __if_result__2_786 = (void*)0;
_Bool __result355__;
struct list$1charph* __dec_obj244;
void* __right_value842 = (void*)0;
char* __dec_obj245;
char* __dec_obj246;
char* __dec_obj247;
_Bool __result356__;
    caller_fun_756=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_757=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_758=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_759=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_760=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj232=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_761=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj233=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_762=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_763=info->sline;
    funX_764=((struct sFun*)(__right_value815=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer3(__right_value815,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_764) {
        __result352__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_760 = come_decrement_ref_count2(last_code_760, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_761 = come_decrement_ref_count2(last_code2_761, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_762 = come_decrement_ref_count2(sname_top_762, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result352__;
    }
    result_type_765=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_766=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2370, "list$1sTypeph"))));
    for(    o2_saved_767=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_768=list$1sTypeph_begin((o2_saved_767));    !list$1sTypeph_end((o2_saved_767));    it_768=list$1sTypeph_next((o2_saved_767))    ){
        param_type_769=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value819=sType_clone(it_768))),info));
        come_call_finalizer3(__right_value819,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_769->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_766,(struct sType*)come_increment_ref_count(sType_clone(param_type_769)));
        come_call_finalizer3(param_type_769,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_767,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_770=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_771=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_772=info->p;
    sline_773=info->sline;
    sname_774=(char*)come_increment_ref_count(info->sname);
    head_775=info->head;
    source_776=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj234=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj234,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_777=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj235=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2394, "list$1charph"))));
    come_call_finalizer3(__dec_obj235,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_778=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_779=list$1charph_begin((o2_saved_778));    !list$1charph_end((o2_saved_778));    it_779=list$1charph_next((o2_saved_778))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_779)));
    }
    come_call_finalizer3(o2_saved_778,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj236=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj236,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj237=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_780=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_775;
    __dec_obj238=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_776);
    come_call_finalizer3(__dec_obj238,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_772;
    info->sline=sline_773;
    __dec_obj239=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_774);
    __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_765->mInline=(_Bool)0;
    result_type_765->mStatic=(_Bool)0;
    result_type_765->mUniq=(_Bool)0;
    var_args_781=generics_fun->mVarArgs;
    fun_782=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2418, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_765),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_766)),(struct list$1charph*)come_increment_ref_count(param_names_770),(struct list$1charph*)come_increment_ref_count(param_default_parametors_771),(_Bool)0,var_args_781,(struct sBlock*)come_increment_ref_count(block_780),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_782));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2425, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value837=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2425, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_782),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_783=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value837,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_785=node_compile(node_783,info);
    if(    !Value_785) {
        __result355__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_760 = come_decrement_ref_count2(last_code_760, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_761 = come_decrement_ref_count2(last_code2_761, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_762 = come_decrement_ref_count2(sname_top_762, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_765,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_766,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_770,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_771,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_774 = come_decrement_ref_count2(sname_774, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_776,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_777,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_780,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_782,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_783) { node_783 = come_decrement_ref_count2(node_783, ((struct sNode*)node_783)->finalize, ((struct sNode*)node_783)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result355__;
    }
    else {
        __if_result__2_786=(void*)(Value_785);
;
    }
    __dec_obj244=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_777);
    come_call_finalizer3(__dec_obj244,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj245=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_762));
    __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_763;
    __dec_obj246=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_760);
    __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj247=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_761);
    __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_756;
    info->caller_line=caller_line_757;
    info->caller_sname=caller_sname_758;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_759;
    __result356__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_760 = come_decrement_ref_count2(last_code_760, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_761 = come_decrement_ref_count2(last_code2_761, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_762 = come_decrement_ref_count2(sname_top_762, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_765,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_766,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_770,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_771,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_774 = come_decrement_ref_count2(sname_774, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_776,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_777,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_780,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_782,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_783) { node_783 = come_decrement_ref_count2(node_783, ((struct sNode*)node_783)->finalize, ((struct sNode*)node_783)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result356__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_787;
char* source_head_788;
struct sType* result_type_789;
char* var_name_790;
_Bool constructor__791;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct sType* __dec_obj248;
void* __right_value845 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_792=0;
char* var_name2_793=0;
_Bool err_794=0;
struct sType* __dec_obj249;
char* __dec_obj250;
_Bool method_definition_795;
char* p_796;
int sline_797;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct buffer* buf2_798;
char* fun_name_799;
char* base_fun_name_800;
void* __right_value848 = (void*)0;
char* __dec_obj251;
void* __right_value849 = (void*)0;
char* __dec_obj252;
void* __right_value850 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_801=0;
char* name_802=0;
_Bool err_803=0;
void* __right_value851 = (void*)0;
char* __dec_obj253;
void* __right_value852 = (void*)0;
char* __dec_obj254;
void* __right_value853 = (void*)0;
char* __dec_obj255;
void* __right_value854 = (void*)0;
char* __dec_obj256;
void* __right_value855 = (void*)0;
char* __dec_obj257;
void* __right_value856 = (void*)0;
char* __dec_obj258;
void* __right_value857 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1sTypeph* param_types_804=0;
struct list$1charph* param_names_805=0;
struct list$1charph* param_default_parametors_806=0;
_Bool var_args_807=0;
char* header_tail_808;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct buffer* header_buf_809;
int version_810;
int n_811;
_Bool in_top_level_812;
void* __right_value860 = (void*)0;
struct sBlock* block_813;
void* __right_value861 = (void*)0;
char* fun_name_815;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct sFun* fun_816;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct sFun* fun2_817;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value874 = (void*)0;
struct sNode* __result359__;
void* __right_value875 = (void*)0;
char* none_generics_name_819;
void* __right_value876 = (void*)0;
char* generics_sname_820;
int generics_sline_821;
void* __right_value877 = (void*)0;
char* block_822;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct sGenericsFun* fun_823;
void* __right_value884 = (void*)0;
char* fun_name3_824;
void* __right_value888 = (void*)0;
struct sNode* __result371__;
void* __right_value889 = (void*)0;
char* generics_sname_846;
int generics_sline_847;
void* __right_value890 = (void*)0;
char* block_848;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
struct sGenericsFun* fun_849;
void* __right_value897 = (void*)0;
char* fun_name3_850;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct sNode* __result372__;
char* source_tail_851;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
struct buffer* header_852;
void* __right_value902 = (void*)0;
char* name_853;
void* __right_value903 = (void*)0;
char* name_854;
int i_855;
void* __right_value904 = (void*)0;
struct sType* param_type_856;
void* __right_value905 = (void*)0;
char* param_name_857;
void* __right_value906 = (void*)0;
char* default_parametor_858;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
char* impl_name_859;
void* __right_value910 = (void*)0;
char* result_type_name_860;
void* __right_value911 = (void*)0;
char* impl_name_861;
void* __right_value912 = (void*)0;
char* result_type_name_862;
int i_863;
void* __right_value913 = (void*)0;
struct sType* param_type_864;
void* __right_value914 = (void*)0;
char* param_name_865;
void* __right_value915 = (void*)0;
char* default_parametor_866;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct sBlock* block_867;
_Bool static_fun_868;
_Bool inline_fun_869;
_Bool uniq_fun_870;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
char* new_fun_name_871;
void* __right_value922 = (void*)0;
char* __dec_obj264;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
struct sFun* fun_872;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct sFun* fun2_873;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value938 = (void*)0;
struct sNode* __result375__;
void* __right_value939 = (void*)0;
char* new_fun_name_875;
void* __right_value940 = (void*)0;
char* __dec_obj269;
char* source_tail_876;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
struct buffer* header_877;
_Bool result_type_static_878;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
struct sFun* fun_879;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct sFun* fun2_880;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value957 = (void*)0;
struct sNode* __result378__;
void* __right_value958 = (void*)0;
char* asm_fun_882;
void* __right_value959 = (void*)0;
char* __dec_obj274;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct buffer* header_883;
char* source_tail_884;
_Bool result_type_static_885;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sFun* fun_886;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
struct sFun* fun2_887;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value976 = (void*)0;
struct sNode* __result381__;
struct sNode* __result382__;
fun_name_799 = (void*)0;
    header_head_787=info->p;
    source_head_788=info->p;
    result_type_789=((void*)0);
    var_name_790=((void*)0);
    constructor__791=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value843=parse_word(info)));
        __right_value843 = come_decrement_ref_count2(__right_value843, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj248=result_type_789;
        result_type_789=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_789->mHeap=(_Bool)1;
        constructor__791=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value845=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_792=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_793=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_794=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value845,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj249=result_type_789;
        result_type_789=(struct sType*)come_increment_ref_count(result_type2_792);
        come_call_finalizer3(__dec_obj249,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj250=var_name_790;
        var_name_790=(char*)come_increment_ref_count(var_name2_793);
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_794) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_792,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_793 = come_decrement_ref_count2(var_name2_793, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_795=(_Bool)0;
    {
        p_796=info->p;
        sline_797=info->sline;
        buf2_798=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2489, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_798,*info->p);
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
        if(        buffer_length(buf2_798)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_795=(_Bool)1;
        }
        info->p=p_796;
        info->sline=sline_797;
        come_call_finalizer3(buf2_798,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_800=((void*)0);
    if(    constructor__791) {
        __dec_obj251=base_fun_name_800;
        base_fun_name_800=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj252=fun_name_799;
        fun_name_799=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_800,info,(_Bool)1));
        __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_795) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value850=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_801=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_802=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_803=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value850,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_803) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj253=base_fun_name_800;
        base_fun_name_800=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj254=fun_name_799;
        fun_name_799=(char*)come_increment_ref_count(create_method_name(obj_type_801,(_Bool)0,base_fun_name_800,info,(_Bool)1));
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_801,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_802 = come_decrement_ref_count2(name_802, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj255=base_fun_name_800;
        base_fun_name_800=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj256=fun_name_799;
        fun_name_799=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_800,info,(_Bool)1));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj257=fun_name_799;
        fun_name_799=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj258=base_fun_name_800;
        base_fun_name_800=(char*)come_increment_ref_count(__builtin_string(fun_name_799));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_800,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value857=parse_params(info,constructor__791)));
    param_types_804=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_805=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_806=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_807=multiple_assign_var9->v4;
    come_call_finalizer3(__right_value857,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_808=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_800,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_809=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2556, "buffer"))));
    buffer_append(header_buf_809,header_head_787,header_tail_808-header_head_787);
    buffer_append_char(header_buf_809,0);
    version_810=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_811=0;
        while(xisdigit(*info->p)) {
            n_811=n_811*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_810=n_811;
    }
    in_top_level_812=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_800,"lambda")) {
        block_813=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_814=0;
        lambda_num_814++;
        fun_name_815=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_814));
        result_type_789->mInline=(_Bool)0;
        result_type_789->mStatic=(_Bool)0;
        result_type_789->mUniq=(_Bool)0;
        fun_816=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2591, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_815)),(struct sType*)come_increment_ref_count(result_type_789),(struct list$1sTypeph*)come_increment_ref_count(param_types_804),(struct list$1charph*)come_increment_ref_count(param_names_805),(struct list$1charph*)come_increment_ref_count(param_default_parametors_806),(_Bool)0,var_args_807,(struct sBlock*)come_increment_ref_count(block_813),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_809)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_817=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value867=__builtin_string(fun_name_815)))));
        __right_value867 = come_decrement_ref_count2(__right_value867, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_817==((void*)0)||fun2_817->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_815)),(struct sFun*)come_increment_ref_count(fun_816));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2601, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value871=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2601, "sLambdaNode")),fun_816,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result359__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value874=_inf_value5));
        come_call_finalizer3(block_813,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_815 = come_decrement_ref_count2(fun_name_815, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_816,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_817,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_789,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_790 = come_decrement_ref_count2(var_name_790, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_799 = come_decrement_ref_count2(fun_name_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_800 = come_decrement_ref_count2(base_fun_name_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_804,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_805,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_806,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_809,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value871,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value874) { __right_value874 = come_decrement_ref_count2(__right_value874, ((struct sNode*)__right_value874)->finalize, ((struct sNode*)__right_value874)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result359__;
        come_call_finalizer3(block_813,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_815 = come_decrement_ref_count2(fun_name_815, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_816,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_817,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
        none_generics_name_819=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_820=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_821=info->sline;
        block_822=(char*)come_increment_ref_count(skip_block(info));
        fun_823=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2611, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value879=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value880=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_799)),(struct sType*)come_increment_ref_count(result_type_789),(struct list$1sTypeph*)come_increment_ref_count(param_types_804),(struct list$1charph*)come_increment_ref_count(param_names_805),(struct list$1charph*)come_increment_ref_count(param_default_parametors_806),var_args_807,(char*)come_increment_ref_count(block_822),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_820)),generics_sline_821));
        come_call_finalizer3(__right_value879,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value880,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_824=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_819,base_fun_name_800));
        map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_824)),(struct sGenericsFun*)come_increment_ref_count(fun_823));
        __result371__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_819 = come_decrement_ref_count2(none_generics_name_819, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_820 = come_decrement_ref_count2(generics_sname_820, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_822 = come_decrement_ref_count2(block_822, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_823,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_824 = come_decrement_ref_count2(fun_name3_824, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_789,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_790 = come_decrement_ref_count2(var_name_790, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_799 = come_decrement_ref_count2(fun_name_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_800 = come_decrement_ref_count2(base_fun_name_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_804,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_805,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_806,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_809,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result371__;
        none_generics_name_819 = come_decrement_ref_count2(none_generics_name_819, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_820 = come_decrement_ref_count2(generics_sname_820, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_822 = come_decrement_ref_count2(block_822, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_823,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_824 = come_decrement_ref_count2(fun_name3_824, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charph_length(info->method_generics_type_names)>0) {
        generics_sname_846=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_847=info->sline;
        block_848=(char*)come_increment_ref_count(skip_block(info));
        fun_849=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2625, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value892=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value893=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_799)),(struct sType*)come_increment_ref_count(result_type_789),(struct list$1sTypeph*)come_increment_ref_count(param_types_804),(struct list$1charph*)come_increment_ref_count(param_names_805),(struct list$1charph*)come_increment_ref_count(param_default_parametors_806),var_args_807,(char*)come_increment_ref_count(block_848),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_846)),generics_sline_847));
        come_call_finalizer3(__right_value892,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value893,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_850=(char*)come_increment_ref_count(charp_clone(base_fun_name_800));
        if(        method_definition_795) {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_799)),(struct sGenericsFun*)come_increment_ref_count(fun_849));
        }
        else {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_850)),(struct sGenericsFun*)come_increment_ref_count(fun_849));
        }
        __result372__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_846 = come_decrement_ref_count2(generics_sname_846, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_848 = come_decrement_ref_count2(block_848, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_849,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_850 = come_decrement_ref_count2(fun_name3_850, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_789,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_790 = come_decrement_ref_count2(var_name_790, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_799 = come_decrement_ref_count2(fun_name_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_800 = come_decrement_ref_count2(base_fun_name_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_804,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_805,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_806,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_809,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result372__;
        generics_sname_846 = come_decrement_ref_count2(generics_sname_846, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_848 = come_decrement_ref_count2(block_848, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_849,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_850 = come_decrement_ref_count2(fun_name3_850, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_851=info->p-1;
        header_852=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2641, "buffer"))));
        if(        constructor__791) {
            if(            list$1sTypeph_length(param_types_804)==1) {
                name_853=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_852,"extern %s*%% %s*::initialize(%s*%% self);\n",name_853,name_853,name_853);
                name_853 = come_decrement_ref_count2(name_853, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_854=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_format(header_852,"extern %s*%% %s*::initialize(%s*%% self, ",name_854,name_854,name_854);
                for(                i_855=1;                i_855<list$1sTypeph_length(param_types_804);                i_855++                ){
                    param_type_856=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_804,i_855));
                    param_name_857=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_805,i_855));
                    default_parametor_858=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_806,i_855));
                    if(                    default_parametor_858) {
                        buffer_append_format(header_852,"extern %s %s=%s",((char*)(__right_value907=make_come_type_name_string_no_solved(param_type_856,(_Bool)0,info))),param_name_857,default_parametor_858);
                        __right_value907 = come_decrement_ref_count2(__right_value907, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_852,"extern %s %s",((char*)(__right_value908=make_come_type_name_string_no_solved(param_type_856,(_Bool)0,info))),param_name_857);
                        __right_value908 = come_decrement_ref_count2(__right_value908, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_855!=list$1sTypeph_length(param_types_804)-1) {
                        buffer_append_str(header_852,",");
                    }
                    come_call_finalizer3(param_type_856,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_857 = come_decrement_ref_count2(param_name_857, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_858 = come_decrement_ref_count2(default_parametor_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_852,");\n");
                name_854 = come_decrement_ref_count2(name_854, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypeph_length(param_types_804)==1) {
                impl_name_859=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_860=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_789,(_Bool)0,info));
                buffer_append_format(header_852,"extern %s %s*::%s(%s* self);\n",result_type_name_860,impl_name_859,base_fun_name_800,impl_name_859);
                impl_name_859 = come_decrement_ref_count2(impl_name_859, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_860 = come_decrement_ref_count2(result_type_name_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_861=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_862=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_789,(_Bool)0,info));
                buffer_append_format(header_852,"extern %s %s*::%s(%s* self, ",result_type_name_862,impl_name_861,base_fun_name_800,impl_name_861);
                for(                i_863=1;                i_863<list$1sTypeph_length(param_types_804);                i_863++                ){
                    param_type_864=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_804,i_863));
                    param_name_865=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_805,i_863));
                    default_parametor_866=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_806,i_863));
                    if(                    default_parametor_866) {
                        buffer_append_format(header_852,"extern %s %s=%s",((char*)(__right_value916=make_come_type_name_string_no_solved(param_type_864,(_Bool)0,info))),param_name_865,default_parametor_866);
                        __right_value916 = come_decrement_ref_count2(__right_value916, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_852,"extern %s %s",((char*)(__right_value917=make_come_type_name_string_no_solved(param_type_864,(_Bool)0,info))),param_name_865);
                        __right_value917 = come_decrement_ref_count2(__right_value917, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_863!=list$1sTypeph_length(param_types_804)-1) {
                        buffer_append_str(header_852,",");
                    }
                    come_call_finalizer3(param_type_864,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_865 = come_decrement_ref_count2(param_name_865, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_866 = come_decrement_ref_count2(default_parametor_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_852,");\n");
                impl_name_861 = come_decrement_ref_count2(impl_name_861, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_862 = come_decrement_ref_count2(result_type_name_862, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_852,source_head_788,source_tail_851-source_head_788);
            buffer_append_str(header_852,";\n");
        }
        if(        !result_type_789->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value918=buffer_to_string(header_852))));
                __right_value918 = come_decrement_ref_count2(__right_value918, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_867=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__791,(_Bool)1));
        static_fun_868=(_Bool)0;
        if(        result_type_789->mStatic) {
            result_type_789->mStatic=(_Bool)0;
            result_type_789->mUniq=(_Bool)0;
            static_fun_868=(_Bool)1;
        }
        inline_fun_869=(_Bool)0;
        if(        result_type_789->mInline) {
            result_type_789->mInline=(_Bool)0;
            result_type_789->mUniq=(_Bool)0;
            inline_fun_869=(_Bool)1;
        }
        uniq_fun_870=(_Bool)0;
        if(        result_type_789->mUniq) {
            result_type_789->mUniq=(_Bool)0;
            result_type_789->mInline=(_Bool)0;
            result_type_789->mStatic=(_Bool)0;
            uniq_fun_870=(_Bool)1;
        }
        if(        version_810>0) {
            new_fun_name_871=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value920=__builtin_string(fun_name_799))),version_810));
            __right_value920 = come_decrement_ref_count2(__right_value920, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj264=fun_name_799;
            fun_name_799=(char*)come_increment_ref_count(__builtin_string(new_fun_name_871));
            __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_871 = come_decrement_ref_count2(new_fun_name_871, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_872=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2743, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_799)),(struct sType*)come_increment_ref_count(result_type_789),(struct list$1sTypeph*)come_increment_ref_count(param_types_804),(struct list$1charph*)come_increment_ref_count(param_names_805),(struct list$1charph*)come_increment_ref_count(param_default_parametors_806),(_Bool)0,var_args_807,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_867)),static_fun_868,(char*)come_increment_ref_count(buffer_to_string(header_buf_809)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_869,uniq_fun_870));
        if(        info->in_class) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_799)),(struct sFun*)come_increment_ref_count(fun_872));
        }
        else {
            fun2_873=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value930=__builtin_string(fun_name_799)))));
            __right_value930 = come_decrement_ref_count2(__right_value930, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_873==((void*)0)||fun2_873->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_799)),(struct sFun*)come_increment_ref_count(fun_872));
            }
            come_call_finalizer3(fun2_873,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2763, "struct sNode");
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value934=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2763, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_872),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result375__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value938=_inf_value6));
        come_call_finalizer3(header_852,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_867,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_872,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_789,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_790 = come_decrement_ref_count2(var_name_790, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_799 = come_decrement_ref_count2(fun_name_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_800 = come_decrement_ref_count2(base_fun_name_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_804,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_805,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_806,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_809,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value934,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value938) { __right_value938 = come_decrement_ref_count2(__right_value938, ((struct sNode*)__right_value938)->finalize, ((struct sNode*)__right_value938)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result375__;
        come_call_finalizer3(header_852,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_867,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_872,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_810>0) {
            new_fun_name_875=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_799,version_810));
            __dec_obj269=fun_name_799;
            fun_name_799=(char*)come_increment_ref_count(__builtin_string(new_fun_name_875));
            __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_875 = come_decrement_ref_count2(new_fun_name_875, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_876=info->p;
            header_877=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2776, "buffer"))));
            buffer_append(header_877,source_head_788,source_tail_876-source_head_788);
            skip_spaces_and_lf(info);
            result_type_static_878=result_type_789->mStatic;
            result_type_789->mStatic=(_Bool)0;
            result_type_789->mUniq=(_Bool)0;
            result_type_789->mInline=(_Bool)0;
            fun_879=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2786, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_799)),(struct sType*)come_increment_ref_count(result_type_789),(struct list$1sTypeph*)come_increment_ref_count(param_types_804),(struct list$1charph*)come_increment_ref_count(param_names_805),(struct list$1charph*)come_increment_ref_count(param_default_parametors_806),(_Bool)1,var_args_807,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_809)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0));
            fun2_880=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value948=__builtin_string(fun_name_799)))));
            __right_value948 = come_decrement_ref_count2(__right_value948, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_880==((void*)0)||fun2_880->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_799)),(struct sFun*)come_increment_ref_count(fun_879));
            }
            if(            !result_type_static_878) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value951=buffer_to_string(header_877))));
                    __right_value951 = come_decrement_ref_count2(__right_value951, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2804, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value953=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2804, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_879),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result378__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value957=_inf_value7));
            come_call_finalizer3(header_877,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_879,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_880,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_789,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_790 = come_decrement_ref_count2(var_name_790, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_799 = come_decrement_ref_count2(fun_name_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_800 = come_decrement_ref_count2(base_fun_name_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_804,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_805,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_806,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_809,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value953,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value957) { __right_value957 = come_decrement_ref_count2(__right_value957, ((struct sNode*)__right_value957)->finalize, ((struct sNode*)__right_value957)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result378__;
            come_call_finalizer3(header_877,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_879,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_880,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            asm_fun_882=(char*)come_increment_ref_count(parse_function_attribute(info));
            if(            string_operator_not_equals(asm_fun_882,"")) {
                __dec_obj274=fun_name_799;
                fun_name_799=(char*)come_increment_ref_count(__builtin_string(asm_fun_882));
                __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_883=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2813, "buffer"))));
            if(            *info->p==59) {
                info->p++;
                source_tail_884=info->p;
                buffer_append(header_883,source_head_788,source_tail_884-source_head_788);
                skip_spaces_and_lf(info);
            }
            result_type_static_885=result_type_789->mStatic;
            result_type_789->mStatic=(_Bool)0;
            result_type_789->mUniq=(_Bool)0;
            result_type_789->mInline=(_Bool)0;
            fun_886=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2826, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_799)),(struct sType*)come_increment_ref_count(result_type_789),(struct list$1sTypeph*)come_increment_ref_count(param_types_804),(struct list$1charph*)come_increment_ref_count(param_names_805),(struct list$1charph*)come_increment_ref_count(param_default_parametors_806),(_Bool)1,var_args_807,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_809)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0));
            fun2_887=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value967=__builtin_string(fun_name_799)))));
            __right_value967 = come_decrement_ref_count2(__right_value967, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_887==((void*)0)||fun2_887->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_799)),(struct sFun*)come_increment_ref_count(fun_886));
            }
            if(            !result_type_static_885) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value970=buffer_to_string(header_883))));
                    __right_value970 = come_decrement_ref_count2(__right_value970, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2844, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value972=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2844, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_886),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result381__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value976=_inf_value8));
            asm_fun_882 = come_decrement_ref_count2(asm_fun_882, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_883,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_886,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_887,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_789,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_790 = come_decrement_ref_count2(var_name_790, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_799 = come_decrement_ref_count2(fun_name_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_800 = come_decrement_ref_count2(base_fun_name_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_804,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_805,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_806,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_809,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value972,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value976) { __right_value976 = come_decrement_ref_count2(__right_value976, ((struct sNode*)__right_value976)->finalize, ((struct sNode*)__right_value976)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result381__;
            asm_fun_882 = come_decrement_ref_count2(asm_fun_882, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_883,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_886,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_887,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_812;
    __result382__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    come_call_finalizer3(result_type_789,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_790 = come_decrement_ref_count2(var_name_790, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_799 = come_decrement_ref_count2(fun_name_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_800 = come_decrement_ref_count2(base_fun_name_800, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_804,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_805,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_806,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_809,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj259;
struct list$1charph* __dec_obj260;
struct list$1charph* __dec_obj261;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj259=self->v1;
            come_call_finalizer3(__dec_obj259,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj260=self->v2;
            come_call_finalizer3(__dec_obj260,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj261=self->v3;
            come_call_finalizer3(__dec_obj261,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj262;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj262=self->sname;
            __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result357__;
void* __right_value872 = (void*)0;
struct sLambdaNode* result_818;
void* __right_value873 = (void*)0;
char* __dec_obj263;
struct sLambdaNode* __result358__;
    if(    self==(void*)0) {
        __result357__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    result_818=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(    self!=((void*)0)) {
        result_818->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj263=result_818->sname;
        result_818->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_818->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_818->mFun=self->mFun;
    }
    __result358__ = gComeFunResultObject = __result_obj__ = result_818;
    come_call_finalizer3(result_818,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_842;
unsigned int it_843;
_Bool same_key_exist_844;
char* it2_845;
struct map$2charphsGenericsFunph* __result370__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_842=charp_get_hash_key(key)%self->size;
    it_843=hash_842;
    while((_Bool)1) {
        if(        self->item_existance[it_843]) {
            if(            charp_equals(self->keys[it_843],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_843]);
                    self->keys[it_843] = come_decrement_ref_count2(self->keys[it_843], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_843]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_843]);
                    self->keys[it_843]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_843],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_843]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_843]=item;
                }
                break;
            }
            it_843++;
            if(            it_843>=self->size) {
                it_843=0;
            }
            else if(            it_843==hash_842) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_843]=(_Bool)1;
            if(            1) {
                self->keys[it_843]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_843]=key;
            }
            if(            1) {
                self->items[it_843]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_843]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_844=(_Bool)0;
    for(    it2_845=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_845=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_845,key)) {
            same_key_exist_844=(_Bool)1;
        }
    }
    if(    !same_key_exist_844) {
        list$1charp_push_back(self->key_list,key);
    }
    __result370__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_825;
void* __right_value885 = (void*)0;
char** keys_826;
void* __right_value886 = (void*)0;
struct sGenericsFun** items_827;
void* __right_value887 = (void*)0;
_Bool* item_existance_828;
int len_829;
char* it_832;
struct sGenericsFun* default_value_835;
struct sGenericsFun* it2_836;
unsigned int hash_839;
int n_840;
struct sGenericsFun* default_value_841;
default_value_835 = (void*)0;
default_value_841 = (void*)0;
    size_825=self->size*10;
    keys_826=(char**)come_increment_ref_count(((char**)(__right_value885=(char**)come_calloc(1, sizeof(char*)*(1*(size_825)), "/usr/local/include/comelang.h", 2547, "char*%"))));
    items_827=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value886=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_825)), "/usr/local/include/comelang.h", 2548, "sGenericsFun*%"))));
    item_existance_828=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value887=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_825)), "/usr/local/include/comelang.h", 2549, "bool"))));
    len_829=0;
    for(    it_832=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_832=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_835,0,sizeof(struct sGenericsFun*));
        it2_836=map$2charphsGenericsFunph_at(self,it_832,default_value_835);
        hash_839=charp_get_hash_key(it_832)%size_825;
        n_840=hash_839;
        while((_Bool)1) {
            if(            item_existance_828[n_840]) {
                n_840++;
                if(                n_840>=size_825) {
                    n_840=0;
                }
                else if(                n_840==hash_839) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_828[n_840]=(_Bool)1;
                keys_826[n_840]=it_832;
                items_827[n_840]=map$2charphsGenericsFunph_at(self,it_832,default_value_841);
                len_829++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_826;
    self->items=items_827;
    self->item_existance=item_existance_828;
    self->size=size_825;
    self->len=len_829;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_830;
char* __result360__;
char* __result361__;
char* result_831;
char* __result362__;
result_830 = (void*)0;
result_831 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_830,0,sizeof(char*));
        __result360__ = gComeFunResultObject = __result_obj__ = result_830;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result361__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    memset(&result_831,0,sizeof(char*));
    __result362__ = gComeFunResultObject = __result_obj__ = result_831;
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_833;
char* __result363__;
char* __result364__;
char* result_834;
char* __result365__;
result_833 = (void*)0;
result_834 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_833,0,sizeof(char*));
        __result363__ = gComeFunResultObject = __result_obj__ = result_833;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result364__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result364__;
    }
    memset(&result_834,0,sizeof(char*));
    __result365__ = gComeFunResultObject = __result_obj__ = result_834;
    gComeFunResultObject = (void*)0;
    return __result365__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_837;
unsigned int it_838;
struct sGenericsFun* __result366__;
struct sGenericsFun* __result367__;
struct sGenericsFun* __result368__;
struct sGenericsFun* __result369__;
    hash_837=charp_get_hash_key(((char*)key))%self->size;
    it_838=hash_837;
    while((_Bool)1) {
        if(        self->item_existance[it_838]) {
            if(            charp_equals(self->keys[it_838],key)) {
                __result366__ = gComeFunResultObject = __result_obj__ = self->items[it_838];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result366__;
            }
            it_838++;
            if(            it_838>=self->size) {
                it_838=0;
            }
            else if(            it_838==hash_837) {
                __result367__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result367__;
            }
        }
        else {
            __result368__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result368__;
        }
    }
    __result369__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_889;
char* __dec_obj279;
char* last_code2_890;
char* __dec_obj280;
_Bool comma_instead_of_semicolon_891;
struct sClass* current_stack_frame_struct_892;
struct sFun* finalizer_893;
void* __right_value977 = (void*)0;
char* real_fun_name_894;
void* __right_value978 = (void*)0;
char* user_real_fun_name_895;
void* __right_value979 = (void*)0;
struct sFun* user_finalizer_896;
void* __right_value980 = (void*)0;
struct sType* type2_897;
struct sClass* klass_898;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
struct buffer* source_899;
void* __right_value983 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_908;
struct tuple2$2charphsTypeph* it_911;
struct tuple2$2charphsTypeph* multiple_assign_var10 = (void*)0;
char* name_914=0;
struct sType* field_type_915=0;
char* p_918;
int sline_919;
char* sname_920;
char* head_921;
struct buffer* source3_922;
struct buffer* __dec_obj288;
void* __right_value984 = (void*)0;
char* __dec_obj289;
void* __right_value985 = (void*)0;
struct sBlock* block_923;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
struct sType* result_type_924;
void* __right_value988 = (void*)0;
char* name_925;
void* __right_value989 = (void*)0;
struct sType* self_type_926;
struct sType* __list_values21___927[1];
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct list$1sTypeph* param_types_928;
void* __right_value992 = (void*)0;
char* __list_values22___929[1];
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct list$1charph* param_names_930;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
struct list$1charph* param_default_parametors_931;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct buffer* header_buf_932;
void* __right_value999 = (void*)0;
int i_933;
void* __right_value1000 = (void*)0;
struct sType* param_type_934;
void* __right_value1001 = (void*)0;
char* param_name_935;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
struct sFun* fun_936;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
struct sFun* fun2_937;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1015 = (void*)0;
struct sNode* node_938;
_Bool Value_940;
struct buffer* __dec_obj294;
char* __dec_obj295;
char* __dec_obj296;
char* __dec_obj297;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
struct tuple2$2sFunpcharph* __result396__;
    last_code_889=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj279=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_890=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj280=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_891=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_892=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_893=((void*)0);
    real_fun_name_894=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_895=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_896=((struct sFun*)(__right_value979=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_895)));
    come_call_finalizer3(__right_value979,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    type2_897=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_897;
    klass_898=type->mClass;
    if(    type->mPointerNum>0&&klass_898->mStruct||type->mAllocaValue) {
        source_899=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2885, "buffer"))));
        buffer_append_char(source_899,123);
        if(        user_finalizer_896) {
            char source2_900[1024];
            memset(&source2_900, 0, sizeof(char)            *(1024)            );
            snprintf(source2_900,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_895);
            buffer_append_str(source_899,source2_900);
        }
        klass_898=((struct sClass*)(__right_value983=map$2charphsClassphp_operator_load_element(info->classes,klass_898->mName)));
        come_call_finalizer3(__right_value983,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_908=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_898->mFields)),it_911=list$1tuple2$2charphsTypephph_begin((o2_saved_908));        !list$1tuple2$2charphsTypephph_end((o2_saved_908));        it_911=list$1tuple2$2charphsTypephph_next((o2_saved_908))        ){
            multiple_assign_var10=it_911;
            name_914=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_915=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_915->mClass->mName)&&type->mPointerNum==field_type_915->mPointerNum&&field_type_915->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_915->mHeap) {
                char source2_916[1024];
                memset(&source2_916, 0, sizeof(char)                *(1024)                );
                snprintf(source2_916,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_914,name_914,name_914,name_914);
                buffer_append_str(source_899,source2_916);
            }
            else if(            field_type_915->mChannel) {
                char source2_917[1024];
                memset(&source2_917, 0, sizeof(char)                *(1024)                );
                snprintf(source2_917,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_914,name_914);
                buffer_append_str(source_899,source2_917);
                snprintf(source2_917,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_914,name_914);
                buffer_append_str(source_899,source2_917);
            }
            name_914 = come_decrement_ref_count2(name_914, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_915,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_908,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_899,125);
        p_918=info->p;
        sline_919=info->sline;
        sname_920=(char*)come_increment_ref_count(info->sname);
        head_921=info->head;
        source3_922=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj288=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_899);
        come_call_finalizer3(__dec_obj288,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_899->buf;
        info->head=source_899->buf;
        __dec_obj289=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_894));
        __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_923=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_924=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2940, "sType")),"void",(_Bool)0,info));
        name_925=(char*)come_increment_ref_count(string_clone(real_fun_name_894));
        self_type_926=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_926->mHeap=(_Bool)0;
        if(        self_type_926->mPointerNum==0) {
            self_type_926->mPointerNum=1;
        }
        if(        self_type_926->mPointerNum>1) {
            self_type_926->mPointerNum=1;
        }
        param_types_928=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___927[0]=(struct sType*)come_increment_ref_count(self_type_926),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2950, "struct list$1sTypeph")),1,__list_values21___927)));
        param_names_930=(struct list$1charph*)come_increment_ref_count((__list_values22___929[0]=(char*)come_increment_ref_count(((char*)(__right_value992=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2951, "struct list$1charph")),1,__list_values22___929)));
        __right_value992 = come_decrement_ref_count2(__right_value992, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_931=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2952, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_931,((void*)0));
        header_buf_932=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2955, "buffer"))));
        buffer_append_str(header_buf_932,((char*)(__right_value999=make_come_type_name_string(result_type_924,info))));
        __right_value999 = come_decrement_ref_count2(__right_value999, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_932," ");
        buffer_append_str(header_buf_932,real_fun_name_894);
        buffer_append_str(header_buf_932,"(");
        for(        i_933=0;        i_933<list$1sTypeph_length(param_types_928);        i_933++        ){
            param_type_934=((struct sType*)come_null_check(((struct sType*)(__right_value1000=list$1sTypephp_operator_load_element(param_types_928,i_933))), "05function.c", 2963, 7));
            come_call_finalizer3(__right_value1000,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_935=((char*)come_null_check(((char*)(__right_value1001=list$1charphp_operator_load_element(param_names_930,i_933))), "05function.c", 2964, 8));
            __right_value1001 = come_decrement_ref_count2(__right_value1001, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_932,((char*)(__right_value1002=make_come_type_name_string(param_type_934,info))));
            __right_value1002 = come_decrement_ref_count2(__right_value1002, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_932," ");
            buffer_append_str(header_buf_932,param_name_935);
            if(            i_933!=list$1sTypeph_length(param_types_928)-1) {
                buffer_append_str(header_buf_932,",");
            }
        }
        buffer_append_str(header_buf_932,")");
        result_type_924->mStatic=(_Bool)0;
        result_type_924->mUniq=(_Bool)0;
        result_type_924->mInline=(_Bool)0;
        fun_936=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2980, "sFun")),(char*)come_increment_ref_count(name_925),(struct sType*)come_increment_ref_count(result_type_924),(struct list$1sTypeph*)come_increment_ref_count(param_types_928),(struct list$1charph*)come_increment_ref_count(param_names_930),(struct list$1charph*)come_increment_ref_count(param_default_parametors_931),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_923),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_932)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_937=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1007=__builtin_string(fun_name)))));
        __right_value1007 = come_decrement_ref_count2(__right_value1007, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_937==((void*)0)||fun2_937->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_925)),(struct sFun*)come_increment_ref_count(fun_936));
        }
        finalizer_893=fun_936;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2996, "struct sNode");
        _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1011=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2996, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_936),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_938=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value1011,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_940=node_compile(node_938,info);
        if(        !Value_940) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        else {
        }
        __dec_obj294=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_922);
        come_call_finalizer3(__dec_obj294,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_918;
        info->head=head_921;
        info->sline=sline_919;
        __dec_obj295=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_920);
        __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_899,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_920 = come_decrement_ref_count2(sname_920, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_922,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_923,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_924,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_925 = come_decrement_ref_count2(name_925, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_926,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_928,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_930,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_931,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_932,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_936,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_937,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_938) { node_938 = come_decrement_ref_count2(node_938, ((struct sNode*)node_938)->finalize, ((struct sNode*)node_938)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_892;
    __dec_obj296=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_889);
    __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj297=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_890);
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_891;
    __result396__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1017=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3016, "struct tuple2$2sFunpcharph")),finalizer_893,(char*)come_increment_ref_count(real_fun_name_894))));
    last_code_889 = come_decrement_ref_count2(last_code_889, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_890 = come_decrement_ref_count2(last_code2_890, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_894 = come_decrement_ref_count2(real_fun_name_894, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_895 = come_decrement_ref_count2(user_real_fun_name_895, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_897,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1017,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result396__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_901;
unsigned int hash_902;
unsigned int it_903;
struct sClass* __result383__;
struct sClass* __result384__;
struct sClass* __result385__;
struct sClass* __result386__;
default_value_901 = (void*)0;
    memset(&default_value_901,0,sizeof(struct sClass*));
    hash_902=charp_get_hash_key(((char*)key))%self->size;
    it_903=hash_902;
    while((_Bool)1) {
        if(        self->item_existance[it_903]) {
            if(            charp_equals(self->keys[it_903],key)) {
                __result383__ = gComeFunResultObject = __result_obj__ = self->items[it_903];
                come_call_finalizer3(default_value_901,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result383__;
            }
            it_903++;
            if(            it_903>=self->size) {
                it_903=0;
            }
            else if(            it_903==hash_902) {
                __result384__ = gComeFunResultObject = __result_obj__ = default_value_901;
                come_call_finalizer3(default_value_901,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result384__;
            }
        }
        else {
            __result385__ = gComeFunResultObject = __result_obj__ = default_value_901;
            come_call_finalizer3(default_value_901,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result385__;
        }
    }
    __result386__ = gComeFunResultObject = __result_obj__ = default_value_901;
    come_call_finalizer3(default_value_901,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result386__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj281;
struct list$1tuple2$2charphsTypephph* __dec_obj282;
char* __dec_obj286;
char* __dec_obj287;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj281=self->mName;
            __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj282=self->mFields;
            come_call_finalizer3(__dec_obj282,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj286=self->mDeclareSName;
            __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj287=self->mParentClassName;
            __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_904;
struct list_item$1tuple2$2charphsTypephph* prev_it_905;
    it_904=self->head;
    while(it_904!=((void*)0)) {
        prev_it_905=it_904;
        it_904=it_904->next;
        come_call_finalizer3(prev_it_905,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj283;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj283=self->item;
            come_call_finalizer3(__dec_obj283,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj284;
struct sType* __dec_obj285;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj284=self->v1;
            __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj285=self->v2;
            come_call_finalizer3(__dec_obj285,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_906;
struct list_item$1tuple2$2charphsTypephph* prev_it_907;
    it_906=self->head;
    while(it_906!=((void*)0)) {
        prev_it_907=it_906;
        it_906=it_906->next;
        come_call_finalizer3(prev_it_907,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_909;
struct tuple2$2charphsTypeph* __result387__;
struct tuple2$2charphsTypeph* __result388__;
struct tuple2$2charphsTypeph* result_910;
struct tuple2$2charphsTypeph* __result389__;
result_909 = (void*)0;
result_910 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_909,0,sizeof(struct tuple2$2charphsTypeph*));
        __result387__ = gComeFunResultObject = __result_obj__ = result_909;
        gComeFunResultObject = (void*)0;
        return __result387__;
    }
    self->it=self->head;
    if(    self->it) {
        __result388__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result388__;
    }
    memset(&result_910,0,sizeof(struct tuple2$2charphsTypeph*));
    __result389__ = gComeFunResultObject = __result_obj__ = result_910;
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_912;
struct tuple2$2charphsTypeph* __result390__;
struct tuple2$2charphsTypeph* __result391__;
struct tuple2$2charphsTypeph* result_913;
struct tuple2$2charphsTypeph* __result392__;
result_912 = (void*)0;
result_913 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_912,0,sizeof(struct tuple2$2charphsTypeph*));
        __result390__ = gComeFunResultObject = __result_obj__ = result_912;
        gComeFunResultObject = (void*)0;
        return __result390__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result391__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result391__;
    }
    memset(&result_913,0,sizeof(struct tuple2$2charphsTypeph*));
    __result392__ = gComeFunResultObject = __result_obj__ = result_913;
    gComeFunResultObject = (void*)0;
    return __result392__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj298;
struct tuple2$2sFunpcharph* __result395__;
    self->v1=v1;
    __dec_obj298=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result395__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result395__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj299;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj299=self->v2;
            __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_941;
char* __dec_obj300;
char* last_code2_942;
char* __dec_obj301;
_Bool comma_instead_of_semicolon_943;
struct sClass* current_stack_frame_struct_944;
struct sFun* equaler_945;
void* __right_value1018 = (void*)0;
char* real_fun_name_946;
void* __right_value1019 = (void*)0;
struct sType* type2_947;
struct sClass* klass_948;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct buffer* source_949;
char* name_950;
void* __right_value1022 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_952;
struct tuple2$2charphsTypeph* it_953;
struct tuple2$2charphsTypeph* multiple_assign_var11 = (void*)0;
char* name_954=0;
struct sType* field_type_955=0;
char* p_957;
int sline_958;
char* sname_959;
char* head_960;
struct buffer* source3_961;
struct buffer* __dec_obj302;
void* __right_value1023 = (void*)0;
char* __dec_obj303;
void* __right_value1024 = (void*)0;
struct sBlock* block_962;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct sType* result_type_963;
void* __right_value1027 = (void*)0;
char* name_964;
void* __right_value1028 = (void*)0;
struct sType* left_type_965;
void* __right_value1029 = (void*)0;
struct sType* right_type_966;
struct sType* __list_values23___967[2];
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
struct list$1sTypeph* param_types_968;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
char* __list_values24___969[2];
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
struct list$1charph* param_names_970;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
struct list$1charph* param_default_parametors_971;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
struct buffer* header_buf_972;
void* __right_value1040 = (void*)0;
int i_973;
void* __right_value1041 = (void*)0;
struct sType* param_type_974;
void* __right_value1042 = (void*)0;
char* param_name_975;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
void* __right_value1047 = (void*)0;
struct sFun* fun_976;
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
struct sFun* fun2_977;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1056 = (void*)0;
struct sNode* node_978;
_Bool Value_980;
struct buffer* __dec_obj308;
char* __dec_obj309;
char* __dec_obj310;
char* __dec_obj311;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
struct tuple2$2sFunpcharph* __result399__;
    last_code_941=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj300=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_942=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj301=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_943=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_944=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_945=((void*)0);
    real_fun_name_946=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_947=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_947;
    klass_948=type->mClass;
    if(    type->mPointerNum>0&&!klass_948->mNumber) {
        source_949=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3042, "buffer"))));
        buffer_append_char(source_949,123);
        if(        klass_948->mProtocol) {
            name_950="_protocol_obj";
            char source2_951[1024];
            memset(&source2_951, 0, sizeof(char)            *(1024)            );
            snprintf(source2_951,1024,"return left.%s.equals(right.%s);\n",name_950,name_950);
            buffer_append_str(source_949,source2_951);
        }
        else {
            klass_948=((struct sClass*)(__right_value1022=map$2charphsClassphp_operator_load_element(info->classes,klass_948->mName)));
            come_call_finalizer3(__right_value1022,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_952=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_948->mFields)),it_953=list$1tuple2$2charphsTypephph_begin((o2_saved_952));            !list$1tuple2$2charphsTypephph_end((o2_saved_952));            it_953=list$1tuple2$2charphsTypephph_next((o2_saved_952))            ){
                multiple_assign_var11=it_953;
                name_954=(char*)come_increment_ref_count(multiple_assign_var11->v1);
                field_type_955=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_955->mClass->mName)&&type->mPointerNum==field_type_955->mPointerNum&&field_type_955->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_956[1024];
                memset(&source2_956, 0, sizeof(char)                *(1024)                );
                snprintf(source2_956,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_954,name_954,name_954);
                buffer_append_str(source_949,source2_956);
                name_954 = come_decrement_ref_count2(name_954, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_955,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_952,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_949,"return true;");
        buffer_append_char(source_949,125);
        p_957=info->p;
        sline_958=info->sline;
        sname_959=(char*)come_increment_ref_count(info->sname);
        head_960=info->head;
        source3_961=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj302=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_949);
        come_call_finalizer3(__dec_obj302,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_949->buf;
        info->head=source_949->buf;
        __dec_obj303=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_946));
        __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_962=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_963=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3088, "sType")),"bool",(_Bool)0,info));
        name_964=(char*)come_increment_ref_count(string_clone(real_fun_name_946));
        left_type_965=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_965->mHeap=(_Bool)0;
        right_type_966=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_966->mHeap=(_Bool)0;
        param_types_968=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___967[0]=(struct sType*)come_increment_ref_count(left_type_965),
__list_values23___967[1]=(struct sType*)come_increment_ref_count(right_type_966),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3094, "struct list$1sTypeph")),2,__list_values23___967)));
        param_names_970=(struct list$1charph*)come_increment_ref_count((__list_values24___969[0]=(char*)come_increment_ref_count(((char*)(__right_value1032=__builtin_string("left")))),
__list_values24___969[1]=(char*)come_increment_ref_count(((char*)(__right_value1033=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3095, "struct list$1charph")),2,__list_values24___969)));
        __right_value1032 = come_decrement_ref_count2(__right_value1032, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1033 = come_decrement_ref_count2(__right_value1033, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_971=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3096, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_971,((void*)0));
        list$1charph_push_back(param_default_parametors_971,((void*)0));
        header_buf_972=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3100, "buffer"))));
        buffer_append_str(header_buf_972,((char*)(__right_value1040=make_come_type_name_string(result_type_963,info))));
        __right_value1040 = come_decrement_ref_count2(__right_value1040, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_972," ");
        buffer_append_str(header_buf_972,real_fun_name_946);
        buffer_append_str(header_buf_972,"(");
        for(        i_973=0;        i_973<list$1sTypeph_length(param_types_968);        i_973++        ){
            param_type_974=((struct sType*)come_null_check(((struct sType*)(__right_value1041=list$1sTypephp_operator_load_element(param_types_968,i_973))), "05function.c", 3108, 9));
            come_call_finalizer3(__right_value1041,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_975=((char*)come_null_check(((char*)(__right_value1042=list$1charphp_operator_load_element(param_names_970,i_973))), "05function.c", 3109, 10));
            __right_value1042 = come_decrement_ref_count2(__right_value1042, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_972,((char*)(__right_value1043=make_come_type_name_string(param_type_974,info))));
            __right_value1043 = come_decrement_ref_count2(__right_value1043, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_972," ");
            buffer_append_str(header_buf_972,param_name_975);
            if(            i_973!=list$1sTypeph_length(param_types_968)-1) {
                buffer_append_str(header_buf_972,",");
            }
        }
        buffer_append_str(header_buf_972,")");
        result_type_963->mStatic=(_Bool)0;
        result_type_963->mUniq=(_Bool)0;
        result_type_963->mInline=(_Bool)0;
        fun_976=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3125, "sFun")),(char*)come_increment_ref_count(name_964),(struct sType*)come_increment_ref_count(result_type_963),(struct list$1sTypeph*)come_increment_ref_count(param_types_968),(struct list$1charph*)come_increment_ref_count(param_names_970),(struct list$1charph*)come_increment_ref_count(param_default_parametors_971),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_962),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_972)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_977=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1048=__builtin_string(fun_name)))));
        __right_value1048 = come_decrement_ref_count2(__right_value1048, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_977==((void*)0)||fun2_977->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_964)),(struct sFun*)come_increment_ref_count(fun_976));
        }
        equaler_945=fun_976;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3141, "struct sNode");
        _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1052=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3141, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_976),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_978=(struct sNode*)come_increment_ref_count(_inf_value10);
        come_call_finalizer3(__right_value1052,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_980=node_compile(node_978,info);
        if(        !Value_980) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj308=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_961);
        come_call_finalizer3(__dec_obj308,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_957;
        info->head=head_960;
        info->sline=sline_958;
        __dec_obj309=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_959);
        __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_949,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_959 = come_decrement_ref_count2(sname_959, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_961,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_962,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_963,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_964 = come_decrement_ref_count2(name_964, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_965,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_966,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_968,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_970,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_971,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_972,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_976,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_977,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_978) { node_978 = come_decrement_ref_count2(node_978, ((struct sNode*)node_978)->finalize, ((struct sNode*)node_978)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_944;
    __dec_obj310=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_941);
    __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj311=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_942);
    __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_943;
    __result399__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1058=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3161, "struct tuple2$2sFunpcharph")),equaler_945,(char*)come_increment_ref_count(real_fun_name_946))));
    last_code_941 = come_decrement_ref_count2(last_code_941, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_942 = come_decrement_ref_count2(last_code2_942, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_946 = come_decrement_ref_count2(real_fun_name_946, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_947,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1058,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result399__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_981;
char* __dec_obj312;
char* last_code2_982;
char* __dec_obj313;
_Bool comma_instead_of_semicolon_983;
struct sClass* current_stack_frame_struct_984;
struct sFun* equaler_985;
void* __right_value1059 = (void*)0;
char* real_fun_name_986;
void* __right_value1060 = (void*)0;
struct sType* type2_987;
struct sClass* klass_988;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
struct buffer* source_989;
char* name_990;
int i_993;
void* __right_value1063 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_994;
struct tuple2$2charphsTypeph* it_995;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_996=0;
struct sType* field_type_997=0;
char* p_1001;
int sline_1002;
char* sname_1003;
char* head_1004;
struct buffer* source3_1005;
struct buffer* __dec_obj314;
void* __right_value1064 = (void*)0;
char* __dec_obj315;
void* __right_value1065 = (void*)0;
struct sBlock* block_1006;
void* __right_value1066 = (void*)0;
void* __right_value1067 = (void*)0;
struct sType* result_type_1007;
void* __right_value1068 = (void*)0;
char* name_1008;
void* __right_value1069 = (void*)0;
struct sType* left_type_1009;
void* __right_value1070 = (void*)0;
struct sType* right_type_1010;
struct sType* __list_values25___1011[2];
void* __right_value1071 = (void*)0;
void* __right_value1072 = (void*)0;
struct list$1sTypeph* param_types_1012;
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
char* __list_values26___1013[2];
void* __right_value1075 = (void*)0;
void* __right_value1076 = (void*)0;
struct list$1charph* param_names_1014;
void* __right_value1077 = (void*)0;
void* __right_value1078 = (void*)0;
struct list$1charph* param_default_parametors_1015;
void* __right_value1079 = (void*)0;
void* __right_value1080 = (void*)0;
struct buffer* header_buf_1016;
void* __right_value1081 = (void*)0;
int i_1017;
void* __right_value1082 = (void*)0;
struct sType* param_type_1018;
void* __right_value1083 = (void*)0;
char* param_name_1019;
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
void* __right_value1086 = (void*)0;
void* __right_value1087 = (void*)0;
void* __right_value1088 = (void*)0;
struct sFun* fun_1020;
void* __right_value1089 = (void*)0;
void* __right_value1090 = (void*)0;
struct sFun* fun2_1021;
void* __right_value1091 = (void*)0;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1097 = (void*)0;
struct sNode* node_1022;
_Bool Value_1024;
struct buffer* __dec_obj320;
char* __dec_obj321;
char* __dec_obj322;
char* __dec_obj323;
void* __right_value1098 = (void*)0;
void* __right_value1099 = (void*)0;
struct tuple2$2sFunpcharph* __result402__;
    last_code_981=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj312=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_982=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj313=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_983=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_984=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_985=((void*)0);
    real_fun_name_986=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_987=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_987;
    klass_988=type->mClass;
    if(    type->mPointerNum>0&&!klass_988->mNumber) {
        source_989=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3186, "buffer"))));
        buffer_append_char(source_989,123);
        if(        klass_988->mProtocol) {
            name_990="_protocol_obj";
            char source2_991[1024];
            memset(&source2_991, 0, sizeof(char)            *(1024)            );
            snprintf(source2_991,1024,"return left.%s !== right.%s;\n",name_990,name_990);
            buffer_append_str(source_989,source2_991);
        }
        else {
            char source2_992[1024];
            memset(&source2_992, 0, sizeof(char)            *(1024)            );
            snprintf(source2_992,1024,"return !(");
            buffer_append_str(source_989,source2_992);
            snprintf(source2_992,1024,"( ");
            buffer_append_str(source_989,source2_992);
            i_993=0;
            klass_988=((struct sClass*)(__right_value1063=map$2charphsClassphp_operator_load_element(info->classes,klass_988->mName)));
            come_call_finalizer3(__right_value1063,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_994=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_988->mFields)),it_995=list$1tuple2$2charphsTypephph_begin((o2_saved_994));            !list$1tuple2$2charphsTypephph_end((o2_saved_994));            it_995=list$1tuple2$2charphsTypephph_next((o2_saved_994))            ){
                multiple_assign_var12=it_995;
                name_996=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_997=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_997->mClass->mName)&&type->mPointerNum==field_type_997->mPointerNum&&field_type_997->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_998[1024];
                memset(&source2_998, 0, sizeof(char)                *(1024)                );
                snprintf(source2_998,1024,"(left.%s === right.%s)",name_996,name_996,name_996);
                buffer_append_str(source_989,source2_998);
                if(                i_993==list$1tuple2$2charphsTypephph_length(klass_988->mFields)-1) {
                    char source2_999[1024];
                    memset(&source2_999, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_999,1024,"));");
                    buffer_append_str(source_989,source2_999);
                }
                else {
                    char source2_1000[1024];
                    memset(&source2_1000, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1000,1024," && ");
                    buffer_append_str(source_989,source2_1000);
                }
                i_993++;
                name_996 = come_decrement_ref_count2(name_996, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_997,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_994,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_989,125);
        p_1001=info->p;
        sline_1002=info->sline;
        sname_1003=(char*)come_increment_ref_count(info->sname);
        head_1004=info->head;
        source3_1005=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj314=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_989);
        come_call_finalizer3(__dec_obj314,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_989->buf;
        info->head=source_989->buf;
        __dec_obj315=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_986));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1006=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1007=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3252, "sType")),"bool",(_Bool)0,info));
        name_1008=(char*)come_increment_ref_count(string_clone(real_fun_name_986));
        left_type_1009=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1009->mHeap=(_Bool)0;
        right_type_1010=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1010->mHeap=(_Bool)0;
        param_types_1012=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1011[0]=(struct sType*)come_increment_ref_count(left_type_1009),
__list_values25___1011[1]=(struct sType*)come_increment_ref_count(right_type_1010),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3258, "struct list$1sTypeph")),2,__list_values25___1011)));
        param_names_1014=(struct list$1charph*)come_increment_ref_count((__list_values26___1013[0]=(char*)come_increment_ref_count(((char*)(__right_value1073=__builtin_string("left")))),
__list_values26___1013[1]=(char*)come_increment_ref_count(((char*)(__right_value1074=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3259, "struct list$1charph")),2,__list_values26___1013)));
        __right_value1073 = come_decrement_ref_count2(__right_value1073, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1074 = come_decrement_ref_count2(__right_value1074, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1015=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3260, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1015,((void*)0));
        list$1charph_push_back(param_default_parametors_1015,((void*)0));
        header_buf_1016=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3264, "buffer"))));
        buffer_append_str(header_buf_1016,((char*)(__right_value1081=make_come_type_name_string(result_type_1007,info))));
        __right_value1081 = come_decrement_ref_count2(__right_value1081, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1016," ");
        buffer_append_str(header_buf_1016,real_fun_name_986);
        buffer_append_str(header_buf_1016,"(");
        for(        i_1017=0;        i_1017<list$1sTypeph_length(param_types_1012);        i_1017++        ){
            param_type_1018=((struct sType*)come_null_check(((struct sType*)(__right_value1082=list$1sTypephp_operator_load_element(param_types_1012,i_1017))), "05function.c", 3272, 11));
            come_call_finalizer3(__right_value1082,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1019=((char*)come_null_check(((char*)(__right_value1083=list$1charphp_operator_load_element(param_names_1014,i_1017))), "05function.c", 3273, 12));
            __right_value1083 = come_decrement_ref_count2(__right_value1083, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1016,((char*)(__right_value1084=make_come_type_name_string(param_type_1018,info))));
            __right_value1084 = come_decrement_ref_count2(__right_value1084, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1016," ");
            buffer_append_str(header_buf_1016,param_name_1019);
            if(            i_1017!=list$1sTypeph_length(param_types_1012)-1) {
                buffer_append_str(header_buf_1016,",");
            }
        }
        buffer_append_str(header_buf_1016,")");
        result_type_1007->mStatic=(_Bool)0;
        result_type_1007->mUniq=(_Bool)0;
        result_type_1007->mInline=(_Bool)0;
        fun_1020=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3289, "sFun")),(char*)come_increment_ref_count(name_1008),(struct sType*)come_increment_ref_count(result_type_1007),(struct list$1sTypeph*)come_increment_ref_count(param_types_1012),(struct list$1charph*)come_increment_ref_count(param_names_1014),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1015),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1006),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1016)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_1021=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1089=__builtin_string(fun_name)))));
        __right_value1089 = come_decrement_ref_count2(__right_value1089, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1021==((void*)0)||fun2_1021->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1008)),(struct sFun*)come_increment_ref_count(fun_1020));
        }
        equaler_985=fun_1020;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3305, "struct sNode");
        _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1093=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3305, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1020),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_1022=(struct sNode*)come_increment_ref_count(_inf_value11);
        come_call_finalizer3(__right_value1093,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1024=node_compile(node_1022,info);
        if(        !Value_1024) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj320=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1005);
        come_call_finalizer3(__dec_obj320,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1001;
        info->head=head_1004;
        info->sline=sline_1002;
        __dec_obj321=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1003);
        __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_989,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1003 = come_decrement_ref_count2(sname_1003, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1005,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1006,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1007,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1008 = come_decrement_ref_count2(name_1008, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1009,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1010,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1012,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1014,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1015,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1016,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1020,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1021,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1022) { node_1022 = come_decrement_ref_count2(node_1022, ((struct sNode*)node_1022)->finalize, ((struct sNode*)node_1022)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_984;
    __dec_obj322=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_981);
    __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj323=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_982);
    __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_983;
    __result402__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1099=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3325, "struct tuple2$2sFunpcharph")),equaler_985,(char*)come_increment_ref_count(real_fun_name_986))));
    last_code_981 = come_decrement_ref_count2(last_code_981, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_982 = come_decrement_ref_count2(last_code2_982, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_986 = come_decrement_ref_count2(real_fun_name_986, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_987,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1099,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result402__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1025;
char* __dec_obj324;
char* last_code2_1026;
char* __dec_obj325;
_Bool comma_instead_of_semicolon_1027;
struct sClass* current_stack_frame_struct_1028;
struct sFun* equaler_1029;
void* __right_value1100 = (void*)0;
char* real_fun_name_1030;
void* __right_value1101 = (void*)0;
struct sType* type2_1031;
struct sClass* klass_1032;
void* __right_value1102 = (void*)0;
void* __right_value1103 = (void*)0;
struct buffer* source_1033;
char* name_1034;
int i_1037;
void* __right_value1104 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1038;
struct tuple2$2charphsTypeph* it_1039;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1040=0;
struct sType* field_type_1041=0;
char* p_1045;
int sline_1046;
char* sname_1047;
char* head_1048;
struct buffer* source3_1049;
struct buffer* __dec_obj326;
void* __right_value1105 = (void*)0;
char* __dec_obj327;
void* __right_value1106 = (void*)0;
struct sBlock* block_1050;
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
struct sType* result_type_1051;
void* __right_value1109 = (void*)0;
char* name_1052;
void* __right_value1110 = (void*)0;
struct sType* left_type_1053;
void* __right_value1111 = (void*)0;
struct sType* right_type_1054;
struct sType* __list_values27___1055[2];
void* __right_value1112 = (void*)0;
void* __right_value1113 = (void*)0;
struct list$1sTypeph* param_types_1056;
void* __right_value1114 = (void*)0;
void* __right_value1115 = (void*)0;
char* __list_values28___1057[2];
void* __right_value1116 = (void*)0;
void* __right_value1117 = (void*)0;
struct list$1charph* param_names_1058;
void* __right_value1118 = (void*)0;
void* __right_value1119 = (void*)0;
struct list$1charph* param_default_parametors_1059;
void* __right_value1120 = (void*)0;
void* __right_value1121 = (void*)0;
struct buffer* header_buf_1060;
void* __right_value1122 = (void*)0;
int i_1061;
void* __right_value1123 = (void*)0;
struct sType* param_type_1062;
void* __right_value1124 = (void*)0;
char* param_name_1063;
void* __right_value1125 = (void*)0;
void* __right_value1126 = (void*)0;
void* __right_value1127 = (void*)0;
void* __right_value1128 = (void*)0;
void* __right_value1129 = (void*)0;
struct sFun* fun_1064;
void* __right_value1130 = (void*)0;
void* __right_value1131 = (void*)0;
struct sFun* fun2_1065;
void* __right_value1132 = (void*)0;
void* __right_value1133 = (void*)0;
void* __right_value1134 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1138 = (void*)0;
struct sNode* node_1066;
_Bool Value_1068;
struct buffer* __dec_obj332;
char* __dec_obj333;
char* __dec_obj334;
char* __dec_obj335;
void* __right_value1139 = (void*)0;
void* __right_value1140 = (void*)0;
struct tuple2$2sFunpcharph* __result405__;
    last_code_1025=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj324=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1026=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj325=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1027=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1028=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1029=((void*)0);
    real_fun_name_1030=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1031=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1031;
    klass_1032=type->mClass;
    if(    type->mPointerNum>0&&!klass_1032->mNumber) {
        source_1033=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3350, "buffer"))));
        buffer_append_char(source_1033,123);
        if(        klass_1032->mProtocol) {
            name_1034="_protocol_obj";
            char source2_1035[1024];
            memset(&source2_1035, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1035,1024,"return !left.%s.equals(right.%s);\n",name_1034,name_1034);
            buffer_append_str(source_1033,source2_1035);
        }
        else {
            char source2_1036[1024];
            memset(&source2_1036, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1036,1024,"return !(");
            buffer_append_str(source_1033,source2_1036);
            i_1037=0;
            klass_1032=((struct sClass*)(__right_value1104=map$2charphsClassphp_operator_load_element(info->classes,klass_1032->mName)));
            come_call_finalizer3(__right_value1104,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1038=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1032->mFields)),it_1039=list$1tuple2$2charphsTypephph_begin((o2_saved_1038));            !list$1tuple2$2charphsTypephph_end((o2_saved_1038));            it_1039=list$1tuple2$2charphsTypephph_next((o2_saved_1038))            ){
                multiple_assign_var13=it_1039;
                name_1040=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1041=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1041->mClass->mName)&&type->mPointerNum==field_type_1041->mPointerNum&&field_type_1041->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_1042[1024];
                memset(&source2_1042, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1042,1024,"left.%s.equals(right.%s)",name_1040,name_1040);
                buffer_append_str(source_1033,source2_1042);
                if(                i_1037==list$1tuple2$2charphsTypephph_length(klass_1032->mFields)-1) {
                    char source2_1043[1024];
                    memset(&source2_1043, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1043,1024,");");
                    buffer_append_str(source_1033,source2_1043);
                }
                else {
                    char source2_1044[1024];
                    memset(&source2_1044, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1044,1024," && ");
                    buffer_append_str(source_1033,source2_1044);
                }
                i_1037++;
                name_1040 = come_decrement_ref_count2(name_1040, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1041,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1038,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1033,125);
        p_1045=info->p;
        sline_1046=info->sline;
        sname_1047=(char*)come_increment_ref_count(info->sname);
        head_1048=info->head;
        source3_1049=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj326=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1033);
        come_call_finalizer3(__dec_obj326,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1033->buf;
        info->head=source_1033->buf;
        __dec_obj327=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1030));
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1050=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1051=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3413, "sType")),"bool",(_Bool)0,info));
        name_1052=(char*)come_increment_ref_count(string_clone(real_fun_name_1030));
        left_type_1053=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1053->mHeap=(_Bool)0;
        right_type_1054=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1054->mHeap=(_Bool)0;
        param_types_1056=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1055[0]=(struct sType*)come_increment_ref_count(left_type_1053),
__list_values27___1055[1]=(struct sType*)come_increment_ref_count(right_type_1054),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3419, "struct list$1sTypeph")),2,__list_values27___1055)));
        param_names_1058=(struct list$1charph*)come_increment_ref_count((__list_values28___1057[0]=(char*)come_increment_ref_count(((char*)(__right_value1114=__builtin_string("left")))),
__list_values28___1057[1]=(char*)come_increment_ref_count(((char*)(__right_value1115=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3420, "struct list$1charph")),2,__list_values28___1057)));
        __right_value1114 = come_decrement_ref_count2(__right_value1114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1115 = come_decrement_ref_count2(__right_value1115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1059=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3421, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1059,((void*)0));
        list$1charph_push_back(param_default_parametors_1059,((void*)0));
        header_buf_1060=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3425, "buffer"))));
        buffer_append_str(header_buf_1060,((char*)(__right_value1122=make_come_type_name_string(result_type_1051,info))));
        __right_value1122 = come_decrement_ref_count2(__right_value1122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1060," ");
        buffer_append_str(header_buf_1060,real_fun_name_1030);
        buffer_append_str(header_buf_1060,"(");
        for(        i_1061=0;        i_1061<list$1sTypeph_length(param_types_1056);        i_1061++        ){
            param_type_1062=((struct sType*)come_null_check(((struct sType*)(__right_value1123=list$1sTypephp_operator_load_element(param_types_1056,i_1061))), "05function.c", 3433, 13));
            come_call_finalizer3(__right_value1123,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1063=((char*)come_null_check(((char*)(__right_value1124=list$1charphp_operator_load_element(param_names_1058,i_1061))), "05function.c", 3434, 14));
            __right_value1124 = come_decrement_ref_count2(__right_value1124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1060,((char*)(__right_value1125=make_come_type_name_string(param_type_1062,info))));
            __right_value1125 = come_decrement_ref_count2(__right_value1125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1060," ");
            buffer_append_str(header_buf_1060,param_name_1063);
            if(            i_1061!=list$1sTypeph_length(param_types_1056)-1) {
                buffer_append_str(header_buf_1060,",");
            }
        }
        buffer_append_str(header_buf_1060,")");
        result_type_1051->mStatic=(_Bool)0;
        result_type_1051->mUniq=(_Bool)0;
        result_type_1051->mInline=(_Bool)0;
        fun_1064=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3450, "sFun")),(char*)come_increment_ref_count(name_1052),(struct sType*)come_increment_ref_count(result_type_1051),(struct list$1sTypeph*)come_increment_ref_count(param_types_1056),(struct list$1charph*)come_increment_ref_count(param_names_1058),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1059),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1050),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1060)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_1065=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1130=__builtin_string(fun_name)))));
        __right_value1130 = come_decrement_ref_count2(__right_value1130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1065==((void*)0)||fun2_1065->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1052)),(struct sFun*)come_increment_ref_count(fun_1064));
        }
        equaler_1029=fun_1064;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3466, "struct sNode");
        _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1134=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3466, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1064),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_1066=(struct sNode*)come_increment_ref_count(_inf_value12);
        come_call_finalizer3(__right_value1134,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1068=node_compile(node_1066,info);
        if(        !Value_1068) {
            err_msg(info,"compiling error");
            exit(2);
        }
        else {
        }
        __dec_obj332=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1049);
        come_call_finalizer3(__dec_obj332,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1045;
        info->head=head_1048;
        info->sline=sline_1046;
        __dec_obj333=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1047);
        __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1033,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1047 = come_decrement_ref_count2(sname_1047, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1049,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1050,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1051,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1052 = come_decrement_ref_count2(name_1052, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1053,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1054,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1056,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1058,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1059,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1060,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1064,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1065,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1066) { node_1066 = come_decrement_ref_count2(node_1066, ((struct sNode*)node_1066)->finalize, ((struct sNode*)node_1066)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1028;
    __dec_obj334=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1025);
    __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj335=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1026);
    __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1027;
    __result405__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1140=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3486, "struct tuple2$2sFunpcharph")),equaler_1029,(char*)come_increment_ref_count(real_fun_name_1030))));
    last_code_1025 = come_decrement_ref_count2(last_code_1025, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1026 = come_decrement_ref_count2(last_code2_1026, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1030 = come_decrement_ref_count2(real_fun_name_1030, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1031,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1140,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result405__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1069;
char* __dec_obj336;
char* last_code2_1070;
char* __dec_obj337;
_Bool comma_instead_of_semicolon_1071;
struct sClass* current_stack_frame_struct_1072;
struct sFun* equaler_1073;
void* __right_value1141 = (void*)0;
char* real_fun_name_1074;
void* __right_value1142 = (void*)0;
struct sType* type2_1075;
struct sClass* klass_1076;
void* __right_value1143 = (void*)0;
void* __right_value1144 = (void*)0;
struct buffer* source_1077;
char* name_1078;
void* __right_value1145 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1081;
struct tuple2$2charphsTypeph* it_1082;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1083=0;
struct sType* field_type_1084=0;
char* p_1086;
int sline_1087;
char* sname_1088;
char* head_1089;
struct buffer* source3_1090;
struct buffer* __dec_obj338;
void* __right_value1146 = (void*)0;
char* __dec_obj339;
void* __right_value1147 = (void*)0;
struct sBlock* block_1091;
void* __right_value1148 = (void*)0;
void* __right_value1149 = (void*)0;
struct sType* result_type_1092;
void* __right_value1150 = (void*)0;
char* name_1093;
void* __right_value1151 = (void*)0;
struct sType* left_type_1094;
void* __right_value1152 = (void*)0;
struct sType* right_type_1095;
struct sType* __list_values29___1096[2];
void* __right_value1153 = (void*)0;
void* __right_value1154 = (void*)0;
struct list$1sTypeph* param_types_1097;
void* __right_value1155 = (void*)0;
void* __right_value1156 = (void*)0;
char* __list_values30___1098[2];
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
struct list$1charph* param_names_1099;
void* __right_value1159 = (void*)0;
void* __right_value1160 = (void*)0;
struct list$1charph* param_default_parametors_1100;
void* __right_value1161 = (void*)0;
void* __right_value1162 = (void*)0;
struct buffer* header_buf_1101;
void* __right_value1163 = (void*)0;
int i_1102;
void* __right_value1164 = (void*)0;
struct sType* param_type_1103;
void* __right_value1165 = (void*)0;
char* param_name_1104;
void* __right_value1166 = (void*)0;
void* __right_value1167 = (void*)0;
void* __right_value1168 = (void*)0;
void* __right_value1169 = (void*)0;
void* __right_value1170 = (void*)0;
struct sFun* fun_1105;
void* __right_value1171 = (void*)0;
void* __right_value1172 = (void*)0;
struct sFun* fun2_1106;
void* __right_value1173 = (void*)0;
void* __right_value1174 = (void*)0;
void* __right_value1175 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1179 = (void*)0;
struct sNode* node_1107;
_Bool Value_1109;
struct buffer* __dec_obj344;
char* __dec_obj345;
char* __dec_obj346;
char* __dec_obj347;
void* __right_value1180 = (void*)0;
void* __right_value1181 = (void*)0;
struct tuple2$2sFunpcharph* __result408__;
    last_code_1069=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj336=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1070=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj337=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1071=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1072=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1073=((void*)0);
    real_fun_name_1074=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1075=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1075;
    klass_1076=type->mClass;
    if(    type->mPointerNum>0&&!klass_1076->mNumber) {
        source_1077=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3511, "buffer"))));
        buffer_append_char(source_1077,123);
        if(        klass_1076->mProtocol) {
            name_1078="_protocol_obj";
            char source2_1079[1024];
            memset(&source2_1079, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1079,1024,"return left.%s === right.%s;\n",name_1078,name_1078);
            buffer_append_str(source_1077,source2_1079);
        }
        else {
            char source2_1080[1024];
            memset(&source2_1080, 0, sizeof(char)            *(1024)            );
            klass_1076=((struct sClass*)(__right_value1145=map$2charphsClassphp_operator_load_element(info->classes,klass_1076->mName)));
            come_call_finalizer3(__right_value1145,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1081=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1076->mFields)),it_1082=list$1tuple2$2charphsTypephph_begin((o2_saved_1081));            !list$1tuple2$2charphsTypephph_end((o2_saved_1081));            it_1082=list$1tuple2$2charphsTypephph_next((o2_saved_1081))            ){
                multiple_assign_var14=it_1082;
                name_1083=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1084=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1084->mClass->mName)&&type->mPointerNum==field_type_1084->mPointerNum&&field_type_1084->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_1085[1024];
                memset(&source2_1085, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1085,1024,"if(left.%s !== right.%s) { return false; }\n",name_1083,name_1083,name_1083);
                buffer_append_str(source_1077,source2_1085);
                name_1083 = come_decrement_ref_count2(name_1083, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1084,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1081,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1077,"return true;\n");
        buffer_append_char(source_1077,125);
        p_1086=info->p;
        sline_1087=info->sline;
        sname_1088=(char*)come_increment_ref_count(info->sname);
        head_1089=info->head;
        source3_1090=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj338=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1077);
        come_call_finalizer3(__dec_obj338,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1077->buf;
        info->head=source_1077->buf;
        __dec_obj339=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1074));
        __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1091=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1092=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3559, "sType")),"bool",(_Bool)0,info));
        name_1093=(char*)come_increment_ref_count(string_clone(real_fun_name_1074));
        left_type_1094=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1094->mHeap=(_Bool)0;
        right_type_1095=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1095->mHeap=(_Bool)0;
        param_types_1097=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1096[0]=(struct sType*)come_increment_ref_count(left_type_1094),
__list_values29___1096[1]=(struct sType*)come_increment_ref_count(right_type_1095),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3565, "struct list$1sTypeph")),2,__list_values29___1096)));
        param_names_1099=(struct list$1charph*)come_increment_ref_count((__list_values30___1098[0]=(char*)come_increment_ref_count(((char*)(__right_value1155=__builtin_string("left")))),
__list_values30___1098[1]=(char*)come_increment_ref_count(((char*)(__right_value1156=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3566, "struct list$1charph")),2,__list_values30___1098)));
        __right_value1155 = come_decrement_ref_count2(__right_value1155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1156 = come_decrement_ref_count2(__right_value1156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1100=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3567, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1100,((void*)0));
        list$1charph_push_back(param_default_parametors_1100,((void*)0));
        header_buf_1101=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3571, "buffer"))));
        buffer_append_str(header_buf_1101,((char*)(__right_value1163=make_come_type_name_string(result_type_1092,info))));
        __right_value1163 = come_decrement_ref_count2(__right_value1163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1101," ");
        buffer_append_str(header_buf_1101,real_fun_name_1074);
        buffer_append_str(header_buf_1101,"(");
        for(        i_1102=0;        i_1102<list$1sTypeph_length(param_types_1097);        i_1102++        ){
            param_type_1103=((struct sType*)come_null_check(((struct sType*)(__right_value1164=list$1sTypephp_operator_load_element(param_types_1097,i_1102))), "05function.c", 3579, 15));
            come_call_finalizer3(__right_value1164,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1104=((char*)come_null_check(((char*)(__right_value1165=list$1charphp_operator_load_element(param_names_1099,i_1102))), "05function.c", 3580, 16));
            __right_value1165 = come_decrement_ref_count2(__right_value1165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1101,((char*)(__right_value1166=make_come_type_name_string(param_type_1103,info))));
            __right_value1166 = come_decrement_ref_count2(__right_value1166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1101," ");
            buffer_append_str(header_buf_1101,param_name_1104);
            if(            i_1102!=list$1sTypeph_length(param_types_1097)-1) {
                buffer_append_str(header_buf_1101,",");
            }
        }
        buffer_append_str(header_buf_1101,")");
        result_type_1092->mStatic=(_Bool)0;
        result_type_1092->mUniq=(_Bool)0;
        result_type_1092->mInline=(_Bool)0;
        fun_1105=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3596, "sFun")),(char*)come_increment_ref_count(name_1093),(struct sType*)come_increment_ref_count(result_type_1092),(struct list$1sTypeph*)come_increment_ref_count(param_types_1097),(struct list$1charph*)come_increment_ref_count(param_names_1099),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1100),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1091),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1101)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun2_1106=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1171=__builtin_string(fun_name)))));
        __right_value1171 = come_decrement_ref_count2(__right_value1171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1106==((void*)0)||fun2_1106->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1093)),(struct sFun*)come_increment_ref_count(fun_1105));
        }
        equaler_1073=fun_1105;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3612, "struct sNode");
        _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1175=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3612, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1105),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_1107=(struct sNode*)come_increment_ref_count(_inf_value13);
        come_call_finalizer3(__right_value1175,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1109=node_compile(node_1107,info);
        if(        !Value_1109) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        else {
        }
        __dec_obj344=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1090);
        come_call_finalizer3(__dec_obj344,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1086;
        info->head=head_1089;
        info->sline=sline_1087;
        __dec_obj345=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1088);
        __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1077,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1088 = come_decrement_ref_count2(sname_1088, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1090,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1091,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1092,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1093 = come_decrement_ref_count2(name_1093, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1094,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1095,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1097,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1099,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1100,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1101,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1105,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1106,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1107) { node_1107 = come_decrement_ref_count2(node_1107, ((struct sNode*)node_1107)->finalize, ((struct sNode*)node_1107)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1072;
    __dec_obj346=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1069);
    __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj347=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1070);
    __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1071;
    __result408__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1181=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3632, "struct tuple2$2sFunpcharph")),equaler_1073,(char*)come_increment_ref_count(real_fun_name_1074))));
    last_code_1069 = come_decrement_ref_count2(last_code_1069, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1070 = come_decrement_ref_count2(last_code2_1070, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1074 = come_decrement_ref_count2(real_fun_name_1074, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1075,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1181,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result408__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1110;
char* __dec_obj348;
char* last_code2_1111;
char* __dec_obj349;
_Bool comma_instead_of_semicolon_1112;
struct sClass* current_stack_frame_struct_1113;
struct sFun* cloner_1114;
void* __right_value1182 = (void*)0;
char* real_fun_name_1115;
void* __right_value1183 = (void*)0;
struct sType* type2_1116;
struct sClass* klass_1117;
void* __right_value1184 = (void*)0;
void* __right_value1185 = (void*)0;
struct buffer* source_1118;
void* __right_value1186 = (void*)0;
char* name_1119;
void* __right_value1187 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1121;
struct tuple2$2charphsTypeph* it_1122;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1123=0;
struct sType* field_type_1124=0;
void* __right_value1188 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1127;
struct tuple2$2charphsTypeph* it_1128;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1129=0;
struct sType* field_type_1130=0;
char* p_1134;
int sline_1135;
char* sname_1136;
struct buffer* source3_1137;
char* head_1138;
struct buffer* __dec_obj350;
void* __right_value1189 = (void*)0;
char* __dec_obj351;
void* __right_value1190 = (void*)0;
struct sBlock* block_1139;
void* __right_value1191 = (void*)0;
struct sType* result_type_1140;
void* __right_value1192 = (void*)0;
char* name_1141;
void* __right_value1193 = (void*)0;
struct sType* self_type_1142;
struct sType* __list_values31___1143[1];
void* __right_value1194 = (void*)0;
void* __right_value1195 = (void*)0;
struct list$1sTypeph* param_types_1144;
void* __right_value1196 = (void*)0;
char* __list_values32___1145[1];
void* __right_value1197 = (void*)0;
void* __right_value1198 = (void*)0;
struct list$1charph* param_names_1146;
void* __right_value1199 = (void*)0;
void* __right_value1200 = (void*)0;
struct list$1charph* param_default_parametors_1147;
void* __right_value1201 = (void*)0;
void* __right_value1202 = (void*)0;
struct buffer* header_buf_1148;
void* __right_value1203 = (void*)0;
int i_1149;
void* __right_value1204 = (void*)0;
struct sType* param_type_1150;
void* __right_value1205 = (void*)0;
char* param_name_1151;
void* __right_value1206 = (void*)0;
void* __right_value1207 = (void*)0;
void* __right_value1208 = (void*)0;
void* __right_value1209 = (void*)0;
void* __right_value1210 = (void*)0;
struct sFun* fun_1152;
void* __right_value1211 = (void*)0;
void* __right_value1212 = (void*)0;
struct sFun* fun2_1153;
void* __right_value1213 = (void*)0;
void* __right_value1214 = (void*)0;
void* __right_value1215 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1219 = (void*)0;
struct sNode* node_1154;
_Bool Value_1156;
char* __dec_obj356;
struct buffer* __dec_obj357;
char* __dec_obj358;
char* __dec_obj359;
void* __right_value1220 = (void*)0;
void* __right_value1221 = (void*)0;
struct tuple2$2sFunpcharph* __result411__;
    last_code_1110=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj348=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1111=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj349=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1112=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1113=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1114=((void*)0);
    real_fun_name_1115=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1116=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1116;
    klass_1117=type->mClass;
    if(    type->mPointerNum>0&&!klass_1117->mNumber) {
        source_1118=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3657, "buffer"))));
        buffer_append_str(source_1118,"{\n");
        buffer_append_str(source_1118,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1118,"var result = new %s;\n",((char*)(__right_value1186=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        __right_value1186 = come_decrement_ref_count2(__right_value1186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1117->mProtocol) {
            name_1119="_protocol_obj";
            char source2_1120[1024];
            memset(&source2_1120, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1120,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1118,source2_1120);
            klass_1117=((struct sClass*)(__right_value1187=map$2charphsClassphp_operator_load_element(info->classes,klass_1117->mName)));
            come_call_finalizer3(__right_value1187,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1121=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1117->mFields)),it_1122=list$1tuple2$2charphsTypephph_begin((o2_saved_1121));            !list$1tuple2$2charphsTypephph_end((o2_saved_1121));            it_1122=list$1tuple2$2charphsTypephph_next((o2_saved_1121))            ){
                multiple_assign_var15=it_1122;
                name_1123=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1124=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1124->mClass->mName)&&type->mPointerNum==field_type_1124->mPointerNum&&field_type_1124->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                string_operator_equals(name_1123,"_protocol_obj")) {
                }
                else if(                list$1sNodeph_length(field_type_1124->mArrayNum)>0) {
                    char source2_1125[1024];
                    memset(&source2_1125, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1125,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1123,name_1123,name_1123);
                    buffer_append_str(source_1118,source2_1125);
                }
                else {
                    char source2_1126[1024];
                    memset(&source2_1126, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1126,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1123,name_1123);
                    buffer_append_str(source_1118,source2_1126);
                }
                name_1123 = come_decrement_ref_count2(name_1123, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1124,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1121,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1117=((struct sClass*)(__right_value1188=map$2charphsClassphp_operator_load_element(info->classes,klass_1117->mName)));
            come_call_finalizer3(__right_value1188,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1127=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1117->mFields)),it_1128=list$1tuple2$2charphsTypephph_begin((o2_saved_1127));            !list$1tuple2$2charphsTypephph_end((o2_saved_1127));            it_1128=list$1tuple2$2charphsTypephph_next((o2_saved_1127))            ){
                multiple_assign_var16=it_1128;
                name_1129=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1130=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_1130->mClass->mName)&&type->mPointerNum==field_type_1130->mPointerNum&&field_type_1130->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                field_type_1130->mHeap) {
                    char source2_1131[1024];
                    memset(&source2_1131, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1131,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1129,name_1129,name_1129);
                    buffer_append_str(source_1118,source2_1131);
                }
                else if(                list$1sNodeph_length(field_type_1130->mArrayNum)>0) {
                    char source2_1132[1024];
                    memset(&source2_1132, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1132,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1129,name_1129,name_1129);
                    buffer_append_str(source_1118,source2_1132);
                }
                else {
                    char source2_1133[1024];
                    memset(&source2_1133, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1133,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1129,name_1129);
                    buffer_append_str(source_1118,source2_1133);
                }
                name_1129 = come_decrement_ref_count2(name_1129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1130,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1127,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1118,"return result;");
        buffer_append_char(source_1118,125);
        p_1134=info->p;
        sline_1135=info->sline;
        sname_1136=(char*)come_increment_ref_count(info->sname);
        source3_1137=(struct buffer*)come_increment_ref_count(info->source);
        head_1138=info->head;
        __dec_obj350=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1118);
        come_call_finalizer3(__dec_obj350,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj351=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1115));
        __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1139=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1140=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_1141=(char*)come_increment_ref_count(string_clone(real_fun_name_1115));
        self_type_1142=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1142->mHeap=(_Bool)0;
        param_types_1144=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1143[0]=(struct sType*)come_increment_ref_count(self_type_1142),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3751, "struct list$1sTypeph")),1,__list_values31___1143)));
        param_names_1146=(struct list$1charph*)come_increment_ref_count((__list_values32___1145[0]=(char*)come_increment_ref_count(((char*)(__right_value1196=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3752, "struct list$1charph")),1,__list_values32___1145)));
        __right_value1196 = come_decrement_ref_count2(__right_value1196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1147=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3753, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1147,((void*)0));
        header_buf_1148=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3756, "buffer"))));
        buffer_append_str(header_buf_1148,((char*)(__right_value1203=make_come_type_name_string(result_type_1140,info))));
        __right_value1203 = come_decrement_ref_count2(__right_value1203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1148," ");
        buffer_append_str(header_buf_1148,real_fun_name_1115);
        buffer_append_str(header_buf_1148,"(");
        for(        i_1149=0;        i_1149<list$1sTypeph_length(param_types_1144);        i_1149++        ){
            param_type_1150=((struct sType*)come_null_check(((struct sType*)(__right_value1204=list$1sTypephp_operator_load_element(param_types_1144,i_1149))), "05function.c", 3764, 17));
            come_call_finalizer3(__right_value1204,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1151=((char*)come_null_check(((char*)(__right_value1205=list$1charphp_operator_load_element(param_names_1146,i_1149))), "05function.c", 3765, 18));
            __right_value1205 = come_decrement_ref_count2(__right_value1205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1148,((char*)(__right_value1206=make_come_type_name_string(param_type_1150,info))));
            __right_value1206 = come_decrement_ref_count2(__right_value1206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1148," ");
            buffer_append_str(header_buf_1148,param_name_1151);
            if(            i_1149!=list$1sTypeph_length(param_types_1144)-1) {
                buffer_append_str(header_buf_1148,",");
            }
        }
        buffer_append_str(header_buf_1148,")");
        result_type_1140->mStatic=(_Bool)0;
        result_type_1140->mUniq=(_Bool)0;
        result_type_1140->mInline=(_Bool)0;
        fun_1152=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3781, "sFun")),(char*)come_increment_ref_count(name_1141),(struct sType*)come_increment_ref_count(result_type_1140),(struct list$1sTypeph*)come_increment_ref_count(param_types_1144),(struct list$1charph*)come_increment_ref_count(param_names_1146),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1147),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1139),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1148)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun_1152->mCloner=(_Bool)1;
        fun2_1153=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1211=__builtin_string(fun_name)))));
        __right_value1211 = come_decrement_ref_count2(__right_value1211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1153==((void*)0)||fun2_1153->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1141)),(struct sFun*)come_increment_ref_count(fun_1152));
        }
        cloner_1114=fun_1152;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3798, "struct sNode");
        _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1215=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3798, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1152),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_1154=(struct sNode*)come_increment_ref_count(_inf_value14);
        come_call_finalizer3(__right_value1215,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1156=node_compile(node_1154,info);
        if(        !Value_1156) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        else {
        }
        __dec_obj356=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1136);
        __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1135;
        __dec_obj357=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1137);
        come_call_finalizer3(__dec_obj357,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1134;
        info->head=head_1138;
        info->sline=sline_1135;
        come_call_finalizer3(source_1118,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1136 = come_decrement_ref_count2(sname_1136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1137,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1139,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1140,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1141 = come_decrement_ref_count2(name_1141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1142,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1144,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1146,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1147,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1148,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1152,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1153,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1154) { node_1154 = come_decrement_ref_count2(node_1154, ((struct sNode*)node_1154)->finalize, ((struct sNode*)node_1154)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1113;
    __dec_obj358=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1110);
    __dec_obj358 = come_decrement_ref_count2(__dec_obj358, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj359=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1111);
    __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1112;
    __result411__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1221=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3820, "struct tuple2$2sFunpcharph")),cloner_1114,(char*)come_increment_ref_count(real_fun_name_1115))));
    last_code_1110 = come_decrement_ref_count2(last_code_1110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1111 = come_decrement_ref_count2(last_code2_1111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1115 = come_decrement_ref_count2(real_fun_name_1115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1116,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1221,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result411__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1157;
char* __dec_obj360;
char* last_code2_1158;
char* __dec_obj361;
_Bool comma_instead_of_semicolon_1159;
struct sClass* current_stack_frame_struct_1160;
struct sFun* cloner_1161;
void* __right_value1222 = (void*)0;
char* real_fun_name_1162;
void* __right_value1223 = (void*)0;
struct sType* type2_1163;
struct sClass* klass_1164;
void* __right_value1224 = (void*)0;
void* __right_value1225 = (void*)0;
struct buffer* source_1165;
int i_1166;
void* __right_value1226 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1167;
struct tuple2$2charphsTypeph* it_1168;
struct tuple2$2charphsTypeph* multiple_assign_var17 = (void*)0;
char* name_1169=0;
struct sType* field_type_1170=0;
char* p_1173;
int sline_1174;
char* sname_1175;
struct buffer* source3_1176;
char* head_1177;
struct buffer* __dec_obj362;
void* __right_value1227 = (void*)0;
char* __dec_obj363;
void* __right_value1228 = (void*)0;
struct sBlock* block_1178;
void* __right_value1229 = (void*)0;
void* __right_value1230 = (void*)0;
struct sType* result_type_1179;
void* __right_value1231 = (void*)0;
char* name_1180;
void* __right_value1232 = (void*)0;
struct sType* self_type_1181;
struct sType* __list_values33___1182[1];
void* __right_value1233 = (void*)0;
void* __right_value1234 = (void*)0;
struct list$1sTypeph* param_types_1183;
void* __right_value1235 = (void*)0;
char* __list_values34___1184[1];
void* __right_value1236 = (void*)0;
void* __right_value1237 = (void*)0;
struct list$1charph* param_names_1185;
void* __right_value1238 = (void*)0;
void* __right_value1239 = (void*)0;
struct list$1charph* param_default_parametors_1186;
void* __right_value1240 = (void*)0;
void* __right_value1241 = (void*)0;
struct buffer* header_buf_1187;
void* __right_value1242 = (void*)0;
int i_1188;
void* __right_value1243 = (void*)0;
struct sType* param_type_1189;
void* __right_value1244 = (void*)0;
char* param_name_1190;
void* __right_value1245 = (void*)0;
void* __right_value1246 = (void*)0;
void* __right_value1247 = (void*)0;
void* __right_value1248 = (void*)0;
void* __right_value1249 = (void*)0;
struct sFun* fun_1191;
void* __right_value1250 = (void*)0;
void* __right_value1251 = (void*)0;
struct sFun* fun2_1192;
void* __right_value1252 = (void*)0;
void* __right_value1253 = (void*)0;
void* __right_value1254 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1258 = (void*)0;
struct sNode* node_1193;
_Bool Value_1195;
char* __dec_obj368;
struct buffer* __dec_obj369;
char* __dec_obj370;
char* __dec_obj371;
void* __right_value1259 = (void*)0;
void* __right_value1260 = (void*)0;
struct tuple2$2sFunpcharph* __result414__;
    last_code_1157=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj360=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1158=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj361=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1159=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1160=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1161=((void*)0);
    real_fun_name_1162=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1163=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1163;
    klass_1164=type->mClass;
    if(    type->mPointerNum>0&&!klass_1164->mNumber) {
        source_1165=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3845, "buffer"))));
        buffer_append_str(source_1165,"{\n");
        buffer_append_str(source_1165,"var result = new buffer();\n");
        buffer_append_format(source_1165,"result.append_str(\"%s {\");\n",klass_1164->mName);
        i_1166=0;
        klass_1164=((struct sClass*)(__right_value1226=map$2charphsClassphp_operator_load_element(info->classes,klass_1164->mName)));
        come_call_finalizer3(__right_value1226,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1167=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1164->mFields)),it_1168=list$1tuple2$2charphsTypephph_begin((o2_saved_1167));        !list$1tuple2$2charphsTypephph_end((o2_saved_1167));        it_1168=list$1tuple2$2charphsTypephph_next((o2_saved_1167))        ){
            multiple_assign_var17=it_1168;
            name_1169=(char*)come_increment_ref_count(multiple_assign_var17->v1);
            field_type_1170=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_1170->mClass->mName)&&type->mPointerNum==field_type_1170->mPointerNum&&field_type_1170->mHeap) {
                err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            i_1166==list$1tuple2$2charphsTypephph_length(klass_1164->mFields)-1) {
                char source2_1171[1024];
                memset(&source2_1171, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1171,1024,"result.append_str(\"%s:\");\n",name_1169);
                buffer_append_str(source_1165,source2_1171);
                snprintf(source2_1171,1024,"result.append_str(self.%s.to_string());\n",name_1169);
                buffer_append_str(source_1165,source2_1171);
            }
            else {
                char source2_1172[1024];
                memset(&source2_1172, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1172,1024,"result.append_str(\"%s:\");\n",name_1169);
                buffer_append_str(source_1165,source2_1172);
                snprintf(source2_1172,1024,"result.append_str(self.%s.to_string());\n",name_1169);
                buffer_append_str(source_1165,source2_1172);
                snprintf(source2_1172,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1165,source2_1172);
            }
            i_1166++;
            name_1169 = come_decrement_ref_count2(name_1169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1170,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1167,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1165,"result.append_str(\"}\");\n");
        buffer_append_format(source_1165,"return result.to_string();\n");
        buffer_append_char(source_1165,125);
        p_1173=info->p;
        sline_1174=info->sline;
        sname_1175=(char*)come_increment_ref_count(info->sname);
        source3_1176=(struct buffer*)come_increment_ref_count(info->source);
        head_1177=info->head;
        __dec_obj362=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1165);
        come_call_finalizer3(__dec_obj362,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj363=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1162));
        __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1178=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1179=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3912, "sType")),"char*",(_Bool)0,info));
        result_type_1179->mHeap=(_Bool)1;
        name_1180=(char*)come_increment_ref_count(string_clone(real_fun_name_1162));
        self_type_1181=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1181->mHeap=(_Bool)0;
        param_types_1183=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1182[0]=(struct sType*)come_increment_ref_count(self_type_1181),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3917, "struct list$1sTypeph")),1,__list_values33___1182)));
        param_names_1185=(struct list$1charph*)come_increment_ref_count((__list_values34___1184[0]=(char*)come_increment_ref_count(((char*)(__right_value1235=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3918, "struct list$1charph")),1,__list_values34___1184)));
        __right_value1235 = come_decrement_ref_count2(__right_value1235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1186=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3919, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_1186,((void*)0));
        header_buf_1187=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3922, "buffer"))));
        buffer_append_str(header_buf_1187,((char*)(__right_value1242=make_come_type_name_string(result_type_1179,info))));
        __right_value1242 = come_decrement_ref_count2(__right_value1242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1187," ");
        buffer_append_str(header_buf_1187,real_fun_name_1162);
        buffer_append_str(header_buf_1187,"(");
        for(        i_1188=0;        i_1188<list$1sTypeph_length(param_types_1183);        i_1188++        ){
            param_type_1189=((struct sType*)come_null_check(((struct sType*)(__right_value1243=list$1sTypephp_operator_load_element(param_types_1183,i_1188))), "05function.c", 3930, 19));
            come_call_finalizer3(__right_value1243,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1190=((char*)come_null_check(((char*)(__right_value1244=list$1charphp_operator_load_element(param_names_1185,i_1188))), "05function.c", 3931, 20));
            __right_value1244 = come_decrement_ref_count2(__right_value1244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1187,((char*)(__right_value1245=make_come_type_name_string(param_type_1189,info))));
            __right_value1245 = come_decrement_ref_count2(__right_value1245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1187," ");
            buffer_append_str(header_buf_1187,param_name_1190);
            if(            i_1188!=list$1sTypeph_length(param_types_1183)-1) {
                buffer_append_str(header_buf_1187,",");
            }
        }
        buffer_append_str(header_buf_1187,")");
        result_type_1179->mStatic=(_Bool)0;
        result_type_1179->mUniq=(_Bool)0;
        result_type_1179->mInline=(_Bool)0;
        fun_1191=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3947, "sFun")),(char*)come_increment_ref_count(name_1180),(struct sType*)come_increment_ref_count(result_type_1179),(struct list$1sTypeph*)come_increment_ref_count(param_types_1183),(struct list$1charph*)come_increment_ref_count(param_names_1185),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1186),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1178),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1187)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0));
        fun_1191->mCloner=(_Bool)1;
        fun2_1192=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1250=__builtin_string(fun_name)))));
        __right_value1250 = come_decrement_ref_count2(__right_value1250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1192==((void*)0)||fun2_1192->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_1180)),(struct sFun*)come_increment_ref_count(fun_1191));
        }
        cloner_1161=fun_1191;
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3964, "struct sNode");
        _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1254=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3964, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_1191),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sFunNode_finalize;
        _inf_value15->clone=(void*)sFunNode_clone;
        _inf_value15->compile=(void*)sFunNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sFunNode_kind;
        node_1193=(struct sNode*)come_increment_ref_count(_inf_value15);
        come_call_finalizer3(__right_value1254,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        Value_1195=node_compile(node_1193,info);
        if(        !Value_1195) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        else {
        }
        __dec_obj368=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1175);
        __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1174;
        __dec_obj369=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1176);
        come_call_finalizer3(__dec_obj369,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1173;
        info->head=head_1177;
        info->sline=sline_1174;
        come_call_finalizer3(source_1165,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1175 = come_decrement_ref_count2(sname_1175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1176,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1178,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1179,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1180 = come_decrement_ref_count2(name_1180, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1181,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1185,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1186,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1187,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1191,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1192,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_1193) { node_1193 = come_decrement_ref_count2(node_1193, ((struct sNode*)node_1193)->finalize, ((struct sNode*)node_1193)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1160;
    __dec_obj370=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1157);
    __dec_obj370 = come_decrement_ref_count2(__dec_obj370, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj371=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1158);
    __dec_obj371 = come_decrement_ref_count2(__dec_obj371, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1159;
    __result414__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1260=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3986, "struct tuple2$2sFunpcharph")),cloner_1161,(char*)come_increment_ref_count(real_fun_name_1162))));
    last_code_1157 = come_decrement_ref_count2(last_code_1157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1158 = come_decrement_ref_count2(last_code2_1158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1162 = come_decrement_ref_count2(real_fun_name_1162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1163,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1260,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result414__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj364;
struct sFun* __dec_obj365;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj364=self->sname;
            __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj365=self->mFun;
            come_call_finalizer3(__dec_obj365,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result412__;
void* __right_value1255 = (void*)0;
struct sFunNode* result_1194;
void* __right_value1256 = (void*)0;
char* __dec_obj366;
void* __right_value1257 = (void*)0;
struct sFun* __dec_obj367;
struct sFunNode* __result413__;
    if(    self==(void*)0) {
        __result412__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result412__;
    }
    result_1194=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(    self!=((void*)0)) {
        result_1194->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj366=result_1194->sname;
        result_1194->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1194->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj367=result_1194->mFun;
        result_1194->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer3(__dec_obj367,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result413__ = gComeFunResultObject = __result_obj__ = result_1194;
    come_call_finalizer3(result_1194,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result413__;
}

