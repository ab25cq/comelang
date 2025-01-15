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
    char* mAttribute;
    char* mFunAttribute;
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
struct sStoreNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    _Bool alloc;
    struct sType* type;
    struct sNode* right_value;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
};

struct sNewChannel
{
    int sline;
    char* sname;
    int sline_real;
};

struct sWriteChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
    struct sNode* right_value;
};

struct sReadChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct sFunLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct tuple2$2sNodephsNodeph
{
    struct sNode* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2sNodephsNodephph
{
    struct tuple2$2sNodephsNodeph* item;
    struct list_item$1tuple2$2sNodephsNodephph* prev;
    struct list_item$1tuple2$2sNodephsNodephph* next;
};

struct list$1tuple2$2sNodephsNodephph
{
    struct list_item$1tuple2$2sNodephsNodephph* head;
    struct list_item$1tuple2$2sNodephsNodephph* tail;
    int len;
    struct list_item$1tuple2$2sNodephsNodephph* it;
};

struct sArrayInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2sNodephsNodephph* initializer;
};

struct tuple2$2voidpsNodeph
{
    void* v1;
    struct sNode* v2;
};

struct sStructInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2charphsNodephph* initializer;
};

struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
};

// source head

// header function
int renameat(int anonymous_var_nameX3, const char* anonymous_var_nameX4, int anonymous_var_nameX5, const char* anonymous_var_nameX6) __attribute__((availability(macosx,introduced=10.10)));
int renamex_np(const char* anonymous_var_nameX7, const char* anonymous_var_nameX8, unsigned int anonymous_var_nameX9) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int renameatx_np(int anonymous_var_nameX10, const char* anonymous_var_nameX11, int anonymous_var_nameX12, const char* anonymous_var_nameX13, unsigned int anonymous_var_nameX14) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int printf(const char* anonymous_var_nameX15, ...) __attribute__((__format__ (__printf__, 1, 2)));
void clearerr(struct __sFILE* anonymous_var_nameX36);
int fclose(struct __sFILE* anonymous_var_nameX37);
int feof(struct __sFILE* anonymous_var_nameX38);
int ferror(struct __sFILE* anonymous_var_nameX39);
int fflush(struct __sFILE* anonymous_var_nameX40);
int fgetc(struct __sFILE* anonymous_var_nameX41);
int fgetpos(struct __sFILE* anonymous_var_nameX42, long  long* anonymous_var_nameX43);
char* fgets(char* anonymous_var_nameX44, int anonymous_var_nameX45, struct __sFILE* anonymous_var_nameX46);
struct __sFILE* fopen(const char* __filename, const char* __mode) __asm("_" "fopen" );
int fprintf(struct __sFILE* anonymous_var_nameX47, const char* anonymous_var_nameX48, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int anonymous_var_nameX49, struct __sFILE* anonymous_var_nameX50);
int fputs(const char* anonymous_var_nameX51, struct __sFILE* anonymous_var_nameX52) __asm("_" "fputs" );
unsigned long  int fread(void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream);
struct __sFILE* freopen(const char* anonymous_var_nameX53, const char* anonymous_var_nameX54, struct __sFILE* anonymous_var_nameX55) __asm("_" "freopen" );
int fscanf(struct __sFILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(struct __sFILE* anonymous_var_nameX58, long anonymous_var_nameX59, int anonymous_var_nameX60);
int fsetpos(struct __sFILE* anonymous_var_nameX61, const long  long* anonymous_var_nameX62);
long ftell(struct __sFILE* anonymous_var_nameX63);
unsigned long  int fwrite(const void* __ptr, unsigned long  int __size, unsigned long  int __nitems, struct __sFILE* __stream) __asm("_" "fwrite" );
int getc(struct __sFILE* anonymous_var_nameX64);
int getchar();
__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of gets(3), it is highly recommended that you use fgets(3) instead.")))

 char* gets(char* anonymous_var_nameX65);
void perror(const char* anonymous_var_nameX66) __attribute__((__cold__));
int putc(int anonymous_var_nameX67, struct __sFILE* anonymous_var_nameX68);
int putchar(int anonymous_var_nameX69);
int puts(const char* anonymous_var_nameX70);
int remove(const char* anonymous_var_nameX71);
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE* anonymous_var_nameX72);
int scanf(const char* anonymous_var_nameX73, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(struct __sFILE* anonymous_var_nameX74, char* anonymous_var_nameX75);
int setvbuf(struct __sFILE* anonymous_var_nameX76, char* anonymous_var_nameX77, int anonymous_var_nameX78, unsigned long  int anonymous_var_nameX79);
__attribute__((__availability__(swift, unavailable, message="Use snprintf instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of sprintf(3), it is highly recommended that you use snprintf(3) instead.")))

 int sprintf(char* anonymous_var_nameX80, const char* anonymous_var_nameX81, ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char* anonymous_var_nameX82, const char* anonymous_var_nameX83, ...) __attribute__((__format__ (__scanf__, 2, 3)));
struct __sFILE* tmpfile();
__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

 char* tmpnam(char* anonymous_var_nameX84);
int ungetc(int anonymous_var_nameX85, struct __sFILE* anonymous_var_nameX86);
int vfprintf(struct __sFILE* anonymous_var_nameX87, const char* anonymous_var_nameX88, va_list anonymous_var_nameX89) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char* anonymous_var_nameX90, va_list anonymous_var_nameX91) __attribute__((__format__ (__printf__, 1, 0)));
__attribute__((__availability__(swift, unavailable, message="Use vsnprintf instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of sprintf(3), it is highly recommended that you use vsnprintf(3) instead.")))

 int vsprintf(char* anonymous_var_nameX92, const char* anonymous_var_nameX93, va_list anonymous_var_nameX94) __attribute__((__format__ (__printf__, 2, 0)));
char* ctermid(char* anonymous_var_nameX95);
struct __sFILE* fdopen(int anonymous_var_nameX96, const char* anonymous_var_nameX97) __asm("_" "fdopen" );
int fileno(struct __sFILE* anonymous_var_nameX98);
int pclose(struct __sFILE* anonymous_var_nameX99) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")));
struct __sFILE* popen(const char* anonymous_var_nameX100, const char* anonymous_var_nameX101) __asm("_" "popen" ) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")));
int __srget(struct __sFILE* anonymous_var_nameX102);
int __svfscanf(struct __sFILE* anonymous_var_nameX103, const char* anonymous_var_nameX104, va_list anonymous_var_nameX105) __attribute__((__format__ (__scanf__, 2, 0)));
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
__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

 char* tempnam(const char* __dir, const char* __prefix) __asm("_" "tempnam" );
int fseeko(struct __sFILE* __stream, long  long __offset, int __whence);
long  long ftello(struct __sFILE* __stream);
int snprintf(char* __str, unsigned long  int __size, const char* __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(struct __sFILE* __stream, const char* __format, va_list anonymous_var_nameX118) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char* __format, va_list anonymous_var_nameX119) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char* __str, unsigned long  int __size, const char* __format, va_list anonymous_var_nameX120) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char* __str, const char* __format, va_list anonymous_var_nameX121) __attribute__((__format__ (__scanf__, 2, 0)));
int dprintf(int anonymous_var_nameX122, const char* anonymous_var_nameX123, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int anonymous_var_nameX124, const char* anonymous_var_nameX125, va_list anonymous_var_nameX126) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
long getdelim(char** __linep, unsigned long  int* __linecapp, int __delimiter, struct __sFILE* __stream) __attribute__((availability(macosx,introduced=10.7)));
long getline(char** __linep, unsigned long  int* __linecapp, struct __sFILE* __stream) __attribute__((availability(macosx,introduced=10.7)));
struct __sFILE* fmemopen(void* __buf, unsigned long  int __size, const char* __mode) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
struct __sFILE* open_memstream(char** __bufp, unsigned long  int* __sizep) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
int asprintf(char** anonymous_var_nameX127, const char* anonymous_var_nameX128, ...) __attribute__((__format__ (__printf__, 2, 3)));
char* ctermid_r(char* anonymous_var_nameX129);
char* fgetln(struct __sFILE* anonymous_var_nameX130, unsigned long  int* anonymous_var_nameX131);
const char* fmtcheck(const char* anonymous_var_nameX132, const char* anonymous_var_nameX133) __attribute__((format_arg(2)));
int fpurge(struct __sFILE* anonymous_var_nameX134);
void setbuffer(struct __sFILE* anonymous_var_nameX135, char* anonymous_var_nameX136, int anonymous_var_nameX137);
int setlinebuf(struct __sFILE* anonymous_var_nameX138);
int vasprintf(char** anonymous_var_nameX139, const char* anonymous_var_nameX140, va_list anonymous_var_nameX141) __attribute__((__format__ (__printf__, 2, 0)));
struct __sFILE* funopen(const void* anonymous_var_nameX142, int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long  long (*anonymous_lambda_var_nameZ3)(void*,long  long,int), int (*anonymous_lambda_var_nameZ4)(void*));
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int getpriority(int anonymous_var_nameX173, unsigned int anonymous_var_nameX174);
int getiopolicy_np(int anonymous_var_nameX175, int anonymous_var_nameX176) __attribute__((availability(macosx,introduced=10.5)));
int getrlimit(int anonymous_var_nameX177, struct rlimit* anonymous_var_nameX178) __asm("_" "getrlimit" );
int getrusage(int anonymous_var_nameX179, struct rusage* anonymous_var_nameX180);
int setpriority(int anonymous_var_nameX181, unsigned int anonymous_var_nameX182, int anonymous_var_nameX183);
int setiopolicy_np(int anonymous_var_nameX184, int anonymous_var_nameX185, int anonymous_var_nameX186) __attribute__((availability(macosx,introduced=10.5)));
int setrlimit(int anonymous_var_nameX187, const struct rlimit* anonymous_var_nameX188) __asm("_" "setrlimit" );
int wait(int* anonymous_var_nameX189) __asm("_" "wait" );
int waitpid(int anonymous_var_nameX190, int* anonymous_var_nameX191, int anonymous_var_nameX192) __asm("_" "waitpid" );
int waitid(enum anonymous_typeY2 anonymous_var_nameX193, unsigned int anonymous_var_nameX194, struct __siginfo* anonymous_var_nameX195, int anonymous_var_nameX196) __asm("_" "waitid" );
int wait3(int* anonymous_var_nameX197, int anonymous_var_nameX198, struct rusage* anonymous_var_nameX199);
int wait4(int anonymous_var_nameX200, int* anonymous_var_nameX201, int anonymous_var_nameX202, struct rusage* anonymous_var_nameX203);
void* alloca(unsigned long  int anonymous_var_nameX204);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_malloc(unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_calloc(unsigned long  int count, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void malloc_type_free(void* ptr, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_realloc(void* ptr, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_valloc(unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_aligned_alloc(unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  int malloc_type_posix_memalign(void** memptr, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_malloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_calloc(struct _malloc_zone_t* zone, unsigned long  int count, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2,3)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void malloc_type_zone_free(struct _malloc_zone_t* zone, void* ptr, unsigned long  long type_id);
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_realloc(struct _malloc_zone_t* zone, void* ptr, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(3)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_valloc(struct _malloc_zone_t* zone, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
__attribute__((availability(macos,introduced=14.0))) __attribute__((availability(ios,introduced=17.0))) __attribute__((availability(tvos,introduced=17.0))) __attribute__((availability(watchos,introduced=10.0))) __attribute__((availability(visionos,introduced=1.0))) __attribute__((availability(driverkit,introduced=23.0)))  void* malloc_type_zone_memalign(struct _malloc_zone_t* zone, unsigned long  int alignment, unsigned long  int size, unsigned long  long type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(3)));
void* malloc(unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1))) ;
void* calloc(unsigned long  int __count, unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2))) ;
void free(void* anonymous_var_nameX205);
void* realloc(void* __ptr, unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2))) ;
void* reallocf(void* __ptr, unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
void* valloc(unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1))) ;
void* aligned_alloc(unsigned long  int __alignment, unsigned long  int __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_align(1))) __attribute__((alloc_size(2))) __attribute__((availability(macosx,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)));
int posix_memalign(void** __memptr, unsigned long  int __alignment, unsigned long  int __size) __attribute__((availability(macosx,introduced=10.6)));
void abort() __attribute__((__cold__)) __attribute__((__noreturn__));
int abs(int anonymous_var_nameX206) __attribute__((__const__));
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* anonymous_var_nameX207);
int atoi(const char* anonymous_var_nameX208);
long atol(const char* anonymous_var_nameX209);
long long atoll(const char* anonymous_var_nameX210);
void* bsearch(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
struct anonymous_typeX5 div(int anonymous_var_nameX213, int anonymous_var_nameX214) __attribute__((__const__));
void exit(int anonymous_var_nameX215) __attribute__((__noreturn__));
char* getenv(const char* anonymous_var_nameX216);
long labs(long anonymous_var_nameX217) __attribute__((__const__));
struct anonymous_typeX6 ldiv(long anonymous_var_nameX218, long anonymous_var_nameX219) __attribute__((__const__));
long long llabs(long  long anonymous_var_nameX220);
struct anonymous_typeX7 lldiv(long  long anonymous_var_nameX221, long  long anonymous_var_nameX222);
int mblen(const char* __s, unsigned long  int __n);
unsigned long  int mbstowcs(int* anonymous_var_nameX223, const char* anonymous_var_nameX224, unsigned long  int anonymous_var_nameX225);
int mbtowc(int* anonymous_var_nameX226, const char* anonymous_var_nameX227, unsigned long  int anonymous_var_nameX228);
void qsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
void quick_exit(int anonymous_var_nameX231) __attribute__((__noreturn__));
int rand() __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
void srand(unsigned int anonymous_var_nameX232) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
double strtod(const char* anonymous_var_nameX233, char** anonymous_var_nameX234) __asm("_" "strtod" );
float strtof(const char* anonymous_var_nameX235, char** anonymous_var_nameX236) __asm("_" "strtof" );
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* anonymous_var_nameX237, char** anonymous_var_nameX238);
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
__attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead. (On iOS, process spawning is unavailable.)")))
__attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,unavailable)))
__attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))
 int system(const char* anonymous_var_nameX239) __asm("_" "system" );
unsigned long  int wcstombs(char* anonymous_var_nameX240, const int* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
int wctomb(char* anonymous_var_nameX243, int anonymous_var_nameX244);
void _Exit(int anonymous_var_nameX245) __attribute__((__noreturn__));
long a64l(const char* anonymous_var_nameX246);
double drand48();
char* ecvt(double anonymous_var_nameX247, int anonymous_var_nameX248, int* anonymous_var_nameX249, int* anonymous_var_nameX250);
double erand48(unsigned short int anonymous_var_nameX251[3]);
char* fcvt(double anonymous_var_nameX252, int anonymous_var_nameX253, int* anonymous_var_nameX254, int* anonymous_var_nameX255);
char* gcvt(double anonymous_var_nameX256, int anonymous_var_nameX257, char* anonymous_var_nameX258);
int getsubopt(char** anonymous_var_nameX259, char** anonymous_var_nameX260, char** anonymous_var_nameX261);
int grantpt(int anonymous_var_nameX262);
char* initstate(unsigned int anonymous_var_nameX263, char* anonymous_var_nameX264, unsigned long  int anonymous_var_nameX265);
long jrand48(unsigned short int anonymous_var_nameX266[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char* l64a(long anonymous_var_nameX267);
void lcong48(unsigned short int anonymous_var_nameX268[7]);
long lrand48() __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of mktemp(3), it is highly recommended that you use mkstemp(3) instead.")))

 char* mktemp(char* anonymous_var_nameX269);
int mkstemp(char* anonymous_var_nameX270);
long mrand48() __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
long nrand48(unsigned short int anonymous_var_nameX271[3]) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int posix_openpt(int anonymous_var_nameX272);
char* ptsname(int anonymous_var_nameX273);
int ptsname_r(int fildes, char* buffer, unsigned long  int buflen) __attribute__((availability(macos,introduced=10.13.4))) __attribute__((availability(ios,introduced=11.3))) __attribute__((availability(tvos,introduced=11.3))) __attribute__((availability(watchos,introduced=4.3)));
int putenv(char* anonymous_var_nameX274) __asm("_" "putenv" );
long random() __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
int rand_r(unsigned int* anonymous_var_nameX275) __attribute__((__availability__(swift, unavailable, message="Use arc4random instead.")));
char* realpath(const char* anonymous_var_nameX276, char* anonymous_var_nameX277) __asm("_" "realpath" "$DARWIN_EXTSN");
unsigned short int* seed48(unsigned short int anonymous_var_nameX278[3]);
int setenv(const char* __name, const char* __value, int __overwrite) __asm("_" "setenv" );
void setkey(const char* anonymous_var_nameX279) __asm("_" "setkey" );
char* setstate(const char* anonymous_var_nameX280);
void srand48(long anonymous_var_nameX281);
void srandom(unsigned int anonymous_var_nameX282);
int unlockpt(int anonymous_var_nameX283);
int unsetenv(const char* anonymous_var_nameX284) __asm("_" "unsetenv" );
unsigned int arc4random();
void arc4random_addrandom(unsigned char* anonymous_var_nameX285, int anonymous_var_nameX286) __attribute__((availability(macosx,introduced=10.0))) __attribute__((availability(macosx,deprecated=10.12,message="use arc4random_stir")))
    __attribute__((availability(ios,introduced=2.0))) __attribute__((availability(ios,deprecated=10.0,message="use arc4random_stir")))
    __attribute__((availability(tvos,introduced=2.0))) __attribute__((availability(tvos,deprecated=10.0,message="use arc4random_stir")))
    __attribute__((availability(watchos,introduced=1.0))) __attribute__((availability(watchos,deprecated=3.0,message="use arc4random_stir")));
void arc4random_buf(void* __buf, unsigned long  int __nbytes) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir();
unsigned int arc4random_uniform(unsigned int __upper_bound) __attribute__((availability(macosx,introduced=10.7)));
int atexit_b(void (*anonymous_lambda_var_nameZ8)()) __attribute__((availability(macosx,introduced=10.6)));
void* bsearch_b(const void* __key, const void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*)) __attribute__((availability(macosx,introduced=10.6)));
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
int daemon(int anonymous_var_nameX311, int anonymous_var_nameX312) __asm("_" "daemon" ) __attribute__((availability(macosx,introduced=10.0,deprecated=10.5,message="Use posix_spawn APIs instead."))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
char* devname(int anonymous_var_nameX313, unsigned short int anonymous_var_nameX314);
char* devname_r(int anonymous_var_nameX315, unsigned short int anonymous_var_nameX316, char* buf, int len);
char* getbsize(int* anonymous_var_nameX317, long* anonymous_var_nameX318);
int getloadavg(double anonymous_var_nameX319[], int anonymous_var_nameX320);
const char* getprogname();
void setprogname(const char* anonymous_var_nameX321);
int heapsort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int heapsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*)) __attribute__((availability(macosx,introduced=10.6)));
int mergesort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*));
int mergesort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*)) __attribute__((availability(macosx,introduced=10.6)));
void psort(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*)) __attribute__((availability(macosx,introduced=10.6)));
void psort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*)) __attribute__((availability(macosx,introduced=10.6)));
void psort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX334, int (*__compar)(void*,const void*,const void*)) __attribute__((availability(macosx,introduced=10.6)));
void qsort_b(void* __base, unsigned long  int __nel, unsigned long  int __width, int (*__compar)(const void*,const void*)) __attribute__((availability(macosx,introduced=10.6)));
void qsort_r(void* __base, unsigned long  int __nel, unsigned long  int __width, void* anonymous_var_nameX340, int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* anonymous_var_nameX344) __attribute__((availability(macos,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)));
int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
void sranddev();
void srandomdev();
long long strtonum(const char* __numstr, long  long __minval, long  long __maxval, const char** __errstrp) __attribute__((availability(macos,introduced=11.0))) __attribute__((availability(ios,introduced=14.0))) __attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)));
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
char* strerror(int __errnum) __asm("_" "strerror" );
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
char* stpncpy(char* __dst, const char* __src, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.7)));
char* strndup(const char* __s1, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.7)));
unsigned long  int strnlen(const char* __s1, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.7)));
char* strsignal(int __sig);
int memset_s(void* __s, unsigned long  int __smax, int __c, unsigned long  int __n) __attribute__((availability(macosx,introduced=10.9)));
void* memmem(const void* __big, unsigned long  int __big_len, const void* __little, unsigned long  int __little_len) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void* __b, const void* __pattern4, unsigned long  int __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void* __b, const void* __pattern8, unsigned long  int __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void* __b, const void* __pattern16, unsigned long  int __len) __attribute__((availability(macosx,introduced=10.5)));
char* strcasestr(const char* __big, const char* __little);
char* strnstr(const char* __big, const char* __little, unsigned long  int __len);
unsigned long  int strlcat(char* __dst, const char* __source, unsigned long  int __size);
unsigned long  int strlcpy(char* __dst, const char* __source, unsigned long  int __size);
void strmode(int __mode, char* __bp);
char* strsep(char** __stringp, const char* __delim);
void swab(const void* anonymous_var_nameX345, void* anonymous_var_nameX346, long anonymous_var_nameX347);
__attribute__((availability(macosx,introduced=10.12.1))) __attribute__((availability(ios,introduced=10.1)))
__attribute__((availability(tvos,introduced=10.0.1))) __attribute__((availability(watchos,introduced=3.1)))
 int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int __len);
__attribute__((availability(macosx,introduced=11.0))) __attribute__((availability(ios,introduced=14.0)))
__attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)))
 int strsignal_r(int __sig, char* __strsignalbuf, unsigned long  int __buflen);
int bcmp(const void* anonymous_var_nameX348, const void* anonymous_var_nameX349, unsigned long  int anonymous_var_nameX350);
void bcopy(const void* anonymous_var_nameX351, void* anonymous_var_nameX352, unsigned long  int anonymous_var_nameX353);
void bzero(void* anonymous_var_nameX354, unsigned long  int anonymous_var_nameX355);
char* index(const char* anonymous_var_nameX356, int anonymous_var_nameX357);
char* rindex(const char* anonymous_var_nameX358, int anonymous_var_nameX359);
int ffs(int anonymous_var_nameX360);
int strcasecmp(const char* anonymous_var_nameX361, const char* anonymous_var_nameX362);
int strncasecmp(const char* anonymous_var_nameX363, const char* anonymous_var_nameX364, unsigned long  int anonymous_var_nameX365);
int ffsl(long anonymous_var_nameX366) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long  long anonymous_var_nameX367) __attribute__((availability(macosx,introduced=10.9)));
int fls(int anonymous_var_nameX368) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long anonymous_var_nameX369) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long  long anonymous_var_nameX370) __attribute__((availability(macosx,introduced=10.9)));
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_, char* attribute, char* fun_attribute);
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
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
char* sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);
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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct map$2charphsVarph* map$2charphsVarph_remove(struct map$2charphsVarph* self, char* key);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info);
char* sNewChannel_kind(struct sNewChannel* self);
_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info);
struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info);
char* sWriteChannelNode_kind(struct sWriteChannelNode* self);
_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info);
struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info);
char* sReadChannelNode_kind(struct sReadChannelNode* self);
_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);
char* sLoadNode_kind(struct sLoadNode* self);
_Bool sLoadNode_terminated(struct sLoadNode* self);
_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);
char* sFunLoadNode_kind(struct sFunLoadNode* self);
_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);
static void sFunLoadNode_finalize(struct sFunLoadNode* self);
struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNodephsNodephph* initializer, struct sInfo* info);
char* sArrayInitializer_kind(struct sArrayInitializer* self);
_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_initialize(struct list$1tuple2$2sNodephsNodephph* self);
static void list$1tuple2$2sNodephsNodephphp_finalize(struct list$1tuple2$2sNodephsNodephph* self);
static void list_item$1tuple2$2sNodephsNodephphp_finalize(struct list_item$1tuple2$2sNodephsNodephph* self);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item);
static void tuple2$2sNodephsNodephp_finalize(struct tuple2$2sNodephsNodeph* self);
static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodephp_clone(struct tuple2$2sNodephsNodeph* self);
static void tuple2$2sNodephsNodeph_finalize(struct tuple2$2sNodephsNodeph* self);
static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self);
static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_begin(struct list$1tuple2$2sNodephsNodephph* self);
static _Bool list$1tuple2$2sNodephsNodephph_end(struct list$1tuple2$2sNodephsNodephph* self);
static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_next(struct list$1tuple2$2sNodephsNodephph* self);
static int list$1tuple2$2sNodephsNodephph_length(struct list$1tuple2$2sNodephsNodephph* self);
struct sNode* parse_array_initializer(struct sInfo* info);
static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2);
static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2);
static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self);
static void sArrayInitializer_finalize(struct sArrayInitializer* self);
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info);
char* sStructInitializer_kind(struct sStructInitializer* self);
_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* parse_struct_initializer(struct sInfo* info);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sStructInitializer_finalize(struct sStructInitializer* self);
static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static void sNewChannel_finalize(struct sNewChannel* self);
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
struct sNode* expression_node_v95(struct sInfo* info);
static void sReadChannelNode_finalize(struct sReadChannelNode* self);
static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
static void sWriteChannelNode_finalize(struct sWriteChannelNode* self);
static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self);
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
unsigned char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
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
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
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
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
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
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
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
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
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
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
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
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
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
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
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
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
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
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
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
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
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
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
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
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
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
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
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
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
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
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
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
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
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
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
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
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
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
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 4109, "list$1char")),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 4114, "list$1charp")),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 4119, "list$1short")),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 4124, "list$1int")),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 4129, "list$1long")),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 4134, "list$1float")),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 4139, "list$1double")),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 4144, "vector$1char")),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 4149, "vector$1charp")),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 4154, "vector$1short")),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 4159, "vector$1int")),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 4164, "vector$1long")),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 4169, "vector$1float")),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 4174, "vector$1double")),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
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
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value197 = (void*)0;
char* __result153__;
    __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result153__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* __dec_obj33;
void* __right_value287 = (void*)0;
struct sType* __dec_obj79;
struct sNode* __dec_obj80;
void* __right_value288 = (void*)0;
struct list$1charph* __dec_obj81;
void* __right_value299 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj104;
struct sStoreNode* __result223__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj33=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj79=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj80=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
    ((void*)0);
    __dec_obj81=self->multiple_assign;
    self->multiple_assign=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(multiple_assign));
    come_call_finalizer3(__dec_obj81,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    ((void*)0);
    __dec_obj104=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare));
    come_call_finalizer3(__dec_obj104,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result223__;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
char* __result224__;
    __result224__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value300=__builtin_string("sStoreNode")));
    __right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __right_value301 = (void*)0;
struct sVar* var__288;
void* __right_value302 = (void*)0;
struct sType* type_310;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_311;
struct tuple3$3sTypephcharphsNodeph* it_314;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1 = (void*)0;
struct sType* type_317=0;
char* var_name_318=0;
struct sNode* right_value_319=0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
_Bool __result240__;
void* __right_value305 = (void*)0;
struct sType* left_type_320;
_Bool Value_321;
_Bool __result241__;
void* __right_value306 = (void*)0;
struct CVALUE* come_value_322;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
_Bool Value_323;
void* __right_value310 = (void*)0;
struct CVALUE* right_value_324;
struct sType* right_type_325;
int i_326;
struct list$1charph* o2_saved_327;
char* it_330;
void* __right_value311 = (void*)0;
struct sVar* var__333;
void* __right_value312 = (void*)0;
struct sType* right_type2_334;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
char* multiple_var_name_339;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
char* __dec_obj118;
struct list$1charph* o2_saved_340;
char* it_341;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sType* right_type2_342;
struct sVar* var__343;
void* __right_value319 = (void*)0;
struct sType* var_type_344;
void* __right_value320 = (void*)0;
struct sType* left_type_345;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct CVALUE* right_value2_346;
void* __right_value323 = (void*)0;
char* __dec_obj119;
void* __right_value324 = (void*)0;
struct sType* __dec_obj120;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct CVALUE* come_value_347;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
char* __dec_obj121;
void* __right_value330 = (void*)0;
char* __dec_obj122;
void* __right_value331 = (void*)0;
struct sType* __dec_obj123;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sVar* var__348;
void* __right_value334 = (void*)0;
struct sType* type_349;
void* __right_value335 = (void*)0;
_Bool __result250__;
void* __right_value336 = (void*)0;
struct sType* left_type_350;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct list$1sNodeph* o2_saved_351;
struct sNode* it_354;
_Bool Value_357;
void* __right_value339 = (void*)0;
struct CVALUE* come_value_358;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct CVALUE* come_value_359;
void* __right_value344 = (void*)0;
char* __dec_obj124;
void* __right_value345 = (void*)0;
struct sType* __dec_obj125;
void* __right_value349 = (void*)0;
struct sVar* var__363;
void* __right_value350 = (void*)0;
struct sType* type_364;
void* __right_value351 = (void*)0;
_Bool Value_365;
void* __right_value352 = (void*)0;
_Bool array_initializer_366;
void* __right_value353 = (void*)0;
_Bool struct_initializer_367;
void* __right_value354 = (void*)0;
_Bool new_channel_368;
void* __right_value355 = (void*)0;
struct CVALUE* right_value_369;
struct sType* right_type_370;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sType* var_type_371;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sType* left_type_372;
void* __right_value360 = (void*)0;
struct sVar* var__373;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct CVALUE* come_value_374;
void* __right_value364 = (void*)0;
char* __dec_obj129;
void* __right_value365 = (void*)0;
struct sVar* var__375;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct CVALUE* come_value_376;
void* __right_value369 = (void*)0;
char* __dec_obj130;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct CVALUE* come_value_377;
void* __right_value375 = (void*)0;
char* __dec_obj131;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct CVALUE* come_value_378;
void* __right_value381 = (void*)0;
char* __dec_obj132;
void* __right_value382 = (void*)0;
struct sType* __dec_obj133;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct CVALUE* come_value_379;
void* __right_value386 = (void*)0;
char* __dec_obj134;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sType* __dec_obj135;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct CVALUE* come_value_380;
void* __right_value394 = (void*)0;
char* __dec_obj136;
void* __right_value395 = (void*)0;
struct sType* __dec_obj137;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
_Bool __result258__;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct CVALUE* come_value_381;
void* __right_value401 = (void*)0;
char* __dec_obj138;
void* __right_value402 = (void*)0;
struct sType* __dec_obj139;
_Bool Value_382;
void* __right_value403 = (void*)0;
_Bool new_channel_383;
void* __right_value404 = (void*)0;
struct CVALUE* right_value_384;
struct sType* right_type_385;
struct sClass* current_stack_frame_struct_386;
void* __right_value405 = (void*)0;
_Bool _if_conditional1;
struct sVar* parent_var_387;
struct sType* left_type_388;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
char* c_value_389;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct CVALUE* come_value_390;
void* __right_value411 = (void*)0;
char* __dec_obj140;
void* __right_value412 = (void*)0;
char* __dec_obj141;
void* __right_value413 = (void*)0;
struct sType* __dec_obj142;
_Bool __result259__;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
char* c_value_391;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_392;
void* __right_value419 = (void*)0;
char* __dec_obj143;
void* __right_value420 = (void*)0;
char* __dec_obj144;
void* __right_value421 = (void*)0;
struct sType* __dec_obj145;
_Bool __result260__;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
_Bool __result261__;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct CVALUE* come_value_393;
void* __right_value426 = (void*)0;
char* __dec_obj146;
void* __right_value427 = (void*)0;
char* __dec_obj147;
void* __right_value428 = (void*)0;
struct sType* __dec_obj148;
_Bool __result262__;
struct sVar* var__394;
_Bool __result263__;
void* __right_value429 = (void*)0;
struct sType* __dec_obj149;
void* __right_value430 = (void*)0;
struct sType* left_type_395;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct CVALUE* come_value_396;
void* __right_value435 = (void*)0;
char* __dec_obj150;
void* __right_value436 = (void*)0;
struct sType* __dec_obj151;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct CVALUE* come_value_397;
void* __right_value441 = (void*)0;
char* __dec_obj152;
void* __right_value442 = (void*)0;
struct sType* __dec_obj153;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct CVALUE* come_value_398;
void* __right_value447 = (void*)0;
char* __dec_obj154;
void* __right_value448 = (void*)0;
struct sType* __dec_obj155;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct CVALUE* come_value_399;
void* __right_value451 = (void*)0;
char* __dec_obj156;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sType* __dec_obj157;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
_Bool __result264__;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct CVALUE* come_value_400;
void* __right_value458 = (void*)0;
char* __dec_obj158;
void* __right_value459 = (void*)0;
struct sType* __dec_obj159;
    if(    self->multiple_declare) {
        var__288=((struct sVar*)(__right_value301=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value301,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__288) {
            if(            var__288->mType->mHeap) {
                free_object(var__288->mType,var__288->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarph_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)0;
        }
        type_310=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        type_310->mFunctionParam=(_Bool)0;
        for(        o2_saved_311=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_314=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_311));        !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_311));        it_314=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_311))        ){
            multiple_assign_var1=it_314;
            type_317=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name_318=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value_319=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            var__288=((struct sVar*)(__right_value303=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,var_name_318)));
            come_call_finalizer3(__right_value303,sVar_finalize, 0, 1, 0, 0, (void*)0);
            if(            var__288) {
                if(                var__288->mType->mHeap) {
                    free_object(var__288->mType,var__288->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                map$2charphsVarph_remove(info->lv_table->mVars,var_name_318);
            }
            add_variable_to_table(var_name_318,(struct sType*)come_increment_ref_count(sType_clone(type_317)),info);
            var__288=get_variable_from_table(info->lv_table,var_name_318);
            if(            var__288==((void*)0)) {
                err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_314);
                __result240__ = (_Bool)1;
                come_call_finalizer3(type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_318 = come_decrement_ref_count2(var_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value_319) { right_value_319 = come_decrement_ref_count2(right_value_319, ((struct sNode*)right_value_319)->finalize, ((struct sNode*)right_value_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_311,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result240__;
            }
            left_type_320=(struct sType*)come_increment_ref_count(sType_clone(var__288->mType));
            if(            right_value_319) {
                Value_321=node_compile(right_value_319,info);
                if(                !Value_321) {
                    __result241__ = (_Bool)0;
                    come_call_finalizer3(type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_318 = come_decrement_ref_count2(var_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value_319) { right_value_319 = come_decrement_ref_count2(right_value_319, ((struct sNode*)right_value_319)->finalize, ((struct sNode*)right_value_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_type_320,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(o2_saved_311,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result241__;
                }
                else {
                }
                come_value_322=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"%s=%s;\n",((char*)(__right_value307=make_define_var(left_type_320,var__288->mCValueName,(_Bool)0,info))),come_value_322->c_value);
                __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(come_value_322,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__288->mCValueName,((char*)(__right_value308=make_type_name_string(left_type_320,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value309=make_define_var(left_type_320,var__288->mCValueName,(_Bool)0,info))));
                __right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_318 = come_decrement_ref_count2(var_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_value_319) { right_value_319 = come_decrement_ref_count2(right_value_319, ((struct sNode*)right_value_319)->finalize, ((struct sNode*)right_value_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(left_type_320,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_311,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->multiple_assign) {
        Value_323=node_compile(self->right_value,info);
        if(        !Value_323) {
            return (_Bool)0;
        }
        else {
        }
        right_value_324=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_325=right_value_324->type;
        dec_stack_ptr(1,info);
        if(        right_type_325->mNoSolvedGenericsType->v1) {
            right_type_325=right_type_325->mNoSolvedGenericsType->v1;
        }
        i_326=0;
        for(        o2_saved_327=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_330=list$1charph_begin((o2_saved_327));        !list$1charph_end((o2_saved_327));        it_330=list$1charph_next((o2_saved_327))        ){
            if(            i_326<list$1sTypeph_length(right_type_325->mGenericsTypes)) {
                var__333=((struct sVar*)(__right_value311=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,it_330)));
                come_call_finalizer3(__right_value311,sVar_finalize, 0, 1, 0, 0, (void*)0);
                if(                var__333) {
                    if(                    var__333->mType->mHeap) {
                        free_object(var__333->mType,var__333->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    map$2charphsVarph_remove(info->lv_table->mVars,it_330);
                }
                right_type2_334=((struct sType*)come_null_check(((struct sType*)(__right_value312=list$1sTypephp_operator_load_element(right_type_325->mGenericsTypes,i_326))), "07var.c", 106, 0));
                come_call_finalizer3(__right_value312,sType_finalize, 0, 1, 0, 0, (void*)0);
                right_type2_334->mFunctionParam=(_Bool)0;
                add_variable_to_table(it_330,(struct sType*)come_increment_ref_count(sType_clone(right_type2_334)),info);
            }
            i_326++;
        }
        come_call_finalizer3(o2_saved_327,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        static int num_multiple_var_338=0;
        multiple_var_name_339=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var_338));
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value315=make_define_var(right_value_324->type,multiple_var_name_339,(_Bool)0,info))));
        __right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        info->comma_instead_of_semicolon) {
            add_come_code(info,"%s=%s,\n",multiple_var_name_339,right_value_324->c_value);
        }
        else {
            add_come_code(info,"%s=%s;\n",multiple_var_name_339,right_value_324->c_value);
        }
        __dec_obj118=right_value_324->c_value;
        right_value_324->c_value=(char*)come_increment_ref_count(string_clone(multiple_var_name_339));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        i_326=0;
        for(        o2_saved_340=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_341=list$1charph_begin((o2_saved_340));        !list$1charph_end((o2_saved_340));        it_341=list$1charph_next((o2_saved_340))        ){
            if(            i_326<list$1sTypeph_length(right_type_325->mGenericsTypes)) {
                right_type2_342=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value317=list$1sTypephp_operator_load_element(right_type_325->mGenericsTypes,i_326))), "07var.c", 130, 1))));
                come_call_finalizer3(__right_value317,sType_finalize, 0, 1, 0, 0, (void*)0);
                var__343=get_variable_from_table(info->lv_table,it_341);
                var_type_344=(struct sType*)come_increment_ref_count(sType_clone(var__343->mType));
                var_type_344->mStatic=(_Bool)0;
                left_type_345=(struct sType*)come_increment_ref_count(sType_clone(var__343->mType));
                right_value2_346=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 139, "CVALUE"))));
                __dec_obj119=right_value2_346->c_value;
                right_value2_346->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_324->c_value,i_326+1));
                __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj120=right_value2_346->type;
                right_value2_346->type=(struct sType*)come_increment_ref_count(sType_clone(right_type2_342));
                come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
                right_value2_346->var=((void*)0);
                come_value_347=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 145, "CVALUE"))));
                check_assign_type(((char*)(__right_value328=xsprintf("\%s is assining to}",((char*)(__right_value327=string_to_string(self->name)))))),left_type_345,right_type2_342,come_value_347,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                right_type2_342->mHeap&&left_type_345->mHeap&&left_type_345->mPointerNum>0&&right_type2_342->mPointerNum>0) {
                    std_move(left_type_345,right_type2_342,right_value2_346,info,(_Bool)0);
                    __dec_obj121=come_value_347->c_value;
                    come_value_347->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__343->mCValueName,right_value2_346->c_value));
                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj122=come_value_347->c_value;
                    come_value_347->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__343->mCValueName,right_value2_346->c_value));
                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj123=come_value_347->type;
                come_value_347->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_345));
                come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_347->var=var__343;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value332=make_define_var(left_type_345,var__343->mCValueName,(_Bool)0,info))));
                __right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                info->comma_instead_of_semicolon) {
                    add_come_code(info,"%s,\n",come_value_347->c_value);
                }
                else {
                    add_come_code(info,"%s;\n",come_value_347->c_value);
                }
                come_call_finalizer3(right_type2_342,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_345,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value2_346,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_347,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            i_326++;
        }
        come_call_finalizer3(o2_saved_340,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_324,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        multiple_var_name_339 = come_decrement_ref_count2(multiple_var_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    self->right_value==((void*)0)) {
        var__348=((struct sVar*)(__right_value333=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value333,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__348) {
            if(            var__348->mType->mHeap) {
                free_object(var__348->mType,var__348->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarph_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)0;
        }
        type_349=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        type_349->mFunctionParam=(_Bool)0;
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_349)),info);
        var__348=get_variable_from_table(info->lv_table,self->name);
        if(        var__348==((void*)0)) {
            var__348=get_variable_from_table(info->gv_table,self->name);
            if(            var__348==((void*)0)) {
                err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                __result250__ = (_Bool)1;
                come_call_finalizer3(type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result250__;
            }
        }
        left_type_350=(struct sType*)come_increment_ref_count(sType_clone(var__348->mType));
        if(        left_type_350->mChannel) {
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__348->mCValueName);
        }
        else if(        list$1sNodeph_length(left_type_350->mArrayNum)>0) {
            add_come_code(info,"%s;\n",((char*)(__right_value337=make_define_var(left_type_350,var__348->mCValueName,(_Bool)0,info))));
            __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__348->mCValueName,((char*)(__right_value338=make_type_name_string(left_type_350,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            for(            o2_saved_351=(struct list$1sNodeph*)come_increment_ref_count((left_type_350->mArrayNum)),it_354=list$1sNodeph_begin((o2_saved_351));            !list$1sNodeph_end((o2_saved_351));            it_354=list$1sNodeph_next((o2_saved_351))            ){
                Value_357=node_compile(it_354,info);
                if(                !Value_357) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                else {
                }
                come_value_358=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"*(%s)",come_value_358->c_value);
                come_call_finalizer3(come_value_358,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_351,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            add_come_code(info,");\n");
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value340=make_define_var(left_type_350,var__348->mCValueName,(_Bool)0,info))));
            __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            left_type_350->mPointerNum>0) {
                add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__348->mCValueName);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__348->mCValueName,((char*)(__right_value341=make_type_name_string(left_type_350,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        if(        !info->m5stack_cpp) {
            come_value_359=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 238, "CVALUE"))));
            __dec_obj124=come_value_359->c_value;
            come_value_359->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__348->mCValueName));
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj125=come_value_359->type;
            come_value_359->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_350));
            come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_359->var=var__348;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_359));
            come_call_finalizer3(come_value_359,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !left_type_350->mClass->mNumber&&left_type_350->mPointerNum==0) {
            var__348->mType->mAllocaValue=(_Bool)1;
        }
        come_call_finalizer3(type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_350,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->alloc) {
        var__363=((struct sVar*)(__right_value349=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
        come_call_finalizer3(__right_value349,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__363) {
            if(            var__363->mType->mHeap) {
                free_object(var__363->mType,var__363->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            map$2charphsVarph_remove(info->lv_table->mVars,self->name);
        }
        if(        self->type==((void*)0)) {
        }
        else {
            type_364=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
            type_364->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_364)),info);
            come_call_finalizer3(type_364,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        Value_365=node_compile(self->right_value,info);
        if(        !Value_365) {
            return (_Bool)0;
        }
        else {
        }
        array_initializer_366=string_operator_equals(((char*)(__right_value352=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        struct_initializer_367=string_operator_equals(((char*)(__right_value353=self->right_value->kind(self->right_value->_protocol_obj))),"sStructInitializer");
        __right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        new_channel_368=string_operator_equals(((char*)(__right_value354=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value_369=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_370=right_value_369->type;
        dec_stack_ptr(1,info);
        if(        self->type==((void*)0)) {
            right_type_370->mFunctionParam=(_Bool)0;
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(right_type_370)),info);
        }
        else {
        }
        var__363=get_variable_from_table(info->lv_table,self->name);
        var_type_371=(struct sType*)come_increment_ref_count(sType_clone(var__363->mType));
        var_type_371->mStatic=(_Bool)0;
        if(        !array_initializer_366&&!struct_initializer_367&&!var__363->mType->mStatic&&!var_type_371->mConstant&&list$1sNodeph_length(var_type_371->mArrayNum)==0) {
            if(            var_type_371->mClass->mNumber) {
            }
            else if(            (var_type_371->mClass->mStruct||var_type_371->mClass->mUnion||var_type_371->mClass->mEnum)||var_type_371->mPointerNum>0) {
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__363->mCValueName,((char*)(__right_value358=make_type_name_string(var_type_371,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        left_type_372=(struct sType*)come_increment_ref_count(sType_clone(var__363->mType));
        if(        array_initializer_366) {
            var__373=((struct sVar*)(__right_value360=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
            come_call_finalizer3(__right_value360,sVar_finalize, 0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value361=make_define_var(var__373->mType,var__373->mCValueName,(_Bool)0,info))),right_value_369->c_value);
            __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_374=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 310, "CVALUE"))));
            __dec_obj129=come_value_374->c_value;
            come_value_374->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_374));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_374,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        struct_initializer_367) {
            var__375=((struct sVar*)(__right_value365=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)));
            come_call_finalizer3(__right_value365,sVar_finalize, 0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value366=make_define_var(var__375->mType,var__375->mCValueName,(_Bool)0,info))),right_value_369->c_value);
            __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_376=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 320, "CVALUE"))));
            __dec_obj130=come_value_376->c_value;
            come_value_376->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_376));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_376,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        var__363->mType->mStatic||var__363->mType->mConstant) {
            check_assign_type(((char*)(__right_value371=xsprintf("\%s is assining to",((char*)(__right_value370=string_to_string(self->name)))))),left_type_372,right_type_370,right_value_369,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value372=make_define_var(left_type_372,var__363->mCValueName,(_Bool)0,info))),right_value_369->c_value);
            __right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_377=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 331, "CVALUE"))));
            __dec_obj131=come_value_377->c_value;
            come_value_377->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_377));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_377,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_370->mHeap&&left_type_372->mHeap&&left_type_372->mPointerNum>0&&right_type_370->mPointerNum>0) {
            check_assign_type(((char*)(__right_value377=xsprintf("\%s is assining to",((char*)(__right_value376=string_to_string(self->name)))))),left_type_372,right_type_370,right_value_369,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            std_move(left_type_372,right_type_370,right_value_369,info,(_Bool)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value378=make_define_var(left_type_372,var__363->mCValueName,(_Bool)0,info))));
            __right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_378=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 345, "CVALUE"))));
            __dec_obj132=come_value_378->c_value;
            come_value_378->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__363->mCValueName,right_value_369->c_value));
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj133=come_value_378->type;
            come_value_378->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_372));
            come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_378->var=var__363;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_378));
            add_come_last_code(info,"%s",come_value_378->c_value);
            come_call_finalizer3(come_value_378,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_372->mChannel&&new_channel_368) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value383=make_define_var(left_type_372,var__363->mCValueName,(_Bool)0,info))));
            __right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__363->mCValueName);
            come_value_379=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 359, "CVALUE"))));
            __dec_obj134=come_value_379->c_value;
            come_value_379->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__363->mCValueName));
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj135=come_value_379->type;
            come_value_379->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 361, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_379->type->mPointerNum=1;
            come_value_379->var=var__363;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_379));
            add_come_last_code(info,"%s",come_value_379->c_value);
            come_call_finalizer3(come_value_379,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_372->mPointerNum>0&&left_type_372->mHeap&&string_operator_equals(right_type_370->mClass->mName,"void")&&right_type_370->mPointerNum>0) {
            check_assign_type(((char*)(__right_value390=xsprintf("\%s is assining to",((char*)(__right_value389=string_to_string(self->name)))))),left_type_372,right_type_370,right_value_369,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value391=make_define_var(left_type_372,var__363->mCValueName,(_Bool)0,info))));
            __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_380=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 377, "CVALUE"))));
            __dec_obj136=come_value_380->c_value;
            come_value_380->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__363->mCValueName,right_value_369->c_value));
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj137=come_value_380->type;
            come_value_380->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_372));
            come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_380->var=var__363;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_380));
            add_come_last_code(info,"%s",come_value_380->c_value);
            come_call_finalizer3(come_value_380,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value397=xsprintf("\%s is assining to",((char*)(__right_value396=string_to_string(self->name)))))),left_type_372,right_type_370,right_value_369,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value397 = come_decrement_ref_count2(__right_value397, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            right_type_370->mHeap&&left_type_372->mHeap&&left_type_372->mPointerNum>0&&right_type_370->mPointerNum>0) {
                std_move(left_type_372,right_type_370,right_value_369,info,(_Bool)0);
            }
            if(            left_type_372->mHeap&&!right_value_369->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result258__ = (_Bool)0;
                come_call_finalizer3(right_value_369,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_371,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_372,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result258__;
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value398=make_define_var(left_type_372,var__363->mCValueName,(_Bool)0,info))));
            __right_value398 = come_decrement_ref_count2(__right_value398, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_381=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 402, "CVALUE"))));
            __dec_obj138=come_value_381->c_value;
            come_value_381->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__363->mCValueName,right_value_369->c_value));
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj139=come_value_381->type;
            come_value_381->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_372));
            come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_381->var=var__363;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_381));
            add_come_last_code(info,"%s",come_value_381->c_value);
            come_call_finalizer3(come_value_381,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_369,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(var_type_371,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_372,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        Value_382=node_compile(self->right_value,info);
        if(        !Value_382) {
            return (_Bool)0;
        }
        else {
        }
        new_channel_383=string_operator_equals(((char*)(__right_value403=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value_384=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_385=right_value_384->type;
        dec_stack_ptr(1,info);
        current_stack_frame_struct_386=info->current_stack_frame_struct;
        if(        (_if_conditional1=(current_stack_frame_struct_386&&((struct sVar*)(__right_value405=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)))==((void*)0))),        come_call_finalizer3(__right_value405,sVar_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional1) {
            parent_var_387=get_variable_from_table(info->lv_table->mParent,self->name);
            if(            parent_var_387!=((void*)0)) {
                if(                string_operator_not_equals(parent_var_387->mFunName,info->come_fun->mName)) {
                    left_type_388=parent_var_387->mType;
                    if(                    left_type_388->mPointerNum>0&&right_type_385->mPointerNum>0&&right_type_385->mHeap&&left_type_388->mHeap) {
                        check_assign_type(((char*)(__right_value407=xsprintf("\%s is assigning to",((char*)(__right_value406=string_to_string(self->name)))))),left_type_388,right_type_385,right_value_384,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        c_value_389=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_387->mCValueName));
                        decrement_ref_count_object(parent_var_387->mType,c_value_389,info,(_Bool)0,(_Bool)0);
                        std_move(left_type_388,right_type_385,right_value_384,info,(_Bool)0);
                        come_value_390=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 441, "CVALUE"))));
                        if(                        parent_var_387->mType->mOriginIsArray) {
                            __dec_obj140=come_value_390->c_value;
                            come_value_390->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_387->mCValueName,right_value_384->c_value));
                            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj141=come_value_390->c_value;
                            come_value_390->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_387->mCValueName,right_value_384->c_value));
                            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj142=come_value_390->type;
                        come_value_390->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_388));
                        come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_390->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_390->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_390));
                        __result259__ = (_Bool)1;
                        c_value_389 = come_decrement_ref_count2(c_value_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result259__;
                        c_value_389 = come_decrement_ref_count2(c_value_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else if(                    left_type_388->mPointerNum>0&&right_type_385->mPointerNum>0&&string_operator_equals(right_type_385->mClass->mName,"void")&&left_type_388->mHeap) {
                        check_assign_type(((char*)(__right_value415=xsprintf("\%s is assigning to",((char*)(__right_value414=string_to_string(self->name)))))),left_type_388,right_type_385,right_value_384,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        c_value_391=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_387->mCValueName));
                        decrement_ref_count_object(parent_var_387->mType,c_value_391,info,(_Bool)0,(_Bool)0);
                        come_value_392=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 465, "CVALUE"))));
                        if(                        parent_var_387->mType->mOriginIsArray) {
                            __dec_obj143=come_value_392->c_value;
                            come_value_392->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_387->mCValueName,right_value_384->c_value));
                            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj144=come_value_392->c_value;
                            come_value_392->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_387->mCValueName,right_value_384->c_value));
                            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj145=come_value_392->type;
                        come_value_392->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_388));
                        come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_392->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_392->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_392));
                        __result260__ = (_Bool)1;
                        c_value_391 = come_decrement_ref_count2(c_value_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_392,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result260__;
                        c_value_391 = come_decrement_ref_count2(c_value_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_392,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        check_assign_type(((char*)(__right_value423=xsprintf("\%s is assigning to",((char*)(__right_value422=string_to_string(self->name)))))),left_type_388,right_type_385,right_value_384,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value422 = come_decrement_ref_count2(__right_value422, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        if(                        left_type_388->mHeap&&!right_value_384->type->mHeap) {
                            err_msg(info,"require right value as heap object(%s)",self->name);
                            __result261__ = (_Bool)0;
                            come_call_finalizer3(right_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result261__;
                        }
                        come_value_393=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 490, "CVALUE"))));
                        if(                        parent_var_387->mType->mOriginIsArray) {
                            __dec_obj146=come_value_393->c_value;
                            come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_387->mCValueName,right_value_384->c_value));
                            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj147=come_value_393->c_value;
                            come_value_393->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_387->mCValueName,right_value_384->c_value));
                            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj148=come_value_393->type;
                        come_value_393->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_388));
                        come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_393->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_393->c_value);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_393));
                        __result262__ = (_Bool)1;
                        come_call_finalizer3(come_value_393,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result262__;
                        come_call_finalizer3(come_value_393,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
        var__394=get_variable_from_table(info->lv_table,self->name);
        if(        var__394==((void*)0)) {
            var__394=get_variable_from_table(info->gv_table,self->name);
            if(            var__394==((void*)0)) {
                err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                __result263__ = (_Bool)1;
                come_call_finalizer3(right_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result263__;
            }
        }
        if(        var__394->mType==((void*)0)) {
            __dec_obj149=var__394->mType;
            var__394->mType=(struct sType*)come_increment_ref_count(sType_clone(right_type_385));
            come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        left_type_395=(struct sType*)come_increment_ref_count(sType_clone(var__394->mType));
        if(        (var__394->mType->mStatic||var__394->mType->mConstant)&&!var__394->mGlobal) {
            check_assign_type(((char*)(__right_value432=xsprintf("\%s is assining to",((char*)(__right_value431=string_to_string(self->name)))))),left_type_395,right_type_385,right_value_384,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value_396=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 531, "CVALUE"))));
            __dec_obj150=come_value_396->c_value;
            come_value_396->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__394->mCValueName,right_value_384->c_value));
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj151=come_value_396->type;
            come_value_396->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_395));
            come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_396->var=var__394;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_396));
            add_come_last_code(info,"%s",come_value_396->c_value);
            come_call_finalizer3(come_value_396,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_385->mHeap&&left_type_395->mHeap&&left_type_395->mPointerNum>0&&right_type_385->mPointerNum>0) {
            check_assign_type(((char*)(__right_value438=xsprintf("\%s is assining to",((char*)(__right_value437=string_to_string(self->name)))))),left_type_395,right_type_385,right_value_384,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            decrement_ref_count_object(left_type_395,var__394->mCValueName,info,(_Bool)0,(_Bool)0);
            std_move(left_type_395,right_type_385,right_value_384,info,(_Bool)0);
            come_value_397=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 548, "CVALUE"))));
            __dec_obj152=come_value_397->c_value;
            come_value_397->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__394->mCValueName,right_value_384->c_value));
            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj153=come_value_397->type;
            come_value_397->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_395));
            come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_397->var=var__394;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_397));
            add_come_last_code(info,"%s",come_value_397->c_value);
            come_call_finalizer3(come_value_397,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_395->mPointerNum>0&&left_type_395->mHeap&&string_operator_equals(right_type_385->mClass->mName,"void")&&right_type_385->mPointerNum>0) {
            check_assign_type(((char*)(__right_value444=xsprintf("\%s is assining to",((char*)(__right_value443=string_to_string(self->name)))))),left_type_395,right_type_385,right_value_384,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            decrement_ref_count_object(left_type_395,var__394->mCValueName,info,(_Bool)0,(_Bool)0);
            come_value_398=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 564, "CVALUE"))));
            __dec_obj154=come_value_398->c_value;
            come_value_398->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__394->mCValueName,right_value_384->c_value));
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj155=come_value_398->type;
            come_value_398->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_395));
            come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_398->var=var__394;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_398));
            add_come_last_code(info,"%s",come_value_398->c_value);
            come_call_finalizer3(come_value_398,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_395->mChannel&&new_channel_383) {
            come_value_399=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 575, "CVALUE"))));
            __dec_obj156=come_value_399->c_value;
            come_value_399->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__394->mCValueName));
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj157=come_value_399->type;
            come_value_399->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 577, "sType")),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_399->type->mPointerNum=1;
            come_value_399->var=var__394;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_399));
            add_come_last_code(info,"%s",come_value_399->c_value);
            come_call_finalizer3(come_value_399,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value455=xsprintf("\%s is assining to",((char*)(__right_value454=string_to_string(self->name)))))),left_type_395,right_type_385,right_value_384,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            left_type_395->mHeap&&!right_value_384->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
                __result264__ = (_Bool)0;
                come_call_finalizer3(right_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_395,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result264__;
            }
            come_value_400=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 593, "CVALUE"))));
            __dec_obj158=come_value_400->c_value;
            come_value_400->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__394->mCValueName,right_value_384->c_value));
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj159=come_value_400->type;
            come_value_400->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_395));
            come_call_finalizer3(__dec_obj159,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_400->var=var__394;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_400));
            add_come_last_code(info,"%s",come_value_400->c_value);
            come_call_finalizer3(come_value_400,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_395,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
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
struct sType* __result200__;
void* __right_value251 = (void*)0;
struct sType* result_250;
void* __right_value254 = (void*)0;
struct tuple1$1sTypeph* __dec_obj56;
void* __right_value255 = (void*)0;
struct tuple1$1sTypeph* __dec_obj57;
void* __right_value256 = (void*)0;
char* __dec_obj58;
void* __right_value263 = (void*)0;
struct list$1sTypeph* __dec_obj62;
void* __right_value271 = (void*)0;
struct list$1sNodeph* __dec_obj66;
void* __right_value272 = (void*)0;
struct list$1sTypeph* __dec_obj67;
void* __right_value279 = (void*)0;
struct list$1charph* __dec_obj71;
void* __right_value280 = (void*)0;
struct tuple1$1sTypeph* __dec_obj72;
void* __right_value281 = (void*)0;
struct sNode* __dec_obj73;
void* __right_value282 = (void*)0;
struct tuple1$1sTypeph* __dec_obj74;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj75;
void* __right_value284 = (void*)0;
char* __dec_obj76;
void* __right_value285 = (void*)0;
char* __dec_obj77;
void* __right_value286 = (void*)0;
char* __dec_obj78;
struct sType* __result216__;
    if(    self==(void*)0) {
        __result200__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result200__;
    }
    result_250=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_250->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj56=result_250->mNoSolvedGenericsType;
        result_250->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj56,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj57=result_250->mOriginalLoadVarType;
        result_250->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj57,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj58=result_250->mGenericsName;
        result_250->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj62=result_250->mGenericsTypes;
        result_250->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj62,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj66=result_250->mArrayNum;
        result_250->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj66,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj67=result_250->mParamTypes;
        result_250->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj67,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj71=result_250->mParamNames;
        result_250->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj71,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj72=result_250->mResultType;
        result_250->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj72,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj73=result_250->mAlignas;
        result_250->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj74=result_250->mChannelType;
        result_250->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj74,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_250->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_250->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_250->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_250->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_250->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_250->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_250->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_250->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_250->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_250->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_250->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_250->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_250->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_250->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_250->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_250->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_250->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_250->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_250->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_250->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_250->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_250->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_250->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj75=result_250->mSizeNum;
        result_250->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_250->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj76=result_250->mOriginalTypeName;
        result_250->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_250->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_250->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_250->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_250->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_250->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_250->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_250->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj77=result_250->mAsmName;
        result_250->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_250->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_250->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_250->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_250->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_250->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_250->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj78=result_250->mTupleName;
        result_250->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result216__ = gComeFunResultObject = __result_obj__ = result_250;
    come_call_finalizer3(result_250,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result201__;
void* __right_value252 = (void*)0;
struct tuple1$1sTypeph* result_251;
void* __right_value253 = (void*)0;
struct sType* __dec_obj34;
struct tuple1$1sTypeph* __result202__;
    if(    self==(void*)0) {
        __result201__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    result_251=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj34=result_251->v1;
        result_251->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result202__ = gComeFunResultObject = __result_obj__ = result_251;
    come_call_finalizer3(result_251,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result202__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj35;
struct tuple1$1sTypeph* __dec_obj37;
char* __dec_obj39;
struct list$1sTypeph* __dec_obj40;
struct list$1sNodeph* __dec_obj42;
struct list$1sTypeph* __dec_obj44;
struct list$1charph* __dec_obj45;
struct tuple1$1sTypeph* __dec_obj46;
struct sNode* __dec_obj48;
struct tuple1$1sTypeph* __dec_obj49;
struct sNode* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj35=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj35,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj37=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj37,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj39=self->mGenericsName;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj40=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj40,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj42=self->mArrayNum;
            come_call_finalizer3(__dec_obj42,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj44=self->mParamTypes;
            come_call_finalizer3(__dec_obj44,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj45=self->mParamNames;
            come_call_finalizer3(__dec_obj45,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj46=self->mResultType;
            come_call_finalizer3(__dec_obj46,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj48=self->mAlignas;
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj49=self->mChannelType;
            come_call_finalizer3(__dec_obj49,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj51=self->mSizeNum;
            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj52=self->mOriginalTypeName;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj53=self->mAsmName;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj54=self->mTupleName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_252;
struct list_item$1sTypeph* prev_it_253;
    it_252=self->head;
    while(it_252!=((void*)0)) {
        prev_it_253=it_252;
        it_252=it_252->next;
        come_call_finalizer3(prev_it_253,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj41;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj41=self->item;
            come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_254;
struct list_item$1sTypeph* prev_it_255;
    it_254=self->head;
    while(it_254!=((void*)0)) {
        prev_it_255=it_254;
        it_254=it_254->next;
        come_call_finalizer3(prev_it_255,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_256;
struct list_item$1sNodeph* prev_it_257;
    it_256=self->head;
    while(it_256!=((void*)0)) {
        prev_it_257=it_256;
        it_256=it_256->next;
        come_call_finalizer3(prev_it_257,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj43;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj43=self->item;
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_258;
struct list_item$1sNodeph* prev_it_259;
    it_258=self->head;
    while(it_258!=((void*)0)) {
        prev_it_259=it_258;
        it_258=it_258->next;
        come_call_finalizer3(prev_it_259,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_260;
struct list_item$1charph* prev_it_261;
    it_260=self->head;
    while(it_260!=((void*)0)) {
        prev_it_261=it_260;
        it_260=it_260->next;
        come_call_finalizer3(prev_it_261,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj50;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj50=self->v1;
            come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj55;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj55=self->v1;
            come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result203__;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1sTypeph* result_262;
struct list_item$1sTypeph* it_263;
void* __right_value262 = (void*)0;
struct list$1sTypeph* __result206__;
    if(    self==((void*)0)) {
        __result203__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    result_262=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1058, "list$1sTypeph"))));
    it_263=self->head;
    while(it_263!=((void*)0)) {
        list$1sTypeph_add(result_262,(struct sType*)come_increment_ref_count(sType_clone(it_263->item)));
        it_263=it_263->next;
    }
    __result206__ = gComeFunResultObject = __result_obj__ = result_262;
    come_call_finalizer3(result_262,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result204__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result204__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
struct list_item$1sTypeph* litem_264;
struct sType* __dec_obj59;
void* __right_value260 = (void*)0;
struct list_item$1sTypeph* litem_265;
struct sType* __dec_obj60;
void* __right_value261 = (void*)0;
struct list_item$1sTypeph* litem_266;
struct sType* __dec_obj61;
struct list$1sTypeph* __result205__;
    if(    self->len==0) {
        litem_264=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value259=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1072, "list_item$1sTypeph"))));
        litem_264->prev=((void*)0);
        litem_264->next=((void*)0);
        __dec_obj59=litem_264->item;
        litem_264->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_264;
        self->head=litem_264;
    }
    else if(    self->len==1) {
        litem_265=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value260=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1082, "list_item$1sTypeph"))));
        litem_265->prev=self->head;
        litem_265->next=((void*)0);
        __dec_obj60=litem_265->item;
        litem_265->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_265;
        self->head->next=litem_265;
    }
    else {
        litem_266=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value261=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1092, "list_item$1sTypeph"))));
        litem_266->prev=self->tail;
        litem_266->next=((void*)0);
        __dec_obj61=litem_266->item;
        litem_266->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_266;
        self->tail=litem_266;
    }
    self->len++;
    __result205__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result205__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result207__;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1sNodeph* result_267;
struct list_item$1sNodeph* it_268;
void* __right_value270 = (void*)0;
struct list$1sNodeph* __result212__;
    if(    self==((void*)0)) {
        __result207__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    result_267=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1058, "list$1sNodeph"))));
    it_268=self->head;
    while(it_268!=((void*)0)) {
        list$1sNodeph_add(result_267,(struct sNode*)come_increment_ref_count(sNode_clone(it_268->item)));
        it_268=it_268->next;
    }
    __result212__ = gComeFunResultObject = __result_obj__ = result_267;
    come_call_finalizer3(result_267,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result208__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result208__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value266 = (void*)0;
struct list_item$1sNodeph* litem_269;
struct sNode* __dec_obj63;
void* __right_value267 = (void*)0;
struct list_item$1sNodeph* litem_270;
struct sNode* __dec_obj64;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_271;
struct sNode* __dec_obj65;
struct list$1sNodeph* __result209__;
    if(    self->len==0) {
        litem_269=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value266=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1072, "list_item$1sNodeph"))));
        litem_269->prev=((void*)0);
        litem_269->next=((void*)0);
        __dec_obj63=litem_269->item;
        litem_269->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_269;
        self->head=litem_269;
    }
    else if(    self->len==1) {
        litem_270=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value267=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1082, "list_item$1sNodeph"))));
        litem_270->prev=self->head;
        litem_270->next=((void*)0);
        __dec_obj64=litem_270->item;
        litem_270->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_270;
        self->head->next=litem_270;
    }
    else {
        litem_271=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1092, "list_item$1sNodeph"))));
        litem_271->prev=self->tail;
        litem_271->next=((void*)0);
        __dec_obj65=litem_271->item;
        litem_271->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_271;
        self->tail=litem_271;
    }
    self->len++;
    __result209__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result210__;
void* __right_value269 = (void*)0;
struct sNode* result_272;
struct sNode* __result211__;
    if(    self==(void*)0) {
        __result210__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    result_272=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_272->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_272->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_272->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_272->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_272->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_272->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_272->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_272->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_272->kind=self->kind;
    }
    __result211__ = gComeFunResultObject = __result_obj__ = result_272;
    if(result_272) { result_272 = come_decrement_ref_count2(result_272, ((struct sNode*)result_272)->finalize, ((struct sNode*)result_272)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result213__;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1charph* result_273;
struct list_item$1charph* it_274;
void* __right_value278 = (void*)0;
struct list$1charph* __result215__;
    if(    self==((void*)0)) {
        __result213__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    result_273=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1058, "list$1charph"))));
    it_274=self->head;
    while(it_274!=((void*)0)) {
        list$1charph_add(result_273,(char*)come_increment_ref_count(string_clone(it_274->item)));
        it_274=it_274->next;
    }
    __result215__ = gComeFunResultObject = __result_obj__ = result_273;
    come_call_finalizer3(result_273,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value275 = (void*)0;
struct list_item$1charph* litem_275;
char* __dec_obj68;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_276;
char* __dec_obj69;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_277;
char* __dec_obj70;
struct list$1charph* __result214__;
    if(    self->len==0) {
        litem_275=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value275=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1072, "list_item$1charph"))));
        litem_275->prev=((void*)0);
        litem_275->next=((void*)0);
        __dec_obj68=litem_275->item;
        litem_275->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_275;
        self->head=litem_275;
    }
    else if(    self->len==1) {
        litem_276=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1082, "list_item$1charph"))));
        litem_276->prev=self->head;
        litem_276->next=((void*)0);
        __dec_obj69=litem_276->item;
        litem_276->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_276;
        self->head->next=litem_276;
    }
    else {
        litem_277=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1092, "list_item$1charph"))));
        litem_277->prev=self->tail;
        litem_277->next=((void*)0);
        __dec_obj70=litem_277->item;
        litem_277->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_277;
        self->tail=litem_277;
    }
    self->len++;
    __result214__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result217__;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* result_280;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_281;
void* __right_value298 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result222__;
    if(    self==((void*)0)) {
        __result217__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    result_280=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1058, "list$1tuple3$3sTypephcharphsNodephph"))));
    it_281=self->head;
    while(it_281!=((void*)0)) {
        list$1tuple3$3sTypephcharphsNodephph_add(result_280,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodephp_clone(it_281->item)));
        it_281=it_281->next;
    }
    __result222__ = gComeFunResultObject = __result_obj__ = result_280;
    come_call_finalizer3(result_280,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result218__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_278;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_279;
    it_278=self->head;
    while(it_278!=((void*)0)) {
        prev_it_279=it_278;
        it_278=it_278->next;
        come_call_finalizer3(prev_it_279,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
struct tuple3$3sTypephcharphsNodeph* __dec_obj82;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj82=self->item;
            come_call_finalizer3(__dec_obj82,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value291 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_282;
struct tuple3$3sTypephcharphsNodeph* __dec_obj86;
void* __right_value292 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_283;
struct tuple3$3sTypephcharphsNodeph* __dec_obj90;
void* __right_value293 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_284;
struct tuple3$3sTypephcharphsNodeph* __dec_obj94;
struct list$1tuple3$3sTypephcharphsNodephph* __result219__;
    if(    self->len==0) {
        litem_282=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value291=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1072, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_282->prev=((void*)0);
        litem_282->next=((void*)0);
        __dec_obj86=litem_282->item;
        litem_282->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_282;
        self->head=litem_282;
    }
    else if(    self->len==1) {
        litem_283=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value292=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1082, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_283->prev=self->head;
        litem_283->next=((void*)0);
        __dec_obj90=litem_283->item;
        litem_283->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_283;
        self->head->next=litem_283;
    }
    else {
        litem_284=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value293=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1092, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_284->prev=self->tail;
        litem_284->next=((void*)0);
        __dec_obj94=litem_284->item;
        litem_284->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj94,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_284;
        self->tail=litem_284;
    }
    self->len++;
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
struct sType* __dec_obj95;
char* __dec_obj96;
struct sNode* __dec_obj97;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj95=self->v1;
            come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj96=self->v2;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj97=self->v3;
            if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* __result220__;
void* __right_value294 = (void*)0;
struct tuple3$3sTypephcharphsNodeph* result_285;
void* __right_value295 = (void*)0;
struct sType* __dec_obj98;
void* __right_value296 = (void*)0;
char* __dec_obj99;
void* __right_value297 = (void*)0;
struct sNode* __dec_obj100;
struct tuple3$3sTypephcharphsNodeph* __result221__;
    if(    self==(void*)0) {
        __result220__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    result_285=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3, "tuple3$3sTypephcharphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj98=result_285->v1;
        result_285->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj99=result_285->v2;
        result_285->v2=(char*)come_increment_ref_count(string_clone(self->v2));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj100=result_285->v3;
        result_285->v3=(struct sNode*)come_increment_ref_count(sNode_clone(self->v3));
        if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result221__ = gComeFunResultObject = __result_obj__ = result_285;
    come_call_finalizer3(result_285,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
struct sType* __dec_obj101;
char* __dec_obj102;
struct sNode* __dec_obj103;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj101=self->v1;
            come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj102=self->v2;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj103=self->v3;
            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_286;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_287;
    it_286=self->head;
    while(it_286!=((void*)0)) {
        prev_it_287=it_286;
        it_286=it_286->next;
        come_call_finalizer3(prev_it_287,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_289;
unsigned int hash_290;
unsigned int it_291;
struct sVar* __result225__;
struct sVar* __result226__;
struct sVar* __result227__;
struct sVar* __result228__;
default_value_289 = (void*)0;
    memset(&default_value_289,0,sizeof(struct sVar*));
    hash_290=charp_get_hash_key(((char*)key))%self->size;
    it_291=hash_290;
    while((_Bool)1) {
        if(        self->item_existance[it_291]) {
            if(            charp_equals(self->keys[it_291],key)) {
                __result225__ = gComeFunResultObject = __result_obj__ = self->items[it_291];
                come_call_finalizer3(default_value_289,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result225__;
            }
            it_291++;
            if(            it_291>=self->size) {
                it_291=0;
            }
            else if(            it_291==hash_290) {
                __result226__ = gComeFunResultObject = __result_obj__ = default_value_289;
                come_call_finalizer3(default_value_289,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result226__;
            }
        }
        else {
            __result227__ = gComeFunResultObject = __result_obj__ = default_value_289;
            come_call_finalizer3(default_value_289,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result227__;
        }
    }
    __result228__ = gComeFunResultObject = __result_obj__ = default_value_289;
    come_call_finalizer3(default_value_289,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj111;
char* __dec_obj112;
struct sType* __dec_obj113;
char* __dec_obj114;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj111=self->mName;
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj112=self->mCValueName;
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj113=self->mType;
            come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj114=self->mFunName;
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsVarph* map$2charphsVarph_remove(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_292;
unsigned int it_293;
struct map$2charphsVarph* __result233__;
    hash_292=charp_get_hash_key(((char*)key))%self->size;
    it_293=hash_292;
    while((_Bool)1) {
        if(        self->item_existance[it_293]) {
            if(            charp_equals(self->keys[it_293],key)) {
                list$1charp_remove(self->key_list,self->keys[it_293]);
                self->item_existance[it_293]=(_Bool)0;
                if(                1) {
                    self->keys[it_293] = come_decrement_ref_count2(self->keys[it_293], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_293]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_293],sVar_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_293]=((void*)0);
                self->len--;
                break;
            }
            it_293++;
            if(            it_293>=self->size) {
                it_293=0;
            }
            else if(            it_293==hash_292) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_294;
struct list_item$1charp* it_295;
struct list$1charp* __result232__;
    it2_294=0;
    it_295=self->head;
    while(it_295!=((void*)0)) {
        if(        charp_equals(it_295->item,item)) {
            list$1charp_delete(self,it2_294,it2_294+1);
            break;
        }
        it2_294++;
        it_295=it_295->next;
    }
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_296;
struct list$1charp* __result229__;
struct list_item$1charp* it_299;
int i_300;
struct list_item$1charp* prev_it_301;
struct list_item$1charp* it_302;
int i_303;
struct list_item$1charp* prev_it_304;
struct list_item$1charp* it_305;
struct list_item$1charp* head_prev_it_306;
struct list_item$1charp* tail_it_307;
int i_308;
struct list_item$1charp* prev_it_309;
struct list$1charp* __result231__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_296=tail;
        tail=head;
        head=tmp_296;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result229__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_299=self->head;
        i_300=0;
        while(it_299!=((void*)0)) {
            if(            i_300<tail) {
                prev_it_301=it_299;
                it_299=it_299->next;
                i_300++;
                come_call_finalizer3(prev_it_301,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_300==tail) {
                self->head=it_299;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_299=it_299->next;
                i_300++;
            }
        }
    }
    else if(    tail==self->len) {
        it_302=self->head;
        i_303=0;
        while(it_302!=((void*)0)) {
            if(            i_303==head) {
                self->tail=it_302->prev;
                self->tail->next=((void*)0);
            }
            if(            i_303>=head) {
                prev_it_304=it_302;
                it_302=it_302->next;
                i_303++;
                come_call_finalizer3(prev_it_304,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_302=it_302->next;
                i_303++;
            }
        }
    }
    else {
        it_305=self->head;
        head_prev_it_306=((void*)0);
        tail_it_307=((void*)0);
        i_308=0;
        while(it_305!=((void*)0)) {
            if(            i_308==head) {
                head_prev_it_306=it_305->prev;
            }
            if(            i_308==tail) {
                tail_it_307=it_305;
            }
            if(            i_308>=head&&i_308<tail) {
                prev_it_309=it_305;
                it_305=it_305->next;
                i_308++;
                come_call_finalizer3(prev_it_309,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_305=it_305->next;
                i_308++;
            }
        }
        if(        head_prev_it_306!=((void*)0)) {
            head_prev_it_306->next=tail_it_307;
        }
        if(        tail_it_307!=((void*)0)) {
            tail_it_307->prev=head_prev_it_306;
        }
    }
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_297;
struct list_item$1charp* prev_it_298;
struct list$1charp* __result230__;
    it_297=self->head;
    while(it_297!=((void*)0)) {
        prev_it_298=it_297;
        it_297=it_297->next;
        come_call_finalizer3(prev_it_298,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* result_312;
struct tuple3$3sTypephcharphsNodeph* __result234__;
struct tuple3$3sTypephcharphsNodeph* __result235__;
struct tuple3$3sTypephcharphsNodeph* result_313;
struct tuple3$3sTypephcharphsNodeph* __result236__;
result_312 = (void*)0;
result_313 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_312,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
        __result234__ = gComeFunResultObject = __result_obj__ = result_312;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    self->it=self->head;
    if(    self->it) {
        __result235__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    memset(&result_313,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
    __result236__ = gComeFunResultObject = __result_obj__ = result_313;
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* result_315;
struct tuple3$3sTypephcharphsNodeph* __result237__;
struct tuple3$3sTypephcharphsNodeph* __result238__;
struct tuple3$3sTypephcharphsNodeph* result_316;
struct tuple3$3sTypephcharphsNodeph* __result239__;
result_315 = (void*)0;
result_316 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_315,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
        __result237__ = gComeFunResultObject = __result_obj__ = result_315;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result238__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    memset(&result_316,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
    __result239__ = gComeFunResultObject = __result_obj__ = result_316;
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj115;
struct sType* __dec_obj116;
char* __dec_obj117;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj115=self->c_value;
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj116=self->type;
            come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj117=self->c_value_without_right_value_objects;
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_328;
char* __result242__;
char* __result243__;
char* result_329;
char* __result244__;
result_328 = (void*)0;
result_329 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_328,0,sizeof(char*));
        __result242__ = gComeFunResultObject = __result_obj__ = result_328;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    self->it=self->head;
    if(    self->it) {
        __result243__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    memset(&result_329,0,sizeof(char*));
    __result244__ = gComeFunResultObject = __result_obj__ = result_329;
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_331;
char* __result245__;
char* __result246__;
char* result_332;
char* __result247__;
result_331 = (void*)0;
result_332 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_331,0,sizeof(char*));
        __result245__ = gComeFunResultObject = __result_obj__ = result_331;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result246__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    memset(&result_332,0,sizeof(char*));
    __result247__ = gComeFunResultObject = __result_obj__ = result_332;
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_335;
int i_336;
struct sType* __result248__;
struct sType* default_value_337;
struct sType* __result249__;
default_value_337 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_335=self->head;
    i_336=0;
    while(it_335!=((void*)0)) {
        if(        position==i_336) {
            __result248__ = gComeFunResultObject = __result_obj__ = it_335->item;
            gComeFunResultObject = (void*)0;
            return __result248__;
        }
        it_335=it_335->next;
        i_336++;
    }
    memset(&default_value_337,0,sizeof(struct sType*));
    __result249__ = gComeFunResultObject = __result_obj__ = default_value_337;
    come_call_finalizer3(default_value_337,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_352;
struct sNode* __result251__;
struct sNode* __result252__;
struct sNode* result_353;
struct sNode* __result253__;
result_352 = (void*)0;
result_353 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_352,0,sizeof(struct sNode*));
        __result251__ = gComeFunResultObject = __result_obj__ = result_352;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    self->it=self->head;
    if(    self->it) {
        __result252__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    memset(&result_353,0,sizeof(struct sNode*));
    __result253__ = gComeFunResultObject = __result_obj__ = result_353;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_355;
struct sNode* __result254__;
struct sNode* __result255__;
struct sNode* result_356;
struct sNode* __result256__;
result_355 = (void*)0;
result_356 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_355,0,sizeof(struct sNode*));
        __result254__ = gComeFunResultObject = __result_obj__ = result_355;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result255__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    memset(&result_356,0,sizeof(struct sNode*));
    __result256__ = gComeFunResultObject = __result_obj__ = result_356;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value346 = (void*)0;
struct list_item$1CVALUEph* litem_360;
struct CVALUE* __dec_obj126;
void* __right_value347 = (void*)0;
struct list_item$1CVALUEph* litem_361;
struct CVALUE* __dec_obj127;
void* __right_value348 = (void*)0;
struct list_item$1CVALUEph* litem_362;
struct CVALUE* __dec_obj128;
struct list$1CVALUEph* __result257__;
    if(    self->len==0) {
        litem_360=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value346=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1CVALUEph"))));
        litem_360->prev=((void*)0);
        litem_360->next=((void*)0);
        __dec_obj126=litem_360->item;
        litem_360->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_360;
        self->head=litem_360;
    }
    else if(    self->len==1) {
        litem_361=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value347=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1CVALUEph"))));
        litem_361->prev=self->head;
        litem_361->next=((void*)0);
        __dec_obj127=litem_361->item;
        litem_361->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_361;
        self->head->next=litem_361;
    }
    else {
        litem_362=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value348=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1CVALUEph"))));
        litem_362->prev=self->tail;
        litem_362->next=((void*)0);
        __dec_obj128=litem_362->item;
        litem_362->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_362;
        self->tail=litem_362;
    }
    self->len++;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value460 = (void*)0;
struct sNewChannel* __result265__;
    ((struct sNodeBase*)(__right_value460=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value460,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __result_obj__=(void*)0;
void* __right_value461 = (void*)0;
char* __result266__;
    __result266__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value461=__builtin_string("sNewChannel")));
    __right_value461 = come_decrement_ref_count2(__right_value461, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value462 = (void*)0;
struct sNode* node_401;
_Bool Value_402;
_Bool __result267__;
_Bool __result268__;
    node_401=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_402=node_compile(node_401,info);
    if(    !Value_402) {
        __result267__ = (_Bool)0;
        if(node_401) { node_401 = come_decrement_ref_count2(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result267__;
    }
    else {
    }
    __result268__ = (_Bool)1;
    if(node_401) { node_401 = come_decrement_ref_count2(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result268__;
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value463 = (void*)0;
struct sNode* __dec_obj161;
struct sNode* __dec_obj162;
struct sWriteChannelNode* __result269__;
    ((struct sNodeBase*)(__right_value463=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value463,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj161=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj162=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); };
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result269__;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __result_obj__=(void*)0;
void* __right_value464 = (void*)0;
char* __result270__;
    __result270__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value464=__builtin_string("sWriteChannelNode")));
    __right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value_403;
void* __right_value465 = (void*)0;
struct CVALUE* come_value_404;
_Bool Value_405;
_Bool __result271__;
void* __right_value466 = (void*)0;
struct CVALUE* right_value_406;
struct sType* right_type_407;
void* __right_value467 = (void*)0;
struct sType* left_type_408;
struct sType* channel_type_409;
_Bool __result272__;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct buffer* buf_411;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct CVALUE* come_value2_412;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
char* __dec_obj166;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sType* __dec_obj167;
_Bool __result273__;
    Value_403=node_compile(self->exp,info);
    if(    !Value_403) {
        return (_Bool)0;
    }
    else {
    }
    come_value_404=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    Value_405=node_compile(self->right_value,info);
    if(    !Value_405) {
        __result271__ = (_Bool)0;
        come_call_finalizer3(come_value_404,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result271__;
    }
    else {
    }
    right_value_406=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_407=right_value_406->type;
    dec_stack_ptr(1,info);
    left_type_408=(struct sType*)come_increment_ref_count(sType_clone(come_value_404->type));
    channel_type_409=(struct sType*)come_increment_ref_count(left_type_408->mChannelType->v1);
    static int var_num_410=0;
    var_num_410++;
    if(    right_value_406->type->mHeap) {
        err_msg(info,"channel can't get heap type");
        __result272__ = (_Bool)0;
        come_call_finalizer3(come_value_404,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(channel_type_409,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result272__;
    }
    buf_411=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 678, "buffer"))));
    buffer_append_format(buf_411,"char __channel_buf%d[sizeof(%s)+1];\n",var_num_410,((char*)(__right_value470=make_type_name_string(channel_type_409,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    __right_value470 = come_decrement_ref_count2(__right_value470, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_411,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value471=make_type_name_string(channel_type_409,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_410,var_num_410);
    __right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_411,"*__channel_p%d = %s;\n",var_num_410,right_value_406->c_value);
    add_come_code(info,((char*)(__right_value472=buffer_to_string(buf_411))));
    __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_412=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 686, "CVALUE"))));
    __dec_obj166=come_value2_412->c_value;
    come_value2_412->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value_404->c_value,var_num_410,((char*)(__right_value475=make_type_name_string(channel_type_409,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))));
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj167=come_value2_412->type;
    come_value2_412->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 690, "sType")),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_412->type->mPointerNum=1;
    come_value2_412->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_412));
    add_come_last_code(info,"%s",come_value2_412->c_value);
    __result273__ = (_Bool)1;
    come_call_finalizer3(come_value_404,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_406,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_409,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_411,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_412,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result273__;
}

struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value479 = (void*)0;
struct sNode* __dec_obj168;
struct sReadChannelNode* __result274__;
    ((struct sNodeBase*)(__right_value479=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value479,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj168=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); };
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result274__;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __result_obj__=(void*)0;
void* __right_value480 = (void*)0;
char* __result275__;
    __result275__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value480=__builtin_string("sReadChannelNode")));
    __right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp_413;
_Bool Value_414;
_Bool __result276__;
void* __right_value481 = (void*)0;
struct CVALUE* come_value_415;
void* __right_value482 = (void*)0;
struct sType* var_type_416;
_Bool __result277__;
struct sType* channel_type_417;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct CVALUE* come_value2_419;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
char* __dec_obj171;
void* __right_value489 = (void*)0;
struct sType* __dec_obj172;
_Bool __result278__;
    exp_413=(struct sNode*)come_increment_ref_count(self->exp);
    Value_414=node_compile(exp_413,info);
    if(    !Value_414) {
        __result276__ = (_Bool)0;
        if(exp_413) { exp_413 = come_decrement_ref_count2(exp_413, ((struct sNode*)exp_413)->finalize, ((struct sNode*)exp_413)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result276__;
    }
    else {
    }
    come_value_415=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    var_type_416=(struct sType*)come_increment_ref_count(sType_clone(come_value_415->type));
    if(    !var_type_416->mChannel) {
        err_msg(info,"require right type is channel");
        __result277__ = (_Bool)0;
        if(exp_413) { exp_413 = come_decrement_ref_count2(exp_413, ((struct sNode*)exp_413)->finalize, ((struct sNode*)exp_413)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_415,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(var_type_416,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result277__;
    }
    channel_type_417=(struct sType*)come_increment_ref_count(var_type_416->mChannelType->v1);
    static int var_num_418=0;
    var_num_418++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num_418,((char*)(__right_value483=make_type_name_string(channel_type_417,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    __right_value483 = come_decrement_ref_count2(__right_value483, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_419=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 742, "CVALUE"))));
    __dec_obj171=come_value2_419->c_value;
    come_value2_419->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value_415->c_value,var_num_418,((char*)(__right_value486=make_type_name_string(channel_type_417,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value487=make_type_name_string(channel_type_417,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_418));
    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj172=come_value2_419->type;
    come_value2_419->type=(struct sType*)come_increment_ref_count(sType_clone(channel_type_417));
    come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_419->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_419));
    add_come_last_code(info,"%s",come_value2_419->c_value);
    __result278__ = (_Bool)1;
    if(exp_413) { exp_413 = come_decrement_ref_count2(exp_413, ((struct sNode*)exp_413)->finalize, ((struct sNode*)exp_413)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_415,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(var_type_416,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_417,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_419,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result278__;
}

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value499 = (void*)0;
struct sNode* __result281__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 759, "struct sNode");
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value491=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 759, "sStoreNode")),(char*)come_increment_ref_count(name),(struct list$1charph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    __result281__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value499=_inf_value1));
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value491,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value499) { __right_value499 = come_decrement_ref_count2(__right_value499, ((struct sNode*)__right_value499)->finalize, ((struct sNode*)__right_value499)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result281__;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
char* __dec_obj185;
struct sLoadNode* __result282__;
    ((struct sNodeBase*)(__right_value500=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value500,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj185=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value502 = (void*)0;
char* __result283__;
    __result283__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value502=__builtin_string("sLoadNode")));
    __right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_421;
void* __right_value503 = (void*)0;
_Bool _if_conditional2;
struct sVar* parent_var_422;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct CVALUE* come_value_423;
struct sType* type_424;
void* __right_value506 = (void*)0;
char* __dec_obj188;
void* __right_value507 = (void*)0;
char* __dec_obj189;
void* __right_value508 = (void*)0;
struct sType* __dec_obj190;
_Bool __result284__;
struct sVar* var__425;
void* __right_value509 = (void*)0;
struct sFun* fun_426;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct CVALUE* come_value_430;
void* __right_value512 = (void*)0;
char* __dec_obj208;
struct sType* __dec_obj209;
_Bool __result289__;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct CVALUE* come_value_431;
void* __right_value515 = (void*)0;
char* __dec_obj210;
void* __right_value516 = (void*)0;
struct sType* __dec_obj211;
void* __right_value517 = (void*)0;
struct sType* __dec_obj212;
_Bool __result291__;
    current_stack_frame_struct_421=info->current_stack_frame_struct;
    if(    (_if_conditional2=(current_stack_frame_struct_421&&((struct sVar*)(__right_value503=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)))==((void*)0))),    come_call_finalizer3(__right_value503,sVar_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional2) {
        parent_var_422=get_variable_from_table(info->lv_table->mParent,self->name);
        if(        parent_var_422!=((void*)0)) {
            if(            string_operator_not_equals(parent_var_422->mFunName,info->come_fun->mName)) {
                come_value_423=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 789, "CVALUE"))));
                type_424=parent_var_422->mType;
                if(                parent_var_422->mType->mOriginIsArray) {
                    __dec_obj188=come_value_423->c_value;
                    come_value_423->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var_422->mCValueName));
                    __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj189=come_value_423->c_value;
                    come_value_423->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var_422->mCValueName));
                    __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj190=come_value_423->type;
                come_value_423->type=(struct sType*)come_increment_ref_count(sType_clone(type_424));
                come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_423->var=((void*)0);
                add_come_last_code(info,"%s",come_value_423->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_423));
                __result284__ = (_Bool)1;
                come_call_finalizer3(come_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result284__;
                come_call_finalizer3(come_value_423,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__425=get_variable_from_table(info->lv_table,self->name);
    if(    var__425==((void*)0)) {
        var__425=get_variable_from_table(info->gv_table,self->name);
        if(        var__425==((void*)0)) {
            fun_426=((struct sFun*)(__right_value509=map$2charphsFunphp_operator_load_element(info->funcs,self->name)));
            come_call_finalizer3(__right_value509,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            fun_426) {
                come_value_430=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 821, "CVALUE"))));
                __dec_obj208=come_value_430->c_value;
                come_value_430->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_426->mName));
                __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj209=come_value_430->type;
                come_value_430->type=(struct sType*)come_increment_ref_count(fun_426->mLambdaType);
                come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_430->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_430));
                __result289__ = (_Bool)1;
                come_call_finalizer3(come_value_430,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result289__;
                come_call_finalizer3(come_value_430,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                return (_Bool)1;
            }
        }
    }
    come_value_431=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 838, "CVALUE"))));
    __dec_obj210=come_value_431->c_value;
    come_value_431->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__425->mCValueName));
    __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj211=come_value_431->type;
    come_value_431->type=(struct sType*)come_increment_ref_count(sType_clone(var__425->mType));
    come_call_finalizer3(__dec_obj211,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_431->var=var__425;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_431));
    if(    list$1sNodeph_length(come_value_431->type->mArrayNum)==1) {
        __dec_obj212=come_value_431->type->mOriginalLoadVarType->v1;
        come_value_431->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(sType_clone(come_value_431->type));
        come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1sNodeph_reset(come_value_431->type->mArrayNum);
        come_value_431->type->mPointerNum++;
        come_value_431->type->mOriginalTypeNamePointerNum=come_value_431->type->mPointerNum;
    }
    __result291__ = (_Bool)1;
    come_call_finalizer3(come_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result291__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_427;
unsigned int hash_428;
unsigned int it_429;
struct sFun* __result285__;
struct sFun* __result286__;
struct sFun* __result287__;
struct sFun* __result288__;
default_value_427 = (void*)0;
    memset(&default_value_427,0,sizeof(struct sFun*));
    hash_428=charp_get_hash_key(((char*)key))%self->size;
    it_429=hash_428;
    while((_Bool)1) {
        if(        self->item_existance[it_429]) {
            if(            charp_equals(self->keys[it_429],key)) {
                __result285__ = gComeFunResultObject = __result_obj__ = self->items[it_429];
                come_call_finalizer3(default_value_427,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result285__;
            }
            it_429++;
            if(            it_429>=self->size) {
                it_429=0;
            }
            else if(            it_429==hash_428) {
                __result286__ = gComeFunResultObject = __result_obj__ = default_value_427;
                come_call_finalizer3(default_value_427,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result286__;
            }
        }
        else {
            __result287__ = gComeFunResultObject = __result_obj__ = default_value_427;
            come_call_finalizer3(default_value_427,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result287__;
        }
    }
    __result288__ = gComeFunResultObject = __result_obj__ = default_value_427;
    come_call_finalizer3(default_value_427,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj191;
struct sType* __dec_obj192;
struct list$1sTypeph* __dec_obj193;
struct list$1charph* __dec_obj194;
struct list$1charph* __dec_obj195;
struct sType* __dec_obj196;
struct sBlock* __dec_obj197;
struct buffer* __dec_obj200;
struct buffer* __dec_obj201;
struct buffer* __dec_obj202;
struct buffer* __dec_obj203;
char* __dec_obj204;
char* __dec_obj205;
char* __dec_obj206;
char* __dec_obj207;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj191=self->mName;
            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj192=self->mResultType;
            come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj193=self->mParamTypes;
            come_call_finalizer3(__dec_obj193,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj194=self->mParamNames;
            come_call_finalizer3(__dec_obj194,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj195=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj195,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj196=self->mLambdaType;
            come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj197=self->mBlock;
            come_call_finalizer3(__dec_obj197,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj200=self->mSource;
            come_call_finalizer3(__dec_obj200,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj201=self->mSourceHead;
            come_call_finalizer3(__dec_obj201,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj202=self->mSourceHead2;
            come_call_finalizer3(__dec_obj202,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj203=self->mSourceDefer;
            come_call_finalizer3(__dec_obj203,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj204=self->mComeHeader;
            __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj205=self->mDeclareSName;
            __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj206=self->mAttribute;
            __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj207=self->mFunAttribute;
            __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj198;
struct sVarTable* __dec_obj199;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj198=self->mNodes;
            come_call_finalizer3(__dec_obj198,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj199=self->mVarTable;
            come_call_finalizer3(__dec_obj199,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_432;
struct list_item$1sNodeph* prev_it_433;
struct list$1sNodeph* __result290__;
    it_432=self->head;
    while(it_432!=((void*)0)) {
        prev_it_433=it_432;
        it_432=it_432->next;
        come_call_finalizer3(prev_it_433,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

struct sNode* create_load_var(char* var_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* __right_value524 = (void*)0;
struct sNode* __result294__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 859, "struct sNode");
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value520=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 859, "sLoadNode")),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result294__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value524=_inf_value2));
    come_call_finalizer3(__right_value520,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value524) { __right_value524 = come_decrement_ref_count2(__right_value524, ((struct sNode*)__right_value524)->finalize, ((struct sNode*)__right_value524)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result294__;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
char* __dec_obj217;
struct sFunLoadNode* __result295__;
    ((struct sNodeBase*)(__right_value525=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value525,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj217=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value527 = (void*)0;
char* __result296__;
    __result296__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value527=__builtin_string("sFunLoadNode")));
    __right_value527 = come_decrement_ref_count2(__right_value527, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value528 = (void*)0;
struct sFun* fun_435;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct CVALUE* come_value_436;
void* __right_value531 = (void*)0;
char* __dec_obj220;
struct sType* __dec_obj221;
    fun_435=((struct sFun*)(__right_value528=map$2charphsFunphp_operator_load_element(info->funcs,self->name)));
    come_call_finalizer3(__right_value528,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_435==((void*)0)) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        return (_Bool)0;
    }
    else {
        come_value_436=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 885, "CVALUE"))));
        __dec_obj220=come_value_436->c_value;
        come_value_436->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_435->mName));
        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj221=come_value_436->type;
        come_value_436->type=(struct sType*)come_increment_ref_count(fun_435->mLambdaType);
        come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_436->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_436));
        come_call_finalizer3(come_value_436,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
char* __dec_obj218;
char* __dec_obj219;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj218=self->sname;
            __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj219=self->name;
            __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNodephsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value532 = (void*)0;
void* __right_value542 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __dec_obj238;
struct sArrayInitializer* __result303__;
    ((struct sNodeBase*)(__right_value532=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value532,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj238=self->initializer;
    self->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephphp_clone(initializer));
    come_call_finalizer3(__dec_obj238,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value543 = (void*)0;
char* __result304__;
    __result304__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value543=__builtin_string("sArrayInitializer")));
    __right_value543 = come_decrement_ref_count2(__right_value543, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNodephsNodephph* initializer_447;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct buffer* buf_448;
int i_449;
struct sType* element_type_450;
struct list$1tuple2$2sNodephsNodephph* o2_saved_451;
struct tuple2$2sNodephsNodeph* it_454;
struct tuple2$2sNodephsNodeph* multiple_assign_var2 = (void*)0;
struct sNode* index_457=0;
struct sNode* value_458=0;
struct CVALUE* come_value_459;
_Bool Value_460;
_Bool __result311__;
void* __right_value546 = (void*)0;
struct CVALUE* __dec_obj241;
_Bool Value_461;
_Bool __result312__;
void* __right_value547 = (void*)0;
struct CVALUE* come_value2_462;
void* __right_value548 = (void*)0;
struct sType* __dec_obj242;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct CVALUE* come_value_463;
void* __right_value551 = (void*)0;
char* __dec_obj243;
void* __right_value552 = (void*)0;
struct sType* __dec_obj244;
_Bool __result313__;
    initializer_447=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(self->initializer);
    buf_448=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 916, "buffer"))));
    buffer_append_str(buf_448,"{");
    i_449=0;
    element_type_450=((void*)0);
    for(    o2_saved_451=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((initializer_447)),it_454=list$1tuple2$2sNodephsNodephph_begin((o2_saved_451));    !list$1tuple2$2sNodephsNodephph_end((o2_saved_451));    it_454=list$1tuple2$2sNodephsNodephph_next((o2_saved_451))    ){
        multiple_assign_var2=it_454;
        index_457=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v1);
        value_458=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
        come_value_459=((void*)0);
        if(        index_457) {
            Value_460=node_compile(index_457,info);
            if(            !Value_460) {
                __result311__ = (_Bool)0;
                if(index_457) { index_457 = come_decrement_ref_count2(index_457, ((struct sNode*)index_457)->finalize, ((struct sNode*)index_457)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(value_458) { value_458 = come_decrement_ref_count2(value_458, ((struct sNode*)value_458)->finalize, ((struct sNode*)value_458)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_459,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(o2_saved_451,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_447,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_448,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_type_450,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result311__;
            }
            else {
            }
            __dec_obj241=come_value_459;
            come_value_459=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer3(__dec_obj241,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            dec_stack_ptr(1,info);
        }
        Value_461=node_compile(value_458,info);
        if(        !Value_461) {
            __result312__ = (_Bool)0;
            if(index_457) { index_457 = come_decrement_ref_count2(index_457, ((struct sNode*)index_457)->finalize, ((struct sNode*)index_457)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value_458) { value_458 = come_decrement_ref_count2(value_458, ((struct sNode*)value_458)->finalize, ((struct sNode*)value_458)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_459,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(o2_saved_451,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_447,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_448,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_450,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result312__;
        }
        else {
        }
        come_value2_462=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj242=element_type_450;
        element_type_450=(struct sType*)come_increment_ref_count(sType_clone(come_value2_462->type));
        come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        come_value_459) {
            buffer_append_format(buf_448,"[%s] = %s",come_value_459->c_value,come_value2_462->c_value);
        }
        else {
            buffer_append_str(buf_448,come_value2_462->c_value);
        }
        i_449++;
        if(        i_449!=list$1tuple2$2sNodephsNodephph_length(initializer_447)) {
            buffer_append_str(buf_448,",");
        }
        if(index_457) { index_457 = come_decrement_ref_count2(index_457, ((struct sNode*)index_457)->finalize, ((struct sNode*)index_457)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(value_458) { value_458 = come_decrement_ref_count2(value_458, ((struct sNode*)value_458)->finalize, ((struct sNode*)value_458)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_459,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_462,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_451,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_448,"}");
    come_value_463=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 955, "CVALUE"))));
    __dec_obj243=come_value_463->c_value;
    come_value_463->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_448));
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj244=come_value_463->type;
    come_value_463->type=(struct sType*)come_increment_ref_count(sType_clone(element_type_450));
    come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_463->type->mPointerNum++;
    come_value_463->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_463));
    __result313__ = (_Bool)1;
    come_call_finalizer3(initializer_447,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_448,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_450,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_463,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result313__;
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNodephsNodephph* __result297__;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* result_439;
struct list_item$1tuple2$2sNodephsNodephph* it_440;
void* __right_value541 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __result302__;
    if(    self==((void*)0)) {
        __result297__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    result_439=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephph_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "/usr/local/include/comelang.h", 1058, "list$1tuple2$2sNodephsNodephph"))));
    it_440=self->head;
    while(it_440!=((void*)0)) {
        list$1tuple2$2sNodephsNodephph_add(result_439,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodephp_clone(it_440->item)));
        it_440=it_440->next;
    }
    __result302__ = gComeFunResultObject = __result_obj__ = result_439;
    come_call_finalizer3(result_439,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_initialize(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNodephsNodephph* __result298__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static void list$1tuple2$2sNodephsNodephphp_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_437;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_438;
    it_437=self->head;
    while(it_437!=((void*)0)) {
        prev_it_438=it_437;
        it_437=it_437->next;
        come_call_finalizer3(prev_it_438,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2sNodephsNodephphp_finalize(struct list_item$1tuple2$2sNodephsNodephph* self){
struct tuple2$2sNodephsNodeph* __dec_obj222;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj222=self->item;
            come_call_finalizer3(__dec_obj222,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value535 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_441;
struct tuple2$2sNodephsNodeph* __dec_obj225;
void* __right_value536 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_442;
struct tuple2$2sNodephsNodeph* __dec_obj228;
void* __right_value537 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_443;
struct tuple2$2sNodephsNodeph* __dec_obj231;
struct list$1tuple2$2sNodephsNodephph* __result299__;
    if(    self->len==0) {
        litem_441=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value535=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "/usr/local/include/comelang.h", 1072, "list_item$1tuple2$2sNodephsNodephph"))));
        litem_441->prev=((void*)0);
        litem_441->next=((void*)0);
        __dec_obj225=litem_441->item;
        litem_441->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj225,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_441;
        self->head=litem_441;
    }
    else if(    self->len==1) {
        litem_442=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value536=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "/usr/local/include/comelang.h", 1082, "list_item$1tuple2$2sNodephsNodephph"))));
        litem_442->prev=self->head;
        litem_442->next=((void*)0);
        __dec_obj228=litem_442->item;
        litem_442->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj228,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_442;
        self->head->next=litem_442;
    }
    else {
        litem_443=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value537=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "/usr/local/include/comelang.h", 1092, "list_item$1tuple2$2sNodephsNodephph"))));
        litem_443->prev=self->tail;
        litem_443->next=((void*)0);
        __dec_obj231=litem_443->item;
        litem_443->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj231,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_443;
        self->tail=litem_443;
    }
    self->len++;
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static void tuple2$2sNodephsNodephp_finalize(struct tuple2$2sNodephsNodeph* self){
struct sNode* __dec_obj232;
struct sNode* __dec_obj233;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj232=self->v1;
            if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj233=self->v2;
            if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodephp_clone(struct tuple2$2sNodephsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* __result300__;
void* __right_value538 = (void*)0;
struct tuple2$2sNodephsNodeph* result_444;
void* __right_value539 = (void*)0;
struct sNode* __dec_obj234;
void* __right_value540 = (void*)0;
struct sNode* __dec_obj235;
struct tuple2$2sNodephsNodeph* __result301__;
    if(    self==(void*)0) {
        __result300__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    result_444=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "tuple2$2sNodephsNodephp_clone", 3, "tuple2$2sNodephsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj234=result_444->v1;
        result_444->v1=(struct sNode*)come_increment_ref_count(sNode_clone(self->v1));
        if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj235=result_444->v2;
        result_444->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result301__ = gComeFunResultObject = __result_obj__ = result_444;
    come_call_finalizer3(result_444,tuple2$2sNodephsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static void tuple2$2sNodephsNodeph_finalize(struct tuple2$2sNodephsNodeph* self){
struct sNode* __dec_obj236;
struct sNode* __dec_obj237;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj236=self->v1;
            if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj237=self->v2;
            if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_445;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_446;
    it_445=self->head;
    while(it_445!=((void*)0)) {
        prev_it_446=it_445;
        it_445=it_445->next;
        come_call_finalizer3(prev_it_446,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_begin(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* result_452;
struct tuple2$2sNodephsNodeph* __result305__;
struct tuple2$2sNodephsNodeph* __result306__;
struct tuple2$2sNodephsNodeph* result_453;
struct tuple2$2sNodephsNodeph* __result307__;
result_452 = (void*)0;
result_453 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_452,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result305__ = gComeFunResultObject = __result_obj__ = result_452;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    self->it=self->head;
    if(    self->it) {
        __result306__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    memset(&result_453,0,sizeof(struct tuple2$2sNodephsNodeph*));
    __result307__ = gComeFunResultObject = __result_obj__ = result_453;
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static _Bool list$1tuple2$2sNodephsNodephph_end(struct list$1tuple2$2sNodephsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_next(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* result_455;
struct tuple2$2sNodephsNodeph* __result308__;
struct tuple2$2sNodephsNodeph* __result309__;
struct tuple2$2sNodephsNodeph* result_456;
struct tuple2$2sNodephsNodeph* __result310__;
result_455 = (void*)0;
result_456 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_455,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result308__ = gComeFunResultObject = __result_obj__ = result_455;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result309__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    memset(&result_456,0,sizeof(struct tuple2$2sNodephsNodeph*));
    __result310__ = gComeFunResultObject = __result_obj__ = result_456;
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static int list$1tuple2$2sNodephsNodephph_length(struct list$1tuple2$2sNodephsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* initializer_464;
void* __right_value555 = (void*)0;
struct sNode* index_465;
_Bool no_comma_466;
void* __right_value556 = (void*)0;
struct sNode* exp_467;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
_Bool no_comma_468;
void* __right_value559 = (void*)0;
struct sNode* exp_469;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sNode* index_470;
_Bool no_comma_471;
void* __right_value563 = (void*)0;
struct sNode* exp_472;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
_Bool no_comma_473;
void* __right_value566 = (void*)0;
struct sNode* exp_474;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct sNode* _inf_value3;
struct sArrayInitializer* _inf_obj_value3;
void* __right_value574 = (void*)0;
struct sNode* __result318__;
    expected_next_character(123,info);
    initializer_464=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephph_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "07var.c", 973, "list$1tuple2$2sNodephsNodephph"))));
    if(    *info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        index_465=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(93,info);
        expected_next_character(61,info);
        no_comma_466=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_467=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_466;
        list$1tuple2$2sNodephsNodephph_add(initializer_464,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 989, "struct tuple2$2sNodephsNodeph")),(struct sNode*)come_increment_ref_count(index_465),(struct sNode*)come_increment_ref_count(exp_467))));
        if(index_465) { index_465 = come_decrement_ref_count2(index_465, ((struct sNode*)index_465)->finalize, ((struct sNode*)index_465)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(exp_467) { exp_467 = come_decrement_ref_count2(exp_467, ((struct sNode*)exp_467)->finalize, ((struct sNode*)exp_467)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        no_comma_468=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_469=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_468;
        list$1tuple2$2sNodephsNodephph_add(initializer_464,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 997, "struct tuple2$2voidpsNodeph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_469))));
        if(exp_469) { exp_469 = come_decrement_ref_count2(exp_469, ((struct sNode*)exp_469)->finalize, ((struct sNode*)exp_469)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125) {
            break;
        }
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            index_470=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(93,info);
            expected_next_character(61,info);
            no_comma_471=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_472=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_471;
            list$1tuple2$2sNodephsNodephph_add(initializer_464,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 1024, "struct tuple2$2sNodephsNodeph")),(struct sNode*)come_increment_ref_count(index_470),(struct sNode*)come_increment_ref_count(exp_472))));
            if(index_470) { index_470 = come_decrement_ref_count2(index_470, ((struct sNode*)index_470)->finalize, ((struct sNode*)index_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_472) { exp_472 = come_decrement_ref_count2(exp_472, ((struct sNode*)exp_472)->finalize, ((struct sNode*)exp_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            no_comma_473=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_474=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_473;
            list$1tuple2$2sNodephsNodephph_add(initializer_464,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1032, "struct tuple2$2voidpsNodeph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_474))));
            if(exp_474) { exp_474 = come_decrement_ref_count2(exp_474, ((struct sNode*)exp_474)->finalize, ((struct sNode*)exp_474)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    expected_next_character(125,info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1038, "struct sNode");
    _inf_obj_value3=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value570=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 1038, "sArrayInitializer")),(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(initializer_464),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sArrayInitializer_finalize;
    _inf_value3->clone=(void*)sArrayInitializer_clone;
    _inf_value3->compile=(void*)sArrayInitializer_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sArrayInitializer_kind;
    __result318__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value574=_inf_value3));
    come_call_finalizer3(initializer_464,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value570,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value574) { __right_value574 = come_decrement_ref_count2(__right_value574, ((struct sNode*)__right_value574)->finalize, ((struct sNode*)__right_value574)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj245;
struct sNode* __dec_obj246;
struct tuple2$2sNodephsNodeph* __result314__;
    __dec_obj245=self->v1;
    self->v1=(struct sNode*)come_increment_ref_count(v1);
    if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj246=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count2(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0,0, (void*)0); };
    __result314__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    if(v1) { v1 = come_decrement_ref_count2(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj247;
struct tuple2$2voidpsNodeph* __result315__;
    self->v1=v1;
    __dec_obj247=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); };
    __result315__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2voidpsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self){
struct sNode* __dec_obj248;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj248=self->v2;
            if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self){
char* __dec_obj249;
struct list$1tuple2$2sNodephsNodephph* __dec_obj250;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj249=self->sname;
            __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj250=self->initializer;
            come_call_finalizer3(__dec_obj250,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
struct sArrayInitializer* __result316__;
void* __right_value571 = (void*)0;
struct sArrayInitializer* result_475;
void* __right_value572 = (void*)0;
char* __dec_obj251;
void* __right_value573 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __dec_obj252;
struct sArrayInitializer* __result317__;
    if(    self==(void*)0) {
        __result316__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    result_475=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "sArrayInitializer"));
    if(    self!=((void*)0)) {
        result_475->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj251=result_475->sname;
        result_475->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_475->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj252=result_475->initializer;
        result_475->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephphp_clone(self->initializer));
        come_call_finalizer3(__dec_obj252,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result317__ = gComeFunResultObject = __result_obj__ = result_475;
    come_call_finalizer3(result_475,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value575 = (void*)0;
void* __right_value585 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj269;
struct sStructInitializer* __result325__;
    ((struct sNodeBase*)(__right_value575=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value575,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj269=self->initializer;
    self->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(initializer));
    come_call_finalizer3(__dec_obj269,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

char* sStructInitializer_kind(struct sStructInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value586 = (void*)0;
char* __result326__;
    __result326__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value586=__builtin_string("sStructInitializer")));
    __right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* initializer_486;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct buffer* buf_487;
int i_488;
struct list$1tuple2$2charphsNodephph* o2_saved_489;
struct tuple2$2charphsNodeph* it_492;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* name_495=0;
struct sNode* value_496=0;
_Bool Value_497;
_Bool __result333__;
void* __right_value589 = (void*)0;
struct CVALUE* come_value2_498;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct CVALUE* come_value_499;
void* __right_value592 = (void*)0;
char* __dec_obj272;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct sType* __dec_obj273;
_Bool __result334__;
    initializer_486=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->initializer);
    buf_487=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1059, "buffer"))));
    buffer_append_str(buf_487,"{");
    i_488=0;
    for(    o2_saved_489=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((initializer_486)),it_492=list$1tuple2$2charphsNodephph_begin((o2_saved_489));    !list$1tuple2$2charphsNodephph_end((o2_saved_489));    it_492=list$1tuple2$2charphsNodephph_next((o2_saved_489))    ){
        multiple_assign_var3=it_492;
        name_495=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        value_496=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
        Value_497=node_compile(value_496,info);
        if(        !Value_497) {
            __result333__ = (_Bool)0;
            name_495 = come_decrement_ref_count2(name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(value_496) { value_496 = come_decrement_ref_count2(value_496, ((struct sNode*)value_496)->finalize, ((struct sNode*)value_496)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(o2_saved_489,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_486,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_487,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result333__;
        }
        else {
        }
        come_value2_498=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        name_495) {
            buffer_append_format(buf_487,".%s = %s",name_495,come_value2_498->c_value);
        }
        else {
            buffer_append_format(buf_487,"%s",come_value2_498->c_value);
        }
        i_488++;
        if(        i_488!=list$1tuple2$2charphsNodephph_length(initializer_486)) {
            buffer_append_str(buf_487,",");
        }
        name_495 = come_decrement_ref_count2(name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(value_496) { value_496 = come_decrement_ref_count2(value_496, ((struct sNode*)value_496)->finalize, ((struct sNode*)value_496)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value2_498,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_489,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_487,"}");
    come_value_499=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1086, "CVALUE"))));
    __dec_obj272=come_value_499->c_value;
    come_value_499->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_487));
    __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj273=come_value_499->type;
    come_value_499->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 1089, "sType")),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj273,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_499->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_499));
    __result334__ = (_Bool)1;
    come_call_finalizer3(initializer_486,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_487,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_499,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result334__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result319__;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_478;
struct list_item$1tuple2$2charphsNodephph* it_479;
void* __right_value584 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result324__;
    if(    self==((void*)0)) {
        __result319__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    result_478=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1058, "list$1tuple2$2charphsNodephph"))));
    it_479=self->head;
    while(it_479!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_478,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_479->item)));
        it_479=it_479->next;
    }
    __result324__ = gComeFunResultObject = __result_obj__ = result_478;
    come_call_finalizer3(result_478,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result320__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_476;
struct list_item$1tuple2$2charphsNodephph* prev_it_477;
    it_476=self->head;
    while(it_476!=((void*)0)) {
        prev_it_477=it_476;
        it_476=it_476->next;
        come_call_finalizer3(prev_it_477,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj253;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj253=self->item;
            come_call_finalizer3(__dec_obj253,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value578 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_480;
struct tuple2$2charphsNodeph* __dec_obj256;
void* __right_value579 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_481;
struct tuple2$2charphsNodeph* __dec_obj259;
void* __right_value580 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_482;
struct tuple2$2charphsNodeph* __dec_obj262;
struct list$1tuple2$2charphsNodephph* __result321__;
    if(    self->len==0) {
        litem_480=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value578=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1072, "list_item$1tuple2$2charphsNodephph"))));
        litem_480->prev=((void*)0);
        litem_480->next=((void*)0);
        __dec_obj256=litem_480->item;
        litem_480->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj256,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_480;
        self->head=litem_480;
    }
    else if(    self->len==1) {
        litem_481=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value579=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1082, "list_item$1tuple2$2charphsNodephph"))));
        litem_481->prev=self->head;
        litem_481->next=((void*)0);
        __dec_obj259=litem_481->item;
        litem_481->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj259,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_481;
        self->head->next=litem_481;
    }
    else {
        litem_482=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value580=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "/usr/local/include/comelang.h", 1092, "list_item$1tuple2$2charphsNodephph"))));
        litem_482->prev=self->tail;
        litem_482->next=((void*)0);
        __dec_obj262=litem_482->item;
        litem_482->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj262,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_482;
        self->tail=litem_482;
    }
    self->len++;
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj263;
struct sNode* __dec_obj264;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj263=self->v1;
            __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj264=self->v2;
            if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count2(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result322__;
void* __right_value581 = (void*)0;
struct tuple2$2charphsNodeph* result_483;
void* __right_value582 = (void*)0;
char* __dec_obj265;
void* __right_value583 = (void*)0;
struct sNode* __dec_obj266;
struct tuple2$2charphsNodeph* __result323__;
    if(    self==(void*)0) {
        __result322__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    result_483=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj265=result_483->v1;
        result_483->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj266=result_483->v2;
        result_483->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result323__ = gComeFunResultObject = __result_obj__ = result_483;
    come_call_finalizer3(result_483,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj267;
struct sNode* __dec_obj268;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj267=self->v1;
            __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj268=self->v2;
            if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_484;
struct list_item$1tuple2$2charphsNodephph* prev_it_485;
    it_484=self->head;
    while(it_484!=((void*)0)) {
        prev_it_485=it_484;
        it_484=it_484->next;
        come_call_finalizer3(prev_it_485,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_490;
struct tuple2$2charphsNodeph* __result327__;
struct tuple2$2charphsNodeph* __result328__;
struct tuple2$2charphsNodeph* result_491;
struct tuple2$2charphsNodeph* __result329__;
result_490 = (void*)0;
result_491 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_490,0,sizeof(struct tuple2$2charphsNodeph*));
        __result327__ = gComeFunResultObject = __result_obj__ = result_490;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    self->it=self->head;
    if(    self->it) {
        __result328__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    memset(&result_491,0,sizeof(struct tuple2$2charphsNodeph*));
    __result329__ = gComeFunResultObject = __result_obj__ = result_491;
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_493;
struct tuple2$2charphsNodeph* __result330__;
struct tuple2$2charphsNodeph* __result331__;
struct tuple2$2charphsNodeph* result_494;
struct tuple2$2charphsNodeph* __result332__;
result_493 = (void*)0;
result_494 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_493,0,sizeof(struct tuple2$2charphsNodeph*));
        __result330__ = gComeFunResultObject = __result_obj__ = result_493;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result331__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    memset(&result_494,0,sizeof(struct tuple2$2charphsNodeph*));
    __result332__ = gComeFunResultObject = __result_obj__ = result_494;
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_struct_initializer(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct list$1tuple2$2charphsNodephph* initializer_500;
void* __right_value597 = (void*)0;
char* name_501;
_Bool no_comma_502;
void* __right_value598 = (void*)0;
struct sNode* exp_503;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
_Bool no_comma_504;
void* __right_value601 = (void*)0;
struct sNode* exp_505;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
char* name_506;
_Bool no_comma_507;
void* __right_value605 = (void*)0;
struct sNode* exp_508;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
_Bool no_comma_509;
void* __right_value608 = (void*)0;
struct sNode* exp_510;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sNode* _inf_value4;
struct sStructInitializer* _inf_obj_value4;
void* __right_value616 = (void*)0;
struct sNode* __result338__;
    expected_next_character(123,info);
    initializer_500=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "07var.c", 1102, "list$1tuple2$2charphsNodephph"))));
    if(    *info->p==46) {
        info->p++;
        skip_spaces_and_lf(info);
        name_501=(char*)come_increment_ref_count(parse_word(info));
        expected_next_character(61,info);
        no_comma_502=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_503=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_502;
        list$1tuple2$2charphsNodephph_add(initializer_500,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "07var.c", 1117, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(name_501),(struct sNode*)come_increment_ref_count(exp_503))));
        name_501 = come_decrement_ref_count2(name_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_503) { exp_503 = come_decrement_ref_count2(exp_503, ((struct sNode*)exp_503)->finalize, ((struct sNode*)exp_503)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        no_comma_504=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_505=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_504;
        list$1tuple2$2charphsNodephph_add(initializer_500,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1125, "struct tuple2$2voidpsNodeph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_505))));
        if(exp_505) { exp_505 = come_decrement_ref_count2(exp_505, ((struct sNode*)exp_505)->finalize, ((struct sNode*)exp_505)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125) {
            break;
        }
        if(        *info->p==46) {
            info->p++;
            skip_spaces_and_lf(info);
            name_506=(char*)come_increment_ref_count(parse_word(info));
            expected_next_character(61,info);
            no_comma_507=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_508=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_507;
            list$1tuple2$2charphsNodephph_add(initializer_500,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "07var.c", 1151, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(name_506),(struct sNode*)come_increment_ref_count(exp_508))));
            name_506 = come_decrement_ref_count2(name_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(exp_508) { exp_508 = come_decrement_ref_count2(exp_508, ((struct sNode*)exp_508)->finalize, ((struct sNode*)exp_508)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            no_comma_509=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_510=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_509;
            list$1tuple2$2charphsNodephph_add(initializer_500,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 1159, "struct tuple2$2voidpsNodeph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_510))));
            if(exp_510) { exp_510 = come_decrement_ref_count2(exp_510, ((struct sNode*)exp_510)->finalize, ((struct sNode*)exp_510)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    expected_next_character(125,info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1165, "struct sNode");
    _inf_obj_value4=(struct sStructInitializer*)come_increment_ref_count(((struct sStructInitializer*)(__right_value612=sStructInitializer_initialize((struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "07var.c", 1165, "sStructInitializer")),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer_500),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sStructInitializer_finalize;
    _inf_value4->clone=(void*)sStructInitializer_clone;
    _inf_value4->compile=(void*)sStructInitializer_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sStructInitializer_kind;
    __result338__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value616=_inf_value4));
    come_call_finalizer3(initializer_500,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value612,sStructInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value616) { __right_value616 = come_decrement_ref_count2(__right_value616, ((struct sNode*)__right_value616)->finalize, ((struct sNode*)__right_value616)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj274;
struct sNode* __dec_obj275;
struct tuple2$2charphsNodeph* __result335__;
    __dec_obj274=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj275=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); };
    __result335__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static void sStructInitializer_finalize(struct sStructInitializer* self){
char* __dec_obj276;
struct list$1tuple2$2charphsNodephph* __dec_obj277;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj276=self->sname;
            __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj277=self->initializer;
            come_call_finalizer3(__dec_obj277,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self){
void* __result_obj__=(void*)0;
struct sStructInitializer* __result336__;
void* __right_value613 = (void*)0;
struct sStructInitializer* result_511;
void* __right_value614 = (void*)0;
char* __dec_obj278;
void* __right_value615 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj279;
struct sStructInitializer* __result337__;
    if(    self==(void*)0) {
        __result336__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    result_511=(struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "sStructInitializer_clone", 3, "sStructInitializer"));
    if(    self!=((void*)0)) {
        result_511->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj278=result_511->sname;
        result_511->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_511->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj279=result_511->initializer;
        result_511->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->initializer));
        come_call_finalizer3(__dec_obj279,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result337__ = gComeFunResultObject = __result_obj__ = result_511;
    come_call_finalizer3(result_511,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value617 = (void*)0;
struct sVar* self_512;
void* __right_value618 = (void*)0;
char* __dec_obj280;
void* __right_value619 = (void*)0;
struct sType* __dec_obj281;
void* __right_value620 = (void*)0;
char* __dec_obj282;
void* __right_value621 = (void*)0;
char* __dec_obj283;
void* __right_value622 = (void*)0;
char* __dec_obj284;
char* __dec_obj285;
void* __right_value626 = (void*)0;
    self_512=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1170, "sVar"));
    __dec_obj280=self_512->mName;
    self_512->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj281=self_512->mType;
    self_512->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj281,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mFunctionParam) {
        __dec_obj282=self_512->mCValueName;
        self_512->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int n_513=0;
        __dec_obj283=self_512->mCValueName;
        self_512->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n_513++));
        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    self_512->mBlockLevel=info->block_level;
    self_512->mAllocaValue=(_Bool)0;
    self_512->mFunctionParam=(_Bool)0;
    self_512->mNoFree=(_Bool)0;
    if(    info->come_fun) {
        __dec_obj284=self_512->mFunName;
        self_512->mFunName=(char*)come_increment_ref_count(string_clone(info->come_fun->mName));
        __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj285=self_512->mFunName;
        self_512->mFunName=((void*)0);
        __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_512));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_512,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_531;
unsigned int it_532;
_Bool same_key_exist_533;
char* it2_536;
struct map$2charphsVarph* __result355__;
    if(    self->len*10>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_531=charp_get_hash_key(key)%self->size;
    it_532=hash_531;
    while((_Bool)1) {
        if(        self->item_existance[it_532]) {
            if(            charp_equals(self->keys[it_532],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_532]);
                    self->keys[it_532] = come_decrement_ref_count2(self->keys[it_532], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_532]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_532]);
                    self->keys[it_532]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_532],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_532]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_532]=item;
                }
                break;
            }
            it_532++;
            if(            it_532>=self->size) {
                it_532=0;
            }
            else if(            it_532==hash_531) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_532]=(_Bool)1;
            if(            1) {
                self->keys[it_532]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_532]=key;
            }
            if(            1) {
                self->items[it_532]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_532]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_533=(_Bool)0;
    for(    it2_536=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_536=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_536,key)) {
            same_key_exist_533=(_Bool)1;
        }
    }
    if(    !same_key_exist_533) {
        list$1charp_push_back(self->key_list,key);
    }
    __result355__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_514;
void* __right_value623 = (void*)0;
char** keys_515;
void* __right_value624 = (void*)0;
struct sVar** items_516;
void* __right_value625 = (void*)0;
_Bool* item_existance_517;
int len_518;
char* it_521;
struct sVar* default_value_524;
struct sVar* it2_525;
unsigned int hash_528;
int n_529;
struct sVar* default_value_530;
default_value_524 = (void*)0;
default_value_530 = (void*)0;
    size_514=self->size*10;
    keys_515=(char**)come_increment_ref_count(((char**)(__right_value623=(char**)come_calloc(1, sizeof(char*)*(1*(size_514)), "/usr/local/include/comelang.h", 2547, "char*%"))));
    items_516=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value624=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_514)), "/usr/local/include/comelang.h", 2548, "sVar*%"))));
    item_existance_517=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value625=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_514)), "/usr/local/include/comelang.h", 2549, "bool"))));
    len_518=0;
    for(    it_521=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_521=map$2charphsVarph_next(self)    ){
        memset(&default_value_524,0,sizeof(struct sVar*));
        it2_525=map$2charphsVarph_at(self,it_521,default_value_524);
        hash_528=charp_get_hash_key(it_521)%size_514;
        n_529=hash_528;
        while((_Bool)1) {
            if(            item_existance_517[n_529]) {
                n_529++;
                if(                n_529>=size_514) {
                    n_529=0;
                }
                else if(                n_529==hash_528) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_517[n_529]=(_Bool)1;
                keys_515[n_529]=it_521;
                items_516[n_529]=map$2charphsVarph_at(self,it_521,default_value_530);
                len_518++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_515;
    self->items=items_516;
    self->item_existance=item_existance_517;
    self->size=size_514;
    self->len=len_518;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_519;
char* __result339__;
char* __result340__;
char* result_520;
char* __result341__;
result_519 = (void*)0;
result_520 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_519,0,sizeof(char*));
        __result339__ = gComeFunResultObject = __result_obj__ = result_519;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result340__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    memset(&result_520,0,sizeof(char*));
    __result341__ = gComeFunResultObject = __result_obj__ = result_520;
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_522;
char* __result342__;
char* __result343__;
char* result_523;
char* __result344__;
result_522 = (void*)0;
result_523 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_522,0,sizeof(char*));
        __result342__ = gComeFunResultObject = __result_obj__ = result_522;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result343__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    memset(&result_523,0,sizeof(char*));
    __result344__ = gComeFunResultObject = __result_obj__ = result_523;
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_526;
unsigned int it_527;
struct sVar* __result345__;
struct sVar* __result346__;
struct sVar* __result347__;
struct sVar* __result348__;
    hash_526=charp_get_hash_key(((char*)key))%self->size;
    it_527=hash_526;
    while((_Bool)1) {
        if(        self->item_existance[it_527]) {
            if(            charp_equals(self->keys[it_527],key)) {
                __result345__ = gComeFunResultObject = __result_obj__ = self->items[it_527];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result345__;
            }
            it_527++;
            if(            it_527>=self->size) {
                it_527=0;
            }
            else if(            it_527==hash_526) {
                __result346__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result346__;
            }
        }
        else {
            __result347__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result347__;
        }
    }
    __result348__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_534;
char* __result349__;
char* __result350__;
char* result_535;
char* __result351__;
result_534 = (void*)0;
result_535 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_534,0,sizeof(char*));
        __result349__ = gComeFunResultObject = __result_obj__ = result_534;
        gComeFunResultObject = (void*)0;
        return __result349__;
    }
    self->it=self->head;
    if(    self->it) {
        __result350__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    memset(&result_535,0,sizeof(char*));
    __result351__ = gComeFunResultObject = __result_obj__ = result_535;
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_537;
char* __result352__;
char* __result353__;
char* result_538;
char* __result354__;
result_537 = (void*)0;
result_538 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_537,0,sizeof(char*));
        __result352__ = gComeFunResultObject = __result_obj__ = result_537;
        gComeFunResultObject = (void*)0;
        return __result352__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result353__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result353__;
    }
    memset(&result_538,0,sizeof(char*));
    __result354__ = gComeFunResultObject = __result_obj__ = result_538;
    gComeFunResultObject = (void*)0;
    return __result354__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value627 = (void*)0;
struct sVar* self_539;
void* __right_value628 = (void*)0;
char* __dec_obj286;
void* __right_value629 = (void*)0;
struct sType* __dec_obj287;
void* __right_value630 = (void*)0;
char* __dec_obj288;
void* __right_value631 = (void*)0;
    self_539=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1199, "sVar"));
    __dec_obj286=self_539->mName;
    self_539->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj287=self_539->mType;
    self_539->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj287,sType_finalize, 0, 0, 0, 0, (void*)0);
    self_539->mGlobal=(_Bool)1;
    __dec_obj288=self_539->mCValueName;
    self_539->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_539->mBlockLevel=info->block_level;
    self_539->mAllocaValue=(_Bool)0;
    self_539->mFunctionParam=(_Bool)0;
    self_539->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_539));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_539,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value632 = (void*)0;
struct sVar* self_540;
void* __right_value633 = (void*)0;
char* __dec_obj289;
void* __right_value634 = (void*)0;
struct sType* __dec_obj290;
void* __right_value635 = (void*)0;
char* __dec_obj291;
void* __right_value636 = (void*)0;
    self_540=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1218, "sVar"));
    __dec_obj289=self_540->mName;
    self_540->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj290=self_540->mType;
    self_540->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj290,sType_finalize, 0, 0, 0, 0, (void*)0);
    self_540->mGlobal=(_Bool)1;
    __dec_obj291=self_540->mCValueName;
    self_540->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_540->mBlockLevel=info->block_level;
    self_540->mAllocaValue=(_Bool)0;
    self_540->mFunctionParam=(_Bool)0;
    self_540->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_540));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_540,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_541;
_Bool is_type_name_flag_542;
_Bool multiple_declare_543;
char* p_544;
int sline_545;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_546=0;
char* name_547=0;
_Bool err_548=0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var5 = (void*)0;
struct sType* type_549=0;
char* name_550=0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
_Bool no_output_err_551;
_Bool no_comma_552;
_Bool no_output_come_code_553;
void* __right_value644 = (void*)0;
struct sNode* exp_554;
_Bool attr_define_555;
char* p_556;
int sline_557;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* type_558=0;
char* name_559=0;
_Bool err_560=0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sFun* fun_561;
void* __right_value649 = (void*)0;
char* buf2_562;
struct list$1charph* multiple_assign_563;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct list$1charph* __dec_obj296;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
char* buf3_564;
void* __right_value654 = (void*)0;
_Bool no_comma_565;
void* __right_value655 = (void*)0;
struct sNode* right_value_566;
void* __right_value656 = (void*)0;
struct sNode* __dec_obj297;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* __right_value667 = (void*)0;
struct sNode* node_567;
struct sNode* __result358__;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct sNode* _inf_value6;
struct sNewChannel* _inf_obj_value6;
void* __right_value672 = (void*)0;
struct sNode* node_569;
struct sNode* __result361__;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_571;
void* __right_value675 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* base_type_572=0;
char* name_573=0;
_Bool err_574=0;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var8 = (void*)0;
struct sType* type2_575=0;
char* var_name_576=0;
void* __right_value678 = (void*)0;
_Bool no_comma_577;
void* __right_value679 = (void*)0;
struct sNode* exp_578;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
_Bool no_comma_582;
void* __right_value685 = (void*)0;
struct sNode* exp_583;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var9 = (void*)0;
struct sType* type2_584=0;
char* var_name_585=0;
void* __right_value692 = (void*)0;
_Bool no_comma_586;
void* __right_value693 = (void*)0;
struct sNode* exp_587;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
_Bool no_comma_588;
void* __right_value696 = (void*)0;
struct sNode* exp_589;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct sNode* right_node_590;
void* __right_value701 = (void*)0;
char* var_name2_591;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* __right_value712 = (void*)0;
struct sNode* node_592;
struct sNode* __result367__;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_594=0;
char* name_595=0;
_Bool err_596=0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
char* __dec_obj334;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct sNode* _inf_value8;
struct sLoadNode* _inf_obj_value8;
void* __right_value728 = (void*)0;
struct sNode* self_node_600;
void* __right_value729 = (void*)0;
struct sNode* right_node_602;
void* __right_value730 = (void*)0;
struct sNode* node_603;
struct sNode* __result372__;
void* __right_value731 = (void*)0;
struct sNode* __result373__;
void* __right_value732 = (void*)0;
struct sNode* right_value_604;
void* __right_value733 = (void*)0;
struct sNode* __dec_obj350;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* __right_value744 = (void*)0;
struct sNode* node_605;
struct sNode* __result376__;
void* __right_value745 = (void*)0;
_Bool _elif_conditional1;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
struct sNode* _inf_value10;
struct sLoadNode* _inf_obj_value10;
void* __right_value752 = (void*)0;
struct sNode* node_607;
void* __right_value753 = (void*)0;
struct sNode* __dec_obj367;
struct sNode* __result379__;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct sNode* _inf_value11;
struct sLoadNode* _inf_obj_value11;
void* __right_value760 = (void*)0;
struct sNode* node_609;
void* __right_value761 = (void*)0;
struct sNode* __dec_obj372;
struct sNode* __result382__;
char* word_611;
void* __right_value762 = (void*)0;
char* __dec_obj373;
void* __right_value763 = (void*)0;
char* __dec_obj374;
_Bool is_type_name_flag_612;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11 = (void*)0;
struct sType* type_613=0;
char* name_614=0;
_Bool err_615=0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sNode* _inf_value12;
struct sLoadNode* _inf_obj_value12;
void* __right_value772 = (void*)0;
struct sNode* node_616;
struct sNode* __result385__;
struct sNode* right_value_618;
_Bool no_comma_619;
void* __right_value773 = (void*)0;
struct sNode* __dec_obj379;
void* __right_value774 = (void*)0;
struct sNode* __dec_obj380;
void* __right_value775 = (void*)0;
struct sNode* __dec_obj381;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct sNode* _inf_value13;
struct sStoreNode* _inf_obj_value13;
void* __right_value785 = (void*)0;
struct sNode* node_620;
struct sNode* __result388__;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sNode* _inf_value14;
struct sStoreNode* _inf_obj_value14;
void* __right_value795 = (void*)0;
struct sNode* node_622;
struct sNode* __result391__;
word_611 = (void*)0;
    sline_real_541=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag_542=is_type_name(buf,info);
    multiple_declare_543=(_Bool)0;
    if(    is_type_name_flag_542) {
        p_544=info->p;
        sline_545=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value637=parse_struct_attribute(info)));
            __right_value637 = come_decrement_ref_count2(__right_value637, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value638=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_546=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_547=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_548=multiple_assign_var4->v3;
            come_call_finalizer3(__right_value638,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            (void)((char*)(__right_value639=parse_struct_attribute(info)));
            __right_value639 = come_decrement_ref_count2(__right_value639, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            err_548) {
                (void)((char*)(__right_value640=parse_struct_attribute(info)));
                __right_value640 = come_decrement_ref_count2(__right_value640, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                multiple_assign_var5=((struct tuple2$2sTypephcharph*)(__right_value641=parse_variable_name((struct sType*)come_increment_ref_count(type_546),(_Bool)1,info)));
                type_549=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_550=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer3(__right_value641,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                (void)((char*)(__right_value642=parse_struct_attribute(info)));
                __right_value642 = come_decrement_ref_count2(__right_value642, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123) {
                        ((char*)(__right_value643=skip_block(info)));
                        __right_value643 = come_decrement_ref_count2(__right_value643, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        no_output_err_551=info->no_output_err;
                        no_comma_552=info->no_comma;
                        no_output_come_code_553=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_554=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_552;
                        info->no_output_err=no_output_err_551;
                        info->no_output_come_code=no_output_come_code_553;
                        if(exp_554) { exp_554 = come_decrement_ref_count2(exp_554, ((struct sNode*)exp_554)->finalize, ((struct sNode*)exp_554)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
                if(                !is_type_name(name_550,info)&&*info->p==44) {
                    multiple_declare_543=(_Bool)1;
                }
                come_call_finalizer3(type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_550 = come_decrement_ref_count2(name_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_546,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_547 = come_decrement_ref_count2(name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_544;
        info->sline=sline_545;
    }
    attr_define_555=(_Bool)0;
    if(    is_type_name_flag_542&&info->defining_class) {
        p_556=info->p;
        sline_557=info->sline;
        info->p=head;
        info->sline=head_sline;
        (void)((char*)(__right_value645=parse_struct_attribute(info)));
        __right_value645 = come_decrement_ref_count2(__right_value645, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value646=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_558=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        name_559=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        err_560=multiple_assign_var6->v3;
        come_call_finalizer3(__right_value646,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        (void)((char*)(__right_value647=parse_struct_attribute(info)));
        __right_value647 = come_decrement_ref_count2(__right_value647, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        err_560&&strmemcmp(info->p,"self")) {
            attr_define_555=(_Bool)1;
        }
        info->p=p_556;
        info->sline=sline_557;
        come_call_finalizer3(type_558,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_559 = come_decrement_ref_count2(name_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    fun_561=((struct sFun*)(__right_value648=map$2charphsFunphp_operator_load_element(info->funcs,buf)));
    come_call_finalizer3(__right_value648,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    (!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")) {
        parse_sharp_v5(info);
        buf2_562=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign_563=((void*)0);
        if(        *info->p==44) {
            __dec_obj296=multiple_assign_563;
            multiple_assign_563=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 1330, "list$1charph"))));
            come_call_finalizer3(__dec_obj296,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            list$1charph_push_back(multiple_assign_563,(char*)come_increment_ref_count(string_clone(buf2_562)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_564=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1charph_push_back(multiple_assign_563,(char*)come_increment_ref_count(string_clone(buf3_564)));
                buf3_564 = come_decrement_ref_count2(buf3_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_565=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_566=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_565;
            parse_sharp_v5(info);
            __dec_obj297=right_value_566;
            right_value_566=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_566),info));
            if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count2(__dec_obj297, ((struct sNode*)__dec_obj297)->finalize, ((struct sNode*)__dec_obj297)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1360, "struct sNode");
            _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value659=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1360, "sStoreNode")),(char*)come_increment_ref_count(__builtin_string(buf2_562)),(struct list$1charph*)come_increment_ref_count(multiple_assign_563),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_566),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sStoreNode_finalize;
            _inf_value5->clone=(void*)sStoreNode_clone;
            _inf_value5->compile=(void*)sStoreNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sStoreNode_kind;
            node_567=(struct sNode*)come_increment_ref_count(_inf_value5);
            come_call_finalizer3(__right_value659,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_541;
            __result358__ = gComeFunResultObject = __result_obj__ = node_567;
            if(right_value_566) { right_value_566 = come_decrement_ref_count2(right_value_566, ((struct sNode*)right_value_566)->finalize, ((struct sNode*)right_value_566)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_567) { node_567 = come_decrement_ref_count2(node_567, ((struct sNode*)node_567)->finalize, ((struct sNode*)node_567)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf2_562 = come_decrement_ref_count2(buf2_562, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_assign_563,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result358__;
            if(right_value_566) { right_value_566 = come_decrement_ref_count2(right_value_566, ((struct sNode*)right_value_566)->finalize, ((struct sNode*)right_value_566)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_567) { node_567 = come_decrement_ref_count2(node_567, ((struct sNode*)node_567)->finalize, ((struct sNode*)node_567)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        buf2_562 = come_decrement_ref_count2(buf2_562, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(multiple_assign_563,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    gComePthread&&charp_operator_equals(buf,"__channel__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1370, "struct sNode");
        _inf_obj_value6=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value669=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "07var.c", 1370, "sNewChannel")),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sNewChannel_finalize;
        _inf_value6->clone=(void*)sNewChannel_clone;
        _inf_value6->compile=(void*)sNewChannel_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sNewChannel_kind;
        node_569=(struct sNode*)come_increment_ref_count(_inf_value6);
        come_call_finalizer3(__right_value669,sNewChannel_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_541;
        __result361__ = gComeFunResultObject = __result_obj__ = node_569;
        if(node_569) { node_569 = come_decrement_ref_count2(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result361__;
        if(node_569) { node_569 = come_decrement_ref_count2(node_569, ((struct sNode*)node_569)->finalize, ((struct sNode*)node_569)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    multiple_declare_543) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_571=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 1378, "list$1tuple3$3sTypephcharphsNodephph"))));
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value675=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_572=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        name_573=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_574=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value675,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_574) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        (void)((char*)(__right_value676=parse_struct_attribute(info)));
        __right_value676 = come_decrement_ref_count2(__right_value676, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        multiple_assign_var8=((struct tuple2$2sTypephcharph*)(__right_value677=parse_variable_name((struct sType*)come_increment_ref_count(base_type_572),(_Bool)1,info)));
        type2_575=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        var_name_576=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer3(__right_value677,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        (void)((char*)(__right_value678=parse_struct_attribute(info)));
        __right_value678 = come_decrement_ref_count2(__right_value678, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        *info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            type2_575->mClass->mStruct&&list$1sNodeph_length(type2_575->mArrayNum)==0) {
                info->struct_initializer=(_Bool)1;
                no_comma_577=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_578=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_577;
                info->struct_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_571,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1404, "struct tuple3$3sTypephcharphsNodeph")),(struct sType*)come_increment_ref_count(type2_575),(char*)come_increment_ref_count(var_name_576),(struct sNode*)come_increment_ref_count(exp_578))));
                if(exp_578) { exp_578 = come_decrement_ref_count2(exp_578, ((struct sNode*)exp_578)->finalize, ((struct sNode*)exp_578)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_582=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_583=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_582;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_571,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1414, "struct tuple3$3sTypephcharphsNodeph")),(struct sType*)come_increment_ref_count(type2_575),(char*)come_increment_ref_count(var_name_576),(struct sNode*)come_increment_ref_count(exp_583))));
                if(exp_583) { exp_583 = come_decrement_ref_count2(exp_583, ((struct sNode*)exp_583)->finalize, ((struct sNode*)exp_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        else {
            list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_571,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1418, "struct tuple3$3sTypephcharphvoidp")),(struct sType*)come_increment_ref_count(type2_575),(char*)come_increment_ref_count(var_name_576),((void*)0))));
        }
        while(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            (void)((char*)(__right_value690=parse_struct_attribute(info)));
            __right_value690 = come_decrement_ref_count2(__right_value690, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            multiple_assign_var9=((struct tuple2$2sTypephcharph*)(__right_value691=parse_variable_name((struct sType*)come_increment_ref_count(base_type_572),(_Bool)0,info)));
            type2_584=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            var_name_585=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            come_call_finalizer3(__right_value691,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            (void)((char*)(__right_value692=parse_struct_attribute(info)));
            __right_value692 = come_decrement_ref_count2(__right_value692, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            *info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type2_584->mClass->mStruct&&list$1sNodeph_length(type2_584->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_586=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_587=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_586;
                    info->struct_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_571,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1441, "struct tuple3$3sTypephcharphsNodeph")),(struct sType*)come_increment_ref_count(type2_584),(char*)come_increment_ref_count(var_name_585),(struct sNode*)come_increment_ref_count(exp_587))));
                    if(exp_587) { exp_587 = come_decrement_ref_count2(exp_587, ((struct sNode*)exp_587)->finalize, ((struct sNode*)exp_587)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    no_comma_588=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_589=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_588;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_571,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1453, "struct tuple3$3sTypephcharphsNodeph")),(struct sType*)come_increment_ref_count(type2_584),(char*)come_increment_ref_count(var_name_585),(struct sNode*)come_increment_ref_count(exp_589))));
                    if(exp_589) { exp_589 = come_decrement_ref_count2(exp_589, ((struct sNode*)exp_589)->finalize, ((struct sNode*)exp_589)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
            }
            else {
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_571,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1457, "struct tuple3$3sTypephcharphvoidp")),(struct sType*)come_increment_ref_count(type2_584),(char*)come_increment_ref_count(var_name_585),((void*)0))));
            }
            come_call_finalizer3(type2_584,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_585 = come_decrement_ref_count2(var_name_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        right_node_590=((void*)0);
        var_name2_591=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1464, "struct sNode");
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value704=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1464, "sStoreNode")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_571),(struct sType*)come_increment_ref_count(base_type_572),(_Bool)1,((void*)0),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStoreNode_finalize;
        _inf_value7->clone=(void*)sStoreNode_clone;
        _inf_value7->compile=(void*)sStoreNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStoreNode_kind;
        node_592=(struct sNode*)come_increment_ref_count(_inf_value7);
        come_call_finalizer3(__right_value704,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_541;
        __result367__ = gComeFunResultObject = __result_obj__ = node_592;
        come_call_finalizer3(multiple_declare_571,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_572,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_573 = come_decrement_ref_count2(name_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_575,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_576 = come_decrement_ref_count2(var_name_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_590) { right_node_590 = come_decrement_ref_count2(right_node_590, ((struct sNode*)right_node_590)->finalize, ((struct sNode*)right_node_590)->_protocol_obj, 0, 0, 0, (void*)0); } 
        var_name2_591 = come_decrement_ref_count2(var_name2_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_592) { node_592 = come_decrement_ref_count2(node_592, ((struct sNode*)node_592)->finalize, ((struct sNode*)node_592)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result367__;
        come_call_finalizer3(multiple_declare_571,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_572,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_573 = come_decrement_ref_count2(name_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_575,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_576 = come_decrement_ref_count2(var_name_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_590) { right_node_590 = come_decrement_ref_count2(right_node_590, ((struct sNode*)right_node_590)->finalize, ((struct sNode*)right_node_590)->_protocol_obj, 0, 0, 0, (void*)0); } 
        var_name2_591 = come_decrement_ref_count2(var_name2_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_592) { node_592 = come_decrement_ref_count2(node_592, ((struct sNode*)node_592)->finalize, ((struct sNode*)node_592)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    attr_define_555) {
        info->p=head;
        info->sline=head_sline;
        (void)((char*)(__right_value713=parse_struct_attribute(info)));
        __right_value713 = come_decrement_ref_count2(__right_value713, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value714=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_594=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        name_595=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        err_596=multiple_assign_var10->v3;
        come_call_finalizer3(__right_value714,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        (void)((char*)(__right_value715=parse_struct_attribute(info)));
        __right_value715 = come_decrement_ref_count2(__right_value715, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        !err_596) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj334=name_595;
        name_595=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        list$1tuple2$2charphsTypephph_add(info->defining_class->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "07var.c", 1487, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_595),(struct sType*)come_increment_ref_count(type_594))));
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1495, "struct sNode");
            _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value724=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1495, "sLoadNode")),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sLoadNode_finalize;
            _inf_value8->clone=(void*)sLoadNode_clone;
            _inf_value8->compile=(void*)sLoadNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sLoadNode_terminated;
            _inf_value8->kind=(void*)sLoadNode_kind;
            self_node_600=(struct sNode*)come_increment_ref_count(_inf_value8);
            come_call_finalizer3(__right_value724,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_node_602=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node_603=(struct sNode*)come_increment_ref_count(store_field(self_node_600,(struct sNode*)come_increment_ref_count(right_node_602),(char*)come_increment_ref_count(name_595),info));
            info->sline_real=sline_real_541;
            __result372__ = gComeFunResultObject = __result_obj__ = node_603;
            if(self_node_600) { self_node_600 = come_decrement_ref_count2(self_node_600, ((struct sNode*)self_node_600)->finalize, ((struct sNode*)self_node_600)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(right_node_602) { right_node_602 = come_decrement_ref_count2(right_node_602, ((struct sNode*)right_node_602)->finalize, ((struct sNode*)right_node_602)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_603) { node_603 = come_decrement_ref_count2(node_603, ((struct sNode*)node_603)->finalize, ((struct sNode*)node_603)->_protocol_obj, 0, 1, 0, (void*)0); } 
            come_call_finalizer3(type_594,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_595 = come_decrement_ref_count2(name_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result372__;
            if(self_node_600) { self_node_600 = come_decrement_ref_count2(self_node_600, ((struct sNode*)self_node_600)->finalize, ((struct sNode*)self_node_600)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(right_node_602) { right_node_602 = come_decrement_ref_count2(right_node_602, ((struct sNode*)right_node_602)->finalize, ((struct sNode*)right_node_602)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_603) { node_603 = come_decrement_ref_count2(node_603, ((struct sNode*)node_603)->finalize, ((struct sNode*)node_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            info->sline_real=sline_real_541;
            __result373__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value731=create_null_node(info)));
            come_call_finalizer3(type_594,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_595 = come_decrement_ref_count2(name_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value731) { __right_value731 = come_decrement_ref_count2(__right_value731, ((struct sNode*)__right_value731)->finalize, ((struct sNode*)__right_value731)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result373__;
        }
        come_call_finalizer3(type_594,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_595 = come_decrement_ref_count2(name_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    !is_type_name_flag_542&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_604=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj350=right_value_604;
        right_value_604=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_604),info));
        if(__dec_obj350) { __dec_obj350 = come_decrement_ref_count2(__dec_obj350, ((struct sNode*)__dec_obj350)->finalize, ((struct sNode*)__dec_obj350)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1520, "struct sNode");
        _inf_obj_value9=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value736=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1520, "sStoreNode")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_604),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStoreNode_finalize;
        _inf_value9->clone=(void*)sStoreNode_clone;
        _inf_value9->compile=(void*)sStoreNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStoreNode_kind;
        node_605=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value736,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_541;
        __result376__ = gComeFunResultObject = __result_obj__ = node_605;
        if(right_value_604) { right_value_604 = come_decrement_ref_count2(right_value_604, ((struct sNode*)right_value_604)->finalize, ((struct sNode*)right_value_604)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_605) { node_605 = come_decrement_ref_count2(node_605, ((struct sNode*)node_605)->finalize, ((struct sNode*)node_605)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result376__;
        if(right_value_604) { right_value_604 = come_decrement_ref_count2(right_value_604, ((struct sNode*)right_value_604)->finalize, ((struct sNode*)right_value_604)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_605) { node_605 = come_decrement_ref_count2(node_605, ((struct sNode*)node_605)->finalize, ((struct sNode*)node_605)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    (_elif_conditional1=(!is_type_name_flag_542||((struct sFun*)(__right_value745=map$2charphsFunphp_operator_load_element(info->funcs,buf))))),    come_call_finalizer3(__right_value745,sFun_finalize, 0, 1, 0, 0, __result_obj__),
    _elif_conditional1) {
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1525, "struct sNode");
        _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value748=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1525, "sLoadNode")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sLoadNode_finalize;
        _inf_value10->clone=(void*)sLoadNode_clone;
        _inf_value10->compile=(void*)sLoadNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sLoadNode_terminated;
        _inf_value10->kind=(void*)sLoadNode_kind;
        node_607=(struct sNode*)come_increment_ref_count(_inf_value10);
        come_call_finalizer3(__right_value748,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj367=node_607;
        node_607=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_607),info));
        if(__dec_obj367) { __dec_obj367 = come_decrement_ref_count2(__dec_obj367, ((struct sNode*)__dec_obj367)->finalize, ((struct sNode*)__dec_obj367)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_541;
        __result379__ = gComeFunResultObject = __result_obj__ = node_607;
        if(node_607) { node_607 = come_decrement_ref_count2(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result379__;
        if(node_607) { node_607 = come_decrement_ref_count2(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    !is_type_name_flag_542) {
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1533, "struct sNode");
        _inf_obj_value11=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value756=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1533, "sLoadNode")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLoadNode_finalize;
        _inf_value11->clone=(void*)sLoadNode_clone;
        _inf_value11->compile=(void*)sLoadNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sLoadNode_terminated;
        _inf_value11->kind=(void*)sLoadNode_kind;
        node_609=(struct sNode*)come_increment_ref_count(_inf_value11);
        come_call_finalizer3(__right_value756,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj372=node_609;
        node_609=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_609),info));
        if(__dec_obj372) { __dec_obj372 = come_decrement_ref_count2(__dec_obj372, ((struct sNode*)__dec_obj372)->finalize, ((struct sNode*)__dec_obj372)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_541;
        __result382__ = gComeFunResultObject = __result_obj__ = node_609;
        if(node_609) { node_609 = come_decrement_ref_count2(node_609, ((struct sNode*)node_609)->finalize, ((struct sNode*)node_609)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result382__;
        if(node_609) { node_609 = come_decrement_ref_count2(node_609, ((struct sNode*)node_609)->finalize, ((struct sNode*)node_609)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj373=word_611;
            word_611=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj373 = come_decrement_ref_count2(__dec_obj373, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj374=word_611;
            word_611=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj374 = come_decrement_ref_count2(__dec_obj374, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        is_type_name_flag_612=is_type_name(word_611,info);
        info->p=head;
        info->sline=head_sline;
        if(        is_type_name_flag_612) {
            (void)((char*)(__right_value764=parse_struct_attribute(info)));
            __right_value764 = come_decrement_ref_count2(__right_value764, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value765=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_613=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_614=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_615=multiple_assign_var11->v3;
            come_call_finalizer3(__right_value765,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            (void)((char*)(__right_value766=parse_struct_attribute(info)));
            __right_value766 = come_decrement_ref_count2(__right_value766, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            !err_615) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==61&&*(info->p+1)!=62&&info->no_assign) {
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1570, "struct sNode");
                _inf_obj_value12=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value768=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1570, "sLoadNode")),(char*)come_increment_ref_count(name_614),info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sLoadNode_finalize;
                _inf_value12->clone=(void*)sLoadNode_clone;
                _inf_value12->compile=(void*)sLoadNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sLoadNode_terminated;
                _inf_value12->kind=(void*)sLoadNode_kind;
                node_616=(struct sNode*)come_increment_ref_count(_inf_value12);
                come_call_finalizer3(__right_value768,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_541;
                __result385__ = gComeFunResultObject = __result_obj__ = node_616;
                if(node_616) { node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_613,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_614 = come_decrement_ref_count2(name_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_611 = come_decrement_ref_count2(word_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result385__;
                if(node_616) { node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_618=((void*)0);
                if(                type_613->mClass->mStruct&&list$1sNodeph_length(type_613->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_619=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __dec_obj379=right_value_618;
                    right_value_618=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj379) { __dec_obj379 = come_decrement_ref_count2(__dec_obj379, ((struct sNode*)__dec_obj379)->finalize, ((struct sNode*)__dec_obj379)->_protocol_obj, 0,0,0, (void*)0); };
                    info->no_comma=no_comma_619;
                    info->struct_initializer=(_Bool)0;
                }
                else {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __dec_obj380=right_value_618;
                    right_value_618=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj380) { __dec_obj380 = come_decrement_ref_count2(__dec_obj380, ((struct sNode*)__dec_obj380)->finalize, ((struct sNode*)__dec_obj380)->_protocol_obj, 0,0,0, (void*)0); };
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                __dec_obj381=right_value_618;
                right_value_618=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_618),info));
                if(__dec_obj381) { __dec_obj381 = come_decrement_ref_count2(__dec_obj381, ((struct sNode*)__dec_obj381)->finalize, ((struct sNode*)__dec_obj381)->_protocol_obj, 0,0,0, (void*)0); };
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1599, "struct sNode");
                _inf_obj_value13=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value777=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1599, "sStoreNode")),(char*)come_increment_ref_count(name_614),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_613),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_618),info))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sStoreNode_finalize;
                _inf_value13->clone=(void*)sStoreNode_clone;
                _inf_value13->compile=(void*)sStoreNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sStoreNode_kind;
                node_620=(struct sNode*)come_increment_ref_count(_inf_value13);
                come_call_finalizer3(__right_value777,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_541;
                __result388__ = gComeFunResultObject = __result_obj__ = node_620;
                if(right_value_618) { right_value_618 = come_decrement_ref_count2(right_value_618, ((struct sNode*)right_value_618)->finalize, ((struct sNode*)right_value_618)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_620) { node_620 = come_decrement_ref_count2(node_620, ((struct sNode*)node_620)->finalize, ((struct sNode*)node_620)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_613,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_614 = come_decrement_ref_count2(name_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_611 = come_decrement_ref_count2(word_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result388__;
                if(right_value_618) { right_value_618 = come_decrement_ref_count2(right_value_618, ((struct sNode*)right_value_618)->finalize, ((struct sNode*)right_value_618)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_620) { node_620 = come_decrement_ref_count2(node_620, ((struct sNode*)node_620)->finalize, ((struct sNode*)node_620)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1604, "struct sNode");
                _inf_obj_value14=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value787=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1604, "sStoreNode")),(char*)come_increment_ref_count(name_614),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_613),(_Bool)1,((void*)0),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sStoreNode_finalize;
                _inf_value14->clone=(void*)sStoreNode_clone;
                _inf_value14->compile=(void*)sStoreNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sStoreNode_kind;
                node_622=(struct sNode*)come_increment_ref_count(_inf_value14);
                come_call_finalizer3(__right_value787,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_541;
                __result391__ = gComeFunResultObject = __result_obj__ = node_622;
                if(node_622) { node_622 = come_decrement_ref_count2(node_622, ((struct sNode*)node_622)->finalize, ((struct sNode*)node_622)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(type_613,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_614 = come_decrement_ref_count2(name_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                word_611 = come_decrement_ref_count2(word_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result391__;
                if(node_622) { node_622 = come_decrement_ref_count2(node_622, ((struct sNode*)node_622)->finalize, ((struct sNode*)node_622)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            come_call_finalizer3(type_613,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_614 = come_decrement_ref_count2(name_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        word_611 = come_decrement_ref_count2(word_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    exit(2);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj292;
char* __dec_obj293;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj292=self->v1;
            come_call_finalizer3(__dec_obj292,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj293=self->v2;
            __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj294;
char* __dec_obj295;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj294=self->v1;
            come_call_finalizer3(__dec_obj294,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj295=self->v2;
            __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sNewChannel_finalize(struct sNewChannel* self){
char* __dec_obj310;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj310=self->sname;
            __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self){
void* __result_obj__=(void*)0;
struct sNewChannel* __result359__;
void* __right_value670 = (void*)0;
struct sNewChannel* result_570;
void* __right_value671 = (void*)0;
char* __dec_obj311;
struct sNewChannel* __result360__;
    if(    self==(void*)0) {
        __result359__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    result_570=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "sNewChannel"));
    if(    self!=((void*)0)) {
        result_570->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj311=result_570->sname;
        result_570->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_570->sline_real=self->sline_real;
    }
    __result360__ = gComeFunResultObject = __result_obj__ = result_570;
    come_call_finalizer3(result_570,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value680 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_579;
struct tuple3$3sTypephcharphsNodeph* __dec_obj312;
void* __right_value681 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_580;
struct tuple3$3sTypephcharphsNodeph* __dec_obj313;
void* __right_value682 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_581;
struct tuple3$3sTypephcharphsNodeph* __dec_obj314;
struct list$1tuple3$3sTypephcharphsNodephph* __result362__;
    if(    self->len==0) {
        litem_579=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value680=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1142, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_579->prev=((void*)0);
        litem_579->next=((void*)0);
        __dec_obj312=litem_579->item;
        litem_579->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj312,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_579;
        self->head=litem_579;
    }
    else if(    self->len==1) {
        litem_580=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value681=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1152, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_580->prev=self->head;
        litem_580->next=((void*)0);
        __dec_obj313=litem_580->item;
        litem_580->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj313,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_580;
        self->head->next=litem_580;
    }
    else {
        litem_581=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value682=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "/usr/local/include/comelang.h", 1162, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_581->prev=self->tail;
        litem_581->next=((void*)0);
        __dec_obj314=litem_581->item;
        litem_581->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj314,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_581;
        self->tail=litem_581;
    }
    self->len++;
    __result362__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj315;
char* __dec_obj316;
struct sNode* __dec_obj317;
struct tuple3$3sTypephcharphsNodeph* __result363__;
    __dec_obj315=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj315,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj316=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj317=self->v3;
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
    __result363__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj318;
char* __dec_obj319;
struct tuple3$3sTypephcharphvoidp* __result364__;
    __dec_obj318=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj318,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj319=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result364__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
struct sType* __dec_obj320;
char* __dec_obj321;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj320=self->v1;
            come_call_finalizer3(__dec_obj320,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj321=self->v2;
            __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value717 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_597;
struct tuple2$2charphsTypeph* __dec_obj335;
void* __right_value718 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_598;
struct tuple2$2charphsTypeph* __dec_obj338;
void* __right_value719 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_599;
struct tuple2$2charphsTypeph* __dec_obj341;
struct list$1tuple2$2charphsTypephph* __result368__;
    if(    self->len==0) {
        litem_597=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value717=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1072, "list_item$1tuple2$2charphsTypephph"))));
        litem_597->prev=((void*)0);
        litem_597->next=((void*)0);
        __dec_obj335=litem_597->item;
        litem_597->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj335,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_597;
        self->head=litem_597;
    }
    else if(    self->len==1) {
        litem_598=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value718=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1082, "list_item$1tuple2$2charphsTypephph"))));
        litem_598->prev=self->head;
        litem_598->next=((void*)0);
        __dec_obj338=litem_598->item;
        litem_598->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj338,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_598;
        self->head->next=litem_598;
    }
    else {
        litem_599=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value719=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1092, "list_item$1tuple2$2charphsTypephph"))));
        litem_599->prev=self->tail;
        litem_599->next=((void*)0);
        __dec_obj341=litem_599->item;
        litem_599->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj341,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_599;
        self->tail=litem_599;
    }
    self->len++;
    __result368__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj342;
struct sType* __dec_obj343;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj342=self->v1;
            __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj343=self->v2;
            come_call_finalizer3(__dec_obj343,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj344;
struct sType* __dec_obj345;
struct tuple2$2charphsTypeph* __result369__;
    __dec_obj344=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj345=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj345,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result369__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static void sLoadNode_finalize(struct sLoadNode* self){
char* __dec_obj375;
char* __dec_obj376;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj375=self->sname;
            __dec_obj375 = come_decrement_ref_count2(__dec_obj375, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj376=self->name;
            __dec_obj376 = come_decrement_ref_count2(__dec_obj376, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__=(void*)0;
struct sLoadNode* __result383__;
void* __right_value769 = (void*)0;
struct sLoadNode* result_617;
void* __right_value770 = (void*)0;
char* __dec_obj377;
void* __right_value771 = (void*)0;
char* __dec_obj378;
struct sLoadNode* __result384__;
    if(    self==(void*)0) {
        __result383__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result383__;
    }
    result_617=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "sLoadNode"));
    if(    self!=((void*)0)) {
        result_617->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj377=result_617->sname;
        result_617->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj377 = come_decrement_ref_count2(__dec_obj377, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_617->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj378=result_617->name;
        result_617->name=(char*)come_increment_ref_count(string_clone(self->name));
        __dec_obj378 = come_decrement_ref_count2(__dec_obj378, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result384__ = gComeFunResultObject = __result_obj__ = result_617;
    come_call_finalizer3(result_617,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result384__;
}

static void sStoreNode_finalize(struct sStoreNode* self){
char* __dec_obj394;
char* __dec_obj395;
struct sType* __dec_obj396;
struct sNode* __dec_obj397;
struct list$1charph* __dec_obj398;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj399;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj394=self->sname;
            __dec_obj394 = come_decrement_ref_count2(__dec_obj394, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj395=self->name;
            __dec_obj395 = come_decrement_ref_count2(__dec_obj395, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj396=self->type;
            come_call_finalizer3(__dec_obj396,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        if(        self->right_value==gComeFunResultObject) {
            __dec_obj397=self->right_value;
            if(__dec_obj397) { __dec_obj397 = come_decrement_ref_count2(__dec_obj397, ((struct sNode*)__dec_obj397)->finalize, ((struct sNode*)__dec_obj397)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        if(        self->multiple_assign==gComeFunResultObject) {
            __dec_obj398=self->multiple_assign;
            come_call_finalizer3(__dec_obj398,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        if(        self->multiple_declare==gComeFunResultObject) {
            __dec_obj399=self->multiple_declare;
            come_call_finalizer3(__dec_obj399,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__=(void*)0;
struct sStoreNode* __result389__;
void* __right_value788 = (void*)0;
struct sStoreNode* result_623;
void* __right_value789 = (void*)0;
char* __dec_obj400;
void* __right_value790 = (void*)0;
char* __dec_obj401;
void* __right_value791 = (void*)0;
struct sType* __dec_obj402;
void* __right_value792 = (void*)0;
struct sNode* __dec_obj403;
void* __right_value793 = (void*)0;
struct list$1charph* __dec_obj404;
void* __right_value794 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj405;
struct sStoreNode* __result390__;
    if(    self==(void*)0) {
        __result389__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result389__;
    }
    result_623=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "sStoreNode"));
    if(    self!=((void*)0)) {
        result_623->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj400=result_623->sname;
        result_623->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj400 = come_decrement_ref_count2(__dec_obj400, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_623->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj401=result_623->name;
        result_623->name=(char*)come_increment_ref_count(string_clone(self->name));
        __dec_obj401 = come_decrement_ref_count2(__dec_obj401, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_623->alloc=self->alloc;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj402=result_623->type;
        result_623->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj402,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj403=result_623->right_value;
        result_623->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        if(__dec_obj403) { __dec_obj403 = come_decrement_ref_count2(__dec_obj403, ((struct sNode*)__dec_obj403)->finalize, ((struct sNode*)__dec_obj403)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        __dec_obj404=result_623->multiple_assign;
        result_623->multiple_assign=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->multiple_assign));
        come_call_finalizer3(__dec_obj404,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj405=result_623->multiple_declare;
        result_623->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare));
        come_call_finalizer3(__dec_obj405,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result390__ = gComeFunResultObject = __result_obj__ = result_623;
    come_call_finalizer3(result_623,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result390__;
}

struct sNode* expression_node_v95(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* node_624;
void* __right_value796 = (void*)0;
struct sNode* exp_625;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct sNode* _inf_value15;
struct sReadChannelNode* _inf_obj_value15;
void* __right_value802 = (void*)0;
struct sNode* __result394__;
void* __right_value803 = (void*)0;
struct sNode* __dec_obj410;
struct sNode* __result395__;
node_624 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp_625=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1630, "struct sNode");
        _inf_obj_value15=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value798=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1630, "sReadChannelNode")),(struct sNode*)come_increment_ref_count(exp_625),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sReadChannelNode_finalize;
        _inf_value15->clone=(void*)sReadChannelNode_clone;
        _inf_value15->compile=(void*)sReadChannelNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sReadChannelNode_kind;
        __result394__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value802=_inf_value15));
        if(exp_625) { exp_625 = come_decrement_ref_count2(exp_625, ((struct sNode*)exp_625)->finalize, ((struct sNode*)exp_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node_624) { node_624 = come_decrement_ref_count2(node_624, ((struct sNode*)node_624)->finalize, ((struct sNode*)node_624)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value798,sReadChannelNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value802) { __right_value802 = come_decrement_ref_count2(__right_value802, ((struct sNode*)__right_value802)->finalize, ((struct sNode*)__right_value802)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result394__;
        if(exp_625) { exp_625 = come_decrement_ref_count2(exp_625, ((struct sNode*)exp_625)->finalize, ((struct sNode*)exp_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        __dec_obj410=node_624;
        node_624=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        if(__dec_obj410) { __dec_obj410 = come_decrement_ref_count2(__dec_obj410, ((struct sNode*)__dec_obj410)->finalize, ((struct sNode*)__dec_obj410)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result395__ = gComeFunResultObject = __result_obj__ = node_624;
    if(node_624) { node_624 = come_decrement_ref_count2(node_624, ((struct sNode*)node_624)->finalize, ((struct sNode*)node_624)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result395__;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self){
char* __dec_obj406;
struct sNode* __dec_obj407;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj406=self->sname;
            __dec_obj406 = come_decrement_ref_count2(__dec_obj406, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj407=self->exp;
            if(__dec_obj407) { __dec_obj407 = come_decrement_ref_count2(__dec_obj407, ((struct sNode*)__dec_obj407)->finalize, ((struct sNode*)__dec_obj407)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
void* __result_obj__=(void*)0;
struct sReadChannelNode* __result392__;
void* __right_value799 = (void*)0;
struct sReadChannelNode* result_626;
void* __right_value800 = (void*)0;
char* __dec_obj408;
void* __right_value801 = (void*)0;
struct sNode* __dec_obj409;
struct sReadChannelNode* __result393__;
    if(    self==(void*)0) {
        __result392__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result392__;
    }
    result_626=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "sReadChannelNode"));
    if(    self!=((void*)0)) {
        result_626->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj408=result_626->sname;
        result_626->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj408 = come_decrement_ref_count2(__dec_obj408, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_626->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj409=result_626->exp;
        result_626->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj409) { __dec_obj409 = come_decrement_ref_count2(__dec_obj409, ((struct sNode*)__dec_obj409)->finalize, ((struct sNode*)__dec_obj409)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result393__ = gComeFunResultObject = __result_obj__ = result_626;
    come_call_finalizer3(result_626,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result393__;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value804 = (void*)0;
struct sNode* right_value_627;
void* __right_value805 = (void*)0;
struct sNode* __dec_obj411;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct sNode* _inf_value16;
struct sWriteChannelNode* _inf_obj_value16;
void* __right_value812 = (void*)0;
struct sNode* __result398__;
void* __right_value813 = (void*)0;
struct sNode* __result399__;
    if(    !node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_627=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj411=right_value_627;
        right_value_627=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_627),info));
        if(__dec_obj411) { __dec_obj411 = come_decrement_ref_count2(__dec_obj411, ((struct sNode*)__dec_obj411)->finalize, ((struct sNode*)__dec_obj411)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1653, "struct sNode");
        _inf_obj_value16=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value807=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1653, "sWriteChannelNode")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value_627),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value16->clone=(void*)sWriteChannelNode_clone;
        _inf_value16->compile=(void*)sWriteChannelNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sWriteChannelNode_kind;
        __result398__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value812=_inf_value16));
        if(right_value_627) { right_value_627 = come_decrement_ref_count2(right_value_627, ((struct sNode*)right_value_627)->finalize, ((struct sNode*)right_value_627)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value807,sWriteChannelNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value812) { __right_value812 = come_decrement_ref_count2(__right_value812, ((struct sNode*)__right_value812)->finalize, ((struct sNode*)__right_value812)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result398__;
        if(right_value_627) { right_value_627 = come_decrement_ref_count2(right_value_627, ((struct sNode*)right_value_627)->finalize, ((struct sNode*)right_value_627)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result399__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value813=post_position_operator((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(__right_value813) { __right_value813 = come_decrement_ref_count2(__right_value813, ((struct sNode*)__right_value813)->finalize, ((struct sNode*)__right_value813)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result399__;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self){
char* __dec_obj412;
struct sNode* __dec_obj413;
struct sNode* __dec_obj414;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj412=self->sname;
            __dec_obj412 = come_decrement_ref_count2(__dec_obj412, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj413=self->exp;
            if(__dec_obj413) { __dec_obj413 = come_decrement_ref_count2(__dec_obj413, ((struct sNode*)__dec_obj413)->finalize, ((struct sNode*)__dec_obj413)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        if(        self->right_value==gComeFunResultObject) {
            __dec_obj414=self->right_value;
            if(__dec_obj414) { __dec_obj414 = come_decrement_ref_count2(__dec_obj414, ((struct sNode*)__dec_obj414)->finalize, ((struct sNode*)__dec_obj414)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
void* __result_obj__=(void*)0;
struct sWriteChannelNode* __result396__;
void* __right_value808 = (void*)0;
struct sWriteChannelNode* result_628;
void* __right_value809 = (void*)0;
char* __dec_obj415;
void* __right_value810 = (void*)0;
struct sNode* __dec_obj416;
void* __right_value811 = (void*)0;
struct sNode* __dec_obj417;
struct sWriteChannelNode* __result397__;
    if(    self==(void*)0) {
        __result396__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result396__;
    }
    result_628=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "sWriteChannelNode"));
    if(    self!=((void*)0)) {
        result_628->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj415=result_628->sname;
        result_628->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj415 = come_decrement_ref_count2(__dec_obj415, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_628->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj416=result_628->exp;
        result_628->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj416) { __dec_obj416 = come_decrement_ref_count2(__dec_obj416, ((struct sNode*)__dec_obj416)->finalize, ((struct sNode*)__dec_obj416)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj417=result_628->right_value;
        result_628->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        if(__dec_obj417) { __dec_obj417 = come_decrement_ref_count2(__dec_obj417, ((struct sNode*)__dec_obj417)->finalize, ((struct sNode*)__dec_obj417)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result397__ = gComeFunResultObject = __result_obj__ = result_628;
    come_call_finalizer3(result_628,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result397__;
}

