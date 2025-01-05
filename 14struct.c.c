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
struct sStructNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sStructNobodyNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sNothingNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sClassNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
    struct list$1sNodeph* mMethods;
};

struct list_item$1sClassp
{
    struct sClass* item;
    struct list_item$1sClassp* prev;
    struct list_item$1sClassp* next;
};

struct list$1sClassp
{
    struct list_item$1sClassp* head;
    struct list_item$1sClassp* tail;
    int len;
    struct list_item$1sClassp* it;
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
char* get_none_generics_name(char* class_name);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
void output_struct(struct sClass* klass, struct sInfo* info);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static struct buffer* map$2charphbufferphp_operator_load_element(struct map$2charphbufferph* self, char* key);
static struct map$2charphbufferph* map$2charphbufferph_insert(struct map$2charphbufferph* self, char* key, struct buffer* item);
static void map$2charphbufferph_rehash(struct map$2charphbufferph* self);
static char* map$2charphbufferph_begin(struct map$2charphbufferph* self);
static _Bool map$2charphbufferph_end(struct map$2charphbufferph* self);
static char* map$2charphbufferph_next(struct map$2charphbufferph* self);
static struct buffer* map$2charphbufferph_at(struct map$2charphbufferph* self, char* key, struct buffer* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
void output_struct_come_header(struct sClass* klass, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
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
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNode_terminated(struct sStructNode* self);
char* sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);
char* sStructNobodyNode_kind(struct sStructNobodyNode* self);
_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
struct sNode* create_nothing_node(struct sInfo* info);
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, struct sInfo* info);
_Bool sClassNode_terminated(struct sClassNode* self);
char* sClassNode_kind(struct sClassNode* self);
_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
struct sNode* parse_struct(char* type_name, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static void sNothingNode_finalize(struct sNothingNode* self);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
static void sStructNode_finalize(struct sStructNode* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self);
static void list$1sClasspp_finalize(struct list$1sClassp* self);
static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self);
static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item);
static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self);
static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item);
static struct sClass* list$1sClassp_begin(struct list$1sClassp* self);
static _Bool list$1sClassp_end(struct list$1sClassp* self);
static struct sClass* list$1sClassp_next(struct list$1sClassp* self);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
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
static void sClassNode_finalize(struct sClassNode* self);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
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
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3603, "buffer"))));
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
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3610, "buffer"))));
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
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3619, "buffer"))));
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
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3626, "buffer"))));
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
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3633, "buffer"))));
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
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3640, "buffer"))));
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
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 3647, "buffer"))));
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
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 3975, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 3980, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 3985, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 3990, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 3995, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4028, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "/usr/local/include/comelang.h", 4030, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
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
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4035, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "/usr/local/include/comelang.h", 4037, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
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
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4042, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "/usr/local/include/comelang.h", 4044, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
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
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4049, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "/usr/local/include/comelang.h", 4051, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
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
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4056, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "/usr/local/include/comelang.h", 4058, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
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
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4063, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "/usr/local/include/comelang.h", 4065, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
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
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "/usr/local/include/comelang.h", 4070, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "/usr/local/include/comelang.h", 4072, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
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
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "/usr/local/include/comelang.h", 4077, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 4082, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "/usr/local/include/comelang.h", 4087, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "/usr/local/include/comelang.h", 4092, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "/usr/local/include/comelang.h", 4097, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "/usr/local/include/comelang.h", 4102, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "/usr/local/include/comelang.h", 4107, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "/usr/local/include/comelang.h", 4112, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "/usr/local/include/comelang.h", 4117, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "/usr/local/include/comelang.h", 4122, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "/usr/local/include/comelang.h", 4127, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "/usr/local/include/comelang.h", 4132, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "/usr/local/include/comelang.h", 4137, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "/usr/local/include/comelang.h", 4142, "vector$1double")),len,self)));
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
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1char"))));
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
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1charp"))));
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
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1short"))));
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
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1int"))));
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
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1long"))));
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
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1float"))));
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
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1double"))));
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
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/comelang.h", 1904, "char")));
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
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "/usr/local/include/comelang.h", 1904, "char*")));
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
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "/usr/local/include/comelang.h", 1904, "short")));
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
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "/usr/local/include/comelang.h", 1904, "int")));
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
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "/usr/local/include/comelang.h", 1904, "long")));
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
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "/usr/local/include/comelang.h", 1904, "float")));
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
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "/usr/local/include/comelang.h", 1904, "double")));
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
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1charph"))));
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

char* get_none_generics_name(char* class_name){
void* __result_obj__=(void*)0;
char* p_247;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
char* __result198__;
void* __right_value247 = (void*)0;
char* __result199__;
    p_247=class_name;
    while(*p_247) {
        if(        *p_247==36) {
            __result198__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value246=charp_substring(((char*)(__right_value245=__builtin_string(class_name))),0,p_247-class_name)));
            /* U11 */__right_value245 = come_decrement_ref_count2(__right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            /* U11 */__right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result198__;
        }
        else {
            p_247++;
        }
    }
    __result199__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value247=__builtin_string(class_name)));
    /* U11 */__right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct buffer* buf_248;
struct sClass* klass_249;
char* class_name_250;
int i_251;
void* __right_value250 = (void*)0;
struct sType* type_252;
void* __right_value251 = (void*)0;
char* type_name_266;
int i_267;
void* __right_value252 = (void*)0;
char* __result202__;
    buf_248=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "buffer"))));
    klass_249=generics_type->mClass;
    class_name_250=klass_249->mName;
    buffer_append_str(buf_248,class_name_250);
    if(    list$1sTypeph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_248,36);
        buffer_append_char(buf_248,list$1sTypeph_length(generics_type->mGenericsTypes)+48);
        for(        i_251=0;        i_251<list$1sTypeph_length(generics_type->mGenericsTypes);        i_251++        ){
            type_252=((struct sType*)come_null_check(((struct sType*)(__right_value250=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_251))), "14struct.c", 33, 0));
            /*g*/come_call_finalizer3(__right_value250,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_name_266=(char*)come_increment_ref_count(create_generics_name(type_252,info));
            buffer_append_str(buf_248,type_name_266);
            for(            i_267=0;            i_267<type_252->mPointerNum;            i_267++            ){
                buffer_append_char(buf_248,112);
            }
            if(            type_252->mHeap) {
                buffer_append_str(buf_248,"h");
            }
            /* U13 */type_name_266 = come_decrement_ref_count2(type_name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result202__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value252=buffer_to_string(buf_248)));
    /*i*/come_call_finalizer3(buf_248,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U11 */__right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result202__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_253;
int i_254;
struct sType* __result200__;
struct sType* default_value_255;
struct sType* __result201__;
default_value_255 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_253=self->head;
    i_254=0;
    while(it_253!=((void*)0)) {
        if(        position==i_254) {
            __result200__ = gComeFunResultObject = __result_obj__ = it_253->item;
            gComeFunResultObject = (void*)0;
            return __result200__;
        }
        it_253=it_253->next;
        i_254++;
    }
    memset(&default_value_255,0,sizeof(struct sType*));
    __result201__ = gComeFunResultObject = __result_obj__ = default_value_255;
    /*i*/come_call_finalizer3(default_value_255,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result201__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj32;
struct tuple1$1sTypeph* __dec_obj34;
char* __dec_obj36;
struct list$1sTypeph* __dec_obj37;
struct list$1sNodeph* __dec_obj39;
struct list$1sTypeph* __dec_obj41;
struct list$1charph* __dec_obj42;
struct tuple1$1sTypeph* __dec_obj43;
struct sNode* __dec_obj45;
struct tuple1$1sTypeph* __dec_obj46;
struct sNode* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj32=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj32,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj34=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj34,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj36=self->mGenericsName;
            /*G*/ __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj37=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj37,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj39=self->mArrayNum;
            come_call_finalizer3(__dec_obj39,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj41=self->mParamTypes;
            come_call_finalizer3(__dec_obj41,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj42=self->mParamNames;
            come_call_finalizer3(__dec_obj42,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj43=self->mResultType;
            come_call_finalizer3(__dec_obj43,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj45=self->mAlignas;
            /* U1 */ if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj46=self->mChannelType;
            come_call_finalizer3(__dec_obj46,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj48=self->mSizeNum;
            /* U1 */ if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj49=self->mOriginalTypeName;
            /*G*/ __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj50=self->mAsmName;
            /*G*/ __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj51=self->mTupleName;
            /*G*/ __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        /*i*/come_call_finalizer3(prev_it_257,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj38;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj38=self->item;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
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
        /*i*/come_call_finalizer3(prev_it_259,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_260;
struct list_item$1sNodeph* prev_it_261;
    it_260=self->head;
    while(it_260!=((void*)0)) {
        prev_it_261=it_260;
        it_260=it_260->next;
        /*i*/come_call_finalizer3(prev_it_261,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj40;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj40=self->item;
            /* U1 */ if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
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
        /*i*/come_call_finalizer3(prev_it_263,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_264;
struct list_item$1charph* prev_it_265;
    it_264=self->head;
    while(it_264!=((void*)0)) {
        prev_it_265=it_264;
        it_264=it_264->next;
        /*i*/come_call_finalizer3(prev_it_265,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj47;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj47=self->v1;
            come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void output_struct(struct sClass* klass, struct sInfo* info){
char* name_268;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct buffer* buf_269;
_Bool existance_generics_270;
struct list$1tuple2$2charphsTypephph* o2_saved_271;
struct tuple2$2charphsTypeph* it_274;
struct tuple2$2charphsTypeph* multiple_assign_var1 = (void*)0;
char* name_277=0;
struct sType* type_278=0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
_Bool _if_conditional1;
    if(    info->no_output_come_code) {
        return;
    }
    if(    list$1tuple2$2charphsTypephph_length(klass->mFields)==0) {
        return;
    }
    name_268=(char*)come_increment_ref_count(klass->mName);
    buf_269=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 62, "buffer"))));
    buffer_append_format(buf_269,"struct %s\n{\n",klass->mName);
    existance_generics_270=(_Bool)0;
    for(    o2_saved_271=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_274=list$1tuple2$2charphsTypephph_begin((o2_saved_271));    !list$1tuple2$2charphsTypephph_end((o2_saved_271));    it_274=list$1tuple2$2charphsTypephph_next((o2_saved_271))    ){
        multiple_assign_var1=it_274;
        name_277=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_278=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        is_contained_method_generics_types(type_278,info)||is_contained_generics_types(type_278,info)) {
            existance_generics_270=(_Bool)1;
        }
        type_278->mStatic=(_Bool)0;
        buffer_append_str(buf_269,"    ");
        buffer_append_str(buf_269,((char*)(__right_value255=make_define_var(type_278,name_277,(_Bool)0,info))));
        /* U11 */__right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_269,";\n");
        /* U13 */name_277 = come_decrement_ref_count2(name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_278,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_271,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_269,"};\n");
    if(    (_if_conditional1=(((struct buffer*)(__right_value256=map$2charphbufferphp_operator_load_element(info->struct_definition,name_268)))==((void*)0)&&!existance_generics_270)),    /*f*/come_call_finalizer3(__right_value256,buffer_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional1) {
        map$2charphbufferph_insert(info->struct_definition,(char*)come_increment_ref_count(name_268),(struct buffer*)come_increment_ref_count(buf_269));
    }
    /* U13 */name_268 = come_decrement_ref_count2(name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_269,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_272;
struct tuple2$2charphsTypeph* __result203__;
struct tuple2$2charphsTypeph* __result204__;
struct tuple2$2charphsTypeph* result_273;
struct tuple2$2charphsTypeph* __result205__;
result_272 = (void*)0;
result_273 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_272,0,sizeof(struct tuple2$2charphsTypeph*));
        __result203__ = gComeFunResultObject = __result_obj__ = result_272;
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    self->it=self->head;
    if(    self->it) {
        __result204__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result204__;
    }
    memset(&result_273,0,sizeof(struct tuple2$2charphsTypeph*));
    __result205__ = gComeFunResultObject = __result_obj__ = result_273;
    gComeFunResultObject = (void*)0;
    return __result205__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_275;
struct tuple2$2charphsTypeph* __result206__;
struct tuple2$2charphsTypeph* __result207__;
struct tuple2$2charphsTypeph* result_276;
struct tuple2$2charphsTypeph* __result208__;
result_275 = (void*)0;
result_276 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_275,0,sizeof(struct tuple2$2charphsTypeph*));
        __result206__ = gComeFunResultObject = __result_obj__ = result_275;
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result207__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    memset(&result_276,0,sizeof(struct tuple2$2charphsTypeph*));
    __result208__ = gComeFunResultObject = __result_obj__ = result_276;
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_279;
struct list_item$1tuple2$2charphsTypephph* prev_it_280;
    it_279=self->head;
    while(it_279!=((void*)0)) {
        prev_it_280=it_279;
        it_279=it_279->next;
        /*i*/come_call_finalizer3(prev_it_280,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj52;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj52=self->item;
            come_call_finalizer3(__dec_obj52,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct buffer* map$2charphbufferphp_operator_load_element(struct map$2charphbufferph* self, char* key){
void* __result_obj__=(void*)0;
struct buffer* default_value_281;
unsigned int hash_282;
unsigned int it_283;
struct buffer* __result209__;
struct buffer* __result210__;
struct buffer* __result211__;
struct buffer* __result212__;
default_value_281 = (void*)0;
    memset(&default_value_281,0,sizeof(struct buffer*));
    hash_282=charp_get_hash_key(((char*)key))%self->size;
    it_283=hash_282;
    while((_Bool)1) {
        if(        self->item_existance[it_283]) {
            if(            charp_equals(self->keys[it_283],key)) {
                __result209__ = gComeFunResultObject = __result_obj__ = self->items[it_283];
                /*i*/come_call_finalizer3(default_value_281,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result209__;
            }
            it_283++;
            if(            it_283>=self->size) {
                it_283=0;
            }
            else if(            it_283==hash_282) {
                __result210__ = gComeFunResultObject = __result_obj__ = default_value_281;
                /*i*/come_call_finalizer3(default_value_281,buffer_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result210__;
            }
        }
        else {
            __result211__ = gComeFunResultObject = __result_obj__ = default_value_281;
            /*i*/come_call_finalizer3(default_value_281,buffer_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result211__;
        }
    }
    __result212__ = gComeFunResultObject = __result_obj__ = default_value_281;
    /*i*/come_call_finalizer3(default_value_281,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static struct map$2charphbufferph* map$2charphbufferph_insert(struct map$2charphbufferph* self, char* key, struct buffer* item){
void* __result_obj__=(void*)0;
unsigned int hash_301;
unsigned int it_302;
_Bool same_key_exist_319;
char* it2_322;
struct map$2charphbufferph* __result233__;
    if(    self->len*10>=self->size) {
        map$2charphbufferph_rehash(self);
    }
    hash_301=charp_get_hash_key(key)%self->size;
    it_302=hash_301;
    while((_Bool)1) {
        if(        self->item_existance[it_302]) {
            if(            charp_equals(self->keys[it_302],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_302]);
                    /* U13 */self->keys[it_302] = come_decrement_ref_count2(self->keys[it_302], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_302]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_302]);
                    self->keys[it_302]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_302],buffer_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_302]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_302]=item;
                }
                break;
            }
            it_302++;
            if(            it_302>=self->size) {
                it_302=0;
            }
            else if(            it_302==hash_301) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_302]=(_Bool)1;
            if(            1) {
                self->keys[it_302]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_302]=key;
            }
            if(            1) {
                self->items[it_302]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it_302]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_319=(_Bool)0;
    for(    it2_322=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_322=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_322,key)) {
            same_key_exist_319=(_Bool)1;
        }
    }
    if(    !same_key_exist_319) {
        list$1charp_push_back(self->key_list,key);
    }
    __result233__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static void map$2charphbufferph_rehash(struct map$2charphbufferph* self){
int size_284;
void* __right_value257 = (void*)0;
char** keys_285;
void* __right_value258 = (void*)0;
struct buffer** items_286;
void* __right_value259 = (void*)0;
_Bool* item_existance_287;
int len_288;
char* it_291;
struct buffer* default_value_294;
struct buffer* it2_295;
unsigned int hash_298;
int n_299;
struct buffer* default_value_300;
default_value_294 = (void*)0;
default_value_300 = (void*)0;
    size_284=self->size*10;
    keys_285=(char**)come_increment_ref_count(((char**)(__right_value257=(char**)come_calloc(1, sizeof(char*)*(1*(size_284)), "/usr/local/include/comelang.h", 2515, "char*%"))));
    items_286=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value258=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(size_284)), "/usr/local/include/comelang.h", 2516, "buffer*%"))));
    item_existance_287=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value259=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_284)), "/usr/local/include/comelang.h", 2517, "bool"))));
    len_288=0;
    for(    it_291=map$2charphbufferph_begin(self);    !map$2charphbufferph_end(self);    it_291=map$2charphbufferph_next(self)    ){
        memset(&default_value_294,0,sizeof(struct buffer*));
        it2_295=map$2charphbufferph_at(self,it_291,default_value_294);
        hash_298=charp_get_hash_key(it_291)%size_284;
        n_299=hash_298;
        while((_Bool)1) {
            if(            item_existance_287[n_299]) {
                n_299++;
                if(                n_299>=size_284) {
                    n_299=0;
                }
                else if(                n_299==hash_298) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_287[n_299]=(_Bool)1;
                keys_285[n_299]=it_291;
                items_286[n_299]=map$2charphbufferph_at(self,it_291,default_value_300);
                len_288++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_285;
    self->items=items_286;
    self->item_existance=item_existance_287;
    self->size=size_284;
    self->len=len_288;
}

static char* map$2charphbufferph_begin(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_289;
char* __result213__;
char* __result214__;
char* result_290;
char* __result215__;
result_289 = (void*)0;
result_290 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_289,0,sizeof(char*));
        __result213__ = gComeFunResultObject = __result_obj__ = result_289;
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result214__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    memset(&result_290,0,sizeof(char*));
    __result215__ = gComeFunResultObject = __result_obj__ = result_290;
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static _Bool map$2charphbufferph_end(struct map$2charphbufferph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphbufferph_next(struct map$2charphbufferph* self){
void* __result_obj__=(void*)0;
char* result_292;
char* __result216__;
char* __result217__;
char* result_293;
char* __result218__;
result_292 = (void*)0;
result_293 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_292,0,sizeof(char*));
        __result216__ = gComeFunResultObject = __result_obj__ = result_292;
        gComeFunResultObject = (void*)0;
        return __result216__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result217__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    memset(&result_293,0,sizeof(char*));
    __result218__ = gComeFunResultObject = __result_obj__ = result_293;
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct buffer* map$2charphbufferph_at(struct map$2charphbufferph* self, char* key, struct buffer* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_296;
unsigned int it_297;
struct buffer* __result219__;
struct buffer* __result220__;
struct buffer* __result221__;
struct buffer* __result222__;
    hash_296=charp_get_hash_key(((char*)key))%self->size;
    it_297=hash_296;
    while((_Bool)1) {
        if(        self->item_existance[it_297]) {
            if(            charp_equals(self->keys[it_297],key)) {
                __result219__ = gComeFunResultObject = __result_obj__ = self->items[it_297];
                /*i*/come_call_finalizer3(default_value,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result219__;
            }
            it_297++;
            if(            it_297>=self->size) {
                it_297=0;
            }
            else if(            it_297==hash_296) {
                __result220__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result220__;
            }
        }
        else {
            __result221__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result221__;
        }
    }
    __result222__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_303;
struct list_item$1charp* it_304;
struct list$1charp* __result226__;
    it2_303=0;
    it_304=self->head;
    while(it_304!=((void*)0)) {
        if(        charp_equals(it_304->item,item)) {
            list$1charp_delete(self,it2_303,it2_303+1);
            break;
        }
        it2_303++;
        it_304=it_304->next;
    }
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_305;
struct list$1charp* __result223__;
struct list_item$1charp* it_308;
int i_309;
struct list_item$1charp* prev_it_310;
struct list_item$1charp* it_311;
int i_312;
struct list_item$1charp* prev_it_313;
struct list_item$1charp* it_314;
struct list_item$1charp* head_prev_it_315;
struct list_item$1charp* tail_it_316;
int i_317;
struct list_item$1charp* prev_it_318;
struct list$1charp* __result225__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_305=tail;
        tail=head;
        head=tmp_305;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result223__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_308=self->head;
        i_309=0;
        while(it_308!=((void*)0)) {
            if(            i_309<tail) {
                prev_it_310=it_308;
                it_308=it_308->next;
                i_309++;
                /*i*/come_call_finalizer3(prev_it_310,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_309==tail) {
                self->head=it_308;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_308=it_308->next;
                i_309++;
            }
        }
    }
    else if(    tail==self->len) {
        it_311=self->head;
        i_312=0;
        while(it_311!=((void*)0)) {
            if(            i_312==head) {
                self->tail=it_311->prev;
                self->tail->next=((void*)0);
            }
            if(            i_312>=head) {
                prev_it_313=it_311;
                it_311=it_311->next;
                i_312++;
                /*i*/come_call_finalizer3(prev_it_313,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_311=it_311->next;
                i_312++;
            }
        }
    }
    else {
        it_314=self->head;
        head_prev_it_315=((void*)0);
        tail_it_316=((void*)0);
        i_317=0;
        while(it_314!=((void*)0)) {
            if(            i_317==head) {
                head_prev_it_315=it_314->prev;
            }
            if(            i_317==tail) {
                tail_it_316=it_314;
            }
            if(            i_317>=head&&i_317<tail) {
                prev_it_318=it_314;
                it_314=it_314->next;
                i_317++;
                /*i*/come_call_finalizer3(prev_it_318,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_314=it_314->next;
                i_317++;
            }
        }
        if(        head_prev_it_315!=((void*)0)) {
            head_prev_it_315->next=tail_it_316;
        }
        if(        tail_it_316!=((void*)0)) {
            tail_it_316->prev=head_prev_it_315;
        }
    }
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_306;
struct list_item$1charp* prev_it_307;
struct list$1charp* __result224__;
    it_306=self->head;
    while(it_306!=((void*)0)) {
        prev_it_307=it_306;
        it_306=it_306->next;
        /*i*/come_call_finalizer3(prev_it_307,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_320;
char* __result227__;
char* __result228__;
char* result_321;
char* __result229__;
result_320 = (void*)0;
result_321 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_320,0,sizeof(char*));
        __result227__ = gComeFunResultObject = __result_obj__ = result_320;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    self->it=self->head;
    if(    self->it) {
        __result228__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    memset(&result_321,0,sizeof(char*));
    __result229__ = gComeFunResultObject = __result_obj__ = result_321;
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_323;
char* __result230__;
char* __result231__;
char* result_324;
char* __result232__;
result_323 = (void*)0;
result_324 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_323,0,sizeof(char*));
        __result230__ = gComeFunResultObject = __result_obj__ = result_323;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result231__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    memset(&result_324,0,sizeof(char*));
    __result232__ = gComeFunResultObject = __result_obj__ = result_324;
    gComeFunResultObject = (void*)0;
    return __result232__;
}

void output_struct_come_header(struct sClass* klass, struct sInfo* info){
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct buffer* buf_325;
struct list$1tuple2$2charphsTypephph* o2_saved_326;
struct tuple2$2charphsTypeph* it_327;
struct tuple2$2charphsTypeph* multiple_assign_var2 = (void*)0;
char* name_328=0;
struct sType* type_329=0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
    if(    info->no_output_come_code) {
        return;
    }
    if(    !klass->mOutputed2) {
        klass->mOutputed2=(_Bool)1;
        buf_325=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 96, "buffer"))));
        if(        klass->mParentClassName) {
            buffer_append_format(buf_325,"struct %s extends %s\n{\n",klass->mName,klass->mParentClassName);
        }
        else {
            buffer_append_format(buf_325,"struct %s\n{\n",klass->mName);
        }
        for(        o2_saved_326=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_327=list$1tuple2$2charphsTypephph_begin((o2_saved_326));        !list$1tuple2$2charphsTypephph_end((o2_saved_326));        it_327=list$1tuple2$2charphsTypephph_next((o2_saved_326))        ){
            multiple_assign_var2=it_327;
            name_328=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_329=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            type_329->mStatic=(_Bool)0;
            buffer_append_str(buf_325,"    ");
            buffer_append_str(buf_325,((char*)(__right_value262=make_define_var_no_solved(type_329,name_328,(_Bool)0,(_Bool)1,info))));
            /* U11 */__right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_325,";\n");
            /* U13 */name_328 = come_decrement_ref_count2(name_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_329,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_326,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_325,"};\n");
        if(        string_operator_equals(klass->mDeclareSName,info->base_sname)) {
            add_come_code_at_come_header(info,"%s",((char*)(__right_value263=buffer_to_string(buf_325))));
            /* U11 */__right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(buf_325,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

_Bool is_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_330;
struct sClass* klass_331;
int i_332;
void* __right_value264 = (void*)0;
_Bool result_333;
    type2_330=type->mNoSolvedGenericsType->v1;
    if(    type2_330&&is_contained_generics_types(type2_330,info)) {
        return (_Bool)1;
    }
    klass_331=type->mClass;
    if(    klass_331->mGenerics) {
        return (_Bool)1;
    }
    for(    i_332=0;    i_332<list$1sTypeph_length(type->mGenericsTypes);    i_332++    ){
        result_333=is_contained_generics_types(((struct sType*)come_null_check(((struct sType*)(__right_value264=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_332))), "14struct.c", 135, 1)),info);
        /*g*/come_call_finalizer3(__right_value264,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        result_333) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_334;
struct sClass* klass_335;
int i_336;
void* __right_value265 = (void*)0;
_Bool result_337;
    type2_334=type->mNoSolvedGenericsType->v1;
    if(    type2_334&&is_contained_method_generics_types(type2_334,info)) {
        return (_Bool)1;
    }
    klass_335=type->mClass;
    if(    klass_335->mMethodGenerics) {
        return (_Bool)1;
    }
    for(    i_336=0;    i_336<list$1sTypeph_length(type->mGenericsTypes);    i_336++    ){
        result_337=is_contained_method_generics_types(((struct sType*)come_null_check(((struct sType*)(__right_value265=list$1sTypephp_operator_load_element(type->mGenericsTypes,i_336))), "14struct.c", 159, 2)),info);
        /*g*/come_call_finalizer3(__right_value265,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        result_337) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value266 = (void*)0;
char* new_name_338;
void* __right_value267 = (void*)0;
struct sClass* generics_class_341;
_Bool __result238__;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct sClass* new_class_368;
int i_369;
struct list$1tuple2$2charphsTypephph* o2_saved_370;
struct tuple2$2charphsTypeph* it_371;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* name_372=0;
struct sType* type_373=0;
void* __right_value275 = (void*)0;
struct sType* new_type_374;
void* __right_value279 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct sType* __dec_obj95;
void* __right_value320 = (void*)0;
struct sType* __dec_obj96;
void* __right_value321 = (void*)0;
_Bool __result270__;
    new_name_338=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(    !map$2charphsClassph_find(info->classes,new_name_338)) {
        generics_class_341=((struct sClass*)(__right_value267=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName)));
        /*g*/come_call_finalizer3(__right_value267,sClass_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_class_341==((void*)0)) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result238__ = (_Bool)0;
            /* U13 */new_name_338 = come_decrement_ref_count2(new_name_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result238__;
        }
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_338)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 182, "sClass")),new_name_338,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        new_class_368=map$2charphsClassph_at(info->classes,((char*)(__right_value274=__builtin_string(new_name_338))),((void*)0));
        /* U11 */__right_value274 = come_decrement_ref_count2(__right_value274, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        i_369=0;
        for(        o2_saved_370=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_341->mFields)),it_371=list$1tuple2$2charphsTypephph_begin((o2_saved_370));        !list$1tuple2$2charphsTypephph_end((o2_saved_370));        it_371=list$1tuple2$2charphsTypephph_next((o2_saved_370))        ){
            multiple_assign_var3=it_371;
            name_372=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_373=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            new_type_374=(struct sType*)come_increment_ref_count(solve_generics(type_373,generics_type,info));
            list$1tuple2$2charphsTypephph_push_back(new_class_368->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 192, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(string_clone(name_372)),(struct sType*)come_increment_ref_count(sType_clone(new_type_374)))));
            /* U13 */name_372 = come_decrement_ref_count2(name_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_373,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(new_type_374,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_370,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj95=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        type->mClass=new_class_368;
        list$1sTypeph_reset(type->mGenericsTypes);
        output_struct(new_class_368,info);
    }
    else {
        if(        type->mNoSolvedGenericsType->v1==((void*)0)) {
            __dec_obj96=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(sType_clone(type));
            come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        }
        type->mClass=((struct sClass*)(__right_value321=map$2charphsClassphp_operator_load_element(info->classes,new_name_338)));
        /*g*/come_call_finalizer3(__right_value321,sClass_finalize, 0, 1, 0, 0, (void*)0);
        list$1sTypeph_reset(type->mGenericsTypes);
    }
    __result270__ = (_Bool)1;
    /* U13 */new_name_338 = come_decrement_ref_count2(new_name_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result270__;
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
unsigned int hash_339;
int it_340;
    hash_339=charp_get_hash_key(((char*)key))%self->size;
    it_340=hash_339;
    while((_Bool)1) {
        if(        self->item_existance[it_340]) {
            if(            charp_equals(self->keys[it_340],key)) {
                return (_Bool)1;
            }
            it_340++;
            if(            it_340>=self->size) {
                it_340=0;
            }
            else if(            it_340==hash_339) {
                return (_Bool)0;
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_342;
unsigned int hash_343;
unsigned int it_344;
struct sClass* __result234__;
struct sClass* __result235__;
struct sClass* __result236__;
struct sClass* __result237__;
default_value_342 = (void*)0;
    memset(&default_value_342,0,sizeof(struct sClass*));
    hash_343=charp_get_hash_key(((char*)key))%self->size;
    it_344=hash_343;
    while((_Bool)1) {
        if(        self->item_existance[it_344]) {
            if(            charp_equals(self->keys[it_344],key)) {
                __result234__ = gComeFunResultObject = __result_obj__ = self->items[it_344];
                /*i*/come_call_finalizer3(default_value_342,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result234__;
            }
            it_344++;
            if(            it_344>=self->size) {
                it_344=0;
            }
            else if(            it_344==hash_343) {
                __result235__ = gComeFunResultObject = __result_obj__ = default_value_342;
                /*i*/come_call_finalizer3(default_value_342,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result235__;
            }
        }
        else {
            __result236__ = gComeFunResultObject = __result_obj__ = default_value_342;
            /*i*/come_call_finalizer3(default_value_342,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result236__;
        }
    }
    __result237__ = gComeFunResultObject = __result_obj__ = default_value_342;
    /*i*/come_call_finalizer3(default_value_342,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj55;
struct list$1tuple2$2charphsTypephph* __dec_obj56;
char* __dec_obj57;
char* __dec_obj58;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj55=self->mName;
            /*G*/ __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj56=self->mFields;
            come_call_finalizer3(__dec_obj56,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj57=self->mDeclareSName;
            /*G*/ __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj58=self->mParentClassName;
            /*G*/ __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_345;
struct list_item$1tuple2$2charphsTypephph* prev_it_346;
    it_345=self->head;
    while(it_345!=((void*)0)) {
        prev_it_346=it_345;
        it_345=it_345->next;
        /*i*/come_call_finalizer3(prev_it_346,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_364;
unsigned int it_365;
_Bool same_key_exist_366;
char* it2_367;
struct map$2charphsClassph* __result249__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_364=charp_get_hash_key(key)%self->size;
    it_365=hash_364;
    while((_Bool)1) {
        if(        self->item_existance[it_365]) {
            if(            charp_equals(self->keys[it_365],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_365]);
                    /* U13 */self->keys[it_365] = come_decrement_ref_count2(self->keys[it_365], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_365]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_365]);
                    self->keys[it_365]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_365],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_365]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_365]=item;
                }
                break;
            }
            it_365++;
            if(            it_365>=self->size) {
                it_365=0;
            }
            else if(            it_365==hash_364) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_365]=(_Bool)1;
            if(            1) {
                self->keys[it_365]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_365]=key;
            }
            if(            1) {
                self->items[it_365]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_365]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_366=(_Bool)0;
    for(    it2_367=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_367=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_367,key)) {
            same_key_exist_366=(_Bool)1;
        }
    }
    if(    !same_key_exist_366) {
        list$1charp_push_back(self->key_list,key);
    }
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_347;
void* __right_value268 = (void*)0;
char** keys_348;
void* __right_value269 = (void*)0;
struct sClass** items_349;
void* __right_value270 = (void*)0;
_Bool* item_existance_350;
int len_351;
char* it_354;
struct sClass* default_value_357;
struct sClass* it2_358;
unsigned int hash_361;
int n_362;
struct sClass* default_value_363;
default_value_357 = (void*)0;
default_value_363 = (void*)0;
    size_347=self->size*10;
    keys_348=(char**)come_increment_ref_count(((char**)(__right_value268=(char**)come_calloc(1, sizeof(char*)*(1*(size_347)), "/usr/local/include/comelang.h", 2515, "char*%"))));
    items_349=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value269=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_347)), "/usr/local/include/comelang.h", 2516, "sClass*%"))));
    item_existance_350=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value270=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_347)), "/usr/local/include/comelang.h", 2517, "bool"))));
    len_351=0;
    for(    it_354=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_354=map$2charphsClassph_next(self)    ){
        memset(&default_value_357,0,sizeof(struct sClass*));
        it2_358=map$2charphsClassph_at(self,it_354,default_value_357);
        hash_361=charp_get_hash_key(it_354)%size_347;
        n_362=hash_361;
        while((_Bool)1) {
            if(            item_existance_350[n_362]) {
                n_362++;
                if(                n_362>=size_347) {
                    n_362=0;
                }
                else if(                n_362==hash_361) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_350[n_362]=(_Bool)1;
                keys_348[n_362]=it_354;
                items_349[n_362]=map$2charphsClassph_at(self,it_354,default_value_363);
                len_351++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_348;
    self->items=items_349;
    self->item_existance=item_existance_350;
    self->size=size_347;
    self->len=len_351;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_352;
char* __result239__;
char* __result240__;
char* result_353;
char* __result241__;
result_352 = (void*)0;
result_353 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_352,0,sizeof(char*));
        __result239__ = gComeFunResultObject = __result_obj__ = result_352;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result240__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    memset(&result_353,0,sizeof(char*));
    __result241__ = gComeFunResultObject = __result_obj__ = result_353;
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_355;
char* __result242__;
char* __result243__;
char* result_356;
char* __result244__;
result_355 = (void*)0;
result_356 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_355,0,sizeof(char*));
        __result242__ = gComeFunResultObject = __result_obj__ = result_355;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result243__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    memset(&result_356,0,sizeof(char*));
    __result244__ = gComeFunResultObject = __result_obj__ = result_356;
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_359;
unsigned int it_360;
struct sClass* __result245__;
struct sClass* __result246__;
struct sClass* __result247__;
struct sClass* __result248__;
    hash_359=charp_get_hash_key(((char*)key))%self->size;
    it_360=hash_359;
    while((_Bool)1) {
        if(        self->item_existance[it_360]) {
            if(            charp_equals(self->keys[it_360],key)) {
                __result245__ = gComeFunResultObject = __result_obj__ = self->items[it_360];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result245__;
            }
            it_360++;
            if(            it_360>=self->size) {
                it_360=0;
            }
            else if(            it_360==hash_359) {
                __result246__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result246__;
            }
        }
        else {
            __result247__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result247__;
        }
    }
    __result248__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_375;
struct tuple2$2charphsTypeph* __dec_obj59;
void* __right_value277 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_376;
struct tuple2$2charphsTypeph* __dec_obj62;
void* __right_value278 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_377;
struct tuple2$2charphsTypeph* __dec_obj65;
struct list$1tuple2$2charphsTypephph* __result250__;
    if(    self->len==0) {
        litem_375=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value276=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1tuple2$2charphsTypephph"))));
        litem_375->prev=((void*)0);
        litem_375->next=((void*)0);
        __dec_obj59=litem_375->item;
        litem_375->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_375;
        self->head=litem_375;
    }
    else if(    self->len==1) {
        litem_376=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value277=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1tuple2$2charphsTypephph"))));
        litem_376->prev=self->head;
        litem_376->next=((void*)0);
        __dec_obj62=litem_376->item;
        litem_376->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_376;
        self->head->next=litem_376;
    }
    else {
        litem_377=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value278=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1tuple2$2charphsTypephph"))));
        litem_377->prev=self->tail;
        litem_377->next=((void*)0);
        __dec_obj65=litem_377->item;
        litem_377->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_377;
        self->tail=litem_377;
    }
    self->len++;
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result251__;
void* __right_value280 = (void*)0;
struct sType* result_378;
void* __right_value283 = (void*)0;
struct tuple1$1sTypeph* __dec_obj70;
void* __right_value284 = (void*)0;
struct tuple1$1sTypeph* __dec_obj71;
void* __right_value285 = (void*)0;
char* __dec_obj72;
void* __right_value292 = (void*)0;
struct list$1sTypeph* __dec_obj76;
void* __right_value300 = (void*)0;
struct list$1sNodeph* __dec_obj80;
void* __right_value301 = (void*)0;
struct list$1sTypeph* __dec_obj81;
void* __right_value308 = (void*)0;
struct list$1charph* __dec_obj85;
void* __right_value309 = (void*)0;
struct tuple1$1sTypeph* __dec_obj86;
void* __right_value310 = (void*)0;
struct sNode* __dec_obj87;
void* __right_value311 = (void*)0;
struct tuple1$1sTypeph* __dec_obj88;
void* __right_value312 = (void*)0;
struct sNode* __dec_obj89;
void* __right_value313 = (void*)0;
char* __dec_obj90;
void* __right_value314 = (void*)0;
char* __dec_obj91;
void* __right_value315 = (void*)0;
char* __dec_obj92;
struct sType* __result267__;
    if(    self==(void*)0) {
        __result251__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    result_378=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_378->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj70=result_378->mNoSolvedGenericsType;
        result_378->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj70,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj71=result_378->mOriginalLoadVarType;
        result_378->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj71,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj72=result_378->mGenericsName;
        result_378->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj76=result_378->mGenericsTypes;
        result_378->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj76,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj80=result_378->mArrayNum;
        result_378->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj80,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_378->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj81=result_378->mParamTypes;
        result_378->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj81,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj85=result_378->mParamNames;
        result_378->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj85,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj86=result_378->mResultType;
        result_378->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj86,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_378->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj87=result_378->mAlignas;
        result_378->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj88=result_378->mChannelType;
        result_378->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj88,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_378->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_378->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_378->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_378->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_378->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_378->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_378->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_378->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_378->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_378->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_378->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_378->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_378->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_378->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_378->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_378->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_378->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_378->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_378->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_378->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_378->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_378->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_378->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_378->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj89=result_378->mSizeNum;
        result_378->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_378->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj90=result_378->mOriginalTypeName;
        result_378->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_378->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_378->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_378->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_378->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_378->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_378->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_378->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_378->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj91=result_378->mAsmName;
        result_378->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_378->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_378->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_378->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_378->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_378->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_378->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj92=result_378->mTupleName;
        result_378->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        /*G*/ __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result267__ = gComeFunResultObject = __result_obj__ = result_378;
    /*i*/come_call_finalizer3(result_378,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result252__;
void* __right_value281 = (void*)0;
struct tuple1$1sTypeph* result_379;
void* __right_value282 = (void*)0;
struct sType* __dec_obj68;
struct tuple1$1sTypeph* __result253__;
    if(    self==(void*)0) {
        __result252__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    result_379=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj68=result_379->v1;
        result_379->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result253__ = gComeFunResultObject = __result_obj__ = result_379;
    /*i*/come_call_finalizer3(result_379,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj69;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj69=self->v1;
            come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result254__;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct list$1sTypeph* result_380;
struct list_item$1sTypeph* it_381;
void* __right_value291 = (void*)0;
struct list$1sTypeph* __result257__;
    if(    self==((void*)0)) {
        __result254__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    result_380=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "/usr/local/include/comelang.h", 1026, "list$1sTypeph"))));
    it_381=self->head;
    while(it_381!=((void*)0)) {
        list$1sTypeph_add(result_380,(struct sType*)come_increment_ref_count(sType_clone(it_381->item)));
        it_381=it_381->next;
    }
    __result257__ = gComeFunResultObject = __result_obj__ = result_380;
    /*i*/come_call_finalizer3(result_380,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result255__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value288 = (void*)0;
struct list_item$1sTypeph* litem_382;
struct sType* __dec_obj73;
void* __right_value289 = (void*)0;
struct list_item$1sTypeph* litem_383;
struct sType* __dec_obj74;
void* __right_value290 = (void*)0;
struct list_item$1sTypeph* litem_384;
struct sType* __dec_obj75;
struct list$1sTypeph* __result256__;
    if(    self->len==0) {
        litem_382=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value288=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1040, "list_item$1sTypeph"))));
        litem_382->prev=((void*)0);
        litem_382->next=((void*)0);
        __dec_obj73=litem_382->item;
        litem_382->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_382;
        self->head=litem_382;
    }
    else if(    self->len==1) {
        litem_383=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value289=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1050, "list_item$1sTypeph"))));
        litem_383->prev=self->head;
        litem_383->next=((void*)0);
        __dec_obj74=litem_383->item;
        litem_383->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_383;
        self->head->next=litem_383;
    }
    else {
        litem_384=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value290=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "/usr/local/include/comelang.h", 1060, "list_item$1sTypeph"))));
        litem_384->prev=self->tail;
        litem_384->next=((void*)0);
        __dec_obj75=litem_384->item;
        litem_384->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_384;
        self->tail=litem_384;
    }
    self->len++;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result258__;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct list$1sNodeph* result_385;
struct list_item$1sNodeph* it_386;
void* __right_value299 = (void*)0;
struct list$1sNodeph* __result263__;
    if(    self==((void*)0)) {
        __result258__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    result_385=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "/usr/local/include/comelang.h", 1026, "list$1sNodeph"))));
    it_386=self->head;
    while(it_386!=((void*)0)) {
        list$1sNodeph_add(result_385,(struct sNode*)come_increment_ref_count(sNode_clone(it_386->item)));
        it_386=it_386->next;
    }
    __result263__ = gComeFunResultObject = __result_obj__ = result_385;
    /*i*/come_call_finalizer3(result_385,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result259__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value295 = (void*)0;
struct list_item$1sNodeph* litem_387;
struct sNode* __dec_obj77;
void* __right_value296 = (void*)0;
struct list_item$1sNodeph* litem_388;
struct sNode* __dec_obj78;
void* __right_value297 = (void*)0;
struct list_item$1sNodeph* litem_389;
struct sNode* __dec_obj79;
struct list$1sNodeph* __result260__;
    if(    self->len==0) {
        litem_387=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value295=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1040, "list_item$1sNodeph"))));
        litem_387->prev=((void*)0);
        litem_387->next=((void*)0);
        __dec_obj77=litem_387->item;
        litem_387->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_387;
        self->head=litem_387;
    }
    else if(    self->len==1) {
        litem_388=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value296=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1050, "list_item$1sNodeph"))));
        litem_388->prev=self->head;
        litem_388->next=((void*)0);
        __dec_obj78=litem_388->item;
        litem_388->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_388;
        self->head->next=litem_388;
    }
    else {
        litem_389=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value297=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1060, "list_item$1sNodeph"))));
        litem_389->prev=self->tail;
        litem_389->next=((void*)0);
        __dec_obj79=litem_389->item;
        litem_389->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_389;
        self->tail=litem_389;
    }
    self->len++;
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result261__;
void* __right_value298 = (void*)0;
struct sNode* result_390;
struct sNode* __result262__;
    if(    self==(void*)0) {
        __result261__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    result_390=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_390->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_390->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_390->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_390->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_390->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_390->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_390->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_390->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_390->kind=self->kind;
    }
    __result262__ = gComeFunResultObject = __result_obj__ = result_390;
    if(result_390) { result_390 = come_decrement_ref_count2(result_390, ((struct sNode*)result_390)->finalize, ((struct sNode*)result_390)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result264__;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct list$1charph* result_391;
struct list_item$1charph* it_392;
void* __right_value307 = (void*)0;
struct list$1charph* __result266__;
    if(    self==((void*)0)) {
        __result264__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    result_391=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "/usr/local/include/comelang.h", 1026, "list$1charph"))));
    it_392=self->head;
    while(it_392!=((void*)0)) {
        list$1charph_add(result_391,(char*)come_increment_ref_count(string_clone(it_392->item)));
        it_392=it_392->next;
    }
    __result266__ = gComeFunResultObject = __result_obj__ = result_391;
    /*i*/come_call_finalizer3(result_391,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
struct list_item$1charph* litem_393;
char* __dec_obj82;
void* __right_value305 = (void*)0;
struct list_item$1charph* litem_394;
char* __dec_obj83;
void* __right_value306 = (void*)0;
struct list_item$1charph* litem_395;
char* __dec_obj84;
struct list$1charph* __result265__;
    if(    self->len==0) {
        litem_393=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value304=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1040, "list_item$1charph"))));
        litem_393->prev=((void*)0);
        litem_393->next=((void*)0);
        __dec_obj82=litem_393->item;
        litem_393->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_393;
        self->head=litem_393;
    }
    else if(    self->len==1) {
        litem_394=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value305=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1050, "list_item$1charph"))));
        litem_394->prev=self->head;
        litem_394->next=((void*)0);
        __dec_obj83=litem_394->item;
        litem_394->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_394;
        self->head->next=litem_394;
    }
    else {
        litem_395=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value306=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "/usr/local/include/comelang.h", 1060, "list_item$1charph"))));
        litem_395->prev=self->tail;
        litem_395->next=((void*)0);
        __dec_obj84=litem_395->item;
        litem_395->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_395;
        self->tail=litem_395;
    }
    self->len++;
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj93;
struct sType* __dec_obj94;
struct tuple2$2charphsTypeph* __result268__;
    __dec_obj93=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj94=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_396;
struct list_item$1sTypeph* prev_it_397;
struct list$1sTypeph* __result269__;
    it_396=self->head;
    while(it_396!=((void*)0)) {
        prev_it_397=it_396;
        it_396=it_396->next;
        /*i*/come_call_finalizer3(prev_it_397,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result269__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result269__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
char* __dec_obj98;
void* __right_value338 = (void*)0;
struct sClass* __dec_obj116;
struct sStructNode* __result279__;
    ((struct sNodeBase*)(__right_value322=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value322,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj98=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    /*G*/ __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj116=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer3(__dec_obj116,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __result_obj__=(void*)0;
void* __right_value339 = (void*)0;
char* __result280__;
    __result280__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value339=__builtin_string("sStructNode")));
    /* U11 */__right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
struct sClass* klass_405;
void* __right_value340 = (void*)0;
char* name_406;
_Bool __result281__;
    klass_405=(struct sClass*)come_increment_ref_count(self->mClass);
    name_406=(char*)come_increment_ref_count(__builtin_string(self->mName));
    output_struct(klass_405,info);
    __result281__ = (_Bool)1;
    /*i*/come_call_finalizer3(klass_405,sClass_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */name_406 = come_decrement_ref_count2(name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result281__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj97;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj97=self->sname;
            /*G*/ __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result271__;
void* __right_value324 = (void*)0;
struct sClass* result_398;
void* __right_value325 = (void*)0;
char* __dec_obj99;
void* __right_value335 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj113;
void* __right_value336 = (void*)0;
char* __dec_obj114;
void* __right_value337 = (void*)0;
char* __dec_obj115;
struct sClass* __result278__;
    if(    self==(void*)0) {
        __result271__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    result_398=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"));
    if(    self!=((void*)0)) {
        result_398->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_398->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_398->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_398->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_398->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_398->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_398->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_398->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj99=result_398->mName;
        result_398->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_398->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_398->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj113=result_398->mFields;
        result_398->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephphp_clone(self->mFields));
        come_call_finalizer3(__dec_obj113,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_398->mOutputed=self->mOutputed;
    }
    if(    self!=((void*)0)) {
        result_398->mOutputed2=self->mOutputed2;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj114=result_398->mDeclareSName;
        result_398->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        /*G*/ __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_398->mNobodyStruct=self->mNobodyStruct;
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj115=result_398->mParentClassName;
        result_398->mParentClassName=(char*)come_increment_ref_count(string_clone(self->mParentClassName));
        /*G*/ __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result278__ = gComeFunResultObject = __result_obj__ = result_398;
    /*i*/come_call_finalizer3(result_398,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result272__;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct list$1tuple2$2charphsTypephph* result_399;
struct list_item$1tuple2$2charphsTypephph* it_400;
void* __right_value334 = (void*)0;
struct list$1tuple2$2charphsTypephph* __result277__;
    if(    self==((void*)0)) {
        __result272__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    result_399=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1026, "list$1tuple2$2charphsTypephph"))));
    it_400=self->head;
    while(it_400!=((void*)0)) {
        list$1tuple2$2charphsTypephph_add(result_399,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_400->item)));
        it_400=it_400->next;
    }
    __result277__ = gComeFunResultObject = __result_obj__ = result_399;
    /*i*/come_call_finalizer3(result_399,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result273__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value328 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_401;
struct tuple2$2charphsTypeph* __dec_obj100;
void* __right_value329 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_402;
struct tuple2$2charphsTypeph* __dec_obj103;
void* __right_value330 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_403;
struct tuple2$2charphsTypeph* __dec_obj106;
struct list$1tuple2$2charphsTypephph* __result274__;
    if(    self->len==0) {
        litem_401=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value328=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1040, "list_item$1tuple2$2charphsTypephph"))));
        litem_401->prev=((void*)0);
        litem_401->next=((void*)0);
        __dec_obj100=litem_401->item;
        litem_401->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj100,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_401;
        self->head=litem_401;
    }
    else if(    self->len==1) {
        litem_402=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value329=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1050, "list_item$1tuple2$2charphsTypephph"))));
        litem_402->prev=self->head;
        litem_402->next=((void*)0);
        __dec_obj103=litem_402->item;
        litem_402->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj103,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_402;
        self->head->next=litem_402;
    }
    else {
        litem_403=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value330=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "/usr/local/include/comelang.h", 1060, "list_item$1tuple2$2charphsTypephph"))));
        litem_403->prev=self->tail;
        litem_403->next=((void*)0);
        __dec_obj106=litem_403->item;
        litem_403->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj106,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_403;
        self->tail=litem_403;
    }
    self->len++;
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj107;
struct sType* __dec_obj108;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj107=self->v1;
            /*G*/ __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj108=self->v2;
            come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result275__;
void* __right_value331 = (void*)0;
struct tuple2$2charphsTypeph* result_404;
void* __right_value332 = (void*)0;
char* __dec_obj109;
void* __right_value333 = (void*)0;
struct sType* __dec_obj110;
struct tuple2$2charphsTypeph* __result276__;
    if(    self==(void*)0) {
        __result275__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    result_404=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj109=result_404->v1;
        result_404->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj110=result_404->v2;
        result_404->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result276__ = gComeFunResultObject = __result_obj__ = result_404;
    /*i*/come_call_finalizer3(result_404,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj111;
struct sType* __dec_obj112;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj111=self->v1;
            /*G*/ __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj112=self->v2;
            come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
char* __dec_obj120;
void* __right_value343 = (void*)0;
struct sClass* __dec_obj121;
struct sStructNobodyNode* __result282__;
    ((struct sNodeBase*)(__right_value341=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value341,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj120=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    /*G*/ __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj121=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer3(__dec_obj121,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
void* __right_value344 = (void*)0;
char* __result283__;
    __result283__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value344=__builtin_string("sStructNobodyNode")));
    /* U11 */__right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __right_value345 = (void*)0;
char* name_407;
struct sClass* klass_408;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
_Bool __result284__;
    name_407=(char*)come_increment_ref_count(__builtin_string(self->mName));
    klass_408=self->mClass;
    map$2charphbufferph_insert(info->previous_struct_definition,(char*)come_increment_ref_count(name_407),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value346=xsprintf("struct %s;\n",name_407))))));
    /* U11 */__right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result284__ = (_Bool)1;
    /* U13 */name_407 = come_decrement_ref_count2(name_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result284__;
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value348 = (void*)0;
struct sNothingNode* __result285__;
    ((struct sNodeBase*)(__right_value348=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value348,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

_Bool sNothingNode_terminated(struct sNothingNode* self){
    return (_Bool)1;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __result_obj__=(void*)0;
void* __right_value349 = (void*)0;
char* __result286__;
    __result286__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value349=__builtin_string("sNothingNode")));
    /* U11 */__right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
    return (_Bool)1;
}

struct sNode* create_nothing_node(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct sNode* _inf_value1;
struct sNothingNode* _inf_obj_value1;
void* __right_value354 = (void*)0;
struct sNode* __result289__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 303, "struct sNode");
    _inf_obj_value1=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value351=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 303, "sNothingNode")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNothingNode_finalize;
    _inf_value1->clone=(void*)sNothingNode_clone;
    _inf_value1->compile=(void*)sNothingNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNothingNode_terminated;
    _inf_value1->kind=(void*)sNothingNode_kind;
    __result289__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value354=_inf_value1));
    /*g*/come_call_finalizer3(__right_value351,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value354) { __right_value354 = come_decrement_ref_count2(__right_value354, ((struct sNode*)__right_value354)->finalize, ((struct sNode*)__right_value354)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result289__;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
char* __dec_obj128;
void* __right_value357 = (void*)0;
struct sClass* __dec_obj129;
struct list$1sNodeph* __dec_obj130;
struct sClassNode* __result290__;
    ((struct sNodeBase*)(__right_value355=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value355,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj128=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    /*G*/ __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj129=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer3(__dec_obj129,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj130=self->mMethods;
    self->mMethods=(struct list$1sNodeph*)come_increment_ref_count(methods);
    come_call_finalizer3(__dec_obj130,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(methods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
char* __result291__;
    __result291__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value358=__builtin_string("sClassNode")));
    /* U11 */__right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __right_value359 = (void*)0;
struct sClass* klass_410;
void* __right_value360 = (void*)0;
char* name_411;
void* __right_value361 = (void*)0;
struct sClass* klass2_412;
void* __right_value362 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj135;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sType* type_413;
struct sType* override__414;
void* __right_value368 = (void*)0;
struct list$1sNodeph* o2_saved_436;
struct sNode* it_439;
_Bool Value_442;
_Bool __result309__;
_Bool __result310__;
    klass_410=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
    name_411=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    map$2charphsClassph_at(info->classes,name_411,((void*)0))==((void*)0)) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_411),(struct sClass*)come_increment_ref_count(sClass_clone(klass_410)));
    }
    else if(    list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_411,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_410->mFields)>0) {
        klass2_412=map$2charphsClassph_at(info->classes,name_411,((void*)0));
        __dec_obj135=klass2_412->mFields;
        klass2_412->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephphp_clone(klass_410->mFields));
        come_call_finalizer3(__dec_obj135,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_413=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 341, "sType")),name_411,(_Bool)0,info));
    override__414=map$2charphsTypeph_at(info->types,name_411,((void*)0));
    if(    override__414) {
        if(        override__414->mTypedef) {
            type_413->mTypedef=(_Bool)1;
        }
    }
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_411),(struct sType*)come_increment_ref_count(sType_clone(type_413)));
    output_struct(klass_410,info);
    for(    o2_saved_436=(struct list$1sNodeph*)come_increment_ref_count((self->mMethods)),it_439=list$1sNodeph_begin((o2_saved_436));    !list$1sNodeph_end((o2_saved_436));    it_439=list$1sNodeph_next((o2_saved_436))    ){
        Value_442=node_compile(it_439,info);
        if(        !Value_442) {
            __result309__ = (_Bool)0;
            /*i*/come_call_finalizer3(o2_saved_436,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(klass_410,sClass_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_411 = come_decrement_ref_count2(name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_413,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result309__;
        }
        else {
        }
    }
    /*i*/come_call_finalizer3(o2_saved_436,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    output_struct_come_header(klass_410,info);
    __result310__ = (_Bool)1;
    /*i*/come_call_finalizer3(klass_410,sClass_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */name_411 = come_decrement_ref_count2(name_411, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_413,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result310__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_415;
unsigned int it_416;
struct sType* __result292__;
struct sType* __result293__;
struct sType* __result294__;
struct sType* __result295__;
    hash_415=charp_get_hash_key(((char*)key))%self->size;
    it_416=hash_415;
    while((_Bool)1) {
        if(        self->item_existance[it_416]) {
            if(            charp_equals(self->keys[it_416],key)) {
                __result292__ = gComeFunResultObject = __result_obj__ = self->items[it_416];
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result292__;
            }
            it_416++;
            if(            it_416>=self->size) {
                it_416=0;
            }
            else if(            it_416==hash_415) {
                __result293__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result293__;
            }
        }
        else {
            __result294__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result294__;
        }
    }
    __result295__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__=(void*)0;
unsigned int hash_432;
unsigned int it_433;
_Bool same_key_exist_434;
char* it2_435;
struct map$2charphsTypeph* __result302__;
    if(    self->len*10>=self->size) {
        map$2charphsTypeph_rehash(self);
    }
    hash_432=charp_get_hash_key(key)%self->size;
    it_433=hash_432;
    while((_Bool)1) {
        if(        self->item_existance[it_433]) {
            if(            charp_equals(self->keys[it_433],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_433]);
                    /* U13 */self->keys[it_433] = come_decrement_ref_count2(self->keys[it_433], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_433]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_433]);
                    self->keys[it_433]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_433],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_433]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_433]=item;
                }
                break;
            }
            it_433++;
            if(            it_433>=self->size) {
                it_433=0;
            }
            else if(            it_433==hash_432) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_433]=(_Bool)1;
            if(            1) {
                self->keys[it_433]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_433]=key;
            }
            if(            1) {
                self->items[it_433]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_433]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_434=(_Bool)0;
    for(    it2_435=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_435=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_435,key)) {
            same_key_exist_434=(_Bool)1;
        }
    }
    if(    !same_key_exist_434) {
        list$1charp_push_back(self->key_list,key);
    }
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
int size_417;
void* __right_value365 = (void*)0;
char** keys_418;
void* __right_value366 = (void*)0;
struct sType** items_419;
void* __right_value367 = (void*)0;
_Bool* item_existance_420;
int len_421;
char* it_424;
struct sType* default_value_427;
struct sType* it2_428;
unsigned int hash_429;
int n_430;
struct sType* default_value_431;
default_value_427 = (void*)0;
default_value_431 = (void*)0;
    size_417=self->size*10;
    keys_418=(char**)come_increment_ref_count(((char**)(__right_value365=(char**)come_calloc(1, sizeof(char*)*(1*(size_417)), "/usr/local/include/comelang.h", 2515, "char*%"))));
    items_419=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value366=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_417)), "/usr/local/include/comelang.h", 2516, "sType*%"))));
    item_existance_420=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value367=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_417)), "/usr/local/include/comelang.h", 2517, "bool"))));
    len_421=0;
    for(    it_424=map$2charphsTypeph_begin(self);    !map$2charphsTypeph_end(self);    it_424=map$2charphsTypeph_next(self)    ){
        memset(&default_value_427,0,sizeof(struct sType*));
        it2_428=map$2charphsTypeph_at(self,it_424,default_value_427);
        hash_429=charp_get_hash_key(it_424)%size_417;
        n_430=hash_429;
        while((_Bool)1) {
            if(            item_existance_420[n_430]) {
                n_430++;
                if(                n_430>=size_417) {
                    n_430=0;
                }
                else if(                n_430==hash_429) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_420[n_430]=(_Bool)1;
                keys_418[n_430]=it_424;
                items_419[n_430]=map$2charphsTypeph_at(self,it_424,default_value_431);
                len_421++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_418;
    self->items=items_419;
    self->item_existance=item_existance_420;
    self->size=size_417;
    self->len=len_421;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_422;
char* __result296__;
char* __result297__;
char* result_423;
char* __result298__;
result_422 = (void*)0;
result_423 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_422,0,sizeof(char*));
        __result296__ = gComeFunResultObject = __result_obj__ = result_422;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result297__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    memset(&result_423,0,sizeof(char*));
    __result298__ = gComeFunResultObject = __result_obj__ = result_423;
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_425;
char* __result299__;
char* __result300__;
char* result_426;
char* __result301__;
result_425 = (void*)0;
result_426 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_425,0,sizeof(char*));
        __result299__ = gComeFunResultObject = __result_obj__ = result_425;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result300__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    memset(&result_426,0,sizeof(char*));
    __result301__ = gComeFunResultObject = __result_obj__ = result_426;
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_437;
struct sNode* __result303__;
struct sNode* __result304__;
struct sNode* result_438;
struct sNode* __result305__;
result_437 = (void*)0;
result_438 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_437,0,sizeof(struct sNode*));
        __result303__ = gComeFunResultObject = __result_obj__ = result_437;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    self->it=self->head;
    if(    self->it) {
        __result304__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    memset(&result_438,0,sizeof(struct sNode*));
    __result305__ = gComeFunResultObject = __result_obj__ = result_438;
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_440;
struct sNode* __result306__;
struct sNode* __result307__;
struct sNode* result_441;
struct sNode* __result308__;
result_440 = (void*)0;
result_441 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_440,0,sizeof(struct sNode*));
        __result306__ = gComeFunResultObject = __result_obj__ = result_440;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result307__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    memset(&result_441,0,sizeof(struct sNode*));
    __result308__ = gComeFunResultObject = __result_obj__ = result_441;
    gComeFunResultObject = (void*)0;
    return __result308__;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sClass* klass_443;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sType* type_444;
struct sType* override__445;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sType* type_446;
struct sType* override__447;
void* __right_value378 = (void*)0;
struct sClass* parent_class_448;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
char* parent_class_name_449;
void* __right_value381 = (void*)0;
struct sNode* __result311__;
_Bool multiple_declare_450;
char* p_451;
int sline_452;
void* __right_value382 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_453=0;
char* name_454=0;
_Bool err_455=0;
void* __right_value383 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* base_type_456=0;
char* name_457=0;
_Bool err_458=0;
void* __right_value384 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var6 = (void*)0;
struct sType* type2_459=0;
char* name2_460=0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var7 = (void*)0;
struct sType* type2_461=0;
char* name2_462=0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type2_463=0;
char* name_464=0;
_Bool err_465=0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
char* __dec_obj140;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sNode* _inf_value2;
struct sStructNode* _inf_obj_value2;
void* __right_value402 = (void*)0;
struct sNode* node_466;
_Bool Value_468;
struct sNode* __result314__;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sNode* _inf_value3;
struct sNothingNode* _inf_obj_value3;
void* __right_value407 = (void*)0;
struct sNode* __result317__;
klass_443 = (void*)0;
    if(    map$2charphsClassph_at(info->classes,type_name,((void*)0))==((void*)0)) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 368, "sClass")),((char*)(__right_value371=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        /* U11 */__right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_444=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 369, "sType")),type_name,(_Bool)0,info));
        override__445=map$2charphsTypeph_at(info->types,type_name,((void*)0));
        if(        override__445) {
            if(            override__445->mTypedef) {
                type_444->mTypedef=(_Bool)1;
            }
        }
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(sType_clone(type_444)));
        klass_443=map$2charphsClassph_at(info->classes,type_name,((void*)0));
        /*i*/come_call_finalizer3(type_444,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_443=map$2charphsClassph_at(info->classes,type_name,((void*)0));
        type_446=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 382, "sType")),type_name,(_Bool)0,info));
        override__447=map$2charphsTypeph_at(info->types,type_name,((void*)0));
        if(        override__447) {
            if(            override__447->mTypedef) {
                type_446->mTypedef=(_Bool)1;
            }
        }
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(sType_clone(type_446)));
        /*i*/come_call_finalizer3(type_446,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    parent_class_448=((void*)0);
    if(    parsecmp("extends",info)) {
        ((char*)(__right_value379=parse_word(info)));
        /* U11 */__right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parent_class_name_449=(char*)come_increment_ref_count(parse_word(info));
        parent_class_448=((struct sClass*)(__right_value381=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_449)));
        /*g*/come_call_finalizer3(__right_value381,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        if(        parent_class_448==((void*)0)) {
            err_msg(info,"invalid class name(%s)",parent_class_name_449);
            __result311__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            /* U13 */parent_class_name_449 = come_decrement_ref_count2(parent_class_name_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /* U13 */type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result311__;
        }
        /* U13 */parent_class_name_449 = come_decrement_ref_count2(parent_class_name_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    expected_next_character(123,info);
    while((_Bool)1) {
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
        multiple_declare_450=(_Bool)0;
        {
            p_451=info->p;
            sline_452=info->sline;
            multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value382=backtrace_parse_type((_Bool)1,info)));
            type_453=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_454=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_455=multiple_assign_var4->v3;
            /*g*/come_call_finalizer3(__right_value382,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            err_455&&*info->p==44) {
                multiple_declare_450=(_Bool)1;
            }
            info->p=p_451;
            info->sline=sline_452;
            /*i*/come_call_finalizer3(type_453,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_454 = come_decrement_ref_count2(name_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        multiple_declare_450) {
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value383=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_456=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_457=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_458=multiple_assign_var5->v3;
            /*g*/come_call_finalizer3(__right_value383,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var6=((struct tuple2$2sTypephcharph*)(__right_value384=parse_variable_name((struct sType*)come_increment_ref_count(base_type_456),(_Bool)1,info)));
            type2_459=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name2_460=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            /*g*/come_call_finalizer3(__right_value384,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1tuple2$2charphsTypephph_push_back(klass_443->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 439, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_460),(struct sType*)come_increment_ref_count(type2_459))));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple2$2sTypephcharph*)(__right_value387=parse_variable_name((struct sType*)come_increment_ref_count(base_type_456),(_Bool)0,info)));
                type2_461=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name2_462=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                /*g*/come_call_finalizer3(__right_value387,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                list$1tuple2$2charphsTypephph_push_back(klass_443->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 447, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_462),(struct sType*)come_increment_ref_count(type2_461))));
                /*i*/come_call_finalizer3(type2_461,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name2_462 = come_decrement_ref_count2(name2_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(base_type_456,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_457 = come_decrement_ref_count2(name_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_459,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name2_460 = come_decrement_ref_count2(name2_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value390=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_463=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_464=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_465=multiple_assign_var8->v3;
            /*g*/come_call_finalizer3(__right_value390,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_465) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            list$1tuple2$2charphsTypephph_push_back(klass_443->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 458, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_464),(struct sType*)come_increment_ref_count(type2_463))));
            /*i*/come_call_finalizer3(type2_463,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    if(    parent_class_448) {
        __dec_obj140=klass_443->mParentClassName;
        klass_443->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_448->mName));
        /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(klass_443->mName),(struct sClass*)come_increment_ref_count(sClass_clone(klass_443)));
    }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 479, "struct sNode");
    _inf_obj_value2=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value397=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 479, "sStructNode")),(char*)come_increment_ref_count(__builtin_string(type_name)),klass_443,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStructNode_finalize;
    _inf_value2->clone=(void*)sStructNode_clone;
    _inf_value2->compile=(void*)sStructNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sStructNode_terminated;
    _inf_value2->kind=(void*)sStructNode_kind;
    node_466=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*g*/come_call_finalizer3(__right_value397,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    Value_468=node_compile(node_466,info);
    if(    !Value_468) {
        __result314__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        /* U13 */type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_466) { node_466 = come_decrement_ref_count2(node_466, ((struct sNode*)node_466)->finalize, ((struct sNode*)node_466)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    else {
    }
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 485, "struct sNode");
    _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value404=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 485, "sNothingNode")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNothingNode_finalize;
    _inf_value3->clone=(void*)sNothingNode_clone;
    _inf_value3->compile=(void*)sNothingNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNothingNode_terminated;
    _inf_value3->kind=(void*)sNothingNode_kind;
    __result317__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value407=_inf_value3));
    /* U13 */type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(node_466) { node_466 = come_decrement_ref_count2(node_466, ((struct sNode*)node_466)->finalize, ((struct sNode*)node_466)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value404,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value407) { __right_value407 = come_decrement_ref_count2(__right_value407, ((struct sNode*)__right_value407)->finalize, ((struct sNode*)__right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj136;
char* __dec_obj137;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj136=self->v1;
            come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj137=self->v2;
            /*G*/ __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj138;
char* __dec_obj139;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj138=self->v1;
            come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj139=self->v2;
            /*G*/ __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_470;
void* __right_value408 = (void*)0;
char* type_name_471;
struct sClass* struct_class_472;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct sType* type_473;
struct sType* override__474;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct sType* type_475;
struct sType* override__476;
char* source_tail_477;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct buffer* header_478;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sNode* _inf_value4;
struct sStructNobodyNode* _inf_obj_value4;
void* __right_value425 = (void*)0;
struct sNode* __result320__;
void* __right_value426 = (void*)0;
char* T_482;
void* __right_value427 = (void*)0;
struct sClass* generics_class_483;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sClass* __dec_obj155;
void* __right_value430 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type2_484=0;
char* name_485=0;
_Bool err_486=0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
char* name2_487;
void* __right_value434 = (void*)0;
struct sType* type3_488;
_Bool no_comma_489;
void* __right_value435 = (void*)0;
struct sNode* node_490;
struct sNode* __dec_obj156;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
char* source_tail_491;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct buffer* header_492;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct sNode* _inf_value5;
struct sNothingNode* _inf_obj_value5;
void* __right_value448 = (void*)0;
struct sNode* __result324__;
struct sClass* struct_class_494;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct sType* type_495;
struct sType* override__496;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct sType* type_497;
struct sType* override__498;
struct sClass* parent_class_499;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
char* parent_class_name_500;
void* __right_value457 = (void*)0;
struct sNode* __result325__;
_Bool multiple_declare_501;
char* p_502;
int sline_503;
void* __right_value458 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_504=0;
char* name_505=0;
_Bool err_506=0;
void* __right_value459 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11 = (void*)0;
struct sType* base_type_507=0;
char* name_508=0;
_Bool err_509=0;
void* __right_value460 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var12 = (void*)0;
struct sType* type2_510=0;
char* name2_511=0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var13 = (void*)0;
struct sType* type2_512=0;
char* name2_513=0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var14 = (void*)0;
struct sType* type2_514=0;
char* name_515=0;
_Bool err_516=0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sClass* klass2_517;
char* source_tail_518;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct buffer* header_519;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
char* __dec_obj159;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sNode* _inf_value6;
struct sStructNode* _inf_obj_value6;
void* __right_value482 = (void*)0;
struct sNode* __result328__;
char* source_head_521;
void* __right_value483 = (void*)0;
char* type_name_522;
struct sClass* parent_class_523;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
char* parent_class_name_524;
void* __right_value486 = (void*)0;
struct sNode* __result329__;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct list$1sClassp* parent_classes_525;
struct sClass* parent_class2_528;
void* __right_value492 = (void*)0;
struct sClass* struct_class_532;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sClass* __dec_obj166;
void* __right_value495 = (void*)0;
struct sClass* __dec_obj167;
struct sClass* defining_class_533;
void* __right_value496 = (void*)0;
char* __dec_obj168;
void* __right_value497 = (void*)0;
void* __right_value503 = (void*)0;
struct list$1sClassp* o2_saved_539;
struct sClass* parent_542;
struct list$1tuple2$2charphsTypephph* o2_saved_545;
struct tuple2$2charphsTypeph* it_546;
void* __right_value504 = (void*)0;
struct sClass* klass2_547;
void* __right_value505 = (void*)0;
char* __dec_obj169;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct list$1sClassp* o2_saved_548;
struct sClass* parent_549;
struct list$1tuple2$2charphsTypephph* o2_saved_550;
struct tuple2$2charphsTypeph* it_551;
void* __right_value508 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_552;
struct tuple2$2charphsTypeph* it_553;
void* __right_value509 = (void*)0;
char* head_554;
char* p_saved_555;
int sline_saved_556;
char* sname_saved_557;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct list$1sNodeph* methods_558;
void* __right_value512 = (void*)0;
char* __dec_obj170;
char* __dec_obj171;
struct map$2charphcharph* __dec_obj172;
_Bool include__561;
_Bool multiple_declare_562;
char* p_563;
int sline_564;
void* __right_value513 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var15 = (void*)0;
struct sType* type_565=0;
char* name_566=0;
_Bool err_567=0;
_Bool define_function_flag_568;
char* p_569;
int sline_570;
_Bool invalid_type_571;
void* __right_value514 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var16 = (void*)0;
struct sType* result_type_572=0;
char* fun_name_573=0;
_Bool err_574=0;
char* word_575;
void* __right_value515 = (void*)0;
char* __dec_obj173;
void* __right_value516 = (void*)0;
char* __dec_obj174;
char* __dec_obj175;
void* __right_value517 = (void*)0;
char* __dec_obj176;
char* tail_576;
int pointer_num_577;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sType* __dec_obj177;
void* __right_value520 = (void*)0;
struct sNode* method_578;
struct sType* __dec_obj178;
void* __right_value524 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var17 = (void*)0;
struct sType* base_type_582=0;
char* name_583=0;
_Bool err_584=0;
void* __right_value525 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var18 = (void*)0;
struct sType* type2_585=0;
char* name2_586=0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var19 = (void*)0;
struct sType* type2_587=0;
char* name2_588=0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
char* module_name_589;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct list$1charph* params_590;
void* __right_value535 = (void*)0;
char* word_591;
void* __right_value536 = (void*)0;
char* __dec_obj182;
void* __right_value537 = (void*)0;
char* __dec_obj183;
void* __right_value538 = (void*)0;
_Bool _if_conditional2;
struct sNode* __result345__;
void* __right_value539 = (void*)0;
struct sClassModule* module_595;
void* __right_value540 = (void*)0;
void* __right_value546 = (void*)0;
struct map$2charphcharph* __dec_obj189;
int i_599;
struct list$1charph* o2_saved_600;
char* it_603;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
char* __dec_obj190;
void* __right_value555 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var20 = (void*)0;
struct sType* type2_630=0;
char* name_631=0;
_Bool err_632=0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
char* __dec_obj191;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sNode* _inf_value7;
struct sClassNode* _inf_obj_value7;
void* __right_value568 = (void*)0;
struct sNode* __result370__;
void* __right_value569 = (void*)0;
struct sNode* __result371__;
struct_class_472 = (void*)0;
generics_class_483 = (void*)0;
struct_class_494 = (void*)0;
struct_class_532 = (void*)0;
    if(    charp_operator_equals(buf,"struct")) {
        source_head_470=head;
        type_name_471=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            map$2charphsClassph_at(info->classes,type_name_471,((void*)0))==((void*)0)) {
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_471),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 501, "sClass")),type_name_471,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                struct_class_472=map$2charphsClassph_at(info->classes,type_name_471,((void*)0));
                type_473=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 503, "sType")),type_name_471,(_Bool)0,info));
                override__474=map$2charphsTypeph_at(info->types,type_name_471,((void*)0));
                if(                override__474) {
                    if(                    override__474->mTypedef) {
                        type_473->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_471),(struct sType*)come_increment_ref_count(type_473));
                /*i*/come_call_finalizer3(type_473,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                struct_class_472=map$2charphsClassph_at(info->classes,type_name_471,((void*)0));
                type_475=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 514, "sType")),type_name_471,(_Bool)0,info));
                override__476=map$2charphsTypeph_at(info->types,type_name_471,((void*)0));
                if(                override__476) {
                    if(                    override__476->mTypedef) {
                        type_475->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_471),(struct sType*)come_increment_ref_count(type_475));
                /*i*/come_call_finalizer3(type_475,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            source_tail_477=info->p;
            header_478=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 526, "buffer"))));
            buffer_append(header_478,source_head_470,source_tail_477-source_head_470);
            add_come_code_at_come_header(info,"%s",((char*)(__right_value417=buffer_to_string(header_478))));
            /* U11 */__right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 531, "struct sNode");
            _inf_obj_value4=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(__right_value420=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 531, "sStructNobodyNode")),(char*)come_increment_ref_count(__builtin_string(type_name_471)),struct_class_472,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value4->clone=(void*)sStructNobodyNode_clone;
            _inf_value4->compile=(void*)sStructNobodyNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value4->kind=(void*)sStructNobodyNode_kind;
            __result320__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value425=_inf_value4));
            /*i*/come_call_finalizer3(header_478,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */type_name_471 = come_decrement_ref_count2(type_name_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value420,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value425) { __right_value425 = come_decrement_ref_count2(__right_value425, ((struct sNode*)__right_value425)->finalize, ((struct sNode*)__right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result320__;
            /*i*/come_call_finalizer3(header_478,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==60) {
            list$1charph_reset(info->generics_type_names);
            info->p++;
            skip_spaces_and_lf(info);
            while((_Bool)1) {
                T_482=(char*)come_increment_ref_count(parse_word(info));
                list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(string_clone(T_482)));
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    /* U13 */T_482 = come_decrement_ref_count2(T_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    err_msg(info,"invalid generics struct definition");
                    exit(2);
                }
                /* U13 */T_482 = come_decrement_ref_count2(T_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            map$2charphsClassph_at(info->generics_classes,type_name_471,((void*)0))!=((void*)0)) {
                err_msg(info,"redifined generics struct(%s)",type_name_471);
                exit(2);
            }
            else {
                __dec_obj155=generics_class_483;
                generics_class_483=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 564, "sClass")),type_name_471,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                come_call_finalizer3(__dec_obj155,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            map$2charphsClassph_at(info->generics_classes,type_name_471,((void*)0))==((void*)0)) {
                map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_471),(struct sClass*)come_increment_ref_count(generics_class_483));
            }
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value430=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_484=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_485=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_486=multiple_assign_var9->v3;
                /*g*/come_call_finalizer3(__right_value430,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_486) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                if(                *info->p==44) {
                    list$1tuple2$2charphsTypephph_push_back(generics_class_483->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 592, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_485),(struct sType*)come_increment_ref_count(type2_484))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        name2_487=(char*)come_increment_ref_count(parse_word(info));
                        type3_488=(struct sType*)come_increment_ref_count(sType_clone(type2_484));
                        if(                        *info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_489=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_490=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_489;
                            __dec_obj156=type3_488->mSizeNum;
                            type3_488->mSizeNum=(struct sNode*)come_increment_ref_count(node_490);
                            /* U1 */ if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
                            if(node_490) { node_490 = come_decrement_ref_count2(node_490, ((struct sNode*)node_490)->finalize, ((struct sNode*)node_490)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        list$1tuple2$2charphsTypephph_push_back(generics_class_483->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 614, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_487),(struct sType*)come_increment_ref_count(type3_488))));
                        /* U13 */name2_487 = come_decrement_ref_count2(name2_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(type3_488,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(generics_class_483->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 618, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_485),(struct sType*)come_increment_ref_count(type2_484))));
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    /*i*/come_call_finalizer3(type2_484,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */name_485 = come_decrement_ref_count2(name_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                parse_sharp_v5(info);
                /*i*/come_call_finalizer3(type2_484,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name_485 = come_decrement_ref_count2(name_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            ((char*)(__right_value440=parse_attribute(info,(_Bool)0)));
            /* U11 */__right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_reset(info->generics_type_names);
            source_tail_491=info->p;
            header_492=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 643, "buffer"))));
            buffer_append_str(header_492,"struct ");
            buffer_append(header_492,source_head_470,source_tail_491-source_head_470);
            add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value443=buffer_to_string(header_492))));
            /* U11 */__right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 649, "struct sNode");
            _inf_obj_value5=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value445=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 649, "sNothingNode")),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNothingNode_finalize;
            _inf_value5->clone=(void*)sNothingNode_clone;
            _inf_value5->compile=(void*)sNothingNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNothingNode_terminated;
            _inf_value5->kind=(void*)sNothingNode_kind;
            __result324__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value448=_inf_value5));
            /*i*/come_call_finalizer3(generics_class_483,sClass_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_492,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */type_name_471 = come_decrement_ref_count2(type_name_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value445,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value448) { __right_value448 = come_decrement_ref_count2(__right_value448, ((struct sNode*)__right_value448)->finalize, ((struct sNode*)__right_value448)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result324__;
            /*i*/come_call_finalizer3(generics_class_483,sClass_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_492,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(            map$2charphsClassph_at(info->classes,type_name_471,((void*)0))==((void*)0)) {
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_471),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 654, "sClass")),type_name_471,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                type_495=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 656, "sType")),type_name_471,(_Bool)0,info));
                override__496=map$2charphsTypeph_at(info->types,type_name_471,((void*)0));
                if(                override__496) {
                    if(                    override__496->mTypedef) {
                        type_495->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_471),(struct sType*)come_increment_ref_count(type_495));
                struct_class_494=map$2charphsClassph_at(info->classes,type_name_471,((void*)0));
                /*i*/come_call_finalizer3(type_495,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                type_497=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 668, "sType")),type_name_471,(_Bool)0,info));
                override__498=map$2charphsTypeph_at(info->types,type_name_471,((void*)0));
                if(                override__498) {
                    if(                    override__498->mTypedef) {
                        type_497->mTypedef=(_Bool)1;
                    }
                }
                map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(type_name_471),(struct sType*)come_increment_ref_count(type_497));
                struct_class_494=map$2charphsClassph_at(info->classes,type_name_471,((void*)0));
                /*i*/come_call_finalizer3(type_497,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            parent_class_499=((void*)0);
            if(            parsecmp("extends",info)) {
                ((char*)(__right_value455=parse_word(info)));
                /* U11 */__right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parent_class_name_500=(char*)come_increment_ref_count(parse_word(info));
                parent_class_499=((struct sClass*)(__right_value457=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_500)));
                /*g*/come_call_finalizer3(__right_value457,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                parent_class_499==((void*)0)) {
                    err_msg(info,"invalid class name(%s)",parent_class_name_500);
                    __result325__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    /* U13 */parent_class_name_500 = come_decrement_ref_count2(parent_class_name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /* U13 */type_name_471 = come_decrement_ref_count2(type_name_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result325__;
                }
                /* U13 */parent_class_name_500 = come_decrement_ref_count2(parent_class_name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_declare_501=(_Bool)0;
                {
                    p_502=info->p;
                    sline_503=info->sline;
                    multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value458=backtrace_parse_type((_Bool)1,info)));
                    type_504=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_505=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_506=multiple_assign_var10->v3;
                    /*g*/come_call_finalizer3(__right_value458,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_506&&*info->p==44) {
                        multiple_declare_501=(_Bool)1;
                    }
                    info->p=p_502;
                    info->sline=sline_503;
                    /*i*/come_call_finalizer3(type_504,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */name_505 = come_decrement_ref_count2(name_505, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(                multiple_declare_501) {
                    multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value459=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    base_type_507=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                    name_508=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                    err_509=multiple_assign_var11->v3;
                    /*g*/come_call_finalizer3(__right_value459,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    multiple_assign_var12=((struct tuple2$2sTypephcharph*)(__right_value460=parse_variable_name((struct sType*)come_increment_ref_count(base_type_507),(_Bool)1,info)));
                    type2_510=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                    name2_511=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                    /*g*/come_call_finalizer3(__right_value460,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1tuple2$2charphsTypephph_push_back(struct_class_494->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 725, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_511),(struct sType*)come_increment_ref_count(type2_510))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var13=((struct tuple2$2sTypephcharph*)(__right_value463=parse_variable_name((struct sType*)come_increment_ref_count(base_type_507),(_Bool)0,info)));
                        type2_512=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_513=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        /*g*/come_call_finalizer3(__right_value463,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1tuple2$2charphsTypephph_push_back(struct_class_494->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 733, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_513),(struct sType*)come_increment_ref_count(type2_512))));
                        /*i*/come_call_finalizer3(type2_512,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */name2_513 = come_decrement_ref_count2(name2_513, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(base_type_507,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */name_508 = come_decrement_ref_count2(name_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(type2_510,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */name2_511 = come_decrement_ref_count2(name2_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    multiple_assign_var14=((struct tuple3$3sTypephcharphbool*)(__right_value466=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_514=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                    name_515=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                    err_516=multiple_assign_var14->v3;
                    /*g*/come_call_finalizer3(__right_value466,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_516) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    list$1tuple2$2charphsTypephph_push_back(struct_class_494->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 743, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_515),(struct sType*)come_increment_ref_count(type2_514))));
                    /*i*/come_call_finalizer3(type2_514,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */name_515 = come_decrement_ref_count2(name_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
            }
            ((char*)(__right_value469=parse_attribute(info,(_Bool)0)));
            /* U11 */__right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            list$1charph_reset(info->generics_type_names);
            klass2_517=map$2charphsClassph_at(info->classes,type_name_471,((void*)0));
            source_tail_518=info->p;
            header_519=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 770, "buffer"))));
            buffer_append(header_519,source_head_470,source_tail_518-source_head_470);
            add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value472=buffer_to_string(header_519))));
            /* U11 */__right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            parent_class_499) {
                __dec_obj159=struct_class_494->mParentClassName;
                struct_class_494->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_499->mName));
                /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(struct_class_494->mName),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_494)));
            }
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 780, "struct sNode");
            _inf_obj_value6=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value477=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 780, "sStructNode")),(char*)come_increment_ref_count(__builtin_string(type_name_471)),struct_class_494,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sStructNode_finalize;
            _inf_value6->clone=(void*)sStructNode_clone;
            _inf_value6->compile=(void*)sStructNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sStructNode_terminated;
            _inf_value6->kind=(void*)sStructNode_kind;
            __result328__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value482=_inf_value6));
            /*i*/come_call_finalizer3(header_519,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */type_name_471 = come_decrement_ref_count2(type_name_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value477,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value482) { __right_value482 = come_decrement_ref_count2(__right_value482, ((struct sNode*)__right_value482)->finalize, ((struct sNode*)__right_value482)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result328__;
            /*i*/come_call_finalizer3(header_519,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        /* U13 */type_name_471 = come_decrement_ref_count2(type_name_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"class")) {
        source_head_521=head;
        type_name_522=(char*)come_increment_ref_count(parse_word(info));
        add_come_code_at_come_header(info,"struct %s;\n",type_name_522);
        parent_class_523=((void*)0);
        if(        parsecmp("extends",info)) {
            ((char*)(__right_value484=parse_word(info)));
            /* U11 */__right_value484 = come_decrement_ref_count2(__right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parent_class_name_524=(char*)come_increment_ref_count(parse_word(info));
            parent_class_523=((struct sClass*)(__right_value486=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_524)));
            /*g*/come_call_finalizer3(__right_value486,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            if(            parent_class_523==((void*)0)) {
                err_msg(info,"invalid class name(%s)",parent_class_name_524);
                __result329__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                /* U13 */parent_class_name_524 = come_decrement_ref_count2(parent_class_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */type_name_522 = come_decrement_ref_count2(type_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result329__;
            }
            /* U13 */parent_class_name_524 = come_decrement_ref_count2(parent_class_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        parent_classes_525=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "14struct.c", 804, "list$1sClassp"))));
        parent_class2_528=parent_class_523;
        while(parent_class2_528) {
            list$1sClassp_add(parent_classes_525,parent_class2_528);
            if(            parent_class_523->mParentClassName) {
                parent_class2_528=((struct sClass*)(__right_value492=map$2charphsClassphp_operator_load_element(info->classes,parent_class_523->mParentClassName)));
                /*g*/come_call_finalizer3(__right_value492,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                parent_class2_528=((void*)0);
            }
        }
        if(        map$2charphsClassph_at(info->classes,type_name_522,((void*)0))==((void*)0)) {
            __dec_obj166=struct_class_532;
            struct_class_532=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 819, "sClass")),type_name_522,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
            come_call_finalizer3(__dec_obj166,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            __dec_obj167=struct_class_532;
            struct_class_532=(struct sClass*)come_increment_ref_count(sClass_clone(map$2charphsClassph_at(info->classes,type_name_522,((void*)0))));
            come_call_finalizer3(__dec_obj167,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
        defining_class_533=info->defining_class;
        info->defining_class=struct_class_532;
        if(        map$2charphsClassph_at(info->classes,type_name_522,((void*)0))==((void*)0)) {
            if(            parent_class_523) {
                __dec_obj168=struct_class_532->mParentClassName;
                struct_class_532->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_523->mName));
                /*G*/ __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_522),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_532)));
            for(            o2_saved_539=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value503=list$1sClassp_reverse(parent_classes_525))))),parent_542=list$1sClassp_begin((o2_saved_539)) ,            /*f*/come_call_finalizer3(__right_value503,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClassp_end((o2_saved_539));            parent_542=list$1sClassp_next((o2_saved_539))            ){
                for(                o2_saved_545=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_542->mFields)),it_546=list$1tuple2$2charphsTypephph_begin((o2_saved_545));                !list$1tuple2$2charphsTypephph_end((o2_saved_545));                it_546=list$1tuple2$2charphsTypephph_next((o2_saved_545))                ){
                    list$1tuple2$2charphsTypephph_add(struct_class_532->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_546)));
                }
                /*i*/come_call_finalizer3(o2_saved_545,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_539,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,type_name_522,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(struct_class_532->mFields)>0) {
            klass2_547=map$2charphsClassph_at(info->classes,type_name_522,((void*)0));
            if(            parent_class_523) {
                __dec_obj169=klass2_547->mParentClassName;
                klass2_547->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_523->mName));
                /*G*/ __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_522),(struct sClass*)come_increment_ref_count(sClass_clone(klass2_547)));
            for(            o2_saved_548=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value507=list$1sClassp_reverse(parent_classes_525))))),parent_549=list$1sClassp_begin((o2_saved_548)) ,            /*f*/come_call_finalizer3(__right_value507,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClassp_end((o2_saved_548));            parent_549=list$1sClassp_next((o2_saved_548))            ){
                for(                o2_saved_550=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_549->mFields)),it_551=list$1tuple2$2charphsTypephph_begin((o2_saved_550));                !list$1tuple2$2charphsTypephph_end((o2_saved_550));                it_551=list$1tuple2$2charphsTypephph_next((o2_saved_550))                ){
                    list$1tuple2$2charphsTypephph_add(klass2_547->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_551)));
                }
                /*i*/come_call_finalizer3(o2_saved_550,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_548,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            for(            o2_saved_552=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct_class_532->mFields)),it_553=list$1tuple2$2charphsTypephph_begin((o2_saved_552));            !list$1tuple2$2charphsTypephph_end((o2_saved_552));            it_553=list$1tuple2$2charphsTypephph_next((o2_saved_552))            ){
                list$1tuple2$2charphsTypephph_add(klass2_547->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_553)));
            }
            /*i*/come_call_finalizer3(o2_saved_552,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        expected_next_character(123,info);
        head_554=info->p;
        p_saved_555=((void*)0);
        sline_saved_556=0;
        sname_saved_557=((void*)0);
        methods_558=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "14struct.c", 866, "list$1sNodeph"))));
        while((_Bool)1) {
            if(            p_saved_555) {
                if(                *info->p==0) {
                    info->p=p_saved_555;
                    info->sline=sline_saved_556;
                    __dec_obj170=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_557));
                    /*G*/ __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_555=((void*)0);
                    sline_saved_556=0;
                    __dec_obj171=sname_saved_557;
                    sname_saved_557=((void*)0);
                    /*G*/ __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj172=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj172,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            include__561=parsecmp("include",info);
            multiple_declare_562=(_Bool)0;
            if(            include__561==(_Bool)0) {
                p_563=info->p;
                sline_564=info->sline;
                if(                memcmp(info->p,"new(",4)!=0) {
                    multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(__right_value513=backtrace_parse_type((_Bool)1,info)));
                    type_565=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                    name_566=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    err_567=multiple_assign_var15->v3;
                    /*g*/come_call_finalizer3(__right_value513,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_567&&*info->p==44) {
                        multiple_declare_562=(_Bool)1;
                    }
                    /*i*/come_call_finalizer3(type_565,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */name_566 = come_decrement_ref_count2(name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                info->p=p_563;
                info->sline=sline_564;
            }
            define_function_flag_568=(_Bool)0;
            if(            include__561==(_Bool)0) {
                p_569=info->p;
                sline_570=info->sline;
                if(                memcmp(info->p,"new(",4)==0) {
                    define_function_flag_568=(_Bool)1;
                }
                else {
                    invalid_type_571=(_Bool)0;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(__right_value514=backtrace_parse_type((_Bool)0,info)));
                        result_type_572=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        fun_name_573=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_574=multiple_assign_var16->v3;
                        /*g*/come_call_finalizer3(__right_value514,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        /*i*/come_call_finalizer3(result_type_572,sType_finalize, 0, 0, 0, 0, (void*)0);
                        /* U13 */fun_name_573 = come_decrement_ref_count2(fun_name_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    word_575=((void*)0);
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj173=word_575;
                        word_575=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_575,"extern")) {
                            __dec_obj174=word_575;
                            word_575=(char*)come_increment_ref_count(parse_word(info));
                            /*G*/ __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                    }
                    else {
                        __dec_obj175=word_575;
                        word_575=((void*)0);
                        /*G*/ __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    info->no_output_err=(_Bool)0;
                    if(                    word_575) {
                        if(                        is_type_name(word_575,info)) {
                            while(*info->p==42) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==91&&*(info->p+1)==93) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            xisalnum(*info->p)||*info->p==95) {
                                __dec_obj176=word_575;
                                word_575=(char*)come_increment_ref_count(parse_word(info));
                                /*G*/ __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                        }
                        if(                        strlen(word_575)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                            define_function_flag_568=(_Bool)1;
                        }
                    }
                    /* U13 */word_575 = come_decrement_ref_count2(word_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                info->p=p_569;
                info->sline=sline_570;
            }
            if(            define_function_flag_568) {
                tail_576=info->p;
                pointer_num_577=1;
                __dec_obj177=info->impl_type;
                info->impl_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 976, "sType")),type_name_522,(_Bool)0,info));
                come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
                info->impl_type->mPointerNum=pointer_num_577;
                info->in_class=(_Bool)1;
                method_578=(struct sNode*)come_increment_ref_count(parse_function(info));
                __dec_obj178=info->impl_type;
                info->impl_type=((void*)0);
                come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
                info->in_class=(_Bool)0;
                list$1sNodeph_push_back(methods_558,(struct sNode*)come_increment_ref_count(method_578));
                if(method_578) { method_578 = come_decrement_ref_count2(method_578, ((struct sNode*)method_578)->finalize, ((struct sNode*)method_578)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            multiple_declare_562) {
                multiple_assign_var17=((struct tuple3$3sTypephcharphbool*)(__right_value524=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_582=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                name_583=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                err_584=multiple_assign_var17->v3;
                /*g*/come_call_finalizer3(__right_value524,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var18=((struct tuple2$2sTypephcharph*)(__right_value525=parse_variable_name((struct sType*)come_increment_ref_count(base_type_582),(_Bool)1,info)));
                type2_585=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                name2_586=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                /*g*/come_call_finalizer3(__right_value525,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                list$1tuple2$2charphsTypephph_push_back(struct_class_532->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 993, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_586),(struct sType*)come_increment_ref_count(type2_585))));
                while(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    multiple_assign_var19=((struct tuple2$2sTypephcharph*)(__right_value528=parse_variable_name((struct sType*)come_increment_ref_count(base_type_582),(_Bool)0,info)));
                    type2_587=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                    name2_588=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    /*g*/come_call_finalizer3(__right_value528,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1tuple2$2charphsTypephph_push_back(struct_class_532->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1001, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_588),(struct sType*)come_increment_ref_count(type2_587))));
                    /*i*/come_call_finalizer3(type2_587,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */name2_588 = come_decrement_ref_count2(name2_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                expected_next_character(59,info);
                /*i*/come_call_finalizer3(base_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name_583 = come_decrement_ref_count2(name_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_585,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name2_586 = come_decrement_ref_count2(name2_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            parsecmp("include",info)) {
                ((char*)(__right_value531=parse_word(info)));
                /* U11 */__right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_589=(char*)come_increment_ref_count(parse_word(info));
                params_590=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "14struct.c", 1010, "list$1charph"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_591=(char*)come_increment_ref_count(parse_word(info));
                        list$1charph_add(params_590,(char*)come_increment_ref_count(word_591));
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
                            /* U13 */word_591 = come_decrement_ref_count2(word_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        /* U13 */word_591 = come_decrement_ref_count2(word_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_555=info->p;
                sline_saved_556=info->sline;
                __dec_obj182=sname_saved_557;
                sname_saved_557=(char*)come_increment_ref_count(__builtin_string(info->sname));
                /*G*/ __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj183=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_589));
                /*G*/ __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional2=(((struct sClassModule*)(__right_value538=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_589)))==((void*)0))),                /*f*/come_call_finalizer3(__right_value538,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional2) {
                    err_msg(info,"module not found");
                    __result345__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    /* U13 */module_name_589 = come_decrement_ref_count2(module_name_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(params_590,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */type_name_522 = come_decrement_ref_count2(type_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(parent_classes_525,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(struct_class_532,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */sname_saved_557 = come_decrement_ref_count2(sname_saved_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(methods_558,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result345__;
                }
                module_595=((struct sClassModule*)come_null_check(((struct sClassModule*)(__right_value539=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_589))), "14struct.c", 1057, 3));
                /*g*/come_call_finalizer3(__right_value539,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charph_length(module_595->mParams)!=list$1charph_length(params_590)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj189=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "14struct.c", 1064, "map$2charphcharph"))));
                come_call_finalizer3(__dec_obj189,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_599=0;
                for(                o2_saved_600=(struct list$1charph*)come_increment_ref_count((module_595->mParams)),it_603=list$1charph_begin((o2_saved_600));                !list$1charph_end((o2_saved_600));                it_603=list$1charph_next((o2_saved_600))                ){
                    ((char*)(__right_value553=map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_603)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(((char*)(__right_value548=list$1charphp_operator_load_element(params_590,i_599))), "14struct.c", 1068, 4)))))));
                    /* U11 */__right_value548 = come_decrement_ref_count2(__right_value548, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    /* U11 */__right_value553 = come_decrement_ref_count2(__right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_599++;
                }
                /*i*/come_call_finalizer3(o2_saved_600,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_595->mText;
                info->sline=module_595->mSLine;
                __dec_obj190=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_595->mSName));
                /*G*/ __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */module_name_589 = come_decrement_ref_count2(module_name_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(params_590,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var20=((struct tuple3$3sTypephcharphbool*)(__right_value555=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_630=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                name_631=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                err_632=multiple_assign_var20->v3;
                /*g*/come_call_finalizer3(__right_value555,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_632) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                list$1tuple2$2charphsTypephph_push_back(struct_class_532->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1083, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_631),(struct sType*)come_increment_ref_count(type2_630))));
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                /*i*/come_call_finalizer3(type2_630,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name_631 = come_decrement_ref_count2(name_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
        }
        if(        p_saved_555) {
            if(            info->p==0) {
                info->p=p_saved_555;
                info->sline=sline_saved_556;
                __dec_obj191=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_557));
                /*G*/ __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_555=((void*)0);
                sline_saved_556=0;
            }
        }
        list$1charph_reset(info->generics_type_names);
        info->defining_class=defining_class_533;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1116, "struct sNode");
        _inf_obj_value7=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(__right_value562=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1116, "sClassNode")),(char*)come_increment_ref_count(__builtin_string(type_name_522)),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_532)),(struct list$1sNodeph*)come_increment_ref_count(methods_558),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sClassNode_finalize;
        _inf_value7->clone=(void*)sClassNode_clone;
        _inf_value7->compile=(void*)sClassNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sClassNode_terminated;
        _inf_value7->kind=(void*)sClassNode_kind;
        __result370__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value568=_inf_value7));
        /* U13 */type_name_522 = come_decrement_ref_count2(type_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(parent_classes_525,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(struct_class_532,sClass_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_saved_557 = come_decrement_ref_count2(sname_saved_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(methods_558,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value562,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value568) { __right_value568 = come_decrement_ref_count2(__right_value568, ((struct sNode*)__right_value568)->finalize, ((struct sNode*)__right_value568)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result370__;
        /* U13 */type_name_522 = come_decrement_ref_count2(type_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(parent_classes_525,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(struct_class_532,sClass_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */sname_saved_557 = come_decrement_ref_count2(sname_saved_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(methods_558,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result371__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value569=top_level_v97(buf,head,head_sline,info)));
    if(__right_value569) { __right_value569 = come_decrement_ref_count2(__right_value569, ((struct sNode*)__right_value569)->finalize, ((struct sNode*)__right_value569)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
char* __dec_obj149;
char* __dec_obj150;
struct sClass* __dec_obj151;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj149=self->sname;
            /*G*/ __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj150=self->mName;
            /*G*/ __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj151=self->mClass;
            come_call_finalizer3(__dec_obj151,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
struct sStructNobodyNode* __result318__;
void* __right_value421 = (void*)0;
struct sStructNobodyNode* result_479;
void* __right_value422 = (void*)0;
char* __dec_obj152;
void* __right_value423 = (void*)0;
char* __dec_obj153;
void* __right_value424 = (void*)0;
struct sClass* __dec_obj154;
struct sStructNobodyNode* __result319__;
    if(    self==(void*)0) {
        __result318__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    result_479=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "sStructNobodyNode"));
    if(    self!=((void*)0)) {
        result_479->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj152=result_479->sname;
        result_479->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_479->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj153=result_479->mName;
        result_479->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj154=result_479->mClass;
        result_479->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer3(__dec_obj154,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result319__ = gComeFunResultObject = __result_obj__ = result_479;
    /*i*/come_call_finalizer3(result_479,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_480;
struct list_item$1charph* prev_it_481;
struct list$1charph* __result321__;
    it_480=self->head;
    while(it_480!=((void*)0)) {
        prev_it_481=it_480;
        it_480=it_480->next;
        /*i*/come_call_finalizer3(prev_it_481,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static void sNothingNode_finalize(struct sNothingNode* self){
char* __dec_obj157;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj157=self->sname;
            /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
void* __result_obj__=(void*)0;
struct sNothingNode* __result322__;
void* __right_value446 = (void*)0;
struct sNothingNode* result_493;
void* __right_value447 = (void*)0;
char* __dec_obj158;
struct sNothingNode* __result323__;
    if(    self==(void*)0) {
        __result322__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    result_493=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "sNothingNode"));
    if(    self!=((void*)0)) {
        result_493->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj158=result_493->sname;
        result_493->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_493->sline_real=self->sline_real;
    }
    __result323__ = gComeFunResultObject = __result_obj__ = result_493;
    /*i*/come_call_finalizer3(result_493,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static void sStructNode_finalize(struct sStructNode* self){
char* __dec_obj160;
char* __dec_obj161;
struct sClass* __dec_obj162;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj160=self->sname;
            /*G*/ __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj161=self->mName;
            /*G*/ __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj162=self->mClass;
            come_call_finalizer3(__dec_obj162,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__=(void*)0;
struct sStructNode* __result326__;
void* __right_value478 = (void*)0;
struct sStructNode* result_520;
void* __right_value479 = (void*)0;
char* __dec_obj163;
void* __right_value480 = (void*)0;
char* __dec_obj164;
void* __right_value481 = (void*)0;
struct sClass* __dec_obj165;
struct sStructNode* __result327__;
    if(    self==(void*)0) {
        __result326__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    result_520=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "sStructNode"));
    if(    self!=((void*)0)) {
        result_520->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj163=result_520->sname;
        result_520->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_520->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj164=result_520->mName;
        result_520->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj165=result_520->mClass;
        result_520->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer3(__dec_obj165,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result327__ = gComeFunResultObject = __result_obj__ = result_520;
    /*i*/come_call_finalizer3(result_520,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct list$1sClassp* __result330__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result330__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static void list$1sClasspp_finalize(struct list$1sClassp* self){
struct list_item$1sClassp* it_526;
struct list_item$1sClassp* prev_it_527;
    it_526=self->head;
    while(it_526!=((void*)0)) {
        prev_it_527=it_526;
        it_526=it_526->next;
        /*i*/come_call_finalizer3(prev_it_527,list_item$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self){
}

static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value489 = (void*)0;
struct list_item$1sClassp* litem_529;
void* __right_value490 = (void*)0;
struct list_item$1sClassp* litem_530;
void* __right_value491 = (void*)0;
struct list_item$1sClassp* litem_531;
struct list$1sClassp* __result331__;
    if(    self->len==0) {
        litem_529=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value489=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1040, "list_item$1sClassp"))));
        litem_529->prev=((void*)0);
        litem_529->next=((void*)0);
        litem_529->item=item;
        self->tail=litem_529;
        self->head=litem_529;
    }
    else if(    self->len==1) {
        litem_530=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value490=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1050, "list_item$1sClassp"))));
        litem_530->prev=self->head;
        litem_530->next=((void*)0);
        litem_530->item=item;
        self->tail=litem_530;
        self->head->next=litem_530;
    }
    else {
        litem_531=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value491=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1060, "list_item$1sClassp"))));
        litem_531->prev=self->tail;
        litem_531->next=((void*)0);
        litem_531->item=item;
        self->tail->next=litem_531;
        self->tail=litem_531;
    }
    self->len++;
    __result331__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct list$1sClassp* result_534;
struct list_item$1sClassp* it_535;
struct list$1sClassp* __result333__;
    result_534=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "/usr/local/include/comelang.h", 1779, "list$1sClassp"))));
    it_535=self->tail;
    while(it_535!=((void*)0)) {
        list$1sClassp_push_back(result_534,it_535->item);
        it_535=it_535->prev;
    }
    __result333__ = gComeFunResultObject = __result_obj__ = result_534;
    /*i*/come_call_finalizer3(result_534,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value500 = (void*)0;
struct list_item$1sClassp* litem_536;
void* __right_value501 = (void*)0;
struct list_item$1sClassp* litem_537;
void* __right_value502 = (void*)0;
struct list_item$1sClassp* litem_538;
struct list$1sClassp* __result332__;
    if(    self->len==0) {
        litem_536=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value500=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1sClassp"))));
        litem_536->prev=((void*)0);
        litem_536->next=((void*)0);
        litem_536->item=item;
        self->tail=litem_536;
        self->head=litem_536;
    }
    else if(    self->len==1) {
        litem_537=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value501=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1sClassp"))));
        litem_537->prev=self->head;
        litem_537->next=((void*)0);
        litem_537->item=item;
        self->tail=litem_537;
        self->head->next=litem_537;
    }
    else {
        litem_538=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value502=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1sClassp"))));
        litem_538->prev=self->tail;
        litem_538->next=((void*)0);
        litem_538->item=item;
        self->tail->next=litem_538;
        self->tail=litem_538;
    }
    self->len++;
    __result332__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static struct sClass* list$1sClassp_begin(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_540;
struct sClass* __result334__;
struct sClass* __result335__;
struct sClass* result_541;
struct sClass* __result336__;
result_540 = (void*)0;
result_541 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_540,0,sizeof(struct sClass*));
        __result334__ = gComeFunResultObject = __result_obj__ = result_540;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    self->it=self->head;
    if(    self->it) {
        __result335__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    memset(&result_541,0,sizeof(struct sClass*));
    __result336__ = gComeFunResultObject = __result_obj__ = result_541;
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static _Bool list$1sClassp_end(struct list$1sClassp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClassp_next(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_543;
struct sClass* __result337__;
struct sClass* __result338__;
struct sClass* result_544;
struct sClass* __result339__;
result_543 = (void*)0;
result_544 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_543,0,sizeof(struct sClass*));
        __result337__ = gComeFunResultObject = __result_obj__ = result_543;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result338__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    memset(&result_544,0,sizeof(struct sClass*));
    __result339__ = gComeFunResultObject = __result_obj__ = result_544;
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_559;
int i_560;
    for(    i_559=0;    i_559<self->size;    i_559++    ){
        if(        self->item_existance[i_559]) {
            if(            1) {
                /* U13 */self->items[i_559] = come_decrement_ref_count2(self->items[i_559], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_560=0;    i_560<self->size;    i_560++    ){
        if(        self->item_existance[i_560]) {
            if(            1) {
                /* U13 */self->keys[i_560] = come_decrement_ref_count2(self->keys[i_560], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value521 = (void*)0;
struct list_item$1sNodeph* litem_579;
struct sNode* __dec_obj179;
void* __right_value522 = (void*)0;
struct list_item$1sNodeph* litem_580;
struct sNode* __dec_obj180;
void* __right_value523 = (void*)0;
struct list_item$1sNodeph* litem_581;
struct sNode* __dec_obj181;
struct list$1sNodeph* __result340__;
    if(    self->len==0) {
        litem_579=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value521=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1110, "list_item$1sNodeph"))));
        litem_579->prev=((void*)0);
        litem_579->next=((void*)0);
        __dec_obj179=litem_579->item;
        litem_579->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_579;
        self->head=litem_579;
    }
    else if(    self->len==1) {
        litem_580=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value522=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1120, "list_item$1sNodeph"))));
        litem_580->prev=self->head;
        litem_580->next=((void*)0);
        __dec_obj180=litem_580->item;
        litem_580->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_580;
        self->head->next=litem_580;
    }
    else {
        litem_581=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value523=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "/usr/local/include/comelang.h", 1130, "list_item$1sNodeph"))));
        litem_581->prev=self->tail;
        litem_581->next=((void*)0);
        __dec_obj181=litem_581->item;
        litem_581->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_581;
        self->tail=litem_581;
    }
    self->len++;
    __result340__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_592;
unsigned int hash_593;
unsigned int it_594;
struct sClassModule* __result341__;
struct sClassModule* __result342__;
struct sClassModule* __result343__;
struct sClassModule* __result344__;
default_value_592 = (void*)0;
    memset(&default_value_592,0,sizeof(struct sClassModule*));
    hash_593=charp_get_hash_key(((char*)key))%self->size;
    it_594=hash_593;
    while((_Bool)1) {
        if(        self->item_existance[it_594]) {
            if(            charp_equals(self->keys[it_594],key)) {
                __result341__ = gComeFunResultObject = __result_obj__ = self->items[it_594];
                /*i*/come_call_finalizer3(default_value_592,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result341__;
            }
            it_594++;
            if(            it_594>=self->size) {
                it_594=0;
            }
            else if(            it_594==hash_593) {
                __result342__ = gComeFunResultObject = __result_obj__ = default_value_592;
                /*i*/come_call_finalizer3(default_value_592,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result342__;
            }
        }
        else {
            __result343__ = gComeFunResultObject = __result_obj__ = default_value_592;
            /*i*/come_call_finalizer3(default_value_592,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result343__;
        }
    }
    __result344__ = gComeFunResultObject = __result_obj__ = default_value_592;
    /*i*/come_call_finalizer3(default_value_592,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj184;
char* __dec_obj185;
struct list$1charph* __dec_obj186;
char* __dec_obj187;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj184=self->mName;
            /*G*/ __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj185=self->mText;
            /*G*/ __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj186=self->mParams;
            come_call_finalizer3(__dec_obj186,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj187=self->mSName;
            /*G*/ __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
int i_596;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct list$1charp* __dec_obj188;
struct map$2charphcharph* __result347__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value541=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2287, "char*%"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value542=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "/usr/local/include/comelang.h", 2288, "char*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value543=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/comelang.h", 2289, "bool"))));
    for(    i_596=0;    i_596<128;    i_596++    ){
        self->item_existance[i_596]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj188=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "/usr/local/include/comelang.h", 2299, "list$1charp"))));
    come_call_finalizer3(__dec_obj188,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result347__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result346__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result346__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_597;
int i_598;
    for(    i_597=0;    i_597<self->size;    i_597++    ){
        if(        self->item_existance[i_597]) {
            if(            1) {
                /* U13 */self->items[i_597] = come_decrement_ref_count2(self->items[i_597], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_598=0;    i_598<self->size;    i_598++    ){
        if(        self->item_existance[i_598]) {
            if(            1) {
                /* U13 */self->keys[i_598] = come_decrement_ref_count2(self->keys[i_598], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_601;
char* __result348__;
char* __result349__;
char* result_602;
char* __result350__;
result_601 = (void*)0;
result_602 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_601,0,sizeof(char*));
        __result348__ = gComeFunResultObject = __result_obj__ = result_601;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    self->it=self->head;
    if(    self->it) {
        __result349__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result349__;
    }
    memset(&result_602,0,sizeof(char*));
    __result350__ = gComeFunResultObject = __result_obj__ = result_602;
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_604;
char* __result351__;
char* __result352__;
char* result_605;
char* __result353__;
result_604 = (void*)0;
result_605 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_604,0,sizeof(char*));
        __result351__ = gComeFunResultObject = __result_obj__ = result_604;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result352__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result352__;
    }
    memset(&result_605,0,sizeof(char*));
    __result353__ = gComeFunResultObject = __result_obj__ = result_605;
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_606;
int i_607;
char* __result354__;
char* default_value_608;
char* __result355__;
default_value_608 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_606=self->head;
    i_607=0;
    while(it_606!=((void*)0)) {
        if(        position==i_607) {
            __result354__ = gComeFunResultObject = __result_obj__ = it_606->item;
            gComeFunResultObject = (void*)0;
            return __result354__;
        }
        it_606=it_606->next;
        i_607++;
    }
    memset(&default_value_608,0,sizeof(char*));
    __result355__ = gComeFunResultObject = __result_obj__ = default_value_608;
    /* U13 */default_value_608 = come_decrement_ref_count2(default_value_608, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
char* __result367__;
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    __result367__ = gComeFunResultObject = __result_obj__ = item;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_626;
unsigned int it_627;
_Bool same_key_exist_628;
char* it2_629;
struct map$2charphcharph* __result366__;
    if(    self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_626=charp_get_hash_key(key)%self->size;
    it_627=hash_626;
    while((_Bool)1) {
        if(        self->item_existance[it_627]) {
            if(            charp_equals(self->keys[it_627],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_627]);
                    /* U13 */self->keys[it_627] = come_decrement_ref_count2(self->keys[it_627], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_627]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_627]);
                    self->keys[it_627]=key;
                }
                if(                1) {
                    /* U13 */self->items[it_627] = come_decrement_ref_count2(self->items[it_627], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_627]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_627]=item;
                }
                break;
            }
            it_627++;
            if(            it_627>=self->size) {
                it_627=0;
            }
            else if(            it_627==hash_626) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_627]=(_Bool)1;
            if(            1) {
                self->keys[it_627]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_627]=key;
            }
            if(            1) {
                self->items[it_627]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_627]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_628=(_Bool)0;
    for(    it2_629=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_629=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_629,key)) {
            same_key_exist_628=(_Bool)1;
        }
    }
    if(    !same_key_exist_628) {
        list$1charp_push_back(self->key_list,key);
    }
    __result366__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_609;
void* __right_value550 = (void*)0;
char** keys_610;
void* __right_value551 = (void*)0;
char** items_611;
void* __right_value552 = (void*)0;
_Bool* item_existance_612;
int len_613;
char* it_616;
char* default_value_619;
char* it2_620;
unsigned int hash_623;
int n_624;
char* default_value_625;
default_value_619 = (void*)0;
default_value_625 = (void*)0;
    size_609=self->size*10;
    keys_610=(char**)come_increment_ref_count(((char**)(__right_value550=(char**)come_calloc(1, sizeof(char*)*(1*(size_609)), "/usr/local/include/comelang.h", 2515, "char*%"))));
    items_611=(char**)come_increment_ref_count(((char**)(__right_value551=(char**)come_calloc(1, sizeof(char*)*(1*(size_609)), "/usr/local/include/comelang.h", 2516, "char*%"))));
    item_existance_612=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value552=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_609)), "/usr/local/include/comelang.h", 2517, "bool"))));
    len_613=0;
    for(    it_616=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_616=map$2charphcharph_next(self)    ){
        memset(&default_value_619,0,sizeof(char*));
        it2_620=map$2charphcharph_at(self,it_616,default_value_619);
        hash_623=charp_get_hash_key(it_616)%size_609;
        n_624=hash_623;
        while((_Bool)1) {
            if(            item_existance_612[n_624]) {
                n_624++;
                if(                n_624>=size_609) {
                    n_624=0;
                }
                else if(                n_624==hash_623) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_612[n_624]=(_Bool)1;
                keys_610[n_624]=it_616;
                items_611[n_624]=map$2charphcharph_at(self,it_616,default_value_625);
                len_613++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_610;
    self->items=items_611;
    self->item_existance=item_existance_612;
    self->size=size_609;
    self->len=len_613;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_614;
char* __result356__;
char* __result357__;
char* result_615;
char* __result358__;
result_614 = (void*)0;
result_615 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_614,0,sizeof(char*));
        __result356__ = gComeFunResultObject = __result_obj__ = result_614;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result357__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    memset(&result_615,0,sizeof(char*));
    __result358__ = gComeFunResultObject = __result_obj__ = result_615;
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_617;
char* __result359__;
char* __result360__;
char* result_618;
char* __result361__;
result_617 = (void*)0;
result_618 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_617,0,sizeof(char*));
        __result359__ = gComeFunResultObject = __result_obj__ = result_617;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result360__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    memset(&result_618,0,sizeof(char*));
    __result361__ = gComeFunResultObject = __result_obj__ = result_618;
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_621;
unsigned int it_622;
char* __result362__;
char* __result363__;
char* __result364__;
char* __result365__;
    hash_621=charp_get_hash_key(((char*)key))%self->size;
    it_622=hash_621;
    while((_Bool)1) {
        if(        self->item_existance[it_622]) {
            if(            charp_equals(self->keys[it_622],key)) {
                __result362__ = gComeFunResultObject = __result_obj__ = self->items[it_622];
                /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result362__;
            }
            it_622++;
            if(            it_622>=self->size) {
                it_622=0;
            }
            else if(            it_622==hash_621) {
                __result363__ = gComeFunResultObject = __result_obj__ = default_value;
                /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result363__;
            }
        }
        else {
            __result364__ = gComeFunResultObject = __result_obj__ = default_value;
            /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result364__;
        }
    }
    __result365__ = gComeFunResultObject = __result_obj__ = default_value;
    /* U13 */default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result365__;
}

static void sClassNode_finalize(struct sClassNode* self){
char* __dec_obj192;
char* __dec_obj193;
struct sClass* __dec_obj194;
struct list$1sNodeph* __dec_obj195;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj192=self->sname;
            /*G*/ __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj193=self->mName;
            /*G*/ __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj194=self->mClass;
            come_call_finalizer3(__dec_obj194,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        if(        self->mMethods==gComeFunResultObject) {
            __dec_obj195=self->mMethods;
            come_call_finalizer3(__dec_obj195,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__=(void*)0;
struct sClassNode* __result368__;
void* __right_value563 = (void*)0;
struct sClassNode* result_633;
void* __right_value564 = (void*)0;
char* __dec_obj196;
void* __right_value565 = (void*)0;
char* __dec_obj197;
void* __right_value566 = (void*)0;
struct sClass* __dec_obj198;
void* __right_value567 = (void*)0;
struct list$1sNodeph* __dec_obj199;
struct sClassNode* __result369__;
    if(    self==(void*)0) {
        __result368__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    result_633=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "sClassNode"));
    if(    self!=((void*)0)) {
        result_633->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj196=result_633->sname;
        result_633->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_633->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj197=result_633->mName;
        result_633->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj198=result_633->mClass;
        result_633->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer3(__dec_obj198,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        __dec_obj199=result_633->mMethods;
        result_633->mMethods=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mMethods));
        come_call_finalizer3(__dec_obj199,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result369__ = gComeFunResultObject = __result_obj__ = result_633;
    /*i*/come_call_finalizer3(result_633,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool define_struct_634;
char* p_635;
int sline_636;
void* __right_value570 = (void*)0;
char* type_name_637;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
char* type_name_638;
void* __right_value575 = (void*)0;
struct sNode* __result372__;
void* __right_value576 = (void*)0;
struct sNode* __result373__;
    define_struct_634=(_Bool)0;
    {
        p_635=info->p;
        sline_636=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                type_name_637=(char*)come_increment_ref_count(parse_word(info));
                if(                parsecmp("extends",info)) {
                    ((char*)(__right_value571=parse_word(info)));
                    /* U11 */__right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    ((char*)(__right_value572=parse_word(info)));
                    /* U11 */__right_value572 = come_decrement_ref_count2(__right_value572, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==123) {
                    ((char*)(__right_value573=skip_block(info)));
                    /* U11 */__right_value573 = come_decrement_ref_count2(__right_value573, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(                    *info->p==59) {
                        define_struct_634=(_Bool)1;
                    }
                }
                /* U13 */type_name_637 = come_decrement_ref_count2(type_name_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_635;
        info->sline=sline_636;
    }
    if(    define_struct_634) {
        type_name_638=(char*)come_increment_ref_count(parse_word(info));
        __result372__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value575=parse_struct((char*)come_increment_ref_count(type_name_638),info)));
        /* U13 */type_name_638 = come_decrement_ref_count2(type_name_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(__right_value575) { __right_value575 = come_decrement_ref_count2(__right_value575, ((struct sNode*)__right_value575)->finalize, ((struct sNode*)__right_value575)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result372__;
        /* U13 */type_name_638 = come_decrement_ref_count2(type_name_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result373__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value576=string_node_v13(buf,head,head_sline,info)));
    if(__right_value576) { __right_value576 = come_decrement_ref_count2(__right_value576, ((struct sNode*)__right_value576)->finalize, ((struct sNode*)__right_value576)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result373__;
}

